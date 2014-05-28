#ifndef INCLUDED_sys_net_Address
#define INCLUDED_sys_net_Address

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(sys,net,Address)
namespace sys{
namespace net{


class HXCPP_CLASS_ATTRIBUTES  Address_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Address_obj OBJ_;
		Address_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Address_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Address_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Address"); }

		int host;
		int port;
};

} // end namespace sys
} // end namespace net

#endif /* INCLUDED_sys_net_Address */ 

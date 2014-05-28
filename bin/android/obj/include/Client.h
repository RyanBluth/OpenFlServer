#ifndef INCLUDED_Client
#define INCLUDED_Client

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Client)


class HXCPP_CLASS_ATTRIBUTES  Client_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Client_obj OBJ_;
		Client_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Client_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Client_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Client"); }

};


#endif /* INCLUDED_Client */ 

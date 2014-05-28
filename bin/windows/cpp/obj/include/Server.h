#ifndef INCLUDED_Server
#define INCLUDED_Server

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Server)


class HXCPP_CLASS_ATTRIBUTES  Server_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Server_obj OBJ_;
		Server_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Server_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Server_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Server"); }

};


#endif /* INCLUDED_Server */ 

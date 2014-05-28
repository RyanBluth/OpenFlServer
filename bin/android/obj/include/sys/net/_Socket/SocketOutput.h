#ifndef INCLUDED_sys_net__Socket_SocketOutput
#define INCLUDED_sys_net__Socket_SocketOutput

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <haxe/io/Output.h>
HX_DECLARE_CLASS2(haxe,io,Output)
HX_DECLARE_CLASS3(sys,net,_Socket,SocketOutput)
namespace sys{
namespace net{
namespace _Socket{


class HXCPP_CLASS_ATTRIBUTES  SocketOutput_obj : public ::haxe::io::Output_obj{
	public:
		typedef ::haxe::io::Output_obj super;
		typedef SocketOutput_obj OBJ_;
		SocketOutput_obj();
		Void __construct(Dynamic s);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< SocketOutput_obj > __new(Dynamic s);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SocketOutput_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("SocketOutput"); }

		Dynamic __s;
		virtual Void close( );

		static Dynamic socket_close;
		static Dynamic &socket_close_dyn() { return socket_close;}
};

} // end namespace sys
} // end namespace net
} // end namespace _Socket

#endif /* INCLUDED_sys_net__Socket_SocketOutput */ 

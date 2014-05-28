#include <hxcpp.h>

#ifndef INCLUDED_Server
#include <Server.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_sys_net_Host
#include <sys/net/Host.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif

Void Server_obj::__construct()
{
HX_STACK_FRAME("Server","new",0x59340d55,"Server.new","Server.hx",11,0x1acdb3bb)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(12)
	::sys::net::Socket s = ::sys::net::Socket_obj::__new();		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(13)
	::sys::net::Host _g = ::sys::net::Host_obj::__new(HX_CSTRING("0.0.0.0"));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(13)
	s->bind(_g,(int)2000);
	HX_STACK_LINE(14)
	s->listen((int)1);
	HX_STACK_LINE(15)
	::haxe::Log_obj::trace(HX_CSTRING("Starting server..."),hx::SourceInfo(HX_CSTRING("Server.hx"),15,HX_CSTRING("Server"),HX_CSTRING("new")));
	HX_STACK_LINE(16)
	while((true)){
		HX_STACK_LINE(17)
		::sys::net::Socket c = s->accept();		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(18)
		::haxe::Log_obj::trace(HX_CSTRING("Client connected..."),hx::SourceInfo(HX_CSTRING("Server.hx"),18,HX_CSTRING("Server"),HX_CSTRING("new")));
		HX_STACK_LINE(19)
		::String _g1 = ::Std_obj::string(s);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(19)
		c->write(_g1);
		HX_STACK_LINE(20)
		::String _g2 = c->peer()->__Field(HX_CSTRING("host"),true)->toString();		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(20)
		::String _g3 = (HX_CSTRING("your IP is ") + _g2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(20)
		::String _g4 = (_g3 + HX_CSTRING("\n"));		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(20)
		c->write(_g4);
		HX_STACK_LINE(21)
		c->write(HX_CSTRING("exit"));
		HX_STACK_LINE(22)
		c->close();
	}
}
;
	return null();
}

//Server_obj::~Server_obj() { }

Dynamic Server_obj::__CreateEmpty() { return  new Server_obj; }
hx::ObjectPtr< Server_obj > Server_obj::__new()
{  hx::ObjectPtr< Server_obj > result = new Server_obj();
	result->__construct();
	return result;}

Dynamic Server_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Server_obj > result = new Server_obj();
	result->__construct();
	return result;}


Server_obj::Server_obj()
{
}

Dynamic Server_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Server_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Server_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Server_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Server_obj::__mClass,"__mClass");
};

#endif

Class Server_obj::__mClass;

void Server_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Server"), hx::TCanCast< Server_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void Server_obj::__boot()
{
}


#include <hxcpp.h>

#ifndef INCLUDED_Client
#include <Client.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_sys_net_Host
#include <sys/net/Host.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif

Void Client_obj::__construct()
{
HX_STACK_FRAME("Client","new",0x1376f0dd,"Client.new","Client.hx",12,0x69b39933)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(13)
	::sys::net::Socket s = ::sys::net::Socket_obj::__new();		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(14)
	::sys::net::Host _g = ::sys::net::Host_obj::__new(HX_CSTRING("198.84.223.47"));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(14)
	s->connect(_g,(int)2000);
	HX_STACK_LINE(15)
	while((true)){
		HX_STACK_LINE(16)
		::String l = s->input->readLine();		HX_STACK_VAR(l,"l");
		HX_STACK_LINE(17)
		::haxe::Log_obj::trace(l,hx::SourceInfo(HX_CSTRING("Client.hx"),17,HX_CSTRING("Client"),HX_CSTRING("new")));
		HX_STACK_LINE(18)
		if (((l == HX_CSTRING("exit")))){
			HX_STACK_LINE(19)
			s->close();
			HX_STACK_LINE(20)
			break;
		}
	}
}
;
	return null();
}

//Client_obj::~Client_obj() { }

Dynamic Client_obj::__CreateEmpty() { return  new Client_obj; }
hx::ObjectPtr< Client_obj > Client_obj::__new()
{  hx::ObjectPtr< Client_obj > result = new Client_obj();
	result->__construct();
	return result;}

Dynamic Client_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Client_obj > result = new Client_obj();
	result->__construct();
	return result;}


Client_obj::Client_obj()
{
}

Dynamic Client_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic Client_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Client_obj::__GetFields(Array< ::String> &outFields)
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
	HX_MARK_MEMBER_NAME(Client_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Client_obj::__mClass,"__mClass");
};

#endif

Class Client_obj::__mClass;

void Client_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Client"), hx::TCanCast< Client_obj> ,sStaticFields,sMemberFields,
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

void Client_obj::__boot()
{
}


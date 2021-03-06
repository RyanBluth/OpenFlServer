#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_net_Host
#include <sys/net/Host.h>
#endif
#ifndef INCLUDED_sys_net_Socket
#include <sys/net/Socket.h>
#endif
#ifndef INCLUDED_sys_net__Socket_SocketInput
#include <sys/net/_Socket/SocketInput.h>
#endif
#ifndef INCLUDED_sys_net__Socket_SocketOutput
#include <sys/net/_Socket/SocketOutput.h>
#endif
namespace sys{
namespace net{

Void Socket_obj::__construct()
{
HX_STACK_FRAME("sys.net.Socket","new",0x202a8cf7,"sys.net.Socket.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/net/Socket.hx",127,0xa375f0f1)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(128)
	Dynamic _g = ::sys::net::Socket_obj::socket_new(false);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(128)
	this->__s = _g;
	HX_STACK_LINE(129)
	::sys::net::_Socket::SocketInput _g1 = ::sys::net::_Socket::SocketInput_obj::__new(this->__s);		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(129)
	this->input = _g1;
	HX_STACK_LINE(130)
	::sys::net::_Socket::SocketOutput _g2 = ::sys::net::_Socket::SocketOutput_obj::__new(this->__s);		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(130)
	this->output = _g2;
}
;
	return null();
}

//Socket_obj::~Socket_obj() { }

Dynamic Socket_obj::__CreateEmpty() { return  new Socket_obj; }
hx::ObjectPtr< Socket_obj > Socket_obj::__new()
{  hx::ObjectPtr< Socket_obj > result = new Socket_obj();
	result->__construct();
	return result;}

Dynamic Socket_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Socket_obj > result = new Socket_obj();
	result->__construct();
	return result;}

Void Socket_obj::close( ){
{
		HX_STACK_FRAME("sys.net.Socket","close",0x18d3680f,"sys.net.Socket.close","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/net/Socket.hx",133,0xa375f0f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(134)
		::sys::net::Socket_obj::socket_close(this->__s);
		HX_STACK_LINE(135)
		{
			HX_STACK_LINE(136)
			::sys::net::_Socket::SocketInput input = this->input;		HX_STACK_VAR(input,"input");
			HX_STACK_LINE(137)
			::sys::net::_Socket::SocketOutput output = this->output;		HX_STACK_VAR(output,"output");
			HX_STACK_LINE(138)
			input->__s = null();
			HX_STACK_LINE(139)
			output->__s = null();
		}
		HX_STACK_LINE(141)
		this->input->close();
		HX_STACK_LINE(142)
		this->output->close();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Socket_obj,close,(void))

Void Socket_obj::connect( ::sys::net::Host host,int port){
{
		HX_STACK_FRAME("sys.net.Socket","connect",0x1ee69001,"sys.net.Socket.connect","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/net/Socket.hx",156,0xa375f0f1)
		HX_STACK_THIS(this)
		HX_STACK_ARG(host,"host")
		HX_STACK_ARG(port,"port")
		HX_STACK_LINE(156)
		try
		{
		HX_STACK_CATCHABLE(::String, 0);
		{
			HX_STACK_LINE(157)
			::sys::net::Socket_obj::socket_connect(this->__s,host->ip,port);
		}
		}
		catch(Dynamic __e){
			if (__e.IsClass< ::String >() ){
				HX_STACK_BEGIN_CATCH
				::String s = __e;{
					HX_STACK_LINE(159)
					if (((s == HX_CSTRING("std@socket_connect")))){
						HX_STACK_LINE(160)
						::String _g = host->toString();		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(160)
						::String _g1 = (HX_CSTRING("Failed to connect on ") + _g);		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(160)
						::String _g2 = (_g1 + HX_CSTRING(":"));		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(160)
						HX_STACK_DO_THROW((_g2 + port));
					}
					else{
						HX_STACK_LINE(162)
						::cpp::Lib_obj::rethrow(s);
					}
				}
			}
			else {
			    HX_STACK_DO_THROW(__e);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Socket_obj,connect,(void))

Dynamic Socket_obj::socket_new;

Dynamic Socket_obj::socket_close;

Dynamic Socket_obj::socket_connect;


Socket_obj::Socket_obj()
{
}

void Socket_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Socket);
	HX_MARK_MEMBER_NAME(__s,"__s");
	HX_MARK_MEMBER_NAME(input,"input");
	HX_MARK_MEMBER_NAME(output,"output");
	HX_MARK_END_CLASS();
}

void Socket_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__s,"__s");
	HX_VISIT_MEMBER_NAME(input,"input");
	HX_VISIT_MEMBER_NAME(output,"output");
}

Dynamic Socket_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__s") ) { return __s; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { return input; }
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"output") ) { return output; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"connect") ) { return connect_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"socket_new") ) { return socket_new; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"socket_close") ) { return socket_close; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"socket_connect") ) { return socket_connect; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Socket_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__s") ) { __s=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"input") ) { input=inValue.Cast< ::haxe::io::Input >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"output") ) { output=inValue.Cast< ::haxe::io::Output >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"socket_new") ) { socket_new=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"socket_close") ) { socket_close=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"socket_connect") ) { socket_connect=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Socket_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__s"));
	outFields->push(HX_CSTRING("input"));
	outFields->push(HX_CSTRING("output"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("socket_new"),
	HX_CSTRING("socket_close"),
	HX_CSTRING("socket_connect"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Socket_obj,__s),HX_CSTRING("__s")},
	{hx::fsObject /*::haxe::io::Input*/ ,(int)offsetof(Socket_obj,input),HX_CSTRING("input")},
	{hx::fsObject /*::haxe::io::Output*/ ,(int)offsetof(Socket_obj,output),HX_CSTRING("output")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("__s"),
	HX_CSTRING("input"),
	HX_CSTRING("output"),
	HX_CSTRING("close"),
	HX_CSTRING("connect"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Socket_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Socket_obj::socket_new,"socket_new");
	HX_MARK_MEMBER_NAME(Socket_obj::socket_close,"socket_close");
	HX_MARK_MEMBER_NAME(Socket_obj::socket_connect,"socket_connect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Socket_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Socket_obj::socket_new,"socket_new");
	HX_VISIT_MEMBER_NAME(Socket_obj::socket_close,"socket_close");
	HX_VISIT_MEMBER_NAME(Socket_obj::socket_connect,"socket_connect");
};

#endif

Class Socket_obj::__mClass;

void Socket_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("sys.net.Socket"), hx::TCanCast< Socket_obj> ,sStaticFields,sMemberFields,
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

void Socket_obj::__boot()
{
	socket_new= ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("socket_new"),(int)1);
	socket_close= ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("socket_close"),(int)1);
	socket_connect= ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("socket_connect"),(int)3);
}

} // end namespace sys
} // end namespace net

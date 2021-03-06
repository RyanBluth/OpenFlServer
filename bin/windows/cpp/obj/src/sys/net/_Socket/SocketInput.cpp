#include <hxcpp.h>

#ifndef INCLUDED_cpp_Lib
#include <cpp/Lib.h>
#endif
#ifndef INCLUDED_haxe_io_Eof
#include <haxe/io/Eof.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_sys_net__Socket_SocketInput
#include <sys/net/_Socket/SocketInput.h>
#endif
namespace sys{
namespace net{
namespace _Socket{

Void SocketInput_obj::__construct(Dynamic s)
{
HX_STACK_FRAME("sys.net._Socket.SocketInput","new",0x5fe92abb,"sys.net._Socket.SocketInput.new","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/net/Socket.hx",31,0xa375f0f1)
HX_STACK_THIS(this)
HX_STACK_ARG(s,"s")
{
	HX_STACK_LINE(31)
	this->__s = s;
}
;
	return null();
}

//SocketInput_obj::~SocketInput_obj() { }

Dynamic SocketInput_obj::__CreateEmpty() { return  new SocketInput_obj; }
hx::ObjectPtr< SocketInput_obj > SocketInput_obj::__new(Dynamic s)
{  hx::ObjectPtr< SocketInput_obj > result = new SocketInput_obj();
	result->__construct(s);
	return result;}

Dynamic SocketInput_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< SocketInput_obj > result = new SocketInput_obj();
	result->__construct(inArgs[0]);
	return result;}

int SocketInput_obj::readByte( ){
	HX_STACK_FRAME("sys.net._Socket.SocketInput","readByte",0xee593543,"sys.net._Socket.SocketInput.readByte","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/net/Socket.hx",35,0xa375f0f1)
	HX_STACK_THIS(this)
	HX_STACK_LINE(35)
	try
	{
	HX_STACK_CATCHABLE(Dynamic, 0);
	{
		HX_STACK_LINE(36)
		return ::sys::net::_Socket::SocketInput_obj::socket_recv_char(this->__s);
	}
	}
	catch(Dynamic __e){
		{
			HX_STACK_BEGIN_CATCH
			Dynamic e = __e;{
				HX_STACK_LINE(38)
				if (((e == HX_CSTRING("Blocking")))){
					HX_STACK_LINE(39)
					HX_STACK_DO_THROW(::haxe::io::Error_obj::Blocked);
				}
				else{
					HX_STACK_LINE(40)
					if (((this->__s == null()))){
						HX_STACK_LINE(41)
						HX_STACK_DO_THROW(::haxe::io::Error_obj::Custom(e));
					}
					else{
						HX_STACK_LINE(43)
						HX_STACK_DO_THROW(::haxe::io::Eof_obj::__new());
					}
				}
			}
		}
	}
	HX_STACK_LINE(35)
	return (int)0;
}


Void SocketInput_obj::close( ){
{
		HX_STACK_FRAME("sys.net._Socket.SocketInput","close",0xbbc7fed3,"sys.net._Socket.SocketInput.close","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/net/Socket.hx",64,0xa375f0f1)
		HX_STACK_THIS(this)
		HX_STACK_LINE(65)
		this->super::close();
		HX_STACK_LINE(66)
		if (((this->__s != null()))){
			HX_STACK_LINE(66)
			::sys::net::_Socket::SocketInput_obj::socket_close(this->__s);
		}
	}
return null();
}


Dynamic SocketInput_obj::socket_recv_char;

Dynamic SocketInput_obj::socket_close;


SocketInput_obj::SocketInput_obj()
{
}

void SocketInput_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SocketInput);
	HX_MARK_MEMBER_NAME(__s,"__s");
	HX_MARK_END_CLASS();
}

void SocketInput_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(__s,"__s");
}

Dynamic SocketInput_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__s") ) { return __s; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return close_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"readByte") ) { return readByte_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"socket_close") ) { return socket_close; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"socket_recv_char") ) { return socket_recv_char; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic SocketInput_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"__s") ) { __s=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"socket_close") ) { socket_close=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"socket_recv_char") ) { socket_recv_char=inValue.Cast< Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SocketInput_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("__s"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("socket_recv_char"),
	HX_CSTRING("socket_close"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(SocketInput_obj,__s),HX_CSTRING("__s")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("__s"),
	HX_CSTRING("readByte"),
	HX_CSTRING("close"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SocketInput_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(SocketInput_obj::socket_recv_char,"socket_recv_char");
	HX_MARK_MEMBER_NAME(SocketInput_obj::socket_close,"socket_close");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SocketInput_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SocketInput_obj::socket_recv_char,"socket_recv_char");
	HX_VISIT_MEMBER_NAME(SocketInput_obj::socket_close,"socket_close");
};

#endif

Class SocketInput_obj::__mClass;

void SocketInput_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("sys.net._Socket.SocketInput"), hx::TCanCast< SocketInput_obj> ,sStaticFields,sMemberFields,
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

void SocketInput_obj::__boot()
{
	socket_recv_char= ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("socket_recv_char"),(int)1);
	socket_close= ::cpp::Lib_obj::load(HX_CSTRING("std"),HX_CSTRING("socket_close"),(int)1);
}

} // end namespace sys
} // end namespace net
} // end namespace _Socket

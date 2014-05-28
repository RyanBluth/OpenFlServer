#include <hxcpp.h>

#ifndef INCLUDED_sys_net_Address
#include <sys/net/Address.h>
#endif
namespace sys{
namespace net{

Void Address_obj::__construct()
{
HX_STACK_FRAME("sys.net.Address","new",0x3f906994,"sys.net.Address.new","C:\\HaxeToolkit\\haxe\\std/sys/net/Address.hx",30,0x71dc3577)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(31)
	this->host = (int)0;
	HX_STACK_LINE(32)
	this->port = (int)0;
}
;
	return null();
}

//Address_obj::~Address_obj() { }

Dynamic Address_obj::__CreateEmpty() { return  new Address_obj; }
hx::ObjectPtr< Address_obj > Address_obj::__new()
{  hx::ObjectPtr< Address_obj > result = new Address_obj();
	result->__construct();
	return result;}

Dynamic Address_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Address_obj > result = new Address_obj();
	result->__construct();
	return result;}


Address_obj::Address_obj()
{
}

Dynamic Address_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"host") ) { return host; }
		if (HX_FIELD_EQ(inName,"port") ) { return port; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Address_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"host") ) { host=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"port") ) { port=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Address_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("host"));
	outFields->push(HX_CSTRING("port"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Address_obj,host),HX_CSTRING("host")},
	{hx::fsInt,(int)offsetof(Address_obj,port),HX_CSTRING("port")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("host"),
	HX_CSTRING("port"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Address_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Address_obj::__mClass,"__mClass");
};

#endif

Class Address_obj::__mClass;

void Address_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("sys.net.Address"), hx::TCanCast< Address_obj> ,sStaticFields,sMemberFields,
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

void Address_obj::__boot()
{
}

} // end namespace sys
} // end namespace net

// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_Utf8
#include <haxe/Utf8.h>
#endif

namespace haxe{

void Utf8_obj::__construct() { }

Dynamic Utf8_obj::__CreateEmpty() { return new Utf8_obj; }

hx::ObjectPtr< Utf8_obj > Utf8_obj::__new()
{
	hx::ObjectPtr< Utf8_obj > _hx_result = new Utf8_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic Utf8_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Utf8_obj > _hx_result = new Utf8_obj();
	_hx_result->__construct();
	return _hx_result;
}

Int Utf8_obj::charCodeAt(::String s,Int index){
            	HX_STACK_FRAME("haxe.Utf8","charCodeAt",0xce7cbeab,"haxe.Utf8.charCodeAt","/usr/local/lib/haxe/std/cpp/_std/haxe/Utf8.hx",66,0xb2cec866)
            	HX_STACK_ARG(s,"s")
            	HX_STACK_ARG(index,"index")
HXLINE(  66)		return _hx_utf8_char_code_at(s,index);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Utf8_obj,charCodeAt,return )

Int Utf8_obj::length(::String s){
            	HX_STACK_FRAME("haxe.Utf8","length",0x88322e1b,"haxe.Utf8.length","/usr/local/lib/haxe/std/cpp/_std/haxe/Utf8.hx",74,0xb2cec866)
            	HX_STACK_ARG(s,"s")
HXLINE(  74)		return _hx_utf8_length(s);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Utf8_obj,length,return )


Utf8_obj::Utf8_obj()
{
}

bool Utf8_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { outValue = length_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"charCodeAt") ) { outValue = charCodeAt_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Utf8_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Utf8_obj_sStaticStorageInfo = 0;
#endif

static void Utf8_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Utf8_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Utf8_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Utf8_obj::__mClass,"__mClass");
};

#endif

hx::Class Utf8_obj::__mClass;

static ::String Utf8_obj_sStaticFields[] = {
	HX_HCSTRING("charCodeAt","\xf6","\xe6","\x54","\x35"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	::String(null())
};

void Utf8_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("haxe.Utf8","\x99","\x32","\x41","\xf3");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Utf8_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Utf8_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Utf8_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Utf8_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Utf8_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Utf8_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Utf8_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe

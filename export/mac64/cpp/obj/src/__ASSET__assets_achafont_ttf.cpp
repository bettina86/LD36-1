// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED___ASSET__assets_achafont_ttf
#include <__ASSET__assets_achafont_ttf.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_Font
#include <openfl/_legacy/text/Font.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_FontStyle
#include <openfl/_legacy/text/FontStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_FontType
#include <openfl/_legacy/text/FontType.h>
#endif


void __ASSET__assets_achafont_ttf_obj::__construct(){
            	HX_STACK_FRAME("__ASSET__assets_achafont_ttf","new",0x7000a0af,"__ASSET__assets_achafont_ttf.new","DefaultAssetLibrary.hx",585,0x0fc48912)
            	HX_STACK_THIS(this)
HXLINE( 585)		super::__construct(null(),null(),null());
HXDLIN( 585)		this->_hx___fontPath = HX_("assets/Achafont.ttf",8e,64,55,a4);
HXDLIN( 585)		this->fontName = HX_("A Charming Font",85,31,05,85);
            	}

Dynamic __ASSET__assets_achafont_ttf_obj::__CreateEmpty() { return new __ASSET__assets_achafont_ttf_obj; }

hx::ObjectPtr< __ASSET__assets_achafont_ttf_obj > __ASSET__assets_achafont_ttf_obj::__new()
{
	hx::ObjectPtr< __ASSET__assets_achafont_ttf_obj > _hx_result = new __ASSET__assets_achafont_ttf_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic __ASSET__assets_achafont_ttf_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< __ASSET__assets_achafont_ttf_obj > _hx_result = new __ASSET__assets_achafont_ttf_obj();
	_hx_result->__construct();
	return _hx_result;
}


__ASSET__assets_achafont_ttf_obj::__ASSET__assets_achafont_ttf_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *__ASSET__assets_achafont_ttf_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *__ASSET__assets_achafont_ttf_obj_sStaticStorageInfo = 0;
#endif

static void __ASSET__assets_achafont_ttf_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(__ASSET__assets_achafont_ttf_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void __ASSET__assets_achafont_ttf_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(__ASSET__assets_achafont_ttf_obj::__mClass,"__mClass");
};

#endif

hx::Class __ASSET__assets_achafont_ttf_obj::__mClass;

void __ASSET__assets_achafont_ttf_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("__ASSET__assets_achafont_ttf","\x3d","\x1d","\x81","\xbe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = __ASSET__assets_achafont_ttf_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< __ASSET__assets_achafont_ttf_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = __ASSET__assets_achafont_ttf_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = __ASSET__assets_achafont_ttf_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = __ASSET__assets_achafont_ttf_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}


// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_AssetCache
#include <openfl/_legacy/AssetCache.h>
#endif
#ifndef INCLUDED_openfl__legacy_IAssetCache
#include <openfl/_legacy/IAssetCache.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_Sound
#include <openfl/_legacy/media/Sound.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_Font
#include <openfl/_legacy/text/Font.h>
#endif

namespace openfl{
namespace _legacy{

void AssetCache_obj::__construct(){
            	HX_STACK_FRAME("openfl._legacy.AssetCache","new",0x60cebf28,"openfl._legacy.AssetCache.new","openfl/_legacy/Assets.hx",1447,0x9276b055)
            	HX_STACK_THIS(this)
HXLINE(1455)		this->_hx___enabled = true;
HXLINE(1460)		this->bitmapData =  ::haxe::ds::StringMap_obj::__new();
HXLINE(1461)		this->font =  ::haxe::ds::StringMap_obj::__new();
HXLINE(1462)		this->sound =  ::haxe::ds::StringMap_obj::__new();
            	}

Dynamic AssetCache_obj::__CreateEmpty() { return new AssetCache_obj; }

hx::ObjectPtr< AssetCache_obj > AssetCache_obj::__new()
{
	hx::ObjectPtr< AssetCache_obj > _hx_result = new AssetCache_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic AssetCache_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AssetCache_obj > _hx_result = new AssetCache_obj();
	_hx_result->__construct();
	return _hx_result;
}

static ::openfl::_legacy::IAssetCache_obj _hx_openfl__legacy_AssetCache__hx_openfl__legacy_IAssetCache= {
	( Bool (hx::Object::*)())&::openfl::_legacy::AssetCache_obj::get_enabled,
	( Bool (hx::Object::*)(Bool))&::openfl::_legacy::AssetCache_obj::set_enabled,
	( void (hx::Object::*)(::String))&::openfl::_legacy::AssetCache_obj::clear,
	(  ::openfl::_legacy::display::BitmapData (hx::Object::*)(::String))&::openfl::_legacy::AssetCache_obj::getBitmapData,
	(  ::openfl::_legacy::text::Font (hx::Object::*)(::String))&::openfl::_legacy::AssetCache_obj::getFont,
	(  ::openfl::_legacy::media::Sound (hx::Object::*)(::String))&::openfl::_legacy::AssetCache_obj::getSound,
	( Bool (hx::Object::*)(::String))&::openfl::_legacy::AssetCache_obj::hasBitmapData,
	( Bool (hx::Object::*)(::String))&::openfl::_legacy::AssetCache_obj::hasFont,
	( Bool (hx::Object::*)(::String))&::openfl::_legacy::AssetCache_obj::hasSound,
	( Bool (hx::Object::*)(::String))&::openfl::_legacy::AssetCache_obj::removeBitmapData,
	( Bool (hx::Object::*)(::String))&::openfl::_legacy::AssetCache_obj::removeFont,
	( Bool (hx::Object::*)(::String))&::openfl::_legacy::AssetCache_obj::removeSound,
	( void (hx::Object::*)(::String, ::openfl::_legacy::display::BitmapData))&::openfl::_legacy::AssetCache_obj::setBitmapData,
	( void (hx::Object::*)(::String, ::openfl::_legacy::text::Font))&::openfl::_legacy::AssetCache_obj::setFont,
	( void (hx::Object::*)(::String, ::openfl::_legacy::media::Sound))&::openfl::_legacy::AssetCache_obj::setSound,
};

void *AssetCache_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xef443e83: return &_hx_openfl__legacy_AssetCache__hx_openfl__legacy_IAssetCache;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void AssetCache_obj::clear(::String prefix){
            	HX_STACK_FRAME("openfl._legacy.AssetCache","clear",0xf085a255,"openfl._legacy.AssetCache.clear","openfl/_legacy/Assets.hx",1469,0x9276b055)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(prefix,"prefix")
HXLINE(1469)		Bool _hx_tmp = hx::IsNull( prefix );
HXDLIN(1469)		if (_hx_tmp) {
HXLINE(1471)			this->bitmapData =  ::haxe::ds::StringMap_obj::__new();
HXLINE(1472)			this->font =  ::haxe::ds::StringMap_obj::__new();
HXLINE(1473)			this->sound =  ::haxe::ds::StringMap_obj::__new();
            		}
            		else {
HXLINE(1477)			HX_VARI(  ::Dynamic,keys) = this->bitmapData->keys();
HXLINE(1479)			while(true){
HXLINE(1479)				Bool _hx_tmp1 = !(( (Bool)( ::Dynamic(keys->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic))()) ));
HXDLIN(1479)				if (_hx_tmp1) {
HXLINE(1479)					goto _hx_goto_0;
            				}
HXDLIN(1479)				HX_VARI( ::String,key) = ( (::String)( ::Dynamic(keys->__Field(HX_("next",f3,84,02,49),hx::paccDynamic))()) );
HXLINE(1481)				Bool _hx_tmp2 = ::StringTools_obj::startsWith(key,prefix);
HXDLIN(1481)				if (_hx_tmp2) {
HXLINE(1483)					this->bitmapData->remove(key);
            				}
            			}
            			_hx_goto_0:;
HXLINE(1489)			HX_VARI_NAME(  ::Dynamic,keys1,"keys") = this->font->keys();
HXLINE(1491)			while(true){
HXLINE(1491)				Bool _hx_tmp3 = !(( (Bool)( ::Dynamic(keys1->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic))()) ));
HXDLIN(1491)				if (_hx_tmp3) {
HXLINE(1491)					goto _hx_goto_1;
            				}
HXDLIN(1491)				HX_VARI_NAME( ::String,key1,"key") = ( (::String)( ::Dynamic(keys1->__Field(HX_("next",f3,84,02,49),hx::paccDynamic))()) );
HXLINE(1493)				Bool _hx_tmp4 = ::StringTools_obj::startsWith(key1,prefix);
HXDLIN(1493)				if (_hx_tmp4) {
HXLINE(1495)					this->font->remove(key1);
            				}
            			}
            			_hx_goto_1:;
HXLINE(1501)			HX_VARI_NAME(  ::Dynamic,keys2,"keys") = this->sound->keys();
HXLINE(1503)			while(true){
HXLINE(1503)				Bool _hx_tmp5 = !(( (Bool)( ::Dynamic(keys2->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic))()) ));
HXDLIN(1503)				if (_hx_tmp5) {
HXLINE(1503)					goto _hx_goto_2;
            				}
HXDLIN(1503)				HX_VARI_NAME( ::String,key2,"key") = ( (::String)( ::Dynamic(keys2->__Field(HX_("next",f3,84,02,49),hx::paccDynamic))()) );
HXLINE(1505)				Bool _hx_tmp6 = ::StringTools_obj::startsWith(key2,prefix);
HXDLIN(1505)				if (_hx_tmp6) {
HXLINE(1507)					this->sound->remove(key2);
            				}
            			}
            			_hx_goto_2:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,clear,(void))

 ::openfl::_legacy::display::BitmapData AssetCache_obj::getBitmapData(::String id){
            	HX_STACK_FRAME("openfl._legacy.AssetCache","getBitmapData",0x82a74ab7,"openfl._legacy.AssetCache.getBitmapData","openfl/_legacy/Assets.hx",1520,0x9276b055)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(id,"id")
HXLINE(1520)		return this->bitmapData->get(id).StaticCast<  ::openfl::_legacy::display::BitmapData >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,getBitmapData,return )

 ::openfl::_legacy::text::Font AssetCache_obj::getFont(::String id){
            	HX_STACK_FRAME("openfl._legacy.AssetCache","getFont",0xc1f1004d,"openfl._legacy.AssetCache.getFont","openfl/_legacy/Assets.hx",1527,0x9276b055)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(id,"id")
HXLINE(1527)		return this->font->get(id).StaticCast<  ::openfl::_legacy::text::Font >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,getFont,return )

 ::openfl::_legacy::media::Sound AssetCache_obj::getSound(::String id){
            	HX_STACK_FRAME("openfl._legacy.AssetCache","getSound",0x6d2a1891,"openfl._legacy.AssetCache.getSound","openfl/_legacy/Assets.hx",1534,0x9276b055)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(id,"id")
HXLINE(1534)		return this->sound->get(id).StaticCast<  ::openfl::_legacy::media::Sound >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,getSound,return )

Bool AssetCache_obj::hasBitmapData(::String id){
            	HX_STACK_FRAME("openfl._legacy.AssetCache","hasBitmapData",0x408ba67b,"openfl._legacy.AssetCache.hasBitmapData","openfl/_legacy/Assets.hx",1541,0x9276b055)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(id,"id")
HXLINE(1541)		return this->bitmapData->exists(id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,hasBitmapData,return )

Bool AssetCache_obj::hasFont(::String id){
            	HX_STACK_FRAME("openfl._legacy.AssetCache","hasFont",0xbeb27111,"openfl._legacy.AssetCache.hasFont","openfl/_legacy/Assets.hx",1548,0x9276b055)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(id,"id")
HXLINE(1548)		return this->font->exists(id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,hasFont,return )

Bool AssetCache_obj::hasSound(::String id){
            	HX_STACK_FRAME("openfl._legacy.AssetCache","hasSound",0x99ab534d,"openfl._legacy.AssetCache.hasSound","openfl/_legacy/Assets.hx",1555,0x9276b055)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(id,"id")
HXLINE(1555)		return this->sound->exists(id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,hasSound,return )

Bool AssetCache_obj::removeBitmapData(::String id){
            	HX_STACK_FRAME("openfl._legacy.AssetCache","removeBitmapData",0x839b4755,"openfl._legacy.AssetCache.removeBitmapData","openfl/_legacy/Assets.hx",1562,0x9276b055)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(id,"id")
HXLINE(1562)		return this->bitmapData->remove(id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,removeBitmapData,return )

Bool AssetCache_obj::removeFont(::String id){
            	HX_STACK_FRAME("openfl._legacy.AssetCache","removeFont",0x5927926b,"openfl._legacy.AssetCache.removeFont","openfl/_legacy/Assets.hx",1569,0x9276b055)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(id,"id")
HXLINE(1569)		return this->font->remove(id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,removeFont,return )

Bool AssetCache_obj::removeSound(::String id){
            	HX_STACK_FRAME("openfl._legacy.AssetCache","removeSound",0x25b360b3,"openfl._legacy.AssetCache.removeSound","openfl/_legacy/Assets.hx",1576,0x9276b055)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(id,"id")
HXLINE(1576)		return this->sound->remove(id);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,removeSound,return )

void AssetCache_obj::setBitmapData(::String id, ::openfl::_legacy::display::BitmapData bitmapData){
            	HX_STACK_FRAME("openfl._legacy.AssetCache","setBitmapData",0xc7ad2cc3,"openfl._legacy.AssetCache.setBitmapData","openfl/_legacy/Assets.hx",1583,0x9276b055)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(id,"id")
            	HX_STACK_ARG(bitmapData,"bitmapData")
HXLINE(1583)		this->bitmapData->set(id,bitmapData);
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetCache_obj,setBitmapData,(void))

void AssetCache_obj::setFont(::String id, ::openfl::_legacy::text::Font font){
            	HX_STACK_FRAME("openfl._legacy.AssetCache","setFont",0xb4f29159,"openfl._legacy.AssetCache.setFont","openfl/_legacy/Assets.hx",1590,0x9276b055)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(id,"id")
            	HX_STACK_ARG(font,"font")
HXLINE(1590)		this->font->set(id,font);
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetCache_obj,setFont,(void))

void AssetCache_obj::setSound(::String id, ::openfl::_legacy::media::Sound sound){
            	HX_STACK_FRAME("openfl._legacy.AssetCache","setSound",0x1b877205,"openfl._legacy.AssetCache.setSound","openfl/_legacy/Assets.hx",1597,0x9276b055)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(id,"id")
            	HX_STACK_ARG(sound,"sound")
HXLINE(1597)		this->sound->set(id,sound);
            	}


HX_DEFINE_DYNAMIC_FUNC2(AssetCache_obj,setSound,(void))

Bool AssetCache_obj::get_enabled(){
            	HX_STACK_FRAME("openfl._legacy.AssetCache","get_enabled",0xaade5b60,"openfl._legacy.AssetCache.get_enabled","openfl/_legacy/Assets.hx",1611,0x9276b055)
            	HX_STACK_THIS(this)
HXLINE(1611)		return this->_hx___enabled;
            	}


HX_DEFINE_DYNAMIC_FUNC0(AssetCache_obj,get_enabled,return )

Bool AssetCache_obj::set_enabled(Bool value){
            	HX_STACK_FRAME("openfl._legacy.AssetCache","set_enabled",0xb54b626c,"openfl._legacy.AssetCache.set_enabled","openfl/_legacy/Assets.hx",1618,0x9276b055)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(value,"value")
HXLINE(1618)		return (this->_hx___enabled = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(AssetCache_obj,set_enabled,return )


AssetCache_obj::AssetCache_obj()
{
}

void AssetCache_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetCache);
	HX_MARK_MEMBER_NAME(bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(font,"font");
	HX_MARK_MEMBER_NAME(sound,"sound");
	HX_MARK_MEMBER_NAME(_hx___enabled,"__enabled");
	HX_MARK_END_CLASS();
}

void AssetCache_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(font,"font");
	HX_VISIT_MEMBER_NAME(sound,"sound");
	HX_VISIT_MEMBER_NAME(_hx___enabled,"__enabled");
}

hx::Val AssetCache_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { return hx::Val( font); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { return hx::Val( sound); }
		if (HX_FIELD_EQ(inName,"clear") ) { return hx::Val( clear_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_enabled()); }
		if (HX_FIELD_EQ(inName,"getFont") ) { return hx::Val( getFont_dyn()); }
		if (HX_FIELD_EQ(inName,"hasFont") ) { return hx::Val( hasFont_dyn()); }
		if (HX_FIELD_EQ(inName,"setFont") ) { return hx::Val( setFont_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getSound") ) { return hx::Val( getSound_dyn()); }
		if (HX_FIELD_EQ(inName,"hasSound") ) { return hx::Val( hasSound_dyn()); }
		if (HX_FIELD_EQ(inName,"setSound") ) { return hx::Val( setSound_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__enabled") ) { return hx::Val( _hx___enabled); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return hx::Val( bitmapData); }
		if (HX_FIELD_EQ(inName,"removeFont") ) { return hx::Val( removeFont_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"removeSound") ) { return hx::Val( removeSound_dyn()); }
		if (HX_FIELD_EQ(inName,"get_enabled") ) { return hx::Val( get_enabled_dyn()); }
		if (HX_FIELD_EQ(inName,"set_enabled") ) { return hx::Val( set_enabled_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return hx::Val( getBitmapData_dyn()); }
		if (HX_FIELD_EQ(inName,"hasBitmapData") ) { return hx::Val( hasBitmapData_dyn()); }
		if (HX_FIELD_EQ(inName,"setBitmapData") ) { return hx::Val( setBitmapData_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"removeBitmapData") ) { return hx::Val( removeBitmapData_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val AssetCache_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"font") ) { font=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"sound") ) { sound=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"enabled") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_enabled(inValue) ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__enabled") ) { _hx___enabled=inValue.Cast< Bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { bitmapData=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetCache_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"));
	outFields->push(HX_HCSTRING("enabled","\x81","\x04","\x31","\x7e"));
	outFields->push(HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"));
	outFields->push(HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80"));
	outFields->push(HX_HCSTRING("__enabled","\x61","\x55","\x7f","\xff"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo AssetCache_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetCache_obj,bitmapData),HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetCache_obj,font),HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(AssetCache_obj,sound),HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80")},
	{hx::fsBool,(int)offsetof(AssetCache_obj,_hx___enabled),HX_HCSTRING("__enabled","\x61","\x55","\x7f","\xff")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *AssetCache_obj_sStaticStorageInfo = 0;
#endif

static ::String AssetCache_obj_sMemberFields[] = {
	HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"),
	HX_HCSTRING("font","\xcf","\x5d","\xc0","\x43"),
	HX_HCSTRING("sound","\xcf","\x8c","\xcc","\x80"),
	HX_HCSTRING("__enabled","\x61","\x55","\x7f","\xff"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("getBitmapData","\xef","\x11","\x33","\x90"),
	HX_HCSTRING("getFont","\x85","\x0d","\x43","\x16"),
	HX_HCSTRING("getSound","\x59","\x9c","\xa3","\xe0"),
	HX_HCSTRING("hasBitmapData","\xb3","\x6d","\x17","\x4e"),
	HX_HCSTRING("hasFont","\x49","\x7e","\x04","\x13"),
	HX_HCSTRING("hasSound","\x15","\xd7","\x24","\x0d"),
	HX_HCSTRING("removeBitmapData","\x1d","\xd3","\x69","\xed"),
	HX_HCSTRING("removeFont","\x33","\x98","\xdf","\xc0"),
	HX_HCSTRING("removeSound","\xeb","\x69","\x00","\x7f"),
	HX_HCSTRING("setBitmapData","\xfb","\xf3","\x38","\xd5"),
	HX_HCSTRING("setFont","\x91","\x9e","\x44","\x09"),
	HX_HCSTRING("setSound","\xcd","\xf5","\x00","\x8f"),
	HX_HCSTRING("get_enabled","\x98","\x64","\x2b","\x04"),
	HX_HCSTRING("set_enabled","\xa4","\x6b","\x98","\x0e"),
	::String(null()) };

static void AssetCache_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetCache_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AssetCache_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetCache_obj::__mClass,"__mClass");
};

#endif

hx::Class AssetCache_obj::__mClass;

void AssetCache_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.AssetCache","\x36","\x4b","\xee","\x8d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AssetCache_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(AssetCache_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AssetCache_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AssetCache_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AssetCache_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AssetCache_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _legacy

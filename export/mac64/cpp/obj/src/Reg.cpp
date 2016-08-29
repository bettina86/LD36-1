// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif


void Reg_obj::__construct() { }

Dynamic Reg_obj::__CreateEmpty() { return new Reg_obj; }

hx::ObjectPtr< Reg_obj > Reg_obj::__new()
{
	hx::ObjectPtr< Reg_obj > _hx_result = new Reg_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic Reg_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Reg_obj > _hx_result = new Reg_obj();
	_hx_result->__construct();
	return _hx_result;
}

 ::PlayState Reg_obj::state;

Int Reg_obj::children;

Float Reg_obj::timer;

Float Reg_obj::totalTime;


Reg_obj::Reg_obj()
{
}

bool Reg_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { outValue = state; return true; }
		if (HX_FIELD_EQ(inName,"timer") ) { outValue = timer; return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { outValue = children; return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"totalTime") ) { outValue = totalTime; return true; }
	}
	return false;
}

bool Reg_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"state") ) { state=ioValue.Cast<  ::PlayState >(); return true; }
		if (HX_FIELD_EQ(inName,"timer") ) { timer=ioValue.Cast< Float >(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"children") ) { children=ioValue.Cast< Int >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"totalTime") ) { totalTime=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Reg_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Reg_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::PlayState*/ ,(void *) &Reg_obj::state,HX_HCSTRING("state","\x11","\x76","\x0b","\x84")},
	{hx::fsInt,(void *) &Reg_obj::children,HX_HCSTRING("children","\x3f","\x19","\x6a","\x70")},
	{hx::fsFloat,(void *) &Reg_obj::timer,HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10")},
	{hx::fsFloat,(void *) &Reg_obj::totalTime,HX_HCSTRING("totalTime","\xf1","\x7d","\xb7","\x69")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Reg_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Reg_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Reg_obj::state,"state");
	HX_MARK_MEMBER_NAME(Reg_obj::children,"children");
	HX_MARK_MEMBER_NAME(Reg_obj::timer,"timer");
	HX_MARK_MEMBER_NAME(Reg_obj::totalTime,"totalTime");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Reg_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Reg_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Reg_obj::state,"state");
	HX_VISIT_MEMBER_NAME(Reg_obj::children,"children");
	HX_VISIT_MEMBER_NAME(Reg_obj::timer,"timer");
	HX_VISIT_MEMBER_NAME(Reg_obj::totalTime,"totalTime");
};

#endif

hx::Class Reg_obj::__mClass;

static ::String Reg_obj_sStaticFields[] = {
	HX_HCSTRING("state","\x11","\x76","\x0b","\x84"),
	HX_HCSTRING("children","\x3f","\x19","\x6a","\x70"),
	HX_HCSTRING("timer","\xc5","\xbf","\x35","\x10"),
	HX_HCSTRING("totalTime","\xf1","\x7d","\xb7","\x69"),
	::String(null())
};

void Reg_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Reg","\x34","\x91","\x3e","\x00");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Reg_obj::__GetStatic;
	__mClass->mSetStaticField = &Reg_obj::__SetStatic;
	__mClass->mMarkFunc = Reg_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Reg_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Reg_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Reg_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Reg_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Reg_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}


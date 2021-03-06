// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_SignalFrontEnd
#include <flixel/system/frontEnds/SignalFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal0
#include <flixel/util/_FlxSignal/FlxSignal0.h>
#endif

namespace flixel{
namespace util{

void FlxTimerManager_obj::__construct(){
            	HX_STACK_FRAME("flixel.util.FlxTimerManager","new",0x367f0c72,"flixel.util.FlxTimerManager.new","flixel/util/FlxTimer.hx",201,0x0a681e11)
            	HX_STACK_THIS(this)
HXLINE( 203)		this->_timers = ::Array_obj< ::Dynamic>::__new(0);
HXLINE( 210)		super::__construct();
HXLINE( 213)		this->set_visible(false);
HXLINE( 215)		::flixel::FlxG_obj::signals->stateSwitched->add(this->clear_dyn());
            	}

Dynamic FlxTimerManager_obj::__CreateEmpty() { return new FlxTimerManager_obj; }

hx::ObjectPtr< FlxTimerManager_obj > FlxTimerManager_obj::__new()
{
	hx::ObjectPtr< FlxTimerManager_obj > _hx_result = new FlxTimerManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic FlxTimerManager_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxTimerManager_obj > _hx_result = new FlxTimerManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

void FlxTimerManager_obj::destroy(){
            	HX_STACK_FRAME("flixel.util.FlxTimerManager","destroy",0xb435da0c,"flixel.util.FlxTimerManager.destroy","flixel/util/FlxTimer.hx",222,0x0a681e11)
            	HX_STACK_THIS(this)
HXLINE( 223)		::flixel::util::FlxArrayUtil_obj::clearArray(this->_timers,null());
HXLINE( 224)		this->_timers = null();
HXLINE( 225)		::flixel::FlxG_obj::signals->stateSwitched->remove(this->clear_dyn());
HXLINE( 226)		this->super::destroy();
            	}


void FlxTimerManager_obj::update(Float elapsed){
            	HX_STACK_FRAME("flixel.util.FlxTimerManager","update",0xf26da137,"flixel.util.FlxTimerManager.update","flixel/util/FlxTimer.hx",235,0x0a681e11)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(elapsed,"elapsed")
HXLINE( 235)		HX_VARI( Int,_g) = (int)0;
HXDLIN( 235)		HX_VARI( ::Array< ::Dynamic>,_g1) = this->_timers;
HXDLIN( 235)		while((_g < _g1->length)){
HXLINE( 235)			HX_VARI(  ::flixel::util::FlxTimer,timer) = _g1->__get(_g).StaticCast<  ::flixel::util::FlxTimer >();
HXDLIN( 235)			++_g;
HXLINE( 237)			Bool _hx_tmp;
HXDLIN( 237)			Bool _hx_tmp1;
HXDLIN( 237)			if (timer->active) {
HXLINE( 237)				_hx_tmp1 = !(timer->finished);
            			}
            			else {
HXLINE( 237)				_hx_tmp1 = false;
            			}
HXDLIN( 237)			if (_hx_tmp1) {
HXLINE( 237)				_hx_tmp = (timer->time >= (int)0);
            			}
            			else {
HXLINE( 237)				_hx_tmp = false;
            			}
HXDLIN( 237)			if (_hx_tmp) {
HXLINE( 239)				timer->update(elapsed);
            			}
            		}
            	}


void FlxTimerManager_obj::add( ::flixel::util::FlxTimer Timer){
            	HX_STACK_FRAME("flixel.util.FlxTimerManager","add",0x36752e33,"flixel.util.FlxTimerManager.add","flixel/util/FlxTimer.hx",253,0x0a681e11)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Timer,"Timer")
HXLINE( 253)		this->_timers->push(Timer);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTimerManager_obj,add,(void))

void FlxTimerManager_obj::remove( ::flixel::util::FlxTimer Timer){
            	HX_STACK_FRAME("flixel.util.FlxTimerManager","remove",0x6ff0b772,"flixel.util.FlxTimerManager.remove","flixel/util/FlxTimer.hx",266,0x0a681e11)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Timer,"Timer")
HXLINE( 266)		HX_VARI( ::Array< ::Dynamic>,array) = this->_timers;
HXDLIN( 266)		HX_VARI( Int,index) = array->indexOf(Timer,null());
HXDLIN( 266)		if ((index != (int)-1)) {
HXLINE( 266)			 ::flixel::util::FlxTimer _hx_tmp = array->__get((array->length - (int)1)).StaticCast<  ::flixel::util::FlxTimer >();
HXDLIN( 266)			array[index] = _hx_tmp;
HXDLIN( 266)			array->pop().StaticCast<  ::flixel::util::FlxTimer >();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTimerManager_obj,remove,(void))

void FlxTimerManager_obj::clear(){
            	HX_STACK_FRAME("flixel.util.FlxTimerManager","clear",0xccdb561f,"flixel.util.FlxTimerManager.clear","flixel/util/FlxTimer.hx",274,0x0a681e11)
            	HX_STACK_THIS(this)
HXLINE( 274)		::flixel::util::FlxArrayUtil_obj::clearArray(this->_timers,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTimerManager_obj,clear,(void))


FlxTimerManager_obj::FlxTimerManager_obj()
{
}

void FlxTimerManager_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTimerManager);
	HX_MARK_MEMBER_NAME(_timers,"_timers");
	 ::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTimerManager_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_timers,"_timers");
	 ::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

hx::Val FlxTimerManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn()); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return hx::Val( clear_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn()); }
		if (HX_FIELD_EQ(inName,"remove") ) { return hx::Val( remove_dyn()); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_timers") ) { return hx::Val( _timers); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxTimerManager_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"_timers") ) { _timers=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTimerManager_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_timers","\xad","\x1e","\x49","\x8d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxTimerManager_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxTimerManager_obj,_timers),HX_HCSTRING("_timers","\xad","\x1e","\x49","\x8d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxTimerManager_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTimerManager_obj_sMemberFields[] = {
	HX_HCSTRING("_timers","\xad","\x1e","\x49","\x8d"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	::String(null()) };

static void FlxTimerManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTimerManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxTimerManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTimerManager_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxTimerManager_obj::__mClass;

void FlxTimerManager_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.util.FlxTimerManager","\x80","\xab","\xc7","\xef");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxTimerManager_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxTimerManager_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxTimerManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxTimerManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTimerManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTimerManager_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace util

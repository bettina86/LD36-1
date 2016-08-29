// Generated by Haxe 3.3.0
#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_EndState
#include <EndState.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif

static const Int _hx_array_data_0[] = {
	(Int)38,(Int)87,
};
static const Int _hx_array_data_1[] = {
	(Int)40,(Int)83,
};
static const Int _hx_array_data_2[] = {
	(Int)37,(Int)65,
};
static const Int _hx_array_data_3[] = {
	(Int)39,(Int)68,
};

void Player_obj::__construct( ::Dynamic __o_X, ::Dynamic __o_Y){
 ::Dynamic X = __o_X.Default(0);
 ::Dynamic Y = __o_Y.Default(0);
            	HX_STACK_FRAME("Player","new",0x8d5554f3,"Player.new","Player.hx",11,0xa27fc9dd)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(X,"X")
            	HX_STACK_ARG(Y,"Y")
HXLINE(  21)		this->_vv = (int)800;
HXLINE(  20)		this->_vx = (int)0;
HXLINE(  19)		this->_vy = (int)0;
HXLINE(  17)		this->_right = false;
HXLINE(  16)		this->_left = false;
HXLINE(  15)		this->_down = false;
HXLINE(  14)		this->_up = false;
HXLINE(  13)		this->speed = ((Float)200);
HXLINE(  26)		super::__construct(X,Y,null());
HXLINE(  28)		this->loadGraphic(HX_("assets/images/player.png",87,88,81,c6),null(),null(),null(),null(),null());
HXLINE(  29)		this->scale->set(((Float)0.5),((Float)0.5));
HXLINE(  30)		this->updateHitbox();
HXLINE(  36)		Float _hx_tmp = this->drag->set_y((int)1600);
HXDLIN(  36)		this->drag->set_x(_hx_tmp);
HXLINE(  37)		this->angularDrag = (int)1600;
HXLINE(  42)		this->maxAngular = (int)1000;
            	}

Dynamic Player_obj::__CreateEmpty() { return new Player_obj; }

hx::ObjectPtr< Player_obj > Player_obj::__new( ::Dynamic __o_X, ::Dynamic __o_Y)
{
	hx::ObjectPtr< Player_obj > _hx_result = new Player_obj();
	_hx_result->__construct(__o_X,__o_Y);
	return _hx_result;
}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Player_obj > _hx_result = new Player_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

void Player_obj::update(Float elapsed){
            	HX_STACK_FRAME("Player","update",0xf1f8df56,"Player.update","Player.hx",46,0xa27fc9dd)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(elapsed,"elapsed")
HXLINE(  51)		this->movement();
HXLINE(  54)		this->super::update(elapsed);
            	}


void Player_obj::movement(){
            	HX_STACK_FRAME("Player","movement",0x91ad8bbc,"Player.movement","Player.hx",58,0xa27fc9dd)
            	HX_STACK_THIS(this)
HXLINE(  59)		this->_up = ::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< Int >::fromData( _hx_array_data_0,2),(int)1);
HXLINE(  60)		this->_down = ::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< Int >::fromData( _hx_array_data_1,2),(int)1);
HXLINE(  61)		this->_left = ::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< Int >::fromData( _hx_array_data_2,2),(int)1);
HXLINE(  62)		this->_right = ::flixel::FlxG_obj::keys->checkKeyArrayState(::Array_obj< Int >::fromData( _hx_array_data_3,2),(int)1);
HXLINE(  64)		this->acceleration->set_y((int)200);
HXLINE(  66)		Bool _hx_tmp = this->_up;
HXDLIN(  66)		if (_hx_tmp) {
HXLINE(  67)			this->acceleration->set_y((int)-500);
            		}
HXLINE(  76)		Bool _hx_tmp1 = (this->angle > (int)180);
HXDLIN(  76)		if (_hx_tmp1) {
HXLINE(  77)			Float _hx_tmp2 = (this->angle - (int)360);
HXDLIN(  77)			this->set_angle(_hx_tmp2);
            		}
            		else {
HXLINE(  78)			Bool _hx_tmp3 = (this->angle < (int)-180);
HXDLIN(  78)			if (_hx_tmp3) {
HXLINE(  79)				Float _hx_tmp4 = (this->angle + (int)360);
HXDLIN(  79)				this->set_angle(_hx_tmp4);
            			}
            		}
HXLINE(  81)		Bool _hx_tmp5 = (this->y > (int)200);
HXDLIN(  81)		if (_hx_tmp5) {
HXLINE(  83)			HX_VARI( Int,a) = ::Std_obj::_hx_int(this->acceleration->y);
HXDLIN(  83)			Int _hx_tmp6;
HXDLIN(  83)			if ((a > (int)0)) {
HXLINE(  83)				_hx_tmp6 = (int)0;
            			}
            			else {
HXLINE(  83)				_hx_tmp6 = a;
            			}
HXDLIN(  83)			this->acceleration->set_y(_hx_tmp6);
HXLINE(  84)			HX_VARI_NAME( Int,a1,"a") = ::Std_obj::_hx_int(this->velocity->y);
HXDLIN(  84)			Int _hx_tmp7;
HXDLIN(  84)			if ((a1 > (int)0)) {
HXLINE(  84)				_hx_tmp7 = (int)0;
            			}
            			else {
HXLINE(  84)				_hx_tmp7 = a1;
            			}
HXDLIN(  84)			this->velocity->set_y(_hx_tmp7);
HXLINE(  85)			this->velocity->set_x((int)0);
HXLINE(  86)			this->angularAcceleration = (int)0;
HXLINE(  87)			this->angularVelocity = (int)0;
HXLINE(  88)			this->set_y((int)201);
HXLINE(  89)			Bool _hx_tmp8;
HXDLIN(  89)			if (!((this->angle > (int)100))) {
HXLINE(  89)				_hx_tmp8 = (this->angle < (int)-100);
            			}
            			else {
HXLINE(  89)				_hx_tmp8 = true;
            			}
HXDLIN(  89)			if (_hx_tmp8) {
HXLINE(  90)				HX_VARI(  ::flixel::FlxState,nextState) =  ::EndState_obj::__new(null());
HXDLIN(  90)				Bool _hx_tmp9 = ::flixel::FlxG_obj::game->_state->switchTo(nextState);
HXDLIN(  90)				if (_hx_tmp9) {
HXLINE(  90)					::flixel::FlxG_obj::game->_requestedState = nextState;
            				}
            			}
            		}
            		else {
HXLINE(  94)			Bool _hx_tmp10 = this->_right;
HXDLIN(  94)			if (_hx_tmp10) {
HXLINE(  95)				this->angularAcceleration = this->speed;
            			}
            			else {
HXLINE(  96)				Bool _hx_tmp11 = this->_left;
HXDLIN(  96)				if (_hx_tmp11) {
HXLINE(  97)					this->angularAcceleration = -(this->speed);
            				}
            				else {
HXLINE(  99)					this->angularAcceleration = (int)0;
            				}
            			}
HXLINE( 101)			{
HXLINE( 101)				HX_VARI(  ::Player,_g) = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 101)				Float _hx_tmp12 = (_g->angle + ((Float)this->angle / (Float)(int)100));
HXDLIN( 101)				_g->set_angle(_hx_tmp12);
            			}
HXLINE( 102)			Float _hx_tmp13 = (this->_vv + ((Float)this->angle / (Float)(int)10));
HXDLIN( 102)			HX_VARI_NAME( Int,a2,"a") = ::Std_obj::_hx_int(_hx_tmp13);
HXDLIN( 102)			HX_VAR_NAME( Int,a3,"a");
HXDLIN( 102)			if ((a2 > (int)100)) {
HXLINE( 102)				a3 = (int)100;
            			}
            			else {
HXLINE( 102)				a3 = a2;
            			}
HXDLIN( 102)			Int _hx_tmp14;
HXDLIN( 102)			if ((a3 > (int)-100)) {
HXLINE( 102)				_hx_tmp14 = a3;
            			}
            			else {
HXLINE( 102)				_hx_tmp14 = (int)-100;
            			}
HXDLIN( 102)			this->_vv = _hx_tmp14;
HXLINE( 104)			Float Angle = this->angle;
HXDLIN( 104)			HX_VARI( Float,Speed) = this->_vv;
HXDLIN( 104)			HX_VARI_NAME( Float,a4,"a") = (Angle * ((Float)::Math_obj::PI / (Float)(int)180));
HXDLIN( 104)			Float _hx_tmp15 = ::Math_obj::cos(a4);
HXDLIN( 104)			Float X = (_hx_tmp15 * Speed);
HXDLIN( 104)			Float _hx_tmp16 = ::Math_obj::sin(a4);
HXDLIN( 104)			HX_VARI(  ::flixel::math::FlxPoint,point) = ::flixel::math::FlxPoint_obj::_pool->get()->set(X,(_hx_tmp16 * Speed));
HXDLIN( 104)			point->_inPool = false;
HXLINE( 105)			{
HXLINE( 105)				HX_VARI_NAME(  ::flixel::math::FlxPoint,_g1,"_g") = this->velocity;
HXDLIN( 105)				Float _hx_tmp17 = (_g1->x + ((Float)point->x / (Float)(int)3));
HXDLIN( 105)				_g1->set_x(_hx_tmp17);
            			}
HXLINE( 106)			{
HXLINE( 106)				HX_VARI_NAME(  ::flixel::math::FlxPoint,_g2,"_g") = this->velocity;
HXDLIN( 106)				Float _hx_tmp18 = (_g2->y + ((Float)point->y / (Float)(int)10));
HXDLIN( 106)				_g2->set_y(_hx_tmp18);
            			}
HXLINE( 108)			HX_VARI_NAME( Int,a5,"a") = ::Std_obj::_hx_int(this->velocity->x);
HXDLIN( 108)			HX_VAR_NAME( Int,a6,"a");
HXDLIN( 108)			if ((a5 > (int)500)) {
HXLINE( 108)				a6 = (int)500;
            			}
            			else {
HXLINE( 108)				a6 = a5;
            			}
HXDLIN( 108)			Int _hx_tmp19;
HXDLIN( 108)			if ((a6 > (int)-500)) {
HXLINE( 108)				_hx_tmp19 = a6;
            			}
            			else {
HXLINE( 108)				_hx_tmp19 = (int)-500;
            			}
HXDLIN( 108)			this->velocity->set_x(_hx_tmp19);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,movement,(void))


Player_obj::Player_obj()
{
}

hx::Val Player_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_up") ) { return hx::Val( _up); }
		if (HX_FIELD_EQ(inName,"_vy") ) { return hx::Val( _vy); }
		if (HX_FIELD_EQ(inName,"_vx") ) { return hx::Val( _vx); }
		if (HX_FIELD_EQ(inName,"_vv") ) { return hx::Val( _vv); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { return hx::Val( speed); }
		if (HX_FIELD_EQ(inName,"_down") ) { return hx::Val( _down); }
		if (HX_FIELD_EQ(inName,"_left") ) { return hx::Val( _left); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_right") ) { return hx::Val( _right); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"movement") ) { return hx::Val( movement_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Player_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_up") ) { _up=inValue.Cast< Bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vy") ) { _vy=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vx") ) { _vx=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_vv") ) { _vv=inValue.Cast< Int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"speed") ) { speed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_down") ) { _down=inValue.Cast< Bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_left") ) { _left=inValue.Cast< Bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_right") ) { _right=inValue.Cast< Bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("speed","\x87","\x97","\x69","\x81"));
	outFields->push(HX_HCSTRING("_up","\x7a","\x7c","\x48","\x00"));
	outFields->push(HX_HCSTRING("_down","\x41","\x14","\x7f","\xf5"));
	outFields->push(HX_HCSTRING("_left","\xe6","\x23","\xc1","\xfa"));
	outFields->push(HX_HCSTRING("_right","\x1d","\x53","\x4b","\xe5"));
	outFields->push(HX_HCSTRING("_vy","\x62","\x7d","\x48","\x00"));
	outFields->push(HX_HCSTRING("_vx","\x61","\x7d","\x48","\x00"));
	outFields->push(HX_HCSTRING("_vv","\x5f","\x7d","\x48","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Player_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(Player_obj,speed),HX_HCSTRING("speed","\x87","\x97","\x69","\x81")},
	{hx::fsBool,(int)offsetof(Player_obj,_up),HX_HCSTRING("_up","\x7a","\x7c","\x48","\x00")},
	{hx::fsBool,(int)offsetof(Player_obj,_down),HX_HCSTRING("_down","\x41","\x14","\x7f","\xf5")},
	{hx::fsBool,(int)offsetof(Player_obj,_left),HX_HCSTRING("_left","\xe6","\x23","\xc1","\xfa")},
	{hx::fsBool,(int)offsetof(Player_obj,_right),HX_HCSTRING("_right","\x1d","\x53","\x4b","\xe5")},
	{hx::fsInt,(int)offsetof(Player_obj,_vy),HX_HCSTRING("_vy","\x62","\x7d","\x48","\x00")},
	{hx::fsInt,(int)offsetof(Player_obj,_vx),HX_HCSTRING("_vx","\x61","\x7d","\x48","\x00")},
	{hx::fsInt,(int)offsetof(Player_obj,_vv),HX_HCSTRING("_vv","\x5f","\x7d","\x48","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Player_obj_sStaticStorageInfo = 0;
#endif

static ::String Player_obj_sMemberFields[] = {
	HX_HCSTRING("speed","\x87","\x97","\x69","\x81"),
	HX_HCSTRING("_up","\x7a","\x7c","\x48","\x00"),
	HX_HCSTRING("_down","\x41","\x14","\x7f","\xf5"),
	HX_HCSTRING("_left","\xe6","\x23","\xc1","\xfa"),
	HX_HCSTRING("_right","\x1d","\x53","\x4b","\xe5"),
	HX_HCSTRING("_vy","\x62","\x7d","\x48","\x00"),
	HX_HCSTRING("_vx","\x61","\x7d","\x48","\x00"),
	HX_HCSTRING("_vv","\x5f","\x7d","\x48","\x00"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("movement","\x2f","\x85","\x37","\x00"),
	::String(null()) };

static void Player_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Player_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#endif

hx::Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Player_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Player_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Player_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Player_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Player_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Player_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

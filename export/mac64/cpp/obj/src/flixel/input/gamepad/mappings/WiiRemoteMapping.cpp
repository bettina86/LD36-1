// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAnalogStick
#include <flixel/input/gamepad/FlxGamepadAnalogStick.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadAttachment
#include <flixel/input/gamepad/FlxGamepadAttachment.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_id_WiiRemoteID
#include <flixel/input/gamepad/id/WiiRemoteID.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
#ifndef INCLUDED_flixel_input_gamepad_mappings_WiiRemoteMapping
#include <flixel/input/gamepad/mappings/WiiRemoteMapping.h>
#endif

namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{

void WiiRemoteMapping_obj::__construct(::hx::EnumBase attachment){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","new",0x74d6fe89,"flixel.input.gamepad.mappings.WiiRemoteMapping.new","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",7,0xc69520e9)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(attachment,"attachment")
HXLINE(   7)		super::__construct(attachment);
            	}

Dynamic WiiRemoteMapping_obj::__CreateEmpty() { return new WiiRemoteMapping_obj; }

hx::ObjectPtr< WiiRemoteMapping_obj > WiiRemoteMapping_obj::__new(::hx::EnumBase attachment)
{
	hx::ObjectPtr< WiiRemoteMapping_obj > _hx_result = new WiiRemoteMapping_obj();
	_hx_result->__construct(attachment);
	return _hx_result;
}

Dynamic WiiRemoteMapping_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< WiiRemoteMapping_obj > _hx_result = new WiiRemoteMapping_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

void WiiRemoteMapping_obj::initValues(){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","initValues",0xff6f3809,"flixel.input.gamepad.mappings.WiiRemoteMapping.initValues","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",17,0xc69520e9)
            	HX_STACK_THIS(this)
HXLINE(  18)		this->supportsMotion = true;
HXLINE(  20)		this->supportsPointer = false;
            	}


Int WiiRemoteMapping_obj::getID(Int rawID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","getID",0x8faa5c5a,"flixel.input.gamepad.mappings.WiiRemoteMapping.getID","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",25,0xc69520e9)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rawID,"rawID")
HXLINE(  25)		Int _hx_tmp = ( ( ::hx::EnumBase)(this->attachment) )->_hx_getIndex();
HXDLIN(  25)		switch((int)(_hx_tmp)){
            			case (int)0: {
HXLINE(  25)				return this->getIDNunchuk(rawID);
            			}
            			break;
            			case (int)1: {
HXLINE(  25)				return this->getIDClassicController(rawID);
            			}
            			break;
            			case (int)2: {
HXLINE(  25)				return this->getIDDefault(rawID);
            			}
            			break;
            		}
HXDLIN(  25)		return null();
            	}


Int WiiRemoteMapping_obj::getIDClassicController(Int rawID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","getIDClassicController",0xe5d4d794,"flixel.input.gamepad.mappings.WiiRemoteMapping.getIDClassicController","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",35,0xc69520e9)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rawID,"rawID")
HXLINE(  35)		switch((int)(rawID)){
            			case (int)0: {
HXLINE(  35)				return (int)1;
            			}
            			break;
            			case (int)1: {
HXLINE(  35)				return (int)0;
            			}
            			break;
            			case (int)2: {
HXLINE(  35)				return (int)2;
            			}
            			break;
            			case (int)3: {
HXLINE(  35)				return (int)3;
            			}
            			break;
            			case (int)4: {
HXLINE(  35)				return (int)17;
            			}
            			break;
            			case (int)5: {
HXLINE(  35)				return (int)18;
            			}
            			break;
            			case (int)6: {
HXLINE(  35)				return (int)4;
            			}
            			break;
            			case (int)7: {
HXLINE(  35)				return (int)5;
            			}
            			break;
            			case (int)8: {
HXLINE(  35)				return (int)7;
            			}
            			break;
            			case (int)9: {
HXLINE(  35)				return (int)6;
            			}
            			break;
            			case (int)10: {
HXLINE(  35)				return (int)10;
            			}
            			break;
            			case (int)11: {
HXLINE(  35)				return (int)30;
            			}
            			break;
            			case (int)12: {
HXLINE(  35)				return (int)31;
            			}
            			break;
            			case (int)24: {
HXLINE(  35)				return (int)12;
            			}
            			break;
            			case (int)25: {
HXLINE(  35)				return (int)11;
            			}
            			break;
            			case (int)26: {
HXLINE(  35)				return (int)13;
            			}
            			break;
            			case (int)27: {
HXLINE(  35)				return (int)14;
            			}
            			break;
            			default:{
HXLINE(  35)				return (int)-1;
            			}
            		}
HXDLIN(  35)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(WiiRemoteMapping_obj,getIDClassicController,return )

Int WiiRemoteMapping_obj::getIDNunchuk(Int rawID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","getIDNunchuk",0x6173e8c8,"flixel.input.gamepad.mappings.WiiRemoteMapping.getIDNunchuk","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",69,0xc69520e9)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rawID,"rawID")
HXLINE(  69)		switch((int)(rawID)){
            			case (int)0: {
HXLINE(  69)				return (int)0;
            			}
            			break;
            			case (int)1: {
HXLINE(  69)				return (int)1;
            			}
            			break;
            			case (int)2: {
HXLINE(  69)				return (int)4;
            			}
            			break;
            			case (int)3: {
HXLINE(  69)				return (int)17;
            			}
            			break;
            			case (int)4: {
HXLINE(  69)				return (int)2;
            			}
            			break;
            			case (int)5: {
HXLINE(  69)				return (int)3;
            			}
            			break;
            			case (int)6: {
HXLINE(  69)				return (int)7;
            			}
            			break;
            			case (int)7: {
HXLINE(  69)				return (int)6;
            			}
            			break;
            			case (int)8: {
HXLINE(  69)				return (int)10;
            			}
            			break;
            			case (int)28: {
HXLINE(  69)				return (int)12;
            			}
            			break;
            			case (int)29: {
HXLINE(  69)				return (int)11;
            			}
            			break;
            			case (int)30: {
HXLINE(  69)				return (int)13;
            			}
            			break;
            			case (int)31: {
HXLINE(  69)				return (int)14;
            			}
            			break;
            			default:{
HXLINE(  69)				return (int)-1;
            			}
            		}
HXDLIN(  69)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(WiiRemoteMapping_obj,getIDNunchuk,return )

Int WiiRemoteMapping_obj::getIDDefault(Int rawID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","getIDDefault",0xbf6a4387,"flixel.input.gamepad.mappings.WiiRemoteMapping.getIDDefault","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",95,0xc69520e9)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(rawID,"rawID")
HXLINE(  95)		switch((int)(rawID)){
            			case (int)0: {
HXLINE(  95)				return (int)2;
            			}
            			break;
            			case (int)1: {
HXLINE(  95)				return (int)3;
            			}
            			break;
            			case (int)2: {
HXLINE(  95)				return (int)0;
            			}
            			break;
            			case (int)3: {
HXLINE(  95)				return (int)1;
            			}
            			break;
            			case (int)4: {
HXLINE(  95)				return (int)7;
            			}
            			break;
            			case (int)5: {
HXLINE(  95)				return (int)6;
            			}
            			break;
            			case (int)6: {
HXLINE(  95)				return (int)10;
            			}
            			break;
            			case (int)14: {
HXLINE(  95)				return (int)11;
            			}
            			break;
            			case (int)15: {
HXLINE(  95)				return (int)12;
            			}
            			break;
            			case (int)16: {
HXLINE(  95)				return (int)13;
            			}
            			break;
            			case (int)17: {
HXLINE(  95)				return (int)14;
            			}
            			break;
            			default:{
HXLINE(  95)				return (int)-1;
            			}
            		}
HXDLIN(  95)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(WiiRemoteMapping_obj,getIDDefault,return )

Int WiiRemoteMapping_obj::getRawID(Int ID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","getRawID",0x63d54c84,"flixel.input.gamepad.mappings.WiiRemoteMapping.getRawID","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",114,0xc69520e9)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE( 114)		Int _hx_tmp = ( ( ::hx::EnumBase)(this->attachment) )->_hx_getIndex();
HXDLIN( 114)		switch((int)(_hx_tmp)){
            			case (int)0: {
HXLINE( 114)				return this->getRawNunchuk(ID);
            			}
            			break;
            			case (int)1: {
HXLINE( 114)				return this->getRawClassicController(ID);
            			}
            			break;
            			case (int)2: {
HXLINE( 114)				return this->getRawDefault(ID);
            			}
            			break;
            		}
HXDLIN( 114)		return (int)0;
            	}


Int WiiRemoteMapping_obj::getRawClassicController(Int ID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","getRawClassicController",0x484852a5,"flixel.input.gamepad.mappings.WiiRemoteMapping.getRawClassicController","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",124,0xc69520e9)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE( 124)		switch((int)(ID)){
            			case (int)0: {
HXLINE( 124)				return (int)1;
            			}
            			break;
            			case (int)1: {
HXLINE( 124)				return (int)0;
            			}
            			break;
            			case (int)2: {
HXLINE( 124)				return (int)2;
            			}
            			break;
            			case (int)3: {
HXLINE( 124)				return (int)3;
            			}
            			break;
            			case (int)4: {
HXLINE( 124)				return (int)6;
            			}
            			break;
            			case (int)5: {
HXLINE( 124)				return (int)7;
            			}
            			break;
            			case (int)6: {
HXLINE( 124)				return (int)9;
            			}
            			break;
            			case (int)7: {
HXLINE( 124)				return (int)8;
            			}
            			break;
            			case (int)10: {
HXLINE( 124)				return (int)10;
            			}
            			break;
            			case (int)11: {
HXLINE( 124)				return (int)25;
            			}
            			break;
            			case (int)12: {
HXLINE( 124)				return (int)24;
            			}
            			break;
            			case (int)13: {
HXLINE( 124)				return (int)26;
            			}
            			break;
            			case (int)14: {
HXLINE( 124)				return (int)27;
            			}
            			break;
            			case (int)17: {
HXLINE( 124)				return (int)4;
            			}
            			break;
            			case (int)18: {
HXLINE( 124)				return (int)5;
            			}
            			break;
            			case (int)30: {
HXLINE( 124)				return (int)11;
            			}
            			break;
            			case (int)31: {
HXLINE( 124)				return (int)12;
            			}
            			break;
            			case (int)34: {
HXLINE( 124)				return ::flixel::input::gamepad::id::WiiRemoteID_obj::LEFT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)35: {
HXLINE( 124)				return ::flixel::input::gamepad::id::WiiRemoteID_obj::LEFT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)36: {
HXLINE( 124)				return ::flixel::input::gamepad::id::WiiRemoteID_obj::LEFT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)37: {
HXLINE( 124)				return ::flixel::input::gamepad::id::WiiRemoteID_obj::LEFT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			case (int)38: {
HXLINE( 124)				return ::flixel::input::gamepad::id::WiiRemoteID_obj::RIGHT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)39: {
HXLINE( 124)				return ::flixel::input::gamepad::id::WiiRemoteID_obj::RIGHT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)40: {
HXLINE( 124)				return ::flixel::input::gamepad::id::WiiRemoteID_obj::RIGHT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)41: {
HXLINE( 124)				return ::flixel::input::gamepad::id::WiiRemoteID_obj::RIGHT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			default:{
HXLINE( 124)				return (int)-1;
            			}
            		}
HXDLIN( 124)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(WiiRemoteMapping_obj,getRawClassicController,return )

Int WiiRemoteMapping_obj::getRawNunchuk(Int ID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","getRawNunchuk",0x7dce1499,"flixel.input.gamepad.mappings.WiiRemoteMapping.getRawNunchuk","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",157,0xc69520e9)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE( 157)		switch((int)(ID)){
            			case (int)0: {
HXLINE( 157)				return (int)0;
            			}
            			break;
            			case (int)1: {
HXLINE( 157)				return (int)1;
            			}
            			break;
            			case (int)2: {
HXLINE( 157)				return (int)4;
            			}
            			break;
            			case (int)3: {
HXLINE( 157)				return (int)5;
            			}
            			break;
            			case (int)4: {
HXLINE( 157)				return (int)2;
            			}
            			break;
            			case (int)6: {
HXLINE( 157)				return (int)7;
            			}
            			break;
            			case (int)7: {
HXLINE( 157)				return (int)6;
            			}
            			break;
            			case (int)10: {
HXLINE( 157)				return (int)8;
            			}
            			break;
            			case (int)11: {
HXLINE( 157)				return (int)29;
            			}
            			break;
            			case (int)12: {
HXLINE( 157)				return (int)28;
            			}
            			break;
            			case (int)13: {
HXLINE( 157)				return (int)30;
            			}
            			break;
            			case (int)14: {
HXLINE( 157)				return (int)31;
            			}
            			break;
            			case (int)17: {
HXLINE( 157)				return (int)3;
            			}
            			break;
            			case (int)26: {
HXLINE( 157)				return (int)3;
            			}
            			break;
            			case (int)27: {
HXLINE( 157)				return (int)2;
            			}
            			break;
            			case (int)34: {
HXLINE( 157)				return ::flixel::input::gamepad::id::WiiRemoteID_obj::LEFT_ANALOG_STICK->rawUp;
            			}
            			break;
            			case (int)35: {
HXLINE( 157)				return ::flixel::input::gamepad::id::WiiRemoteID_obj::LEFT_ANALOG_STICK->rawRight;
            			}
            			break;
            			case (int)36: {
HXLINE( 157)				return ::flixel::input::gamepad::id::WiiRemoteID_obj::LEFT_ANALOG_STICK->rawDown;
            			}
            			break;
            			case (int)37: {
HXLINE( 157)				return ::flixel::input::gamepad::id::WiiRemoteID_obj::LEFT_ANALOG_STICK->rawLeft;
            			}
            			break;
            			default:{
HXLINE( 157)				return (int)-1;
            			}
            		}
HXDLIN( 157)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(WiiRemoteMapping_obj,getRawNunchuk,return )

Int WiiRemoteMapping_obj::getRawDefault(Int ID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","getRawDefault",0xdbc46f58,"flixel.input.gamepad.mappings.WiiRemoteMapping.getRawDefault","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",184,0xc69520e9)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE( 184)		switch((int)(ID)){
            			case (int)0: {
HXLINE( 184)				return (int)2;
            			}
            			break;
            			case (int)1: {
HXLINE( 184)				return (int)3;
            			}
            			break;
            			case (int)2: {
HXLINE( 184)				return (int)0;
            			}
            			break;
            			case (int)3: {
HXLINE( 184)				return (int)1;
            			}
            			break;
            			case (int)6: {
HXLINE( 184)				return (int)5;
            			}
            			break;
            			case (int)7: {
HXLINE( 184)				return (int)4;
            			}
            			break;
            			case (int)10: {
HXLINE( 184)				return (int)6;
            			}
            			break;
            			case (int)11: {
HXLINE( 184)				return (int)14;
            			}
            			break;
            			case (int)12: {
HXLINE( 184)				return (int)15;
            			}
            			break;
            			case (int)13: {
HXLINE( 184)				return (int)16;
            			}
            			break;
            			case (int)14: {
HXLINE( 184)				return (int)17;
            			}
            			break;
            			case (int)26: {
HXLINE( 184)				return (int)2;
            			}
            			break;
            			case (int)27: {
HXLINE( 184)				return (int)3;
            			}
            			break;
            			default:{
HXLINE( 184)				return (int)-1;
            			}
            		}
HXDLIN( 184)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(WiiRemoteMapping_obj,getRawDefault,return )

Bool WiiRemoteMapping_obj::isAxisForMotion(Int ID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","isAxisForMotion",0xc221669d,"flixel.input.gamepad.mappings.WiiRemoteMapping.isAxisForMotion","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",204,0xc69520e9)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE( 205)		if (hx::IsEq( this->attachment,::flixel::input::gamepad::FlxGamepadAttachment_obj::NONE_dyn() )) {
HXLINE( 207)			Bool _hx_tmp;
HXDLIN( 207)			if ((ID != (int)2)) {
HXLINE( 207)				_hx_tmp = (ID == (int)3);
            			}
            			else {
HXLINE( 207)				_hx_tmp = true;
            			}
HXDLIN( 207)			if (_hx_tmp) {
HXLINE( 208)				return true;
            			}
            		}
            		else {
HXLINE( 210)			if (hx::IsEq( this->attachment,::flixel::input::gamepad::FlxGamepadAttachment_obj::WII_NUNCHUCK_dyn() )) {
HXLINE( 212)				Bool _hx_tmp1;
HXDLIN( 212)				if ((ID != (int)3)) {
HXLINE( 212)					_hx_tmp1 = (ID == (int)2);
            				}
            				else {
HXLINE( 212)					_hx_tmp1 = true;
            				}
HXDLIN( 212)				if (_hx_tmp1) {
HXLINE( 213)					return true;
            				}
            			}
            		}
HXLINE( 215)		return false;
            	}


Bool WiiRemoteMapping_obj::isAxisFlipped(Int axisID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","isAxisFlipped",0x7501e940,"flixel.input.gamepad.mappings.WiiRemoteMapping.isAxisFlipped","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",220,0xc69520e9)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(axisID,"axisID")
HXLINE( 220)		return (axisID == (int)4);
            	}


Int WiiRemoteMapping_obj::axisIndexToRawID(Int axisID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","axisIndexToRawID",0x493b61ce,"flixel.input.gamepad.mappings.WiiRemoteMapping.axisIndexToRawID","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",226,0xc69520e9)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(axisID,"axisID")
HXLINE( 228)		Bool _hx_tmp;
HXDLIN( 228)		if (hx::IsEq( this->attachment,::flixel::input::gamepad::FlxGamepadAttachment_obj::NONE_dyn() )) {
HXLINE( 228)			_hx_tmp = (axisID == (int)4);
            		}
            		else {
HXLINE( 228)			_hx_tmp = false;
            		}
HXDLIN( 228)		if (_hx_tmp) {
HXLINE( 229)			return (int)-1;
            		}
            		else {
HXLINE( 231)			Bool _hx_tmp1;
HXDLIN( 231)			if (hx::IsEq( this->attachment,::flixel::input::gamepad::FlxGamepadAttachment_obj::WII_NUNCHUCK_dyn() )) {
HXLINE( 231)				_hx_tmp1 = (axisID == (int)4);
            			}
            			else {
HXLINE( 231)				_hx_tmp1 = false;
            			}
HXDLIN( 231)			if (_hx_tmp1) {
HXLINE( 232)				return (int)-1;
            			}
            		}
HXLINE( 234)		Bool _hx_tmp2;
HXDLIN( 234)		if (hx::IsNotEq( this->attachment,::flixel::input::gamepad::FlxGamepadAttachment_obj::WII_NUNCHUCK_dyn() )) {
HXLINE( 234)			_hx_tmp2 = hx::IsEq( this->attachment,::flixel::input::gamepad::FlxGamepadAttachment_obj::WII_CLASSIC_CONTROLLER_dyn() );
            		}
            		else {
HXLINE( 234)			_hx_tmp2 = true;
            		}
HXDLIN( 234)		if (_hx_tmp2) {
HXLINE( 236)			if ((axisID == this->leftStick->x)) {
HXLINE( 237)				return (int)20;
            			}
            			else {
HXLINE( 238)				if ((axisID == this->leftStick->y)) {
HXLINE( 239)					return (int)21;
            				}
            			}
            		}
            		else {
HXLINE( 243)			if ((axisID == this->leftStick->x)) {
HXLINE( 244)				return (int)18;
            			}
            			else {
HXLINE( 245)				if ((axisID == this->leftStick->y)) {
HXLINE( 246)					return (int)19;
            				}
            			}
            		}
HXLINE( 249)		if ((axisID == this->rightStick->x)) {
HXLINE( 250)			return (int)22;
            		}
            		else {
HXLINE( 251)			if ((axisID == this->rightStick->y)) {
HXLINE( 252)				return (int)23;
            			}
            		}
HXLINE( 254)		return axisID;
            	}


Int WiiRemoteMapping_obj::checkForFakeAxis(Int ID){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","checkForFakeAxis",0xe60c374e,"flixel.input.gamepad.mappings.WiiRemoteMapping.checkForFakeAxis","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",258,0xc69520e9)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(ID,"ID")
HXLINE( 259)		Bool _hx_tmp;
HXDLIN( 259)		if (hx::IsEq( this->attachment,::flixel::input::gamepad::FlxGamepadAttachment_obj::WII_NUNCHUCK_dyn() )) {
HXLINE( 259)			_hx_tmp = (ID == (int)17);
            		}
            		else {
HXLINE( 259)			_hx_tmp = false;
            		}
HXDLIN( 259)		if (_hx_tmp) {
HXLINE( 260)			return (int)3;
            		}
HXLINE( 262)		return (int)-1;
            	}


::hx::EnumBase WiiRemoteMapping_obj::set_attachment(::hx::EnumBase attachment){
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","set_attachment",0x85409917,"flixel.input.gamepad.mappings.WiiRemoteMapping.set_attachment","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",267,0xc69520e9)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(attachment,"attachment")
HXLINE( 268)		 ::flixel::input::gamepad::FlxGamepadAnalogStick _hx_tmp;
HXDLIN( 268)		Int _hx_tmp1 = ( ( ::hx::EnumBase)(attachment) )->_hx_getIndex();
HXDLIN( 268)		switch((int)(_hx_tmp1)){
            			case (int)0: case (int)1: {
HXLINE( 268)				_hx_tmp = ::flixel::input::gamepad::id::WiiRemoteID_obj::LEFT_ANALOG_STICK;
            			}
            			break;
            			case (int)2: {
HXLINE( 268)				_hx_tmp = ::flixel::input::gamepad::id::WiiRemoteID_obj::REMOTE_DPAD;
            			}
            			break;
            		}
HXDLIN( 268)		this->leftStick = _hx_tmp;
HXLINE( 274)		 ::flixel::input::gamepad::FlxGamepadAnalogStick _hx_tmp2;
HXDLIN( 274)		Int _hx_tmp3 = ( ( ::hx::EnumBase)(attachment) )->_hx_getIndex();
HXDLIN( 274)		if ((_hx_tmp3 == (int)1)) {
HXLINE( 274)			_hx_tmp2 = ::flixel::input::gamepad::id::WiiRemoteID_obj::RIGHT_ANALOG_STICK;
            		}
            		else {
HXLINE( 274)			_hx_tmp2 = null();
            		}
HXDLIN( 274)		this->rightStick = _hx_tmp2;
HXLINE( 280)		return this->super::set_attachment(attachment);
            	}


Int WiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_X;

Int WiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_Y;

Int WiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_X;

Int WiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y;


WiiRemoteMapping_obj::WiiRemoteMapping_obj()
{
}

hx::Val WiiRemoteMapping_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"getID") ) { return hx::Val( getID_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getRawID") ) { return hx::Val( getRawID_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initValues") ) { return hx::Val( initValues_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getIDNunchuk") ) { return hx::Val( getIDNunchuk_dyn()); }
		if (HX_FIELD_EQ(inName,"getIDDefault") ) { return hx::Val( getIDDefault_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getRawNunchuk") ) { return hx::Val( getRawNunchuk_dyn()); }
		if (HX_FIELD_EQ(inName,"getRawDefault") ) { return hx::Val( getRawDefault_dyn()); }
		if (HX_FIELD_EQ(inName,"isAxisFlipped") ) { return hx::Val( isAxisFlipped_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_attachment") ) { return hx::Val( set_attachment_dyn()); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"isAxisForMotion") ) { return hx::Val( isAxisForMotion_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"axisIndexToRawID") ) { return hx::Val( axisIndexToRawID_dyn()); }
		if (HX_FIELD_EQ(inName,"checkForFakeAxis") ) { return hx::Val( checkForFakeAxis_dyn()); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getIDClassicController") ) { return hx::Val( getIDClassicController_dyn()); }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"getRawClassicController") ) { return hx::Val( getRawClassicController_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *WiiRemoteMapping_obj_sMemberStorageInfo = 0;
static hx::StaticInfo WiiRemoteMapping_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &WiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_X,HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_X","\x94","\xb3","\x65","\x38")},
	{hx::fsInt,(void *) &WiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_Y,HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_Y","\x95","\xb3","\x65","\x38")},
	{hx::fsInt,(void *) &WiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_X,HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_X","\xc9","\x1f","\x02","\xa1")},
	{hx::fsInt,(void *) &WiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y,HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_Y","\xca","\x1f","\x02","\xa1")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String WiiRemoteMapping_obj_sMemberFields[] = {
	HX_HCSTRING("initValues","\x12","\x5f","\xfc","\x53"),
	HX_HCSTRING("getID","\xf1","\x91","\x60","\x91"),
	HX_HCSTRING("getIDClassicController","\x1d","\xe8","\xc4","\x20"),
	HX_HCSTRING("getIDNunchuk","\x11","\xa4","\xdf","\xd0"),
	HX_HCSTRING("getIDDefault","\xd0","\xfe","\xd5","\x2e"),
	HX_HCSTRING("getRawID","\x4d","\x6f","\xfd","\x43"),
	HX_HCSTRING("getRawClassicController","\xfc","\xb9","\x66","\x9f"),
	HX_HCSTRING("getRawNunchuk","\x30","\x39","\xa6","\x8c"),
	HX_HCSTRING("getRawDefault","\xef","\x93","\x9c","\xea"),
	HX_HCSTRING("isAxisForMotion","\xf4","\x1e","\xbd","\x52"),
	HX_HCSTRING("isAxisFlipped","\xd7","\x0d","\xda","\x83"),
	HX_HCSTRING("axisIndexToRawID","\x97","\xf5","\xe0","\x40"),
	HX_HCSTRING("checkForFakeAxis","\x17","\xcb","\xb1","\xdd"),
	HX_HCSTRING("set_attachment","\xa0","\x78","\x88","\x73"),
	::String(null()) };

static void WiiRemoteMapping_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(WiiRemoteMapping_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(WiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_X,"LEFT_ANALOG_STICK_FAKE_X");
	HX_MARK_MEMBER_NAME(WiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_Y,"LEFT_ANALOG_STICK_FAKE_Y");
	HX_MARK_MEMBER_NAME(WiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_X,"RIGHT_ANALOG_STICK_FAKE_X");
	HX_MARK_MEMBER_NAME(WiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y,"RIGHT_ANALOG_STICK_FAKE_Y");
};

#ifdef HXCPP_VISIT_ALLOCS
static void WiiRemoteMapping_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(WiiRemoteMapping_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(WiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_X,"LEFT_ANALOG_STICK_FAKE_X");
	HX_VISIT_MEMBER_NAME(WiiRemoteMapping_obj::LEFT_ANALOG_STICK_FAKE_Y,"LEFT_ANALOG_STICK_FAKE_Y");
	HX_VISIT_MEMBER_NAME(WiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_X,"RIGHT_ANALOG_STICK_FAKE_X");
	HX_VISIT_MEMBER_NAME(WiiRemoteMapping_obj::RIGHT_ANALOG_STICK_FAKE_Y,"RIGHT_ANALOG_STICK_FAKE_Y");
};

#endif

hx::Class WiiRemoteMapping_obj::__mClass;

static ::String WiiRemoteMapping_obj_sStaticFields[] = {
	HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_X","\x94","\xb3","\x65","\x38"),
	HX_HCSTRING("LEFT_ANALOG_STICK_FAKE_Y","\x95","\xb3","\x65","\x38"),
	HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_X","\xc9","\x1f","\x02","\xa1"),
	HX_HCSTRING("RIGHT_ANALOG_STICK_FAKE_Y","\xca","\x1f","\x02","\xa1"),
	::String(null())
};

void WiiRemoteMapping_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.input.gamepad.mappings.WiiRemoteMapping","\x17","\x06","\xe9","\x07");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = WiiRemoteMapping_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(WiiRemoteMapping_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(WiiRemoteMapping_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< WiiRemoteMapping_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = WiiRemoteMapping_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = WiiRemoteMapping_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = WiiRemoteMapping_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void WiiRemoteMapping_obj::__boot()
{
{
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","boot",0xbf60b9e9,"flixel.input.gamepad.mappings.WiiRemoteMapping.boot","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",10,0xc69520e9)
HXLINE(  10)		LEFT_ANALOG_STICK_FAKE_X = (int)20;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","boot",0xbf60b9e9,"flixel.input.gamepad.mappings.WiiRemoteMapping.boot","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",11,0xc69520e9)
HXLINE(  11)		LEFT_ANALOG_STICK_FAKE_Y = (int)21;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","boot",0xbf60b9e9,"flixel.input.gamepad.mappings.WiiRemoteMapping.boot","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",12,0xc69520e9)
HXLINE(  12)		RIGHT_ANALOG_STICK_FAKE_X = (int)22;
            	}
{
            	HX_STACK_FRAME("flixel.input.gamepad.mappings.WiiRemoteMapping","boot",0xbf60b9e9,"flixel.input.gamepad.mappings.WiiRemoteMapping.boot","flixel/input/gamepad/mappings/WiiRemoteMapping.hx",13,0xc69520e9)
HXLINE(  13)		RIGHT_ANALOG_STICK_FAKE_Y = (int)23;
            	}
}

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings

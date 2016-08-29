// Generated by Haxe 3.3.0
#ifndef INCLUDED_flixel_input_gamepad_mappings_MayflashWiiRemoteMapping
#define INCLUDED_flixel_input_gamepad_mappings_MayflashWiiRemoteMapping

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_gamepad_mappings_FlxGamepadMapping
#include <flixel/input/gamepad/mappings/FlxGamepadMapping.h>
#endif
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAttachment)
HX_DECLARE_CLASS4(flixel,input,gamepad,mappings,FlxGamepadMapping)
HX_DECLARE_CLASS4(flixel,input,gamepad,mappings,MayflashWiiRemoteMapping)

namespace flixel{
namespace input{
namespace gamepad{
namespace mappings{


class HXCPP_CLASS_ATTRIBUTES MayflashWiiRemoteMapping_obj : public  ::flixel::input::gamepad::mappings::FlxGamepadMapping_obj
{
	public:
		typedef  ::flixel::input::gamepad::mappings::FlxGamepadMapping_obj super;
		typedef MayflashWiiRemoteMapping_obj OBJ_;
		MayflashWiiRemoteMapping_obj();

	public:
		void __construct(::hx::EnumBase attachment);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.gamepad.mappings.MayflashWiiRemoteMapping")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.input.gamepad.mappings.MayflashWiiRemoteMapping"); }
		static hx::ObjectPtr< MayflashWiiRemoteMapping_obj > __new(::hx::EnumBase attachment);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MayflashWiiRemoteMapping_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("MayflashWiiRemoteMapping","\xbc","\x3d","\x21","\x6c"); }

		static void __boot();
		static Int REMOTE_DPAD_X;
		static Int REMOTE_DPAD_Y;
		static Int LEFT_ANALOG_STICK_FAKE_X;
		static Int LEFT_ANALOG_STICK_FAKE_Y;
		static Int RIGHT_ANALOG_STICK_FAKE_X;
		static Int RIGHT_ANALOG_STICK_FAKE_Y;
		void initValues();

		Int getID(Int rawID);

		Int getIDClassicController(Int rawID);
		::Dynamic getIDClassicController_dyn();

		Int getIDNunchuk(Int rawID);
		::Dynamic getIDNunchuk_dyn();

		Int getIDDefault(Int rawID);
		::Dynamic getIDDefault_dyn();

		Int getRawID(Int ID);

		Int getRawClassicController(Int ID);
		::Dynamic getRawClassicController_dyn();

		Int getRawNunchuk(Int ID);
		::Dynamic getRawNunchuk_dyn();

		Int getRawDefault(Int ID);
		::Dynamic getRawDefault_dyn();

		Int axisIndexToRawID(Int axisID);

		Int checkForFakeAxis(Int ID);

		::hx::EnumBase set_attachment(::hx::EnumBase attachment);

};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad
} // end namespace mappings

#endif /* INCLUDED_flixel_input_gamepad_mappings_MayflashWiiRemoteMapping */ 
// Generated by Haxe 3.3.0
#ifndef INCLUDED_flixel_system_FlxSound
#define INCLUDED_flixel_system_FlxSound

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSound)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSoundGroup)
HX_DECLARE_CLASS2(flixel,tweens,FlxTween)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,media,Sound)
HX_DECLARE_CLASS3(openfl,_legacy,media,SoundChannel)
HX_DECLARE_CLASS2(openfl,media,SoundTransform)

namespace flixel{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES FlxSound_obj : public  ::flixel::FlxBasic_obj
{
	public:
		typedef  ::flixel::FlxBasic_obj super;
		typedef FlxSound_obj OBJ_;
		FlxSound_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.FlxSound")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.system.FlxSound"); }
		static hx::ObjectPtr< FlxSound_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxSound_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxSound","\x1d","\x97","\xa6","\x3d"); }

		Float x;
		Float y;
		Bool persist;
		::String name;
		::String artist;
		Float amplitude;
		Float amplitudeLeft;
		Float amplitudeRight;
		Bool autoDestroy;
		 ::Dynamic onComplete;
		 ::Dynamic &onComplete_dyn() { return onComplete;}
		Bool playing;
		 ::flixel::_hx_system::FlxSoundGroup group;
		Bool looped;
		Float loopTime;
		 ::flixel::tweens::FlxTween fadeTween;
		 ::openfl::_legacy::media::Sound _sound;
		 ::openfl::_legacy::media::SoundChannel _channel;
		 ::openfl::media::SoundTransform _transform;
		Bool _paused;
		Float _volume;
		Float _time;
		Float _pitch;
		Float _volumeAdjust;
		 ::flixel::FlxObject _target;
		Float _radius;
		Bool _proximityPan;
		Bool _alreadyPaused;
		void reset();
		::Dynamic reset_dyn();

		void destroy();

		void update(Float elapsed);

		void kill();

		 ::flixel::_hx_system::FlxSound loadEmbedded( ::Dynamic EmbeddedSound,hx::Null< Bool >  Looped,hx::Null< Bool >  AutoDestroy, ::Dynamic OnComplete);
		::Dynamic loadEmbedded_dyn();

		 ::flixel::_hx_system::FlxSound loadStream(::String SoundURL,hx::Null< Bool >  Looped,hx::Null< Bool >  AutoDestroy, ::Dynamic OnComplete);
		::Dynamic loadStream_dyn();

		 ::flixel::_hx_system::FlxSound proximity(Float X,Float Y, ::flixel::FlxObject TargetObject,Float Radius,hx::Null< Bool >  Pan);
		::Dynamic proximity_dyn();

		 ::flixel::_hx_system::FlxSound play(hx::Null< Bool >  ForceRestart,hx::Null< Float >  StartTime);
		::Dynamic play_dyn();

		 ::flixel::_hx_system::FlxSound resume();
		::Dynamic resume_dyn();

		 ::flixel::_hx_system::FlxSound pause();
		::Dynamic pause_dyn();

		 ::flixel::_hx_system::FlxSound stop();
		::Dynamic stop_dyn();

		 ::flixel::_hx_system::FlxSound fadeOut(hx::Null< Float >  Duration, ::Dynamic To, ::Dynamic onComplete);
		::Dynamic fadeOut_dyn();

		 ::flixel::_hx_system::FlxSound fadeIn(hx::Null< Float >  Duration,hx::Null< Float >  From,hx::Null< Float >  To, ::Dynamic onComplete);
		::Dynamic fadeIn_dyn();

		void volumeTween(Float f);
		::Dynamic volumeTween_dyn();

		Float getActualVolume();
		::Dynamic getActualVolume_dyn();

		void setPosition(hx::Null< Float >  X,hx::Null< Float >  Y);
		::Dynamic setPosition_dyn();

		void updateTransform();
		::Dynamic updateTransform_dyn();

		void startSound(Float StartTime);
		::Dynamic startSound_dyn();

		void stopped( ::Dynamic _);
		::Dynamic stopped_dyn();

		void cleanup(Bool destroySound,hx::Null< Bool >  resetPosition);
		::Dynamic cleanup_dyn();

		void gotID3( ::Dynamic _);
		::Dynamic gotID3_dyn();

		void onFocus();
		::Dynamic onFocus_dyn();

		void onFocusLost();
		::Dynamic onFocusLost_dyn();

		 ::flixel::_hx_system::FlxSoundGroup set_group( ::flixel::_hx_system::FlxSoundGroup group);
		::Dynamic set_group_dyn();

		Bool get_playing();
		::Dynamic get_playing_dyn();

		Float get_volume();
		::Dynamic get_volume_dyn();

		Float set_volume(Float Volume);
		::Dynamic set_volume_dyn();

		Float get_pitch();
		::Dynamic get_pitch_dyn();

		Float set_pitch(Float v);
		::Dynamic set_pitch_dyn();

		Float get_pan();
		::Dynamic get_pan_dyn();

		Float set_pan(Float pan);
		::Dynamic set_pan_dyn();

		Float get_time();
		::Dynamic get_time_dyn();

		Float set_time(Float time);
		::Dynamic set_time_dyn();

		virtual ::String toString();

};

} // end namespace flixel
} // end namespace system

#endif /* INCLUDED_flixel_system_FlxSound */ 

// Generated by Haxe 3.3.0
#ifndef INCLUDED_flixel_system_debug_stats__Stats_GraphicMinimizeButton
#define INCLUDED_flixel_system_debug_stats__Stats_GraphicMinimizeButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
HX_DECLARE_CLASS5(flixel,_hx_system,debug,stats,_Stats,GraphicMinimizeButton)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace stats{
namespace _Stats{


class HXCPP_CLASS_ATTRIBUTES GraphicMinimizeButton_obj : public  ::openfl::_legacy::display::BitmapData_obj
{
	public:
		typedef  ::openfl::_legacy::display::BitmapData_obj super;
		typedef GraphicMinimizeButton_obj OBJ_;
		GraphicMinimizeButton_obj();

	public:
		void __construct(Int width,Int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.stats._Stats.GraphicMinimizeButton")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.system.debug.stats._Stats.GraphicMinimizeButton"); }
		static hx::ObjectPtr< GraphicMinimizeButton_obj > __new(Int width,Int height, ::Dynamic __o_transparent, ::Dynamic __o_fillRGBA);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GraphicMinimizeButton_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GraphicMinimizeButton","\x58","\xb4","\xe5","\x3a"); }

		static void __boot();
		static ::String resourceName;
};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace stats
} // end namespace _Stats

#endif /* INCLUDED_flixel_system_debug_stats__Stats_GraphicMinimizeButton */ 

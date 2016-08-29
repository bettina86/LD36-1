// Generated by Haxe 3.3.0
#ifndef INCLUDED_flixel_util_FlxStringUtil
#define INCLUDED_flixel_util_FlxStringUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(flixel,util,FlxStringUtil)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,LabelValuePair)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)

namespace flixel{
namespace util{


class HXCPP_CLASS_ATTRIBUTES FlxStringUtil_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FlxStringUtil_obj OBJ_;
		FlxStringUtil_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.util.FlxStringUtil")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"flixel.util.FlxStringUtil"); }
		static hx::ObjectPtr< FlxStringUtil_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxStringUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("FlxStringUtil","\x65","\xc4","\x02","\x2e"); }

		static ::String formatTicks(Int StartTicks,Int EndTicks);
		static ::Dynamic formatTicks_dyn();

		static ::String formatTime(Float Seconds,hx::Null< Bool >  ShowMS);
		static ::Dynamic formatTime_dyn();

		static ::String formatArray(::cpp::VirtualArray AnyArray);
		static ::Dynamic formatArray_dyn();

		static ::String formatStringMap( ::haxe::ds::StringMap AnyMap);
		static ::Dynamic formatStringMap_dyn();

		static ::String formatMoney(Float Amount,hx::Null< Bool >  ShowDecimal,hx::Null< Bool >  EnglishStyle);
		static ::Dynamic formatMoney_dyn();

		static ::String formatBytes(Float Bytes,hx::Null< Int >  Precision);
		static ::Dynamic formatBytes_dyn();

		static ::String filterDigits(::String Input);
		static ::Dynamic filterDigits_dyn();

		static ::String htmlFormat(::String Text,hx::Null< Int >  Size,::String Color,hx::Null< Bool >  Bold,hx::Null< Bool >  Italic,hx::Null< Bool >  Underlined);
		static ::Dynamic htmlFormat_dyn();

		static ::String getDomain(::String url);
		static ::Dynamic getDomain_dyn();

		static Bool sameClassName( ::Dynamic Obj1, ::Dynamic Obj2,hx::Null< Bool >  Simple);
		static ::Dynamic sameClassName_dyn();

		static ::Array< Int > toIntArray(::String Data);
		static ::Dynamic toIntArray_dyn();

		static ::Array< Float > toFloatArray(::String Data);
		static ::Dynamic toFloatArray_dyn();

		static ::String arrayToCSV(::Array< Int > Data,Int Width,hx::Null< Bool >  Invert);
		static ::Dynamic arrayToCSV_dyn();

		static ::String bitmapToCSV( ::openfl::_legacy::display::BitmapData Bitmap,hx::Null< Bool >  Invert,hx::Null< Int >  Scale,::Array< Int > ColorMap);
		static ::Dynamic bitmapToCSV_dyn();

		static ::String imageToCSV( ::Dynamic ImageFile,hx::Null< Bool >  Invert,hx::Null< Int >  Scale,::Array< Int > ColorMap);
		static ::Dynamic imageToCSV_dyn();

		static ::String getDebugString(::Array< ::Dynamic> LabelValuePairs);
		static ::Dynamic getDebugString_dyn();

		static Bool contains(::String s,::String str);
		static ::Dynamic contains_dyn();

		static ::String remove(::String s,::String sub);
		static ::Dynamic remove_dyn();

		static ::String insert(::String s,Int pos,::String insertion);
		static ::Dynamic insert_dyn();

		static ::Array< ::String > sortAlphabetically(::Array< ::String > list);
		static ::Dynamic sortAlphabetically_dyn();

		static Bool isNullOrEmpty(::String s);
		static ::Dynamic isNullOrEmpty_dyn();

};

} // end namespace flixel
} // end namespace util

#endif /* INCLUDED_flixel_util_FlxStringUtil */ 

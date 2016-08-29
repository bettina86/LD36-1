// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxImageFrame
#include <flixel/graphics/frames/FlxImageFrame.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_Assets
#include <openfl/_legacy/Assets.h>
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
#ifndef INCLUDED_openfl__legacy_gl_GL
#include <openfl/_legacy/gl/GL.h>
#endif

namespace flixel{
namespace _hx_system{
namespace frontEnds{

void BitmapFrontEnd_obj::__construct(){
            	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","new",0x0f2331ed,"flixel.system.frontEnds.BitmapFrontEnd.new","flixel/system/frontEnds/BitmapFrontEnd.hx",38,0x91a05ae2)
            	HX_STACK_THIS(this)
HXLINE(  38)		this->clearCache();
            	}

Dynamic BitmapFrontEnd_obj::__CreateEmpty() { return new BitmapFrontEnd_obj; }

hx::ObjectPtr< BitmapFrontEnd_obj > BitmapFrontEnd_obj::__new()
{
	hx::ObjectPtr< BitmapFrontEnd_obj > _hx_result = new BitmapFrontEnd_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic BitmapFrontEnd_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BitmapFrontEnd_obj > _hx_result = new BitmapFrontEnd_obj();
	_hx_result->__construct();
	return _hx_result;
}

void BitmapFrontEnd_obj::onAssetsReload( ::Dynamic _){
            	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","onAssetsReload",0x7811d38e,"flixel.system.frontEnds.BitmapFrontEnd.onAssetsReload","flixel/system/frontEnds/BitmapFrontEnd.hx",43,0x91a05ae2)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(_,"_")
HXLINE(  43)		HX_VARI(  ::Dynamic,tmp) = this->_cache->keys();
HXDLIN(  43)		while(true){
HXLINE(  43)			Bool _hx_tmp = !(( (Bool)( ::Dynamic(tmp->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic))()) ));
HXDLIN(  43)			if (_hx_tmp) {
HXLINE(  43)				goto _hx_goto_0;
            			}
HXDLIN(  43)			HX_VARI( ::String,key) = ( (::String)( ::Dynamic(tmp->__Field(HX_("next",f3,84,02,49),hx::paccDynamic))()) );
HXLINE(  45)			HX_VARI(  ::flixel::graphics::FlxGraphic,obj) = this->_cache->get(key).StaticCast<  ::flixel::graphics::FlxGraphic >();
HXLINE(  46)			Bool _hx_tmp1;
HXDLIN(  46)			Bool _hx_tmp2 = hx::IsNotNull( obj );
HXDLIN(  46)			if (_hx_tmp2) {
HXLINE(  46)				Bool _hx_tmp3 = hx::IsNull( obj->assetsClass );
HXDLIN(  46)				if (_hx_tmp3) {
HXLINE(  46)					_hx_tmp1 = hx::IsNotNull( obj->assetsKey );
            				}
            				else {
HXLINE(  46)					_hx_tmp1 = true;
            				}
            			}
            			else {
HXLINE(  46)				_hx_tmp1 = false;
            			}
HXDLIN(  46)			if (_hx_tmp1) {
HXLINE(  48)				obj->onAssetsReload();
            			}
            		}
            		_hx_goto_0:;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,onAssetsReload,(void))

void BitmapFrontEnd_obj::onContext(){
            	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","onContext",0x0e82d7dd,"flixel.system.frontEnds.BitmapFrontEnd.onContext","flixel/system/frontEnds/BitmapFrontEnd.hx",59,0x91a05ae2)
            	HX_STACK_THIS(this)
HXLINE(  59)		HX_VARI(  ::Dynamic,tmp) = this->_cache->keys();
HXDLIN(  59)		while(true){
HXLINE(  59)			Bool _hx_tmp = !(( (Bool)( ::Dynamic(tmp->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic))()) ));
HXDLIN(  59)			if (_hx_tmp) {
HXLINE(  59)				goto _hx_goto_1;
            			}
HXDLIN(  59)			HX_VARI( ::String,key) = ( (::String)( ::Dynamic(tmp->__Field(HX_("next",f3,84,02,49),hx::paccDynamic))()) );
HXLINE(  61)			HX_VARI(  ::flixel::graphics::FlxGraphic,obj) = this->_cache->get(key).StaticCast<  ::flixel::graphics::FlxGraphic >();
HXLINE(  62)			Bool _hx_tmp1;
HXDLIN(  62)			Bool _hx_tmp2 = hx::IsNotNull( obj );
HXDLIN(  62)			if (_hx_tmp2) {
HXLINE(  62)				_hx_tmp1 = obj->isDumped;
            			}
            			else {
HXLINE(  62)				_hx_tmp1 = false;
            			}
HXDLIN(  62)			if (_hx_tmp1) {
HXLINE(  64)				obj->onContext();
            			}
            		}
            		_hx_goto_1:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,onContext,(void))

void BitmapFrontEnd_obj::dumpCache(){
            	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","dumpCache",0xf899b9bb,"flixel.system.frontEnds.BitmapFrontEnd.dumpCache","flixel/system/frontEnds/BitmapFrontEnd.hx",76,0x91a05ae2)
            	HX_STACK_THIS(this)
HXLINE(  76)		HX_VARI(  ::Dynamic,tmp) = this->_cache->keys();
HXDLIN(  76)		while(true){
HXLINE(  76)			Bool _hx_tmp = !(( (Bool)( ::Dynamic(tmp->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic))()) ));
HXDLIN(  76)			if (_hx_tmp) {
HXLINE(  76)				goto _hx_goto_2;
            			}
HXDLIN(  76)			HX_VARI( ::String,key) = ( (::String)( ::Dynamic(tmp->__Field(HX_("next",f3,84,02,49),hx::paccDynamic))()) );
HXLINE(  78)			HX_VARI(  ::flixel::graphics::FlxGraphic,obj) = this->_cache->get(key).StaticCast<  ::flixel::graphics::FlxGraphic >();
HXLINE(  79)			Bool _hx_tmp1;
HXDLIN(  79)			Bool _hx_tmp2 = hx::IsNotNull( obj );
HXDLIN(  79)			if (_hx_tmp2) {
HXLINE(  79)				Bool _hx_tmp3 = hx::IsNull( obj->assetsClass );
HXDLIN(  79)				if (_hx_tmp3) {
HXLINE(  79)					_hx_tmp1 = hx::IsNotNull( obj->assetsKey );
            				}
            				else {
HXLINE(  79)					_hx_tmp1 = true;
            				}
            			}
            			else {
HXLINE(  79)				_hx_tmp1 = false;
            			}
HXDLIN(  79)			if (_hx_tmp1) {
HXLINE(  81)				obj->dump();
            			}
            		}
            		_hx_goto_2:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,dumpCache,(void))

void BitmapFrontEnd_obj::undumpCache(){
            	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","undumpCache",0xfe6eed82,"flixel.system.frontEnds.BitmapFrontEnd.undumpCache","flixel/system/frontEnds/BitmapFrontEnd.hx",93,0x91a05ae2)
            	HX_STACK_THIS(this)
HXLINE(  93)		HX_VARI(  ::Dynamic,tmp) = this->_cache->keys();
HXDLIN(  93)		while(true){
HXLINE(  93)			Bool _hx_tmp = !(( (Bool)( ::Dynamic(tmp->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic))()) ));
HXDLIN(  93)			if (_hx_tmp) {
HXLINE(  93)				goto _hx_goto_3;
            			}
HXDLIN(  93)			HX_VARI( ::String,key) = ( (::String)( ::Dynamic(tmp->__Field(HX_("next",f3,84,02,49),hx::paccDynamic))()) );
HXLINE(  95)			HX_VARI(  ::flixel::graphics::FlxGraphic,obj) = this->_cache->get(key).StaticCast<  ::flixel::graphics::FlxGraphic >();
HXLINE(  96)			Bool _hx_tmp1;
HXDLIN(  96)			Bool _hx_tmp2 = hx::IsNotNull( obj );
HXDLIN(  96)			if (_hx_tmp2) {
HXLINE(  96)				_hx_tmp1 = obj->isDumped;
            			}
            			else {
HXLINE(  96)				_hx_tmp1 = false;
            			}
HXDLIN(  96)			if (_hx_tmp1) {
HXLINE(  98)				obj->undump();
            			}
            		}
            		_hx_goto_3:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,undumpCache,(void))

Bool BitmapFrontEnd_obj::checkCache(::String Key){
            	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","checkCache",0xe81c366d,"flixel.system.frontEnds.BitmapFrontEnd.checkCache","flixel/system/frontEnds/BitmapFrontEnd.hx",112,0x91a05ae2)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Key,"Key")
HXLINE( 112)		Bool _hx_tmp = this->_cache->exists(Key);
HXDLIN( 112)		if (_hx_tmp) {
HXLINE( 112)			return hx::IsNotNull( this->_cache->get(Key).StaticCast<  ::flixel::graphics::FlxGraphic >() );
            		}
            		else {
HXLINE( 112)			return false;
            		}
HXDLIN( 112)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,checkCache,return )

 ::flixel::graphics::FlxGraphic BitmapFrontEnd_obj::create(Int Width,Int Height,Int Color,hx::Null< Bool >  __o_Unique,::String Key){
Bool Unique = __o_Unique.Default(false);
            	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","create",0xd385bb8f,"flixel.system.frontEnds.BitmapFrontEnd.create","flixel/system/frontEnds/BitmapFrontEnd.hx",127,0x91a05ae2)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Width,"Width")
            	HX_STACK_ARG(Height,"Height")
            	HX_STACK_ARG(Color,"Color")
            	HX_STACK_ARG(Unique,"Unique")
            	HX_STACK_ARG(Key,"Key")
HXLINE( 127)		return ::flixel::graphics::FlxGraphic_obj::fromRectangle(Width,Height,Color,Unique,Key);
            	}


HX_DEFINE_DYNAMIC_FUNC5(BitmapFrontEnd_obj,create,return )

 ::flixel::graphics::FlxGraphic BitmapFrontEnd_obj::add( ::Dynamic Graphic,hx::Null< Bool >  __o_Unique,::String Key){
Bool Unique = __o_Unique.Default(false);
            	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","add",0x0f1953ae,"flixel.system.frontEnds.BitmapFrontEnd.add","flixel/system/frontEnds/BitmapFrontEnd.hx",142,0x91a05ae2)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(Graphic,"Graphic")
            	HX_STACK_ARG(Unique,"Unique")
            	HX_STACK_ARG(Key,"Key")
HXLINE( 143)		Bool _hx_tmp = ::Std_obj::is(Graphic,hx::ClassOf< ::flixel::graphics::FlxGraphic >());
HXDLIN( 143)		if (_hx_tmp) {
HXLINE( 145)			return ::flixel::graphics::FlxGraphic_obj::fromGraphic(( ( ::flixel::graphics::FlxGraphic)(Graphic) ),Unique,Key);
            		}
            		else {
HXLINE( 147)			Bool _hx_tmp1 = ::Std_obj::is(Graphic,hx::ClassOf< ::openfl::_legacy::display::BitmapData >());
HXDLIN( 147)			if (_hx_tmp1) {
HXLINE( 149)				return ::flixel::graphics::FlxGraphic_obj::fromBitmapData(( ( ::openfl::_legacy::display::BitmapData)(Graphic) ),Unique,Key,null());
            			}
            		}
HXLINE( 153)		::String _hx_tmp2 = ::Std_obj::string(Graphic);
HXDLIN( 153)		return ::flixel::graphics::FlxGraphic_obj::fromAssetKey(_hx_tmp2,Unique,Key,null());
            	}


HX_DEFINE_DYNAMIC_FUNC3(BitmapFrontEnd_obj,add,return )

 ::flixel::graphics::FlxGraphic BitmapFrontEnd_obj::addGraphic( ::flixel::graphics::FlxGraphic graphic){
            	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","addGraphic",0x72a9209a,"flixel.system.frontEnds.BitmapFrontEnd.addGraphic","flixel/system/frontEnds/BitmapFrontEnd.hx",163,0x91a05ae2)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(graphic,"graphic")
HXLINE( 164)		Bool _hx_tmp = !(this->_cache->exists(graphic->key));
HXDLIN( 164)		if (_hx_tmp) {
HXLINE( 166)			this->_cache->set(graphic->key,graphic);
            		}
HXLINE( 168)		return graphic;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,addGraphic,return )

 ::flixel::graphics::FlxGraphic BitmapFrontEnd_obj::get(::String key){
            	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","get",0x0f1de223,"flixel.system.frontEnds.BitmapFrontEnd.get","flixel/system/frontEnds/BitmapFrontEnd.hx",178,0x91a05ae2)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(key,"key")
HXLINE( 178)		return this->_cache->get(key).StaticCast<  ::flixel::graphics::FlxGraphic >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,get,return )

::String BitmapFrontEnd_obj::findKeyForBitmap( ::openfl::_legacy::display::BitmapData bmd){
            	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","findKeyForBitmap",0x03085a65,"flixel.system.frontEnds.BitmapFrontEnd.findKeyForBitmap","flixel/system/frontEnds/BitmapFrontEnd.hx",188,0x91a05ae2)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(bmd,"bmd")
HXLINE( 189)		{
HXLINE( 189)			HX_VARI(  ::Dynamic,tmp) = this->_cache->keys();
HXDLIN( 189)			while(true){
HXLINE( 189)				Bool _hx_tmp = !(( (Bool)( ::Dynamic(tmp->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic))()) ));
HXDLIN( 189)				if (_hx_tmp) {
HXLINE( 189)					goto _hx_goto_4;
            				}
HXDLIN( 189)				HX_VARI( ::String,key) = ( (::String)( ::Dynamic(tmp->__Field(HX_("next",f3,84,02,49),hx::paccDynamic))()) );
HXLINE( 191)				Bool _hx_tmp1 = hx::IsEq( this->_cache->get(key).StaticCast<  ::flixel::graphics::FlxGraphic >()->bitmap,bmd );
HXDLIN( 191)				if (_hx_tmp1) {
HXLINE( 192)					return key;
            				}
            			}
            			_hx_goto_4:;
            		}
HXLINE( 194)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,findKeyForBitmap,return )

::String BitmapFrontEnd_obj::getKeyForClass(hx::Class source){
            	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","getKeyForClass",0x26696fcb,"flixel.system.frontEnds.BitmapFrontEnd.getKeyForClass","flixel/system/frontEnds/BitmapFrontEnd.hx",205,0x91a05ae2)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(source,"source")
HXLINE( 205)		return ::Type_obj::getClassName(source);
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,getKeyForClass,return )

::String BitmapFrontEnd_obj::generateKey(::String systemKey,::String userKey,hx::Null< Bool >  __o_unique){
Bool unique = __o_unique.Default(false);
            	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","generateKey",0xe3b3c7f7,"flixel.system.frontEnds.BitmapFrontEnd.generateKey","flixel/system/frontEnds/BitmapFrontEnd.hx",217,0x91a05ae2)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(systemKey,"systemKey")
            	HX_STACK_ARG(userKey,"userKey")
            	HX_STACK_ARG(unique,"unique")
HXLINE( 218)		HX_VARI( ::String,key) = userKey;
HXLINE( 219)		Bool _hx_tmp = hx::IsNull( userKey );
HXDLIN( 219)		if (_hx_tmp) {
HXLINE( 220)			key = systemKey;
            		}
HXLINE( 222)		Bool _hx_tmp1;
HXDLIN( 222)		if (!(unique)) {
HXLINE( 222)			_hx_tmp1 = hx::IsNull( key );
            		}
            		else {
HXLINE( 222)			_hx_tmp1 = true;
            		}
HXDLIN( 222)		if (_hx_tmp1) {
HXLINE( 223)			key = this->getUniqueKey(key);
            		}
HXLINE( 225)		return key;
            	}


HX_DEFINE_DYNAMIC_FUNC3(BitmapFrontEnd_obj,generateKey,return )

::String BitmapFrontEnd_obj::getUniqueKey(::String baseKey){
            	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","getUniqueKey",0x2898506b,"flixel.system.frontEnds.BitmapFrontEnd.getUniqueKey","flixel/system/frontEnds/BitmapFrontEnd.hx",235,0x91a05ae2)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(baseKey,"baseKey")
HXLINE( 236)		Bool _hx_tmp = hx::IsNull( baseKey );
HXDLIN( 236)		if (_hx_tmp) {
HXLINE( 237)			baseKey = HX_("pixels",2d,ef,a9,8c);
            		}
HXLINE( 239)		Bool _hx_tmp1;
HXDLIN( 239)		Bool _hx_tmp2 = this->_cache->exists(baseKey);
HXDLIN( 239)		if (_hx_tmp2) {
HXLINE( 239)			_hx_tmp1 = hx::IsNotNull( this->_cache->get(baseKey).StaticCast<  ::flixel::graphics::FlxGraphic >() );
            		}
            		else {
HXLINE( 239)			_hx_tmp1 = false;
            		}
HXDLIN( 239)		if (_hx_tmp1) {
HXLINE( 241)			HX_VARI( Int,inc) = (int)0;
HXLINE( 242)			HX_VAR( ::String,ukey);
HXLINE( 243)			while(true){
HXLINE( 245)				Int _hx_tmp3 = inc++;
HXDLIN( 245)				ukey = (baseKey + _hx_tmp3);
HXLINE( 247)				Bool _hx_tmp4;
HXDLIN( 247)				Bool _hx_tmp5 = this->_cache->exists(ukey);
HXDLIN( 247)				if (_hx_tmp5) {
HXLINE( 247)					_hx_tmp4 = hx::IsNotNull( this->_cache->get(ukey).StaticCast<  ::flixel::graphics::FlxGraphic >() );
            				}
            				else {
HXLINE( 247)					_hx_tmp4 = false;
            				}
HXLINE( 243)				if (!(_hx_tmp4)) {
HXLINE( 243)					goto _hx_goto_5;
            				}
            			}
            			_hx_goto_5:;
HXLINE( 248)			baseKey = ukey;
            		}
HXLINE( 250)		return baseKey;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,getUniqueKey,return )

::String BitmapFrontEnd_obj::getKeyWithSpacesAndBorders(::String baseKey, ::flixel::math::FlxPoint frameSize, ::flixel::math::FlxPoint frameSpacing, ::flixel::math::FlxPoint frameBorder, ::flixel::math::FlxRect region){
            	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","getKeyWithSpacesAndBorders",0x04327ebf,"flixel.system.frontEnds.BitmapFrontEnd.getKeyWithSpacesAndBorders","flixel/system/frontEnds/BitmapFrontEnd.hx",264,0x91a05ae2)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(baseKey,"baseKey")
            	HX_STACK_ARG(frameSize,"frameSize")
            	HX_STACK_ARG(frameSpacing,"frameSpacing")
            	HX_STACK_ARG(frameBorder,"frameBorder")
            	HX_STACK_ARG(region,"region")
HXLINE( 265)		HX_VARI( ::String,result) = baseKey;
HXLINE( 267)		Bool _hx_tmp = hx::IsNotNull( region );
HXDLIN( 267)		if (_hx_tmp) {
HXLINE( 268)			result = (baseKey + (((((((HX_("_Region:",27,96,a5,81) + region->x) + HX_("_",5f,00,00,00)) + region->y) + HX_("_",5f,00,00,00)) + region->width) + HX_("_",5f,00,00,00)) + region->height));
            		}
HXLINE( 270)		Bool _hx_tmp1 = hx::IsNotNull( frameSize );
HXDLIN( 270)		if (_hx_tmp1) {
HXLINE( 271)			hx::AddEq(result,(((HX_("_FrameSize:",2b,0e,3a,29) + frameSize->x) + HX_("_",5f,00,00,00)) + frameSize->y));
            		}
HXLINE( 273)		Bool _hx_tmp2 = hx::IsNotNull( frameSpacing );
HXDLIN( 273)		if (_hx_tmp2) {
HXLINE( 274)			hx::AddEq(result,(((HX_("_Spaces:",0e,b0,c1,98) + frameSpacing->x) + HX_("_",5f,00,00,00)) + frameSpacing->y));
            		}
HXLINE( 276)		Bool _hx_tmp3 = hx::IsNotNull( frameBorder );
HXDLIN( 276)		if (_hx_tmp3) {
HXLINE( 277)			hx::AddEq(result,(((HX_("_Border:",2f,83,f2,39) + frameBorder->x) + HX_("_",5f,00,00,00)) + frameBorder->y));
            		}
HXLINE( 279)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC5(BitmapFrontEnd_obj,getKeyWithSpacesAndBorders,return )

void BitmapFrontEnd_obj::remove( ::flixel::graphics::FlxGraphic graphic){
            	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","remove",0x5bfef0d7,"flixel.system.frontEnds.BitmapFrontEnd.remove","flixel/system/frontEnds/BitmapFrontEnd.hx",288,0x91a05ae2)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(graphic,"graphic")
HXLINE( 288)		Bool _hx_tmp = hx::IsNotNull( graphic );
HXDLIN( 288)		if (_hx_tmp) {
HXLINE( 289)			this->removeByKey(graphic->key);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,remove,(void))

void BitmapFrontEnd_obj::removeByKey(::String key){
            	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","removeByKey",0x593bffb1,"flixel.system.frontEnds.BitmapFrontEnd.removeByKey","flixel/system/frontEnds/BitmapFrontEnd.hx",298,0x91a05ae2)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(key,"key")
HXLINE( 298)		Bool _hx_tmp;
HXDLIN( 298)		Bool _hx_tmp1 = hx::IsNotNull( key );
HXDLIN( 298)		if (_hx_tmp1) {
HXLINE( 298)			_hx_tmp = this->_cache->exists(key);
            		}
            		else {
HXLINE( 298)			_hx_tmp = false;
            		}
HXDLIN( 298)		if (_hx_tmp) {
HXLINE( 300)			HX_VARI(  ::flixel::graphics::FlxGraphic,obj) = this->_cache->get(key).StaticCast<  ::flixel::graphics::FlxGraphic >();
HXLINE( 301)			::openfl::_legacy::IAssetCache_obj::removeBitmapData(::openfl::_legacy::Assets_obj::cache,key);
HXLINE( 302)			this->_cache->remove(key);
HXLINE( 303)			obj->destroy();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,removeByKey,(void))

void BitmapFrontEnd_obj::removeIfNoUse( ::flixel::graphics::FlxGraphic graphic){
            	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","removeIfNoUse",0x6b036552,"flixel.system.frontEnds.BitmapFrontEnd.removeIfNoUse","flixel/system/frontEnds/BitmapFrontEnd.hx",309,0x91a05ae2)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(graphic,"graphic")
HXLINE( 309)		Bool _hx_tmp;
HXDLIN( 309)		Bool _hx_tmp1;
HXDLIN( 309)		Bool _hx_tmp2 = hx::IsNotNull( graphic );
HXDLIN( 309)		if (_hx_tmp2) {
HXLINE( 309)			Int _hx_tmp3 = graphic->get_useCount();
HXDLIN( 309)			_hx_tmp1 = (_hx_tmp3 == (int)0);
            		}
            		else {
HXLINE( 309)			_hx_tmp1 = false;
            		}
HXDLIN( 309)		if (_hx_tmp1) {
HXLINE( 309)			_hx_tmp = !(graphic->persist);
            		}
            		else {
HXLINE( 309)			_hx_tmp = false;
            		}
HXDLIN( 309)		if (_hx_tmp) {
HXLINE( 310)			this->remove(graphic);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(BitmapFrontEnd_obj,removeIfNoUse,(void))

void BitmapFrontEnd_obj::clearCache(){
            	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","clearCache",0xad367388,"flixel.system.frontEnds.BitmapFrontEnd.clearCache","flixel/system/frontEnds/BitmapFrontEnd.hx",318,0x91a05ae2)
            	HX_STACK_THIS(this)
HXLINE( 319)		Bool _hx_tmp = hx::IsNull( this->_cache );
HXDLIN( 319)		if (_hx_tmp) {
HXLINE( 320)			this->_cache =  ::haxe::ds::StringMap_obj::__new();
            		}
HXLINE( 322)		{
HXLINE( 322)			HX_VARI(  ::Dynamic,tmp) = this->_cache->keys();
HXDLIN( 322)			while(true){
HXLINE( 322)				Bool _hx_tmp1 = !(( (Bool)( ::Dynamic(tmp->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic))()) ));
HXDLIN( 322)				if (_hx_tmp1) {
HXLINE( 322)					goto _hx_goto_6;
            				}
HXDLIN( 322)				HX_VARI( ::String,key) = ( (::String)( ::Dynamic(tmp->__Field(HX_("next",f3,84,02,49),hx::paccDynamic))()) );
HXLINE( 324)				HX_VARI(  ::flixel::graphics::FlxGraphic,obj) = this->_cache->get(key).StaticCast<  ::flixel::graphics::FlxGraphic >();
HXLINE( 325)				Bool _hx_tmp2;
HXDLIN( 325)				Bool _hx_tmp3 = hx::IsNotNull( obj );
HXDLIN( 325)				if (_hx_tmp3) {
HXLINE( 325)					_hx_tmp2 = !(obj->persist);
            				}
            				else {
HXLINE( 325)					_hx_tmp2 = false;
            				}
HXDLIN( 325)				if (_hx_tmp2) {
HXLINE( 327)					this->removeByKey(key);
            				}
            			}
            			_hx_goto_6:;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,clearCache,(void))

void BitmapFrontEnd_obj::clearUnused(){
            	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","clearUnused",0x9cfedd10,"flixel.system.frontEnds.BitmapFrontEnd.clearUnused","flixel/system/frontEnds/BitmapFrontEnd.hx",338,0x91a05ae2)
            	HX_STACK_THIS(this)
HXLINE( 338)		HX_VARI(  ::Dynamic,tmp) = this->_cache->keys();
HXDLIN( 338)		while(true){
HXLINE( 338)			Bool _hx_tmp = !(( (Bool)( ::Dynamic(tmp->__Field(HX_("hasNext",6d,a5,46,18),hx::paccDynamic))()) ));
HXDLIN( 338)			if (_hx_tmp) {
HXLINE( 338)				goto _hx_goto_7;
            			}
HXDLIN( 338)			HX_VARI( ::String,key) = ( (::String)( ::Dynamic(tmp->__Field(HX_("next",f3,84,02,49),hx::paccDynamic))()) );
HXLINE( 340)			HX_VARI(  ::flixel::graphics::FlxGraphic,obj) = this->_cache->get(key).StaticCast<  ::flixel::graphics::FlxGraphic >();
HXLINE( 341)			Bool _hx_tmp1;
HXDLIN( 341)			Bool _hx_tmp2;
HXDLIN( 341)			Bool _hx_tmp3;
HXDLIN( 341)			Bool _hx_tmp4 = hx::IsNotNull( obj );
HXDLIN( 341)			if (_hx_tmp4) {
HXLINE( 341)				Int _hx_tmp5 = obj->get_useCount();
HXDLIN( 341)				_hx_tmp3 = (_hx_tmp5 <= (int)0);
            			}
            			else {
HXLINE( 341)				_hx_tmp3 = false;
            			}
HXDLIN( 341)			if (_hx_tmp3) {
HXLINE( 341)				_hx_tmp2 = !(obj->persist);
            			}
            			else {
HXLINE( 341)				_hx_tmp2 = false;
            			}
HXDLIN( 341)			if (_hx_tmp2) {
HXLINE( 341)				_hx_tmp1 = obj->get_destroyOnNoUse();
            			}
            			else {
HXLINE( 341)				_hx_tmp1 = false;
            			}
HXDLIN( 341)			if (_hx_tmp1) {
HXLINE( 343)				this->removeByKey(key);
            			}
            		}
            		_hx_goto_7:;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,clearUnused,(void))

Int BitmapFrontEnd_obj::get_maxTextureSize(){
            	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","get_maxTextureSize",0x8d42ecd4,"flixel.system.frontEnds.BitmapFrontEnd.get_maxTextureSize","flixel/system/frontEnds/BitmapFrontEnd.hx",351,0x91a05ae2)
            	HX_STACK_THIS(this)
HXLINE( 351)		return ( (Int)(::openfl::_legacy::gl::GL_obj::lime_gl_get_parameter((int)3379)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,get_maxTextureSize,return )

 ::flixel::graphics::frames::FlxFrame BitmapFrontEnd_obj::get_whitePixel(){
            	HX_STACK_FRAME("flixel.system.frontEnds.BitmapFrontEnd","get_whitePixel",0xa476cef9,"flixel.system.frontEnds.BitmapFrontEnd.get_whitePixel","flixel/system/frontEnds/BitmapFrontEnd.hx",356,0x91a05ae2)
            	HX_STACK_THIS(this)
HXLINE( 357)		Bool _hx_tmp = hx::IsNull( this->_whitePixel );
HXDLIN( 357)		if (_hx_tmp) {
HXLINE( 359)			HX_VARI(  ::openfl::_legacy::display::BitmapData,bd) =  ::openfl::_legacy::display::BitmapData_obj::__new((int)10,(int)10,true,(int)-1,null());
HXLINE( 360)			HX_VARI(  ::flixel::graphics::FlxGraphic,graphic) = ::flixel::FlxG_obj::bitmap->add(bd,true,HX_("whitePixels",b6,92,ba,9e));
HXLINE( 361)			graphic->persist = true;
HXLINE( 362)			this->_whitePixel = graphic->get_imageFrame()->get_frame();
            		}
HXLINE( 365)		return this->_whitePixel;
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFrontEnd_obj,get_whitePixel,return )


BitmapFrontEnd_obj::BitmapFrontEnd_obj()
{
}

void BitmapFrontEnd_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapFrontEnd);
	HX_MARK_MEMBER_NAME(_cache,"_cache");
	HX_MARK_MEMBER_NAME(_whitePixel,"_whitePixel");
	HX_MARK_END_CLASS();
}

void BitmapFrontEnd_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_cache,"_cache");
	HX_VISIT_MEMBER_NAME(_whitePixel,"_whitePixel");
}

hx::Val BitmapFrontEnd_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn()); }
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn()); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_cache") ) { return hx::Val( _cache); }
		if (HX_FIELD_EQ(inName,"create") ) { return hx::Val( create_dyn()); }
		if (HX_FIELD_EQ(inName,"remove") ) { return hx::Val( remove_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onContext") ) { return hx::Val( onContext_dyn()); }
		if (HX_FIELD_EQ(inName,"dumpCache") ) { return hx::Val( dumpCache_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"whitePixel") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_whitePixel()); }
		if (HX_FIELD_EQ(inName,"checkCache") ) { return hx::Val( checkCache_dyn()); }
		if (HX_FIELD_EQ(inName,"addGraphic") ) { return hx::Val( addGraphic_dyn()); }
		if (HX_FIELD_EQ(inName,"clearCache") ) { return hx::Val( clearCache_dyn()); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_whitePixel") ) { return hx::Val( _whitePixel); }
		if (HX_FIELD_EQ(inName,"undumpCache") ) { return hx::Val( undumpCache_dyn()); }
		if (HX_FIELD_EQ(inName,"generateKey") ) { return hx::Val( generateKey_dyn()); }
		if (HX_FIELD_EQ(inName,"removeByKey") ) { return hx::Val( removeByKey_dyn()); }
		if (HX_FIELD_EQ(inName,"clearUnused") ) { return hx::Val( clearUnused_dyn()); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getUniqueKey") ) { return hx::Val( getUniqueKey_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"removeIfNoUse") ) { return hx::Val( removeIfNoUse_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"maxTextureSize") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_maxTextureSize()); }
		if (HX_FIELD_EQ(inName,"onAssetsReload") ) { return hx::Val( onAssetsReload_dyn()); }
		if (HX_FIELD_EQ(inName,"getKeyForClass") ) { return hx::Val( getKeyForClass_dyn()); }
		if (HX_FIELD_EQ(inName,"get_whitePixel") ) { return hx::Val( get_whitePixel_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"findKeyForBitmap") ) { return hx::Val( findKeyForBitmap_dyn()); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_maxTextureSize") ) { return hx::Val( get_maxTextureSize_dyn()); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"getKeyWithSpacesAndBorders") ) { return hx::Val( getKeyWithSpacesAndBorders_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val BitmapFrontEnd_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"_cache") ) { _cache=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_whitePixel") ) { _whitePixel=inValue.Cast<  ::flixel::graphics::frames::FlxFrame >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapFrontEnd_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("maxTextureSize","\xf8","\xa6","\x7c","\x0a"));
	outFields->push(HX_HCSTRING("whitePixel","\x1d","\xa7","\xf7","\x19"));
	outFields->push(HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"));
	outFields->push(HX_HCSTRING("_whitePixel","\x3c","\x74","\x81","\xec"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo BitmapFrontEnd_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(BitmapFrontEnd_obj,_cache),HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c")},
	{hx::fsObject /*::flixel::graphics::frames::FlxFrame*/ ,(int)offsetof(BitmapFrontEnd_obj,_whitePixel),HX_HCSTRING("_whitePixel","\x3c","\x74","\x81","\xec")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *BitmapFrontEnd_obj_sStaticStorageInfo = 0;
#endif

static ::String BitmapFrontEnd_obj_sMemberFields[] = {
	HX_HCSTRING("_cache","\x83","\xe1","\xfb","\x3c"),
	HX_HCSTRING("_whitePixel","\x3c","\x74","\x81","\xec"),
	HX_HCSTRING("onAssetsReload","\xfb","\x33","\x88","\x63"),
	HX_HCSTRING("onContext","\x90","\x4e","\x22","\xf1"),
	HX_HCSTRING("dumpCache","\x6e","\x30","\x39","\xdb"),
	HX_HCSTRING("undumpCache","\xf5","\xb6","\xdf","\x60"),
	HX_HCSTRING("checkCache","\x5a","\x9c","\x04","\x51"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	HX_HCSTRING("addGraphic","\x87","\x86","\x91","\xdb"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("findKeyForBitmap","\x12","\x70","\x29","\x81"),
	HX_HCSTRING("getKeyForClass","\x38","\xd0","\xdf","\x11"),
	HX_HCSTRING("generateKey","\x6a","\x91","\x24","\x46"),
	HX_HCSTRING("getUniqueKey","\x98","\xcb","\xd7","\xe8"),
	HX_HCSTRING("getKeyWithSpacesAndBorders","\xac","\x4e","\xae","\x2a"),
	HX_HCSTRING("remove","\x44","\x9c","\x88","\x04"),
	HX_HCSTRING("removeByKey","\x24","\xc9","\xac","\xbb"),
	HX_HCSTRING("removeIfNoUse","\x85","\xb1","\x4f","\xe2"),
	HX_HCSTRING("clearCache","\x75","\xd9","\x1e","\x16"),
	HX_HCSTRING("clearUnused","\x83","\xa6","\x6f","\xff"),
	HX_HCSTRING("get_maxTextureSize","\xc1","\x87","\x16","\xa6"),
	HX_HCSTRING("get_whitePixel","\x66","\x2f","\xed","\x8f"),
	::String(null()) };

static void BitmapFrontEnd_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapFrontEnd_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BitmapFrontEnd_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapFrontEnd_obj::__mClass,"__mClass");
};

#endif

hx::Class BitmapFrontEnd_obj::__mClass;

void BitmapFrontEnd_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.frontEnds.BitmapFrontEnd","\x7b","\xb7","\xf6","\x16");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BitmapFrontEnd_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BitmapFrontEnd_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BitmapFrontEnd_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BitmapFrontEnd_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BitmapFrontEnd_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BitmapFrontEnd_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace frontEnds
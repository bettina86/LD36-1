// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl__legacy_IAssetCache
#define INCLUDED_openfl__legacy_IAssetCache

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_legacy,IAssetCache)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,media,Sound)
HX_DECLARE_CLASS3(openfl,_legacy,text,Font)

namespace openfl{
namespace _legacy{


class HXCPP_CLASS_ATTRIBUTES IAssetCache_obj {
	public:
		typedef hx::Object super;
		HX_DO_INTERFACE_RTTI;

		Bool (hx::Object :: *_hx_get_enabled)(); 
		static inline Bool get_enabled( ::Dynamic _hx_) {
			return (_hx_.mPtr->*( static_cast< ::openfl::_legacy::IAssetCache_obj *>(_hx_.mPtr->_hx_getInterface(0xef443e83)))->_hx_get_enabled)();
		}
		Bool (hx::Object :: *_hx_set_enabled)(Bool value); 
		static inline Bool set_enabled( ::Dynamic _hx_,Bool value) {
			return (_hx_.mPtr->*( static_cast< ::openfl::_legacy::IAssetCache_obj *>(_hx_.mPtr->_hx_getInterface(0xef443e83)))->_hx_set_enabled)(value);
		}
		void (hx::Object :: *_hx_clear)(::String prefix); 
		static inline void clear( ::Dynamic _hx_,::String prefix) {
			(_hx_.mPtr->*( static_cast< ::openfl::_legacy::IAssetCache_obj *>(_hx_.mPtr->_hx_getInterface(0xef443e83)))->_hx_clear)(prefix);
		}
		 ::openfl::_legacy::display::BitmapData (hx::Object :: *_hx_getBitmapData)(::String id); 
		static inline  ::openfl::_legacy::display::BitmapData getBitmapData( ::Dynamic _hx_,::String id) {
			return (_hx_.mPtr->*( static_cast< ::openfl::_legacy::IAssetCache_obj *>(_hx_.mPtr->_hx_getInterface(0xef443e83)))->_hx_getBitmapData)(id);
		}
		 ::openfl::_legacy::text::Font (hx::Object :: *_hx_getFont)(::String id); 
		static inline  ::openfl::_legacy::text::Font getFont( ::Dynamic _hx_,::String id) {
			return (_hx_.mPtr->*( static_cast< ::openfl::_legacy::IAssetCache_obj *>(_hx_.mPtr->_hx_getInterface(0xef443e83)))->_hx_getFont)(id);
		}
		 ::openfl::_legacy::media::Sound (hx::Object :: *_hx_getSound)(::String id); 
		static inline  ::openfl::_legacy::media::Sound getSound( ::Dynamic _hx_,::String id) {
			return (_hx_.mPtr->*( static_cast< ::openfl::_legacy::IAssetCache_obj *>(_hx_.mPtr->_hx_getInterface(0xef443e83)))->_hx_getSound)(id);
		}
		Bool (hx::Object :: *_hx_hasBitmapData)(::String id); 
		static inline Bool hasBitmapData( ::Dynamic _hx_,::String id) {
			return (_hx_.mPtr->*( static_cast< ::openfl::_legacy::IAssetCache_obj *>(_hx_.mPtr->_hx_getInterface(0xef443e83)))->_hx_hasBitmapData)(id);
		}
		Bool (hx::Object :: *_hx_hasFont)(::String id); 
		static inline Bool hasFont( ::Dynamic _hx_,::String id) {
			return (_hx_.mPtr->*( static_cast< ::openfl::_legacy::IAssetCache_obj *>(_hx_.mPtr->_hx_getInterface(0xef443e83)))->_hx_hasFont)(id);
		}
		Bool (hx::Object :: *_hx_hasSound)(::String id); 
		static inline Bool hasSound( ::Dynamic _hx_,::String id) {
			return (_hx_.mPtr->*( static_cast< ::openfl::_legacy::IAssetCache_obj *>(_hx_.mPtr->_hx_getInterface(0xef443e83)))->_hx_hasSound)(id);
		}
		Bool (hx::Object :: *_hx_removeBitmapData)(::String id); 
		static inline Bool removeBitmapData( ::Dynamic _hx_,::String id) {
			return (_hx_.mPtr->*( static_cast< ::openfl::_legacy::IAssetCache_obj *>(_hx_.mPtr->_hx_getInterface(0xef443e83)))->_hx_removeBitmapData)(id);
		}
		Bool (hx::Object :: *_hx_removeFont)(::String id); 
		static inline Bool removeFont( ::Dynamic _hx_,::String id) {
			return (_hx_.mPtr->*( static_cast< ::openfl::_legacy::IAssetCache_obj *>(_hx_.mPtr->_hx_getInterface(0xef443e83)))->_hx_removeFont)(id);
		}
		Bool (hx::Object :: *_hx_removeSound)(::String id); 
		static inline Bool removeSound( ::Dynamic _hx_,::String id) {
			return (_hx_.mPtr->*( static_cast< ::openfl::_legacy::IAssetCache_obj *>(_hx_.mPtr->_hx_getInterface(0xef443e83)))->_hx_removeSound)(id);
		}
		void (hx::Object :: *_hx_setBitmapData)(::String id, ::openfl::_legacy::display::BitmapData bitmapData); 
		static inline void setBitmapData( ::Dynamic _hx_,::String id, ::openfl::_legacy::display::BitmapData bitmapData) {
			(_hx_.mPtr->*( static_cast< ::openfl::_legacy::IAssetCache_obj *>(_hx_.mPtr->_hx_getInterface(0xef443e83)))->_hx_setBitmapData)(id,bitmapData);
		}
		void (hx::Object :: *_hx_setFont)(::String id, ::openfl::_legacy::text::Font font); 
		static inline void setFont( ::Dynamic _hx_,::String id, ::openfl::_legacy::text::Font font) {
			(_hx_.mPtr->*( static_cast< ::openfl::_legacy::IAssetCache_obj *>(_hx_.mPtr->_hx_getInterface(0xef443e83)))->_hx_setFont)(id,font);
		}
		void (hx::Object :: *_hx_setSound)(::String id, ::openfl::_legacy::media::Sound sound); 
		static inline void setSound( ::Dynamic _hx_,::String id, ::openfl::_legacy::media::Sound sound) {
			(_hx_.mPtr->*( static_cast< ::openfl::_legacy::IAssetCache_obj *>(_hx_.mPtr->_hx_getInterface(0xef443e83)))->_hx_setSound)(id,sound);
		}
};

} // end namespace openfl
} // end namespace _legacy

#endif /* INCLUDED_openfl__legacy_IAssetCache */ 

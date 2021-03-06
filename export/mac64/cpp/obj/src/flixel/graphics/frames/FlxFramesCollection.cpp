// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrameCollectionType
#include <flixel/graphics/frames/FlxFrameCollectionType.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFramesCollection
#include <flixel/graphics/frames/FlxFramesCollection.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxRect
#include <flixel/util/FlxPool_flixel_math_FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
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
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

namespace flixel{
namespace graphics{
namespace frames{

void FlxFramesCollection_obj::__construct( ::flixel::graphics::FlxGraphic parent,::hx::EnumBase type, ::flixel::math::FlxPoint border){
            	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","new",0x41834b71,"flixel.graphics.frames.FlxFramesCollection.new","flixel/graphics/frames/FlxFramesCollection.hx",52,0xe09dd200)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(parent,"parent")
            	HX_STACK_ARG(type,"type")
            	HX_STACK_ARG(border,"border")
HXLINE(  53)		this->parent = parent;
HXLINE(  54)		this->type = type;
HXLINE(  55)		 ::flixel::math::FlxPoint _hx_tmp;
HXDLIN(  55)		Bool _hx_tmp1 = hx::IsNull( border );
HXDLIN(  55)		if (_hx_tmp1) {
HXLINE(  55)			HX_VARI(  ::flixel::math::FlxPoint,point) = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);
HXDLIN(  55)			point->_inPool = false;
HXDLIN(  55)			_hx_tmp = point;
            		}
            		else {
HXLINE(  55)			_hx_tmp = border;
            		}
HXDLIN(  55)		this->border = _hx_tmp;
HXLINE(  56)		this->frames = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  57)		this->framesHash =  ::haxe::ds::StringMap_obj::__new();
HXLINE(  59)		Bool _hx_tmp2 = hx::IsNotNull( parent );
HXDLIN(  59)		if (_hx_tmp2) {
HXLINE(  61)			parent->addFrameCollection(hx::ObjectPtr<OBJ_>(this));
            		}
            	}

Dynamic FlxFramesCollection_obj::__CreateEmpty() { return new FlxFramesCollection_obj; }

hx::ObjectPtr< FlxFramesCollection_obj > FlxFramesCollection_obj::__new( ::flixel::graphics::FlxGraphic parent,::hx::EnumBase type, ::flixel::math::FlxPoint border)
{
	hx::ObjectPtr< FlxFramesCollection_obj > _hx_result = new FlxFramesCollection_obj();
	_hx_result->__construct(parent,type,border);
	return _hx_result;
}

Dynamic FlxFramesCollection_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxFramesCollection_obj > _hx_result = new FlxFramesCollection_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_graphics_frames_FlxFramesCollection__hx_flixel_util_IFlxDestroyable= {
	( void (hx::Object::*)())&::flixel::graphics::frames::FlxFramesCollection_obj::destroy,
};

void *FlxFramesCollection_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_graphics_frames_FlxFramesCollection__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::getByName(::String name){
            	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","getByName",0xec0f52c9,"flixel.graphics.frames.FlxFramesCollection.getByName","flixel/graphics/frames/FlxFramesCollection.hx",73,0xe09dd200)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(name,"name")
HXLINE(  73)		return this->framesHash->get(name).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,getByName,return )

 ::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::getByIndex(Int index){
            	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","getByIndex",0xc8e928d4,"flixel.graphics.frames.FlxFramesCollection.getByIndex","flixel/graphics/frames/FlxFramesCollection.hx",84,0xe09dd200)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(index,"index")
HXLINE(  84)		return this->frames->__get(index).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,getByIndex,return )

Int FlxFramesCollection_obj::getIndexByName(::String name){
            	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","getIndexByName",0x9190d40d,"flixel.graphics.frames.FlxFramesCollection.getIndexByName","flixel/graphics/frames/FlxFramesCollection.hx",94,0xe09dd200)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(name,"name")
HXLINE(  95)		HX_VARI( Int,numFrames) = this->frames->length;
HXLINE(  98)		{
HXLINE(  98)			HX_VARI( Int,_g1) = (int)0;
HXDLIN(  98)			while((_g1 < numFrames)){
HXLINE(  98)				HX_VARI( Int,i) = _g1++;
HXLINE( 100)				if ((this->frames->__get(i).StaticCast<  ::flixel::graphics::frames::FlxFrame >()->name == name)) {
HXLINE( 102)					return i;
            				}
            			}
            		}
HXLINE( 106)		return (int)-1;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,getIndexByName,return )

Int FlxFramesCollection_obj::getFrameIndex( ::flixel::graphics::frames::FlxFrame frame){
            	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","getFrameIndex",0x9be9862c,"flixel.graphics.frames.FlxFramesCollection.getFrameIndex","flixel/graphics/frames/FlxFramesCollection.hx",117,0xe09dd200)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(frame,"frame")
HXLINE( 117)		return this->frames->indexOf(frame,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,getFrameIndex,return )

void FlxFramesCollection_obj::destroy(){
            	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","destroy",0x3c5f048b,"flixel.graphics.frames.FlxFramesCollection.destroy","flixel/graphics/frames/FlxFramesCollection.hx",121,0xe09dd200)
            	HX_STACK_THIS(this)
HXLINE( 122)		this->frames = ::flixel::util::FlxDestroyUtil_obj::destroyArray(this->frames);
HXLINE( 123)		this->border = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(this->border)) );
HXLINE( 124)		this->framesHash = null();
HXLINE( 125)		this->parent = null();
HXLINE( 126)		this->type = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFramesCollection_obj,destroy,(void))

 ::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::addEmptyFrame( ::flixel::math::FlxRect size){
            	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","addEmptyFrame",0x8f5bf232,"flixel.graphics.frames.FlxFramesCollection.addEmptyFrame","flixel/graphics/frames/FlxFramesCollection.hx",137,0xe09dd200)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(size,"size")
HXLINE( 138)		HX_VARI(  ::flixel::graphics::frames::FlxFrame,frame) =  ::flixel::graphics::frames::FlxFrame_obj::__new(this->parent,null(),null(),null());
HXLINE( 139)		frame->type = (int)2;
HXLINE( 140)		Float X = (int)0;
HXDLIN( 140)		Float Y = (int)0;
HXDLIN( 140)		Float Width = (int)0;
HXDLIN( 140)		Float Height = (int)0;
HXDLIN( 140)		HX_VARI(  ::flixel::math::FlxRect,_this) = ::flixel::math::FlxRect_obj::_pool->get();
HXDLIN( 140)		_this->x = X;
HXDLIN( 140)		_this->y = Y;
HXDLIN( 140)		_this->width = Width;
HXDLIN( 140)		_this->height = Height;
HXDLIN( 140)		_this->_inPool = false;
HXDLIN( 140)		frame->set_frame(_this);
HXLINE( 141)		frame->sourceSize->set(size->width,size->height);
HXLINE( 142)		this->frames->push(frame);
HXLINE( 143)		return frame;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,addEmptyFrame,return )

 ::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::addSpriteSheetFrame( ::flixel::math::FlxRect region){
            	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","addSpriteSheetFrame",0x98036ac5,"flixel.graphics.frames.FlxFramesCollection.addSpriteSheetFrame","flixel/graphics/frames/FlxFramesCollection.hx",153,0xe09dd200)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(region,"region")
HXLINE( 154)		HX_VARI(  ::flixel::graphics::frames::FlxFrame,frame) =  ::flixel::graphics::frames::FlxFrame_obj::__new(this->parent,null(),null(),null());
HXLINE( 155)		frame->set_frame(region);
HXLINE( 156)		frame->sourceSize->set(region->width,region->height);
HXLINE( 157)		frame->offset->set((int)0,(int)0);
HXLINE( 158)		return this->pushFrame(frame);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,addSpriteSheetFrame,return )

 ::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::addAtlasFrame( ::flixel::math::FlxRect frame, ::flixel::math::FlxPoint sourceSize, ::flixel::math::FlxPoint offset,::String name,hx::Null< Int >  __o_angle,hx::Null< Bool >  __o_flipX,hx::Null< Bool >  __o_flipY){
Int angle = __o_angle.Default(0);
Bool flipX = __o_flipX.Default(false);
Bool flipY = __o_flipY.Default(false);
            	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","addAtlasFrame",0xf1c62eb4,"flixel.graphics.frames.FlxFramesCollection.addAtlasFrame","flixel/graphics/frames/FlxFramesCollection.hx",173,0xe09dd200)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(frame,"frame")
            	HX_STACK_ARG(sourceSize,"sourceSize")
            	HX_STACK_ARG(offset,"offset")
            	HX_STACK_ARG(name,"name")
            	HX_STACK_ARG(angle,"angle")
            	HX_STACK_ARG(flipX,"flipX")
            	HX_STACK_ARG(flipY,"flipY")
HXLINE( 174)		Bool _hx_tmp;
HXDLIN( 174)		Bool _hx_tmp1 = hx::IsNotNull( name );
HXDLIN( 174)		if (_hx_tmp1) {
HXLINE( 174)			_hx_tmp = this->framesHash->exists(name);
            		}
            		else {
HXLINE( 174)			_hx_tmp = false;
            		}
HXDLIN( 174)		if (_hx_tmp) {
HXLINE( 176)			return this->framesHash->get(name).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
            		}
HXLINE( 179)		HX_VARI(  ::flixel::graphics::frames::FlxFrame,texFrame) =  ::flixel::graphics::frames::FlxFrame_obj::__new(this->parent,angle,flipX,flipY);
HXLINE( 180)		texFrame->name = name;
HXLINE( 181)		texFrame->sourceSize->set(sourceSize->x,sourceSize->y);
HXLINE( 182)		texFrame->offset->set(offset->x,offset->y);
HXLINE( 183)		texFrame->set_frame(frame);
HXLINE( 185)		sourceSize = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(sourceSize)) );
HXLINE( 186)		offset = ( ( ::flixel::math::FlxPoint)(::flixel::util::FlxDestroyUtil_obj::put(offset)) );
HXLINE( 188)		return this->pushFrame(texFrame);
            	}


HX_DEFINE_DYNAMIC_FUNC7(FlxFramesCollection_obj,addAtlasFrame,return )

 ::flixel::graphics::frames::FlxFrame FlxFramesCollection_obj::pushFrame( ::flixel::graphics::frames::FlxFrame frameObj){
            	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","pushFrame",0xac097dc4,"flixel.graphics.frames.FlxFramesCollection.pushFrame","flixel/graphics/frames/FlxFramesCollection.hx",198,0xe09dd200)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(frameObj,"frameObj")
HXLINE( 199)		HX_VARI( ::String,name) = frameObj->name;
HXLINE( 200)		Bool _hx_tmp;
HXDLIN( 200)		Bool _hx_tmp1 = hx::IsNotNull( name );
HXDLIN( 200)		if (_hx_tmp1) {
HXLINE( 200)			_hx_tmp = this->framesHash->exists(name);
            		}
            		else {
HXLINE( 200)			_hx_tmp = false;
            		}
HXDLIN( 200)		if (_hx_tmp) {
HXLINE( 202)			return this->framesHash->get(name).StaticCast<  ::flixel::graphics::frames::FlxFrame >();
            		}
HXLINE( 205)		this->frames->push(frameObj);
HXLINE( 206)		frameObj->cacheFrameMatrix();
HXLINE( 208)		Bool _hx_tmp2 = hx::IsNotNull( name );
HXDLIN( 208)		if (_hx_tmp2) {
HXLINE( 210)			this->framesHash->set(name,frameObj);
            		}
HXLINE( 213)		return frameObj;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,pushFrame,return )

 ::flixel::graphics::frames::FlxFramesCollection FlxFramesCollection_obj::addBorder( ::flixel::math::FlxPoint border){
            	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","addBorder",0x7da91fbe,"flixel.graphics.frames.FlxFramesCollection.addBorder","flixel/graphics/frames/FlxFramesCollection.hx",224,0xe09dd200)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(border,"border")
HXLINE( 224)		HX_STACK_DO_THROW(HX_("To be overriden in subclasses",8b,78,89,60));
HXDLIN( 224)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFramesCollection_obj,addBorder,return )

::String FlxFramesCollection_obj::toString(){
            	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","toString",0xfe5297fb,"flixel.graphics.frames.FlxFramesCollection.toString","flixel/graphics/frames/FlxFramesCollection.hx",230,0xe09dd200)
            	HX_STACK_THIS(this)
HXLINE( 231)		HX_VARI(  ::flixel::util::LabelValuePair,_this) = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 231)		_this->label = HX_("frames",a6,af,85,ac);
HXDLIN( 231)		_this->value = this->frames;
HXLINE( 232)		HX_VARI_NAME(  ::flixel::util::LabelValuePair,_this1,"_this") = ::flixel::util::LabelValuePair_obj::_pool->get();
HXDLIN( 232)		_this1->label = HX_("type",ba,f2,08,4d);
HXDLIN( 232)		_this1->value = this->type;
HXLINE( 230)		return ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(2)->init(0,_this)->init(1,_this1));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFramesCollection_obj,toString,return )

Int FlxFramesCollection_obj::get_numFrames(){
            	HX_STACK_FRAME("flixel.graphics.frames.FlxFramesCollection","get_numFrames",0xbd2728b4,"flixel.graphics.frames.FlxFramesCollection.get_numFrames","flixel/graphics/frames/FlxFramesCollection.hx",237,0xe09dd200)
            	HX_STACK_THIS(this)
HXLINE( 237)		return this->frames->length;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFramesCollection_obj,get_numFrames,return )


FlxFramesCollection_obj::FlxFramesCollection_obj()
{
}

void FlxFramesCollection_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxFramesCollection);
	HX_MARK_MEMBER_NAME(frames,"frames");
	HX_MARK_MEMBER_NAME(framesHash,"framesHash");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(border,"border");
	HX_MARK_END_CLASS();
}

void FlxFramesCollection_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(frames,"frames");
	HX_VISIT_MEMBER_NAME(framesHash,"framesHash");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(border,"border");
}

hx::Val FlxFramesCollection_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { return hx::Val( frames); }
		if (HX_FIELD_EQ(inName,"parent") ) { return hx::Val( parent); }
		if (HX_FIELD_EQ(inName,"border") ) { return hx::Val( border); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn()); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"numFrames") ) { if (inCallProp == hx::paccAlways) return hx::Val(get_numFrames()); }
		if (HX_FIELD_EQ(inName,"getByName") ) { return hx::Val( getByName_dyn()); }
		if (HX_FIELD_EQ(inName,"pushFrame") ) { return hx::Val( pushFrame_dyn()); }
		if (HX_FIELD_EQ(inName,"addBorder") ) { return hx::Val( addBorder_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"framesHash") ) { return hx::Val( framesHash); }
		if (HX_FIELD_EQ(inName,"getByIndex") ) { return hx::Val( getByIndex_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getFrameIndex") ) { return hx::Val( getFrameIndex_dyn()); }
		if (HX_FIELD_EQ(inName,"addEmptyFrame") ) { return hx::Val( addEmptyFrame_dyn()); }
		if (HX_FIELD_EQ(inName,"addAtlasFrame") ) { return hx::Val( addAtlasFrame_dyn()); }
		if (HX_FIELD_EQ(inName,"get_numFrames") ) { return hx::Val( get_numFrames_dyn()); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getIndexByName") ) { return hx::Val( getIndexByName_dyn()); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"addSpriteSheetFrame") ) { return hx::Val( addSpriteSheetFrame_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxFramesCollection_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::hx::EnumBase >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"frames") ) { frames=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::flixel::graphics::FlxGraphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"border") ) { border=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"framesHash") ) { framesHash=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxFramesCollection_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"));
	outFields->push(HX_HCSTRING("numFrames","\x8c","\xfa","\x86","\x5d"));
	outFields->push(HX_HCSTRING("framesHash","\x94","\xd6","\xee","\xb6"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxFramesCollection_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(FlxFramesCollection_obj,frames),HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(FlxFramesCollection_obj,framesHash),HX_HCSTRING("framesHash","\x94","\xd6","\xee","\xb6")},
	{hx::fsObject /*::flixel::graphics::FlxGraphic*/ ,(int)offsetof(FlxFramesCollection_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{hx::fsObject /*::flixel::graphics::frames::FlxFrameCollectionType*/ ,(int)offsetof(FlxFramesCollection_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxFramesCollection_obj,border),HX_HCSTRING("border","\xec","\x4c","\x1a","\x64")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxFramesCollection_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxFramesCollection_obj_sMemberFields[] = {
	HX_HCSTRING("frames","\xa6","\xaf","\x85","\xac"),
	HX_HCSTRING("framesHash","\x94","\xd6","\xee","\xb6"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("border","\xec","\x4c","\x1a","\x64"),
	HX_HCSTRING("getByName","\xf8","\xb4","\xa4","\x8a"),
	HX_HCSTRING("getByIndex","\xc5","\xaf","\x09","\xed"),
	HX_HCSTRING("getIndexByName","\x7e","\x27","\xfe","\xba"),
	HX_HCSTRING("getFrameIndex","\xdb","\x2b","\xad","\xfd"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("addEmptyFrame","\xe1","\x97","\x1f","\xf1"),
	HX_HCSTRING("addSpriteSheetFrame","\xb4","\xfd","\xbc","\xf0"),
	HX_HCSTRING("addAtlasFrame","\x63","\xd4","\x89","\x53"),
	HX_HCSTRING("pushFrame","\xf3","\xdf","\x9e","\x4a"),
	HX_HCSTRING("addBorder","\xed","\x81","\x3e","\x1c"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("get_numFrames","\x63","\xce","\xea","\x1e"),
	::String(null()) };

static void FlxFramesCollection_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxFramesCollection_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxFramesCollection_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxFramesCollection_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxFramesCollection_obj::__mClass;

void FlxFramesCollection_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.graphics.frames.FlxFramesCollection","\xff","\xbe","\x62","\x54");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxFramesCollection_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxFramesCollection_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxFramesCollection_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxFramesCollection_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxFramesCollection_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxFramesCollection_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames

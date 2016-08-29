// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ArrayBufferView
#include <openfl/_legacy/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif

namespace openfl{
namespace _legacy{
namespace utils{

void ArrayBufferView_obj::__construct( ::Dynamic lengthOrBuffer,hx::Null< Int >  __o_byteOffset, ::Dynamic length){
Int byteOffset = __o_byteOffset.Default(0);
            	HX_STACK_FRAME("openfl._legacy.utils.ArrayBufferView","new",0xc608e72f,"openfl._legacy.utils.ArrayBufferView.new","openfl/_legacy/utils/ArrayBufferView.hx",24,0xb2044664)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(lengthOrBuffer,"lengthOrBuffer")
            	HX_STACK_ARG(byteOffset,"byteOffset")
            	HX_STACK_ARG(length,"length")
HXLINE(  26)		Bool _hx_tmp = ::Std_obj::is(lengthOrBuffer,hx::ClassOf< ::Int >());
HXDLIN(  26)		if (_hx_tmp) {
HXLINE(  28)			this->byteLength = ::Std_obj::_hx_int(lengthOrBuffer);
HXLINE(  29)			this->byteOffset = (int)0;
HXLINE(  30)			Int _hx_tmp1 = ::Std_obj::_hx_int(lengthOrBuffer);
HXDLIN(  30)			this->buffer =  ::openfl::_legacy::utils::ByteArray_obj::__new(_hx_tmp1);
            		}
            		else {
HXLINE(  34)			this->buffer = lengthOrBuffer;
HXLINE(  36)			Bool _hx_tmp2 = hx::IsNull( this->buffer );
HXDLIN(  36)			if (_hx_tmp2) {
HXLINE(  38)				HX_STACK_DO_THROW(HX_("Invalid input buffer",3f,39,2d,2c));
            			}
HXLINE(  42)			this->byteOffset = byteOffset;
HXLINE(  44)			if ((byteOffset > this->buffer->length)) {
HXLINE(  46)				HX_STACK_DO_THROW(HX_("Invalid starting position",80,e7,c8,7a));
            			}
HXLINE(  50)			Bool _hx_tmp3 = hx::IsNull( length );
HXDLIN(  50)			if (_hx_tmp3) {
HXLINE(  52)				this->byteLength = (this->buffer->length - byteOffset);
            			}
            			else {
HXLINE(  56)				this->byteLength = length;
HXLINE(  58)				if (((this->byteLength + byteOffset) > this->buffer->length)) {
HXLINE(  60)					HX_STACK_DO_THROW(HX_("Invalid buffer length",fd,68,79,28));
            				}
            			}
            		}
HXLINE(  68)		this->buffer->bigEndian = false;
HXLINE(  71)		this->bytes = this->buffer->b;
            	}

Dynamic ArrayBufferView_obj::__CreateEmpty() { return new ArrayBufferView_obj; }

hx::ObjectPtr< ArrayBufferView_obj > ArrayBufferView_obj::__new( ::Dynamic lengthOrBuffer,hx::Null< Int >  __o_byteOffset, ::Dynamic length)
{
	hx::ObjectPtr< ArrayBufferView_obj > _hx_result = new ArrayBufferView_obj();
	_hx_result->__construct(lengthOrBuffer,__o_byteOffset,length);
	return _hx_result;
}

Dynamic ArrayBufferView_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ArrayBufferView_obj > _hx_result = new ArrayBufferView_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

static ::openfl::_legacy::utils::IMemoryRange_obj _hx_openfl__legacy_utils_ArrayBufferView__hx_openfl__legacy_utils_IMemoryRange= {
	(  ::openfl::_legacy::utils::ByteArray (hx::Object::*)())&::openfl::_legacy::utils::ArrayBufferView_obj::getByteBuffer,
	( Int (hx::Object::*)())&::openfl::_legacy::utils::ArrayBufferView_obj::getStart,
	( Int (hx::Object::*)())&::openfl::_legacy::utils::ArrayBufferView_obj::getLength,
};

void *ArrayBufferView_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x0ecba48c: return &_hx_openfl__legacy_utils_ArrayBufferView__hx_openfl__legacy_utils_IMemoryRange;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

 ::openfl::_legacy::utils::ByteArray ArrayBufferView_obj::getByteBuffer(){
            	HX_STACK_FRAME("openfl._legacy.utils.ArrayBufferView","getByteBuffer",0x3010f1ed,"openfl._legacy.utils.ArrayBufferView.getByteBuffer","openfl/_legacy/utils/ArrayBufferView.hx",79,0xb2044664)
            	HX_STACK_THIS(this)
HXLINE(  79)		return this->buffer;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ArrayBufferView_obj,getByteBuffer,return )

Float ArrayBufferView_obj::getFloat32(Int position){
            	HX_STACK_FRAME("openfl._legacy.utils.ArrayBufferView","getFloat32",0x59ee0856,"openfl._legacy.utils.ArrayBufferView.getFloat32","openfl/_legacy/utils/ArrayBufferView.hx",87,0xb2044664)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(position,"position")
HXLINE(  87)		Int _hx_tmp = (position + this->byteOffset);
HXDLIN(  87)		return ::__hxcpp_memory_get_float(this->bytes,_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,getFloat32,return )

Int ArrayBufferView_obj::getInt16(Int position){
            	HX_STACK_FRAME("openfl._legacy.utils.ArrayBufferView","getInt16",0x25f27bef,"openfl._legacy.utils.ArrayBufferView.getInt16","openfl/_legacy/utils/ArrayBufferView.hx",99,0xb2044664)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(position,"position")
HXLINE(  99)		Int _hx_tmp = (position + this->byteOffset);
HXDLIN(  99)		return ::__hxcpp_memory_get_i16(this->bytes,_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,getInt16,return )

Int ArrayBufferView_obj::getInt32(Int position){
            	HX_STACK_FRAME("openfl._legacy.utils.ArrayBufferView","getInt32",0x25f27da9,"openfl._legacy.utils.ArrayBufferView.getInt32","openfl/_legacy/utils/ArrayBufferView.hx",111,0xb2044664)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(position,"position")
HXLINE( 111)		Int _hx_tmp = (position + this->byteOffset);
HXDLIN( 111)		return ::__hxcpp_memory_get_i32(this->bytes,_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,getInt32,return )

Int ArrayBufferView_obj::getLength(){
            	HX_STACK_FRAME("openfl._legacy.utils.ArrayBufferView","getLength",0x0ee2ba2b,"openfl._legacy.utils.ArrayBufferView.getLength","openfl/_legacy/utils/ArrayBufferView.hx",122,0xb2044664)
            	HX_STACK_THIS(this)
HXLINE( 122)		return this->byteLength;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ArrayBufferView_obj,getLength,return )

 ::Dynamic ArrayBufferView_obj::getNativePointer(){
            	HX_STACK_FRAME("openfl._legacy.utils.ArrayBufferView","getNativePointer",0xd6cecd41,"openfl._legacy.utils.ArrayBufferView.getNativePointer","openfl/_legacy/utils/ArrayBufferView.hx",130,0xb2044664)
            	HX_STACK_THIS(this)
HXLINE( 130)		return this->buffer->getNativePointer();
            	}


HX_DEFINE_DYNAMIC_FUNC0(ArrayBufferView_obj,getNativePointer,return )

Int ArrayBufferView_obj::getStart(){
            	HX_STACK_FRAME("openfl._legacy.utils.ArrayBufferView","getStart",0xebdd5ebd,"openfl._legacy.utils.ArrayBufferView.getStart","openfl/_legacy/utils/ArrayBufferView.hx",140,0xb2044664)
            	HX_STACK_THIS(this)
HXLINE( 140)		return this->byteOffset;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ArrayBufferView_obj,getStart,return )

Int ArrayBufferView_obj::getUInt8(Int position){
            	HX_STACK_FRAME("openfl._legacy.utils.ArrayBufferView","getUInt8",0xf64839d9,"openfl._legacy.utils.ArrayBufferView.getUInt8","openfl/_legacy/utils/ArrayBufferView.hx",148,0xb2044664)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(position,"position")
HXLINE( 148)		Int _hx_tmp = (position + this->byteOffset);
HXDLIN( 148)		return ::__hxcpp_memory_get_byte(this->bytes,_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC1(ArrayBufferView_obj,getUInt8,return )

void ArrayBufferView_obj::setFloat32(Int position,Float value){
            	HX_STACK_FRAME("openfl._legacy.utils.ArrayBufferView","setFloat32",0x5d6ba6ca,"openfl._legacy.utils.ArrayBufferView.setFloat32","openfl/_legacy/utils/ArrayBufferView.hx",160,0xb2044664)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(position,"position")
            	HX_STACK_ARG(value,"value")
HXLINE( 160)		Int _hx_tmp = (position + this->byteOffset);
HXDLIN( 160)		::__hxcpp_memory_set_float(this->bytes,_hx_tmp,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,setFloat32,(void))

void ArrayBufferView_obj::setInt16(Int position,Int value){
            	HX_STACK_FRAME("openfl._legacy.utils.ArrayBufferView","setInt16",0xd44fd563,"openfl._legacy.utils.ArrayBufferView.setInt16","openfl/_legacy/utils/ArrayBufferView.hx",172,0xb2044664)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(position,"position")
            	HX_STACK_ARG(value,"value")
HXLINE( 172)		Int _hx_tmp = (position + this->byteOffset);
HXDLIN( 172)		::__hxcpp_memory_set_i16(this->bytes,_hx_tmp,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,setInt16,(void))

void ArrayBufferView_obj::setInt32(Int position,Int value){
            	HX_STACK_FRAME("openfl._legacy.utils.ArrayBufferView","setInt32",0xd44fd71d,"openfl._legacy.utils.ArrayBufferView.setInt32","openfl/_legacy/utils/ArrayBufferView.hx",184,0xb2044664)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(position,"position")
            	HX_STACK_ARG(value,"value")
HXLINE( 184)		Int _hx_tmp = (position + this->byteOffset);
HXDLIN( 184)		::__hxcpp_memory_set_i32(this->bytes,_hx_tmp,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,setInt32,(void))

void ArrayBufferView_obj::setUInt8(Int position,Int value){
            	HX_STACK_FRAME("openfl._legacy.utils.ArrayBufferView","setUInt8",0xa4a5934d,"openfl._legacy.utils.ArrayBufferView.setUInt8","openfl/_legacy/utils/ArrayBufferView.hx",196,0xb2044664)
            	HX_STACK_THIS(this)
            	HX_STACK_ARG(position,"position")
            	HX_STACK_ARG(value,"value")
HXLINE( 196)		Int _hx_tmp = (position + this->byteOffset);
HXDLIN( 196)		::__hxcpp_memory_set_byte(this->bytes,_hx_tmp,value);
            	}


HX_DEFINE_DYNAMIC_FUNC2(ArrayBufferView_obj,setUInt8,(void))

::String ArrayBufferView_obj::invalidDataIndex;


ArrayBufferView_obj::ArrayBufferView_obj()
{
}

void ArrayBufferView_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrayBufferView);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(byteOffset,"byteOffset");
	HX_MARK_MEMBER_NAME(byteLength,"byteLength");
	HX_MARK_MEMBER_NAME(bytes,"bytes");
	HX_MARK_END_CLASS();
}

void ArrayBufferView_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(byteOffset,"byteOffset");
	HX_VISIT_MEMBER_NAME(byteLength,"byteLength");
	HX_VISIT_MEMBER_NAME(bytes,"bytes");
}

hx::Val ArrayBufferView_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { return hx::Val( bytes); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return hx::Val( buffer); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getInt16") ) { return hx::Val( getInt16_dyn()); }
		if (HX_FIELD_EQ(inName,"getInt32") ) { return hx::Val( getInt32_dyn()); }
		if (HX_FIELD_EQ(inName,"getStart") ) { return hx::Val( getStart_dyn()); }
		if (HX_FIELD_EQ(inName,"getUInt8") ) { return hx::Val( getUInt8_dyn()); }
		if (HX_FIELD_EQ(inName,"setInt16") ) { return hx::Val( setInt16_dyn()); }
		if (HX_FIELD_EQ(inName,"setInt32") ) { return hx::Val( setInt32_dyn()); }
		if (HX_FIELD_EQ(inName,"setUInt8") ) { return hx::Val( setUInt8_dyn()); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getLength") ) { return hx::Val( getLength_dyn()); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteOffset") ) { return hx::Val( byteOffset); }
		if (HX_FIELD_EQ(inName,"byteLength") ) { return hx::Val( byteLength); }
		if (HX_FIELD_EQ(inName,"getFloat32") ) { return hx::Val( getFloat32_dyn()); }
		if (HX_FIELD_EQ(inName,"setFloat32") ) { return hx::Val( setFloat32_dyn()); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getByteBuffer") ) { return hx::Val( getByteBuffer_dyn()); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getNativePointer") ) { return hx::Val( getNativePointer_dyn()); }
	}
	return super::__Field(inName,inCallProp);
}

bool ArrayBufferView_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"invalidDataIndex") ) { outValue = invalidDataIndex; return true; }
	}
	return false;
}

hx::Val ArrayBufferView_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { bytes=inValue.Cast< ::Array< unsigned char > >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast<  ::openfl::_legacy::utils::ByteArray >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"byteOffset") ) { byteOffset=inValue.Cast< Int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"byteLength") ) { byteLength=inValue.Cast< Int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool ArrayBufferView_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"invalidDataIndex") ) { invalidDataIndex=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

void ArrayBufferView_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"));
	outFields->push(HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38"));
	outFields->push(HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77"));
	outFields->push(HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ArrayBufferView_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_legacy::utils::ByteArray*/ ,(int)offsetof(ArrayBufferView_obj,buffer),HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsInt,(int)offsetof(ArrayBufferView_obj,byteOffset),HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38")},
	{hx::fsInt,(int)offsetof(ArrayBufferView_obj,byteLength),HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77")},
	{hx::fsObject /*Array< unsigned char >*/ ,(int)offsetof(ArrayBufferView_obj,bytes),HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo ArrayBufferView_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &ArrayBufferView_obj::invalidDataIndex,HX_HCSTRING("invalidDataIndex","\x91","\x8a","\x9d","\x3b")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String ArrayBufferView_obj_sMemberFields[] = {
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("byteOffset","\xbb","\x20","\x44","\x38"),
	HX_HCSTRING("byteLength","\x0e","\x1e","\x0c","\x77"),
	HX_HCSTRING("bytes","\x6b","\x08","\x98","\xbd"),
	HX_HCSTRING("getByteBuffer","\x5e","\xa2","\x0b","\x05"),
	HX_HCSTRING("getFloat32","\x45","\x17","\x6a","\x39"),
	HX_HCSTRING("getInt16","\x1e","\xa1","\xf7","\x1d"),
	HX_HCSTRING("getInt32","\xd8","\xa2","\xf7","\x1d"),
	HX_HCSTRING("getLength","\x1c","\x1e","\x5e","\x1b"),
	HX_HCSTRING("getNativePointer","\x70","\x39","\x53","\x7a"),
	HX_HCSTRING("getStart","\xec","\x83","\xe2","\xe3"),
	HX_HCSTRING("getUInt8","\x08","\x5f","\x4d","\xee"),
	HX_HCSTRING("setFloat32","\xb9","\xb5","\xe7","\x3c"),
	HX_HCSTRING("setInt16","\x92","\xfa","\x54","\xcc"),
	HX_HCSTRING("setInt32","\x4c","\xfc","\x54","\xcc"),
	HX_HCSTRING("setUInt8","\x7c","\xb8","\xaa","\x9c"),
	::String(null()) };

static void ArrayBufferView_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ArrayBufferView_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ArrayBufferView_obj::invalidDataIndex,"invalidDataIndex");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ArrayBufferView_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ArrayBufferView_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ArrayBufferView_obj::invalidDataIndex,"invalidDataIndex");
};

#endif

hx::Class ArrayBufferView_obj::__mClass;

static ::String ArrayBufferView_obj_sStaticFields[] = {
	HX_HCSTRING("invalidDataIndex","\x91","\x8a","\x9d","\x3b"),
	::String(null())
};

void ArrayBufferView_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.utils.ArrayBufferView","\xbd","\x23","\x44","\x5c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ArrayBufferView_obj::__GetStatic;
	__mClass->mSetStaticField = &ArrayBufferView_obj::__SetStatic;
	__mClass->mMarkFunc = ArrayBufferView_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ArrayBufferView_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ArrayBufferView_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ArrayBufferView_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ArrayBufferView_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArrayBufferView_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArrayBufferView_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ArrayBufferView_obj::__boot()
{
{
            	HX_STACK_FRAME("openfl._legacy.utils.ArrayBufferView","boot",0x79da6283,"openfl._legacy.utils.ArrayBufferView.boot","openfl/_legacy/utils/ArrayBufferView.hx",18,0xb2044664)
HXLINE(  18)		invalidDataIndex = HX_("Invalid data index",45,2f,02,8f);
            	}
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace utils
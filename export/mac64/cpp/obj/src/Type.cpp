// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_ValueType
#include <ValueType.h>
#endif


void Type_obj::__construct() { }

Dynamic Type_obj::__CreateEmpty() { return new Type_obj; }

hx::ObjectPtr< Type_obj > Type_obj::__new()
{
	hx::ObjectPtr< Type_obj > _hx_result = new Type_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic Type_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Type_obj > _hx_result = new Type_obj();
	_hx_result->__construct();
	return _hx_result;
}

hx::Class Type_obj::getClass( ::Dynamic o){
            	HX_STACK_FRAME("Type","getClass",0xc4e49bd6,"Type.getClass","/usr/local/lib/haxe/std/cpp/_std/Type.hx",36,0xb5f2d6e2)
            	HX_STACK_ARG(o,"o")
HXLINE(  37)		Bool _hx_tmp;
HXDLIN(  37)		Bool _hx_tmp1 = hx::IsNotNull( o );
HXDLIN(  37)		if (_hx_tmp1) {
HXLINE(  37)			_hx_tmp = !(::Reflect_obj::isObject(o));
            		}
            		else {
HXLINE(  37)			_hx_tmp = true;
            		}
HXDLIN(  37)		if (_hx_tmp) {
HXLINE(  37)			return null();
            		}
HXLINE(  38)		HX_VARI(  ::Dynamic,c) = o->__GetClass();
HXLINE(  39)		{
HXLINE(  39)			HX_VARI( ::String,_g) = ( (::String)(c->toString()) );
HXDLIN(  39)			::String _hx_switch_0 = _g;
            			if (  (_hx_switch_0==HX_("Class",18,e8,85,db)) ){
HXLINE(  42)				return null();
HXDLIN(  42)				goto _hx_goto_0;
            			}
            			if (  (_hx_switch_0==HX_("__Anon",8c,1a,43,da)) ){
HXLINE(  41)				return null();
HXDLIN(  41)				goto _hx_goto_0;
            			}
            			_hx_goto_0:;
            		}
HXLINE(  44)		return c;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getClass,return )

hx::Class Type_obj::getSuperClass(hx::Class c){
            	HX_STACK_FRAME("Type","getSuperClass",0xd9ffa85f,"Type.getSuperClass","/usr/local/lib/haxe/std/cpp/_std/Type.hx",54,0xb5f2d6e2)
            	HX_STACK_ARG(c,"c")
HXLINE(  54)		return c->GetSuper();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getSuperClass,return )

::String Type_obj::getClassName(hx::Class c){
            	HX_STACK_FRAME("Type","getClassName",0x8e66dd41,"Type.getClassName","/usr/local/lib/haxe/std/cpp/_std/Type.hx",57,0xb5f2d6e2)
            	HX_STACK_ARG(c,"c")
HXLINE(  58)		Bool _hx_tmp = hx::IsNull( c );
HXDLIN(  58)		if (_hx_tmp) {
HXLINE(  59)			return null();
            		}
HXLINE(  60)		return c->mName;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getClassName,return )

::String Type_obj::getEnumName(hx::Class e){
            	HX_STACK_FRAME("Type","getEnumName",0x9b42910e,"Type.getEnumName","/usr/local/lib/haxe/std/cpp/_std/Type.hx",64,0xb5f2d6e2)
            	HX_STACK_ARG(e,"e")
HXLINE(  64)		return ( (::String)(e->__ToString()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getEnumName,return )

hx::Class Type_obj::resolveClass(::String name){
            	HX_STACK_FRAME("Type","resolveClass",0x23b06bc0,"Type.resolveClass","/usr/local/lib/haxe/std/cpp/_std/Type.hx",67,0xb5f2d6e2)
            	HX_STACK_ARG(name,"name")
HXLINE(  68)		HX_VARI( hx::Class,result) = ::hx::Class_obj::Resolve(name);
HXLINE(  69)		Bool _hx_tmp;
HXDLIN(  69)		Bool _hx_tmp1 = hx::IsNotNull( result );
HXDLIN(  69)		if (_hx_tmp1) {
HXLINE(  69)			_hx_tmp = ( (Bool)(result->__IsEnum()) );
            		}
            		else {
HXLINE(  69)			_hx_tmp = false;
            		}
HXDLIN(  69)		if (_hx_tmp) {
HXLINE(  70)			return null();
            		}
HXLINE(  71)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,resolveClass,return )

hx::Class Type_obj::resolveEnum(::String name){
            	HX_STACK_FRAME("Type","resolveEnum",0x26394079,"Type.resolveEnum","/usr/local/lib/haxe/std/cpp/_std/Type.hx",74,0xb5f2d6e2)
            	HX_STACK_ARG(name,"name")
HXLINE(  75)		HX_VARI( hx::Class,result) = ::hx::Class_obj::Resolve(name);
HXLINE(  76)		Bool _hx_tmp;
HXDLIN(  76)		Bool _hx_tmp1 = hx::IsNotNull( result );
HXDLIN(  76)		if (_hx_tmp1) {
HXLINE(  76)			_hx_tmp = !(( (Bool)(result->__IsEnum()) ));
            		}
            		else {
HXLINE(  76)			_hx_tmp = false;
            		}
HXDLIN(  76)		if (_hx_tmp) {
HXLINE(  77)			return null();
            		}
HXLINE(  78)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,resolveEnum,return )

 ::Dynamic Type_obj::createInstance(hx::Class cl,::cpp::VirtualArray args){
            	HX_STACK_FRAME("Type","createInstance",0xab84f9c5,"Type.createInstance","/usr/local/lib/haxe/std/cpp/_std/Type.hx",81,0xb5f2d6e2)
            	HX_STACK_ARG(cl,"cl")
            	HX_STACK_ARG(args,"args")
HXLINE(  82)		Bool _hx_tmp = hx::IsNotNull( cl );
HXDLIN(  82)		if (_hx_tmp) {
HXLINE(  83)			return cl->ConstructArgs(args);
            		}
HXLINE(  84)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Type_obj,createInstance,return )

 ::Dynamic Type_obj::createEmptyInstance(hx::Class cl){
            	HX_STACK_FRAME("Type","createEmptyInstance",0xcb752312,"Type.createEmptyInstance","/usr/local/lib/haxe/std/cpp/_std/Type.hx",88,0xb5f2d6e2)
            	HX_STACK_ARG(cl,"cl")
HXLINE(  88)		return cl->ConstructEmpty();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,createEmptyInstance,return )

 ::Dynamic Type_obj::createEnum(hx::Class e,::String constr,::cpp::VirtualArray params){
            	HX_STACK_FRAME("Type","createEnum",0xd8d56d31,"Type.createEnum","/usr/local/lib/haxe/std/cpp/_std/Type.hx",92,0xb5f2d6e2)
            	HX_STACK_ARG(e,"e")
            	HX_STACK_ARG(constr,"constr")
            	HX_STACK_ARG(params,"params")
HXLINE(  92)		return e->ConstructEnum(constr,params);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Type_obj,createEnum,return )

 ::Dynamic Type_obj::createEnumIndex(hx::Class e,Int index,::cpp::VirtualArray params){
            	HX_STACK_FRAME("Type","createEnumIndex",0xd21e2c21,"Type.createEnumIndex","/usr/local/lib/haxe/std/cpp/_std/Type.hx",95,0xb5f2d6e2)
            	HX_STACK_ARG(e,"e")
            	HX_STACK_ARG(index,"index")
            	HX_STACK_ARG(params,"params")
HXLINE(  96)		::Array< ::String > _hx_tmp = ::Type_obj::getEnumConstructs(e);
HXDLIN(  96)		HX_VARI( ::String,c) = _hx_tmp->__get(index);
HXLINE(  97)		Bool _hx_tmp1 = hx::IsNull( c );
HXDLIN(  97)		if (_hx_tmp1) {
HXLINE(  97)			HX_STACK_DO_THROW((index + HX_(" is not a valid enum constructor index",13,f3,cb,7c)));
            		}
HXLINE(  98)		return ::Type_obj::createEnum(e,c,params);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Type_obj,createEnumIndex,return )

::Array< ::String > Type_obj::getClassFields(hx::Class c){
            	HX_STACK_FRAME("Type","getClassFields",0x7edf22ef,"Type.getClassFields","/usr/local/lib/haxe/std/cpp/_std/Type.hx",106,0xb5f2d6e2)
            	HX_STACK_ARG(c,"c")
HXLINE( 106)		return ( (::Array< ::String >)(c->GetClassFields()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getClassFields,return )

::Array< ::String > Type_obj::getEnumConstructs(hx::Class e){
            	HX_STACK_FRAME("Type","getEnumConstructs",0x7f46cf7f,"Type.getEnumConstructs","/usr/local/lib/haxe/std/cpp/_std/Type.hx",110,0xb5f2d6e2)
            	HX_STACK_ARG(e,"e")
HXLINE( 110)		return ( (::Array< ::String >)(e->GetClassFields()) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,getEnumConstructs,return )

::hx::EnumBase Type_obj::_hx_typeof( ::Dynamic v){
            	HX_STACK_FRAME("Type","typeof",0xd6c51d65,"Type.typeof","/usr/local/lib/haxe/std/cpp/_std/Type.hx",113,0xb5f2d6e2)
            	HX_STACK_ARG(v,"v")
HXLINE( 114)		Bool _hx_tmp = hx::IsNull( v );
HXDLIN( 114)		if (_hx_tmp) {
HXLINE( 114)			return ::ValueType_obj::TNull_dyn();
            		}
HXLINE( 115)		HX_VARI( Int,t) = ( (Int)(v->__GetType()) );
HXLINE( 116)		switch((int)(t)){
            			case (int)1: {
HXLINE( 120)				return ::ValueType_obj::TFloat_dyn();
            			}
            			break;
            			case (int)2: {
HXLINE( 118)				return ::ValueType_obj::TBool_dyn();
            			}
            			break;
            			case (int)4: {
HXLINE( 122)				return ::ValueType_obj::TObject_dyn();
            			}
            			break;
            			case (int)6: {
HXLINE( 121)				return ::ValueType_obj::TFunction_dyn();
            			}
            			break;
            			case (int)7: {
HXLINE( 123)				 ::Dynamic _hx_tmp1 = v->__GetClass();
HXDLIN( 123)				return ::ValueType_obj::TEnum(_hx_tmp1);
            			}
            			break;
            			case (int)255: {
HXLINE( 119)				return ::ValueType_obj::TInt_dyn();
            			}
            			break;
            			default:{
HXLINE( 125)				 ::Dynamic _hx_tmp2 = v->__GetClass();
HXDLIN( 125)				return ::ValueType_obj::TClass(_hx_tmp2);
            			}
            		}
HXLINE( 116)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,_hx_typeof,return )

Bool Type_obj::enumEq( ::Dynamic a, ::Dynamic b){
            	HX_STACK_FRAME("Type","enumEq",0x855650e1,"Type.enumEq","/usr/local/lib/haxe/std/cpp/_std/Type.hx",130,0xb5f2d6e2)
            	HX_STACK_ARG(a,"a")
            	HX_STACK_ARG(b,"b")
HXLINE( 130)		return hx::IsEq( a,b );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Type_obj,enumEq,return )

::cpp::VirtualArray Type_obj::enumParameters( ::Dynamic e){
            	HX_STACK_FRAME("Type","enumParameters",0xf9e1b41f,"Type.enumParameters","/usr/local/lib/haxe/std/cpp/_std/Type.hx",140,0xb5f2d6e2)
            	HX_STACK_ARG(e,"e")
HXLINE( 140)		return ( ( ::hx::EnumBase)(e) )->_hx_getParameters();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Type_obj,enumParameters,return )


Type_obj::Type_obj()
{
}

bool Type_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"typeof") ) { outValue = _hx_typeof_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"enumEq") ) { outValue = enumEq_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getClass") ) { outValue = getClass_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createEnum") ) { outValue = createEnum_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"getEnumName") ) { outValue = getEnumName_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"resolveEnum") ) { outValue = resolveEnum_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getClassName") ) { outValue = getClassName_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"resolveClass") ) { outValue = resolveClass_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getSuperClass") ) { outValue = getSuperClass_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"createInstance") ) { outValue = createInstance_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"getClassFields") ) { outValue = getClassFields_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"enumParameters") ) { outValue = enumParameters_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"createEnumIndex") ) { outValue = createEnumIndex_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getEnumConstructs") ) { outValue = getEnumConstructs_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"createEmptyInstance") ) { outValue = createEmptyInstance_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Type_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *Type_obj_sStaticStorageInfo = 0;
#endif

static void Type_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Type_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Type_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Type_obj::__mClass,"__mClass");
};

#endif

hx::Class Type_obj::__mClass;

static ::String Type_obj_sStaticFields[] = {
	HX_HCSTRING("getClass","\xc2","\x87","\x2f","\xa8"),
	HX_HCSTRING("getSuperClass","\xf3","\x04","\x7a","\x04"),
	HX_HCSTRING("getClassName","\x2d","\x2f","\x94","\xeb"),
	HX_HCSTRING("getEnumName","\xa2","\xe0","\x5a","\x53"),
	HX_HCSTRING("resolveClass","\xac","\xbd","\xdd","\x80"),
	HX_HCSTRING("resolveEnum","\x0d","\x90","\x51","\xde"),
	HX_HCSTRING("createInstance","\xb1","\x9e","\x1b","\xac"),
	HX_HCSTRING("createEmptyInstance","\xa6","\x26","\x85","\xce"),
	HX_HCSTRING("createEnum","\x1d","\x2c","\xa4","\x55"),
	HX_HCSTRING("createEnumIndex","\xb5","\xd5","\x57","\x55"),
	HX_HCSTRING("getClassFields","\xdb","\xc7","\x75","\x7f"),
	HX_HCSTRING("getEnumConstructs","\x13","\x06","\x6d","\x83"),
	HX_HCSTRING("typeof","\x51","\xf6","\x36","\x57"),
	HX_HCSTRING("enumEq","\xcd","\x29","\xc8","\x05"),
	HX_HCSTRING("enumParameters","\x0b","\x59","\x78","\xfa"),
	::String(null())
};

void Type_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Type","\xda","\x1e","\xe2","\x37");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Type_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Type_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Type_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Type_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Type_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Type_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Type_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}


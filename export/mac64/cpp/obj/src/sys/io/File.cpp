// Generated by Haxe 3.3.0
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_io_FileOutput
#include <sys/io/FileOutput.h>
#endif

namespace sys{
namespace io{

void File_obj::__construct() { }

Dynamic File_obj::__CreateEmpty() { return new File_obj; }

hx::ObjectPtr< File_obj > File_obj::__new()
{
	hx::ObjectPtr< File_obj > _hx_result = new File_obj();
	_hx_result->__construct();
	return _hx_result;
}

Dynamic File_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< File_obj > _hx_result = new File_obj();
	_hx_result->__construct();
	return _hx_result;
}

::String File_obj::getContent(::String path){
            	HX_STACK_FRAME("sys.io.File","getContent",0xb28b4a0e,"sys.io.File.getContent","/usr/local/lib/haxe/std/cpp/_std/sys/io/File.hx",30,0x3272313d)
            	HX_STACK_ARG(path,"path")
HXLINE(  30)		return _hx_std_file_contents_string(path);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(File_obj,getContent,return )

 ::sys::io::FileOutput File_obj::write(::String path,hx::Null< Bool >  __o_binary){
Bool binary = __o_binary.Default(true);
            	HX_STACK_FRAME("sys.io.File","write",0xfec8a9f4,"sys.io.File.write","/usr/local/lib/haxe/std/cpp/_std/sys/io/File.hx",55,0x3272313d)
            	HX_STACK_ARG(path,"path")
            	HX_STACK_ARG(binary,"binary")
HXLINE(  55)		::String _hx_tmp;
HXDLIN(  55)		if (binary) {
HXLINE(  55)			_hx_tmp = HX_("wb",0b,68,00,00);
            		}
            		else {
HXLINE(  55)			_hx_tmp = HX_("w",77,00,00,00);
            		}
HXDLIN(  55)		 ::Dynamic _hx_tmp1 = _hx_std_file_open(path,_hx_tmp);
HXDLIN(  55)		return  ::sys::io::FileOutput_obj::__new(_hx_tmp1);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(File_obj,write,return )


File_obj::File_obj()
{
}

bool File_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"write") ) { outValue = write_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getContent") ) { outValue = getContent_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *File_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *File_obj_sStaticStorageInfo = 0;
#endif

static void File_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(File_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void File_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(File_obj::__mClass,"__mClass");
};

#endif

hx::Class File_obj::__mClass;

static ::String File_obj_sStaticFields[] = {
	HX_HCSTRING("getContent","\x43","\x13","\xd9","\x68"),
	HX_HCSTRING("write","\xdf","\x6c","\x59","\xd0"),
	::String(null())
};

void File_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("sys.io.File","\xc3","\xef","\x8d","\xeb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &File_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = File_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(File_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< File_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = File_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = File_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = File_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sys
} // end namespace io

// Generated by Haxe 3.3.0
#ifndef INCLUDED_openfl_display3D_Context3D
#define INCLUDED_openfl_display3D_Context3D

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,DirectRenderer)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,OpenGLView)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,geom,Rectangle)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLFramebuffer)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLObject)
HX_DECLARE_CLASS3(openfl,_legacy,gl,GLRenderbuffer)
HX_DECLARE_CLASS3(openfl,_legacy,utils,ByteArray)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataInput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IDataOutput)
HX_DECLARE_CLASS3(openfl,_legacy,utils,IMemoryRange)
HX_DECLARE_CLASS2(openfl,display3D,Context3D)
HX_DECLARE_CLASS2(openfl,display3D,Context3DBufferUsage)
HX_DECLARE_CLASS2(openfl,display3D,Context3DMipFilter)
HX_DECLARE_CLASS2(openfl,display3D,Context3DProgramType)
HX_DECLARE_CLASS2(openfl,display3D,Context3DTextureFilter)
HX_DECLARE_CLASS2(openfl,display3D,Context3DTextureFormat)
HX_DECLARE_CLASS2(openfl,display3D,Context3DVertexBufferFormat)
HX_DECLARE_CLASS2(openfl,display3D,Context3DWrapMode)
HX_DECLARE_CLASS2(openfl,display3D,IndexBuffer3D)
HX_DECLARE_CLASS2(openfl,display3D,Program3D)
HX_DECLARE_CLASS2(openfl,display3D,VertexBuffer3D)
HX_DECLARE_CLASS3(openfl,display3D,_Context3D,SamplerState)
HX_DECLARE_CLASS3(openfl,display3D,textures,CubeTexture)
HX_DECLARE_CLASS3(openfl,display3D,textures,RectangleTexture)
HX_DECLARE_CLASS3(openfl,display3D,textures,Texture)
HX_DECLARE_CLASS3(openfl,display3D,textures,TextureBase)
HX_DECLARE_CLASS2(openfl,geom,Matrix3D)

namespace openfl{
namespace display3D{


class HXCPP_CLASS_ATTRIBUTES Context3D_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Context3D_obj OBJ_;
		Context3D_obj();

	public:
		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display3D.Context3D")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.display3D.Context3D"); }
		static hx::ObjectPtr< Context3D_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Context3D_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Context3D","\x40","\x3c","\xcf","\xb8"); }

		static void __boot();
		static Int TEXTURE_MAX_ANISOTROPY_EXT;
		static Int MAX_SAMPLERS;
		static Int MAX_TEXTURE_MAX_ANISOTROPY_EXT;
		static Bool anisotropySupportTested;
		static Bool supportsAnisotropy;
		static Int maxSupportedAnisotropy;
		::String driverInfo;
		Bool enableErrorChecking;
		Int blendDestinationFactor;
		Bool blendEnabled;
		Int blendSourceFactor;
		 ::openfl::display3D::Program3D currentProgram;
		Bool disposed;
		Bool drawing;
		 ::openfl::_legacy::gl::GLFramebuffer framebuffer;
		::Array< ::Dynamic> indexBuffersCreated;
		 ::openfl::_legacy::display::OpenGLView ogl;
		::Array< ::Dynamic> programsCreated;
		 ::openfl::_legacy::gl::GLRenderbuffer renderbuffer;
		::Array< ::Dynamic> samplerParameters;
		 ::openfl::_legacy::geom::Rectangle scrollRect;
		 ::openfl::_legacy::gl::GLRenderbuffer stencilbuffer;
		Int stencilCompareMode;
		Int stencilRef;
		Int stencilReadMask;
		::Array< ::Dynamic> texturesCreated;
		::Array< ::Dynamic> vertexBuffersCreated;
		Float _yFlip;
		Bool backBufferDepthAndStencil;
		Bool rttDepthAndStencil;
		 ::openfl::_legacy::geom::Rectangle scissorRectangle;
		Bool renderToTexture;
		Int rttWidth;
		Int rttHeight;
		void clear(hx::Null< Float >  red,hx::Null< Float >  green,hx::Null< Float >  blue,hx::Null< Float >  alpha,hx::Null< Float >  depth,hx::Null< Int >  stencil,hx::Null< Int >  mask);
		::Dynamic clear_dyn();

		void configureBackBuffer(Int width,Int height,Int antiAlias,hx::Null< Bool >  enableDepthAndStencil);
		::Dynamic configureBackBuffer_dyn();

		void setBackBufferViewPort( ::Dynamic x, ::Dynamic y, ::Dynamic width, ::Dynamic height);
		::Dynamic setBackBufferViewPort_dyn();

		void updateBackBufferViewPort();
		::Dynamic updateBackBufferViewPort_dyn();

		void updateDepthAndStencilState();
		::Dynamic updateDepthAndStencilState_dyn();

		 ::openfl::display3D::textures::CubeTexture createCubeTexture(Int size,::hx::EnumBase format,Bool optimizeForRenderToTexture,hx::Null< Int >  streamingLevels);
		::Dynamic createCubeTexture_dyn();

		 ::openfl::display3D::IndexBuffer3D createIndexBuffer(Int numIndices,::hx::EnumBase bufferUsage);
		::Dynamic createIndexBuffer_dyn();

		 ::openfl::display3D::Program3D createProgram();
		::Dynamic createProgram_dyn();

		 ::openfl::display3D::textures::RectangleTexture createRectangleTexture(Int width,Int height,::hx::EnumBase format,Bool optimizeForRenderToTexture);
		::Dynamic createRectangleTexture_dyn();

		 ::openfl::display3D::textures::Texture createTexture(Int width,Int height,::hx::EnumBase format,Bool optimizeForRenderToTexture,hx::Null< Int >  streamingLevels);
		::Dynamic createTexture_dyn();

		 ::openfl::display3D::VertexBuffer3D createVertexBuffer(Int numVertices,Int data32PerVertex,::hx::EnumBase bufferUsage);
		::Dynamic createVertexBuffer_dyn();

		void _hx___deleteTexture( ::openfl::display3D::textures::TextureBase texture);
		::Dynamic _hx___deleteTexture_dyn();

		void _hx___deleteVertexBuffer( ::openfl::display3D::VertexBuffer3D buffer);
		::Dynamic _hx___deleteVertexBuffer_dyn();

		void _hx___deleteIndexBuffer( ::openfl::display3D::IndexBuffer3D buffer);
		::Dynamic _hx___deleteIndexBuffer_dyn();

		void _hx___deleteProgram( ::openfl::display3D::Program3D program);
		::Dynamic _hx___deleteProgram_dyn();

		void dispose();
		::Dynamic dispose_dyn();

		void drawToBitmapData( ::openfl::_legacy::display::BitmapData destination);
		::Dynamic drawToBitmapData_dyn();

		void drawTriangles( ::openfl::display3D::IndexBuffer3D indexBuffer,hx::Null< Int >  firstIndex,hx::Null< Int >  numTriangles);
		::Dynamic drawTriangles_dyn();

		void present();
		::Dynamic present_dyn();

		void removeRenderMethod( ::Dynamic func);
		::Dynamic removeRenderMethod_dyn();

		void setBlendFactors(Int sourceFactor,Int destinationFactor);
		::Dynamic setBlendFactors_dyn();

		void setColorMask(Bool red,Bool green,Bool blue,Bool alpha);
		::Dynamic setColorMask_dyn();

		void setCulling(Int triangleFaceToCull);
		::Dynamic setCulling_dyn();

		void setDepthTest(Bool depthMask,Int passCompareMode);
		::Dynamic setDepthTest_dyn();

		void setGLSLProgramConstantsFromByteArray(::String locationName, ::openfl::_legacy::utils::ByteArray data,hx::Null< Int >  byteArrayOffset);
		::Dynamic setGLSLProgramConstantsFromByteArray_dyn();

		void setGLSLProgramConstantsFromMatrix(::String locationName, ::openfl::geom::Matrix3D matrix,hx::Null< Bool >  transposedMatrix);
		::Dynamic setGLSLProgramConstantsFromMatrix_dyn();

		void setGLSLProgramConstantsFromVector4(::String locationName,::Array< Float > data,hx::Null< Int >  startIndex);
		::Dynamic setGLSLProgramConstantsFromVector4_dyn();

		void setGLSLTextureAt(::String locationName, ::openfl::display3D::textures::TextureBase texture,Int textureIndex);
		::Dynamic setGLSLTextureAt_dyn();

		void setGLSLVertexBufferAt(::String locationName, ::openfl::display3D::VertexBuffer3D buffer,hx::Null< Int >  bufferOffset,::hx::EnumBase format);
		::Dynamic setGLSLVertexBufferAt_dyn();

		void setProgram( ::openfl::display3D::Program3D program3D);
		::Dynamic setProgram_dyn();

		void setProgramConstantsFromByteArray(::hx::EnumBase programType,Int firstRegister,Int numRegisters, ::openfl::_legacy::utils::ByteArray data,Int byteArrayOffset);
		::Dynamic setProgramConstantsFromByteArray_dyn();

		void setProgramConstantsFromMatrix(::hx::EnumBase programType,Int firstRegister, ::openfl::geom::Matrix3D matrix,hx::Null< Bool >  transposedMatrix);
		::Dynamic setProgramConstantsFromMatrix_dyn();

		void setProgramConstantsFromVector(::hx::EnumBase programType,Int firstRegister,::Array< Float > data,hx::Null< Int >  numRegisters);
		::Dynamic setProgramConstantsFromVector_dyn();

		void setRenderMethod( ::Dynamic func);
		::Dynamic setRenderMethod_dyn();

		void setRenderToBackBuffer();
		::Dynamic setRenderToBackBuffer_dyn();

		void setRenderToTexture( ::openfl::display3D::textures::TextureBase texture,hx::Null< Bool >  enableDepthAndStencil,hx::Null< Int >  antiAlias,hx::Null< Int >  surfaceSelector);
		::Dynamic setRenderToTexture_dyn();

		void setSamplerStateAt(Int sampler,::hx::EnumBase wrap,::hx::EnumBase filter,::hx::EnumBase mipfilter);
		::Dynamic setSamplerStateAt_dyn();

		void setScissorRectangle( ::openfl::_legacy::geom::Rectangle rectangle);
		::Dynamic setScissorRectangle_dyn();

		void updateScissorRectangle();
		::Dynamic updateScissorRectangle_dyn();

		void setStencilActions( ::Dynamic triangleFace, ::Dynamic compareMode, ::Dynamic actionOnBothPass, ::Dynamic actionOnDepthFail, ::Dynamic actionOnDepthPassStencilFail);
		::Dynamic setStencilActions_dyn();

		void setStencilReferenceValue(Int referenceValue,hx::Null< Int >  readMask,hx::Null< Int >  writeMask);
		::Dynamic setStencilReferenceValue_dyn();

		void setTextureAt(Int sampler, ::openfl::display3D::textures::TextureBase texture);
		::Dynamic setTextureAt_dyn();

		void setTextureParameters( ::openfl::display3D::textures::TextureBase texture,::hx::EnumBase wrap,::hx::EnumBase filter,::hx::EnumBase mipfilter);
		::Dynamic setTextureParameters_dyn();

		void setVertexBufferAt(Int index, ::openfl::display3D::VertexBuffer3D buffer,hx::Null< Int >  bufferOffset,::hx::EnumBase format);
		::Dynamic setVertexBufferAt_dyn();

		::String _hx___getUniformLocationNameFromAgalRegisterIndex(::hx::EnumBase programType,Int firstRegister);
		::Dynamic _hx___getUniformLocationNameFromAgalRegisterIndex_dyn();

		void _hx___updateBlendStatus();
		::Dynamic _hx___updateBlendStatus_dyn();

};

} // end namespace openfl
} // end namespace display3D

#endif /* INCLUDED_openfl_display3D_Context3D */ 

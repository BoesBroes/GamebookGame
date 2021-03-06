#ifndef INCLUDED_lime_graphics_opengl__WebGL2Context_WebGL2Context_Impl_
#define INCLUDED_lime_graphics_opengl__WebGL2Context_WebGL2Context_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,_backend,native,NativeGLRenderContext)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLContextType)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS4(lime,graphics,opengl,_WebGL2Context,WebGL2Context_Impl_)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(lime,utils,BytePointerData)
namespace lime{
namespace graphics{
namespace opengl{
namespace _WebGL2Context{


class HXCPP_CLASS_ATTRIBUTES  WebGL2Context_Impl__obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef WebGL2Context_Impl__obj OBJ_;
		WebGL2Context_Impl__obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl._WebGL2Context.WebGL2Context_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< WebGL2Context_Impl__obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WebGL2Context_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("WebGL2Context_Impl_","\x96","\x61","\xf7","\x0a"); }

		static void __boot();
		static ::lime::utils::BytePointerData __tempPointer;
		static int get_DEPTH_BUFFER_BIT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DEPTH_BUFFER_BIT_dyn();

		static int get_STENCIL_BUFFER_BIT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_STENCIL_BUFFER_BIT_dyn();

		static int get_COLOR_BUFFER_BIT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_COLOR_BUFFER_BIT_dyn();

		static int get_POINTS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_POINTS_dyn();

		static int get_LINES( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_LINES_dyn();

		static int get_LINE_LOOP( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_LINE_LOOP_dyn();

		static int get_LINE_STRIP( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_LINE_STRIP_dyn();

		static int get_TRIANGLES( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TRIANGLES_dyn();

		static int get_TRIANGLE_STRIP( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TRIANGLE_STRIP_dyn();

		static int get_TRIANGLE_FAN( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TRIANGLE_FAN_dyn();

		static int get_ZERO( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_ZERO_dyn();

		static int get_ONE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_ONE_dyn();

		static int get_SRC_COLOR( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_SRC_COLOR_dyn();

		static int get_ONE_MINUS_SRC_COLOR( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_ONE_MINUS_SRC_COLOR_dyn();

		static int get_SRC_ALPHA( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_SRC_ALPHA_dyn();

		static int get_ONE_MINUS_SRC_ALPHA( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_ONE_MINUS_SRC_ALPHA_dyn();

		static int get_DST_ALPHA( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DST_ALPHA_dyn();

		static int get_ONE_MINUS_DST_ALPHA( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_ONE_MINUS_DST_ALPHA_dyn();

		static int get_DST_COLOR( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DST_COLOR_dyn();

		static int get_ONE_MINUS_DST_COLOR( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_ONE_MINUS_DST_COLOR_dyn();

		static int get_SRC_ALPHA_SATURATE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_SRC_ALPHA_SATURATE_dyn();

		static int get_FUNC_ADD( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FUNC_ADD_dyn();

		static int get_BLEND_EQUATION( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_BLEND_EQUATION_dyn();

		static int get_BLEND_EQUATION_RGB( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_BLEND_EQUATION_RGB_dyn();

		static int get_BLEND_EQUATION_ALPHA( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_BLEND_EQUATION_ALPHA_dyn();

		static int get_FUNC_SUBTRACT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FUNC_SUBTRACT_dyn();

		static int get_FUNC_REVERSE_SUBTRACT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FUNC_REVERSE_SUBTRACT_dyn();

		static int get_BLEND_DST_RGB( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_BLEND_DST_RGB_dyn();

		static int get_BLEND_SRC_RGB( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_BLEND_SRC_RGB_dyn();

		static int get_BLEND_DST_ALPHA( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_BLEND_DST_ALPHA_dyn();

		static int get_BLEND_SRC_ALPHA( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_BLEND_SRC_ALPHA_dyn();

		static int get_CONSTANT_COLOR( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_CONSTANT_COLOR_dyn();

		static int get_ONE_MINUS_CONSTANT_COLOR( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_ONE_MINUS_CONSTANT_COLOR_dyn();

		static int get_CONSTANT_ALPHA( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_CONSTANT_ALPHA_dyn();

		static int get_ONE_MINUS_CONSTANT_ALPHA( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_ONE_MINUS_CONSTANT_ALPHA_dyn();

		static int get_BLEND_COLOR( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_BLEND_COLOR_dyn();

		static int get_ARRAY_BUFFER( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_ARRAY_BUFFER_dyn();

		static int get_ELEMENT_ARRAY_BUFFER( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_ELEMENT_ARRAY_BUFFER_dyn();

		static int get_ARRAY_BUFFER_BINDING( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_ARRAY_BUFFER_BINDING_dyn();

		static int get_ELEMENT_ARRAY_BUFFER_BINDING( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_ELEMENT_ARRAY_BUFFER_BINDING_dyn();

		static int get_STREAM_DRAW( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_STREAM_DRAW_dyn();

		static int get_STATIC_DRAW( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_STATIC_DRAW_dyn();

		static int get_DYNAMIC_DRAW( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DYNAMIC_DRAW_dyn();

		static int get_BUFFER_SIZE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_BUFFER_SIZE_dyn();

		static int get_BUFFER_USAGE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_BUFFER_USAGE_dyn();

		static int get_CURRENT_VERTEX_ATTRIB( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_CURRENT_VERTEX_ATTRIB_dyn();

		static int get_FRONT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FRONT_dyn();

		static int get_BACK( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_BACK_dyn();

		static int get_FRONT_AND_BACK( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FRONT_AND_BACK_dyn();

		static int get_CULL_FACE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_CULL_FACE_dyn();

		static int get_BLEND( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_BLEND_dyn();

		static int get_DITHER( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DITHER_dyn();

		static int get_STENCIL_TEST( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_STENCIL_TEST_dyn();

		static int get_DEPTH_TEST( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DEPTH_TEST_dyn();

		static int get_SCISSOR_TEST( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_SCISSOR_TEST_dyn();

		static int get_POLYGON_OFFSET_FILL( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_POLYGON_OFFSET_FILL_dyn();

		static int get_SAMPLE_ALPHA_TO_COVERAGE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_SAMPLE_ALPHA_TO_COVERAGE_dyn();

		static int get_SAMPLE_COVERAGE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_SAMPLE_COVERAGE_dyn();

		static int get_NO_ERROR( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_NO_ERROR_dyn();

		static int get_INVALID_ENUM( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_INVALID_ENUM_dyn();

		static int get_INVALID_VALUE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_INVALID_VALUE_dyn();

		static int get_INVALID_OPERATION( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_INVALID_OPERATION_dyn();

		static int get_OUT_OF_MEMORY( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_OUT_OF_MEMORY_dyn();

		static int get_CW( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_CW_dyn();

		static int get_CCW( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_CCW_dyn();

		static int get_LINE_WIDTH( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_LINE_WIDTH_dyn();

		static int get_ALIASED_POINT_SIZE_RANGE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_ALIASED_POINT_SIZE_RANGE_dyn();

		static int get_ALIASED_LINE_WIDTH_RANGE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_ALIASED_LINE_WIDTH_RANGE_dyn();

		static int get_CULL_FACE_MODE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_CULL_FACE_MODE_dyn();

		static int get_FRONT_FACE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FRONT_FACE_dyn();

		static int get_DEPTH_RANGE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DEPTH_RANGE_dyn();

		static int get_DEPTH_WRITEMASK( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DEPTH_WRITEMASK_dyn();

		static int get_DEPTH_CLEAR_VALUE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DEPTH_CLEAR_VALUE_dyn();

		static int get_DEPTH_FUNC( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DEPTH_FUNC_dyn();

		static int get_STENCIL_CLEAR_VALUE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_STENCIL_CLEAR_VALUE_dyn();

		static int get_STENCIL_FUNC( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_STENCIL_FUNC_dyn();

		static int get_STENCIL_FAIL( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_STENCIL_FAIL_dyn();

		static int get_STENCIL_PASS_DEPTH_FAIL( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_STENCIL_PASS_DEPTH_FAIL_dyn();

		static int get_STENCIL_PASS_DEPTH_PASS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_STENCIL_PASS_DEPTH_PASS_dyn();

		static int get_STENCIL_REF( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_STENCIL_REF_dyn();

		static int get_STENCIL_VALUE_MASK( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_STENCIL_VALUE_MASK_dyn();

		static int get_STENCIL_WRITEMASK( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_STENCIL_WRITEMASK_dyn();

		static int get_STENCIL_BACK_FUNC( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_STENCIL_BACK_FUNC_dyn();

		static int get_STENCIL_BACK_FAIL( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_STENCIL_BACK_FAIL_dyn();

		static int get_STENCIL_BACK_PASS_DEPTH_FAIL( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_STENCIL_BACK_PASS_DEPTH_FAIL_dyn();

		static int get_STENCIL_BACK_PASS_DEPTH_PASS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_STENCIL_BACK_PASS_DEPTH_PASS_dyn();

		static int get_STENCIL_BACK_REF( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_STENCIL_BACK_REF_dyn();

		static int get_STENCIL_BACK_VALUE_MASK( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_STENCIL_BACK_VALUE_MASK_dyn();

		static int get_STENCIL_BACK_WRITEMASK( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_STENCIL_BACK_WRITEMASK_dyn();

		static int get_VIEWPORT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_VIEWPORT_dyn();

		static int get_SCISSOR_BOX( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_SCISSOR_BOX_dyn();

		static int get_COLOR_CLEAR_VALUE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_COLOR_CLEAR_VALUE_dyn();

		static int get_COLOR_WRITEMASK( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_COLOR_WRITEMASK_dyn();

		static int get_UNPACK_ALIGNMENT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNPACK_ALIGNMENT_dyn();

		static int get_PACK_ALIGNMENT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_PACK_ALIGNMENT_dyn();

		static int get_MAX_TEXTURE_SIZE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_TEXTURE_SIZE_dyn();

		static int get_MAX_VIEWPORT_DIMS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_VIEWPORT_DIMS_dyn();

		static int get_SUBPIXEL_BITS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_SUBPIXEL_BITS_dyn();

		static int get_RED_BITS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RED_BITS_dyn();

		static int get_GREEN_BITS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_GREEN_BITS_dyn();

		static int get_BLUE_BITS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_BLUE_BITS_dyn();

		static int get_ALPHA_BITS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_ALPHA_BITS_dyn();

		static int get_DEPTH_BITS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DEPTH_BITS_dyn();

		static int get_STENCIL_BITS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_STENCIL_BITS_dyn();

		static int get_POLYGON_OFFSET_UNITS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_POLYGON_OFFSET_UNITS_dyn();

		static int get_POLYGON_OFFSET_FACTOR( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_POLYGON_OFFSET_FACTOR_dyn();

		static int get_TEXTURE_BINDING_2D( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE_BINDING_2D_dyn();

		static int get_SAMPLE_BUFFERS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_SAMPLE_BUFFERS_dyn();

		static int get_SAMPLES( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_SAMPLES_dyn();

		static int get_SAMPLE_COVERAGE_VALUE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_SAMPLE_COVERAGE_VALUE_dyn();

		static int get_SAMPLE_COVERAGE_INVERT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_SAMPLE_COVERAGE_INVERT_dyn();

		static int get_COMPRESSED_TEXTURE_FORMATS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_COMPRESSED_TEXTURE_FORMATS_dyn();

		static int get_DONT_CARE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DONT_CARE_dyn();

		static int get_FASTEST( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FASTEST_dyn();

		static int get_NICEST( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_NICEST_dyn();

		static int get_GENERATE_MIPMAP_HINT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_GENERATE_MIPMAP_HINT_dyn();

		static int get_BYTE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_BYTE_dyn();

		static int get_UNSIGNED_BYTE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNSIGNED_BYTE_dyn();

		static int get_SHORT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_SHORT_dyn();

		static int get_UNSIGNED_SHORT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNSIGNED_SHORT_dyn();

		static int get_INT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_INT_dyn();

		static int get_UNSIGNED_INT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNSIGNED_INT_dyn();

		static int get_FLOAT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FLOAT_dyn();

		static int get_DEPTH_COMPONENT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DEPTH_COMPONENT_dyn();

		static int get_ALPHA( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_ALPHA_dyn();

		static int get_RGB( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RGB_dyn();

		static int get_RGBA( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RGBA_dyn();

		static int get_LUMINANCE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_LUMINANCE_dyn();

		static int get_LUMINANCE_ALPHA( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_LUMINANCE_ALPHA_dyn();

		static int get_UNSIGNED_SHORT_4_4_4_4( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNSIGNED_SHORT_4_4_4_4_dyn();

		static int get_UNSIGNED_SHORT_5_5_5_1( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNSIGNED_SHORT_5_5_5_1_dyn();

		static int get_UNSIGNED_SHORT_5_6_5( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNSIGNED_SHORT_5_6_5_dyn();

		static int get_FRAGMENT_SHADER( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FRAGMENT_SHADER_dyn();

		static int get_VERTEX_SHADER( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_VERTEX_SHADER_dyn();

		static int get_MAX_VERTEX_ATTRIBS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_VERTEX_ATTRIBS_dyn();

		static int get_MAX_VERTEX_UNIFORM_VECTORS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_VERTEX_UNIFORM_VECTORS_dyn();

		static int get_MAX_VARYING_VECTORS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_VARYING_VECTORS_dyn();

		static int get_MAX_COMBINED_TEXTURE_IMAGE_UNITS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_COMBINED_TEXTURE_IMAGE_UNITS_dyn();

		static int get_MAX_VERTEX_TEXTURE_IMAGE_UNITS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_VERTEX_TEXTURE_IMAGE_UNITS_dyn();

		static int get_MAX_TEXTURE_IMAGE_UNITS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_TEXTURE_IMAGE_UNITS_dyn();

		static int get_MAX_FRAGMENT_UNIFORM_VECTORS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_FRAGMENT_UNIFORM_VECTORS_dyn();

		static int get_SHADER_TYPE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_SHADER_TYPE_dyn();

		static int get_DELETE_STATUS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DELETE_STATUS_dyn();

		static int get_LINK_STATUS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_LINK_STATUS_dyn();

		static int get_VALIDATE_STATUS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_VALIDATE_STATUS_dyn();

		static int get_ATTACHED_SHADERS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_ATTACHED_SHADERS_dyn();

		static int get_ACTIVE_UNIFORMS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_ACTIVE_UNIFORMS_dyn();

		static int get_ACTIVE_ATTRIBUTES( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_ACTIVE_ATTRIBUTES_dyn();

		static int get_SHADING_LANGUAGE_VERSION( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_SHADING_LANGUAGE_VERSION_dyn();

		static int get_CURRENT_PROGRAM( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_CURRENT_PROGRAM_dyn();

		static int get_NEVER( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_NEVER_dyn();

		static int get_LESS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_LESS_dyn();

		static int get_EQUAL( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_EQUAL_dyn();

		static int get_LEQUAL( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_LEQUAL_dyn();

		static int get_GREATER( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_GREATER_dyn();

		static int get_NOTEQUAL( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_NOTEQUAL_dyn();

		static int get_GEQUAL( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_GEQUAL_dyn();

		static int get_ALWAYS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_ALWAYS_dyn();

		static int get_KEEP( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_KEEP_dyn();

		static int get_REPLACE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_REPLACE_dyn();

		static int get_INCR( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_INCR_dyn();

		static int get_DECR( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DECR_dyn();

		static int get_INVERT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_INVERT_dyn();

		static int get_INCR_WRAP( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_INCR_WRAP_dyn();

		static int get_DECR_WRAP( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DECR_WRAP_dyn();

		static int get_VENDOR( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_VENDOR_dyn();

		static int get_RENDERER( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RENDERER_dyn();

		static int get_VERSION( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_VERSION_dyn();

		static int get_NEAREST( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_NEAREST_dyn();

		static int get_LINEAR( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_LINEAR_dyn();

		static int get_NEAREST_MIPMAP_NEAREST( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_NEAREST_MIPMAP_NEAREST_dyn();

		static int get_LINEAR_MIPMAP_NEAREST( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_LINEAR_MIPMAP_NEAREST_dyn();

		static int get_NEAREST_MIPMAP_LINEAR( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_NEAREST_MIPMAP_LINEAR_dyn();

		static int get_LINEAR_MIPMAP_LINEAR( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_LINEAR_MIPMAP_LINEAR_dyn();

		static int get_TEXTURE_MAG_FILTER( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE_MAG_FILTER_dyn();

		static int get_TEXTURE_MIN_FILTER( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE_MIN_FILTER_dyn();

		static int get_TEXTURE_WRAP_S( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE_WRAP_S_dyn();

		static int get_TEXTURE_WRAP_T( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE_WRAP_T_dyn();

		static int get_TEXTURE_2D( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE_2D_dyn();

		static int get_TEXTURE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE_dyn();

		static int get_TEXTURE_CUBE_MAP( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE_CUBE_MAP_dyn();

		static int get_TEXTURE_BINDING_CUBE_MAP( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE_BINDING_CUBE_MAP_dyn();

		static int get_TEXTURE_CUBE_MAP_POSITIVE_X( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE_CUBE_MAP_POSITIVE_X_dyn();

		static int get_TEXTURE_CUBE_MAP_NEGATIVE_X( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE_CUBE_MAP_NEGATIVE_X_dyn();

		static int get_TEXTURE_CUBE_MAP_POSITIVE_Y( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE_CUBE_MAP_POSITIVE_Y_dyn();

		static int get_TEXTURE_CUBE_MAP_NEGATIVE_Y( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE_CUBE_MAP_NEGATIVE_Y_dyn();

		static int get_TEXTURE_CUBE_MAP_POSITIVE_Z( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE_CUBE_MAP_POSITIVE_Z_dyn();

		static int get_TEXTURE_CUBE_MAP_NEGATIVE_Z( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE_CUBE_MAP_NEGATIVE_Z_dyn();

		static int get_MAX_CUBE_MAP_TEXTURE_SIZE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_CUBE_MAP_TEXTURE_SIZE_dyn();

		static int get_TEXTURE0( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE0_dyn();

		static int get_TEXTURE1( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE1_dyn();

		static int get_TEXTURE2( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE2_dyn();

		static int get_TEXTURE3( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE3_dyn();

		static int get_TEXTURE4( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE4_dyn();

		static int get_TEXTURE5( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE5_dyn();

		static int get_TEXTURE6( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE6_dyn();

		static int get_TEXTURE7( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE7_dyn();

		static int get_TEXTURE8( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE8_dyn();

		static int get_TEXTURE9( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE9_dyn();

		static int get_TEXTURE10( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE10_dyn();

		static int get_TEXTURE11( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE11_dyn();

		static int get_TEXTURE12( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE12_dyn();

		static int get_TEXTURE13( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE13_dyn();

		static int get_TEXTURE14( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE14_dyn();

		static int get_TEXTURE15( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE15_dyn();

		static int get_TEXTURE16( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE16_dyn();

		static int get_TEXTURE17( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE17_dyn();

		static int get_TEXTURE18( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE18_dyn();

		static int get_TEXTURE19( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE19_dyn();

		static int get_TEXTURE20( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE20_dyn();

		static int get_TEXTURE21( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE21_dyn();

		static int get_TEXTURE22( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE22_dyn();

		static int get_TEXTURE23( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE23_dyn();

		static int get_TEXTURE24( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE24_dyn();

		static int get_TEXTURE25( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE25_dyn();

		static int get_TEXTURE26( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE26_dyn();

		static int get_TEXTURE27( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE27_dyn();

		static int get_TEXTURE28( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE28_dyn();

		static int get_TEXTURE29( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE29_dyn();

		static int get_TEXTURE30( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE30_dyn();

		static int get_TEXTURE31( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE31_dyn();

		static int get_ACTIVE_TEXTURE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_ACTIVE_TEXTURE_dyn();

		static int get_REPEAT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_REPEAT_dyn();

		static int get_CLAMP_TO_EDGE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_CLAMP_TO_EDGE_dyn();

		static int get_MIRRORED_REPEAT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MIRRORED_REPEAT_dyn();

		static int get_FLOAT_VEC2( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FLOAT_VEC2_dyn();

		static int get_FLOAT_VEC3( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FLOAT_VEC3_dyn();

		static int get_FLOAT_VEC4( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FLOAT_VEC4_dyn();

		static int get_INT_VEC2( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_INT_VEC2_dyn();

		static int get_INT_VEC3( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_INT_VEC3_dyn();

		static int get_INT_VEC4( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_INT_VEC4_dyn();

		static int get_BOOL( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_BOOL_dyn();

		static int get_BOOL_VEC2( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_BOOL_VEC2_dyn();

		static int get_BOOL_VEC3( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_BOOL_VEC3_dyn();

		static int get_BOOL_VEC4( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_BOOL_VEC4_dyn();

		static int get_FLOAT_MAT2( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FLOAT_MAT2_dyn();

		static int get_FLOAT_MAT3( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FLOAT_MAT3_dyn();

		static int get_FLOAT_MAT4( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FLOAT_MAT4_dyn();

		static int get_SAMPLER_2D( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_SAMPLER_2D_dyn();

		static int get_SAMPLER_CUBE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_SAMPLER_CUBE_dyn();

		static int get_VERTEX_ATTRIB_ARRAY_ENABLED( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_VERTEX_ATTRIB_ARRAY_ENABLED_dyn();

		static int get_VERTEX_ATTRIB_ARRAY_SIZE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_VERTEX_ATTRIB_ARRAY_SIZE_dyn();

		static int get_VERTEX_ATTRIB_ARRAY_STRIDE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_VERTEX_ATTRIB_ARRAY_STRIDE_dyn();

		static int get_VERTEX_ATTRIB_ARRAY_TYPE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_VERTEX_ATTRIB_ARRAY_TYPE_dyn();

		static int get_VERTEX_ATTRIB_ARRAY_NORMALIZED( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_VERTEX_ATTRIB_ARRAY_NORMALIZED_dyn();

		static int get_VERTEX_ATTRIB_ARRAY_POINTER( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_VERTEX_ATTRIB_ARRAY_POINTER_dyn();

		static int get_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_VERTEX_ATTRIB_ARRAY_BUFFER_BINDING_dyn();

		static int get_COMPILE_STATUS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_COMPILE_STATUS_dyn();

		static int get_LOW_FLOAT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_LOW_FLOAT_dyn();

		static int get_MEDIUM_FLOAT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MEDIUM_FLOAT_dyn();

		static int get_HIGH_FLOAT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_HIGH_FLOAT_dyn();

		static int get_LOW_INT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_LOW_INT_dyn();

		static int get_MEDIUM_INT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MEDIUM_INT_dyn();

		static int get_HIGH_INT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_HIGH_INT_dyn();

		static int get_FRAMEBUFFER( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FRAMEBUFFER_dyn();

		static int get_RENDERBUFFER( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RENDERBUFFER_dyn();

		static int get_RGBA4( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RGBA4_dyn();

		static int get_RGB5_A1( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RGB5_A1_dyn();

		static int get_RGB565( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RGB565_dyn();

		static int get_DEPTH_COMPONENT16( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DEPTH_COMPONENT16_dyn();

		static int get_STENCIL_INDEX( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_STENCIL_INDEX_dyn();

		static int get_STENCIL_INDEX8( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_STENCIL_INDEX8_dyn();

		static int get_DEPTH_STENCIL( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DEPTH_STENCIL_dyn();

		static int get_RENDERBUFFER_WIDTH( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RENDERBUFFER_WIDTH_dyn();

		static int get_RENDERBUFFER_HEIGHT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RENDERBUFFER_HEIGHT_dyn();

		static int get_RENDERBUFFER_INTERNAL_FORMAT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RENDERBUFFER_INTERNAL_FORMAT_dyn();

		static int get_RENDERBUFFER_RED_SIZE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RENDERBUFFER_RED_SIZE_dyn();

		static int get_RENDERBUFFER_GREEN_SIZE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RENDERBUFFER_GREEN_SIZE_dyn();

		static int get_RENDERBUFFER_BLUE_SIZE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RENDERBUFFER_BLUE_SIZE_dyn();

		static int get_RENDERBUFFER_ALPHA_SIZE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RENDERBUFFER_ALPHA_SIZE_dyn();

		static int get_RENDERBUFFER_DEPTH_SIZE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RENDERBUFFER_DEPTH_SIZE_dyn();

		static int get_RENDERBUFFER_STENCIL_SIZE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RENDERBUFFER_STENCIL_SIZE_dyn();

		static int get_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE_dyn();

		static int get_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FRAMEBUFFER_ATTACHMENT_OBJECT_NAME_dyn();

		static int get_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL_dyn();

		static int get_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE_dyn();

		static int get_COLOR_ATTACHMENT0( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_COLOR_ATTACHMENT0_dyn();

		static int get_DEPTH_ATTACHMENT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DEPTH_ATTACHMENT_dyn();

		static int get_STENCIL_ATTACHMENT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_STENCIL_ATTACHMENT_dyn();

		static int get_DEPTH_STENCIL_ATTACHMENT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DEPTH_STENCIL_ATTACHMENT_dyn();

		static int get_NONE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_NONE_dyn();

		static int get_FRAMEBUFFER_COMPLETE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FRAMEBUFFER_COMPLETE_dyn();

		static int get_FRAMEBUFFER_INCOMPLETE_ATTACHMENT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FRAMEBUFFER_INCOMPLETE_ATTACHMENT_dyn();

		static int get_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT_dyn();

		static int get_FRAMEBUFFER_INCOMPLETE_DIMENSIONS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FRAMEBUFFER_INCOMPLETE_DIMENSIONS_dyn();

		static int get_FRAMEBUFFER_UNSUPPORTED( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FRAMEBUFFER_UNSUPPORTED_dyn();

		static int get_FRAMEBUFFER_BINDING( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FRAMEBUFFER_BINDING_dyn();

		static int get_RENDERBUFFER_BINDING( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RENDERBUFFER_BINDING_dyn();

		static int get_MAX_RENDERBUFFER_SIZE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_RENDERBUFFER_SIZE_dyn();

		static int get_INVALID_FRAMEBUFFER_OPERATION( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_INVALID_FRAMEBUFFER_OPERATION_dyn();

		static int get_UNPACK_FLIP_Y_WEBGL( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNPACK_FLIP_Y_WEBGL_dyn();

		static int get_UNPACK_PREMULTIPLY_ALPHA_WEBGL( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNPACK_PREMULTIPLY_ALPHA_WEBGL_dyn();

		static int get_CONTEXT_LOST_WEBGL( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_CONTEXT_LOST_WEBGL_dyn();

		static int get_UNPACK_COLORSPACE_CONVERSION_WEBGL( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNPACK_COLORSPACE_CONVERSION_WEBGL_dyn();

		static int get_BROWSER_DEFAULT_WEBGL( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_BROWSER_DEFAULT_WEBGL_dyn();

		static ::lime::graphics::opengl::GLContextType get_type( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_type_dyn();

		static Float get_version( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_version_dyn();

		static int get_READ_BUFFER( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_READ_BUFFER_dyn();

		static int get_UNPACK_ROW_LENGTH( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNPACK_ROW_LENGTH_dyn();

		static int get_UNPACK_SKIP_ROWS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNPACK_SKIP_ROWS_dyn();

		static int get_UNPACK_SKIP_PIXELS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNPACK_SKIP_PIXELS_dyn();

		static int get_PACK_ROW_LENGTH( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_PACK_ROW_LENGTH_dyn();

		static int get_PACK_SKIP_ROWS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_PACK_SKIP_ROWS_dyn();

		static int get_PACK_SKIP_PIXELS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_PACK_SKIP_PIXELS_dyn();

		static int get_TEXTURE_BINDING_3D( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE_BINDING_3D_dyn();

		static int get_UNPACK_SKIP_IMAGES( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNPACK_SKIP_IMAGES_dyn();

		static int get_UNPACK_IMAGE_HEIGHT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNPACK_IMAGE_HEIGHT_dyn();

		static int get_MAX_3D_TEXTURE_SIZE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_3D_TEXTURE_SIZE_dyn();

		static int get_MAX_ELEMENTS_VERTICES( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_ELEMENTS_VERTICES_dyn();

		static int get_MAX_ELEMENTS_INDICES( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_ELEMENTS_INDICES_dyn();

		static int get_MAX_TEXTURE_LOD_BIAS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_TEXTURE_LOD_BIAS_dyn();

		static int get_MAX_FRAGMENT_UNIFORM_COMPONENTS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_FRAGMENT_UNIFORM_COMPONENTS_dyn();

		static int get_MAX_VERTEX_UNIFORM_COMPONENTS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_VERTEX_UNIFORM_COMPONENTS_dyn();

		static int get_MAX_ARRAY_TEXTURE_LAYERS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_ARRAY_TEXTURE_LAYERS_dyn();

		static int get_MIN_PROGRAM_TEXEL_OFFSET( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MIN_PROGRAM_TEXEL_OFFSET_dyn();

		static int get_MAX_PROGRAM_TEXEL_OFFSET( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_PROGRAM_TEXEL_OFFSET_dyn();

		static int get_MAX_VARYING_COMPONENTS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_VARYING_COMPONENTS_dyn();

		static int get_FRAGMENT_SHADER_DERIVATIVE_HINT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FRAGMENT_SHADER_DERIVATIVE_HINT_dyn();

		static int get_RASTERIZER_DISCARD( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RASTERIZER_DISCARD_dyn();

		static int get_VERTEX_ARRAY_BINDING( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_VERTEX_ARRAY_BINDING_dyn();

		static int get_MAX_VERTEX_OUTPUT_COMPONENTS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_VERTEX_OUTPUT_COMPONENTS_dyn();

		static int get_MAX_FRAGMENT_INPUT_COMPONENTS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_FRAGMENT_INPUT_COMPONENTS_dyn();

		static int get_MAX_SERVER_WAIT_TIMEOUT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_SERVER_WAIT_TIMEOUT_dyn();

		static int get_MAX_ELEMENT_INDEX( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_ELEMENT_INDEX_dyn();

		static int get_RED( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RED_dyn();

		static int get_RGB8( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RGB8_dyn();

		static int get_RGBA8( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RGBA8_dyn();

		static int get_RGB10_A2( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RGB10_A2_dyn();

		static int get_TEXTURE_3D( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE_3D_dyn();

		static int get_TEXTURE_WRAP_R( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE_WRAP_R_dyn();

		static int get_TEXTURE_MIN_LOD( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE_MIN_LOD_dyn();

		static int get_TEXTURE_MAX_LOD( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE_MAX_LOD_dyn();

		static int get_TEXTURE_BASE_LEVEL( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE_BASE_LEVEL_dyn();

		static int get_TEXTURE_MAX_LEVEL( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE_MAX_LEVEL_dyn();

		static int get_TEXTURE_COMPARE_MODE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE_COMPARE_MODE_dyn();

		static int get_TEXTURE_COMPARE_FUNC( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE_COMPARE_FUNC_dyn();

		static int get_SRGB( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_SRGB_dyn();

		static int get_SRGB8( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_SRGB8_dyn();

		static int get_SRGB8_ALPHA8( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_SRGB8_ALPHA8_dyn();

		static int get_COMPARE_REF_TO_TEXTURE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_COMPARE_REF_TO_TEXTURE_dyn();

		static int get_RGBA32F( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RGBA32F_dyn();

		static int get_RGB32F( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RGB32F_dyn();

		static int get_RGBA16F( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RGBA16F_dyn();

		static int get_RGB16F( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RGB16F_dyn();

		static int get_TEXTURE_2D_ARRAY( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE_2D_ARRAY_dyn();

		static int get_TEXTURE_BINDING_2D_ARRAY( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE_BINDING_2D_ARRAY_dyn();

		static int get_R11F_G11F_B10F( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_R11F_G11F_B10F_dyn();

		static int get_RGB9_E5( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RGB9_E5_dyn();

		static int get_RGBA32UI( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RGBA32UI_dyn();

		static int get_RGB32UI( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RGB32UI_dyn();

		static int get_RGBA16UI( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RGBA16UI_dyn();

		static int get_RGB16UI( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RGB16UI_dyn();

		static int get_RGBA8UI( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RGBA8UI_dyn();

		static int get_RGB8UI( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RGB8UI_dyn();

		static int get_RGBA32I( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RGBA32I_dyn();

		static int get_RGB32I( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RGB32I_dyn();

		static int get_RGBA16I( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RGBA16I_dyn();

		static int get_RGB16I( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RGB16I_dyn();

		static int get_RGBA8I( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RGBA8I_dyn();

		static int get_RGB8I( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RGB8I_dyn();

		static int get_RED_INTEGER( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RED_INTEGER_dyn();

		static int get_RGB_INTEGER( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RGB_INTEGER_dyn();

		static int get_RGBA_INTEGER( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RGBA_INTEGER_dyn();

		static int get_R8( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_R8_dyn();

		static int get_RG8( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RG8_dyn();

		static int get_R16F( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_R16F_dyn();

		static int get_R32F( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_R32F_dyn();

		static int get_RG16F( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RG16F_dyn();

		static int get_RG32F( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RG32F_dyn();

		static int get_R8I( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_R8I_dyn();

		static int get_R8UI( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_R8UI_dyn();

		static int get_R16I( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_R16I_dyn();

		static int get_R16UI( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_R16UI_dyn();

		static int get_R32I( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_R32I_dyn();

		static int get_R32UI( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_R32UI_dyn();

		static int get_RG8I( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RG8I_dyn();

		static int get_RG8UI( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RG8UI_dyn();

		static int get_RG16I( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RG16I_dyn();

		static int get_RG16UI( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RG16UI_dyn();

		static int get_RG32I( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RG32I_dyn();

		static int get_RG32UI( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RG32UI_dyn();

		static int get_R8_SNORM( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_R8_SNORM_dyn();

		static int get_RG8_SNORM( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RG8_SNORM_dyn();

		static int get_RGB8_SNORM( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RGB8_SNORM_dyn();

		static int get_RGBA8_SNORM( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RGBA8_SNORM_dyn();

		static int get_RGB10_A2UI( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RGB10_A2UI_dyn();

		static int get_TEXTURE_IMMUTABLE_FORMAT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE_IMMUTABLE_FORMAT_dyn();

		static int get_TEXTURE_IMMUTABLE_LEVELS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TEXTURE_IMMUTABLE_LEVELS_dyn();

		static int get_UNSIGNED_INT_2_10_10_10_REV( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNSIGNED_INT_2_10_10_10_REV_dyn();

		static int get_UNSIGNED_INT_10F_11F_11F_REV( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNSIGNED_INT_10F_11F_11F_REV_dyn();

		static int get_UNSIGNED_INT_5_9_9_9_REV( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNSIGNED_INT_5_9_9_9_REV_dyn();

		static int get_FLOAT_32_UNSIGNED_INT_24_8_REV( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FLOAT_32_UNSIGNED_INT_24_8_REV_dyn();

		static int get_UNSIGNED_INT_24_8( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNSIGNED_INT_24_8_dyn();

		static int get_HALF_FLOAT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_HALF_FLOAT_dyn();

		static int get_RG( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RG_dyn();

		static int get_RG_INTEGER( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RG_INTEGER_dyn();

		static int get_INT_2_10_10_10_REV( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_INT_2_10_10_10_REV_dyn();

		static int get_CURRENT_QUERY( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_CURRENT_QUERY_dyn();

		static int get_QUERY_RESULT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_QUERY_RESULT_dyn();

		static int get_QUERY_RESULT_AVAILABLE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_QUERY_RESULT_AVAILABLE_dyn();

		static int get_ANY_SAMPLES_PASSED( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_ANY_SAMPLES_PASSED_dyn();

		static int get_ANY_SAMPLES_PASSED_CONSERVATIVE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_ANY_SAMPLES_PASSED_CONSERVATIVE_dyn();

		static int get_MAX_DRAW_BUFFERS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_DRAW_BUFFERS_dyn();

		static int get_DRAW_BUFFER0( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DRAW_BUFFER0_dyn();

		static int get_DRAW_BUFFER1( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DRAW_BUFFER1_dyn();

		static int get_DRAW_BUFFER2( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DRAW_BUFFER2_dyn();

		static int get_DRAW_BUFFER3( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DRAW_BUFFER3_dyn();

		static int get_DRAW_BUFFER4( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DRAW_BUFFER4_dyn();

		static int get_DRAW_BUFFER5( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DRAW_BUFFER5_dyn();

		static int get_DRAW_BUFFER6( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DRAW_BUFFER6_dyn();

		static int get_DRAW_BUFFER7( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DRAW_BUFFER7_dyn();

		static int get_DRAW_BUFFER8( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DRAW_BUFFER8_dyn();

		static int get_DRAW_BUFFER9( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DRAW_BUFFER9_dyn();

		static int get_DRAW_BUFFER10( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DRAW_BUFFER10_dyn();

		static int get_DRAW_BUFFER11( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DRAW_BUFFER11_dyn();

		static int get_DRAW_BUFFER12( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DRAW_BUFFER12_dyn();

		static int get_DRAW_BUFFER13( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DRAW_BUFFER13_dyn();

		static int get_DRAW_BUFFER14( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DRAW_BUFFER14_dyn();

		static int get_DRAW_BUFFER15( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DRAW_BUFFER15_dyn();

		static int get_MAX_COLOR_ATTACHMENTS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_COLOR_ATTACHMENTS_dyn();

		static int get_COLOR_ATTACHMENT1( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_COLOR_ATTACHMENT1_dyn();

		static int get_COLOR_ATTACHMENT2( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_COLOR_ATTACHMENT2_dyn();

		static int get_COLOR_ATTACHMENT3( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_COLOR_ATTACHMENT3_dyn();

		static int get_COLOR_ATTACHMENT4( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_COLOR_ATTACHMENT4_dyn();

		static int get_COLOR_ATTACHMENT5( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_COLOR_ATTACHMENT5_dyn();

		static int get_COLOR_ATTACHMENT6( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_COLOR_ATTACHMENT6_dyn();

		static int get_COLOR_ATTACHMENT7( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_COLOR_ATTACHMENT7_dyn();

		static int get_COLOR_ATTACHMENT8( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_COLOR_ATTACHMENT8_dyn();

		static int get_COLOR_ATTACHMENT9( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_COLOR_ATTACHMENT9_dyn();

		static int get_COLOR_ATTACHMENT10( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_COLOR_ATTACHMENT10_dyn();

		static int get_COLOR_ATTACHMENT11( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_COLOR_ATTACHMENT11_dyn();

		static int get_COLOR_ATTACHMENT12( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_COLOR_ATTACHMENT12_dyn();

		static int get_COLOR_ATTACHMENT13( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_COLOR_ATTACHMENT13_dyn();

		static int get_COLOR_ATTACHMENT14( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_COLOR_ATTACHMENT14_dyn();

		static int get_COLOR_ATTACHMENT15( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_COLOR_ATTACHMENT15_dyn();

		static int get_SAMPLER_3D( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_SAMPLER_3D_dyn();

		static int get_SAMPLER_2D_SHADOW( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_SAMPLER_2D_SHADOW_dyn();

		static int get_SAMPLER_2D_ARRAY( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_SAMPLER_2D_ARRAY_dyn();

		static int get_SAMPLER_2D_ARRAY_SHADOW( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_SAMPLER_2D_ARRAY_SHADOW_dyn();

		static int get_SAMPLER_CUBE_SHADOW( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_SAMPLER_CUBE_SHADOW_dyn();

		static int get_INT_SAMPLER_2D( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_INT_SAMPLER_2D_dyn();

		static int get_INT_SAMPLER_3D( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_INT_SAMPLER_3D_dyn();

		static int get_INT_SAMPLER_CUBE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_INT_SAMPLER_CUBE_dyn();

		static int get_INT_SAMPLER_2D_ARRAY( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_INT_SAMPLER_2D_ARRAY_dyn();

		static int get_UNSIGNED_INT_SAMPLER_2D( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNSIGNED_INT_SAMPLER_2D_dyn();

		static int get_UNSIGNED_INT_SAMPLER_3D( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNSIGNED_INT_SAMPLER_3D_dyn();

		static int get_UNSIGNED_INT_SAMPLER_CUBE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNSIGNED_INT_SAMPLER_CUBE_dyn();

		static int get_UNSIGNED_INT_SAMPLER_2D_ARRAY( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNSIGNED_INT_SAMPLER_2D_ARRAY_dyn();

		static int get_MAX_SAMPLES( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_SAMPLES_dyn();

		static int get_SAMPLER_BINDING( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_SAMPLER_BINDING_dyn();

		static int get_PIXEL_PACK_BUFFER( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_PIXEL_PACK_BUFFER_dyn();

		static int get_PIXEL_UNPACK_BUFFER( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_PIXEL_UNPACK_BUFFER_dyn();

		static int get_PIXEL_PACK_BUFFER_BINDING( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_PIXEL_PACK_BUFFER_BINDING_dyn();

		static int get_PIXEL_UNPACK_BUFFER_BINDING( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_PIXEL_UNPACK_BUFFER_BINDING_dyn();

		static int get_COPY_READ_BUFFER( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_COPY_READ_BUFFER_dyn();

		static int get_COPY_WRITE_BUFFER( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_COPY_WRITE_BUFFER_dyn();

		static int get_COPY_READ_BUFFER_BINDING( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_COPY_READ_BUFFER_BINDING_dyn();

		static int get_COPY_WRITE_BUFFER_BINDING( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_COPY_WRITE_BUFFER_BINDING_dyn();

		static int get_FLOAT_MAT2x3( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FLOAT_MAT2x3_dyn();

		static int get_FLOAT_MAT2x4( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FLOAT_MAT2x4_dyn();

		static int get_FLOAT_MAT3x2( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FLOAT_MAT3x2_dyn();

		static int get_FLOAT_MAT3x4( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FLOAT_MAT3x4_dyn();

		static int get_FLOAT_MAT4x2( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FLOAT_MAT4x2_dyn();

		static int get_FLOAT_MAT4x3( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FLOAT_MAT4x3_dyn();

		static int get_UNSIGNED_INT_VEC2( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNSIGNED_INT_VEC2_dyn();

		static int get_UNSIGNED_INT_VEC3( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNSIGNED_INT_VEC3_dyn();

		static int get_UNSIGNED_INT_VEC4( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNSIGNED_INT_VEC4_dyn();

		static int get_UNSIGNED_NORMALIZED( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNSIGNED_NORMALIZED_dyn();

		static int get_SIGNED_NORMALIZED( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_SIGNED_NORMALIZED_dyn();

		static int get_VERTEX_ATTRIB_ARRAY_INTEGER( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_VERTEX_ATTRIB_ARRAY_INTEGER_dyn();

		static int get_VERTEX_ATTRIB_ARRAY_DIVISOR( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_VERTEX_ATTRIB_ARRAY_DIVISOR_dyn();

		static int get_TRANSFORM_FEEDBACK_BUFFER_MODE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TRANSFORM_FEEDBACK_BUFFER_MODE_dyn();

		static int get_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS_dyn();

		static int get_TRANSFORM_FEEDBACK_VARYINGS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TRANSFORM_FEEDBACK_VARYINGS_dyn();

		static int get_TRANSFORM_FEEDBACK_BUFFER_START( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TRANSFORM_FEEDBACK_BUFFER_START_dyn();

		static int get_TRANSFORM_FEEDBACK_BUFFER_SIZE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TRANSFORM_FEEDBACK_BUFFER_SIZE_dyn();

		static int get_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN_dyn();

		static int get_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS_dyn();

		static int get_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS_dyn();

		static int get_INTERLEAVED_ATTRIBS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_INTERLEAVED_ATTRIBS_dyn();

		static int get_SEPARATE_ATTRIBS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_SEPARATE_ATTRIBS_dyn();

		static int get_TRANSFORM_FEEDBACK_BUFFER( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TRANSFORM_FEEDBACK_BUFFER_dyn();

		static int get_TRANSFORM_FEEDBACK_BUFFER_BINDING( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TRANSFORM_FEEDBACK_BUFFER_BINDING_dyn();

		static int get_TRANSFORM_FEEDBACK( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TRANSFORM_FEEDBACK_dyn();

		static int get_TRANSFORM_FEEDBACK_PAUSED( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TRANSFORM_FEEDBACK_PAUSED_dyn();

		static int get_TRANSFORM_FEEDBACK_ACTIVE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TRANSFORM_FEEDBACK_ACTIVE_dyn();

		static int get_TRANSFORM_FEEDBACK_BINDING( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TRANSFORM_FEEDBACK_BINDING_dyn();

		static int get_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_dyn();

		static int get_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE_dyn();

		static int get_FRAMEBUFFER_ATTACHMENT_RED_SIZE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FRAMEBUFFER_ATTACHMENT_RED_SIZE_dyn();

		static int get_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FRAMEBUFFER_ATTACHMENT_GREEN_SIZE_dyn();

		static int get_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FRAMEBUFFER_ATTACHMENT_BLUE_SIZE_dyn();

		static int get_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE_dyn();

		static int get_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE_dyn();

		static int get_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE_dyn();

		static int get_FRAMEBUFFER_DEFAULT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FRAMEBUFFER_DEFAULT_dyn();

		static int get_DEPTH24_STENCIL8( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DEPTH24_STENCIL8_dyn();

		static int get_DRAW_FRAMEBUFFER_BINDING( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DRAW_FRAMEBUFFER_BINDING_dyn();

		static int get_READ_FRAMEBUFFER( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_READ_FRAMEBUFFER_dyn();

		static int get_DRAW_FRAMEBUFFER( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DRAW_FRAMEBUFFER_dyn();

		static int get_READ_FRAMEBUFFER_BINDING( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_READ_FRAMEBUFFER_BINDING_dyn();

		static int get_RENDERBUFFER_SAMPLES( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_RENDERBUFFER_SAMPLES_dyn();

		static int get_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER_dyn();

		static int get_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_FRAMEBUFFER_INCOMPLETE_MULTISAMPLE_dyn();

		static int get_UNIFORM_BUFFER( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNIFORM_BUFFER_dyn();

		static int get_UNIFORM_BUFFER_BINDING( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNIFORM_BUFFER_BINDING_dyn();

		static int get_UNIFORM_BUFFER_START( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNIFORM_BUFFER_START_dyn();

		static int get_UNIFORM_BUFFER_SIZE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNIFORM_BUFFER_SIZE_dyn();

		static int get_MAX_VERTEX_UNIFORM_BLOCKS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_VERTEX_UNIFORM_BLOCKS_dyn();

		static int get_MAX_FRAGMENT_UNIFORM_BLOCKS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_FRAGMENT_UNIFORM_BLOCKS_dyn();

		static int get_MAX_COMBINED_UNIFORM_BLOCKS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_COMBINED_UNIFORM_BLOCKS_dyn();

		static int get_MAX_UNIFORM_BUFFER_BINDINGS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_UNIFORM_BUFFER_BINDINGS_dyn();

		static int get_MAX_UNIFORM_BLOCK_SIZE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_UNIFORM_BLOCK_SIZE_dyn();

		static int get_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS_dyn();

		static int get_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS_dyn();

		static int get_UNIFORM_BUFFER_OFFSET_ALIGNMENT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNIFORM_BUFFER_OFFSET_ALIGNMENT_dyn();

		static int get_ACTIVE_UNIFORM_BLOCKS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_ACTIVE_UNIFORM_BLOCKS_dyn();

		static int get_UNIFORM_TYPE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNIFORM_TYPE_dyn();

		static int get_UNIFORM_SIZE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNIFORM_SIZE_dyn();

		static int get_UNIFORM_BLOCK_INDEX( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNIFORM_BLOCK_INDEX_dyn();

		static int get_UNIFORM_OFFSET( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNIFORM_OFFSET_dyn();

		static int get_UNIFORM_ARRAY_STRIDE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNIFORM_ARRAY_STRIDE_dyn();

		static int get_UNIFORM_MATRIX_STRIDE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNIFORM_MATRIX_STRIDE_dyn();

		static int get_UNIFORM_IS_ROW_MAJOR( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNIFORM_IS_ROW_MAJOR_dyn();

		static int get_UNIFORM_BLOCK_BINDING( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNIFORM_BLOCK_BINDING_dyn();

		static int get_UNIFORM_BLOCK_DATA_SIZE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNIFORM_BLOCK_DATA_SIZE_dyn();

		static int get_UNIFORM_BLOCK_ACTIVE_UNIFORMS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNIFORM_BLOCK_ACTIVE_UNIFORMS_dyn();

		static int get_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES_dyn();

		static int get_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER_dyn();

		static int get_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER_dyn();

		static int get_OBJECT_TYPE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_OBJECT_TYPE_dyn();

		static int get_SYNC_CONDITION( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_SYNC_CONDITION_dyn();

		static int get_SYNC_STATUS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_SYNC_STATUS_dyn();

		static int get_SYNC_FLAGS( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_SYNC_FLAGS_dyn();

		static int get_SYNC_FENCE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_SYNC_FENCE_dyn();

		static int get_SYNC_GPU_COMMANDS_COMPLETE( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_SYNC_GPU_COMMANDS_COMPLETE_dyn();

		static int get_UNSIGNALED( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_UNSIGNALED_dyn();

		static int get_SIGNALED( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_SIGNALED_dyn();

		static int get_ALREADY_SIGNALED( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_ALREADY_SIGNALED_dyn();

		static int get_TIMEOUT_EXPIRED( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TIMEOUT_EXPIRED_dyn();

		static int get_CONDITION_SATISFIED( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_CONDITION_SATISFIED_dyn();

		static int get_WAIT_FAILED( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_WAIT_FAILED_dyn();

		static int get_SYNC_FLUSH_COMMANDS_BIT( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_SYNC_FLUSH_COMMANDS_BIT_dyn();

		static int get_COLOR( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_COLOR_dyn();

		static int get_DEPTH( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DEPTH_dyn();

		static int get_STENCIL( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_STENCIL_dyn();

		static int get_MIN( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MIN_dyn();

		static int get_MAX( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_dyn();

		static int get_DEPTH_COMPONENT24( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DEPTH_COMPONENT24_dyn();

		static int get_STREAM_READ( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_STREAM_READ_dyn();

		static int get_STREAM_COPY( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_STREAM_COPY_dyn();

		static int get_STATIC_READ( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_STATIC_READ_dyn();

		static int get_STATIC_COPY( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_STATIC_COPY_dyn();

		static int get_DYNAMIC_READ( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DYNAMIC_READ_dyn();

		static int get_DYNAMIC_COPY( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DYNAMIC_COPY_dyn();

		static int get_DEPTH_COMPONENT32F( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DEPTH_COMPONENT32F_dyn();

		static int get_DEPTH32F_STENCIL8( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_DEPTH32F_STENCIL8_dyn();

		static int get_INVALID_INDEX( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_INVALID_INDEX_dyn();

		static int get_TIMEOUT_IGNORED( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_TIMEOUT_IGNORED_dyn();

		static int get_MAX_CLIENT_WAIT_TIMEOUT_WEBGL( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic get_MAX_CLIENT_WAIT_TIMEOUT_WEBGL_dyn();

		static Void activeTexture( ::lime::_backend::native::NativeGLRenderContext this1,int texture);
		static Dynamic activeTexture_dyn();

		static Void attachShader( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,::lime::graphics::opengl::GLObject shader);
		static Dynamic attachShader_dyn();

		static Void beginQuery( ::lime::_backend::native::NativeGLRenderContext this1,int target,::lime::graphics::opengl::GLObject query);
		static Dynamic beginQuery_dyn();

		static Void beginTransformFeedback( ::lime::_backend::native::NativeGLRenderContext this1,int primitiveNode);
		static Dynamic beginTransformFeedback_dyn();

		static Void bindAttribLocation( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,int index,::String name);
		static Dynamic bindAttribLocation_dyn();

		static Void bindBuffer( ::lime::_backend::native::NativeGLRenderContext this1,int target,::lime::graphics::opengl::GLObject buffer);
		static Dynamic bindBuffer_dyn();

		static Void bindBufferBase( ::lime::_backend::native::NativeGLRenderContext this1,int target,int index,::lime::graphics::opengl::GLObject buffer);
		static Dynamic bindBufferBase_dyn();

		static Void bindBufferRange( ::lime::_backend::native::NativeGLRenderContext this1,int target,int index,::lime::graphics::opengl::GLObject buffer,Float offset,int size);
		static Dynamic bindBufferRange_dyn();

		static Void bindFramebuffer( ::lime::_backend::native::NativeGLRenderContext this1,int target,::lime::graphics::opengl::GLObject framebuffer);
		static Dynamic bindFramebuffer_dyn();

		static Void bindRenderbuffer( ::lime::_backend::native::NativeGLRenderContext this1,int target,::lime::graphics::opengl::GLObject renderbuffer);
		static Dynamic bindRenderbuffer_dyn();

		static Void bindSampler( ::lime::_backend::native::NativeGLRenderContext this1,int unit,::lime::graphics::opengl::GLObject sampler);
		static Dynamic bindSampler_dyn();

		static Void bindTexture( ::lime::_backend::native::NativeGLRenderContext this1,int target,::lime::graphics::opengl::GLObject texture);
		static Dynamic bindTexture_dyn();

		static Void bindTransformFeedback( ::lime::_backend::native::NativeGLRenderContext this1,int target,::lime::graphics::opengl::GLObject transformFeedback);
		static Dynamic bindTransformFeedback_dyn();

		static Void bindVertexArray( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject vertexArray);
		static Dynamic bindVertexArray_dyn();

		static Void blendColor( ::lime::_backend::native::NativeGLRenderContext this1,Float red,Float green,Float blue,Float alpha);
		static Dynamic blendColor_dyn();

		static Void blendEquation( ::lime::_backend::native::NativeGLRenderContext this1,int mode);
		static Dynamic blendEquation_dyn();

		static Void blendEquationSeparate( ::lime::_backend::native::NativeGLRenderContext this1,int modeRGB,int modeAlpha);
		static Dynamic blendEquationSeparate_dyn();

		static Void blendFunc( ::lime::_backend::native::NativeGLRenderContext this1,int sfactor,int dfactor);
		static Dynamic blendFunc_dyn();

		static Void blendFuncSeparate( ::lime::_backend::native::NativeGLRenderContext this1,int srcRGB,int dstRGB,int srcAlpha,int dstAlpha);
		static Dynamic blendFuncSeparate_dyn();

		static Void blitFramebuffer( ::lime::_backend::native::NativeGLRenderContext this1,int srcX0,int srcY0,int srcX1,int srcY1,int dstX0,int dstY0,int dstX1,int dstY1,int mask,int filter);
		static Dynamic blitFramebuffer_dyn();

		static Void bufferData( ::lime::_backend::native::NativeGLRenderContext this1,int target,::lime::utils::ArrayBufferView srcData,int usage,hx::Null< int >  srcOffset,hx::Null< int >  length);
		static Dynamic bufferData_dyn();

		static Void bufferSubData( ::lime::_backend::native::NativeGLRenderContext this1,int target,int offset,::lime::utils::ArrayBufferView srcData,hx::Null< int >  srcOffset,Dynamic length);
		static Dynamic bufferSubData_dyn();

		static int checkFramebufferStatus( ::lime::_backend::native::NativeGLRenderContext this1,int target);
		static Dynamic checkFramebufferStatus_dyn();

		static Void clear( ::lime::_backend::native::NativeGLRenderContext this1,int mask);
		static Dynamic clear_dyn();

		static Void clearBufferfi( ::lime::_backend::native::NativeGLRenderContext this1,int buffer,int drawbuffer,Float depth,int stencil);
		static Dynamic clearBufferfi_dyn();

		static Void clearBufferfv( ::lime::_backend::native::NativeGLRenderContext this1,int buffer,int drawbuffer,::lime::utils::ArrayBufferView values,hx::Null< int >  srcOffset);
		static Dynamic clearBufferfv_dyn();

		static Void clearBufferiv( ::lime::_backend::native::NativeGLRenderContext this1,int buffer,int drawbuffer,::lime::utils::ArrayBufferView values,Dynamic srcOffset);
		static Dynamic clearBufferiv_dyn();

		static Void clearBufferuiv( ::lime::_backend::native::NativeGLRenderContext this1,int buffer,int drawbuffer,::lime::utils::ArrayBufferView values,Dynamic srcOffset);
		static Dynamic clearBufferuiv_dyn();

		static Void clearColor( ::lime::_backend::native::NativeGLRenderContext this1,Float red,Float green,Float blue,Float alpha);
		static Dynamic clearColor_dyn();

		static Void clearDepth( ::lime::_backend::native::NativeGLRenderContext this1,Float depth);
		static Dynamic clearDepth_dyn();

		static Void clearStencil( ::lime::_backend::native::NativeGLRenderContext this1,int s);
		static Dynamic clearStencil_dyn();

		static int clientWaitSync( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject sync,int flags,cpp::Int64Struct timeout);
		static Dynamic clientWaitSync_dyn();

		static Void colorMask( ::lime::_backend::native::NativeGLRenderContext this1,bool red,bool green,bool blue,bool alpha);
		static Dynamic colorMask_dyn();

		static Void compileShader( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject shader);
		static Dynamic compileShader_dyn();

		static Void compressedTexImage2D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int internalformat,int width,int height,int border,::lime::utils::ArrayBufferView srcData,hx::Null< int >  srcOffset,Dynamic srcLengthOverride);
		static Dynamic compressedTexImage2D_dyn();

		static Void compressedTexImage3D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int internalformat,int width,int height,int depth,int border,::lime::utils::ArrayBufferView srcData,hx::Null< int >  srcOffset,Dynamic srcLengthOverride);
		static Dynamic compressedTexImage3D_dyn();

		static Void compressedTexSubImage2D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int xoffset,int yoffset,int width,int height,int format,::lime::utils::ArrayBufferView srcData,hx::Null< int >  srcOffset,Dynamic srcLengthOverride);
		static Dynamic compressedTexSubImage2D_dyn();

		static Void compressedTexSubImage3D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int xoffset,int yoffset,int zoffset,int width,int height,int depth,int format,::lime::utils::ArrayBufferView srcData,hx::Null< int >  srcOffset,Dynamic srcLengthOverride);
		static Dynamic compressedTexSubImage3D_dyn();

		static Void copyBufferSubData( ::lime::_backend::native::NativeGLRenderContext this1,int readTarget,int writeTarget,Float readOffset,Float writeOffset,int size);
		static Dynamic copyBufferSubData_dyn();

		static Void copyTexImage2D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int internalformat,int x,int y,int width,int height,int border);
		static Dynamic copyTexImage2D_dyn();

		static Void copyTexSubImage2D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int xoffset,int yoffset,int x,int y,int width,int height);
		static Dynamic copyTexSubImage2D_dyn();

		static Void copyTexSubImage3D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int xoffset,int yoffset,int zoffset,int x,int y,int width,int height);
		static Dynamic copyTexSubImage3D_dyn();

		static ::lime::graphics::opengl::GLObject createBuffer( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic createBuffer_dyn();

		static ::lime::graphics::opengl::GLObject createFramebuffer( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic createFramebuffer_dyn();

		static ::lime::graphics::opengl::GLObject createProgram( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic createProgram_dyn();

		static ::lime::graphics::opengl::GLObject createQuery( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic createQuery_dyn();

		static ::lime::graphics::opengl::GLObject createRenderbuffer( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic createRenderbuffer_dyn();

		static ::lime::graphics::opengl::GLObject createSampler( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic createSampler_dyn();

		static ::lime::graphics::opengl::GLObject createShader( ::lime::_backend::native::NativeGLRenderContext this1,int type);
		static Dynamic createShader_dyn();

		static ::lime::graphics::opengl::GLObject createTexture( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic createTexture_dyn();

		static ::lime::graphics::opengl::GLObject createTransformFeedback( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic createTransformFeedback_dyn();

		static ::lime::graphics::opengl::GLObject createVertexArray( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic createVertexArray_dyn();

		static Void cullFace( ::lime::_backend::native::NativeGLRenderContext this1,int mode);
		static Dynamic cullFace_dyn();

		static Void deleteBuffer( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject buffer);
		static Dynamic deleteBuffer_dyn();

		static Void deleteFramebuffer( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject framebuffer);
		static Dynamic deleteFramebuffer_dyn();

		static Void deleteProgram( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program);
		static Dynamic deleteProgram_dyn();

		static Void deleteQuery( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject query);
		static Dynamic deleteQuery_dyn();

		static Void deleteRenderbuffer( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject renderbuffer);
		static Dynamic deleteRenderbuffer_dyn();

		static Void deleteSampler( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject sampler);
		static Dynamic deleteSampler_dyn();

		static Void deleteShader( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject shader);
		static Dynamic deleteShader_dyn();

		static Void deleteSync( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject sync);
		static Dynamic deleteSync_dyn();

		static Void deleteTexture( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject texture);
		static Dynamic deleteTexture_dyn();

		static Void deleteTransformFeedback( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject transformFeedback);
		static Dynamic deleteTransformFeedback_dyn();

		static Void deleteVertexArray( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject vertexArray);
		static Dynamic deleteVertexArray_dyn();

		static Void depthFunc( ::lime::_backend::native::NativeGLRenderContext this1,int func);
		static Dynamic depthFunc_dyn();

		static Void depthMask( ::lime::_backend::native::NativeGLRenderContext this1,bool flag);
		static Dynamic depthMask_dyn();

		static Void depthRange( ::lime::_backend::native::NativeGLRenderContext this1,Float zNear,Float zFar);
		static Dynamic depthRange_dyn();

		static Void detachShader( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,::lime::graphics::opengl::GLObject shader);
		static Dynamic detachShader_dyn();

		static Void disable( ::lime::_backend::native::NativeGLRenderContext this1,int cap);
		static Dynamic disable_dyn();

		static Void disableVertexAttribArray( ::lime::_backend::native::NativeGLRenderContext this1,int index);
		static Dynamic disableVertexAttribArray_dyn();

		static Void drawArrays( ::lime::_backend::native::NativeGLRenderContext this1,int mode,int first,int count);
		static Dynamic drawArrays_dyn();

		static Void drawArraysInstanced( ::lime::_backend::native::NativeGLRenderContext this1,int mode,int first,int count,int instanceCount);
		static Dynamic drawArraysInstanced_dyn();

		static Void drawBuffers( ::lime::_backend::native::NativeGLRenderContext this1,Array< int > buffers);
		static Dynamic drawBuffers_dyn();

		static Void drawElements( ::lime::_backend::native::NativeGLRenderContext this1,int mode,int count,int type,Float offset);
		static Dynamic drawElements_dyn();

		static Void drawElementsInstanced( ::lime::_backend::native::NativeGLRenderContext this1,int mode,int count,int type,Float offset,int instanceCount);
		static Dynamic drawElementsInstanced_dyn();

		static Void drawRangeElements( ::lime::_backend::native::NativeGLRenderContext this1,int mode,int start,int end,int count,int type,Float offset);
		static Dynamic drawRangeElements_dyn();

		static Void enable( ::lime::_backend::native::NativeGLRenderContext this1,int cap);
		static Dynamic enable_dyn();

		static Void enableVertexAttribArray( ::lime::_backend::native::NativeGLRenderContext this1,int index);
		static Dynamic enableVertexAttribArray_dyn();

		static Void endQuery( ::lime::_backend::native::NativeGLRenderContext this1,int target);
		static Dynamic endQuery_dyn();

		static Void endTransformFeedback( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic endTransformFeedback_dyn();

		static ::lime::graphics::opengl::GLObject fenceSync( ::lime::_backend::native::NativeGLRenderContext this1,int condition,int flags);
		static Dynamic fenceSync_dyn();

		static Void finish( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic finish_dyn();

		static Void flush( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic flush_dyn();

		static Void framebufferRenderbuffer( ::lime::_backend::native::NativeGLRenderContext this1,int target,int attachment,int renderbuffertarget,::lime::graphics::opengl::GLObject renderbuffer);
		static Dynamic framebufferRenderbuffer_dyn();

		static Void framebufferTexture2D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int attachment,int textarget,::lime::graphics::opengl::GLObject texture,int level);
		static Dynamic framebufferTexture2D_dyn();

		static Void framebufferTextureLayer( ::lime::_backend::native::NativeGLRenderContext this1,int target,int attachment,::lime::graphics::opengl::GLObject texture,int level,int layer);
		static Dynamic framebufferTextureLayer_dyn();

		static Void frontFace( ::lime::_backend::native::NativeGLRenderContext this1,int mode);
		static Dynamic frontFace_dyn();

		static Void generateMipmap( ::lime::_backend::native::NativeGLRenderContext this1,int target);
		static Dynamic generateMipmap_dyn();

		static Dynamic getActiveAttrib( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,int index);
		static Dynamic getActiveAttrib_dyn();

		static Dynamic getActiveUniform( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,int index);
		static Dynamic getActiveUniform_dyn();

		static ::String getActiveUniformBlockName( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,int uniformBlockIndex);
		static Dynamic getActiveUniformBlockName_dyn();

		static Dynamic getActiveUniformBlockParameter( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,int uniformBlockIndex,int pname);
		static Dynamic getActiveUniformBlockParameter_dyn();

		static Dynamic getActiveUniforms( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,Array< int > uniformIndices,int pname);
		static Dynamic getActiveUniforms_dyn();

		static Array< ::Dynamic > getAttachedShaders( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program);
		static Dynamic getAttachedShaders_dyn();

		static int getAttribLocation( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,::String name);
		static Dynamic getAttribLocation_dyn();

		static Dynamic getBufferParameter( ::lime::_backend::native::NativeGLRenderContext this1,int target,int pname);
		static Dynamic getBufferParameter_dyn();

		static Void getBufferSubData( ::lime::_backend::native::NativeGLRenderContext this1,int target,Float srcByteOffset,::haxe::io::Bytes dstData,hx::Null< int >  srcOffset,Dynamic length);
		static Dynamic getBufferSubData_dyn();

		static Dynamic getContextAttributes( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic getContextAttributes_dyn();

		static int getError( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic getError_dyn();

		static Dynamic getExtension( ::lime::_backend::native::NativeGLRenderContext this1,::String name);
		static Dynamic getExtension_dyn();

		static int getFragDataLocation( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,::String name);
		static Dynamic getFragDataLocation_dyn();

		static Dynamic getFramebufferAttachmentParameter( ::lime::_backend::native::NativeGLRenderContext this1,int target,int attachment,int pname);
		static Dynamic getFramebufferAttachmentParameter_dyn();

		static Dynamic getIndexedParameter( ::lime::_backend::native::NativeGLRenderContext this1,int target,int index);
		static Dynamic getIndexedParameter_dyn();

		static Dynamic getInternalformatParameter( ::lime::_backend::native::NativeGLRenderContext this1,int target,int internalformat,int pname);
		static Dynamic getInternalformatParameter_dyn();

		static Dynamic getParameter( ::lime::_backend::native::NativeGLRenderContext this1,int pname);
		static Dynamic getParameter_dyn();

		static ::String getProgramInfoLog( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program);
		static Dynamic getProgramInfoLog_dyn();

		static Dynamic getProgramParameter( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,int pname);
		static Dynamic getProgramParameter_dyn();

		static ::lime::graphics::opengl::GLObject getQuery( ::lime::_backend::native::NativeGLRenderContext this1,int target,int pname);
		static Dynamic getQuery_dyn();

		static Dynamic getQueryParameter( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject query,int pname);
		static Dynamic getQueryParameter_dyn();

		static Dynamic getRenderbufferParameter( ::lime::_backend::native::NativeGLRenderContext this1,int target,int pname);
		static Dynamic getRenderbufferParameter_dyn();

		static Dynamic getSamplerParameter( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject sampler,int pname);
		static Dynamic getSamplerParameter_dyn();

		static ::String getShaderInfoLog( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject shader);
		static Dynamic getShaderInfoLog_dyn();

		static Dynamic getShaderParameter( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject shader,int pname);
		static Dynamic getShaderParameter_dyn();

		static Dynamic getShaderPrecisionFormat( ::lime::_backend::native::NativeGLRenderContext this1,int shadertype,int precisiontype);
		static Dynamic getShaderPrecisionFormat_dyn();

		static ::String getShaderSource( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject shader);
		static Dynamic getShaderSource_dyn();

		static Array< ::String > getSupportedExtensions( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic getSupportedExtensions_dyn();

		static Dynamic getSyncParameter( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject sync,int pname);
		static Dynamic getSyncParameter_dyn();

		static Dynamic getTexParameter( ::lime::_backend::native::NativeGLRenderContext this1,int target,int pname);
		static Dynamic getTexParameter_dyn();

		static Dynamic getTransformFeedbackVarying( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,int index);
		static Dynamic getTransformFeedbackVarying_dyn();

		static Dynamic getUniform( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,int location);
		static Dynamic getUniform_dyn();

		static int getUniformBlockIndex( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,::String uniformBlockName);
		static Dynamic getUniformBlockIndex_dyn();

		static Array< int > getUniformIndices( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,Array< ::String > uniformNames);
		static Dynamic getUniformIndices_dyn();

		static int getUniformLocation( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,::String name);
		static Dynamic getUniformLocation_dyn();

		static Dynamic getVertexAttrib( ::lime::_backend::native::NativeGLRenderContext this1,int index,int pname);
		static Dynamic getVertexAttrib_dyn();

		static Float getVertexAttribOffset( ::lime::_backend::native::NativeGLRenderContext this1,int index,int pname);
		static Dynamic getVertexAttribOffset_dyn();

		static Void hint( ::lime::_backend::native::NativeGLRenderContext this1,int target,int mode);
		static Dynamic hint_dyn();

		static Void invalidateFramebuffer( ::lime::_backend::native::NativeGLRenderContext this1,int target,Array< int > attachments);
		static Dynamic invalidateFramebuffer_dyn();

		static Void invalidateSubFramebuffer( ::lime::_backend::native::NativeGLRenderContext this1,int target,Array< int > attachments,int x,int y,int width,int height);
		static Dynamic invalidateSubFramebuffer_dyn();

		static bool isBuffer( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject buffer);
		static Dynamic isBuffer_dyn();

		static bool isContextLost( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic isContextLost_dyn();

		static bool isEnabled( ::lime::_backend::native::NativeGLRenderContext this1,int cap);
		static Dynamic isEnabled_dyn();

		static bool isFramebuffer( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject framebuffer);
		static Dynamic isFramebuffer_dyn();

		static bool isProgram( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program);
		static Dynamic isProgram_dyn();

		static bool isQuery( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject query);
		static Dynamic isQuery_dyn();

		static bool isRenderbuffer( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject renderbuffer);
		static Dynamic isRenderbuffer_dyn();

		static bool isSampler( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject sampler);
		static Dynamic isSampler_dyn();

		static bool isShader( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject shader);
		static Dynamic isShader_dyn();

		static bool isTexture( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject texture);
		static Dynamic isTexture_dyn();

		static bool isTransformFeedback( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject transformFeedback);
		static Dynamic isTransformFeedback_dyn();

		static bool isVertexArray( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject vertexArray);
		static Dynamic isVertexArray_dyn();

		static Void lineWidth( ::lime::_backend::native::NativeGLRenderContext this1,Float width);
		static Dynamic lineWidth_dyn();

		static Void linkProgram( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program);
		static Dynamic linkProgram_dyn();

		static Void pauseTransformFeedback( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic pauseTransformFeedback_dyn();

		static Void pixelStorei( ::lime::_backend::native::NativeGLRenderContext this1,int pname,int param);
		static Dynamic pixelStorei_dyn();

		static Void polygonOffset( ::lime::_backend::native::NativeGLRenderContext this1,Float factor,Float units);
		static Dynamic polygonOffset_dyn();

		static Void readBuffer( ::lime::_backend::native::NativeGLRenderContext this1,int src);
		static Dynamic readBuffer_dyn();

		static Void readPixels( ::lime::_backend::native::NativeGLRenderContext this1,int x,int y,int width,int height,int format,int type,::lime::utils::ArrayBufferView pixels,hx::Null< int >  dstOffset);
		static Dynamic readPixels_dyn();

		static Void renderbufferStorage( ::lime::_backend::native::NativeGLRenderContext this1,int target,int internalformat,int width,int height);
		static Dynamic renderbufferStorage_dyn();

		static Void renderbufferStorageMultisample( ::lime::_backend::native::NativeGLRenderContext this1,int target,int samples,int internalFormat,int width,int height);
		static Dynamic renderbufferStorageMultisample_dyn();

		static Void resumeTransformFeedback( ::lime::_backend::native::NativeGLRenderContext this1);
		static Dynamic resumeTransformFeedback_dyn();

		static Void sampleCoverage( ::lime::_backend::native::NativeGLRenderContext this1,Float value,bool invert);
		static Dynamic sampleCoverage_dyn();

		static Void samplerParameterf( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject sampler,int pname,Float param);
		static Dynamic samplerParameterf_dyn();

		static Void samplerParameteri( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject sampler,int pname,int param);
		static Dynamic samplerParameteri_dyn();

		static Void scissor( ::lime::_backend::native::NativeGLRenderContext this1,int x,int y,int width,int height);
		static Dynamic scissor_dyn();

		static Void shaderSource( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject shader,::String source);
		static Dynamic shaderSource_dyn();

		static Void stencilFunc( ::lime::_backend::native::NativeGLRenderContext this1,int func,int ref,int mask);
		static Dynamic stencilFunc_dyn();

		static Void stencilFuncSeparate( ::lime::_backend::native::NativeGLRenderContext this1,int face,int func,int ref,int mask);
		static Dynamic stencilFuncSeparate_dyn();

		static Void stencilMask( ::lime::_backend::native::NativeGLRenderContext this1,int mask);
		static Dynamic stencilMask_dyn();

		static Void stencilMaskSeparate( ::lime::_backend::native::NativeGLRenderContext this1,int face,int mask);
		static Dynamic stencilMaskSeparate_dyn();

		static Void stencilOp( ::lime::_backend::native::NativeGLRenderContext this1,int fail,int zfail,int zpass);
		static Dynamic stencilOp_dyn();

		static Void stencilOpSeparate( ::lime::_backend::native::NativeGLRenderContext this1,int face,int fail,int zfail,int zpass);
		static Dynamic stencilOpSeparate_dyn();

		static Void texImage2D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int internalformat,int width,int height,int border,int format,int type,::lime::utils::ArrayBufferView srcData,hx::Null< int >  srcOffset);
		static Dynamic texImage2D_dyn();

		static Void texImage3D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int internalformat,int width,int height,int depth,int border,int format,int type,::lime::utils::ArrayBufferView srcData,hx::Null< int >  srcOffset);
		static Dynamic texImage3D_dyn();

		static Void texStorage2D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int internalformat,int width,int height);
		static Dynamic texStorage2D_dyn();

		static Void texStorage3D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int internalformat,int width,int height,int depth);
		static Dynamic texStorage3D_dyn();

		static Void texParameterf( ::lime::_backend::native::NativeGLRenderContext this1,int target,int pname,Float param);
		static Dynamic texParameterf_dyn();

		static Void texParameteri( ::lime::_backend::native::NativeGLRenderContext this1,int target,int pname,int param);
		static Dynamic texParameteri_dyn();

		static Void texSubImage2D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int xoffset,int yoffset,int width,int height,int format,int type,::lime::utils::ArrayBufferView srcData,hx::Null< int >  srcOffset);
		static Dynamic texSubImage2D_dyn();

		static Void texSubImage3D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int xoffset,int yoffset,int zoffset,int width,int height,int depth,int format,int type,::lime::utils::ArrayBufferView srcData,hx::Null< int >  srcOffset);
		static Dynamic texSubImage3D_dyn();

		static Void transformFeedbackVaryings( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,Array< ::String > varyings,int bufferMode);
		static Dynamic transformFeedbackVaryings_dyn();

		static Void uniform1f( ::lime::_backend::native::NativeGLRenderContext this1,int location,Float v0);
		static Dynamic uniform1f_dyn();

		static Void uniform1fv( ::lime::_backend::native::NativeGLRenderContext this1,int location,::lime::utils::ArrayBufferView v);
		static Dynamic uniform1fv_dyn();

		static Void uniform1i( ::lime::_backend::native::NativeGLRenderContext this1,int location,int v0);
		static Dynamic uniform1i_dyn();

		static Void uniform1iv( ::lime::_backend::native::NativeGLRenderContext this1,int location,::lime::utils::ArrayBufferView v);
		static Dynamic uniform1iv_dyn();

		static Void uniform1ui( ::lime::_backend::native::NativeGLRenderContext this1,int location,int v0);
		static Dynamic uniform1ui_dyn();

		static Void uniform1uiv( ::lime::_backend::native::NativeGLRenderContext this1,int location,::lime::utils::ArrayBufferView v);
		static Dynamic uniform1uiv_dyn();

		static Void uniform2f( ::lime::_backend::native::NativeGLRenderContext this1,int location,Float v0,Float v1);
		static Dynamic uniform2f_dyn();

		static Void uniform2fv( ::lime::_backend::native::NativeGLRenderContext this1,int location,::lime::utils::ArrayBufferView v);
		static Dynamic uniform2fv_dyn();

		static Void uniform2i( ::lime::_backend::native::NativeGLRenderContext this1,int location,int v0,int v1);
		static Dynamic uniform2i_dyn();

		static Void uniform2iv( ::lime::_backend::native::NativeGLRenderContext this1,int location,::lime::utils::ArrayBufferView v);
		static Dynamic uniform2iv_dyn();

		static Void uniform2ui( ::lime::_backend::native::NativeGLRenderContext this1,int location,int v0,int v1);
		static Dynamic uniform2ui_dyn();

		static Void uniform2uiv( ::lime::_backend::native::NativeGLRenderContext this1,int location,::lime::utils::ArrayBufferView v);
		static Dynamic uniform2uiv_dyn();

		static Void uniform3f( ::lime::_backend::native::NativeGLRenderContext this1,int location,Float v0,Float v1,Float v2);
		static Dynamic uniform3f_dyn();

		static Void uniform3fv( ::lime::_backend::native::NativeGLRenderContext this1,int location,::lime::utils::ArrayBufferView v);
		static Dynamic uniform3fv_dyn();

		static Void uniform3i( ::lime::_backend::native::NativeGLRenderContext this1,int location,int v0,int v1,int v2);
		static Dynamic uniform3i_dyn();

		static Void uniform3iv( ::lime::_backend::native::NativeGLRenderContext this1,int location,::lime::utils::ArrayBufferView v);
		static Dynamic uniform3iv_dyn();

		static Void uniform3ui( ::lime::_backend::native::NativeGLRenderContext this1,int location,int v0,int v1,int v2);
		static Dynamic uniform3ui_dyn();

		static Void uniform3uiv( ::lime::_backend::native::NativeGLRenderContext this1,int location,::lime::utils::ArrayBufferView v);
		static Dynamic uniform3uiv_dyn();

		static Void uniform4f( ::lime::_backend::native::NativeGLRenderContext this1,int location,Float v0,Float v1,Float v2,Float v3);
		static Dynamic uniform4f_dyn();

		static Void uniform4fv( ::lime::_backend::native::NativeGLRenderContext this1,int location,::lime::utils::ArrayBufferView v);
		static Dynamic uniform4fv_dyn();

		static Void uniform4i( ::lime::_backend::native::NativeGLRenderContext this1,int location,int v0,int v1,int v2,int v3);
		static Dynamic uniform4i_dyn();

		static Void uniform4iv( ::lime::_backend::native::NativeGLRenderContext this1,int location,::lime::utils::ArrayBufferView v);
		static Dynamic uniform4iv_dyn();

		static Void uniform4ui( ::lime::_backend::native::NativeGLRenderContext this1,int location,int v0,int v1,int v2,int v3);
		static Dynamic uniform4ui_dyn();

		static Void uniform4uiv( ::lime::_backend::native::NativeGLRenderContext this1,int location,::lime::utils::ArrayBufferView v);
		static Dynamic uniform4uiv_dyn();

		static Void uniformBlockBinding( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program,int uniformBlockIndex,int uniformBlockBinding);
		static Dynamic uniformBlockBinding_dyn();

		static Void uniformMatrix2fv( ::lime::_backend::native::NativeGLRenderContext this1,int location,bool transpose,::lime::utils::ArrayBufferView v,hx::Null< int >  srcOffset,Dynamic srcLength);
		static Dynamic uniformMatrix2fv_dyn();

		static Void uniformMatrix2x3fv( ::lime::_backend::native::NativeGLRenderContext this1,int location,bool transpose,::lime::utils::ArrayBufferView v,hx::Null< int >  srcOffset,Dynamic srcLength);
		static Dynamic uniformMatrix2x3fv_dyn();

		static Void uniformMatrix2x4fv( ::lime::_backend::native::NativeGLRenderContext this1,int location,bool transpose,::lime::utils::ArrayBufferView v,hx::Null< int >  srcOffset,Dynamic srcLength);
		static Dynamic uniformMatrix2x4fv_dyn();

		static Void uniformMatrix3fv( ::lime::_backend::native::NativeGLRenderContext this1,int location,bool transpose,::lime::utils::ArrayBufferView v,hx::Null< int >  srcOffset,Dynamic srcLength);
		static Dynamic uniformMatrix3fv_dyn();

		static Void uniformMatrix3x2fv( ::lime::_backend::native::NativeGLRenderContext this1,int location,bool transpose,::lime::utils::ArrayBufferView v,hx::Null< int >  srcOffset,Dynamic srcLength);
		static Dynamic uniformMatrix3x2fv_dyn();

		static Void uniformMatrix3x4fv( ::lime::_backend::native::NativeGLRenderContext this1,int location,bool transpose,::lime::utils::ArrayBufferView v,hx::Null< int >  srcOffset,Dynamic srcLength);
		static Dynamic uniformMatrix3x4fv_dyn();

		static Void uniformMatrix4fv( ::lime::_backend::native::NativeGLRenderContext this1,int location,bool transpose,::lime::utils::ArrayBufferView v,hx::Null< int >  srcOffset,Dynamic srcLength);
		static Dynamic uniformMatrix4fv_dyn();

		static Void uniformMatrix4x2fv( ::lime::_backend::native::NativeGLRenderContext this1,int location,bool transpose,::lime::utils::ArrayBufferView v,hx::Null< int >  srcOffset,Dynamic srcLength);
		static Dynamic uniformMatrix4x2fv_dyn();

		static Void uniformMatrix4x3fv( ::lime::_backend::native::NativeGLRenderContext this1,int location,bool transpose,::lime::utils::ArrayBufferView v,hx::Null< int >  srcOffset,Dynamic srcLength);
		static Dynamic uniformMatrix4x3fv_dyn();

		static Void useProgram( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program);
		static Dynamic useProgram_dyn();

		static Void validateProgram( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject program);
		static Dynamic validateProgram_dyn();

		static Void vertexAttrib1f( ::lime::_backend::native::NativeGLRenderContext this1,int indx,Float x);
		static Dynamic vertexAttrib1f_dyn();

		static Void vertexAttrib1fv( ::lime::_backend::native::NativeGLRenderContext this1,int indx,::lime::utils::ArrayBufferView values);
		static Dynamic vertexAttrib1fv_dyn();

		static Void vertexAttrib2f( ::lime::_backend::native::NativeGLRenderContext this1,int indx,Float x,Float y);
		static Dynamic vertexAttrib2f_dyn();

		static Void vertexAttrib2fv( ::lime::_backend::native::NativeGLRenderContext this1,int indx,::lime::utils::ArrayBufferView values);
		static Dynamic vertexAttrib2fv_dyn();

		static Void vertexAttrib3f( ::lime::_backend::native::NativeGLRenderContext this1,int indx,Float x,Float y,Float z);
		static Dynamic vertexAttrib3f_dyn();

		static Void vertexAttrib3fv( ::lime::_backend::native::NativeGLRenderContext this1,int indx,::lime::utils::ArrayBufferView values);
		static Dynamic vertexAttrib3fv_dyn();

		static Void vertexAttrib4f( ::lime::_backend::native::NativeGLRenderContext this1,int indx,Float x,Float y,Float z,Float w);
		static Dynamic vertexAttrib4f_dyn();

		static Void vertexAttrib4fv( ::lime::_backend::native::NativeGLRenderContext this1,int indx,::lime::utils::ArrayBufferView values);
		static Dynamic vertexAttrib4fv_dyn();

		static Void vertexAttribDivisor( ::lime::_backend::native::NativeGLRenderContext this1,int index,int divisor);
		static Dynamic vertexAttribDivisor_dyn();

		static Void vertexAttribI4i( ::lime::_backend::native::NativeGLRenderContext this1,int indx,int x,int y,int z,int w);
		static Dynamic vertexAttribI4i_dyn();

		static Void vertexAttribI4iv( ::lime::_backend::native::NativeGLRenderContext this1,int indx,::lime::utils::ArrayBufferView values);
		static Dynamic vertexAttribI4iv_dyn();

		static Void vertexAttribI4ui( ::lime::_backend::native::NativeGLRenderContext this1,int indx,int x,int y,int z,int w);
		static Dynamic vertexAttribI4ui_dyn();

		static Void vertexAttribI4uiv( ::lime::_backend::native::NativeGLRenderContext this1,int indx,::lime::utils::ArrayBufferView values);
		static Dynamic vertexAttribI4uiv_dyn();

		static Void vertexAttribPointer( ::lime::_backend::native::NativeGLRenderContext this1,int indx,int size,int type,bool normalized,int stride,Float offset);
		static Dynamic vertexAttribPointer_dyn();

		static Void viewport( ::lime::_backend::native::NativeGLRenderContext this1,int x,int y,int width,int height);
		static Dynamic viewport_dyn();

		static Void waitSync( ::lime::_backend::native::NativeGLRenderContext this1,::lime::graphics::opengl::GLObject sync,int flags,cpp::Int64Struct timeout);
		static Dynamic waitSync_dyn();

		static ::lime::_backend::native::NativeGLRenderContext fromGL( ::hx::Class gl);
		static Dynamic fromGL_dyn();

		static ::lime::_backend::native::NativeGLRenderContext fromGLES3Context( ::lime::_backend::native::NativeGLRenderContext gl);
		static Dynamic fromGLES3Context_dyn();

		static ::lime::_backend::native::NativeGLRenderContext toWebGLContext( ::lime::_backend::native::NativeGLRenderContext gl);
		static Dynamic toWebGLContext_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace _WebGL2Context

#endif /* INCLUDED_lime_graphics_opengl__WebGL2Context_WebGL2Context_Impl_ */ 

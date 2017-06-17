#ifndef INCLUDED_lime_graphics_opengl_GL
#define INCLUDED_lime_graphics_opengl_GL

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,_backend,native,NativeGLRenderContext)
HX_DECLARE_CLASS3(lime,graphics,opengl,GL)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLContextType)
HX_DECLARE_CLASS3(lime,graphics,opengl,GLObject)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)
HX_DECLARE_CLASS2(lime,utils,BytePointerData)
namespace lime{
namespace graphics{
namespace opengl{


class HXCPP_CLASS_ATTRIBUTES  GL_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GL_obj OBJ_;
		GL_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.GL")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GL_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GL_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		static void __register();
		::String __ToString() const { return HX_HCSTRING("GL","\x25","\x3e","\x00","\x00"); }

		static void __boot();
		static int DEPTH_BUFFER_BIT;
		static int STENCIL_BUFFER_BIT;
		static int COLOR_BUFFER_BIT;
		static int POINTS;
		static int LINES;
		static int LINE_LOOP;
		static int LINE_STRIP;
		static int TRIANGLES;
		static int TRIANGLE_STRIP;
		static int TRIANGLE_FAN;
		static int ZERO;
		static int ONE;
		static int SRC_COLOR;
		static int ONE_MINUS_SRC_COLOR;
		static int SRC_ALPHA;
		static int ONE_MINUS_SRC_ALPHA;
		static int DST_ALPHA;
		static int ONE_MINUS_DST_ALPHA;
		static int DST_COLOR;
		static int ONE_MINUS_DST_COLOR;
		static int SRC_ALPHA_SATURATE;
		static int FUNC_ADD;
		static int BLEND_EQUATION;
		static int BLEND_EQUATION_RGB;
		static int BLEND_EQUATION_ALPHA;
		static int FUNC_SUBTRACT;
		static int FUNC_REVERSE_SUBTRACT;
		static int BLEND_DST_RGB;
		static int BLEND_SRC_RGB;
		static int BLEND_DST_ALPHA;
		static int BLEND_SRC_ALPHA;
		static int CONSTANT_COLOR;
		static int ONE_MINUS_CONSTANT_COLOR;
		static int CONSTANT_ALPHA;
		static int ONE_MINUS_CONSTANT_ALPHA;
		static int BLEND_COLOR;
		static int ARRAY_BUFFER;
		static int ELEMENT_ARRAY_BUFFER;
		static int ARRAY_BUFFER_BINDING;
		static int ELEMENT_ARRAY_BUFFER_BINDING;
		static int STREAM_DRAW;
		static int STATIC_DRAW;
		static int DYNAMIC_DRAW;
		static int BUFFER_SIZE;
		static int BUFFER_USAGE;
		static int CURRENT_VERTEX_ATTRIB;
		static int FRONT;
		static int BACK;
		static int FRONT_AND_BACK;
		static int CULL_FACE;
		static int BLEND;
		static int DITHER;
		static int STENCIL_TEST;
		static int DEPTH_TEST;
		static int SCISSOR_TEST;
		static int POLYGON_OFFSET_FILL;
		static int SAMPLE_ALPHA_TO_COVERAGE;
		static int SAMPLE_COVERAGE;
		static int NO_ERROR;
		static int INVALID_ENUM;
		static int INVALID_VALUE;
		static int INVALID_OPERATION;
		static int OUT_OF_MEMORY;
		static int CW;
		static int CCW;
		static int LINE_WIDTH;
		static int ALIASED_POINT_SIZE_RANGE;
		static int ALIASED_LINE_WIDTH_RANGE;
		static int CULL_FACE_MODE;
		static int FRONT_FACE;
		static int DEPTH_RANGE;
		static int DEPTH_WRITEMASK;
		static int DEPTH_CLEAR_VALUE;
		static int DEPTH_FUNC;
		static int STENCIL_CLEAR_VALUE;
		static int STENCIL_FUNC;
		static int STENCIL_FAIL;
		static int STENCIL_PASS_DEPTH_FAIL;
		static int STENCIL_PASS_DEPTH_PASS;
		static int STENCIL_REF;
		static int STENCIL_VALUE_MASK;
		static int STENCIL_WRITEMASK;
		static int STENCIL_BACK_FUNC;
		static int STENCIL_BACK_FAIL;
		static int STENCIL_BACK_PASS_DEPTH_FAIL;
		static int STENCIL_BACK_PASS_DEPTH_PASS;
		static int STENCIL_BACK_REF;
		static int STENCIL_BACK_VALUE_MASK;
		static int STENCIL_BACK_WRITEMASK;
		static int VIEWPORT;
		static int SCISSOR_BOX;
		static int COLOR_CLEAR_VALUE;
		static int COLOR_WRITEMASK;
		static int UNPACK_ALIGNMENT;
		static int PACK_ALIGNMENT;
		static int MAX_TEXTURE_SIZE;
		static int MAX_VIEWPORT_DIMS;
		static int SUBPIXEL_BITS;
		static int RED_BITS;
		static int GREEN_BITS;
		static int BLUE_BITS;
		static int ALPHA_BITS;
		static int DEPTH_BITS;
		static int STENCIL_BITS;
		static int POLYGON_OFFSET_UNITS;
		static int POLYGON_OFFSET_FACTOR;
		static int TEXTURE_BINDING_2D;
		static int SAMPLE_BUFFERS;
		static int SAMPLES;
		static int SAMPLE_COVERAGE_VALUE;
		static int SAMPLE_COVERAGE_INVERT;
		static int NUM_COMPRESSED_TEXTURE_FORMATS;
		static int COMPRESSED_TEXTURE_FORMATS;
		static int DONT_CARE;
		static int FASTEST;
		static int NICEST;
		static int GENERATE_MIPMAP_HINT;
		static int BYTE;
		static int UNSIGNED_BYTE;
		static int SHORT;
		static int UNSIGNED_SHORT;
		static int INT;
		static int UNSIGNED_INT;
		static int FLOAT;
		static int DEPTH_COMPONENT;
		static int ALPHA;
		static int RGB;
		static int RGBA;
		static int LUMINANCE;
		static int LUMINANCE_ALPHA;
		static int UNSIGNED_SHORT_4_4_4_4;
		static int UNSIGNED_SHORT_5_5_5_1;
		static int UNSIGNED_SHORT_5_6_5;
		static int FRAGMENT_SHADER;
		static int VERTEX_SHADER;
		static int MAX_VERTEX_ATTRIBS;
		static int MAX_VERTEX_UNIFORM_VECTORS;
		static int MAX_VARYING_VECTORS;
		static int MAX_COMBINED_TEXTURE_IMAGE_UNITS;
		static int MAX_VERTEX_TEXTURE_IMAGE_UNITS;
		static int MAX_TEXTURE_IMAGE_UNITS;
		static int MAX_FRAGMENT_UNIFORM_VECTORS;
		static int SHADER_TYPE;
		static int DELETE_STATUS;
		static int LINK_STATUS;
		static int VALIDATE_STATUS;
		static int ATTACHED_SHADERS;
		static int ACTIVE_UNIFORMS;
		static int ACTIVE_ATTRIBUTES;
		static int SHADING_LANGUAGE_VERSION;
		static int CURRENT_PROGRAM;
		static int NEVER;
		static int LESS;
		static int EQUAL;
		static int LEQUAL;
		static int GREATER;
		static int NOTEQUAL;
		static int GEQUAL;
		static int ALWAYS;
		static int KEEP;
		static int REPLACE;
		static int INCR;
		static int DECR;
		static int INVERT;
		static int INCR_WRAP;
		static int DECR_WRAP;
		static int VENDOR;
		static int RENDERER;
		static int VERSION;
		static int EXTENSIONS;
		static int NEAREST;
		static int LINEAR;
		static int NEAREST_MIPMAP_NEAREST;
		static int LINEAR_MIPMAP_NEAREST;
		static int NEAREST_MIPMAP_LINEAR;
		static int LINEAR_MIPMAP_LINEAR;
		static int TEXTURE_MAG_FILTER;
		static int TEXTURE_MIN_FILTER;
		static int TEXTURE_WRAP_S;
		static int TEXTURE_WRAP_T;
		static int TEXTURE_2D;
		static int TEXTURE;
		static int TEXTURE_CUBE_MAP;
		static int TEXTURE_BINDING_CUBE_MAP;
		static int TEXTURE_CUBE_MAP_POSITIVE_X;
		static int TEXTURE_CUBE_MAP_NEGATIVE_X;
		static int TEXTURE_CUBE_MAP_POSITIVE_Y;
		static int TEXTURE_CUBE_MAP_NEGATIVE_Y;
		static int TEXTURE_CUBE_MAP_POSITIVE_Z;
		static int TEXTURE_CUBE_MAP_NEGATIVE_Z;
		static int MAX_CUBE_MAP_TEXTURE_SIZE;
		static int TEXTURE0;
		static int TEXTURE1;
		static int TEXTURE2;
		static int TEXTURE3;
		static int TEXTURE4;
		static int TEXTURE5;
		static int TEXTURE6;
		static int TEXTURE7;
		static int TEXTURE8;
		static int TEXTURE9;
		static int TEXTURE10;
		static int TEXTURE11;
		static int TEXTURE12;
		static int TEXTURE13;
		static int TEXTURE14;
		static int TEXTURE15;
		static int TEXTURE16;
		static int TEXTURE17;
		static int TEXTURE18;
		static int TEXTURE19;
		static int TEXTURE20;
		static int TEXTURE21;
		static int TEXTURE22;
		static int TEXTURE23;
		static int TEXTURE24;
		static int TEXTURE25;
		static int TEXTURE26;
		static int TEXTURE27;
		static int TEXTURE28;
		static int TEXTURE29;
		static int TEXTURE30;
		static int TEXTURE31;
		static int ACTIVE_TEXTURE;
		static int REPEAT;
		static int CLAMP_TO_EDGE;
		static int MIRRORED_REPEAT;
		static int FLOAT_VEC2;
		static int FLOAT_VEC3;
		static int FLOAT_VEC4;
		static int INT_VEC2;
		static int INT_VEC3;
		static int INT_VEC4;
		static int BOOL;
		static int BOOL_VEC2;
		static int BOOL_VEC3;
		static int BOOL_VEC4;
		static int FLOAT_MAT2;
		static int FLOAT_MAT3;
		static int FLOAT_MAT4;
		static int SAMPLER_2D;
		static int SAMPLER_CUBE;
		static int VERTEX_ATTRIB_ARRAY_ENABLED;
		static int VERTEX_ATTRIB_ARRAY_SIZE;
		static int VERTEX_ATTRIB_ARRAY_STRIDE;
		static int VERTEX_ATTRIB_ARRAY_TYPE;
		static int VERTEX_ATTRIB_ARRAY_NORMALIZED;
		static int VERTEX_ATTRIB_ARRAY_POINTER;
		static int VERTEX_ATTRIB_ARRAY_BUFFER_BINDING;
		static int IMPLEMENTATION_COLOR_READ_TYPE;
		static int IMPLEMENTATION_COLOR_READ_FORMAT;
		static int VERTEX_PROGRAM_POINT_SIZE;
		static int POINT_SPRITE;
		static int COMPILE_STATUS;
		static int LOW_FLOAT;
		static int MEDIUM_FLOAT;
		static int HIGH_FLOAT;
		static int LOW_INT;
		static int MEDIUM_INT;
		static int HIGH_INT;
		static int FRAMEBUFFER;
		static int RENDERBUFFER;
		static int RGBA4;
		static int RGB5_A1;
		static int RGB565;
		static int DEPTH_COMPONENT16;
		static int STENCIL_INDEX;
		static int STENCIL_INDEX8;
		static int DEPTH_STENCIL;
		static int RENDERBUFFER_WIDTH;
		static int RENDERBUFFER_HEIGHT;
		static int RENDERBUFFER_INTERNAL_FORMAT;
		static int RENDERBUFFER_RED_SIZE;
		static int RENDERBUFFER_GREEN_SIZE;
		static int RENDERBUFFER_BLUE_SIZE;
		static int RENDERBUFFER_ALPHA_SIZE;
		static int RENDERBUFFER_DEPTH_SIZE;
		static int RENDERBUFFER_STENCIL_SIZE;
		static int FRAMEBUFFER_ATTACHMENT_OBJECT_TYPE;
		static int FRAMEBUFFER_ATTACHMENT_OBJECT_NAME;
		static int FRAMEBUFFER_ATTACHMENT_TEXTURE_LEVEL;
		static int FRAMEBUFFER_ATTACHMENT_TEXTURE_CUBE_MAP_FACE;
		static int COLOR_ATTACHMENT0;
		static int DEPTH_ATTACHMENT;
		static int STENCIL_ATTACHMENT;
		static int DEPTH_STENCIL_ATTACHMENT;
		static int NONE;
		static int FRAMEBUFFER_COMPLETE;
		static int FRAMEBUFFER_INCOMPLETE_ATTACHMENT;
		static int FRAMEBUFFER_INCOMPLETE_MISSING_ATTACHMENT;
		static int FRAMEBUFFER_INCOMPLETE_DIMENSIONS;
		static int FRAMEBUFFER_UNSUPPORTED;
		static int FRAMEBUFFER_BINDING;
		static int RENDERBUFFER_BINDING;
		static int MAX_RENDERBUFFER_SIZE;
		static int INVALID_FRAMEBUFFER_OPERATION;
		static int UNPACK_FLIP_Y_WEBGL;
		static int UNPACK_PREMULTIPLY_ALPHA_WEBGL;
		static int CONTEXT_LOST_WEBGL;
		static int UNPACK_COLORSPACE_CONVERSION_WEBGL;
		static int BROWSER_DEFAULT_WEBGL;
		static int READ_BUFFER;
		static int UNPACK_ROW_LENGTH;
		static int UNPACK_SKIP_ROWS;
		static int UNPACK_SKIP_PIXELS;
		static int PACK_ROW_LENGTH;
		static int PACK_SKIP_ROWS;
		static int PACK_SKIP_PIXELS;
		static int TEXTURE_BINDING_3D;
		static int UNPACK_SKIP_IMAGES;
		static int UNPACK_IMAGE_HEIGHT;
		static int MAX_3D_TEXTURE_SIZE;
		static int MAX_ELEMENTS_VERTICES;
		static int MAX_ELEMENTS_INDICES;
		static int MAX_TEXTURE_LOD_BIAS;
		static int MAX_FRAGMENT_UNIFORM_COMPONENTS;
		static int MAX_VERTEX_UNIFORM_COMPONENTS;
		static int MAX_ARRAY_TEXTURE_LAYERS;
		static int MIN_PROGRAM_TEXEL_OFFSET;
		static int MAX_PROGRAM_TEXEL_OFFSET;
		static int MAX_VARYING_COMPONENTS;
		static int FRAGMENT_SHADER_DERIVATIVE_HINT;
		static int RASTERIZER_DISCARD;
		static int VERTEX_ARRAY_BINDING;
		static int MAX_VERTEX_OUTPUT_COMPONENTS;
		static int MAX_FRAGMENT_INPUT_COMPONENTS;
		static int MAX_SERVER_WAIT_TIMEOUT;
		static int MAX_ELEMENT_INDEX;
		static int RED;
		static int RGB8;
		static int RGBA8;
		static int RGB10_A2;
		static int TEXTURE_3D;
		static int TEXTURE_WRAP_R;
		static int TEXTURE_MIN_LOD;
		static int TEXTURE_MAX_LOD;
		static int TEXTURE_BASE_LEVEL;
		static int TEXTURE_MAX_LEVEL;
		static int TEXTURE_COMPARE_MODE;
		static int TEXTURE_COMPARE_FUNC;
		static int SRGB;
		static int SRGB8;
		static int SRGB8_ALPHA8;
		static int COMPARE_REF_TO_TEXTURE;
		static int RGBA32F;
		static int RGB32F;
		static int RGBA16F;
		static int RGB16F;
		static int TEXTURE_2D_ARRAY;
		static int TEXTURE_BINDING_2D_ARRAY;
		static int R11F_G11F_B10F;
		static int RGB9_E5;
		static int RGBA32UI;
		static int RGB32UI;
		static int RGBA16UI;
		static int RGB16UI;
		static int RGBA8UI;
		static int RGB8UI;
		static int RGBA32I;
		static int RGB32I;
		static int RGBA16I;
		static int RGB16I;
		static int RGBA8I;
		static int RGB8I;
		static int RED_INTEGER;
		static int RGB_INTEGER;
		static int RGBA_INTEGER;
		static int R8;
		static int RG8;
		static int R16F;
		static int R32F;
		static int RG16F;
		static int RG32F;
		static int R8I;
		static int R8UI;
		static int R16I;
		static int R16UI;
		static int R32I;
		static int R32UI;
		static int RG8I;
		static int RG8UI;
		static int RG16I;
		static int RG16UI;
		static int RG32I;
		static int RG32UI;
		static int R8_SNORM;
		static int RG8_SNORM;
		static int RGB8_SNORM;
		static int RGBA8_SNORM;
		static int RGB10_A2UI;
		static int TEXTURE_IMMUTABLE_FORMAT;
		static int TEXTURE_IMMUTABLE_LEVELS;
		static int UNSIGNED_INT_2_10_10_10_REV;
		static int UNSIGNED_INT_10F_11F_11F_REV;
		static int UNSIGNED_INT_5_9_9_9_REV;
		static int FLOAT_32_UNSIGNED_INT_24_8_REV;
		static int UNSIGNED_INT_24_8;
		static int HALF_FLOAT;
		static int RG;
		static int RG_INTEGER;
		static int INT_2_10_10_10_REV;
		static int CURRENT_QUERY;
		static int QUERY_RESULT;
		static int QUERY_RESULT_AVAILABLE;
		static int ANY_SAMPLES_PASSED;
		static int ANY_SAMPLES_PASSED_CONSERVATIVE;
		static int MAX_DRAW_BUFFERS;
		static int DRAW_BUFFER0;
		static int DRAW_BUFFER1;
		static int DRAW_BUFFER2;
		static int DRAW_BUFFER3;
		static int DRAW_BUFFER4;
		static int DRAW_BUFFER5;
		static int DRAW_BUFFER6;
		static int DRAW_BUFFER7;
		static int DRAW_BUFFER8;
		static int DRAW_BUFFER9;
		static int DRAW_BUFFER10;
		static int DRAW_BUFFER11;
		static int DRAW_BUFFER12;
		static int DRAW_BUFFER13;
		static int DRAW_BUFFER14;
		static int DRAW_BUFFER15;
		static int MAX_COLOR_ATTACHMENTS;
		static int COLOR_ATTACHMENT1;
		static int COLOR_ATTACHMENT2;
		static int COLOR_ATTACHMENT3;
		static int COLOR_ATTACHMENT4;
		static int COLOR_ATTACHMENT5;
		static int COLOR_ATTACHMENT6;
		static int COLOR_ATTACHMENT7;
		static int COLOR_ATTACHMENT8;
		static int COLOR_ATTACHMENT9;
		static int COLOR_ATTACHMENT10;
		static int COLOR_ATTACHMENT11;
		static int COLOR_ATTACHMENT12;
		static int COLOR_ATTACHMENT13;
		static int COLOR_ATTACHMENT14;
		static int COLOR_ATTACHMENT15;
		static int SAMPLER_3D;
		static int SAMPLER_2D_SHADOW;
		static int SAMPLER_2D_ARRAY;
		static int SAMPLER_2D_ARRAY_SHADOW;
		static int SAMPLER_CUBE_SHADOW;
		static int INT_SAMPLER_2D;
		static int INT_SAMPLER_3D;
		static int INT_SAMPLER_CUBE;
		static int INT_SAMPLER_2D_ARRAY;
		static int UNSIGNED_INT_SAMPLER_2D;
		static int UNSIGNED_INT_SAMPLER_3D;
		static int UNSIGNED_INT_SAMPLER_CUBE;
		static int UNSIGNED_INT_SAMPLER_2D_ARRAY;
		static int MAX_SAMPLES;
		static int SAMPLER_BINDING;
		static int PIXEL_PACK_BUFFER;
		static int PIXEL_UNPACK_BUFFER;
		static int PIXEL_PACK_BUFFER_BINDING;
		static int PIXEL_UNPACK_BUFFER_BINDING;
		static int COPY_READ_BUFFER;
		static int COPY_WRITE_BUFFER;
		static int COPY_READ_BUFFER_BINDING;
		static int COPY_WRITE_BUFFER_BINDING;
		static int FLOAT_MAT2x3;
		static int FLOAT_MAT2x4;
		static int FLOAT_MAT3x2;
		static int FLOAT_MAT3x4;
		static int FLOAT_MAT4x2;
		static int FLOAT_MAT4x3;
		static int UNSIGNED_INT_VEC2;
		static int UNSIGNED_INT_VEC3;
		static int UNSIGNED_INT_VEC4;
		static int UNSIGNED_NORMALIZED;
		static int SIGNED_NORMALIZED;
		static int VERTEX_ATTRIB_ARRAY_INTEGER;
		static int VERTEX_ATTRIB_ARRAY_DIVISOR;
		static int TRANSFORM_FEEDBACK_BUFFER_MODE;
		static int MAX_TRANSFORM_FEEDBACK_SEPARATE_COMPONENTS;
		static int TRANSFORM_FEEDBACK_VARYINGS;
		static int TRANSFORM_FEEDBACK_BUFFER_START;
		static int TRANSFORM_FEEDBACK_BUFFER_SIZE;
		static int TRANSFORM_FEEDBACK_PRIMITIVES_WRITTEN;
		static int MAX_TRANSFORM_FEEDBACK_INTERLEAVED_COMPONENTS;
		static int MAX_TRANSFORM_FEEDBACK_SEPARATE_ATTRIBS;
		static int INTERLEAVED_ATTRIBS;
		static int SEPARATE_ATTRIBS;
		static int TRANSFORM_FEEDBACK_BUFFER;
		static int TRANSFORM_FEEDBACK_BUFFER_BINDING;
		static int TRANSFORM_FEEDBACK;
		static int TRANSFORM_FEEDBACK_PAUSED;
		static int TRANSFORM_FEEDBACK_ACTIVE;
		static int TRANSFORM_FEEDBACK_BINDING;
		static int FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING;
		static int FRAMEBUFFER_ATTACHMENT_COMPONENT_TYPE;
		static int FRAMEBUFFER_ATTACHMENT_RED_SIZE;
		static int FRAMEBUFFER_ATTACHMENT_GREEN_SIZE;
		static int FRAMEBUFFER_ATTACHMENT_BLUE_SIZE;
		static int FRAMEBUFFER_ATTACHMENT_ALPHA_SIZE;
		static int FRAMEBUFFER_ATTACHMENT_DEPTH_SIZE;
		static int FRAMEBUFFER_ATTACHMENT_STENCIL_SIZE;
		static int FRAMEBUFFER_DEFAULT;
		static int DEPTH24_STENCIL8;
		static int DRAW_FRAMEBUFFER_BINDING;
		static int READ_FRAMEBUFFER;
		static int DRAW_FRAMEBUFFER;
		static int READ_FRAMEBUFFER_BINDING;
		static int RENDERBUFFER_SAMPLES;
		static int FRAMEBUFFER_ATTACHMENT_TEXTURE_LAYER;
		static int FRAMEBUFFER_INCOMPLETE_MULTISAMPLE;
		static int UNIFORM_BUFFER;
		static int UNIFORM_BUFFER_BINDING;
		static int UNIFORM_BUFFER_START;
		static int UNIFORM_BUFFER_SIZE;
		static int MAX_VERTEX_UNIFORM_BLOCKS;
		static int MAX_FRAGMENT_UNIFORM_BLOCKS;
		static int MAX_COMBINED_UNIFORM_BLOCKS;
		static int MAX_UNIFORM_BUFFER_BINDINGS;
		static int MAX_UNIFORM_BLOCK_SIZE;
		static int MAX_COMBINED_VERTEX_UNIFORM_COMPONENTS;
		static int MAX_COMBINED_FRAGMENT_UNIFORM_COMPONENTS;
		static int UNIFORM_BUFFER_OFFSET_ALIGNMENT;
		static int ACTIVE_UNIFORM_BLOCKS;
		static int UNIFORM_TYPE;
		static int UNIFORM_SIZE;
		static int UNIFORM_BLOCK_INDEX;
		static int UNIFORM_OFFSET;
		static int UNIFORM_ARRAY_STRIDE;
		static int UNIFORM_MATRIX_STRIDE;
		static int UNIFORM_IS_ROW_MAJOR;
		static int UNIFORM_BLOCK_BINDING;
		static int UNIFORM_BLOCK_DATA_SIZE;
		static int UNIFORM_BLOCK_ACTIVE_UNIFORMS;
		static int UNIFORM_BLOCK_ACTIVE_UNIFORM_INDICES;
		static int UNIFORM_BLOCK_REFERENCED_BY_VERTEX_SHADER;
		static int UNIFORM_BLOCK_REFERENCED_BY_FRAGMENT_SHADER;
		static int OBJECT_TYPE;
		static int SYNC_CONDITION;
		static int SYNC_STATUS;
		static int SYNC_FLAGS;
		static int SYNC_FENCE;
		static int SYNC_GPU_COMMANDS_COMPLETE;
		static int UNSIGNALED;
		static int SIGNALED;
		static int ALREADY_SIGNALED;
		static int TIMEOUT_EXPIRED;
		static int CONDITION_SATISFIED;
		static int WAIT_FAILED;
		static int SYNC_FLUSH_COMMANDS_BIT;
		static int COLOR;
		static int DEPTH;
		static int STENCIL;
		static int MIN;
		static int MAX;
		static int DEPTH_COMPONENT24;
		static int STREAM_READ;
		static int STREAM_COPY;
		static int STATIC_READ;
		static int STATIC_COPY;
		static int DYNAMIC_READ;
		static int DYNAMIC_COPY;
		static int DEPTH_COMPONENT32F;
		static int DEPTH32F_STENCIL8;
		static int INVALID_INDEX;
		static int TIMEOUT_IGNORED;
		static int MAX_CLIENT_WAIT_TIMEOUT_WEBGL;
		static ::lime::_backend::native::NativeGLRenderContext context;
		static ::lime::graphics::opengl::GLContextType type;
		static Float version;
		static ::lime::graphics::opengl::GLObject __currentProgram;
		static Void activeTexture( int texture);
		static Dynamic activeTexture_dyn();

		static Void attachShader( ::lime::graphics::opengl::GLObject program,::lime::graphics::opengl::GLObject shader);
		static Dynamic attachShader_dyn();

		static Void beginQuery( int target,::lime::graphics::opengl::GLObject query);
		static Dynamic beginQuery_dyn();

		static Void beginTransformFeedback( int primitiveNode);
		static Dynamic beginTransformFeedback_dyn();

		static Void bindAttribLocation( ::lime::graphics::opengl::GLObject program,int index,::String name);
		static Dynamic bindAttribLocation_dyn();

		static Void bindBuffer( int target,::lime::graphics::opengl::GLObject buffer);
		static Dynamic bindBuffer_dyn();

		static Void bindBufferBase( int target,int index,::lime::graphics::opengl::GLObject buffer);
		static Dynamic bindBufferBase_dyn();

		static Void bindBufferRange( int target,int index,::lime::graphics::opengl::GLObject buffer,Float offset,int size);
		static Dynamic bindBufferRange_dyn();

		static Void bindFramebuffer( int target,::lime::graphics::opengl::GLObject framebuffer);
		static Dynamic bindFramebuffer_dyn();

		static Void bindRenderbuffer( int target,::lime::graphics::opengl::GLObject renderbuffer);
		static Dynamic bindRenderbuffer_dyn();

		static Void bindSampler( int unit,::lime::graphics::opengl::GLObject sampler);
		static Dynamic bindSampler_dyn();

		static Void bindTexture( int target,::lime::graphics::opengl::GLObject texture);
		static Dynamic bindTexture_dyn();

		static Void bindTransformFeedback( int target,::lime::graphics::opengl::GLObject transformFeedback);
		static Dynamic bindTransformFeedback_dyn();

		static Void bindVertexArray( ::lime::graphics::opengl::GLObject vertexArray);
		static Dynamic bindVertexArray_dyn();

		static Void blitFramebuffer( int srcX0,int srcY0,int srcX1,int srcY1,int dstX0,int dstY0,int dstX1,int dstY1,int mask,int filter);
		static Dynamic blitFramebuffer_dyn();

		static Void blendColor( Float red,Float green,Float blue,Float alpha);
		static Dynamic blendColor_dyn();

		static Void blendEquation( int mode);
		static Dynamic blendEquation_dyn();

		static Void blendEquationSeparate( int modeRGB,int modeAlpha);
		static Dynamic blendEquationSeparate_dyn();

		static Void blendFunc( int sfactor,int dfactor);
		static Dynamic blendFunc_dyn();

		static Void blendFuncSeparate( int srcRGB,int dstRGB,int srcAlpha,int dstAlpha);
		static Dynamic blendFuncSeparate_dyn();

		static Void bufferData( int target,int size,Float srcData,int usage);
		static Dynamic bufferData_dyn();

		static Void bufferSubData( int target,int dstByteOffset,int size,Float srcData);
		static Dynamic bufferSubData_dyn();

		static int checkFramebufferStatus( int target);
		static Dynamic checkFramebufferStatus_dyn();

		static Void clear( int mask);
		static Dynamic clear_dyn();

		static Void clearBufferfi( int buffer,int drawbuffer,Float depth,int stencil);
		static Dynamic clearBufferfi_dyn();

		static Void clearBufferfv( int buffer,int drawbuffer,Float value);
		static Dynamic clearBufferfv_dyn();

		static Void clearBufferiv( int buffer,int drawbuffer,Float value);
		static Dynamic clearBufferiv_dyn();

		static Void clearBufferuiv( int buffer,int drawbuffer,Float value);
		static Dynamic clearBufferuiv_dyn();

		static Void clearColor( Float red,Float green,Float blue,Float alpha);
		static Dynamic clearColor_dyn();

		static Void clearDepthf( Float depth);
		static Dynamic clearDepthf_dyn();

		static Void clearStencil( int s);
		static Dynamic clearStencil_dyn();

		static int clientWaitSync( ::lime::graphics::opengl::GLObject sync,int flags,cpp::Int64Struct timeout);
		static Dynamic clientWaitSync_dyn();

		static Void colorMask( bool red,bool green,bool blue,bool alpha);
		static Dynamic colorMask_dyn();

		static Void compileShader( ::lime::graphics::opengl::GLObject shader);
		static Dynamic compileShader_dyn();

		static Void compressedTexImage2D( int target,int level,int internalformat,int width,int height,int border,int imageSize,Float data);
		static Dynamic compressedTexImage2D_dyn();

		static Void compressedTexImage3D( int target,int level,int internalformat,int width,int height,int depth,int border,int imageSize,Float data);
		static Dynamic compressedTexImage3D_dyn();

		static Void compressedTexSubImage2D( int target,int level,int xoffset,int yoffset,int width,int height,int format,int imageSize,Float data);
		static Dynamic compressedTexSubImage2D_dyn();

		static Void compressedTexSubImage3D( int target,int level,int xoffset,int yoffset,int zoffset,int width,int height,int depth,int format,int imageSize,Float data);
		static Dynamic compressedTexSubImage3D_dyn();

		static Void copyBufferSubData( int readTarget,int writeTarget,Float readOffset,Float writeOffset,int size);
		static Dynamic copyBufferSubData_dyn();

		static Void copyTexImage2D( int target,int level,int internalformat,int x,int y,int width,int height,int border);
		static Dynamic copyTexImage2D_dyn();

		static Void copyTexSubImage2D( int target,int level,int xoffset,int yoffset,int x,int y,int width,int height);
		static Dynamic copyTexSubImage2D_dyn();

		static Void copyTexSubImage3D( int target,int level,int xoffset,int yoffset,int zoffset,int x,int y,int width,int height);
		static Dynamic copyTexSubImage3D_dyn();

		static ::lime::graphics::opengl::GLObject createBuffer( );
		static Dynamic createBuffer_dyn();

		static ::lime::graphics::opengl::GLObject createFramebuffer( );
		static Dynamic createFramebuffer_dyn();

		static ::lime::graphics::opengl::GLObject createProgram( );
		static Dynamic createProgram_dyn();

		static ::lime::graphics::opengl::GLObject createQuery( );
		static Dynamic createQuery_dyn();

		static ::lime::graphics::opengl::GLObject createRenderbuffer( );
		static Dynamic createRenderbuffer_dyn();

		static ::lime::graphics::opengl::GLObject createSampler( );
		static Dynamic createSampler_dyn();

		static ::lime::graphics::opengl::GLObject createShader( int type);
		static Dynamic createShader_dyn();

		static ::lime::graphics::opengl::GLObject createTexture( );
		static Dynamic createTexture_dyn();

		static ::lime::graphics::opengl::GLObject createTransformFeedback( );
		static Dynamic createTransformFeedback_dyn();

		static ::lime::graphics::opengl::GLObject createVertexArray( );
		static Dynamic createVertexArray_dyn();

		static Void cullFace( int mode);
		static Dynamic cullFace_dyn();

		static Void deleteBuffer( ::lime::graphics::opengl::GLObject buffer);
		static Dynamic deleteBuffer_dyn();

		static Void deleteFramebuffer( ::lime::graphics::opengl::GLObject framebuffer);
		static Dynamic deleteFramebuffer_dyn();

		static Void deleteProgram( ::lime::graphics::opengl::GLObject program);
		static Dynamic deleteProgram_dyn();

		static Void deleteQuery( ::lime::graphics::opengl::GLObject query);
		static Dynamic deleteQuery_dyn();

		static Void deleteRenderbuffer( ::lime::graphics::opengl::GLObject renderbuffer);
		static Dynamic deleteRenderbuffer_dyn();

		static Void deleteSampler( ::lime::graphics::opengl::GLObject sampler);
		static Dynamic deleteSampler_dyn();

		static Void deleteShader( ::lime::graphics::opengl::GLObject shader);
		static Dynamic deleteShader_dyn();

		static Void deleteSync( ::lime::graphics::opengl::GLObject sync);
		static Dynamic deleteSync_dyn();

		static Void deleteTexture( ::lime::graphics::opengl::GLObject texture);
		static Dynamic deleteTexture_dyn();

		static Void deleteTransformFeedback( ::lime::graphics::opengl::GLObject transformFeedback);
		static Dynamic deleteTransformFeedback_dyn();

		static Void deleteVertexArray( ::lime::graphics::opengl::GLObject vertexArray);
		static Dynamic deleteVertexArray_dyn();

		static Void depthFunc( int func);
		static Dynamic depthFunc_dyn();

		static Void depthMask( bool flag);
		static Dynamic depthMask_dyn();

		static Void depthRangef( Float zNear,Float zFar);
		static Dynamic depthRangef_dyn();

		static Void detachShader( ::lime::graphics::opengl::GLObject program,::lime::graphics::opengl::GLObject shader);
		static Dynamic detachShader_dyn();

		static Void disable( int cap);
		static Dynamic disable_dyn();

		static Void disableVertexAttribArray( int index);
		static Dynamic disableVertexAttribArray_dyn();

		static Void drawArrays( int mode,int first,int count);
		static Dynamic drawArrays_dyn();

		static Void drawArraysInstanced( int mode,int first,int count,int instanceCount);
		static Dynamic drawArraysInstanced_dyn();

		static Void drawBuffers( Array< int > buffers);
		static Dynamic drawBuffers_dyn();

		static Void drawElements( int mode,int count,int type,int offset);
		static Dynamic drawElements_dyn();

		static Void drawElementsInstanced( int mode,int count,int type,Float offset,int instanceCount);
		static Dynamic drawElementsInstanced_dyn();

		static Void drawRangeElements( int mode,int start,int end,int count,int type,Float offset);
		static Dynamic drawRangeElements_dyn();

		static Void enable( int cap);
		static Dynamic enable_dyn();

		static Void enableVertexAttribArray( int index);
		static Dynamic enableVertexAttribArray_dyn();

		static Void endQuery( int target);
		static Dynamic endQuery_dyn();

		static Void endTransformFeedback( );
		static Dynamic endTransformFeedback_dyn();

		static ::lime::graphics::opengl::GLObject fenceSync( int condition,int flags);
		static Dynamic fenceSync_dyn();

		static Void finish( );
		static Dynamic finish_dyn();

		static Void flush( );
		static Dynamic flush_dyn();

		static Void framebufferRenderbuffer( int target,int attachment,int renderbuffertarget,::lime::graphics::opengl::GLObject renderbuffer);
		static Dynamic framebufferRenderbuffer_dyn();

		static Void framebufferTexture2D( int target,int attachment,int textarget,::lime::graphics::opengl::GLObject texture,int level);
		static Dynamic framebufferTexture2D_dyn();

		static Void framebufferTextureLayer( int target,int attachment,::lime::graphics::opengl::GLObject texture,int level,int layer);
		static Dynamic framebufferTextureLayer_dyn();

		static Void frontFace( int mode);
		static Dynamic frontFace_dyn();

		static Void generateMipmap( int target);
		static Dynamic generateMipmap_dyn();

		static Dynamic getActiveAttrib( ::lime::graphics::opengl::GLObject program,int index);
		static Dynamic getActiveAttrib_dyn();

		static Dynamic getActiveUniform( ::lime::graphics::opengl::GLObject program,int index);
		static Dynamic getActiveUniform_dyn();

		static int getActiveUniformBlocki( ::lime::graphics::opengl::GLObject program,int uniformBlockIndex,int pname);
		static Dynamic getActiveUniformBlocki_dyn();

		static Void getActiveUniformBlockiv( ::lime::graphics::opengl::GLObject program,int uniformBlockIndex,int pname,Float params);
		static Dynamic getActiveUniformBlockiv_dyn();

		static ::String getActiveUniformBlockName( ::lime::graphics::opengl::GLObject program,int uniformBlockIndex);
		static Dynamic getActiveUniformBlockName_dyn();

		static Dynamic getActiveUniformBlockParameter( ::lime::graphics::opengl::GLObject program,int uniformBlockIndex,int pname);
		static Dynamic getActiveUniformBlockParameter_dyn();

		static Dynamic getActiveUniforms( ::lime::graphics::opengl::GLObject program,Array< int > uniformIndices,int pname);
		static Dynamic getActiveUniforms_dyn();

		static Void getActiveUniformsiv( ::lime::graphics::opengl::GLObject program,Array< int > uniformIndices,int pname,Float params);
		static Dynamic getActiveUniformsiv_dyn();

		static Array< ::Dynamic > getAttachedShaders( ::lime::graphics::opengl::GLObject program);
		static Dynamic getAttachedShaders_dyn();

		static int getAttribLocation( ::lime::graphics::opengl::GLObject program,::String name);
		static Dynamic getAttribLocation_dyn();

		static bool getBoolean( int pname);
		static Dynamic getBoolean_dyn();

		static Void getBooleanv( int pname,Float params);
		static Dynamic getBooleanv_dyn();

		static Dynamic getBufferParameter( int target,int pname);
		static Dynamic getBufferParameter_dyn();

		static int getBufferParameteri( int target,int pname);
		static Dynamic getBufferParameteri_dyn();

		static Void getBufferParameteri64v( int target,int pname,Float params);
		static Dynamic getBufferParameteri64v_dyn();

		static Void getBufferParameteriv( int target,int pname,Float data);
		static Dynamic getBufferParameteriv_dyn();

		static Float getBufferPointerv( int target,int pname);
		static Dynamic getBufferPointerv_dyn();

		static Void getBufferSubData( int target,Float offset,int size,Float data);
		static Dynamic getBufferSubData_dyn();

		static Dynamic getContextAttributes( );
		static Dynamic getContextAttributes_dyn();

		static int getError( );
		static Dynamic getError_dyn();

		static Dynamic getExtension( ::String name);
		static Dynamic getExtension_dyn();

		static Float getFloat( int pname);
		static Dynamic getFloat_dyn();

		static Void getFloatv( int pname,Float params);
		static Dynamic getFloatv_dyn();

		static int getFragDataLocation( ::lime::graphics::opengl::GLObject program,::String name);
		static Dynamic getFragDataLocation_dyn();

		static Dynamic getFramebufferAttachmentParameter( int target,int attachment,int pname);
		static Dynamic getFramebufferAttachmentParameter_dyn();

		static int getFramebufferAttachmentParameteri( int target,int attachment,int pname);
		static Dynamic getFramebufferAttachmentParameteri_dyn();

		static Void getFramebufferAttachmentParameteriv( int target,int attachment,int pname,Float params);
		static Dynamic getFramebufferAttachmentParameteriv_dyn();

		static Dynamic getIndexedParameter( int target,int index);
		static Dynamic getIndexedParameter_dyn();

		static int getInteger( int pname);
		static Dynamic getInteger_dyn();

		static cpp::Int64Struct getInteger64( int pname);
		static Dynamic getInteger64_dyn();

		static cpp::Int64Struct getInteger64i( int pname);
		static Dynamic getInteger64i_dyn();

		static Void getInteger64i_v( int pname,Float params);
		static Dynamic getInteger64i_v_dyn();

		static Void getInteger64v( int pname,Float params);
		static Dynamic getInteger64v_dyn();

		static int getIntegeri( int pname);
		static Dynamic getIntegeri_dyn();

		static Void getIntegeri_v( int pname,Float params);
		static Dynamic getIntegeri_v_dyn();

		static Void getIntegerv( int pname,Float params);
		static Dynamic getIntegerv_dyn();

		static int getInternalformati( int target,int internalformat,int pname);
		static Dynamic getInternalformati_dyn();

		static Void getInternalformativ( int target,int internalformat,int pname,Float params);
		static Dynamic getInternalformativ_dyn();

		static Dynamic getInternalformatParameter( int target,int internalformat,int pname);
		static Dynamic getInternalformatParameter_dyn();

		static Dynamic getParameter( int pname);
		static Dynamic getParameter_dyn();

		static int getProgrami( ::lime::graphics::opengl::GLObject program,int pname);
		static Dynamic getProgrami_dyn();

		static Void getProgramiv( ::lime::graphics::opengl::GLObject program,int pname,Float params);
		static Dynamic getProgramiv_dyn();

		static ::haxe::io::Bytes getProgramBinary( ::lime::graphics::opengl::GLObject program,int binaryFormat);
		static Dynamic getProgramBinary_dyn();

		static ::String getProgramInfoLog( ::lime::graphics::opengl::GLObject program);
		static Dynamic getProgramInfoLog_dyn();

		static Dynamic getProgramParameter( ::lime::graphics::opengl::GLObject program,int pname);
		static Dynamic getProgramParameter_dyn();

		static ::lime::graphics::opengl::GLObject getQuery( int target,int pname);
		static Dynamic getQuery_dyn();

		static int getQueryi( int target,int pname);
		static Dynamic getQueryi_dyn();

		static Void getQueryiv( int target,int pname,Float params);
		static Dynamic getQueryiv_dyn();

		static int getQueryObjectui( ::lime::graphics::opengl::GLObject query,int pname);
		static Dynamic getQueryObjectui_dyn();

		static Void getQueryObjectuiv( ::lime::graphics::opengl::GLObject query,int pname,Float params);
		static Dynamic getQueryObjectuiv_dyn();

		static Dynamic getQueryParameter( ::lime::graphics::opengl::GLObject query,int pname);
		static Dynamic getQueryParameter_dyn();

		static Dynamic getRenderbufferParameter( int target,int pname);
		static Dynamic getRenderbufferParameter_dyn();

		static int getRenderbufferParameteri( int target,int pname);
		static Dynamic getRenderbufferParameteri_dyn();

		static Void getRenderbufferParameteriv( int target,int pname,Float params);
		static Dynamic getRenderbufferParameteriv_dyn();

		static Dynamic getSamplerParameter( ::lime::graphics::opengl::GLObject sampler,int pname);
		static Dynamic getSamplerParameter_dyn();

		static Float getSamplerParameterf( ::lime::graphics::opengl::GLObject sampler,int pname);
		static Dynamic getSamplerParameterf_dyn();

		static Void getSamplerParameterfv( ::lime::graphics::opengl::GLObject sampler,int pname,Float params);
		static Dynamic getSamplerParameterfv_dyn();

		static int getSamplerParameteri( ::lime::graphics::opengl::GLObject sampler,int pname);
		static Dynamic getSamplerParameteri_dyn();

		static Void getSamplerParameteriv( ::lime::graphics::opengl::GLObject sampler,int pname,Float params);
		static Dynamic getSamplerParameteriv_dyn();

		static int getShaderi( ::lime::graphics::opengl::GLObject shader,int pname);
		static Dynamic getShaderi_dyn();

		static Void getShaderiv( ::lime::graphics::opengl::GLObject shader,int pname,Float params);
		static Dynamic getShaderiv_dyn();

		static ::String getShaderInfoLog( ::lime::graphics::opengl::GLObject shader);
		static Dynamic getShaderInfoLog_dyn();

		static Dynamic getShaderParameter( ::lime::graphics::opengl::GLObject shader,int pname);
		static Dynamic getShaderParameter_dyn();

		static Dynamic getShaderPrecisionFormat( int shadertype,int precisiontype);
		static Dynamic getShaderPrecisionFormat_dyn();

		static ::String getShaderSource( ::lime::graphics::opengl::GLObject shader);
		static Dynamic getShaderSource_dyn();

		static ::String getString( int pname);
		static Dynamic getString_dyn();

		static ::String getStringi( int name,int index);
		static Dynamic getStringi_dyn();

		static Array< ::String > getSupportedExtensions( );
		static Dynamic getSupportedExtensions_dyn();

		static Dynamic getSyncParameter( ::lime::graphics::opengl::GLObject sync,int pname);
		static Dynamic getSyncParameter_dyn();

		static int getSyncParameteri( ::lime::graphics::opengl::GLObject sync,int pname);
		static Dynamic getSyncParameteri_dyn();

		static Void getSyncParameteriv( ::lime::graphics::opengl::GLObject sync,int pname,Float params);
		static Dynamic getSyncParameteriv_dyn();

		static Dynamic getTexParameter( int target,int pname);
		static Dynamic getTexParameter_dyn();

		static Float getTexParameterf( int target,int pname);
		static Dynamic getTexParameterf_dyn();

		static Void getTexParameterfv( int target,int pname,Float params);
		static Dynamic getTexParameterfv_dyn();

		static int getTexParameteri( int target,int pname);
		static Dynamic getTexParameteri_dyn();

		static Void getTexParameteriv( int target,int pname,Float params);
		static Dynamic getTexParameteriv_dyn();

		static Dynamic getTransformFeedbackVarying( ::lime::graphics::opengl::GLObject program,int index);
		static Dynamic getTransformFeedbackVarying_dyn();

		static Dynamic getUniform( ::lime::graphics::opengl::GLObject program,int location);
		static Dynamic getUniform_dyn();

		static Float getUniformf( ::lime::graphics::opengl::GLObject program,int location);
		static Dynamic getUniformf_dyn();

		static Void getUniformfv( ::lime::graphics::opengl::GLObject program,int location,Float params);
		static Dynamic getUniformfv_dyn();

		static int getUniformi( ::lime::graphics::opengl::GLObject program,int location);
		static Dynamic getUniformi_dyn();

		static Void getUniformiv( ::lime::graphics::opengl::GLObject program,int location,Float params);
		static Dynamic getUniformiv_dyn();

		static int getUniformui( ::lime::graphics::opengl::GLObject program,int location);
		static Dynamic getUniformui_dyn();

		static Void getUniformuiv( ::lime::graphics::opengl::GLObject program,int location,Float params);
		static Dynamic getUniformuiv_dyn();

		static int getUniformBlockIndex( ::lime::graphics::opengl::GLObject program,::String uniformBlockName);
		static Dynamic getUniformBlockIndex_dyn();

		static Array< int > getUniformIndices( ::lime::graphics::opengl::GLObject program,Array< ::String > uniformNames);
		static Dynamic getUniformIndices_dyn();

		static int getUniformLocation( ::lime::graphics::opengl::GLObject program,::String name);
		static Dynamic getUniformLocation_dyn();

		static Dynamic getVertexAttrib( int index,int pname);
		static Dynamic getVertexAttrib_dyn();

		static Float getVertexAttribf( int index,int pname);
		static Dynamic getVertexAttribf_dyn();

		static Void getVertexAttribfv( int index,int pname,Float params);
		static Dynamic getVertexAttribfv_dyn();

		static int getVertexAttribi( int index,int pname);
		static Dynamic getVertexAttribi_dyn();

		static int getVertexAttribIi( int index,int pname);
		static Dynamic getVertexAttribIi_dyn();

		static Void getVertexAttribIiv( int index,int pname,Float params);
		static Dynamic getVertexAttribIiv_dyn();

		static int getVertexAttribIui( int index,int pname);
		static Dynamic getVertexAttribIui_dyn();

		static Void getVertexAttribIuiv( int index,int pname,Float params);
		static Dynamic getVertexAttribIuiv_dyn();

		static Void getVertexAttribiv( int index,int pname,Float params);
		static Dynamic getVertexAttribiv_dyn();

		static Float getVertexAttribPointerv( int index,int pname);
		static Dynamic getVertexAttribPointerv_dyn();

		static Void hint( int target,int mode);
		static Dynamic hint_dyn();

		static Void invalidateFramebuffer( int target,Array< int > attachments);
		static Dynamic invalidateFramebuffer_dyn();

		static Void invalidateSubFramebuffer( int target,Array< int > attachments,int x,int y,int width,int height);
		static Dynamic invalidateSubFramebuffer_dyn();

		static bool isBuffer( ::lime::graphics::opengl::GLObject buffer);
		static Dynamic isBuffer_dyn();

		static bool isContextLost( );
		static Dynamic isContextLost_dyn();

		static bool isEnabled( int cap);
		static Dynamic isEnabled_dyn();

		static bool isFramebuffer( ::lime::graphics::opengl::GLObject framebuffer);
		static Dynamic isFramebuffer_dyn();

		static bool isProgram( ::lime::graphics::opengl::GLObject program);
		static Dynamic isProgram_dyn();

		static bool isQuery( ::lime::graphics::opengl::GLObject query);
		static Dynamic isQuery_dyn();

		static bool isRenderbuffer( ::lime::graphics::opengl::GLObject renderbuffer);
		static Dynamic isRenderbuffer_dyn();

		static bool isSampler( ::lime::graphics::opengl::GLObject sampler);
		static Dynamic isSampler_dyn();

		static bool isShader( ::lime::graphics::opengl::GLObject shader);
		static Dynamic isShader_dyn();

		static bool isSync( ::lime::graphics::opengl::GLObject sync);
		static Dynamic isSync_dyn();

		static bool isTexture( ::lime::graphics::opengl::GLObject texture);
		static Dynamic isTexture_dyn();

		static bool isTransformFeedback( ::lime::graphics::opengl::GLObject transformFeedback);
		static Dynamic isTransformFeedback_dyn();

		static bool isVertexArray( ::lime::graphics::opengl::GLObject vertexArray);
		static Dynamic isVertexArray_dyn();

		static Void lineWidth( Float width);
		static Dynamic lineWidth_dyn();

		static Void linkProgram( ::lime::graphics::opengl::GLObject program);
		static Dynamic linkProgram_dyn();

		static Void mapBufferRange( int target,Float offset,int length,int access);
		static Dynamic mapBufferRange_dyn();

		static Void pauseTransformFeedback( );
		static Dynamic pauseTransformFeedback_dyn();

		static Void pixelStorei( int pname,int param);
		static Dynamic pixelStorei_dyn();

		static Void polygonOffset( Float factor,Float units);
		static Dynamic polygonOffset_dyn();

		static Void programBinary( ::lime::graphics::opengl::GLObject program,int binaryFormat,Float binary,int length);
		static Dynamic programBinary_dyn();

		static Void programParameteri( ::lime::graphics::opengl::GLObject program,int pname,int value);
		static Dynamic programParameteri_dyn();

		static Void readBuffer( int src);
		static Dynamic readBuffer_dyn();

		static Void readPixels( int x,int y,int width,int height,int format,int type,::lime::utils::BytePointerData pixels);
		static Dynamic readPixels_dyn();

		static Void releaseShaderCompiler( );
		static Dynamic releaseShaderCompiler_dyn();

		static Void renderbufferStorage( int target,int internalformat,int width,int height);
		static Dynamic renderbufferStorage_dyn();

		static Void renderbufferStorageMultisample( int target,int samples,int internalFormat,int width,int height);
		static Dynamic renderbufferStorageMultisample_dyn();

		static Void resumeTransformFeedback( );
		static Dynamic resumeTransformFeedback_dyn();

		static Void sampleCoverage( Float value,bool invert);
		static Dynamic sampleCoverage_dyn();

		static Void samplerParameterf( ::lime::graphics::opengl::GLObject sampler,int pname,Float param);
		static Dynamic samplerParameterf_dyn();

		static Void samplerParameteri( ::lime::graphics::opengl::GLObject sampler,int pname,int param);
		static Dynamic samplerParameteri_dyn();

		static Void scissor( int x,int y,int width,int height);
		static Dynamic scissor_dyn();

		static Void shaderBinary( Array< ::Dynamic > shaders,int binaryformat,Float binary,int length);
		static Dynamic shaderBinary_dyn();

		static Void shaderSource( ::lime::graphics::opengl::GLObject shader,::String source);
		static Dynamic shaderSource_dyn();

		static Void stencilFunc( int func,int ref,int mask);
		static Dynamic stencilFunc_dyn();

		static Void stencilFuncSeparate( int face,int func,int ref,int mask);
		static Dynamic stencilFuncSeparate_dyn();

		static Void stencilMask( int mask);
		static Dynamic stencilMask_dyn();

		static Void stencilMaskSeparate( int face,int mask);
		static Dynamic stencilMaskSeparate_dyn();

		static Void stencilOp( int fail,int zfail,int zpass);
		static Dynamic stencilOp_dyn();

		static Void stencilOpSeparate( int face,int fail,int zfail,int zpass);
		static Dynamic stencilOpSeparate_dyn();

		static Void texImage2D( int target,int level,int internalformat,int width,int height,int border,int format,int type,Float data);
		static Dynamic texImage2D_dyn();

		static Void texImage3D( int target,int level,int internalformat,int width,int height,int depth,int border,int format,int type,Float data);
		static Dynamic texImage3D_dyn();

		static Void texStorage2D( int target,int level,int internalformat,int width,int height);
		static Dynamic texStorage2D_dyn();

		static Void texStorage3D( int target,int level,int internalformat,int width,int height,int depth);
		static Dynamic texStorage3D_dyn();

		static Void texParameterf( int target,int pname,Float param);
		static Dynamic texParameterf_dyn();

		static Void texParameteri( int target,int pname,int param);
		static Dynamic texParameteri_dyn();

		static Void texSubImage2D( int target,int level,int xoffset,int yoffset,int width,int height,int format,int type,::lime::utils::ArrayBufferView pixels);
		static Dynamic texSubImage2D_dyn();

		static Void texSubImage3D( int target,int level,int xoffset,int yoffset,int zoffset,int width,int height,int depth,int format,int type,Float data);
		static Dynamic texSubImage3D_dyn();

		static Void transformFeedbackVaryings( ::lime::graphics::opengl::GLObject program,Array< ::String > varyings,int bufferMode);
		static Dynamic transformFeedbackVaryings_dyn();

		static Void uniform1f( int location,Float v0);
		static Dynamic uniform1f_dyn();

		static Void uniform1fv( int location,int count,Float v);
		static Dynamic uniform1fv_dyn();

		static Void uniform1i( int location,int v0);
		static Dynamic uniform1i_dyn();

		static Void uniform1iv( int location,int count,Float v);
		static Dynamic uniform1iv_dyn();

		static Void uniform1ui( int location,int v0);
		static Dynamic uniform1ui_dyn();

		static Void uniform1uiv( int location,int count,Float v);
		static Dynamic uniform1uiv_dyn();

		static Void uniform2f( int location,Float v0,Float v1);
		static Dynamic uniform2f_dyn();

		static Void uniform2fv( int location,int count,Float v);
		static Dynamic uniform2fv_dyn();

		static Void uniform2i( int location,int x,int y);
		static Dynamic uniform2i_dyn();

		static Void uniform2iv( int location,int count,Float v);
		static Dynamic uniform2iv_dyn();

		static Void uniform2ui( int location,int x,int y);
		static Dynamic uniform2ui_dyn();

		static Void uniform2uiv( int location,int count,Float v);
		static Dynamic uniform2uiv_dyn();

		static Void uniform3f( int location,Float v0,Float v1,Float v2);
		static Dynamic uniform3f_dyn();

		static Void uniform3fv( int location,int count,Float v);
		static Dynamic uniform3fv_dyn();

		static Void uniform3i( int location,int v0,int v1,int v2);
		static Dynamic uniform3i_dyn();

		static Void uniform3iv( int location,int count,Float v);
		static Dynamic uniform3iv_dyn();

		static Void uniform3ui( int location,int v0,int v1,int v2);
		static Dynamic uniform3ui_dyn();

		static Void uniform3uiv( int location,int count,Float v);
		static Dynamic uniform3uiv_dyn();

		static Void uniform4f( int location,Float v0,Float v1,Float v2,Float v3);
		static Dynamic uniform4f_dyn();

		static Void uniform4fv( int location,int count,Float v);
		static Dynamic uniform4fv_dyn();

		static Void uniform4i( int location,int v0,int v1,int v2,int v3);
		static Dynamic uniform4i_dyn();

		static Void uniform4iv( int location,int count,Float v);
		static Dynamic uniform4iv_dyn();

		static Void uniform4ui( int location,int v0,int v1,int v2,int v3);
		static Dynamic uniform4ui_dyn();

		static Void uniform4uiv( int location,int count,Float v);
		static Dynamic uniform4uiv_dyn();

		static Void uniformBlockBinding( ::lime::graphics::opengl::GLObject program,int uniformBlockIndex,int uniformBlockBinding);
		static Dynamic uniformBlockBinding_dyn();

		static Void uniformMatrix2fv( int location,int count,bool transpose,Float v);
		static Dynamic uniformMatrix2fv_dyn();

		static Void uniformMatrix2x3fv( int location,int count,bool transpose,Float v);
		static Dynamic uniformMatrix2x3fv_dyn();

		static Void uniformMatrix2x4fv( int location,int count,bool transpose,Float v);
		static Dynamic uniformMatrix2x4fv_dyn();

		static Void uniformMatrix3fv( int location,int count,bool transpose,Float v);
		static Dynamic uniformMatrix3fv_dyn();

		static Void uniformMatrix3x2fv( int location,int count,bool transpose,Float v);
		static Dynamic uniformMatrix3x2fv_dyn();

		static Void uniformMatrix3x4fv( int location,int count,bool transpose,Float v);
		static Dynamic uniformMatrix3x4fv_dyn();

		static Void uniformMatrix4fv( int location,int count,bool transpose,Float v);
		static Dynamic uniformMatrix4fv_dyn();

		static Void uniformMatrix4x2fv( int location,int count,bool transpose,Float v);
		static Dynamic uniformMatrix4x2fv_dyn();

		static Void uniformMatrix4x3fv( int location,int count,bool transpose,Float v);
		static Dynamic uniformMatrix4x3fv_dyn();

		static bool unmapBuffer( int target);
		static Dynamic unmapBuffer_dyn();

		static Void useProgram( ::lime::graphics::opengl::GLObject program);
		static Dynamic useProgram_dyn();

		static Void validateProgram( ::lime::graphics::opengl::GLObject program);
		static Dynamic validateProgram_dyn();

		static Void vertexAttrib1f( int index,Float v0);
		static Dynamic vertexAttrib1f_dyn();

		static Void vertexAttrib1fv( int index,Float v);
		static Dynamic vertexAttrib1fv_dyn();

		static Void vertexAttrib2f( int index,Float v0,Float v1);
		static Dynamic vertexAttrib2f_dyn();

		static Void vertexAttrib2fv( int index,Float v);
		static Dynamic vertexAttrib2fv_dyn();

		static Void vertexAttrib3f( int index,Float v0,Float v1,Float v2);
		static Dynamic vertexAttrib3f_dyn();

		static Void vertexAttrib3fv( int index,Float v);
		static Dynamic vertexAttrib3fv_dyn();

		static Void vertexAttrib4f( int index,Float v0,Float v1,Float v2,Float v3);
		static Dynamic vertexAttrib4f_dyn();

		static Void vertexAttrib4fv( int index,Float v);
		static Dynamic vertexAttrib4fv_dyn();

		static Void vertexAttribDivisor( int index,int divisor);
		static Dynamic vertexAttribDivisor_dyn();

		static Void vertexAttribI4i( int index,int v0,int v1,int v2,int v3);
		static Dynamic vertexAttribI4i_dyn();

		static Void vertexAttribI4iv( int index,Float v);
		static Dynamic vertexAttribI4iv_dyn();

		static Void vertexAttribI4ui( int index,int v0,int v1,int v2,int v3);
		static Dynamic vertexAttribI4ui_dyn();

		static Void vertexAttribI4uiv( int index,Float v);
		static Dynamic vertexAttribI4uiv_dyn();

		static Void vertexAttribIPointer( int index,int size,int type,int stride,Float offset);
		static Dynamic vertexAttribIPointer_dyn();

		static Void vertexAttribPointer( int index,int size,int type,bool normalized,int stride,Float offset);
		static Dynamic vertexAttribPointer_dyn();

		static Void viewport( int x,int y,int width,int height);
		static Dynamic viewport_dyn();

		static Void waitSync( ::lime::graphics::opengl::GLObject sync,int flags,cpp::Int64Struct timeout);
		static Dynamic waitSync_dyn();

		static ::lime::graphics::opengl::GLContextType get_type( );
		static Dynamic get_type_dyn();

		static Float get_version( );
		static Dynamic get_version_dyn();

		static int __getObjectID( ::lime::graphics::opengl::GLObject object);
		static Dynamic __getObjectID_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl

#endif /* INCLUDED_lime_graphics_opengl_GL */ 
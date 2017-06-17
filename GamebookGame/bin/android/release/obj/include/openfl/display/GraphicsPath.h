#ifndef INCLUDED_openfl_display_GraphicsPath
#define INCLUDED_openfl_display_GraphicsPath

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_IGraphicsPath
#include <openfl/display/IGraphicsPath.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS2(openfl,_Vector,IntVector)
HX_DECLARE_CLASS2(openfl,display,GraphicsDataType)
HX_DECLARE_CLASS2(openfl,display,GraphicsPath)
HX_DECLARE_CLASS2(openfl,display,IGraphicsData)
HX_DECLARE_CLASS2(openfl,display,IGraphicsPath)
namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES  GraphicsPath_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef GraphicsPath_obj OBJ_;
		GraphicsPath_obj();
		Void __construct(::openfl::_Vector::IntVector commands,::openfl::_Vector::FloatVector data,Dynamic __o_winding);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="openfl.display.GraphicsPath")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< GraphicsPath_obj > __new(::openfl::_Vector::IntVector commands,::openfl::_Vector::FloatVector data,Dynamic __o_winding);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GraphicsPath_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		hx::Object *__ToInterface(const hx::type_info &inType);
		operator ::openfl::display::IGraphicsPath_obj *();
		operator ::openfl::display::IGraphicsData_obj *();
		::String __ToString() const { return HX_HCSTRING("GraphicsPath","\x30","\x18","\x59","\x11"); }

		static void __boot();
		static Float SIN45;
		static Float TAN22;
		::openfl::_Vector::IntVector commands;
		::openfl::_Vector::FloatVector data;
		Dynamic winding;
		::openfl::display::GraphicsDataType __graphicsDataType;
		virtual Void cubicCurveTo( Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY);
		Dynamic cubicCurveTo_dyn();

		virtual Void curveTo( Float controlX,Float controlY,Float anchorX,Float anchorY);
		Dynamic curveTo_dyn();

		virtual Void lineTo( Float x,Float y);
		Dynamic lineTo_dyn();

		virtual Void moveTo( Float x,Float y);
		Dynamic moveTo_dyn();

		virtual Void wideLineTo( Float x,Float y);
		Dynamic wideLineTo_dyn();

		virtual Void wideMoveTo( Float x,Float y);
		Dynamic wideMoveTo_dyn();

		virtual Void __drawCircle( Float x,Float y,Float radius);
		Dynamic __drawCircle_dyn();

		virtual Void __drawEllipse( Float x,Float y,Float width,Float height);
		Dynamic __drawEllipse_dyn();

		virtual Void __drawRect( Float x,Float y,Float width,Float height);
		Dynamic __drawRect_dyn();

		virtual Void __drawRoundRect( Float x,Float y,Float width,Float height,Float ellipseWidth,Float ellipseHeight);
		Dynamic __drawRoundRect_dyn();

};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_GraphicsPath */ 

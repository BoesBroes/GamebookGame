#include <hxcpp.h>

#ifndef INCLUDED_openfl__Vector_FloatVector
#include <openfl/_Vector/FloatVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsDataType
#include <openfl/display/GraphicsDataType.h>
#endif
#ifndef INCLUDED_openfl_display_GraphicsPath
#include <openfl/display/GraphicsPath.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsData
#include <openfl/display/IGraphicsData.h>
#endif
#ifndef INCLUDED_openfl_display_IGraphicsPath
#include <openfl/display/IGraphicsPath.h>
#endif
namespace openfl{
namespace display{

Void GraphicsPath_obj::__construct(::openfl::_Vector::IntVector commands,::openfl::_Vector::FloatVector data,Dynamic __o_winding)
{
HX_STACK_FRAME("openfl.display.GraphicsPath","new",0x778d9d6c,"openfl.display.GraphicsPath.new","openfl/display/GraphicsPath.hx",21,0x0a58fcc2)
HX_STACK_THIS(this)
HX_STACK_ARG(commands,"commands")
HX_STACK_ARG(data,"data")
HX_STACK_ARG(__o_winding,"winding")
Dynamic winding = __o_winding.Default(0);
{
	HX_STACK_LINE(23)
	this->commands = commands;
	HX_STACK_LINE(24)
	this->data = data;
	HX_STACK_LINE(25)
	this->winding = winding;
	HX_STACK_LINE(26)
	this->__graphicsDataType = ::openfl::display::GraphicsDataType_obj::PATH;
}
;
	return null();
}

//GraphicsPath_obj::~GraphicsPath_obj() { }

Dynamic GraphicsPath_obj::__CreateEmpty() { return  new GraphicsPath_obj; }
hx::ObjectPtr< GraphicsPath_obj > GraphicsPath_obj::__new(::openfl::_Vector::IntVector commands,::openfl::_Vector::FloatVector data,Dynamic __o_winding)
{  hx::ObjectPtr< GraphicsPath_obj > _result_ = new GraphicsPath_obj();
	_result_->__construct(commands,data,__o_winding);
	return _result_;}

Dynamic GraphicsPath_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GraphicsPath_obj > _result_ = new GraphicsPath_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _result_;}

hx::Object *GraphicsPath_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::display::IGraphicsPath_obj)) return operator ::openfl::display::IGraphicsPath_obj *();
	if (inType==typeid( ::openfl::display::IGraphicsData_obj)) return operator ::openfl::display::IGraphicsData_obj *();
	return super::__ToInterface(inType);
}

GraphicsPath_obj::operator ::openfl::display::IGraphicsPath_obj *()
	{ return new ::openfl::display::IGraphicsPath_delegate_< GraphicsPath_obj >(this); }
GraphicsPath_obj::operator ::openfl::display::IGraphicsData_obj *()
	{ return new ::openfl::display::IGraphicsData_delegate_< GraphicsPath_obj >(this); }
Void GraphicsPath_obj::cubicCurveTo( Float controlX1,Float controlY1,Float controlX2,Float controlY2,Float anchorX,Float anchorY){
{
		HX_STACK_FRAME("openfl.display.GraphicsPath","cubicCurveTo",0x2db23954,"openfl.display.GraphicsPath.cubicCurveTo","openfl/display/GraphicsPath.hx",31,0x0a58fcc2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(controlX1,"controlX1")
		HX_STACK_ARG(controlY1,"controlY1")
		HX_STACK_ARG(controlX2,"controlX2")
		HX_STACK_ARG(controlY2,"controlY2")
		HX_STACK_ARG(anchorX,"anchorX")
		HX_STACK_ARG(anchorY,"anchorY")
		HX_STACK_LINE(33)
		::openfl::_Vector::IntVector tmp = this->commands;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(33)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		if ((tmp1)){
			HX_STACK_LINE(33)
			::openfl::_Vector::IntVector tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(33)
			{
				HX_STACK_LINE(33)
				int length = null();		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(33)
				bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
				HX_STACK_LINE(33)
				::openfl::_Vector::IntVector tmp3 = ::openfl::_Vector::IntVector_obj::__new(length,fixed,null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(33)
				::openfl::_Vector::IntVector tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(33)
				tmp2 = tmp4;
			}
			HX_STACK_LINE(33)
			this->commands = tmp2;
		}
		HX_STACK_LINE(34)
		::openfl::_Vector::FloatVector tmp2 = this->data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(34)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(34)
		if ((tmp3)){
			HX_STACK_LINE(34)
			::openfl::_Vector::FloatVector tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(34)
			{
				HX_STACK_LINE(34)
				int length = null();		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(34)
				bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
				HX_STACK_LINE(34)
				::openfl::_Vector::FloatVector tmp5 = ::openfl::_Vector::FloatVector_obj::__new(length,fixed,null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(34)
				::openfl::_Vector::FloatVector tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(34)
				tmp4 = tmp6;
			}
			HX_STACK_LINE(34)
			this->data = tmp4;
		}
		HX_STACK_LINE(36)
		::openfl::_Vector::IntVector tmp4 = this->commands;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(36)
		tmp4->push((int)6);
		HX_STACK_LINE(37)
		::openfl::_Vector::FloatVector tmp5 = this->data;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(37)
		Float tmp6 = controlX1;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(37)
		tmp5->push(tmp6);
		HX_STACK_LINE(38)
		::openfl::_Vector::FloatVector tmp7 = this->data;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(38)
		Float tmp8 = controlY1;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(38)
		tmp7->push(tmp8);
		HX_STACK_LINE(39)
		::openfl::_Vector::FloatVector tmp9 = this->data;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(39)
		Float tmp10 = controlX2;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(39)
		tmp9->push(tmp10);
		HX_STACK_LINE(40)
		::openfl::_Vector::FloatVector tmp11 = this->data;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(40)
		Float tmp12 = controlY2;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(40)
		tmp11->push(tmp12);
		HX_STACK_LINE(41)
		::openfl::_Vector::FloatVector tmp13 = this->data;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(41)
		Float tmp14 = anchorX;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(41)
		tmp13->push(tmp14);
		HX_STACK_LINE(42)
		::openfl::_Vector::FloatVector tmp15 = this->data;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(42)
		Float tmp16 = anchorY;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(42)
		tmp15->push(tmp16);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(GraphicsPath_obj,cubicCurveTo,(void))

Void GraphicsPath_obj::curveTo( Float controlX,Float controlY,Float anchorX,Float anchorY){
{
		HX_STACK_FRAME("openfl.display.GraphicsPath","curveTo",0xe3fba316,"openfl.display.GraphicsPath.curveTo","openfl/display/GraphicsPath.hx",47,0x0a58fcc2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(controlX,"controlX")
		HX_STACK_ARG(controlY,"controlY")
		HX_STACK_ARG(anchorX,"anchorX")
		HX_STACK_ARG(anchorY,"anchorY")
		HX_STACK_LINE(49)
		::openfl::_Vector::IntVector tmp = this->commands;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(49)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(49)
		if ((tmp1)){
			HX_STACK_LINE(49)
			::openfl::_Vector::IntVector tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(49)
			{
				HX_STACK_LINE(49)
				int length = null();		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(49)
				bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
				HX_STACK_LINE(49)
				::openfl::_Vector::IntVector tmp3 = ::openfl::_Vector::IntVector_obj::__new(length,fixed,null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(49)
				::openfl::_Vector::IntVector tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(49)
				tmp2 = tmp4;
			}
			HX_STACK_LINE(49)
			this->commands = tmp2;
		}
		HX_STACK_LINE(50)
		::openfl::_Vector::FloatVector tmp2 = this->data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(50)
		if ((tmp3)){
			HX_STACK_LINE(50)
			::openfl::_Vector::FloatVector tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(50)
			{
				HX_STACK_LINE(50)
				int length = null();		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(50)
				bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
				HX_STACK_LINE(50)
				::openfl::_Vector::FloatVector tmp5 = ::openfl::_Vector::FloatVector_obj::__new(length,fixed,null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(50)
				::openfl::_Vector::FloatVector tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(50)
				tmp4 = tmp6;
			}
			HX_STACK_LINE(50)
			this->data = tmp4;
		}
		HX_STACK_LINE(52)
		::openfl::_Vector::IntVector tmp4 = this->commands;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(52)
		tmp4->push((int)3);
		HX_STACK_LINE(53)
		::openfl::_Vector::FloatVector tmp5 = this->data;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(53)
		Float tmp6 = controlX;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(53)
		tmp5->push(tmp6);
		HX_STACK_LINE(54)
		::openfl::_Vector::FloatVector tmp7 = this->data;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(54)
		Float tmp8 = controlY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(54)
		tmp7->push(tmp8);
		HX_STACK_LINE(55)
		::openfl::_Vector::FloatVector tmp9 = this->data;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(55)
		Float tmp10 = anchorX;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(55)
		tmp9->push(tmp10);
		HX_STACK_LINE(56)
		::openfl::_Vector::FloatVector tmp11 = this->data;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(56)
		Float tmp12 = anchorY;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(56)
		tmp11->push(tmp12);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GraphicsPath_obj,curveTo,(void))

Void GraphicsPath_obj::lineTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl.display.GraphicsPath","lineTo",0x87b32903,"openfl.display.GraphicsPath.lineTo","openfl/display/GraphicsPath.hx",61,0x0a58fcc2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(63)
		::openfl::_Vector::IntVector tmp = this->commands;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(63)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(63)
		if ((tmp1)){
			HX_STACK_LINE(63)
			::openfl::_Vector::IntVector tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(63)
			{
				HX_STACK_LINE(63)
				int length = null();		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(63)
				bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
				HX_STACK_LINE(63)
				::openfl::_Vector::IntVector tmp3 = ::openfl::_Vector::IntVector_obj::__new(length,fixed,null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(63)
				::openfl::_Vector::IntVector tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(63)
				tmp2 = tmp4;
			}
			HX_STACK_LINE(63)
			this->commands = tmp2;
		}
		HX_STACK_LINE(64)
		::openfl::_Vector::FloatVector tmp2 = this->data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(64)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(64)
		if ((tmp3)){
			HX_STACK_LINE(64)
			::openfl::_Vector::FloatVector tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(64)
			{
				HX_STACK_LINE(64)
				int length = null();		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(64)
				bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
				HX_STACK_LINE(64)
				::openfl::_Vector::FloatVector tmp5 = ::openfl::_Vector::FloatVector_obj::__new(length,fixed,null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(64)
				::openfl::_Vector::FloatVector tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(64)
				tmp4 = tmp6;
			}
			HX_STACK_LINE(64)
			this->data = tmp4;
		}
		HX_STACK_LINE(66)
		::openfl::_Vector::IntVector tmp4 = this->commands;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(66)
		tmp4->push((int)2);
		HX_STACK_LINE(67)
		::openfl::_Vector::FloatVector tmp5 = this->data;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(67)
		Float tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(67)
		tmp5->push(tmp6);
		HX_STACK_LINE(68)
		::openfl::_Vector::FloatVector tmp7 = this->data;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(68)
		Float tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(68)
		tmp7->push(tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GraphicsPath_obj,lineTo,(void))

Void GraphicsPath_obj::moveTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl.display.GraphicsPath","moveTo",0x67bfb560,"openfl.display.GraphicsPath.moveTo","openfl/display/GraphicsPath.hx",73,0x0a58fcc2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(75)
		::openfl::_Vector::IntVector tmp = this->commands;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(75)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(75)
		if ((tmp1)){
			HX_STACK_LINE(75)
			::openfl::_Vector::IntVector tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(75)
			{
				HX_STACK_LINE(75)
				int length = null();		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(75)
				bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
				HX_STACK_LINE(75)
				::openfl::_Vector::IntVector tmp3 = ::openfl::_Vector::IntVector_obj::__new(length,fixed,null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(75)
				::openfl::_Vector::IntVector tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(75)
				tmp2 = tmp4;
			}
			HX_STACK_LINE(75)
			this->commands = tmp2;
		}
		HX_STACK_LINE(76)
		::openfl::_Vector::FloatVector tmp2 = this->data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(76)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(76)
		if ((tmp3)){
			HX_STACK_LINE(76)
			::openfl::_Vector::FloatVector tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(76)
			{
				HX_STACK_LINE(76)
				int length = null();		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(76)
				bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
				HX_STACK_LINE(76)
				::openfl::_Vector::FloatVector tmp5 = ::openfl::_Vector::FloatVector_obj::__new(length,fixed,null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(76)
				::openfl::_Vector::FloatVector tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(76)
				tmp4 = tmp6;
			}
			HX_STACK_LINE(76)
			this->data = tmp4;
		}
		HX_STACK_LINE(78)
		::openfl::_Vector::IntVector tmp4 = this->commands;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(78)
		tmp4->push((int)1);
		HX_STACK_LINE(79)
		::openfl::_Vector::FloatVector tmp5 = this->data;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(79)
		Float tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(79)
		tmp5->push(tmp6);
		HX_STACK_LINE(80)
		::openfl::_Vector::FloatVector tmp7 = this->data;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(80)
		Float tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(80)
		tmp7->push(tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GraphicsPath_obj,moveTo,(void))

Void GraphicsPath_obj::wideLineTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl.display.GraphicsPath","wideLineTo",0xae2a1f76,"openfl.display.GraphicsPath.wideLineTo","openfl/display/GraphicsPath.hx",85,0x0a58fcc2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(87)
		::openfl::_Vector::IntVector tmp = this->commands;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(87)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(87)
		if ((tmp1)){
			HX_STACK_LINE(87)
			::openfl::_Vector::IntVector tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(87)
			{
				HX_STACK_LINE(87)
				int length = null();		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(87)
				bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
				HX_STACK_LINE(87)
				::openfl::_Vector::IntVector tmp3 = ::openfl::_Vector::IntVector_obj::__new(length,fixed,null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(87)
				::openfl::_Vector::IntVector tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(87)
				tmp2 = tmp4;
			}
			HX_STACK_LINE(87)
			this->commands = tmp2;
		}
		HX_STACK_LINE(88)
		::openfl::_Vector::FloatVector tmp2 = this->data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(88)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(88)
		if ((tmp3)){
			HX_STACK_LINE(88)
			::openfl::_Vector::FloatVector tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(88)
			{
				HX_STACK_LINE(88)
				int length = null();		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(88)
				bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
				HX_STACK_LINE(88)
				::openfl::_Vector::FloatVector tmp5 = ::openfl::_Vector::FloatVector_obj::__new(length,fixed,null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(88)
				::openfl::_Vector::FloatVector tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(88)
				tmp4 = tmp6;
			}
			HX_STACK_LINE(88)
			this->data = tmp4;
		}
		HX_STACK_LINE(90)
		::openfl::_Vector::IntVector tmp4 = this->commands;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(90)
		tmp4->push((int)2);
		HX_STACK_LINE(91)
		::openfl::_Vector::FloatVector tmp5 = this->data;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(91)
		Float tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(91)
		tmp5->push(tmp6);
		HX_STACK_LINE(92)
		::openfl::_Vector::FloatVector tmp7 = this->data;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(92)
		Float tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(92)
		tmp7->push(tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GraphicsPath_obj,wideLineTo,(void))

Void GraphicsPath_obj::wideMoveTo( Float x,Float y){
{
		HX_STACK_FRAME("openfl.display.GraphicsPath","wideMoveTo",0x8e36abd3,"openfl.display.GraphicsPath.wideMoveTo","openfl/display/GraphicsPath.hx",97,0x0a58fcc2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(99)
		::openfl::_Vector::IntVector tmp = this->commands;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(99)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(99)
		if ((tmp1)){
			HX_STACK_LINE(99)
			::openfl::_Vector::IntVector tmp2;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(99)
			{
				HX_STACK_LINE(99)
				int length = null();		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(99)
				bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
				HX_STACK_LINE(99)
				::openfl::_Vector::IntVector tmp3 = ::openfl::_Vector::IntVector_obj::__new(length,fixed,null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(99)
				::openfl::_Vector::IntVector tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(99)
				tmp2 = tmp4;
			}
			HX_STACK_LINE(99)
			this->commands = tmp2;
		}
		HX_STACK_LINE(100)
		::openfl::_Vector::FloatVector tmp2 = this->data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(100)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(100)
		if ((tmp3)){
			HX_STACK_LINE(100)
			::openfl::_Vector::FloatVector tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(100)
			{
				HX_STACK_LINE(100)
				int length = null();		HX_STACK_VAR(length,"length");
				HX_STACK_LINE(100)
				bool fixed = null();		HX_STACK_VAR(fixed,"fixed");
				HX_STACK_LINE(100)
				::openfl::_Vector::FloatVector tmp5 = ::openfl::_Vector::FloatVector_obj::__new(length,fixed,null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(100)
				::openfl::_Vector::FloatVector tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(100)
				tmp4 = tmp6;
			}
			HX_STACK_LINE(100)
			this->data = tmp4;
		}
		HX_STACK_LINE(102)
		::openfl::_Vector::IntVector tmp4 = this->commands;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(102)
		tmp4->push((int)1);
		HX_STACK_LINE(103)
		::openfl::_Vector::FloatVector tmp5 = this->data;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(103)
		Float tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(103)
		tmp5->push(tmp6);
		HX_STACK_LINE(104)
		::openfl::_Vector::FloatVector tmp7 = this->data;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(104)
		Float tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(104)
		tmp7->push(tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(GraphicsPath_obj,wideMoveTo,(void))

Void GraphicsPath_obj::__drawCircle( Float x,Float y,Float radius){
{
		HX_STACK_FRAME("openfl.display.GraphicsPath","__drawCircle",0xcf8699c8,"openfl.display.GraphicsPath.__drawCircle","openfl/display/GraphicsPath.hx",109,0x0a58fcc2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(radius,"radius")
		HX_STACK_LINE(111)
		Float tmp = (x - radius);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(111)
		Float tmp1 = (y - radius);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(111)
		Float tmp2 = (radius * (int)2);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(111)
		Float tmp3 = (radius * (int)2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(111)
		Float tmp4 = (radius * (int)2);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(111)
		Float tmp5 = (radius * (int)2);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(111)
		this->__drawRoundRect(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(GraphicsPath_obj,__drawCircle,(void))

Void GraphicsPath_obj::__drawEllipse( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("openfl.display.GraphicsPath","__drawEllipse",0xdc0fda26,"openfl.display.GraphicsPath.__drawEllipse","openfl/display/GraphicsPath.hx",116,0x0a58fcc2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(118)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(118)
		Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(118)
		Float tmp2 = width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(118)
		Float tmp3 = height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(118)
		Float tmp4 = width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(118)
		Float tmp5 = height;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(118)
		this->__drawRoundRect(tmp,tmp1,tmp2,tmp3,tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GraphicsPath_obj,__drawEllipse,(void))

Void GraphicsPath_obj::__drawRect( Float x,Float y,Float width,Float height){
{
		HX_STACK_FRAME("openfl.display.GraphicsPath","__drawRect",0xe8f096dc,"openfl.display.GraphicsPath.__drawRect","openfl/display/GraphicsPath.hx",123,0x0a58fcc2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(125)
		Float tmp = x;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(125)
		Float tmp1 = y;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(125)
		this->moveTo(tmp,tmp1);
		HX_STACK_LINE(126)
		Float tmp2 = (x + width);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(126)
		Float tmp3 = y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(126)
		this->lineTo(tmp2,tmp3);
		HX_STACK_LINE(127)
		Float tmp4 = (x + width);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(127)
		Float tmp5 = (y + height);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(127)
		this->lineTo(tmp4,tmp5);
		HX_STACK_LINE(128)
		Float tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(128)
		Float tmp7 = (y + height);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(128)
		this->lineTo(tmp6,tmp7);
		HX_STACK_LINE(129)
		Float tmp8 = x;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(129)
		Float tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(129)
		this->lineTo(tmp8,tmp9);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(GraphicsPath_obj,__drawRect,(void))

Void GraphicsPath_obj::__drawRoundRect( Float x,Float y,Float width,Float height,Float ellipseWidth,Float ellipseHeight){
{
		HX_STACK_FRAME("openfl.display.GraphicsPath","__drawRoundRect",0xbc9c2bda,"openfl.display.GraphicsPath.__drawRoundRect","openfl/display/GraphicsPath.hx",134,0x0a58fcc2)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_ARG(ellipseWidth,"ellipseWidth")
		HX_STACK_ARG(ellipseHeight,"ellipseHeight")
		HX_STACK_LINE(136)
		hx::MultEq(ellipseWidth,((Float)0.5));
		HX_STACK_LINE(137)
		hx::MultEq(ellipseHeight,((Float)0.5));
		HX_STACK_LINE(139)
		Float tmp = ellipseWidth;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(139)
		Float tmp1 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(139)
		bool tmp2 = (tmp > tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(139)
		if ((tmp2)){
			HX_STACK_LINE(139)
			Float tmp3 = (Float(width) / Float((int)2));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(139)
			ellipseWidth = tmp3;
		}
		HX_STACK_LINE(140)
		Float tmp3 = ellipseHeight;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(140)
		Float tmp4 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(140)
		bool tmp5 = (tmp3 > tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(140)
		if ((tmp5)){
			HX_STACK_LINE(140)
			Float tmp6 = (Float(height) / Float((int)2));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(140)
			ellipseHeight = tmp6;
		}
		HX_STACK_LINE(142)
		Float tmp6 = (x + width);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(142)
		Float xe = tmp6;		HX_STACK_VAR(xe,"xe");
		HX_STACK_LINE(143)
		Float tmp7 = (y + height);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(143)
		Float ye = tmp7;		HX_STACK_VAR(ye,"ye");
		HX_STACK_LINE(144)
		Float tmp8 = ellipseWidth;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(144)
		Float tmp9 = -(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(144)
		Float tmp10 = ellipseWidth;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(144)
		Float tmp11 = ::openfl::display::GraphicsPath_obj::SIN45;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(144)
		Float tmp12 = (tmp10 * tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(144)
		Float tmp13 = (tmp9 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(144)
		Float cx1 = tmp13;		HX_STACK_VAR(cx1,"cx1");
		HX_STACK_LINE(145)
		Float tmp14 = ellipseWidth;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(145)
		Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(145)
		Float tmp16 = ellipseWidth;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(145)
		Float tmp17 = ::openfl::display::GraphicsPath_obj::TAN22;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(145)
		Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(145)
		Float tmp19 = (tmp15 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(145)
		Float cx2 = tmp19;		HX_STACK_VAR(cx2,"cx2");
		HX_STACK_LINE(146)
		Float tmp20 = ellipseHeight;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(146)
		Float tmp21 = -(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(146)
		Float tmp22 = ellipseHeight;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(146)
		Float tmp23 = ::openfl::display::GraphicsPath_obj::SIN45;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(146)
		Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(146)
		Float tmp25 = (tmp21 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(146)
		Float cy1 = tmp25;		HX_STACK_VAR(cy1,"cy1");
		HX_STACK_LINE(147)
		Float tmp26 = ellipseHeight;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(147)
		Float tmp27 = -(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(147)
		Float tmp28 = ellipseHeight;		HX_STACK_VAR(tmp28,"tmp28");
		HX_STACK_LINE(147)
		Float tmp29 = ::openfl::display::GraphicsPath_obj::TAN22;		HX_STACK_VAR(tmp29,"tmp29");
		HX_STACK_LINE(147)
		Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
		HX_STACK_LINE(147)
		Float tmp31 = (tmp27 + tmp30);		HX_STACK_VAR(tmp31,"tmp31");
		HX_STACK_LINE(147)
		Float cy2 = tmp31;		HX_STACK_VAR(cy2,"cy2");
		HX_STACK_LINE(149)
		Float tmp32 = xe;		HX_STACK_VAR(tmp32,"tmp32");
		HX_STACK_LINE(149)
		Float tmp33 = (ye - ellipseHeight);		HX_STACK_VAR(tmp33,"tmp33");
		HX_STACK_LINE(149)
		this->moveTo(tmp32,tmp33);
		HX_STACK_LINE(150)
		Float tmp34 = xe;		HX_STACK_VAR(tmp34,"tmp34");
		HX_STACK_LINE(150)
		Float tmp35 = (ye + cy2);		HX_STACK_VAR(tmp35,"tmp35");
		HX_STACK_LINE(150)
		Float tmp36 = (xe + cx1);		HX_STACK_VAR(tmp36,"tmp36");
		HX_STACK_LINE(150)
		Float tmp37 = (ye + cy1);		HX_STACK_VAR(tmp37,"tmp37");
		HX_STACK_LINE(150)
		this->curveTo(tmp34,tmp35,tmp36,tmp37);
		HX_STACK_LINE(151)
		Float tmp38 = (xe + cx2);		HX_STACK_VAR(tmp38,"tmp38");
		HX_STACK_LINE(151)
		Float tmp39 = ye;		HX_STACK_VAR(tmp39,"tmp39");
		HX_STACK_LINE(151)
		Float tmp40 = (xe - ellipseWidth);		HX_STACK_VAR(tmp40,"tmp40");
		HX_STACK_LINE(151)
		Float tmp41 = ye;		HX_STACK_VAR(tmp41,"tmp41");
		HX_STACK_LINE(151)
		this->curveTo(tmp38,tmp39,tmp40,tmp41);
		HX_STACK_LINE(152)
		Float tmp42 = (x + ellipseWidth);		HX_STACK_VAR(tmp42,"tmp42");
		HX_STACK_LINE(152)
		Float tmp43 = ye;		HX_STACK_VAR(tmp43,"tmp43");
		HX_STACK_LINE(152)
		this->lineTo(tmp42,tmp43);
		HX_STACK_LINE(153)
		Float tmp44 = (x - cx2);		HX_STACK_VAR(tmp44,"tmp44");
		HX_STACK_LINE(153)
		Float tmp45 = ye;		HX_STACK_VAR(tmp45,"tmp45");
		HX_STACK_LINE(153)
		Float tmp46 = (x - cx1);		HX_STACK_VAR(tmp46,"tmp46");
		HX_STACK_LINE(153)
		Float tmp47 = (ye + cy1);		HX_STACK_VAR(tmp47,"tmp47");
		HX_STACK_LINE(153)
		this->curveTo(tmp44,tmp45,tmp46,tmp47);
		HX_STACK_LINE(154)
		Float tmp48 = x;		HX_STACK_VAR(tmp48,"tmp48");
		HX_STACK_LINE(154)
		Float tmp49 = (ye + cy2);		HX_STACK_VAR(tmp49,"tmp49");
		HX_STACK_LINE(154)
		Float tmp50 = x;		HX_STACK_VAR(tmp50,"tmp50");
		HX_STACK_LINE(154)
		Float tmp51 = (ye - ellipseHeight);		HX_STACK_VAR(tmp51,"tmp51");
		HX_STACK_LINE(154)
		this->curveTo(tmp48,tmp49,tmp50,tmp51);
		HX_STACK_LINE(155)
		Float tmp52 = x;		HX_STACK_VAR(tmp52,"tmp52");
		HX_STACK_LINE(155)
		Float tmp53 = (y + ellipseHeight);		HX_STACK_VAR(tmp53,"tmp53");
		HX_STACK_LINE(155)
		this->lineTo(tmp52,tmp53);
		HX_STACK_LINE(156)
		Float tmp54 = x;		HX_STACK_VAR(tmp54,"tmp54");
		HX_STACK_LINE(156)
		Float tmp55 = (y - cy2);		HX_STACK_VAR(tmp55,"tmp55");
		HX_STACK_LINE(156)
		Float tmp56 = (x - cx1);		HX_STACK_VAR(tmp56,"tmp56");
		HX_STACK_LINE(156)
		Float tmp57 = (y - cy1);		HX_STACK_VAR(tmp57,"tmp57");
		HX_STACK_LINE(156)
		this->curveTo(tmp54,tmp55,tmp56,tmp57);
		HX_STACK_LINE(157)
		Float tmp58 = (x - cx2);		HX_STACK_VAR(tmp58,"tmp58");
		HX_STACK_LINE(157)
		Float tmp59 = y;		HX_STACK_VAR(tmp59,"tmp59");
		HX_STACK_LINE(157)
		Float tmp60 = (x + ellipseWidth);		HX_STACK_VAR(tmp60,"tmp60");
		HX_STACK_LINE(157)
		Float tmp61 = y;		HX_STACK_VAR(tmp61,"tmp61");
		HX_STACK_LINE(157)
		this->curveTo(tmp58,tmp59,tmp60,tmp61);
		HX_STACK_LINE(158)
		Float tmp62 = (xe - ellipseWidth);		HX_STACK_VAR(tmp62,"tmp62");
		HX_STACK_LINE(158)
		Float tmp63 = y;		HX_STACK_VAR(tmp63,"tmp63");
		HX_STACK_LINE(158)
		this->lineTo(tmp62,tmp63);
		HX_STACK_LINE(159)
		Float tmp64 = (xe + cx2);		HX_STACK_VAR(tmp64,"tmp64");
		HX_STACK_LINE(159)
		Float tmp65 = y;		HX_STACK_VAR(tmp65,"tmp65");
		HX_STACK_LINE(159)
		Float tmp66 = (xe + cx1);		HX_STACK_VAR(tmp66,"tmp66");
		HX_STACK_LINE(159)
		Float tmp67 = (y - cy1);		HX_STACK_VAR(tmp67,"tmp67");
		HX_STACK_LINE(159)
		this->curveTo(tmp64,tmp65,tmp66,tmp67);
		HX_STACK_LINE(160)
		Float tmp68 = xe;		HX_STACK_VAR(tmp68,"tmp68");
		HX_STACK_LINE(160)
		Float tmp69 = (y - cy2);		HX_STACK_VAR(tmp69,"tmp69");
		HX_STACK_LINE(160)
		Float tmp70 = xe;		HX_STACK_VAR(tmp70,"tmp70");
		HX_STACK_LINE(160)
		Float tmp71 = (y + ellipseHeight);		HX_STACK_VAR(tmp71,"tmp71");
		HX_STACK_LINE(160)
		this->curveTo(tmp68,tmp69,tmp70,tmp71);
		HX_STACK_LINE(161)
		Float tmp72 = xe;		HX_STACK_VAR(tmp72,"tmp72");
		HX_STACK_LINE(161)
		Float tmp73 = (ye - ellipseHeight);		HX_STACK_VAR(tmp73,"tmp73");
		HX_STACK_LINE(161)
		this->lineTo(tmp72,tmp73);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(GraphicsPath_obj,__drawRoundRect,(void))

Float GraphicsPath_obj::SIN45;

Float GraphicsPath_obj::TAN22;


GraphicsPath_obj::GraphicsPath_obj()
{
}

void GraphicsPath_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GraphicsPath);
	HX_MARK_MEMBER_NAME(commands,"commands");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(winding,"winding");
	HX_MARK_MEMBER_NAME(__graphicsDataType,"__graphicsDataType");
	HX_MARK_END_CLASS();
}

void GraphicsPath_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(commands,"commands");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(winding,"winding");
	HX_VISIT_MEMBER_NAME(__graphicsDataType,"__graphicsDataType");
}

Dynamic GraphicsPath_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return data; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"lineTo") ) { return lineTo_dyn(); }
		if (HX_FIELD_EQ(inName,"moveTo") ) { return moveTo_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"winding") ) { return winding; }
		if (HX_FIELD_EQ(inName,"curveTo") ) { return curveTo_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { return commands; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"wideLineTo") ) { return wideLineTo_dyn(); }
		if (HX_FIELD_EQ(inName,"wideMoveTo") ) { return wideMoveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"__drawRect") ) { return __drawRect_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cubicCurveTo") ) { return cubicCurveTo_dyn(); }
		if (HX_FIELD_EQ(inName,"__drawCircle") ) { return __drawCircle_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__drawEllipse") ) { return __drawEllipse_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__drawRoundRect") ) { return __drawRoundRect_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { return __graphicsDataType; }
	}
	return super::__Field(inName,inCallProp);
}

bool GraphicsPath_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { outValue = SIN45; return true;  }
		if (HX_FIELD_EQ(inName,"TAN22") ) { outValue = TAN22; return true;  }
	}
	return false;
}

Dynamic GraphicsPath_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast< ::openfl::_Vector::FloatVector >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"winding") ) { winding=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"commands") ) { commands=inValue.Cast< ::openfl::_Vector::IntVector >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__graphicsDataType") ) { __graphicsDataType=inValue.Cast< ::openfl::display::GraphicsDataType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool GraphicsPath_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"SIN45") ) { SIN45=ioValue.Cast< Float >(); return true; }
		if (HX_FIELD_EQ(inName,"TAN22") ) { TAN22=ioValue.Cast< Float >(); return true; }
	}
	return false;
}

void GraphicsPath_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("winding","\x1a","\x49","\x70","\xe8"));
	outFields->push(HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::_Vector::IntVector*/ ,(int)offsetof(GraphicsPath_obj,commands),HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe")},
	{hx::fsObject /*::openfl::_Vector::FloatVector*/ ,(int)offsetof(GraphicsPath_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(GraphicsPath_obj,winding),HX_HCSTRING("winding","\x1a","\x49","\x70","\xe8")},
	{hx::fsObject /*::openfl::display::GraphicsDataType*/ ,(int)offsetof(GraphicsPath_obj,__graphicsDataType),HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsFloat,(void *) &GraphicsPath_obj::SIN45,HX_HCSTRING("SIN45","\x79","\x16","\xbe","\xfa")},
	{hx::fsFloat,(void *) &GraphicsPath_obj::TAN22,HX_HCSTRING("TAN22","\x41","\xf4","\xda","\x88")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("commands","\xc8","\xb0","\x55","\xbe"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("winding","\x1a","\x49","\x70","\xe8"),
	HX_HCSTRING("__graphicsDataType","\x0f","\x5d","\x4d","\x46"),
	HX_HCSTRING("cubicCurveTo","\xe0","\x07","\x90","\x2e"),
	HX_HCSTRING("curveTo","\x0a","\x60","\x88","\xce"),
	HX_HCSTRING("lineTo","\x8f","\x46","\xa0","\xec"),
	HX_HCSTRING("moveTo","\xec","\xd2","\xac","\xcc"),
	HX_HCSTRING("wideLineTo","\x02","\xf3","\x82","\xc8"),
	HX_HCSTRING("wideMoveTo","\x5f","\x7f","\x8f","\xa8"),
	HX_HCSTRING("__drawCircle","\x54","\x68","\x64","\xd0"),
	HX_HCSTRING("__drawEllipse","\x1a","\xc6","\x46","\x9d"),
	HX_HCSTRING("__drawRect","\x68","\x6a","\x49","\x03"),
	HX_HCSTRING("__drawRoundRect","\xce","\xfc","\x5c","\x6a"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GraphicsPath_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(GraphicsPath_obj::SIN45,"SIN45");
	HX_MARK_MEMBER_NAME(GraphicsPath_obj::TAN22,"TAN22");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GraphicsPath_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GraphicsPath_obj::SIN45,"SIN45");
	HX_VISIT_MEMBER_NAME(GraphicsPath_obj::TAN22,"TAN22");
};

#endif

hx::Class GraphicsPath_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("SIN45","\x79","\x16","\xbe","\xfa"),
	HX_HCSTRING("TAN22","\x41","\xf4","\xda","\x88"),
	::String(null()) };

void GraphicsPath_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.GraphicsPath","\x7a","\xb7","\x47","\x96");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GraphicsPath_obj::__GetStatic;
	__mClass->mSetStaticField = &GraphicsPath_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GraphicsPath_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

void GraphicsPath_obj::__boot()
{
	SIN45= ((Float)0.70710678118654752440084436210485);
	TAN22= ((Float)0.4142135623730950488016887242097);
}

} // end namespace openfl
} // end namespace display

// Generated by Haxe 3.3.0
#ifndef INCLUDED_flixel_FlxObject
#define INCLUDED_flixel_FlxObject

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxCamera)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS2(flixel,util,FlxAxes)
HX_DECLARE_CLASS2(flixel,util,FlxPath)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)

namespace flixel{


class HXCPP_CLASS_ATTRIBUTES FlxObject_obj : public  ::flixel::FlxBasic_obj
{
	public:
		typedef  ::flixel::FlxBasic_obj super;
		typedef FlxObject_obj OBJ_;
		FlxObject_obj();

	public:
		void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.FlxObject")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.FlxObject"); }
		static hx::ObjectPtr< FlxObject_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_Width,hx::Null< Float >  __o_Height);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxObject_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("FlxObject","\xb1","\x78","\x2e","\x97"); }

		static void __boot();
		static Bool defaultPixelPerfectPosition;
		static Float SEPARATE_BIAS;
		static Int LEFT;
		static Int RIGHT;
		static Int UP;
		static Int DOWN;
		static Int NONE;
		static Int CEILING;
		static Int FLOOR;
		static Int WALL;
		static Int ANY;
		static  ::flixel::math::FlxRect _firstSeparateFlxRect;
		static  ::flixel::math::FlxRect _secondSeparateFlxRect;
		static Bool separate( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2);
		static ::Dynamic separate_dyn();

		static Bool updateTouchingFlags( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2);
		static ::Dynamic updateTouchingFlags_dyn();

		static Float computeOverlapX( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2,hx::Null< Bool >  checkMaxOverlap);
		static ::Dynamic computeOverlapX_dyn();

		static Bool separateX( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2);
		static ::Dynamic separateX_dyn();

		static Bool updateTouchingFlagsX( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2);
		static ::Dynamic updateTouchingFlagsX_dyn();

		static Float computeOverlapY( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2,hx::Null< Bool >  checkMaxOverlap);
		static ::Dynamic computeOverlapY_dyn();

		static Bool separateY( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2);
		static ::Dynamic separateY_dyn();

		static Bool updateTouchingFlagsY( ::flixel::FlxObject Object1, ::flixel::FlxObject Object2);
		static ::Dynamic updateTouchingFlagsY_dyn();

		Float x;
		Float y;
		Float width;
		Float height;
		 ::Dynamic pixelPerfectRender;
		Bool pixelPerfectPosition;
		Float angle;
		Bool moves;
		Bool immovable;
		 ::flixel::math::FlxPoint scrollFactor;
		 ::flixel::math::FlxPoint velocity;
		 ::flixel::math::FlxPoint acceleration;
		 ::flixel::math::FlxPoint drag;
		 ::flixel::math::FlxPoint maxVelocity;
		 ::flixel::math::FlxPoint last;
		Float mass;
		Float elasticity;
		Float angularVelocity;
		Float angularAcceleration;
		Float angularDrag;
		Float maxAngular;
		Float health;
		Int touching;
		Int wasTouching;
		Int allowCollisions;
		Bool collisonXDrag;
		 ::flixel::util::FlxPath path;
		 ::flixel::math::FlxPoint _point;
		 ::flixel::math::FlxRect _rect;
		virtual void initVars();
		::Dynamic initVars_dyn();

		void initMotionVars();
		::Dynamic initMotionVars_dyn();

		virtual void destroy();

		virtual void update(Float elapsed);

		void updateMotion(Float elapsed);
		::Dynamic updateMotion_dyn();

		virtual void draw();

		virtual Bool overlaps( ::flixel::FlxBasic ObjectOrGroup,hx::Null< Bool >  InScreenSpace, ::flixel::FlxCamera Camera);
		::Dynamic overlaps_dyn();

		Bool overlapsCallback( ::flixel::FlxBasic ObjectOrGroup,Float X,Float Y,Bool InScreenSpace, ::flixel::FlxCamera Camera);
		::Dynamic overlapsCallback_dyn();

		virtual Bool overlapsAt(Float X,Float Y, ::flixel::FlxBasic ObjectOrGroup,hx::Null< Bool >  InScreenSpace, ::flixel::FlxCamera Camera);
		::Dynamic overlapsAt_dyn();

		Bool overlapsAtCallback( ::flixel::FlxBasic ObjectOrGroup,Float X,Float Y,Bool InScreenSpace, ::flixel::FlxCamera Camera);
		::Dynamic overlapsAtCallback_dyn();

		virtual Bool overlapsPoint( ::flixel::math::FlxPoint point,hx::Null< Bool >  InScreenSpace, ::flixel::FlxCamera Camera);
		::Dynamic overlapsPoint_dyn();

		Bool inWorldBounds();
		::Dynamic inWorldBounds_dyn();

		 ::flixel::math::FlxPoint getScreenPosition( ::flixel::math::FlxPoint point, ::flixel::FlxCamera Camera);
		::Dynamic getScreenPosition_dyn();

		 ::flixel::math::FlxPoint getPosition( ::flixel::math::FlxPoint point);
		::Dynamic getPosition_dyn();

		 ::flixel::math::FlxPoint getMidpoint( ::flixel::math::FlxPoint point);
		::Dynamic getMidpoint_dyn();

		 ::flixel::math::FlxRect getHitbox( ::flixel::math::FlxRect rect);
		::Dynamic getHitbox_dyn();

		virtual void reset(Float X,Float Y);
		::Dynamic reset_dyn();

		virtual Bool isOnScreen( ::flixel::FlxCamera Camera);
		::Dynamic isOnScreen_dyn();

		Bool isPixelPerfectRender( ::flixel::FlxCamera Camera);
		::Dynamic isPixelPerfectRender_dyn();

		Bool isTouching(Int Direction);
		::Dynamic isTouching_dyn();

		Bool justTouched(Int Direction);
		::Dynamic justTouched_dyn();

		void hurt(Float Damage);
		::Dynamic hurt_dyn();

		 ::flixel::FlxObject screenCenter(::hx::EnumBase axes);
		::Dynamic screenCenter_dyn();

		virtual void setPosition(hx::Null< Float >  X,hx::Null< Float >  Y);
		::Dynamic setPosition_dyn();

		void setSize(Float Width,Float Height);
		::Dynamic setSize_dyn();

		 ::flixel::math::FlxRect getBoundingBox( ::flixel::FlxCamera camera);
		::Dynamic getBoundingBox_dyn();

		virtual ::String toString();

		virtual Float set_x(Float NewX);
		::Dynamic set_x_dyn();

		virtual Float set_y(Float NewY);
		::Dynamic set_y_dyn();

		virtual Float set_width(Float Width);
		::Dynamic set_width_dyn();

		virtual Float set_height(Float Height);
		::Dynamic set_height_dyn();

		virtual Float get_width();
		::Dynamic get_width_dyn();

		virtual Float get_height();
		::Dynamic get_height_dyn();

		Bool get_solid();
		::Dynamic get_solid_dyn();

		virtual Bool set_solid(Bool Solid);
		::Dynamic set_solid_dyn();

		virtual Float set_angle(Float Value);
		::Dynamic set_angle_dyn();

		virtual Bool set_moves(Bool Value);
		::Dynamic set_moves_dyn();

		virtual Bool set_immovable(Bool Value);
		::Dynamic set_immovable_dyn();

		virtual Bool set_pixelPerfectRender(Bool Value);
		::Dynamic set_pixelPerfectRender_dyn();

		Int set_allowCollisions(Int Value);
		::Dynamic set_allowCollisions_dyn();

		 ::flixel::util::FlxPath set_path( ::flixel::util::FlxPath path);
		::Dynamic set_path_dyn();

};

} // end namespace flixel

#endif /* INCLUDED_flixel_FlxObject */ 

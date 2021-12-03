// Generated by Haxe 4.1.5
#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_instanced_arrays
#define INCLUDED_lime_graphics_opengl_ext_ANGLE_instanced_arrays

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_b3b5b227d74e9109_7_new)
HX_DECLARE_CLASS4(lime,graphics,opengl,ext,ANGLE_instanced_arrays)

namespace lime{
namespace graphics{
namespace opengl{
namespace ext{


class HXCPP_CLASS_ATTRIBUTES ANGLE_instanced_arrays_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ANGLE_instanced_arrays_obj OBJ_;
		ANGLE_instanced_arrays_obj();

	public:
		enum { _hx_ClassId = 0x0146a7c8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl.ext.ANGLE_instanced_arrays")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl.ext.ANGLE_instanced_arrays"); }

		inline static ::hx::ObjectPtr< ANGLE_instanced_arrays_obj > __new() {
			::hx::ObjectPtr< ANGLE_instanced_arrays_obj > __this = new ANGLE_instanced_arrays_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ANGLE_instanced_arrays_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ANGLE_instanced_arrays_obj *__this = (ANGLE_instanced_arrays_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ANGLE_instanced_arrays_obj), false, "lime.graphics.opengl.ext.ANGLE_instanced_arrays"));
			*(void **)__this = ANGLE_instanced_arrays_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_b3b5b227d74e9109_7_new)
HXDLIN(   7)		( ( ::lime::graphics::opengl::ext::ANGLE_instanced_arrays)(__this) )->VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE = 35070;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ANGLE_instanced_arrays_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ANGLE_instanced_arrays",56,74,86,10); }

		int VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE;
		void drawArraysInstancedANGLE(int mode,int first,int count,int primcount);
		::Dynamic drawArraysInstancedANGLE_dyn();

		void drawElementsInstancedANGLE(int mode,int count,int type,int offset,int primcount);
		::Dynamic drawElementsInstancedANGLE_dyn();

		void vertexAttribDivisorANGLE(int index,int divisor);
		::Dynamic vertexAttribDivisorANGLE_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext

#endif /* INCLUDED_lime_graphics_opengl_ext_ANGLE_instanced_arrays */ 

// Generated by Haxe 4.1.5
#ifndef INCLUDED_lime_text_harfbuzz_HBGlyphInfo
#define INCLUDED_lime_text_harfbuzz_HBGlyphInfo

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_24b4250effd3403c_10_new)
HX_DECLARE_CLASS3(lime,text,harfbuzz,HBGlyphInfo)

namespace lime{
namespace text{
namespace harfbuzz{


class HXCPP_CLASS_ATTRIBUTES HBGlyphInfo_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef HBGlyphInfo_obj OBJ_;
		HBGlyphInfo_obj();

	public:
		enum { _hx_ClassId = 0x392fc6fa };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.text.harfbuzz.HBGlyphInfo")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"lime.text.harfbuzz.HBGlyphInfo"); }

		inline static ::hx::ObjectPtr< HBGlyphInfo_obj > __new() {
			::hx::ObjectPtr< HBGlyphInfo_obj > __this = new HBGlyphInfo_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< HBGlyphInfo_obj > __alloc(::hx::Ctx *_hx_ctx) {
			HBGlyphInfo_obj *__this = (HBGlyphInfo_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HBGlyphInfo_obj), false, "lime.text.harfbuzz.HBGlyphInfo"));
			*(void **)__this = HBGlyphInfo_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_24b4250effd3403c_10_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~HBGlyphInfo_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("HBGlyphInfo",e0,99,db,f5); }

		int codepoint;
		int mask;
		int cluster;
};

} // end namespace lime
} // end namespace text
} // end namespace harfbuzz

#endif /* INCLUDED_lime_text_harfbuzz_HBGlyphInfo */ 

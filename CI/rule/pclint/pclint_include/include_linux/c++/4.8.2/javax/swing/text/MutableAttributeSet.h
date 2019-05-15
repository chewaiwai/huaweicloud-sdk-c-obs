
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_text_MutableAttributeSet__
#define __javax_swing_text_MutableAttributeSet__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace text
      {
          class AttributeSet;
          class MutableAttributeSet;
      }
    }
  }
}

class javax::swing::text::MutableAttributeSet : public ::java::lang::Object
{

public:
  virtual void addAttribute(::java::lang::Object *, ::java::lang::Object *) = 0;
  virtual void addAttributes(::javax::swing::text::AttributeSet *) = 0;
  virtual void removeAttribute(::java::lang::Object *) = 0;
  virtual void removeAttributes(::java::util::Enumeration *) = 0;
  virtual void removeAttributes(::javax::swing::text::AttributeSet *) = 0;
  virtual void setResolveParent(::javax::swing::text::AttributeSet *) = 0;
  virtual jboolean containsAttribute(::java::lang::Object *, ::java::lang::Object *) = 0;
  virtual jboolean containsAttributes(::javax::swing::text::AttributeSet *) = 0;
  virtual ::javax::swing::text::AttributeSet * copyAttributes() = 0;
  virtual ::java::lang::Object * getAttribute(::java::lang::Object *) = 0;
  virtual jint getAttributeCount() = 0;
  virtual ::java::util::Enumeration * getAttributeNames() = 0;
  virtual ::javax::swing::text::AttributeSet * getResolveParent() = 0;
  virtual jboolean isDefined(::java::lang::Object *) = 0;
  virtual jboolean isEqual(::javax::swing::text::AttributeSet *) = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __javax_swing_text_MutableAttributeSet__

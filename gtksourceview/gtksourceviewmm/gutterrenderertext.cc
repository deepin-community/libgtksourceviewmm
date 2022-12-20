// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtksourceviewmm/gutterrenderertext.h>
#include <gtksourceviewmm/private/gutterrenderertext_p.h>


/* gutterrenderertext.cc
 *
 * Copyright (C) 2009, 2010, 2011 Krzesimir Nowak
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the Free
 * Software Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

#include <gtksourceview/gtksourcegutterrenderertext.h>

namespace Gsv
{

void GutterRendererText::set_text(const Markup& markup)
{
  const Glib::ustring str(markup.get_string());

  gtk_source_gutter_renderer_text_set_markup(gobj(), str.c_str(), str.bytes());
}

void GutterRendererText::set_text(const Glib::ustring& text)
{
  gtk_source_gutter_renderer_text_set_text(gobj(), text.c_str(), text.bytes());
}

} // namespace Gsv

namespace
{
} // anonymous namespace


namespace Glib
{

Gsv::GutterRendererText* wrap(GtkSourceGutterRendererText* object, bool take_copy)
{
  return dynamic_cast<Gsv::GutterRendererText *> (Glib::wrap_auto ((GObject*)(object), take_copy));
}

} /* namespace Glib */

namespace Gsv
{


/* The *_Class implementation: */

const Glib::Class& GutterRendererText_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &GutterRendererText_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_source_gutter_renderer_text_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void GutterRendererText_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* GutterRendererText_Class::wrap_new(GObject* o)
{
  return manage(new GutterRendererText((GtkSourceGutterRendererText*)(o)));

}


/* The implementation: */

GutterRendererText::GutterRendererText(const Glib::ConstructParams& construct_params)
:
  GutterRenderer(construct_params)
{
  }

GutterRendererText::GutterRendererText(GtkSourceGutterRendererText* castitem)
:
  GutterRenderer((GtkSourceGutterRenderer*)(castitem))
{
  }


GutterRendererText::GutterRendererText(GutterRendererText&& src) noexcept
: GutterRenderer(std::move(src))
{}

GutterRendererText& GutterRendererText::operator=(GutterRendererText&& src) noexcept
{
  GutterRenderer::operator=(std::move(src));
  return *this;
}

GutterRendererText::~GutterRendererText() noexcept
{
  destroy_();
}

GutterRendererText::CppClassType GutterRendererText::gutterrenderertext_class_; // initialize static member

GType GutterRendererText::get_type()
{
  return gutterrenderertext_class_.init().get_type();
}


GType GutterRendererText::get_base_type()
{
  return gtk_source_gutter_renderer_text_get_type();
}


GutterRendererText::GutterRendererText()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  GutterRenderer(Glib::ConstructParams(gutterrenderertext_class_.init()))
{
  

}

void GutterRendererText::measure(const Markup& markup, int& width, int& height)
{
  gtk_source_gutter_renderer_text_measure_markup(gobj(), (markup).get_c_str(), &(width), &(height));
}

void GutterRendererText::measure(const Glib::ustring& text, int& width, int& height)
{
  gtk_source_gutter_renderer_text_measure(gobj(), text.c_str(), &(width), &(height));
}


Glib::PropertyProxy< Glib::ustring > GutterRendererText::property_text() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "text");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > GutterRendererText::property_text() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "text");
}

Glib::PropertyProxy< Glib::ustring > GutterRendererText::property_markup() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "markup");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > GutterRendererText::property_markup() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "markup");
}


} // namespace Gsv



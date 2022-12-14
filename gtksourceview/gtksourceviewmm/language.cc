// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtksourceviewmm/language.h>
#include <gtksourceviewmm/private/language_p.h>

#include <gtksourceview/gtksourcelanguage.h>
#include <gtksourceview/gtksourceview-typebuiltins.h>

/* language.cc
 *
 * Copyright (C) 2006 Dodji Seketeli
 * Copyright (C) 2010, 2011 Krzesimir Nowak
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

#include <glibmm/vectorutils.h>

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gsv::Language> wrap(GtkSourceLanguage* object, bool take_copy)
{
  return Glib::RefPtr<Gsv::Language>( dynamic_cast<Gsv::Language*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gsv
{


/* The *_Class implementation: */

const Glib::Class& Language_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &Language_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_source_language_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void Language_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* Language_Class::wrap_new(GObject* object)
{
  return new Language((GtkSourceLanguage*)object);
}


/* The implementation: */

GtkSourceLanguage* Language::gobj_copy()
{
  reference();
  return gobj();
}

Language::Language(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

Language::Language(GtkSourceLanguage* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


Language::Language(Language&& src) noexcept
: Glib::Object(std::move(src))
{}

Language& Language::operator=(Language&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  return *this;
}

Language::~Language() noexcept
{}


Language::CppClassType Language::language_class_; // initialize static member

GType Language::get_type()
{
  return language_class_.init().get_type();
}


GType Language::get_base_type()
{
  return gtk_source_language_get_type();
}


Glib::ustring Language::get_id() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_source_language_get_id(const_cast<GtkSourceLanguage*>(gobj())));
}

Glib::ustring Language::get_name() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_source_language_get_name(const_cast<GtkSourceLanguage*>(gobj())));
}

Glib::ustring Language::get_section() const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_source_language_get_section(const_cast<GtkSourceLanguage*>(gobj())));
}

bool Language::get_hidden() const
{
  return gtk_source_language_get_hidden(const_cast<GtkSourceLanguage*>(gobj()));
}

std::vector<Glib::ustring> Language::get_mime_types() const
{
  return Glib::ArrayHandler<Glib::ustring>::array_to_vector(gtk_source_language_get_mime_types(const_cast<GtkSourceLanguage*>(gobj())), Glib::OWNERSHIP_DEEP);
}

std::vector<Glib::ustring> Language::get_globs() const
{
  return Glib::ArrayHandler<Glib::ustring>::array_to_vector(gtk_source_language_get_globs(const_cast<GtkSourceLanguage*>(gobj())), Glib::OWNERSHIP_DEEP);
}

std::vector<Glib::ustring> Language::get_style_ids() const
{
  return Glib::ArrayHandler<Glib::ustring>::array_to_vector(gtk_source_language_get_style_ids(const_cast<GtkSourceLanguage*>(gobj())), Glib::OWNERSHIP_DEEP);
}

Glib::ustring Language::get_style_name(const Glib::ustring& style_id) const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_source_language_get_style_name(const_cast<GtkSourceLanguage*>(gobj()), style_id.c_str()));
}

Glib::ustring Language::get_metadata(const Glib::ustring& name) const
{
  return Glib::convert_const_gchar_ptr_to_ustring(gtk_source_language_get_metadata(const_cast<GtkSourceLanguage*>(gobj()), name.c_str()));
}


Glib::PropertyProxy_ReadOnly< std::string > Language::property_id() const
{
  return Glib::PropertyProxy_ReadOnly< std::string >(this, "id");
}

Glib::PropertyProxy_ReadOnly< std::string > Language::property_name() const
{
  return Glib::PropertyProxy_ReadOnly< std::string >(this, "name");
}

Glib::PropertyProxy_ReadOnly< std::string > Language::property_section() const
{
  return Glib::PropertyProxy_ReadOnly< std::string >(this, "section");
}

Glib::PropertyProxy_ReadOnly< bool > Language::property_hidden() const
{
  return Glib::PropertyProxy_ReadOnly< bool >(this, "hidden");
}


} // namespace Gsv



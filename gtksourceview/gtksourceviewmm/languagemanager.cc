// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!


#include <glibmm.h>

#include <gtksourceviewmm/languagemanager.h>
#include <gtksourceviewmm/private/languagemanager_p.h>

#include <gtksourceview/gtksourcelanguagemanager.h>
#include <gtksourceview/gtksourceview-typebuiltins.h>

/* languagemanager.cc
 *
 * Copyright (C) 2004-2005 Jae Jang
 * Copyright (C) 2005-2006 Rob Page
 * Copyright (C) 2006 Dodji Seketeli
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

#include <glibmm/vectorutils.h>

#include "gtksourceviewmm/languagemanager.h"

namespace Gsv
{

void
LanguageManager::reset_search_path()
{
  gtk_source_language_manager_set_search_path(gobj(), 0);
}

}//end namespace Gsv


namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gsv::LanguageManager> wrap(GtkSourceLanguageManager* object, bool take_copy)
{
  return Glib::RefPtr<Gsv::LanguageManager>( dynamic_cast<Gsv::LanguageManager*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gsv
{


/* The *_Class implementation: */

const Glib::Class& LanguageManager_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &LanguageManager_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_source_language_manager_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:

  }

  return *this;
}


void LanguageManager_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* LanguageManager_Class::wrap_new(GObject* object)
{
  return new LanguageManager((GtkSourceLanguageManager*)object);
}


/* The implementation: */

GtkSourceLanguageManager* LanguageManager::gobj_copy()
{
  reference();
  return gobj();
}

LanguageManager::LanguageManager(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

LanguageManager::LanguageManager(GtkSourceLanguageManager* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


LanguageManager::LanguageManager(LanguageManager&& src) noexcept
: Glib::Object(std::move(src))
{}

LanguageManager& LanguageManager::operator=(LanguageManager&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  return *this;
}

LanguageManager::~LanguageManager() noexcept
{}


LanguageManager::CppClassType LanguageManager::languagemanager_class_; // initialize static member

GType LanguageManager::get_type()
{
  return languagemanager_class_.init().get_type();
}


GType LanguageManager::get_base_type()
{
  return gtk_source_language_manager_get_type();
}


LanguageManager::LanguageManager()
:
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(languagemanager_class_.init()))
{
  

}

Glib::RefPtr<LanguageManager> LanguageManager::create()
{
  return Glib::RefPtr<LanguageManager>( new LanguageManager() );
}

Glib::RefPtr<LanguageManager> LanguageManager::get_default()
{

  Glib::RefPtr<LanguageManager> retvalue = Glib::wrap(gtk_source_language_manager_get_default());
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us
  return retvalue;
}

std::vector<std::string> LanguageManager::get_search_path() const
{
  return Glib::ArrayHandler<std::string>::array_to_vector(gtk_source_language_manager_get_search_path(const_cast<GtkSourceLanguageManager*>(gobj())), Glib::OWNERSHIP_NONE);
}

void LanguageManager::set_search_path(const std::vector<std::string>& dirs)
{
  gtk_source_language_manager_set_search_path(gobj(), const_cast<gchar**>(Glib::ArrayHandler<std::string>::vector_to_array(dirs).data()));
}

std::vector<std::string> LanguageManager::get_language_ids() const
{
  return Glib::ArrayHandler<std::string>::array_to_vector(gtk_source_language_manager_get_language_ids(const_cast<GtkSourceLanguageManager*>(gobj())), Glib::OWNERSHIP_NONE);
}

Glib::RefPtr<Language> LanguageManager::get_language(const std::string& id)
{
  Glib::RefPtr<Language> retvalue = Glib::wrap(gtk_source_language_manager_get_language(gobj(), id.c_str()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Language> LanguageManager::get_language(const std::string& id) const
{
  return const_cast<LanguageManager*>(this)->get_language(id);
}

Glib::RefPtr<Language> LanguageManager::guess_language(const std::string& filename, const std::string& content_type)
{
  Glib::RefPtr<Language> retvalue = Glib::wrap(gtk_source_language_manager_guess_language(gobj(), filename.c_str(), content_type.c_str()));
  if(retvalue)
    retvalue->reference(); //The function does not do a ref for us.
  return retvalue;
}

Glib::RefPtr<const Language> LanguageManager::guess_language(const std::string& filename, const std::string& content_type) const
{
  return const_cast<LanguageManager*>(this)->guess_language(filename, content_type);
}


Glib::PropertyProxy< std::vector<std::string> > LanguageManager::property_search_path() 
{
  return Glib::PropertyProxy< std::vector<std::string> >(this, "search-path");
}

Glib::PropertyProxy_ReadOnly< std::vector<std::string> > LanguageManager::property_search_path() const
{
  return Glib::PropertyProxy_ReadOnly< std::vector<std::string> >(this, "search-path");
}

Glib::PropertyProxy_ReadOnly< std::vector<std::string> > LanguageManager::property_language_ids() const
{
  return Glib::PropertyProxy_ReadOnly< std::vector<std::string> >(this, "language-ids");
}


} // namespace Gsv



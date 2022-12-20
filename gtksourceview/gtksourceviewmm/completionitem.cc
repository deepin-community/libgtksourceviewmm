// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!

//Avoid warnings when we use deprecated gtkmm API in our deprecated wrappers:
#include <glibmm.h>
#undef GTKMM_DISABLE_DEPRECATED
#undef GTK_DISABLE_DEPRECATED
#define GTK_DISABLE_DEPRECATION_WARNINGS 1
 

#include <glibmm.h>

#include <gtksourceviewmm/completionitem.h>
#include <gtksourceviewmm/private/completionitem_p.h>


/* completionitem.cc
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

#include <gtksourceview/gtksourcecompletionitem.h>
#include <gtkmm/stock.h>
#include <gtk/gtk.h>

namespace Gsv
{

CompletionItem::CompletionItem(const Glib::ustring& label, const Glib::ustring& text, const Glib::RefPtr<const Gdk::Pixbuf>& icon, const Glib::ustring& info) :
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(completionitem_class_.init(), "label",label.c_str(),"text",text.c_str(),"icon",Glib::unwrap(icon),"info",(info.empty() ? 0 : info.c_str()), static_cast<char*>(0)))
{}

CompletionItem::CompletionItem(const Markup& markup, const Glib::ustring& text, const Glib::RefPtr<const Gdk::Pixbuf>& icon, const Glib::ustring& info) :
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(completionitem_class_.init(), "markup",markup.get_c_str(),"text",text.c_str(),"icon",Glib::unwrap(icon),"info",(info.empty() ? 0 : info.c_str()), static_cast<char*>(0)))
{}

G_GNUC_BEGIN_IGNORE_DEPRECATIONS
CompletionItem::CompletionItem(const Glib::ustring& label, const Glib::ustring& text, const Gtk::StockID& stock, const Glib::ustring& info) :
  // Mark this class as non-derived to allow C++ vfuncs to be skipped.
  Glib::ObjectBase(0),
  Glib::Object(Glib::ConstructParams(completionitem_class_.init(), "text",text.c_str(),"info",(info.empty() ? 0 : info.c_str()), static_cast<char*>(0)))
{
  GdkPixbuf* icon;
  Glib::ustring temp_label(label);

  if (stock)
  {
    GtkIconTheme* theme = gtk_icon_theme_get_default();

    int width, height;
    gtk_icon_size_lookup (GTK_ICON_SIZE_MENU, &width, &height);
    icon = gtk_icon_theme_load_icon (theme,
                                     stock.get_c_str(),
                                     width,
                                     GTK_ICON_LOOKUP_USE_BUILTIN,
                                     0);

    GtkStockItem stock_item;
    if (temp_label.empty() && gtk_stock_lookup (stock.get_c_str(), &stock_item))
    {
      temp_label = stock_item.label;
    }
  }
  else
  {
    icon = 0;
  }

  g_object_set(gobj(), "label", temp_label.c_str(), "icon", icon, static_cast<char*>(0));

  if (icon)
  {
    g_object_unref(icon);
  }
}
G_GNUC_END_IGNORE_DEPRECATIONS

} // namespace Gsv

namespace
{
} // anonymous namespace


namespace Glib
{

Glib::RefPtr<Gsv::CompletionItem> wrap(GtkSourceCompletionItem* object, bool take_copy)
{
  return Glib::RefPtr<Gsv::CompletionItem>( dynamic_cast<Gsv::CompletionItem*> (Glib::wrap_auto ((GObject*)(object), take_copy)) );
  //We use dynamic_cast<> in case of multiple inheritance.
}

} /* namespace Glib */


namespace Gsv
{


/* The *_Class implementation: */

const Glib::Class& CompletionItem_Class::init()
{
  if(!gtype_) // create the GType if necessary
  {
    // Glib::Class has to know the class init function to clone custom types.
    class_init_func_ = &CompletionItem_Class::class_init_function;

    // This is actually just optimized away, apparently with no harm.
    // Make sure that the parent type has been created.
    //CppClassParent::CppObjectType::get_type();

    // Create the wrapper type, with the same class/instance size as the base type.
    register_derived_type(gtk_source_completion_item_get_type());

    // Add derived versions of interfaces, if the C type implements any interfaces:
  CompletionProposal::add_interface(get_type());

  }

  return *this;
}


void CompletionItem_Class::class_init_function(void* g_class, void* class_data)
{
  const auto klass = static_cast<BaseClassType*>(g_class);
  CppClassParent::class_init_function(klass, class_data);


}


Glib::ObjectBase* CompletionItem_Class::wrap_new(GObject* object)
{
  return new CompletionItem((GtkSourceCompletionItem*)object);
}


/* The implementation: */

GtkSourceCompletionItem* CompletionItem::gobj_copy()
{
  reference();
  return gobj();
}

CompletionItem::CompletionItem(const Glib::ConstructParams& construct_params)
:
  Glib::Object(construct_params)
{

}

CompletionItem::CompletionItem(GtkSourceCompletionItem* castitem)
:
  Glib::Object((GObject*)(castitem))
{}


CompletionItem::CompletionItem(CompletionItem&& src) noexcept
: Glib::Object(std::move(src))
  , CompletionProposal(std::move(src))
{}

CompletionItem& CompletionItem::operator=(CompletionItem&& src) noexcept
{
  Glib::Object::operator=(std::move(src));
  CompletionProposal::operator=(std::move(src));
  return *this;
}

CompletionItem::~CompletionItem() noexcept
{}


CompletionItem::CppClassType CompletionItem::completionitem_class_; // initialize static member

GType CompletionItem::get_type()
{
  return completionitem_class_.init().get_type();
}


GType CompletionItem::get_base_type()
{
  return gtk_source_completion_item_get_type();
}


Glib::RefPtr<CompletionItem> CompletionItem::create(const Glib::ustring& label, const Glib::ustring& text, const Glib::RefPtr<const Gdk::Pixbuf>& icon, const Glib::ustring& info)
{
  return Glib::RefPtr<CompletionItem>( new CompletionItem(label, text, icon, info) );
}

Glib::RefPtr<CompletionItem> CompletionItem::create(const Markup& markup, const Glib::ustring& text, const Glib::RefPtr<const Gdk::Pixbuf>& icon, const Glib::ustring& info)
{
  return Glib::RefPtr<CompletionItem>( new CompletionItem(markup, text, icon, info) );
}

Glib::RefPtr<CompletionItem> CompletionItem::create(const Glib::ustring& label, const Glib::ustring& text, const Gtk::StockID& stock, const Glib::ustring& info)
{
  return Glib::RefPtr<CompletionItem>( new CompletionItem(label, text, stock, info) );
}


Glib::PropertyProxy< Glib::RefPtr<Gdk::Pixbuf> > CompletionItem::property_icon() 
{
  return Glib::PropertyProxy< Glib::RefPtr<Gdk::Pixbuf> >(this, "icon");
}

Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::Pixbuf> > CompletionItem::property_icon() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::Pixbuf> >(this, "icon");
}

Glib::PropertyProxy< Glib::ustring > CompletionItem::property_info() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "info");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > CompletionItem::property_info() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "info");
}

Glib::PropertyProxy< Glib::ustring > CompletionItem::property_label() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "label");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > CompletionItem::property_label() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "label");
}

Glib::PropertyProxy< Glib::ustring > CompletionItem::property_markup() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "markup");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > CompletionItem::property_markup() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "markup");
}

Glib::PropertyProxy< Glib::ustring > CompletionItem::property_text() 
{
  return Glib::PropertyProxy< Glib::ustring >(this, "text");
}

Glib::PropertyProxy_ReadOnly< Glib::ustring > CompletionItem::property_text() const
{
  return Glib::PropertyProxy_ReadOnly< Glib::ustring >(this, "text");
}


} // namespace Gsv


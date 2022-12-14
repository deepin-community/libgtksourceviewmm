// -*- c++ -*-
// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!
#ifndef _GTKSOURCEVIEWMM_COMPLETIONITEM_H
#define _GTKSOURCEVIEWMM_COMPLETIONITEM_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* completionitem.h
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

#include <gtksourceviewmm/markup.h>
#include <gtksourceviewmm/completionproposal.h>

#include <gtkmm/stock.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkSourceCompletionItem GtkSourceCompletionItem;
typedef struct _GtkSourceCompletionItemClass GtkSourceCompletionItemClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gsv
{ class CompletionItem_Class; } // namespace Gsv
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gtk {
  //deprecated
  class StockID;
} //namespace Gtk
#endif //#ifndef DOXYGEN_SHOULD_SKIP_THIS

namespace Gsv
{

// TODO: need docs here. krnowak
/** CompletionItem
 *
 * @newin{2,10}
 */

class CompletionItem
:
  public Glib::Object,
  public CompletionProposal
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef CompletionItem CppObjectType;
  typedef CompletionItem_Class CppClassType;
  typedef GtkSourceCompletionItem BaseObjectType;
  typedef GtkSourceCompletionItemClass BaseClassType;

  // noncopyable
  CompletionItem(const CompletionItem&) = delete;
  CompletionItem& operator=(const CompletionItem&) = delete;

private:  friend class CompletionItem_Class;
  static CppClassType completionitem_class_;

protected:
  explicit CompletionItem(const Glib::ConstructParams& construct_params);
  explicit CompletionItem(GtkSourceCompletionItem* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  CompletionItem(CompletionItem&& src) noexcept;
  CompletionItem& operator=(CompletionItem&& src) noexcept;

  virtual ~CompletionItem() noexcept;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkSourceCompletionItem*       gobj()       { return reinterpret_cast<GtkSourceCompletionItem*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkSourceCompletionItem* gobj() const { return reinterpret_cast<GtkSourceCompletionItem*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkSourceCompletionItem* gobj_copy();

private:

  
protected:
  explicit CompletionItem(const Glib::ustring& label, const Glib::ustring& text, const Glib::RefPtr<const Gdk::Pixbuf>& icon, const Glib::ustring& info);
  explicit CompletionItem(const Markup& markup, const Glib::ustring& text, const Glib::RefPtr<const Gdk::Pixbuf>& icon, const Glib::ustring& info);

#ifndef GTKSOURCEVIEWMM_DISABLE_DEPRECATED
  /**
   * @deprecated Use a constructor without a stock ID instead.
   */
  explicit CompletionItem(const Glib::ustring& label, const Glib::ustring& text, const Gtk::StockID& stock, const Glib::ustring& info);
#endif //GTKSOURCEVIEWMM_DISABLE_DEPRECATED

public:
  /** Create a new CompletionItem with label @a label, icon @a icon and
   *  extra information @a info.
   *;
   * If @a icon is empty, then there will be no icon shown. If @a info is empty,
   * then no extra information will be available.
   *
   * @param label The item label.
   * @param text The item text.
   * @param icon The item icon.
   * @param info The item extra information.
   *
   * @return New CompletionInfo.
   *
   * @newin{2,10}
   */
  
  static Glib::RefPtr<CompletionItem> create(const Glib::ustring& label, const Glib::ustring& text, const Glib::RefPtr<const Gdk::Pixbuf>& icon, const Glib::ustring& info);


  /** Create a new CompletionItem with markup label @a markup, icon
   *  @a icon and extra information @a info.
   *
   * If @a icon is empty, then there will be no icon shown. If @a info is empty,
   * then no extra information will be available.
   *
   * @param markup The item markup label.
   * @param text The item text.
   * @param icon The item icon.
   * @param info The item extra information.
   *
   * @return New CompletionInfo.
   *
   * @newin{2,10}
   */
  
  static Glib::RefPtr<CompletionItem> create(const Markup& markup, const Glib::ustring& text, const Glib::RefPtr<const Gdk::Pixbuf>& icon, const Glib::ustring& info);


#ifndef GTKSOURCEVIEWMM_DISABLE_DEPRECATED
  /** Creates a new CompletionItem from a stock item.
   *
   * If @a label is empty, then stock label will be used.
   *
   * @param label The item label.
   * @param text The item text.
   * @param stock The stock icon.
   * @param info The item extra information.
   *
   * @return New CompletionInfo.
   *
   * @newin{2,10}
   *
   * @deprecated Use a create() method without a stock ID instead.
   */
  
  static Glib::RefPtr<CompletionItem> create(const Glib::ustring& label, const Glib::ustring& text, const Gtk::StockID& stock, const Glib::ustring& info);

#endif //GTKSOURCEVIEWMM_DISABLE_DEPRECATED

  /** Icon to be shown for this item.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Gdk::Pixbuf> > property_icon() ;

/** Icon to be shown for this item.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::Pixbuf> > property_icon() const;

  /** Info to be shown for this item.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_info() ;

/** Info to be shown for this item.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_info() const;

  /** Label to be shown for this item.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_label() ;

/** Label to be shown for this item.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_label() const;

  /** Markup to be shown for this item.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_markup() ;

/** Markup to be shown for this item.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_markup() const;

  /** Item text.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_text() ;

/** Item text.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_text() const;


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


};

} /* namespace Gsv */


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gsv::CompletionItem
   */
  Glib::RefPtr<Gsv::CompletionItem> wrap(GtkSourceCompletionItem* object, bool take_copy = false);
}


#endif /* _GTKSOURCEVIEWMM_COMPLETIONITEM_H */


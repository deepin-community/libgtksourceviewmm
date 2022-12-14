// -*- c++ -*-
// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!
#ifndef _GTKSOURCEVIEWMM_GUTTERRENDERERPIXBUF_H
#define _GTKSOURCEVIEWMM_GUTTERRENDERERPIXBUF_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* gutterrendererpixbuf.h
 *
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

/// \file
/// \brief GutterRendererPixbuf class

#include <glibmm/refptr.h>
#include <gdkmm/pixbuf.h>
#include <gtksourceviewmm/gutterrenderer.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkSourceGutterRendererPixbuf GtkSourceGutterRendererPixbuf;
typedef struct _GtkSourceGutterRendererPixbufClass GtkSourceGutterRendererPixbufClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gsv
{ class GutterRendererPixbuf_Class; } // namespace Gsv
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gsv
{

// TODO: write docs.

class GutterRendererPixbuf : public GutterRenderer
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef GutterRendererPixbuf CppObjectType;
  typedef GutterRendererPixbuf_Class CppClassType;
  typedef GtkSourceGutterRendererPixbuf BaseObjectType;
  typedef GtkSourceGutterRendererPixbufClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  GutterRendererPixbuf(GutterRendererPixbuf&& src) noexcept;
  GutterRendererPixbuf& operator=(GutterRendererPixbuf&& src) noexcept;

  // noncopyable
  GutterRendererPixbuf(const GutterRendererPixbuf&) = delete;
  GutterRendererPixbuf& operator=(const GutterRendererPixbuf&) = delete;

  virtual ~GutterRendererPixbuf() noexcept;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class GutterRendererPixbuf_Class;
  static CppClassType gutterrendererpixbuf_class_;

protected:
  explicit GutterRendererPixbuf(const Glib::ConstructParams& construct_params);
  explicit GutterRendererPixbuf(GtkSourceGutterRendererPixbuf* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkSourceGutterRendererPixbuf*       gobj()       { return reinterpret_cast<GtkSourceGutterRendererPixbuf*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkSourceGutterRendererPixbuf* gobj() const { return reinterpret_cast<GtkSourceGutterRendererPixbuf*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

public:
  GutterRendererPixbuf();

  
  /** Get the pixbuf of the renderer.
   * 
   * @return A Gdk::Pixbuf.
   */
  Glib::RefPtr<Gdk::Pixbuf> get_pixbuf();

  
  /** Get the pixbuf of the renderer.
   * 
   * @return A Gdk::Pixbuf.
   */
  Glib::RefPtr<const Gdk::Pixbuf> get_pixbuf() const;

 
  void set_pixbuf(const Glib::RefPtr<const Gdk::Pixbuf>& pixbuf);

  
#ifndef GTKSOURCEVIEWMM_DISABLE_DEPRECATED

  std::string get_stock_id() const;
#endif // GTKSOURCEVIEWMM_DISABLE_DEPRECATED


#ifndef GTKSOURCEVIEWMM_DISABLE_DEPRECATED

  void set_stock_id(const std::string& stock_id);
#endif // GTKSOURCEVIEWMM_DISABLE_DEPRECATED


  /** Get the gicon of the renderer
   * 
   * @return A Icon.
   */
  Glib::RefPtr<Gio::Icon> get_icon();

  
  /** Get the gicon of the renderer
   * 
   * @return A Icon.
   */
  Glib::RefPtr<const Gio::Icon> get_icon() const;

 
  void set_icon(const Glib::RefPtr<Gio::Icon>& icon);

  
  std::string get_icon_name() const;

  
  void set_icon_name(const std::string& icon_name);

  /** The pixbuf.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Gdk::Pixbuf> > property_pixbuf() ;

/** The pixbuf.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gdk::Pixbuf> > property_pixbuf() const;

  
#ifndef GTKSOURCEVIEWMM_DISABLE_DEPRECATED

/** The stock id.
   * @deprecated This should not be used in newly-written code.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< std::string > property_stock_id() ;

/** The stock id.
   * @deprecated This should not be used in newly-written code.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< std::string > property_stock_id() const;

#endif // GTKSOURCEVIEWMM_DISABLE_DEPRECATED

  /** The icon name.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< std::string > property_icon_name() ;

/** The icon name.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< std::string > property_icon_name() const;

  /** The gicon.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::RefPtr<Gio::Icon> > property_gicon() ;

/** The gicon.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Gio::Icon> > property_gicon() const;


};

} // namespace Gsv


namespace Glib
{
  /** A Glib::wrap() method for this object.
   * 
   * @param object The C instance.
   * @param take_copy False if the result should take ownership of the C instance. True if it should take a new copy or ref.
   * @result A C++ instance that wraps this C instance.
   *
   * @relates Gsv::GutterRendererPixbuf
   */
  Gsv::GutterRendererPixbuf* wrap(GtkSourceGutterRendererPixbuf* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKSOURCEVIEWMM_GUTTERRENDERERPIXBUF_H */


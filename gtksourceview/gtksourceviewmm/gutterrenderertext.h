// -*- c++ -*-
// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!
#ifndef _GTKSOURCEVIEWMM_GUTTERRENDERERTEXT_H
#define _GTKSOURCEVIEWMM_GUTTERRENDERERTEXT_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* gutterrenderertext.h
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
/// \brief GutterRendererText class

#include <gtksourceviewmm/gutterrenderer.h>
#include <gtksourceviewmm/markup.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkSourceGutterRendererText GtkSourceGutterRendererText;
typedef struct _GtkSourceGutterRendererTextClass GtkSourceGutterRendererTextClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gsv
{ class GutterRendererText_Class; } // namespace Gsv
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gsv
{

// TODO: write docs.

class GutterRendererText : public GutterRenderer
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef GutterRendererText CppObjectType;
  typedef GutterRendererText_Class CppClassType;
  typedef GtkSourceGutterRendererText BaseObjectType;
  typedef GtkSourceGutterRendererTextClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  GutterRendererText(GutterRendererText&& src) noexcept;
  GutterRendererText& operator=(GutterRendererText&& src) noexcept;

  // noncopyable
  GutterRendererText(const GutterRendererText&) = delete;
  GutterRendererText& operator=(const GutterRendererText&) = delete;

  virtual ~GutterRendererText() noexcept;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class GutterRendererText_Class;
  static CppClassType gutterrenderertext_class_;

protected:
  explicit GutterRendererText(const Glib::ConstructParams& construct_params);
  explicit GutterRendererText(GtkSourceGutterRendererText* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkSourceGutterRendererText*       gobj()       { return reinterpret_cast<GtkSourceGutterRendererText*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkSourceGutterRendererText* gobj() const { return reinterpret_cast<GtkSourceGutterRendererText*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::


private:

public:
  GutterRendererText();

  // TODO: probably just set_text and set_markup will be better instead of funny overloads.
  
  void set_text(const Markup& markup);

  
  void set_text(const Glib::ustring& text);

 
  void measure(const Markup& markup, int& width, int& height);

  
  void measure(const Glib::ustring& text, int& width, int& height);

  /** The text.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_text() ;

/** The text.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_text() const;

  /** The markup.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_markup() ;

/** The markup.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_markup() const;


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
   * @relates Gsv::GutterRendererText
   */
  Gsv::GutterRendererText* wrap(GtkSourceGutterRendererText* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKSOURCEVIEWMM_GUTTERRENDERERTEXT_H */


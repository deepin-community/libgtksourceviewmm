// -*- c++ -*-
// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!
#ifndef _GTKSOURCEVIEWMM_PRINTCOMPOSITOR_H
#define _GTKSOURCEVIEWMM_PRINTCOMPOSITOR_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* printcompositor.h
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

#include <gtkmm/printcontext.h>

#include <gtksourceviewmm/view.h>
#include <gtksourceviewmm/buffer.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkSourcePrintCompositor GtkSourcePrintCompositor;
typedef struct _GtkSourcePrintCompositorClass GtkSourcePrintCompositorClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gsv
{ class PrintCompositor_Class; } // namespace Gsv
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gsv
{

/** Compose a Buffer for printing.
 *
 * @newin{2,10}
 */

class PrintCompositor : public Glib::Object
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef PrintCompositor CppObjectType;
  typedef PrintCompositor_Class CppClassType;
  typedef GtkSourcePrintCompositor BaseObjectType;
  typedef GtkSourcePrintCompositorClass BaseClassType;

  // noncopyable
  PrintCompositor(const PrintCompositor&) = delete;
  PrintCompositor& operator=(const PrintCompositor&) = delete;

private:  friend class PrintCompositor_Class;
  static CppClassType printcompositor_class_;

protected:
  explicit PrintCompositor(const Glib::ConstructParams& construct_params);
  explicit PrintCompositor(GtkSourcePrintCompositor* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  PrintCompositor(PrintCompositor&& src) noexcept;
  PrintCompositor& operator=(PrintCompositor&& src) noexcept;

  virtual ~PrintCompositor() noexcept;

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkSourcePrintCompositor*       gobj()       { return reinterpret_cast<GtkSourcePrintCompositor*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkSourcePrintCompositor* gobj() const { return reinterpret_cast<GtkSourcePrintCompositor*>(gobject_); }

  ///Provides access to the underlying C instance. The caller is responsible for unrefing it. Use when directly setting fields in structs.
  GtkSourcePrintCompositor* gobj_copy();

private:


protected:
    explicit PrintCompositor(const Glib::RefPtr<Buffer>& buffer);

  explicit PrintCompositor(const View& view);
public:
  /** Creates a new print compositor that can be used to print @a buffer.
   *
   * @param buffer the Buffer to print.
   *
   * @return A new print compositor object.
   *
   * @newin{2,10}
   */
  
  static Glib::RefPtr<PrintCompositor> create(const Glib::RefPtr<Buffer>& buffer);


  /** Creates a new print compositor that can be used to print the buffer
   *  associated with @a view.
   *
   * This constructor sets some configuration properties to make the
   * printed output match @a view as much as possible.  The properties set are
   * PrintCompositor::property_tab_width(),
   * PrintCompositor::property_highlight_syntax(),
   * PrintCompositor::property_wrap_mode(),
   * PrintCompositor::property_body_font_name() and
   * PrintCompositor::property_print_line_numbers().
   *
   * @param view A View to get configuration from.
   *
   * @return A new print compositor object.
   *
   * @newin{2,10}
   */
  
  static Glib::RefPtr<PrintCompositor> create(const View& view);


  /** Gets the Buffer associated with the compositor.
   *
   * @return The Buffer associated with the compositor.
   *
   * @newin{2,10}
   */
  Glib::RefPtr<Buffer> get_buffer();

  
  /** Gets the Buffer associated with the compositor.
   *
   * @return The Buffer associated with the compositor.
   *
   * @newin{2,10}
   */
  Glib::RefPtr<const Buffer> get_buffer() const;

  
  /** Sets the width of tabulation in characters for printed text.
   *
   * This function cannot be called anymore after the first call to the
   * paginate() function.
   *
   * @param width Width of tab in characters.
   *
   * @newin{2,10}
   */
  void set_tab_width(guint width);

  
  /** Returns the width of tabulation in characters for printed text.
   *
   * @return Width of tab.
   *
   * @newin{2,10}
   */
  guint get_tab_width() const;

  
  /** Sets the line wrapping mode for the printed text.
   *
   * This function cannot be called anymore after the first call to the
   * paginate() function.
   *
   * @param wrap_mode A Gtk::WrapMode.
   *
   * @newin{2,10}
   */
  void set_wrap_mode(Gtk::WrapMode wrap_mode);

  
  /** Gets the line wrapping mode for the printed text.
   *
   * @return The line wrap mode.
   *
   * @newin{2,10}
   */
  Gtk::WrapMode get_wrap_mode() const;

  
  /** Sets whether the printed text will be highlighted according to the
   *  buffer rules.
   *
   * Both color and font style are applied. This function cannot be called
   * anymore after the first call to the paginate() function.
   *
   * @param highlight Whether syntax should be highlighted.
   *
   * @newin{2,10}
   */
  void set_highlight_syntax(bool highlight =  true);

  
  /** Determines whether the printed text will be highlighted according to the
   *  buffer rules.
   *
   * Note that highlighting will happen only if the buffer to print has
   * highlighting activated.
   *
   * @return @c true if the printed output will be highlighted.
   *
   * @newin{2,10}
   */
  bool get_highlight_syntax() const;

  
  /** Sets the interval for printed line numbers.
   *
   * If @a interval is 0 no numbers will be printed.  If greater than 0,
   * a number will be printed every @a interval lines (i.e. 1 will print all
   * line numbers).
   *
   * Maximum accepted value for @a interval is 100.
   *
   * This function cannot be called anymore after the first call to the
   * paginate() function.
   *
   * @param interval Interval for printed line numbers.
   *
   * @newin{2,10}
   */
  void set_print_line_numbers(guint interval =  1);

  
  /** Returns the interval used for line number printing.
   *
   * If the value is 0, no line numbers will be printed. The default value is
   * 1 (i.e. numbers printed in all lines).
   *
   * @return The interval of printed line numbers.
   *
   * @newin{2,10}
   *
   */
  guint get_print_line_numbers() const;

  
  /** Sets the default font for the printed text.
   *
   * @a font_name should be a string representation of a font description Pango
   * can understand. (e.g. "Monospace 10").
   * See Pango::FontDescription() for a description of the format
   * of the string representation.
   *
   * This function cannot be called anymore after the first call to the
   * paginate() function.
   *
   * @param font_name The name of the default font for the body text.
   *
   * @newin{2,10}
   */
  void set_body_font_name(const Glib::ustring& font_name);

  
  /** Returns the name of the font used to print the text body.
   *
   * @return A string containing the name of the font used to print the text
   * body.
   *
   * @newin{2,10}
   */
  Glib::ustring get_body_font_name() const;

  
  /** Sets the font for printing line numbers on the left margin.
   *
   * @a font_name should be a string representation of a font description Pango
   * can understand (e.g. "Monospace 10"). See
   * Pango::FontDescription() for a description of the format of
   * the string representation.
   *
   * This function cannot be called anymore after the first call to the
   * paginate() function.
   *
   * @param font_name The name of the font for line numbers.
   *
   * @newin{2,10}
   */
  void set_line_numbers_font_name(const Glib::ustring& font_name);

  /** Sets the default font for printing line numbers on the left margin.
   *
   * The font to be used will be the same used as used for the text.
   *
   * This function cannot be called anymore after the first call to the
   * paginate() function.
   *
   * @newin{2,10}
   */
  void set_default_line_numbers_font_name();

  
  /** Returns the name of the font used to print line numbers on the left
   *  margin.
   *
   * @return A string containing the name of the font used to print line numbers
   * on the left margin.
   *
   * @newin{2,10}
   */
  Glib::ustring get_line_numbers_font_name() const;

  
  /** Sets the font for printing the page header.
   *
   * @a font_name should be a string representation of a font description Pango
   * can understand (e.g. "Monospace 10"). See
   * Pango::FontDescription() for a description of the format of
   * the string representation.
   *
   * This function cannot be called anymore after the first call to the
   * paginate() function.
   *
   * @param font_name The name of the font for the page header.
   *
   * @newin{2,10}
   */
  void set_header_font_name(const Glib::ustring& font_name);

  /** Sets the default font for printing the page header.
   *
   * The font to be used will be the same used as used for the text.
   *
   * This function cannot be called anymore after the first call to the
   * paginate() function.
   *
   * @newin{2,10}
   */
  void set_default_header_font_name();

  
  /** Returns the name of the font used to print the page header.
   *
   * @return A string containing the name of the font used to print the page
   * header.
   *
   * @newin{2,10}
   */
  Glib::ustring get_header_font_name() const;

  
  /** Sets the font for printing the page footer.
   *
   * @a font_name should be a string representation of a font description Pango
   * can understand (e.g. "Monospace 10"). See
   * Pango::FontDescription() for a description of the format of
   * the string representation.
   *
   * This function cannot be called anymore after the first call to the
   * paginate() function.
   *
   * @param font_name The name of the font for the page footer.
   *
   * @newin{2,10}
   */
  void set_footer_font_name(const Glib::ustring& font_name);

  /** Sets the default font for printing the page footer.
   *
   * The font to be used will be the same used as used for the text.
   *
   * This function cannot be called anymore after the first call to the
   * paginate() function.
   *
   * @newin{2,10}
   */
  void set_default_footer_font_name();

  
  /** Returns the name of the font used to print the page footer.
   *
   * @return A string containing the name of the font used to print the page
   * footer.
   *
   * @newin{2,10}
   */
  Glib::ustring get_footer_font_name() const;

 
  /** Sets the top margin used by @a compositor.
   *
   * @param margin The new top margin in units of @a unit.
   * @param unit The units for @a margin.
   *
   * @newin{2,10}
   */
  void set_top_margin(double margin, Gtk::Unit unit);

  
  /** Gets the top margin in units of @a unit.
   *
   * @param unit The unit for the return value.
   * @return The top margin.
   *
   * @newin{2,10}
   */
  double get_top_margin(Gtk::Unit unit) const;

  
  /** Sets the bottom margin used by @a compositor.
   *
   * @param margin The new bottom margin in units of @a unit.
   * @param unit The units for @a margin.
   *
   * @newin{2,10}
   */
  void set_bottom_margin(double margin, Gtk::Unit unit);

  
  /** Gets the bottom margin in units of @a unit.
   *
   * @param unit The unit for the return value.
   * @return The top margin.
   *
   * @newin{2,10}
   */
  double get_bottom_margin(Gtk::Unit unit) const;

  
  /** Sets the left margin used by @a compositor.
   *
   * @param margin The new bottom margin in units of @a unit.
   * @param unit The units for @a margin.
   *
   * @newin{2,10}
   */
  void set_left_margin(double margin, Gtk::Unit unit);

  
  /** Gets the left margin in units of @a unit.
   *
   * @param unit The unit for the return value.
   * @return The top margin.
   *
   * @newin{2,10}
   */
  double get_left_margin(Gtk::Unit unit) const;

  
  /** Sets the right margin used by @a compositor.
   *
   * @param margin The new bottom margin in units of @a unit.
   * @param unit The units for @a margin.
   *
   * @newin{2,10}
   */
  void set_right_margin(double margin, Gtk::Unit unit);

  
  /** Gets the right margin in units of @a unit.
   *
   * @param unit The unit for the return value.
   * @return The top margin.
   *
   * @newin{2,10}
   */
  double get_right_margin(Gtk::Unit unit) const;

  
  /** Sets whether you want to print a header in each page.
   *
   * The header consists of three pieces of text and an optional line separator,
   * configurable with set_header_format().
   *
   * Note that by default the header format is unspecified, and if it's
   * empty it will not be printed, regardless of this setting.
   *
   * This function cannot be called anymore after the first call to the
   * paginate() function.
   *
   * @param print @c true if you want the header to be printed.
   *
   * @newin{2,10}
   */
  void set_print_header(bool print =  true);

  
  /** Determines if a header is set to be printed for each page.
   *
   * A header will be printed if this function returns @c true @e and some
   * format strings have been specified with set_header_format().
   *
   * @return @c true if the header is set to be printed.
   *
   * @newin{2,10}
   */
  bool get_print_header() const;

  
  /** Sets whether you want to print a footer in each page.
   *
   * The footer consists of three pieces of text and an optional line separator,
   * configurable with set_header_format().
   *
   * Note that by default the footer format is unspecified, and if it's
   * empty it will not be printed, regardless of this setting.
   *
   * This function cannot be called anymore after the first call to the
   * paginate() function.
   *
   * @param print @c true if you want the footer to be printed.
   *
   * @newin{2,10}
   */
  void set_print_footer(bool print =  true);

  
  /** Determines if a footer is set to be printed for each page.
   *
   * A footer will be printed if this function returns @c true @e and some
   * format strings have been specified with set_footer_format().
   *
   * @return @c true if the header is set to be printed.
   *
   * @newin{2,10}
   */
  bool get_print_footer() const;

  
  /** Sets strftime like header format strings, to be printed on the
   *  left, center and right of the top of each page.
   *
   * The strings may include strftime(3) codes which will be expanded at print
   * time. All strftime(3) codes are accepted, with the addition of %N for the
   * page number and %Q for the page count.
   *
   * @a separator specifies if a solid line should be drawn to separate
   * the header from the document text.
   *
   * If empty string is given for any of the three arguments, that particular
   * string will not be printed.
   *
   * For the header to be printed, in addition to specifying format strings, you
   * need to enable header printing with set_print_header().
   *
   * This function cannot be called anymore after the first call to the
   * paginate() function.
   *
   * @param separator @c true if you want a separator line to be printed.
   * @param left A format string to print on the left of the header.
   * @param center A format string to print on the center of the header.
   * @param right A format string to print on the right of the header.
   *
   * @newin{2,10}
   */
  void set_header_format(bool separator, const Glib::ustring& left, const Glib::ustring& center, const Glib::ustring& right);
  
  /** Sets strftime like footer format strings, to be printed on the
   *  left, center and right of the top of each page.
   *
   * The strings may include strftime(3) codes which will be expanded at print
   * time. All strftime(3) codes are accepted, with the addition of %N for the
   * page number and %Q for the page count.
   *
   * @a separator specifies if a solid line should be drawn to separate
   * the footer from the document text.
   *
   * If empty string is given for any of the three arguments, that particular
   * string will not be printed.
   *
   * For the footer to be printed, in addition to specifying format strings, you
   * need to enable footer printing with set_print_footer().
   *
   * This function cannot be called anymore after the first call to the
   * paginate() function.
   *
   * @param separator @c true if you want a separator line to be printed.
   * @param left A format string to print on the left of the footer.
   * @param center A format string to print on the center of the footer.
   * @param right A format string to print on the right of the footer.
   *
   * @newin{2,10}
   */
  void set_footer_format(bool separator, const Glib::ustring& left, const Glib::ustring& center, const Glib::ustring& right);

  
  /** Returns the number of pages in the document or @c -1 if the
   *  document has not been completely paginated.
   *
   * @return The number of pages in the document or @c -1 if the document has
   * not been completely paginated.
   *
   * @newin{2,10}
   */
  int get_n_pages() const;

 
  /** Paginate the document associated with the @a compositor.
   *
   * In order to support non-blocking pagination, document is paginated in small
   * chunks. Each time paginate() is invoked, a chunk of the document is
   * paginated. To paginate the entire document, paginate() must be invoked
   * multiple times. It returns @c true if the document has been completely
   * paginated, otherwise it returns @c false.
   *
   * This method has been designed to be invoked in the handler of the
   * Gtk::PrintOperation::paginate signal, as shown in the following example:
   *
   * @code
   * // Signal handler for the GtkPrintOperation::paginate signal.
   * // Extended with sigc::bind().
   *
   * static bool
   * paginate (Glib::RefPtr<Gtk::PrintOperation> operation,
   *           Glib::RefPtr<Gtk::PrintContext> context,
   *           Glib::RefPtr<Gsv::PrintCompositor> compositor)
   * {
   *   if (compositor->paginate(context))
   *   {
   *     int n_pages = compositor->get_n_pages();
   *     operation->set_n_pages(n_pages);
   *
   *     return true;
   *   }
   *
   *   return false;
   * }
   * @endcode
   *
   * If you don't need to do pagination in chunks, you can simply do it all in
   * the Gtk::PrintOperation::begin-print handler, and set the number of pages
   * from there, like in the following example:
   *
   * @code
   * // Signal handler for the Gtk::PrintOperation::begin-print signal
   * // Extended with sigc::bind().
   *
   * static void
   * begin_print (Glib::RefPtr< Gtk::PrintOperation > operation,
   *              Glib::RefPtr< Gtk::PrintContext > context,
   *              Glib::RefPtr< Gsv::PrintCompositor > compositor)
   * {
   *   while (!compositor->paginate(context));
   *
   *   int n_pages = compositor->get_n_pages();
   *   operation->set_n_pages(n_pages);
   * }
   * @endcode
   *
   * @param context The Gtk::PrintContext whose parameters (e.g. paper size,
   * print margins, etc.) are used by the the compositor to paginate the
   * document.
   *
   * @return @c true if the document has been completely paginated, @c false
   * otherwise.
   *
   * @newin{2,10}
   */
  bool paginate(const Glib::RefPtr<Gtk::PrintContext>& context);

  
  /** Return value: a fraction from 0.0 to 1.0 inclusive
   * @return A fraction from 0.0 to 1.0 inclusive
   *
   * @newin{2,10}
   */
  double get_pagination_process();

  
  /** Draw page @a page_nr for printing on the the Cairo context encapsuled in @a context.
   *
   * This method has been designed to be called in the handler of the Gtk::PrintOperation::draw_page signal
   * as shown in the following example:
   *
   * @code
   * // Signal handler for the Gtk::PrintOperation::draw_page signal.
   * // Extended with sigc::bind().
   *
   * static void
   * draw_page (Glib::RefPtr< Gtk::PrintOperation > operation,
   *            Glib::RefPtr< GtkPrintContext > context,
   *            int page_nr,
   *            Glib::RefPtr< Gsv::PrintCompositor > compositor)
   * {
   *   compositor->draw_page(context, page_nr);
   * }
   * @endcode
   *
   * @param context The Gtk::PrintContext encapsulating the context information
   * that is required when drawing the page for printing.
   * @param page_nr The number of the page to print.
   *
   * newin{2,10}
   */
  void draw_page(const Glib::RefPtr<Gtk::PrintContext>& context, int page_nr);


  /** Name of the font to use for the text body (e.g. 'Monospace 10').
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_body_font_name() ;

/** Name of the font to use for the text body (e.g. 'Monospace 10').
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_body_font_name() const;

  /** The GtkSourceBuffer object to print.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Buffer> > property_buffer() const;


  /** Name of the font to use for the page footer (e.g. 'Monospace 10').
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_footer_font_name() ;

/** Name of the font to use for the page footer (e.g. 'Monospace 10').
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_footer_font_name() const;

  /** Name of the font to use for the page header (e.g. 'Monospace 10').
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_header_font_name() ;

/** Name of the font to use for the page header (e.g. 'Monospace 10').
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_header_font_name() const;

  /** Whether to print the document with highlighted syntax.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_highlight_syntax() ;

/** Whether to print the document with highlighted syntax.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_highlight_syntax() const;

  /** Name of the font to use for the line numbers (e.g. 'Monospace 10').
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Glib::ustring > property_line_numbers_font_name() ;

/** Name of the font to use for the line numbers (e.g. 'Monospace 10').
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::ustring > property_line_numbers_font_name() const;

  /** The number of pages in the document (-1 means the document has not been completely paginated).
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_n_pages() const;


  /** Whether to print a footer in each page.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_print_footer() ;

/** Whether to print a footer in each page.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_print_footer() const;

  /** Whether to print a header in each page.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_print_header() ;

/** Whether to print a header in each page.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_print_header() const;

  /** Interval of printed line numbers (0 means no numbers).
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< guint > property_print_line_numbers() ;

/** Interval of printed line numbers (0 means no numbers).
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< guint > property_print_line_numbers() const;

  /** Width of a tab character expressed in spaces.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< guint > property_tab_width() ;

/** Width of a tab character expressed in spaces.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< guint > property_tab_width() const;

  /** Whether to wrap lines never, at word boundaries, or at character boundaries.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< Gtk::WrapMode > property_wrap_mode() ;

/** Whether to wrap lines never, at word boundaries, or at character boundaries.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Gtk::WrapMode > property_wrap_mode() const;


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
   * @relates Gsv::PrintCompositor
   */
  Glib::RefPtr<Gsv::PrintCompositor> wrap(GtkSourcePrintCompositor* object, bool take_copy = false);
}


#endif /* _GTKSOURCEVIEWMM_PRINTCOMPOSITOR_H */


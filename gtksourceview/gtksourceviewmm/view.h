// -*- c++ -*-
// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!
#ifndef _GTKSOURCEVIEWMM_VIEW_H
#define _GTKSOURCEVIEWMM_VIEW_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* view.h
 *
 * Copyright (C) 2004-2005 Jae Jang
 * Copyright (C) 2005-2006 Rob Page
 * Copyright (C) 2005-2006 Dodji Seketeli
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

#include <gtkmm/textview.h>
#include <gtksourceviewmm/buffer.h>
#include <gtksourceviewmm/gutter.h>
#include <gtksourceviewmm/completion.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkSourceView GtkSourceView;
typedef struct _GtkSourceViewClass GtkSourceViewClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gsv
{ class View_Class; } // namespace Gsv
#endif //DOXYGEN_SHOULD_SKIP_THIS

namespace Gsv
{

class Completion;
class Gutter;
class MarkAttributes;

/** @addtogroup gtksourceviewmmEnums gtksourceviewmm Enums and Flags */

/**  Defines a behaviour of smart Home/End keys.
 *
 * @ingroup gtksourceviewmmEnums
 */
enum SmartHomeEndType
{
  SMART_HOME_END_DISABLED,
  SMART_HOME_END_BEFORE,
  SMART_HOME_END_AFTER,
  SMART_HOME_END_ALWAYS
};

} // namespace Gsv


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gsv::SmartHomeEndType> : public Glib::Value_Enum<Gsv::SmartHomeEndType>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gsv
{

/** @var SmartHomeEndType SMART_HOME_END_DISABLED
 * Smart-home-end disabled.
 */
/** @var SmartHomeEndType SMART_HOME_END_BEFORE
 * Move to the first/last non-whitespace character on the first press of the
 * HOME/END keys and to the beginning/end of the line on the second press.
 */
/** @var SmartHomeEndType SMART_HOME_END_AFTER
 * Move to the beginning/end of the line on the first press of the HOME/END keys
 * and to the first/last non-whitespace character on the second press.
 */
/** @var SmartHomeEndType SMART_HOME_END_ALWAYS
 * Always move to the first/last non-whitespace character when the HOME/END keys
 * are pressed.
 */

/**  Determines what kind of whitespaces whould be drawn.
 *
 * @ingroup gtksourceviewmmEnums
 * @par Bitwise operators:
 * <tt>%DrawSpacesFlags operator|(DrawSpacesFlags, DrawSpacesFlags)</tt><br>
 * <tt>%DrawSpacesFlags operator&(DrawSpacesFlags, DrawSpacesFlags)</tt><br>
 * <tt>%DrawSpacesFlags operator^(DrawSpacesFlags, DrawSpacesFlags)</tt><br>
 * <tt>%DrawSpacesFlags operator~(DrawSpacesFlags)</tt><br>
 * <tt>%DrawSpacesFlags& operator|=(DrawSpacesFlags&, DrawSpacesFlags)</tt><br>
 * <tt>%DrawSpacesFlags& operator&=(DrawSpacesFlags&, DrawSpacesFlags)</tt><br>
 * <tt>%DrawSpacesFlags& operator^=(DrawSpacesFlags&, DrawSpacesFlags)</tt><br>
 */
enum DrawSpacesFlags
{
  DRAW_SPACES_SPACE = 1 << 0,
  DRAW_SPACES_TAB = 1 << 1,
  DRAW_SPACES_NEWLINE = 1 << 2,
  DRAW_SPACES_NBSP = 1 << 3,
  DRAW_SPACES_LEADING = 1 << 4,
  DRAW_SPACES_TEXT = 1 << 5,
  DRAW_SPACES_TRAILING = 1 << 6,
  DRAW_SPACES_ALL = 0x7F
};

/** @ingroup gtksourceviewmmEnums */
inline DrawSpacesFlags operator|(DrawSpacesFlags lhs, DrawSpacesFlags rhs)
  { return static_cast<DrawSpacesFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs)); }

/** @ingroup gtksourceviewmmEnums */
inline DrawSpacesFlags operator&(DrawSpacesFlags lhs, DrawSpacesFlags rhs)
  { return static_cast<DrawSpacesFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs)); }

/** @ingroup gtksourceviewmmEnums */
inline DrawSpacesFlags operator^(DrawSpacesFlags lhs, DrawSpacesFlags rhs)
  { return static_cast<DrawSpacesFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs)); }

/** @ingroup gtksourceviewmmEnums */
inline DrawSpacesFlags operator~(DrawSpacesFlags flags)
  { return static_cast<DrawSpacesFlags>(~static_cast<unsigned>(flags)); }

/** @ingroup gtksourceviewmmEnums */
inline DrawSpacesFlags& operator|=(DrawSpacesFlags& lhs, DrawSpacesFlags rhs)
  { return (lhs = static_cast<DrawSpacesFlags>(static_cast<unsigned>(lhs) | static_cast<unsigned>(rhs))); }

/** @ingroup gtksourceviewmmEnums */
inline DrawSpacesFlags& operator&=(DrawSpacesFlags& lhs, DrawSpacesFlags rhs)
  { return (lhs = static_cast<DrawSpacesFlags>(static_cast<unsigned>(lhs) & static_cast<unsigned>(rhs))); }

/** @ingroup gtksourceviewmmEnums */
inline DrawSpacesFlags& operator^=(DrawSpacesFlags& lhs, DrawSpacesFlags rhs)
  { return (lhs = static_cast<DrawSpacesFlags>(static_cast<unsigned>(lhs) ^ static_cast<unsigned>(rhs))); }

} // namespace Gsv


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Glib
{

template <>
class Value<Gsv::DrawSpacesFlags> : public Glib::Value_Flags<Gsv::DrawSpacesFlags>
{
public:
  static GType value_type() G_GNUC_CONST;
};

} // namespace Glib
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


namespace Gsv
{

/** @var DrawSpacesFlags DRAW_SPACES_SPACE
 * Whether the space character should be drawn.
 */
/** @var DrawSpacesFlags DRAW_SPACES_TAB
 * Whether the tab character should be drawn.
 */
/** @var DrawSpacesFlags DRAW_SPACES_NEWLINE
 * Whether the line breaks should be drawn.
 */
/** @var DrawSpacesFlags DRAW_SPACES_NBSP
 * Whether the non-breaking whitespaces should be drawn.
 */
/** @var DrawSpacesFlags DRAW_SPACES_ALL
 * Whether all kind of whitespaces should be drawn.
 */

/** The view object.
 *
 * View is the main object of the gtksourceviewmm library. It provides
 * a text view which has syntax highlighting, undo/redo and text marks. Use a
 * Buffer to display text with a GtkSourceView.
 */

class View : public Gtk::TextView
{
  public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef View CppObjectType;
  typedef View_Class CppClassType;
  typedef GtkSourceView BaseObjectType;
  typedef GtkSourceViewClass BaseClassType;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  View(View&& src) noexcept;
  View& operator=(View&& src) noexcept;

  // noncopyable
  View(const View&) = delete;
  View& operator=(const View&) = delete;

  virtual ~View() noexcept;

#ifndef DOXYGEN_SHOULD_SKIP_THIS

private:
  friend class View_Class;
  static CppClassType view_class_;

protected:
  explicit View(const Glib::ConstructParams& construct_params);
  explicit View(GtkSourceView* castitem);

#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS


  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GtkObject.
  GtkSourceView*       gobj()       { return reinterpret_cast<GtkSourceView*>(gobject_); }

  ///Provides access to the underlying C GtkObject.
  const GtkSourceView* gobj() const { return reinterpret_cast<GtkSourceView*>(gobject_); }


public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  /// This is a default handler for the signal signal_redo().
  virtual void on_redo();
  /// This is a default handler for the signal signal_undo().
  virtual void on_undo();
  /// This is a default handler for the signal signal_line_mark_activated().
  virtual void on_line_mark_activated(Gtk::TextIter& mark, GdkEvent* event);


private:


public:
  /// The gutter position of the lines renderer.
  static const int gutter_position_lines = -30;
  /// The gutter position of the marks renderer.
  static const int gutter_position_marks = -20;

  /** Creates a new View.
   *
   * An empty default buffer will be created for you. If you want to specify
   * your own buffer, consider the other constructor.
   *
   * @return A new View.
   */
  explicit View () ;

  /** Creates a new View widget displaying the buffer @a buffer.
   *
   * One buffer can be shared among many widgets.
   *
   * @param buffer A Buffer.
   *
   * @return: A new View.
   **/
  explicit View (const Glib::RefPtr<Buffer> &buffer) ;

  /** Returns the GtkTextBuffer being displayed by this text view.
   *
   * @return A Buffer.
   */
  Glib::RefPtr<const Buffer> get_source_buffer () const ;

  /** Returns the GtkTextBuffer being displayed by this text view.
   *
   * @return A Buffer.
   */
  Glib::RefPtr<Buffer> get_source_buffer () ;

  /** Sets a source_buffer as the buffer being displayed by source view.
   *
   * The previous buffer displayed by the text view is unreferenced, and a
   * reference is added to buffer.
   *
   * @param source_buffer A Buffer.
   */
  void set_source_buffer (const Glib::RefPtr<Buffer> &source_buffer) ;

  
  /** If <tt>true</tt> line numbers will be displayed beside the text.
   * 
   * @param show Whether line numbers should be displayed.
   */
  void set_show_line_numbers(bool show = true);

  
  /** Returns whether line numbers are displayed beside the text.
   *
   * @return @c true if the line numbers are displayed.
   */
  bool get_show_line_numbers() const;

  
  /** Sets the width of tabulation in characters.
   * 
   * @param width Width of tab in characters.
   */
  void set_tab_width(guint width);

  
  /** Returns the width of tabulation in characters.
   *
   * @return Width of tab.
   */
  guint get_tab_width() const;

  
  /** If <tt>true</tt> auto indentation of text is enabled.
   * 
   * @param enable Whether to enable auto indentation.
   */
  void set_auto_indent(bool enable = true);

  
  /** Returns whether auto indentation of text is enabled.
   *
   * @return @c true if auto indentation is enabled.
   */
  bool get_auto_indent() const;

  
  /** If <tt>true</tt> any tabulator character inserted is replaced by a group
   * of space characters.
   * 
   * @param enable Whether to insert spaces instead of tabs.
   */
  void set_insert_spaces_instead_of_tabs(bool enable = true);

  
  /** Returns whether when inserting a tabulator character it should
   *  be replaced by a group of space characters.
   *
   * @return @c true if spaces are inserted instead of tabs.
   */
  bool get_insert_spaces_instead_of_tabs() const;

  
  /** If <tt>true</tt> a right margin is displayed.
   * 
   * @param show Whether to show a right margin.
   */
  void set_show_right_margin(bool show =  true);

  
  /** Returns whether a right margin is displayed.
   *
   * @return @c true if the right margin is shown.
   */
  bool get_show_right_margin() const;

  
  /** If @a highlight is @c true the current line is highlighted.
   *
   * @param highlight Whether to highlight the current line.
   */
  void set_highlight_current_line(bool highlight =  true);

  
  /** Returns whether the current line is highlighted.
   *
   * @return @c true if the current line is highlighted.
   */
  bool get_highlight_current_line() const;

  
  /** Sets the position of the right margin.
   *
   * @param margin The width in characters where to position the right margin.
   */
  void set_right_margin_position(guint margin);

  
  /** Gets the position of the right margin.
   *
   * @return The position of the right margin.
   */
  guint get_right_margin_position() const;

  
  /** Set the desired movement of the cursor when HOME and END keys are pressed.
   *
   * @param smart_he The desired behavior among SmartHomeEndType.
   */
  void set_smart_home_end(SmartHomeEndType smart_he);

  
  /** Returns a SmartHomeEndType end value specifying how the cursor will
   *  move when HOME and END keys are pressed.
   *
   * @return A SmartHomeEndType value.
   */
  SmartHomeEndType get_smart_home_end() const;

  
  /** If @c true line marks will be displayed beside the text.
   *
   * @param show Whether line marks should be displayed.
   *
   * @newin{2,2}
   */
  void set_show_line_marks(bool show =  true);

  
  /** Returns whether line marks are displayed beside the text.
   *
   * @return @c true if the line marks are displayed.
   *
   * @newin{2,2}
   */
  bool get_show_line_marks() const;

  
  /** If @c true, when the tab key is pressed and there is a selection, the
   *  selected text is indented of one level instead of being replaced with
   *  the @\t characters. Shift+Tab unindents the selection.
   *
   * @param enable Whether to indent a block when tab is pressed.
   *
   * @newin{2,2}
   */
  void set_indent_on_tab(bool enable =  true);

  
  /** Returns whether when the tab key is pressed the current selection
   *  should get indented instead of replaced with the @\t character.
   *
   * @return @c true if the selection is indented when tab is pressed.
   *
   * @newin{2,2}
   */
  bool get_indent_on_tab() const;

  
  /** Sets the number of spaces to use for each step of indent.
   *
   * If @a width is -1, the value of the View::property_tab_width property
   * will be used.
   *
   * @param width Indent width in characters.
   */
  void set_indent_width(gint width);

  
  /** Returns the number of spaces to use for each step of indent.
   *
   * See set_indent_width() for details.
   *
   * @return Indent width.
   */
  gint get_indent_width() const;

  
  /** Set if and how the spaces should be visualized.
   *
   * Specifying @a flags as 0 will disable display of spaces.
   *
   * @param flags DrawSpacesFlags specifing how white spaces should be
   * displayed.
   */
  void set_draw_spaces(DrawSpacesFlags flags =  DRAW_SPACES_ALL);

  
  /** Returns the DrawSpacesFlags specifying if and how spaces should be
   *  displayed.
   *
   * @return The DrawSpacesFlags, 0 if no spaces should be drawn.
   */
  DrawSpacesFlags get_draw_spaces() const;

 
  /** Determines the visual column at @a iter taking into consideration the indent
   *  width of @a view.
   *
   * @param iter: a position in this view.
   *
   * @return the visual column at @a iter.
   *
   * @newin{3,0}
   */
  guint get_visual_column(const Gtk::TextIter& iter) const;

  
  /** Returns the Gutter object associated with @a window_type for this
   *  view.
   *
   * Only Gtk::TEXT_WINDOW_LEFT and Gtk::TEXT_WINDOW_RIGHT are supported,
   * respectively corresponding to the left and right gutter. The line numbers
   * and mark category icons are rendered in the gutter corresponding to
   * Gtk::TEXT_WINDOW_LEFT.
   *
   * @param window_type The gutter window type
   *
   * @return The Gutter.
   *
   * @newin{2,10}
   *
   */
  Glib::RefPtr<Gutter> get_gutter(Gtk::TextWindowType window_type);

  
  /** Returns the Gutter object associated with @a window_type for this
   *  view.
   *
   * Only Gtk::TEXT_WINDOW_LEFT and Gtk::TEXT_WINDOW_RIGHT are supported,
   * respectively corresponding to the left and right gutter. The line numbers
   * and mark category icons are rendered in the gutter corresponding to
   * Gtk::TEXT_WINDOW_LEFT.
   *
   * @param window_type The gutter window type
   *
   * @return The Gutter.
   *
   * @newin{2,10}
   *
   */
  Glib::RefPtr<const Gutter> get_gutter(Gtk::TextWindowType window_type) const;

  
  /** Gets the Completion associated with this view.
   *
   * @return The Completion associated with this view.
   *
   * @newin{2,10}
   */
  Glib::RefPtr<Completion> get_completion();

  
  /** Gets the Completion associated with this view.
   *
   * @return The Completion associated with this view.
   *
   * @newin{2,10}
   */
  Glib::RefPtr<const Completion> get_completion() const;

  
  /** Sets attributes and priority for the @a category.
   * 
   * @param category The category.
   * @param attributes Mark attributes.
   * @param priority Priority of the category.
   */
  void set_mark_attributes(const Glib::ustring& category, const Glib::RefPtr<MarkAttributes>& attributes, int priority);

  
  /** Gets attributes and priority for the @a category.
   * 
   * @param category The category.
   * @param priority Place where priority of the category will be stored.
   * @return Gtk::SourceMarkAttributes for the @a category.
   * The object belongs to @a view, so it must not be unreffed.
   */
  Glib::RefPtr<MarkAttributes> get_mark_attributes(const Glib::ustring& category, int& priority);

  
  /** Gets attributes and priority for the @a category.
   * 
   * @param category The category.
   * @param priority Place where priority of the category will be stored.
   * @return Gtk::SourceMarkAttributes for the @a category.
   * The object belongs to @a view, so it must not be unreffed.
   */
  Glib::RefPtr<const MarkAttributes> get_mark_attributes(const Glib::ustring& category, int& priority) const;

  
  /** Emitted when redo action is requested.
   *
   * @par Slot Prototype:
   * <tt>void on_my_%redo()</tt>
   *
   */

  Glib::SignalProxy0< void > signal_redo();


  /** Emitted when undo action is requested.
   *
   * @par Slot Prototype:
   * <tt>void on_my_%undo()</tt>
   *
   */

  Glib::SignalProxy0< void > signal_undo();


  /** Emitted when a line mark has been activated (for instance when there
   *  was a button press in the line marks gutter).
   *
   * You can use @a iter to determine on which line the activation took place.
   *
   * @par Handler parameters:
   * iter A Gtk::TextIter.
   * event The GdkEvent that activated the event.
   *
   * @par Slot Prototype:
   * <tt>void on_my_%line_mark_activated(Gtk::TextIter& mark, GdkEvent* event)</tt>
   *
   */

  Glib::SignalProxy2< void,Gtk::TextIter&,GdkEvent* > signal_line_mark_activated();


  /** Emitted when a the cursor was moved according to the smart home end setting.
   *
   * The signal is emitted after the cursor is moved, but during the
   * Gtk::TextView::move-cursor action. This can be used to find out whether the
   * cursor was moved by a normal home/end or by a smart home/end.
   *
   * @par Handler parameters:
   * iter A Gtk::TextIter
   * count The count
   *
   * @newin{3,0}
   *
   * @par Slot Prototype:
   * <tt>void on_my_%smart_home_end(Gtk::TextIter& iter, int count)</tt>
   *
   */

  Glib::SignalProxy2< void,Gtk::TextIter&,int > signal_smart_home_end();


  // these are keybinding signals, so we ignore them.
  
  
  /** Whether to display line numbers.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_show_line_numbers() ;

/** Whether to display line numbers.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_show_line_numbers() const;


  /** Whether to display line mark pixbufs.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_show_line_marks() ;

/** Whether to display line mark pixbufs.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_show_line_marks() const;


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


  /** Number of spaces to use for each step of indent.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< int > property_indent_width() ;

/** Number of spaces to use for each step of indent.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< int > property_indent_width() const;


  /** Whether to enable auto indentation.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_auto_indent() ;

/** Whether to enable auto indentation.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_auto_indent() const;


  /** Whether to insert spaces instead of tabs.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_insert_spaces_instead_of_tabs() ;

/** Whether to insert spaces instead of tabs.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_insert_spaces_instead_of_tabs() const;


  /** Whether to display the right margin.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_show_right_margin() ;

/** Whether to display the right margin.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_show_right_margin() const;


  /** Position of the right margin.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< guint > property_right_margin_position() ;

/** Position of the right margin.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< guint > property_right_margin_position() const;


  /** HOME and END keys move to first/last non whitespace characters on line before going to the start/end of the line.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< SmartHomeEndType > property_smart_home_end() ;

/** HOME and END keys move to first/last non whitespace characters on line before going to the start/end of the line.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< SmartHomeEndType > property_smart_home_end() const;


  /** Whether to highlight the current line.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_highlight_current_line() ;

/** Whether to highlight the current line.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_highlight_current_line() const;


  /** Whether to indent the selected text when the tab key is pressed.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< bool > property_indent_on_tab() ;

/** Whether to indent the selected text when the tab key is pressed.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< bool > property_indent_on_tab() const;


  /** Set if and how the spaces should be visualized.
   *
   * @return A PropertyProxy that allows you to get or set the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy< DrawSpacesFlags > property_draw_spaces() ;

/** Set if and how the spaces should be visualized.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< DrawSpacesFlags > property_draw_spaces() const;


  /** The completion object associated with the view.
   *
   * @return A PropertyProxy_ReadOnly that allows you to get the value of the property,
   * or receive notification when the value of the property changes.
   */
  Glib::PropertyProxy_ReadOnly< Glib::RefPtr<Completion> > property_completion() const;


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
   * @relates Gsv::View
   */
  Gsv::View* wrap(GtkSourceView* object, bool take_copy = false);
} //namespace Glib


#endif /* _GTKSOURCEVIEWMM_VIEW_H */


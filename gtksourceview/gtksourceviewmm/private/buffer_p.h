// -*- c++ -*-
// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!
#ifndef _GTKSOURCEVIEWMM_BUFFER_P_H
#define _GTKSOURCEVIEWMM_BUFFER_P_H


#include <gtkmm/private/textbuffer_p.h>
#include <gtksourceview/gtksourceview-typebuiltins.h>

#include <glibmm/class.h>

namespace Gsv
{

class Buffer_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Buffer CppObjectType;
  typedef GtkSourceBuffer BaseObjectType;
  typedef GtkSourceBufferClass BaseClassType;
  typedef Gtk::TextBuffer_Class CppClassParent;
  typedef GtkTextBufferClass BaseClassParent;

  friend class Buffer;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.
  static void undo_callback(GtkSourceBuffer* self);
  static void redo_callback(GtkSourceBuffer* self);
  static void bracket_matched_callback(GtkSourceBuffer* self, GtkTextIter* p0, GtkSourceBracketMatchType p1);

  //Callbacks (virtual functions):
};


} // namespace Gsv


#endif /* _GTKSOURCEVIEWMM_BUFFER_P_H */

// -*- c++ -*-
// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!
#ifndef _GTKSOURCEVIEWMM_MARK_P_H
#define _GTKSOURCEVIEWMM_MARK_P_H


#include <gtkmm/private/textmark_p.h>

#include <glibmm/class.h>

namespace Gsv
{

class Mark_Class : public Glib::Class
{
public:
#ifndef DOXYGEN_SHOULD_SKIP_THIS
  typedef Mark CppObjectType;
  typedef GtkSourceMark BaseObjectType;
  typedef GtkSourceMarkClass BaseClassType;
  typedef Gtk::TextMark_Class CppClassParent;
  typedef GtkTextMarkClass BaseClassParent;

  friend class Mark;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

  const Glib::Class& init();


  static void class_init_function(void* g_class, void* class_data);

  static Glib::ObjectBase* wrap_new(GObject*);

protected:

  //Callbacks (default signal handlers):
  //These will call the *_impl member methods, which will then call the existing default signal callbacks, if any.
  //You could prevent the original default signal handlers being called by overriding the *_impl method.

  //Callbacks (virtual functions):
};


} // namespace Gsv


#endif /* _GTKSOURCEVIEWMM_MARK_P_H */

// -*- c++ -*-
// Generated by gmmproc 2.46.1 -- DO NOT MODIFY!
#ifndef _GTKSOURCEVIEWMM_UNDOMANAGER_H
#define _GTKSOURCEVIEWMM_UNDOMANAGER_H


#include <glibmm/ustring.h>
#include <sigc++/sigc++.h>

/* undomanager.h
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

#include <glibmm/interface.h>
#include <glibmm/ustring.h>
#include <gdkmm/pixbuf.h>
#include <gtksourceview/gtksourceundomanager.h>


#ifndef DOXYGEN_SHOULD_SKIP_THIS
typedef struct _GtkSourceUndoManager GtkSourceUndoManager;
typedef struct _GtkSourceUndoManagerClass GtkSourceUndoManagerClass;
#endif /* DOXYGEN_SHOULD_SKIP_THIS */


#ifndef DOXYGEN_SHOULD_SKIP_THIS
namespace Gsv
{ class UndoManager_Class; } // namespace Gsv
#endif // DOXYGEN_SHOULD_SKIP_THIS

namespace Gsv
{

/** Undo manager interface for View.
 *
 * The UndoManager interface can be implemented to provide custom
 * undo management to a Buffer. Use
 * Buffer::set_undo_manager() to install a custom undo manager for
 * a particular source buffer.
 *
 * Use UndoManager::can_undo_changed() and
 * UndoManager::can_redo_changed() when respectively the undo state
 * or redo state of the undo stack has changed.
 *
 * @newin{2,10}
 */

class UndoManager : public Glib::Interface
{
  
#ifndef DOXYGEN_SHOULD_SKIP_THIS

public:
  typedef UndoManager CppObjectType;
  typedef UndoManager_Class CppClassType;
  typedef GtkSourceUndoManager BaseObjectType;
  typedef GtkSourceUndoManagerIface BaseClassType;

  // noncopyable
  UndoManager(const UndoManager&) = delete;
  UndoManager& operator=(const UndoManager&) = delete;

private:
  friend class UndoManager_Class;
  static CppClassType undomanager_class_;

#endif /* DOXYGEN_SHOULD_SKIP_THIS */
protected:
  /**
   * You should derive from this class to use it.
   */
  UndoManager();

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  /** Called by constructors of derived classes. Provide the result of 
   * the Class init() function to ensure that it is properly 
   * initialized.
   * 
   * @param interface_class The Class object for the derived type.
   */
  explicit UndoManager(const Glib::Interface_Class& interface_class);

public:
  // This is public so that C++ wrapper instances can be
  // created for C instances of unwrapped types.
  // For instance, if an unexpected C type implements the C interface. 
  explicit UndoManager(GtkSourceUndoManager* castitem);

protected:
#endif /* DOXYGEN_SHOULD_SKIP_THIS */

public:

  UndoManager(UndoManager&& src) noexcept;
  UndoManager& operator=(UndoManager&& src) noexcept;

  virtual ~UndoManager() noexcept;

  static void add_interface(GType gtype_implementer);

  /** Get the GType for this class, for use with the underlying GObject type system.
   */
  static GType get_type()      G_GNUC_CONST;

#ifndef DOXYGEN_SHOULD_SKIP_THIS
  static GType get_base_type() G_GNUC_CONST;
#endif

  ///Provides access to the underlying C GObject.
  GtkSourceUndoManager*       gobj()       { return reinterpret_cast<GtkSourceUndoManager*>(gobject_); }

  ///Provides access to the underlying C GObject.
  const GtkSourceUndoManager* gobj() const { return reinterpret_cast<GtkSourceUndoManager*>(gobject_); }

private:


public:

  
  /** Get whether there are undo operations available.
   *
   * @return @c true if there are undo operations available, @c false otherwise.
   *
   * @newin{2,10}
   */
  bool can_undo() const;

  
  /** Get whether there are redo operations available.
   *
   * @return @c true if there are redo operations available, @c false otherwise.
   *
   * @newin{2,10}
   */
  bool can_redo() const;

  
  /** Perform a single undo. Calling this function when there are no undo
   * operations available is an error. Use can_undo() to find out if there are
   * undo operations available.
   *
   * @newin{2,10}
   */
  void undo();

  
  /** Perform a single redo. Calling this function when there are no redo
   * operations available is an error. Use can_redo() to find out if there are
   * redo operations available.
   *
   * @newin{2,10}
   */
  void redo();

  
  /** Begin a not undoable action on the buffer. All changes between this call
   * and the call to end_not_undoable_action() cannot be undone. This function
   * should be re-entrant.
   *
   * @newin{2,10}
   */
  void begin_not_undoable_action();

  
  /** Ends a not undoable action on the buffer.
   *
   * @newin{2,10}
   */
  void end_not_undoable_action();

  
  /** Emits the 'can-undo-changed' signal.
   *
   * @newin{2,10}
   */
  void can_undo_changed();

  
  /** Emits the 'can-redo-changed' signal.
   *
   * @newin{2,10}
   */
  void can_redo_changed();

  // TODO: should these signals be wrapped? They are marked as action ones. krnowak
  
  /** Emitted when the ability to undo has changed.
   *
   * @par Slot Prototype:
   * <tt>void on_my_%can_undo_changed()</tt>
   *
   */

  Glib::SignalProxy0< void > signal_can_undo_changed();


  /** Emitted when the ability to redo has changed.
   *
   * @par Slot Prototype:
   * <tt>void on_my_%can_redo_changed()</tt>
   *
   */

  Glib::SignalProxy0< void > signal_can_redo_changed();


private:

    virtual bool can_undo_vfunc() const;


    virtual bool can_redo_vfunc() const;


    virtual void undo_vfunc();


    virtual void redo_vfunc();


    virtual void begin_not_undoable_action_vfunc();


    virtual void end_not_undoable_action_vfunc();


public:

public:
  //C++ methods used to invoke GTK+ virtual functions:

protected:
  //GTK+ Virtual Functions (override these to change behaviour):

  //Default Signal Handlers::
  /// This is a default handler for the signal signal_can_undo_changed().
  virtual void on_can_undo_changed();
  /// This is a default handler for the signal signal_can_redo_changed().
  virtual void on_can_redo_changed();


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
   * @relates Gsv::UndoManager
   */
  Glib::RefPtr<Gsv::UndoManager> wrap(GtkSourceUndoManager* object, bool take_copy = false);

} // namespace Glib


#endif /* _GTKSOURCEVIEWMM_UNDOMANAGER_H */

/*
 * Copyright (c) 2009, 2018, Oracle and/or its affiliates. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, version 2.0,
 * as published by the Free Software Foundation.
 *
 * This program is also distributed with certain software (including
 * but not limited to OpenSSL) that is licensed under separate terms, as
 * designated in a particular file or component or in included license
 * documentation.  The authors of MySQL hereby grant you an additional
 * permission to link the program and your derivative works with the
 * separately licensed software that they have included with MySQL.
 * This program is distributed in the hope that it will be useful,  but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See
 * the GNU General Public License, version 2.0, for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA 
 */

#ifndef __WB_MYSQL_TABLE_EDITOR_OPT_PAGE_H__
#define __WB_MYSQL_TABLE_EDITOR_OPT_PAGE_H__

#include "grt/tree_model.h"
#include <gtkmm/builder.h>

class MySQLTableEditorBE;
class DbMySQLTableEditor;

//==============================================================================
//
//==============================================================================
class DbMySQLTableEditorOptPage {
public:
  DbMySQLTableEditorOptPage(DbMySQLTableEditor* owner, MySQLTableEditorBE* be, Glib::RefPtr<Gtk::Builder> xml);

  void refresh();

  void switch_be(MySQLTableEditorBE* be);

private:
  void set_table_option(const std::string& value, const char* option);
  void set_toggled_table_option(const char* option);

  void set_pack_keys();
  void set_row_format();
  void set_key_block_size();
  void set_merge_method();

  DbMySQLTableEditor* _owner;
  MySQLTableEditorBE* _be;
  Glib::RefPtr<Gtk::Builder> _xml;

  bool _refreshing;
};

#endif

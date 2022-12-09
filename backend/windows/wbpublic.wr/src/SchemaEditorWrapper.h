/*
 * Copyright (c) 2008, 2019, Oracle and/or its affiliates. All rights reserved.
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

#ifndef _SCHEMA_EDITOR_WRAPPER_H_
#define _SCHEMA_EDITOR_WRAPPER_H_

#include "grtdb/editor_schema.h"
#include "DBObjectEditorWrapper.h"

namespace MySQL {
  namespace Grt {
    namespace Db {

    public
      ref class SchemaEditorWrapper : public DBObjectEditorWrapper {
      protected:
        SchemaEditorWrapper(::bec::SchemaEditorBE *inn);

      public:
        ::bec::SchemaEditorBE *get_unmanaged_object();
        void set_schema_option_by_name(System::String ^ name, System::String ^ value);
        String ^ get_schema_option_by_name(String ^ name);
      };

    } // namespace Db
  }   // namespace Grt
} // namespace MySQL

#endif // _SCHEMA_EDITOR_WRAPPER_H_
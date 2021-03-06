/* <stig/synth/thatable_expr.h>

   TODO

   Copyright 2010-2014 Stig LLC

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License. */

#pragma once

#include <cassert>

#include <base/no_copy_semantics.h>
#include <stig/expr/thatable.h>
#include <stig/stig.package.cst.h>
#include <stig/synth/expr.h>

namespace Stig {

  namespace Synth {

    /* NOTE: We have some expressions that can hold special exprs such as 'start', 'that', 'lhs', 'rhs'
             reduce can hold 'start' and 'that', assert, filter and effecting blocks can hold 'that', and sort can hold 'lhs' and 'rhs'.
             These special exprs all live somewhere in the rhs expr, and they need to point back to the nearest compatible expr that holds them.
             The outer expr gets built before rhs expr so that when the special expr gets built,
             we have a outer expr symbol ready for it to point to. */

    /* TODO */
    class TExprFactory;

    /* TODO */
    class TThatableExpr
        : virtual public TExpr {
      NO_COPY_SEMANTICS(TThatableExpr);
      public:

      /* TODO */
      TThatableExpr() = default;

      virtual ~TThatableExpr() = default;

      /* TODO */
      virtual Expr::TThatable::TPtr GetThatableSymbol() const = 0;

    };  // TThatableExpr

  }  // Synth

}  // Stig

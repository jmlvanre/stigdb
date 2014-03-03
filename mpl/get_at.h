/* <mpl/get_at.h> 

   TODO

   Copyright 2010-2014 Tagged
   
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

#include <mpl/type_list.h>

namespace Mpl {

  /* GetAt. */
  template <std::size_t Idx, typename TElem, typename... TMoreElems>
  c14::identity<TElem> GetAtImpl(TTypeListRecur<Idx, TElem, TMoreElems...> &&);

  template <typename TList, std::size_t Idx>
  struct GetAt : public decltype(GetAtImpl<Idx>(std::declval<TList>())) {};

  template <typename TList, std::size_t Idx>
  using TGetAt = typename GetAt<TList, Idx>::type;

}  // Mpl

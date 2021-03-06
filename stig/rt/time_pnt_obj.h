/* <stig/rt/time_pnt_obj.h>

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

/* This file was auto-generated by the Stig compiler.

   We are using it because we needed to produce an object for TimePnt code-gen that was
   basically what Stig would code-gen for itself.  */

#pragma once

#include <cassert>

#include <base/chrono.h>
#include <stig/rt/containers.h>
#include <stig/rt/obj.h>
#include <stig/type/bool.h>
#include <stig/type/int.h>
#include <stig/type/obj.h>
#include <stig/var/impl.h>

namespace Stig {

  namespace Rt {

    namespace Objects {

      class TObjO8i3dayi4houri6minutei5monthi10nanosecondi6secondi10utc_offseti4year : public TObj {
        public:
        TObjO8i3dayi4houri6minutei5monthi10nanosecondi6secondi10utc_offseti4year() {}

	/* This is the only non-codegen part -- constructor so that we can use the TTimeDiffInfo class to
	   generate fields from a TimePnt value */
        TObjO8i3dayi4houri6minutei5monthi10nanosecondi6secondi10utc_offseti4year(const Base::Chrono::TTimePnt &in) {
	  Base::Chrono::TTimePntInfo time_pnt_obj(in);
	  Vday = time_pnt_obj.getDay();
	  Vhour = time_pnt_obj.getHour();
	  Vnanosecond = time_pnt_obj.getNanosecond();
	  Vminute = time_pnt_obj.getMinute();
	  Vmonth = time_pnt_obj.getMonth();
	  Vsecond = time_pnt_obj.getSecond();
	  Vutc_offset = time_pnt_obj.getUtcOffset();
	  Vyear = time_pnt_obj.getYear();
	}

        TObjO8i3dayi4houri6minutei5monthi10nanosecondi6secondi10utc_offseti4year(const TDynamicMembers &m) : Vday(Sabot::AsNative<int64_t>(*Sabot::State::TAny::TWrapper(m.at("day").GetState(alloca(Sabot::State::GetMaxStateSize()))))), Vhour(Sabot::AsNative<int64_t>(*Sabot::State::TAny::TWrapper(m.at("hour").GetState(alloca(Sabot::State::GetMaxStateSize()))))), Vminute(Sabot::AsNative<int64_t>(*Sabot::State::TAny::TWrapper(m.at("minute").GetState(alloca(Sabot::State::GetMaxStateSize()))))), Vmonth(Sabot::AsNative<int64_t>(*Sabot::State::TAny::TWrapper(m.at("month").GetState(alloca(Sabot::State::GetMaxStateSize()))))), Vnanosecond(Sabot::AsNative<int64_t>(*Sabot::State::TAny::TWrapper(m.at("nanosecond").GetState(alloca(Sabot::State::GetMaxStateSize()))))), Vsecond(Sabot::AsNative<int64_t>(*Sabot::State::TAny::TWrapper(m.at("second").GetState(alloca(Sabot::State::GetMaxStateSize()))))), Vutc_offset(Sabot::AsNative<int64_t>(*Sabot::State::TAny::TWrapper(m.at("utc_offset").GetState(alloca(Sabot::State::GetMaxStateSize()))))), Vyear(Sabot::AsNative<int64_t>(*Sabot::State::TAny::TWrapper(m.at("year").GetState(alloca(Sabot::State::GetMaxStateSize()))))) {}
        TObjO8i3dayi4houri6minutei5monthi10nanosecondi6secondi10utc_offseti4year(const int64_t &vvday, const int64_t &vvhour, const int64_t &vvminute, const int64_t &vvmonth, const int64_t &vvnanosecond, const int64_t &vvsecond, const int64_t &vvutc_offset, const int64_t &vvyear) : Vday(vvday), Vhour(vvhour), Vminute(vvminute), Vmonth(vvmonth), Vnanosecond(vvnanosecond), Vsecond(vvsecond), Vutc_offset(vvutc_offset), Vyear(vvyear) {}
        TObjO8i3dayi4houri6minutei5monthi10nanosecondi6secondi10utc_offseti4year(const TObjO8i3dayi4houri6minutei5monthi10nanosecondi6secondi10utc_offseti4year &that) : Vday(that.Vday), Vhour(that.Vhour), Vminute(that.Vminute), Vmonth(that.Vmonth), Vnanosecond(that.Vnanosecond), Vsecond(that.Vsecond), Vutc_offset(that.Vutc_offset), Vyear(that.Vyear) {}

        #if 0
        Var::TVar AsVar() const final {
          assert(this);
          return Var::TVar::Obj(TDynamicMembers{{ "day", Var::TVar(Vday)}, { "hour", Var::TVar(Vhour)}, { "minute", Var::TVar(Vminute)}, { "month", Var::TVar(Vmonth)}, { "nanosecond", Var::TVar(Vnanosecond)}, { "second", Var::TVar(Vsecond)}, { "utc_offset", Var::TVar(Vutc_offset)}, { "year", Var::TVar(Vyear)}});
        }
        #endif

        size_t GetHash() const {
          assert(this);
          return  std::hash<int64_t>()(Vday) ^ std::hash<int64_t>()(Vhour) ^ std::hash<int64_t>()(Vminute) ^ std::hash<int64_t>()(Vmonth) ^ std::hash<int64_t>()(Vnanosecond) ^ std::hash<int64_t>()(Vsecond) ^ std::hash<int64_t>()(Vutc_offset) ^ std::hash<int64_t>()(Vyear);
        }

        bool EqEq(const TObjO8i3dayi4houri6minutei5monthi10nanosecondi6secondi10utc_offseti4year &that) const {
          assert(this);
          assert(&that);
          return Rt::And(Rt::EqEq(Vday, that.Vday), Rt::And(Rt::EqEq(Vhour, that.Vhour), Rt::And(Rt::EqEq(Vminute, that.Vminute), Rt::And(Rt::EqEq(Vmonth, that.Vmonth), Rt::And(Rt::EqEq(Vnanosecond, that.Vnanosecond), Rt::And(Rt::EqEq(Vsecond, that.Vsecond), Rt::And(Rt::EqEq(Vutc_offset, that.Vutc_offset), Rt::And(Rt::EqEq(Vyear, that.Vyear), true))))))));
        }


        bool Match(const TObjO8i3dayi4houri6minutei5monthi10nanosecondi6secondi10utc_offseti4year &that) const {
          assert(this);
          assert(&that);
          return Rt::Match(Vday, that.Vday) && Rt::Match(Vhour, that.Vhour) && Rt::Match(Vminute, that.Vminute) && Rt::Match(Vmonth, that.Vmonth) && Rt::Match(Vnanosecond, that.Vnanosecond) && Rt::Match(Vsecond, that.Vsecond) && Rt::Match(Vutc_offset, that.Vutc_offset) && Rt::Match(Vyear, that.Vyear);
        }

        bool Neq(const TObjO8i3dayi4houri6minutei5monthi10nanosecondi6secondi10utc_offseti4year &that) const {
          assert(this);
          assert(&that);
          return Rt::Or(Rt::Neq(Vday, that.Vday), Rt::Or(Rt::Neq(Vhour, that.Vhour), Rt::Or(Rt::Neq(Vminute, that.Vminute), Rt::Or(Rt::Neq(Vmonth, that.Vmonth), Rt::Or(Rt::Neq(Vnanosecond, that.Vnanosecond), Rt::Or(Rt::Neq(Vsecond, that.Vsecond), Rt::Or(Rt::Neq(Vutc_offset, that.Vutc_offset), Rt::Or(Rt::Neq(Vyear, that.Vyear), false))))))));
        }

        int64_t GetVday() const {
          assert(this);
          return Vday;
        }
        int64_t GetVhour() const {
          assert(this);
          return Vhour;
        }
        int64_t GetVminute() const {
          assert(this);
          return Vminute;
        }
        int64_t GetVmonth() const {
          assert(this);
          return Vmonth;
        }
        int64_t GetVnanosecond() const {
          assert(this);
          return Vnanosecond;
        }
        int64_t GetVsecond() const {
          assert(this);
          return Vsecond;
        }
        int64_t GetVutc_offset() const {
          assert(this);
          return Vutc_offset;
        }
        int64_t GetVyear() const {
          assert(this);
          return Vyear;
        }

        private:
        int64_t Vday;
        int64_t Vhour;
        int64_t Vminute;
        int64_t Vmonth;
        int64_t Vnanosecond;
        int64_t Vsecond;
        int64_t Vutc_offset;
        int64_t Vyear;
      }; // TObjO8i3dayi4houri6minutei5monthi10nanosecondi6secondi10utc_offseti4year

    } // Objects

    template <>
    struct EqEqStruct<Objects::TObjO8i3dayi4houri6minutei5monthi10nanosecondi6secondi10utc_offseti4year, Objects::TObjO8i3dayi4houri6minutei5monthi10nanosecondi6secondi10utc_offseti4year> {
      static bool Do(const Objects::TObjO8i3dayi4houri6minutei5monthi10nanosecondi6secondi10utc_offseti4year &lhs, const Objects::TObjO8i3dayi4houri6minutei5monthi10nanosecondi6secondi10utc_offseti4year &rhs) {
        return lhs.EqEq(rhs);
      }
    }; // EqEqStruct<Objects::TObjO8i3dayi4houri6minutei5monthi10nanosecondi6secondi10utc_offseti4year, Objects::TObjO8i3dayi4houri6minutei5monthi10nanosecondi6secondi10utc_offseti4year>

    template <>
    struct NeqStruct<Objects::TObjO8i3dayi4houri6minutei5monthi10nanosecondi6secondi10utc_offseti4year, Objects::TObjO8i3dayi4houri6minutei5monthi10nanosecondi6secondi10utc_offseti4year> {
      static bool Do(const Objects::TObjO8i3dayi4houri6minutei5monthi10nanosecondi6secondi10utc_offseti4year &lhs, const Objects::TObjO8i3dayi4houri6minutei5monthi10nanosecondi6secondi10utc_offseti4year &rhs) {
        return lhs.Neq(rhs);
      }
    }; // NeqStruct<Objects::TObjO8i3dayi4houri6minutei5monthi10nanosecondi6secondi10utc_offseti4year, Objects::TObjO8i3dayi4houri6minutei5monthi10nanosecondi6secondi10utc_offseti4year>

    template <>
    inline bool Match(const Objects::TObjO8i3dayi4houri6minutei5monthi10nanosecondi6secondi10utc_offseti4year &lhs, const Objects::TObjO8i3dayi4houri6minutei5monthi10nanosecondi6secondi10utc_offseti4year &rhs) {
      return lhs.Match(rhs);
    }

  } // Stig

} // Rt

namespace Stig {

  namespace Type {

    template <>
    struct TDt<Rt::Objects::TObjO8i3dayi4houri6minutei5monthi10nanosecondi6secondi10utc_offseti4year> {

      static TType GetType() {
        return TObj::Get({{"day", Stig::Type::TInt::Get()}, {"hour", Stig::Type::TInt::Get()}, {"minute", Stig::Type::TInt::Get()}, {"month", Stig::Type::TInt::Get()}, {"nanosecond", Stig::Type::TInt::Get()}, {"second", Stig::Type::TInt::Get()}, {"utc_offset", Stig::Type::TInt::Get()}, {"year", Stig::Type::TInt::Get()}});
      }

    };

  } // Stig

} // Type

namespace std {
  template<>
  struct hash<Stig::Rt::Objects::TObjO8i3dayi4houri6minutei5monthi10nanosecondi6secondi10utc_offseti4year> {

    typedef size_t return_type;
    typedef Stig::Rt::Objects::TObjO8i3dayi4houri6minutei5monthi10nanosecondi6secondi10utc_offseti4year argument_type;

    size_t operator()(const argument_type &obj) const {
      return  obj.GetHash();
    }

  }; // hash<Stig::Rt::Objects::TObjO8i3dayi4houri6minutei5monthi10nanosecondi6secondi10utc_offseti4year>
} // std
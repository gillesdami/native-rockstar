#pragma once

#include <variant>

#include "Boolean.h"
#include "Mysterious.h"
#include "Null.h"
#include "Number.h"
#include "String.h"

//visitor helpers
template<class... Ts> struct overloaded : Ts... { using Ts::operator()...; };
template<class... Ts> overloaded(Ts...) -> overloaded<Ts...>;

namespace rock {
    using Var = std::variant<Mysterious, Boolean, Null, Number, String>;

    bool toBool(const Var& var);

    Boolean operator==(const Var& lhs, const Var& rhs);
    Boolean operator!=(const Var& lhs, const Var& rhs);

    Boolean operator>(const Var& lhs, const Var& rhs);
    Boolean operator>=(const Var& lhs, const Var& rhs);
    Boolean operator<(const Var& lhs, const Var& rhs);
    Boolean operator<=(const Var& lhs, const Var& rhs);

    Var operator--(Var& rhs, int);
    Var operator++(Var& rhs, int);

    Var operator-(const Var lhs, const Var& rhs);
    Var operator/(const Var lhs, const Var& rhs);
    Var operator+(const Var lhs, const Var& rhs);
    Var operator*(const Var lhs, const Var& rhs);

    bool operator!(const Var& var);
    bool operator||(const Var lhs, const Var& rhs);
    bool operator&&(const Var lhs, const Var& rhs);
}
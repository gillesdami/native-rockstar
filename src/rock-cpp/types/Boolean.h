#pragma once

#include <stdexcept>

#include "Mysterious.h"
#include "Null.h"
#include "Number.h"
#include "String.h"

namespace rock {
    class Mysterious;
    class Null;
    class Number;
    class String;

    class Boolean {
        public:
            Boolean(bool val): val(val) {};

            operator bool() const {
                return this->val;
            }

            String toString() const;

            bool val;
    };

    bool toBool(const Boolean& var);

    Boolean operator==(const Boolean& lhs, const Boolean& rhs);
    Boolean operator==(const Boolean& lhs, const Mysterious& rhs);
    Boolean operator==(const Boolean& lhs, const Null& rhs);
    Boolean operator==(const Boolean& lhs, const Number& rhs);
    Boolean operator==(const Boolean& lhs, const String& rhs);

    Boolean operator!=(const Boolean& lhs, const Boolean& rhs);
    Boolean operator!=(const Boolean& lhs, const Mysterious& rhs);
    Boolean operator!=(const Boolean& lhs, const Null& rhs);
    Boolean operator!=(const Boolean& lhs, const Number& rhs);
    Boolean operator!=(const Boolean& lhs, const String& rhs);

    Boolean operator>(const Boolean& lhs, const Boolean& rhs);
    Boolean operator>(const Boolean& lhs, const Mysterious& rhs);
    Boolean operator>(const Boolean& lhs, const Null& rhs);
    Boolean operator>(const Boolean& lhs, const Number& rhs);
    Boolean operator>(const Boolean& lhs, const String& rhs);

    Boolean operator>=(const Boolean& lhs, const Boolean& rhs);
    Boolean operator>=(const Boolean& lhs, const Mysterious& rhs);
    Boolean operator>=(const Boolean& lhs, const Null& rhs);
    Boolean operator>=(const Boolean& lhs, const Number& rhs);
    Boolean operator>=(const Boolean& lhs, const String& rhs);

    Boolean operator<(const Boolean& lhs, const Boolean& rhs);
    Boolean operator<(const Boolean& lhs, const Mysterious& rhs);
    Boolean operator<(const Boolean& lhs, const Null& rhs);
    Boolean operator<(const Boolean& lhs, const Number& rhs);
    Boolean operator<(const Boolean& lhs, const String& rhs);

    Boolean operator<=(const Boolean& lhs, const Boolean& rhs);
    Boolean operator<=(const Boolean& lhs, const Mysterious& rhs);
    Boolean operator<=(const Boolean& lhs, const Null& rhs);
    Boolean operator<=(const Boolean& lhs, const Number& rhs);
    Boolean operator<=(const Boolean& lhs, const String& rhs);

    Boolean operator--(Boolean& rhs, int);
    Boolean operator++(Boolean& rhs, int);

    Boolean operator-(const Boolean lhs, const Boolean& rhs);
    Boolean operator-(const Boolean lhs, const Mysterious& rhs);
    Boolean operator-(const Boolean lhs, const Null& rhs);
    Boolean operator-(const Boolean lhs, const Number& rhs);
    Boolean operator-(const Boolean lhs, const String& rhs);

    Boolean operator/(const Boolean lhs, const Boolean& rhs);
    Boolean operator/(const Boolean lhs, const Mysterious& rhs);
    Boolean operator/(const Boolean lhs, const Null& rhs);
    Boolean operator/(const Boolean lhs, const Number& rhs);
    Boolean operator/(const Boolean lhs, const String& rhs);

    Boolean operator+(const Boolean lhs, const Boolean& rhs);
    Boolean operator+(const Boolean lhs, const Mysterious& rhs);
    Boolean operator+(const Boolean lhs, const Null& rhs);
    Boolean operator+(const Boolean lhs, const Number& rhs);
    String operator+(const Boolean lhs, const String& rhs);

    Boolean operator*(const Boolean lhs, const Boolean& rhs);
    Boolean operator*(const Boolean lhs, const Mysterious& rhs);
    Boolean operator*(const Boolean lhs, const Null& rhs);
    Boolean operator*(const Boolean lhs, const Number& rhs);
    Boolean operator*(const Boolean lhs, const String& rhs);

    Boolean operator!(const Boolean& var);
    Boolean operator||(const Boolean lhs, const Boolean& rhs);
    Boolean operator&&(const Boolean lhs, const Boolean& rhs);
}
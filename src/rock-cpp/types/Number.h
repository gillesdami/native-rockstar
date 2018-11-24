#pragma once

#include <string>
#include <sstream>
#include <stdexcept>

#include "Boolean.h"
#include "Mysterious.h"
#include "Null.h"
#include "String.h"

namespace rock {
    class Boolean;
    class Mysterious;
    class Null;
    class String;

    class Number {
        public:
            Number(double val): val(val) {};

            operator bool() const {
                return !(this->val == 0);
            }

            String toString() const;

            double val;//TODO should be DEC64
    };

    bool toBool(const Number& var);

    Boolean operator==(const Number& lhs, const Number& rhs);
    Boolean operator==(const Number& lhs, const Boolean& rhs);
    Boolean operator==(const Number& lhs, const Mysterious& rhs);
    Boolean operator==(const Number& lhs, const Null& rhs);
    Boolean operator==(const Number& lhs, const String& rhs);

    Boolean operator!=(const Number& lhs, const Number& rhs);
    Boolean operator!=(const Number& lhs, const Boolean& rhs);
    Boolean operator!=(const Number& lhs, const Mysterious& rhs);
    Boolean operator!=(const Number& lhs, const Null& rhs);
    Boolean operator!=(const Number& lhs, const String& rhs);

    Boolean operator>(const Number& lhs, const Number& rhs);
    Boolean operator>(const Number& lhs, const Boolean& rhs);
    Boolean operator>(const Number& lhs, const Mysterious& rhs);
    Boolean operator>(const Number& lhs, const Null& rhs);
    Boolean operator>(const Number& lhs, const String& rhs);

    Boolean operator>=(const Number& lhs, const Number& rhs);
    Boolean operator>=(const Number& lhs, const Boolean& rhs);
    Boolean operator>=(const Number& lhs, const Mysterious& rhs);
    Boolean operator>=(const Number& lhs, const Null& rhs);
    Boolean operator>=(const Number& lhs, const String& rhs);

    Boolean operator<(const Number& lhs, const Number& rhs);
    Boolean operator<(const Number& lhs, const Boolean& rhs);
    Boolean operator<(const Number& lhs, const Mysterious& rhs);
    Boolean operator<(const Number& lhs, const Null& rhs);
    Boolean operator<(const Number& lhs, const String& rhs);

    Boolean operator<=(const Number& lhs, const Number& rhs);
    Boolean operator<=(const Number& lhs, const Boolean& rhs);
    Boolean operator<=(const Number& lhs, const Mysterious& rhs);
    Boolean operator<=(const Number& lhs, const Null& rhs);
    Boolean operator<=(const Number& lhs, const String& rhs);

    Number operator--(Number& rhs, int);
    Number operator++(Number& rhs, int);

    Number operator-(const Number lhs, const Number& rhs);
    Number operator-(const Number lhs, const Boolean& rhs);
    Number operator-(const Number lhs, const Mysterious& rhs);
    Number operator-(const Number lhs, const Null& rhs);
    Number operator-(const Number lhs, const String& rhs);

    Number operator/(const Number lhs, const Number& rhs);
    Number operator/(const Number lhs, const Boolean& rhs);
    Number operator/(const Number lhs, const Mysterious& rhs);
    Number operator/(const Number lhs, const Null& rhs);
    Number operator/(const Number lhs, const String& rhs);

    Number operator+(const Number lhs, const Number& rhs);
    Number operator+(const Number lhs, const Boolean& rhs);
    Number operator+(const Number lhs, const Mysterious& rhs);
    Number operator+(const Number lhs, const Null& rhs);
    String operator+(const Number lhs, const String& rhs);

    Number operator*(const Number lhs, const Number& rhs);
    Number operator*(const Number lhs, const Boolean& rhs);
    Number operator*(const Number lhs, const Mysterious& rhs);
    Number operator*(const Number lhs, const Null& rhs);
    String operator*(const Number lhs, const String& rhs);
}
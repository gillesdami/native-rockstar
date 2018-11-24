#pragma once

#include <string>
#include <stdexcept>

#include "Boolean.h"
#include "Mysterious.h"
#include "Number.h"
#include "String.h"

namespace rock {
    class Boolean;
    class Mysterious;
    class Number;
    class String;

    class Null {
        public:
            String toString() const;

            operator bool() const {
                return false;
            }

            std::string val = "null";
    };

    bool toBool(const Null& var);

    Boolean operator==(const Null& lhs, const Null& rhs);
    Boolean operator==(const Null& lhs, const Boolean& rhs);
    Boolean operator==(const Null& lhs, const Mysterious& rhs);
    Boolean operator==(const Null& lhs, const Number& rhs);
    Boolean operator==(const Null& lhs, const String& rhs);

    Boolean operator!=(const Null& lhs, const Null& rhs);
    Boolean operator!=(const Null& lhs, const Boolean& rhs);
    Boolean operator!=(const Null& lhs, const Mysterious& rhs);
    Boolean operator!=(const Null& lhs, const Number& rhs);
    Boolean operator!=(const Null& lhs, const String& rhs);

    Boolean operator>(const Null& lhs, const Null& rhs);
    Boolean operator>(const Null& lhs, const Boolean& rhs);
    Boolean operator>(const Null& lhs, const Mysterious& rhs);
    Boolean operator>(const Null& lhs, const Number& rhs);
    Boolean operator>(const Null& lhs, const String& rhs);

    Boolean operator>=(const Null& lhs, const Null& rhs);
    Boolean operator>=(const Null& lhs, const Boolean& rhs);
    Boolean operator>=(const Null& lhs, const Mysterious& rhs);
    Boolean operator>=(const Null& lhs, const Number& rhs);
    Boolean operator>=(const Null& lhs, const String& rhs);

    Boolean operator<(const Null& lhs, const Null& rhs);
    Boolean operator<(const Null& lhs, const Boolean& rhs);
    Boolean operator<(const Null& lhs, const Mysterious& rhs);
    Boolean operator<(const Null& lhs, const Number& rhs);
    Boolean operator<(const Null& lhs, const String& rhs);

    Boolean operator<=(const Null& lhs, const Null& rhs);
    Boolean operator<=(const Null& lhs, const Boolean& rhs);
    Boolean operator<=(const Null& lhs, const Mysterious& rhs);
    Boolean operator<=(const Null& lhs, const Number& rhs);
    Boolean operator<=(const Null& lhs, const String& rhs);

    Null operator--(Null& rhs, int);
    Null operator++(Null& rhs, int);

    Null operator-(const Null lhs, const Null& rhs);
    Null operator-(const Null lhs, const Boolean& rhs);
    Null operator-(const Null lhs, const Mysterious& rhs);
    Null operator-(const Null lhs, const Number& rhs);
    Null operator-(const Null lhs, const String& rhs);

    Null operator/(const Null lhs, const Null& rhs);
    Null operator/(const Null lhs, const Boolean& rhs);
    Null operator/(const Null lhs, const Mysterious& rhs);
    Null operator/(const Null lhs, const Number& rhs);
    Null operator/(const Null lhs, const String& rhs);

    Null operator+(const Null lhs, const Null& rhs);
    Null operator+(const Null lhs, const Boolean& rhs);
    Null operator+(const Null lhs, const Mysterious& rhs);
    Null operator+(const Null lhs, const Number& rhs);
    String operator+(const Null lhs, const String& rhs);

    Null operator*(const Null lhs, const Null& rhs);
    Null operator*(const Null lhs, const Boolean& rhs);
    Null operator*(const Null lhs, const Mysterious& rhs);
    Null operator*(const Null lhs, const Number& rhs);
    Null operator*(const Null lhs, const String& rhs);
}
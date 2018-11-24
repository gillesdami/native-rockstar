#pragma once

#include <string>
#include <stdexcept>

#include "Boolean.h"
#include "Null.h"
#include "Number.h"
#include "String.h"

namespace rock {
    class Boolean;
    class Null;
    class Number;
    class String;

    class Mysterious {
        public:
            String toString() const;

            operator bool() const {
                return false;
            }

            std::string val = "mysterious";
    };

    bool toBool(const Mysterious& var);

    Boolean operator==(const Mysterious& lhs, const Mysterious& rhs);
    Boolean operator==(const Mysterious& lhs, const Boolean& rhs);
    Boolean operator==(const Mysterious& lhs, const Null& rhs);
    Boolean operator==(const Mysterious& lhs, const Number& rhs);
    Boolean operator==(const Mysterious& lhs, const String& rhs);

    Boolean operator!=(const Mysterious& lhs, const Mysterious& rhs);
    Boolean operator!=(const Mysterious& lhs, const Boolean& rhs);
    Boolean operator!=(const Mysterious& lhs, const Null& rhs);
    Boolean operator!=(const Mysterious& lhs, const Number& rhs);
    Boolean operator!=(const Mysterious& lhs, const String& rhs);

    Boolean operator>(const Mysterious& lhs, const Mysterious& rhs);
    Boolean operator>(const Mysterious& lhs, const Boolean& rhs);
    Boolean operator>(const Mysterious& lhs, const Null& rhs);
    Boolean operator>(const Mysterious& lhs, const Number& rhs);
    Boolean operator>(const Mysterious& lhs, const String& rhs);

    Boolean operator>=(const Mysterious& lhs, const Mysterious& rhs);
    Boolean operator>=(const Mysterious& lhs, const Boolean& rhs);
    Boolean operator>=(const Mysterious& lhs, const Null& rhs);
    Boolean operator>=(const Mysterious& lhs, const Number& rhs);
    Boolean operator>=(const Mysterious& lhs, const String& rhs);

    Boolean operator<(const Mysterious& lhs, const Mysterious& rhs);
    Boolean operator<(const Mysterious& lhs, const Boolean& rhs);
    Boolean operator<(const Mysterious& lhs, const Null& rhs);
    Boolean operator<(const Mysterious& lhs, const Number& rhs);
    Boolean operator<(const Mysterious& lhs, const String& rhs);

    Boolean operator<=(const Mysterious& lhs, const Mysterious& rhs);
    Boolean operator<=(const Mysterious& lhs, const Boolean& rhs);
    Boolean operator<=(const Mysterious& lhs, const Null& rhs);
    Boolean operator<=(const Mysterious& lhs, const Number& rhs);
    Boolean operator<=(const Mysterious& lhs, const String& rhs);

    Mysterious operator--(Mysterious& rhs, int);
    Mysterious operator++(Mysterious& rhs, int);

    Mysterious operator-(const Mysterious lhs, const Mysterious& rhs);
    Mysterious operator-(const Mysterious lhs, const Boolean& rhs);
    Mysterious operator-(const Mysterious lhs, const Null& rhs);
    Mysterious operator-(const Mysterious lhs, const Number& rhs);
    Mysterious operator-(const Mysterious lhs, const String& rhs);

    Mysterious operator/(const Mysterious lhs, const Mysterious& rhs);
    Mysterious operator/(const Mysterious lhs, const Boolean& rhs);
    Mysterious operator/(const Mysterious lhs, const Null& rhs);
    Mysterious operator/(const Mysterious lhs, const Number& rhs);
    Mysterious operator/(const Mysterious lhs, const String& rhs);

    Mysterious operator+(const Mysterious lhs, const Mysterious& rhs);
    Mysterious operator+(const Mysterious lhs, const Boolean& rhs);
    Mysterious operator+(const Mysterious lhs, const Null& rhs);
    Mysterious operator+(const Mysterious lhs, const Number& rhs);
    String operator+(const Mysterious lhs, const String& rhs);

    Mysterious operator*(const Mysterious lhs, const Mysterious& rhs);
    Mysterious operator*(const Mysterious lhs, const Boolean& rhs);
    Mysterious operator*(const Mysterious lhs, const Null& rhs);
    Mysterious operator*(const Mysterious lhs, const Number& rhs);
    Mysterious operator*(const Mysterious lhs, const String& rhs);
}
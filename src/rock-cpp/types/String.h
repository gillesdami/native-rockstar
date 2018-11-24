#pragma once

#include <string>
#include <sstream>
#include <stdexcept>

#include "Boolean.h"
#include "Mysterious.h"
#include "Null.h"
#include "Number.h"

namespace rock {
    class Boolean;
    class Mysterious;
    class Null;
    class Number;

    class String {
        public:
            String(std::string val): val(val) {};

            operator bool() const {
                return this->val == "true" ? true : this->val == "false" ? false :
                    throw std::runtime_error("Cannot convert string '" + this->val + "' to boolean");
            }

            Number toNumber() const;
            String toString() const;

            std::string val;
    };

    bool toBool(const String& var);

    Boolean operator==(const String& lhs, const String& rhs);
    Boolean operator==(const String& lhs, const Boolean& rhs);
    Boolean operator==(const String& lhs, const Mysterious& rhs);
    Boolean operator==(const String& lhs, const Number& rhs);
    Boolean operator==(const String& lhs, const Null& rhs);

    Boolean operator!=(const String& lhs, const String& rhs);
    Boolean operator!=(const String& lhs, const Boolean& rhs);
    Boolean operator!=(const String& lhs, const Mysterious& rhs);
    Boolean operator!=(const String& lhs, const Number& rhs);
    Boolean operator!=(const String& lhs, const Null& rhs);

    Boolean operator>(const String& lhs, const String& rhs);
    Boolean operator>(const String& lhs, const Boolean& rhs);
    Boolean operator>(const String& lhs, const Mysterious& rhs);
    Boolean operator>(const String& lhs, const Number& rhs);
    Boolean operator>(const String& lhs, const Null& rhs);

    Boolean operator>=(const String& lhs, const String& rhs);
    Boolean operator>=(const String& lhs, const Boolean& rhs);
    Boolean operator>=(const String& lhs, const Mysterious& rhs);
    Boolean operator>=(const String& lhs, const Number& rhs);
    Boolean operator>=(const String& lhs, const Null& rhs);

    Boolean operator<(const String& lhs, const String& rhs);
    Boolean operator<(const String& lhs, const Boolean& rhs);
    Boolean operator<(const String& lhs, const Mysterious& rhs);
    Boolean operator<(const String& lhs, const Number& rhs);
    Boolean operator<(const String& lhs, const Null& rhs);

    Boolean operator<=(const String& lhs, const String& rhs);
    Boolean operator<=(const String& lhs, const Boolean& rhs);
    Boolean operator<=(const String& lhs, const Mysterious& rhs);
    Boolean operator<=(const String& lhs, const Number& rhs);
    Boolean operator<=(const String& lhs, const Null& rhs);

    String operator--(String& rhs, int);
    String operator++(String& rhs, int);

    String operator-(const String lhs, const String& rhs);
    String operator-(const String lhs, const Boolean& rhs);
    String operator-(const String lhs, const Mysterious& rhs);
    String operator-(const String lhs, const Number& rhs);
    String operator-(const String lhs, const Null& rhs);

    String operator/(const String lhs, const String& rhs);
    String operator/(const String lhs, const Boolean& rhs);
    String operator/(const String lhs, const Mysterious& rhs);
    String operator/(const String lhs, const Number& rhs);
    String operator/(const String lhs, const Null& rhs);

    String operator+(const String lhs, const String& rhs);
    String operator+(const String lhs, const Boolean& rhs);
    String operator+(const String lhs, const Mysterious& rhs);
    String operator+(const String lhs, const Number& rhs);
    String operator+(const String lhs, const Null& rhs);

    String operator*(const String lhs, const String& rhs);
    String operator*(const String lhs, const Boolean& rhs);
    String operator*(const String lhs, const Mysterious& rhs);
    String operator*(const String lhs, const Number& rhs);
    String operator*(const String lhs, const Null& rhs);
}
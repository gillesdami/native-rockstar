#include "Var.h"

namespace rock {
    bool toBool(const Var& var) {
        return std::visit([](auto&& var) -> bool { return (bool)var; }, var);
    }

    Boolean operator==(const Var& lhs, const Var& rhs){
        return std::visit([](auto&& lhs, auto&& rhs) -> Boolean { return lhs == rhs; }, lhs, rhs);
    }

    Boolean operator!=(const Var& lhs, const Var& rhs){
        return std::visit([](auto&& lhs, auto&& rhs) -> Boolean { return lhs != rhs; }, lhs, rhs);
    }

    Boolean operator>(const Var& lhs, const Var& rhs){
        return std::visit([](auto&& lhs, auto&& rhs) -> Boolean { return lhs > rhs; }, lhs, rhs);
    }

    Boolean operator>=(const Var& lhs, const Var& rhs){
        return std::visit([](auto&& lhs, auto&& rhs) -> Boolean { return lhs >= rhs; }, lhs, rhs);
    }

    Boolean operator<(const Var& lhs, const Var& rhs){
        return std::visit([](auto&& lhs, auto&& rhs) -> Boolean { return lhs < rhs; }, lhs, rhs);
    }

    Boolean operator<=(const Var& lhs, const Var& rhs){
        return std::visit([](auto&& lhs, auto&& rhs) -> Boolean { return lhs <= rhs; }, lhs, rhs);
    }
    
    Var operator--(Var& rhs, int)
    {
        return std::visit([](auto&& rhs) -> Var { return rhs--; }, rhs);
    }

    Var operator++(Var& rhs, int)
    {
        return std::visit([](auto&& rhs) -> Var { return rhs++; }, rhs);
    }

    Var operator-(const Var lhs, const Var& rhs)
    {
        return std::visit([](auto&& lhs, auto&& rhs) -> Var { return lhs - rhs; }, lhs, rhs);
    }

    Var operator/(const Var lhs, const Var& rhs)
    {
        return std::visit([](auto&& lhs, auto&& rhs) -> Var { return lhs / rhs; }, lhs, rhs);
    }

    Var operator+(const Var lhs, const Var& rhs)
    {
        return std::visit([](auto&& lhs, auto&& rhs) -> Var { return lhs + rhs; }, lhs, rhs);
    }

    Var operator*(const Var lhs, const Var& rhs)
    {
        return std::visit([](auto&& lhs, auto&& rhs) -> Var { return lhs * rhs; }, lhs, rhs);
    }

    bool operator!(const Var& var)
    {
        return std::visit([](auto&& var) -> bool { return !(bool)var; }, var);
    }

    bool operator||(const Var lhs, const Var& rhs)
    {
        return std::visit([](auto&& lhs, auto&& rhs) -> bool { return (bool)lhs || (bool)rhs; }, lhs, rhs);
    }

    bool operator&&(const Var lhs, const Var& rhs)
    {
        return std::visit([](auto&& lhs, auto&& rhs) -> bool { return (bool)lhs && (bool)rhs; }, lhs, rhs);
    }
}
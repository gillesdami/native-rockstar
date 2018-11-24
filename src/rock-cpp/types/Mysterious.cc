#include "Mysterious.h"

namespace rock {
    bool toBool(const Mysterious& var) {
        return false;
    }
    
    // ==
    Boolean operator==(const Mysterious& lhs, const Mysterious& rhs){
        return Boolean(true);
    }

    Boolean operator==(const Mysterious& lhs, const Boolean& rhs){
        return Boolean(false);
    }

    Boolean operator==(const Mysterious& lhs, const Null& rhs){
        return Boolean(false);
    }

    Boolean operator==(const Mysterious& lhs, const Number& rhs){
        return Boolean(false);
    }

    Boolean operator==(const Mysterious& lhs, const String& rhs){
        return Boolean(false);
    }

    // !=
    Boolean operator!=(const Mysterious& lhs, const Mysterious& rhs){
        return Boolean(!(lhs == rhs));
    }

    Boolean operator!=(const Mysterious& lhs, const Boolean& rhs){
        return Boolean(!(lhs == rhs));
    }

    Boolean operator!=(const Mysterious& lhs, const Null& rhs){
        return Boolean(!(lhs == rhs));
    }

    Boolean operator!=(const Mysterious& lhs, const Number& rhs){
        return Boolean(!(lhs == rhs));
    }

    Boolean operator!=(const Mysterious& lhs, const String& rhs){
        return Boolean(!(lhs == rhs));
    }

    //>
    Boolean operator>(const Mysterious& lhs, const Mysterious& rhs){
        throw std::invalid_argument("[comparator](const Mysterious& lhs, const Mysterious& rhs)");
    }

    Boolean operator>(const Mysterious& lhs, const Boolean& rhs){
        throw std::invalid_argument("[comparator](const Mysterious& lhs, const Boolean& rhs)");
    }

    Boolean operator>(const Mysterious& lhs, const Null& rhs){
        throw std::invalid_argument("[comparator](const Mysterious& lhs, const Null& rhs)");
    }

    Boolean operator>(const Mysterious& lhs, const Number& rhs){
        throw std::invalid_argument("[comparator](const Mysterious& lhs, const Number& rhs)");
    }

    Boolean operator>(const Mysterious& lhs, const String& rhs){
        throw std::invalid_argument("[comparator](const Mysterious& lhs, const String& rhs)");
    }

    // >=
    Boolean operator>=(const Mysterious& lhs, const Mysterious& rhs){
        return Boolean(lhs > rhs || lhs == rhs);
    }

    Boolean operator>=(const Mysterious& lhs, const Boolean& rhs){
        return Boolean(lhs > rhs || lhs == rhs);
    }

    Boolean operator>=(const Mysterious& lhs, const Null& rhs){
        return Boolean(lhs > rhs || lhs == rhs);
    }

    Boolean operator>=(const Mysterious& lhs, const Number& rhs){
        return Boolean(lhs > rhs || lhs == rhs);
    }

    Boolean operator>=(const Mysterious& lhs, const String& rhs){
        return Boolean(lhs > rhs || lhs == rhs);
    }

    // <
    Boolean operator<(const Mysterious& lhs, const Mysterious& rhs){
        return Boolean(!(lhs >= rhs));
    }

    Boolean operator<(const Mysterious& lhs, const Boolean& rhs){
        return Boolean(!(lhs >= rhs));
    }

    Boolean operator<(const Mysterious& lhs, const Null& rhs){
        return Boolean(!(lhs >= rhs));
    }

    Boolean operator<(const Mysterious& lhs, const Number& rhs){
        return Boolean(!(lhs >= rhs));
    }

    Boolean operator<(const Mysterious& lhs, const String& rhs){
        return Boolean(!(lhs >= rhs));
    }

    // <=
    Boolean operator<=(const Mysterious& lhs, const Mysterious& rhs){
        return Boolean(!(lhs > rhs));
    }

    Boolean operator<=(const Mysterious& lhs, const Boolean& rhs){
        return Boolean(!(lhs > rhs));
    }

    Boolean operator<=(const Mysterious& lhs, const Null& rhs){
        return Boolean(!(lhs > rhs));
    }

    Boolean operator<=(const Mysterious& lhs, const Number& rhs){
        return Boolean(!(lhs > rhs));
    }

    Boolean operator<=(const Mysterious& lhs, const String& rhs){
        return Boolean(!(lhs > rhs));
    }

    //--
    Mysterious operator--(Mysterious& rhs, int)
    {
        throw std::invalid_argument("--(Mysterious& rhs)");
    }

    // ++
    Mysterious operator++(Mysterious& rhs, int)
    {
        throw std::invalid_argument("++(Mysterious& rhs)");
    }

    // -
    Mysterious operator-(const Mysterious lhs, const Mysterious& rhs)
    {
        throw std::invalid_argument("-(const Mysterious lhs, const Mysterious& rhs)");
    }

    Mysterious operator-(const Mysterious lhs, const Boolean& rhs)
    {
        throw std::invalid_argument("-(const Mysterious lhs, const Boolean& rhs)");
    }

    Mysterious operator-(const Mysterious lhs, const Null& rhs)
    {
        throw std::invalid_argument("-(const Mysterious lhs, const Null& rhs)");
    }

    Mysterious operator-(const Mysterious lhs, const Number& rhs)
    {
        throw std::invalid_argument("-(const Mysterious lhs, const Number& rhs)");
    }

    Mysterious operator-(const Mysterious lhs, const String& rhs)
    {
        throw std::invalid_argument("-(const Mysterious lhs, const String& rhs)");
    }

    // /
    Mysterious operator/(const Mysterious lhs, const Mysterious& rhs)
    {
        throw std::invalid_argument("/(const Mysterious lhs, const Mysterious& rhs)");
    }

    Mysterious operator/(const Mysterious lhs, const Boolean& rhs)
    {
        throw std::invalid_argument("/(const Mysterious lhs, const Boolean& rhs)");
    }

    Mysterious operator/(const Mysterious lhs, const Null& rhs)
    {
        throw std::invalid_argument("/(const Mysterious lhs, const Null& rhs)");
    }

    Mysterious operator/(const Mysterious lhs, const Number& rhs)
    {
        throw std::invalid_argument("/(const Mysterious lhs, const Number& rhs)");
    }

    Mysterious operator/(const Mysterious lhs, const String& rhs)
    {
        throw std::invalid_argument("/(const Mysterious lhs, const String& rhs)");
    }

    // +
    Mysterious operator+(const Mysterious lhs, const Mysterious& rhs)
    {
        throw std::invalid_argument("+(const Mysterious lhs, const Mysterious& rhs)");
    }

    Mysterious operator+(const Mysterious lhs, const Boolean& rhs)
    {
        throw std::invalid_argument("+(const Mysterious lhs, const Boolean& rhs)");
    }

    Mysterious operator+(const Mysterious lhs, const Null& rhs)
    {
        throw std::invalid_argument("+(const Mysterious lhs, const Null& rhs)");
    }

    Mysterious operator+(const Mysterious lhs, const Number& rhs)
    {
        throw std::invalid_argument("+(const Mysterious lhs, const Number& rhs)");
    }

    String operator+(const Mysterious lhs, const String& rhs)
    {
        return String(lhs.toString().val + rhs.val);
    }

    // *
    Mysterious operator*(const Mysterious lhs, const Mysterious& rhs)
    {
        throw std::invalid_argument("*(const Mysterious lhs, const Mysterious& rhs)");
    }

    Mysterious operator*(const Mysterious lhs, const Boolean& rhs)
    {
        throw std::invalid_argument("*(const Mysterious lhs, const Boolean& rhs)");
    }

    Mysterious operator*(const Mysterious lhs, const Null& rhs)
    {
        throw std::invalid_argument("*(const Mysterious lhs, const Null& rhs)");
    }

    Mysterious operator*(const Mysterious lhs, const Number& rhs)
    {
        throw std::invalid_argument("*(const Mysterious lhs, const Number& rhs)");
    }

    Mysterious operator*(const Mysterious lhs, const String& rhs)
    {
        throw std::invalid_argument("*(const Mysterious lhs, const String& rhs)");
    }

    String Mysterious::toString() const {
        return String(val);
    }
}
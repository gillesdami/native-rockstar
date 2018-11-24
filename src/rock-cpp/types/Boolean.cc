#include "Boolean.h"

namespace rock {
    bool toBool(const Boolean& var) {
        return var.val;
    }
    
    // ==
    Boolean operator==(const Boolean& lhs, const Boolean& rhs){
        return Boolean(lhs.val == rhs.val);
    }

    Boolean operator==(const Boolean& lhs, const Mysterious& rhs){
        return Boolean(false);
    }

    Boolean operator==(const Boolean& lhs, const Null& rhs){
        return Boolean(!lhs.val);
    }

    Boolean operator==(const Boolean& lhs, const Number& rhs){
        return Boolean(lhs.val == false && rhs.val == 0 || lhs.val);
    }

    Boolean operator==(const Boolean& lhs, const String& rhs){
        return Boolean(lhs.val == bool(rhs));
    }

    // !=
    Boolean operator!=(const Boolean& lhs, const Boolean& rhs){
        return Boolean(!(lhs == rhs));
    }

    Boolean operator!=(const Boolean& lhs, const Mysterious& rhs){
        return Boolean(!(lhs == rhs));
    }

    Boolean operator!=(const Boolean& lhs, const Null& rhs){
        return Boolean(!(lhs == rhs));
    }

    Boolean operator!=(const Boolean& lhs, const Number& rhs){
        return Boolean(!(lhs == rhs));
    }

    Boolean operator!=(const Boolean& lhs, const String& rhs){
        return Boolean(!(lhs == rhs));
    }

    //>
    Boolean operator>(const Boolean& lhs, const Boolean& rhs){
        throw std::invalid_argument("[comparator](const Boolean& lhs, const Boolean& rhs)");
    }

    Boolean operator>(const Boolean& lhs, const Mysterious& rhs){
        throw std::invalid_argument("[comparator](const Boolean& lhs, const Mysterious& rhs)");
    }

    Boolean operator>(const Boolean& lhs, const Null& rhs){
        throw std::invalid_argument("[comparator](const Boolean& lhs, const Null& rhs)");
    }

    Boolean operator>(const Boolean& lhs, const Number& rhs){
        throw std::invalid_argument("[comparator](const Boolean& lhs, const Number& rhs)");
    }

    Boolean operator>(const Boolean& lhs, const String& rhs){
        throw std::invalid_argument("[comparator](const Boolean& lhs, const String& rhs)");
    }

    // >=
    Boolean operator>=(const Boolean& lhs, const Boolean& rhs){
        return Boolean(lhs > rhs || lhs == rhs);
    }

    Boolean operator>=(const Boolean& lhs, const Mysterious& rhs){
        return Boolean(lhs > rhs || lhs == rhs);
    }

    Boolean operator>=(const Boolean& lhs, const Null& rhs){
        return Boolean(lhs > rhs || lhs == rhs);
    }

    Boolean operator>=(const Boolean& lhs, const Number& rhs){
        return Boolean(lhs > rhs || lhs == rhs);
    }

    Boolean operator>=(const Boolean& lhs, const String& rhs){
        return Boolean(lhs > rhs || lhs == rhs);
    }

    // <
    Boolean operator<(const Boolean& lhs, const Boolean& rhs){
        return Boolean(!(lhs >= rhs));
    }

    Boolean operator<(const Boolean& lhs, const Mysterious& rhs){
        return Boolean(!(lhs >= rhs));
    }

    Boolean operator<(const Boolean& lhs, const Null& rhs){
        return Boolean(!(lhs >= rhs));
    }

    Boolean operator<(const Boolean& lhs, const Number& rhs){
        return Boolean(!(lhs >= rhs));
    }

    Boolean operator<(const Boolean& lhs, const String& rhs){
        return Boolean(!(lhs >= rhs));
    }

    // <=
    Boolean operator<=(const Boolean& lhs, const Boolean& rhs){
        return Boolean(!(lhs > rhs));
    }

    Boolean operator<=(const Boolean& lhs, const Mysterious& rhs){
        return Boolean(!(lhs > rhs));
    }

    Boolean operator<=(const Boolean& lhs, const Null& rhs){
        return Boolean(!(lhs > rhs));
    }

    Boolean operator<=(const Boolean& lhs, const Number& rhs){
        return Boolean(!(lhs > rhs));
    }

    Boolean operator<=(const Boolean& lhs, const String& rhs){
        return Boolean(!(lhs > rhs));
    }

    //--
    Boolean operator--(Boolean& rhs, int)
    {
        rhs.val = !rhs.val;
        return Boolean(rhs);
    }

    // ++
    Boolean operator++(Boolean& rhs, int)
    {
        rhs.val = !rhs.val;
        return Boolean(rhs);
    }

    // -
    Boolean operator-(const Boolean lhs, const Boolean& rhs)
    {
        throw std::invalid_argument("-(const Boolean lhs, const Boolean& rhs)");
    }

    Boolean operator-(const Boolean lhs, const Mysterious& rhs)
    {
        throw std::invalid_argument("-(const Boolean lhs, const Mysterious& rhs)");
    }

    Boolean operator-(const Boolean lhs, const Null& rhs)
    {
        throw std::invalid_argument("-(const Boolean lhs, const Null& rhs)");
    }

    Boolean operator-(const Boolean lhs, const Number& rhs)
    {
        throw std::invalid_argument("-(const Boolean lhs, const Number& rhs)");
    }

    Boolean operator-(const Boolean lhs, const String& rhs)
    {
        throw std::invalid_argument("-(const Boolean lhs, const String& rhs)");
    }

    // /
    Boolean operator/(const Boolean lhs, const Boolean& rhs)
    {
        throw std::invalid_argument("/(const Boolean lhs, const Boolean& rhs)");
    }

    Boolean operator/(const Boolean lhs, const Mysterious& rhs)
    {
        throw std::invalid_argument("/(const Boolean lhs, const Mysterious& rhs)");
    }

    Boolean operator/(const Boolean lhs, const Null& rhs)
    {
        throw std::invalid_argument("/(const Boolean lhs, const Null& rhs)");
    }

    Boolean operator/(const Boolean lhs, const Number& rhs)
    {
        throw std::invalid_argument("/(const Boolean lhs, const Number& rhs)");
    }

    Boolean operator/(const Boolean lhs, const String& rhs)
    {
        throw std::invalid_argument("/(const Boolean lhs, const String& rhs)");
    }

    // +
    Boolean operator+(const Boolean lhs, const Boolean& rhs)
    {
        throw std::invalid_argument("+(const Boolean lhs, const Boolean& rhs)");
    }

    Boolean operator+(const Boolean lhs, const Mysterious& rhs)
    {
        throw std::invalid_argument("+(const Boolean lhs, const Mysterious& rhs)");
    }

    Boolean operator+(const Boolean lhs, const Null& rhs)
    {
        throw std::invalid_argument("+(const Boolean lhs, const Null& rhs)");
    }

    Boolean operator+(const Boolean lhs, const Number& rhs)
    {
        throw std::invalid_argument("+(const Boolean lhs, const Number& rhs)");
    }

    String operator+(const Boolean lhs, const String& rhs)
    {
        return String(lhs.toString().val + rhs.val);
    }

    // *
    Boolean operator*(const Boolean lhs, const Boolean& rhs)
    {
        throw std::invalid_argument("*(const Boolean lhs, const Boolean& rhs)");
    }

    Boolean operator*(const Boolean lhs, const Mysterious& rhs)
    {
        throw std::invalid_argument("*(const Boolean lhs, const Mysterious& rhs)");
    }

    Boolean operator*(const Boolean lhs, const Null& rhs)
    {
        throw std::invalid_argument("*(const Boolean lhs, const Null& rhs)");
    }

    Boolean operator*(const Boolean lhs, const Number& rhs)
    {
        throw std::invalid_argument("*(const Boolean lhs, const Number& rhs)");
    }

    Boolean operator*(const Boolean lhs, const String& rhs)
    {
        throw std::invalid_argument("*(const Boolean lhs, const String& rhs)");
    }

    String Boolean::toString() const {
        return this->val ? std::string("true") : std::string("false");
    }

    Boolean operator!(const Boolean& var)
    {
        return Boolean(!var.val);
    }

    Boolean operator||(const Boolean lhs, const Boolean& rhs)
    {
        return Boolean(lhs.val || rhs.val);
    }

    Boolean operator&&(const Boolean lhs, const Boolean& rhs)
    {
        return Boolean(lhs.val && rhs.val);
    }
}
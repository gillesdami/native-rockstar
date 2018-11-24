#include "Null.h"

namespace rock {
    bool toBool(const Null& var) {
        return false;
    }
    
    // ==
    Boolean operator==(const Null& lhs, const Null& rhs){
        return Boolean(true);
    }

    Boolean operator==(const Null& lhs, const Boolean& rhs){
        return Boolean(false);
    }

    Boolean operator==(const Null& lhs, const Mysterious& rhs){
        return Boolean(false);
    }

    Boolean operator==(const Null& lhs, const Number& rhs){
        return Boolean(false);
    }

    Boolean operator==(const Null& lhs, const String& rhs){
        return Boolean(false);
    }

    // !=
    Boolean operator!=(const Null& lhs, const Null& rhs){
        return Boolean(!(lhs == rhs));
    }

    Boolean operator!=(const Null& lhs, const Boolean& rhs){
        return Boolean(!(lhs == rhs));
    }

    Boolean operator!=(const Null& lhs, const Mysterious& rhs){
        return Boolean(!(lhs == rhs));
    }

    Boolean operator!=(const Null& lhs, const Number& rhs){
        return Boolean(!(lhs == rhs));
    }

    Boolean operator!=(const Null& lhs, const String& rhs){
        return Boolean(!(lhs == rhs));
    }

    //>
    Boolean operator>(const Null& lhs, const Null& rhs){
        throw std::invalid_argument("[comparator](const Null& lhs, const Null& rhs)");
    }

    Boolean operator>(const Null& lhs, const Boolean& rhs){
        throw std::invalid_argument("[comparator](const Null& lhs, const Boolean& rhs)");
    }

    Boolean operator>(const Null& lhs, const Mysterious& rhs){
        throw std::invalid_argument("[comparator](const Null& lhs, const Mysterious& rhs)");
    }

    Boolean operator>(const Null& lhs, const Number& rhs){
        return Number(0) > rhs;
    }

    Boolean operator>(const Null& lhs, const String& rhs){
        throw std::invalid_argument("[comparator](const Null& lhs, const String& rhs)");
    }

    // >=
    Boolean operator>=(const Null& lhs, const Null& rhs){
        return Boolean(lhs > rhs || lhs == rhs);
    }

    Boolean operator>=(const Null& lhs, const Boolean& rhs){
        return Boolean(lhs > rhs || lhs == rhs);
    }

    Boolean operator>=(const Null& lhs, const Mysterious& rhs){
        return Boolean(lhs > rhs || lhs == rhs);
    }

    Boolean operator>=(const Null& lhs, const Number& rhs){
        return Boolean(lhs > rhs || lhs == rhs);
    }

    Boolean operator>=(const Null& lhs, const String& rhs){
        return Boolean(lhs > rhs || lhs == rhs);
    }

    // <
    Boolean operator<(const Null& lhs, const Null& rhs){
        return Boolean(!(lhs >= rhs));
    }

    Boolean operator<(const Null& lhs, const Boolean& rhs){
        return Boolean(!(lhs >= rhs));
    }

    Boolean operator<(const Null& lhs, const Mysterious& rhs){
        return Boolean(false);
    }

    Boolean operator<(const Null& lhs, const Number& rhs){
        return Boolean(!(lhs >= rhs));
    }

    Boolean operator<(const Null& lhs, const String& rhs){
        return Boolean(!(lhs >= rhs));
    }

    // <=
    Boolean operator<=(const Null& lhs, const Null& rhs){
        return Boolean(!(lhs > rhs));
    }

    Boolean operator<=(const Null& lhs, const Boolean& rhs){
        return Boolean(!(lhs > rhs));
    }

    Boolean operator<=(const Null& lhs, const Mysterious& rhs){
    return Boolean(false);
    }

    Boolean operator<=(const Null& lhs, const Number& rhs){
        return Boolean(!(lhs > rhs));
    }

    Boolean operator<=(const Null& lhs, const String& rhs){
        return Boolean(!(lhs > rhs));
    }

    //--
    Null operator--(Null& rhs, int)
    {
        throw std::invalid_argument("--(Null& rhs)");
    }

    // ++
    Null operator++(Null& rhs, int)
    {
        throw std::invalid_argument("++(Null& rhs)");
    }

    // -
    Null operator-(const Null lhs, const Null& rhs)
    {
        throw std::invalid_argument("-(const Null lhs, const Null& rhs)");
    }

    Null operator-(const Null lhs, const Boolean& rhs)
    {
        throw std::invalid_argument("-(const Null lhs, const Boolean& rhs)");
    }

    Null operator-(const Null lhs, const Mysterious& rhs)
    {
        throw std::invalid_argument("-(const Null lhs, const Mysterious& rhs)");
    }

    Null operator-(const Null lhs, const Number& rhs)
    {
        throw std::invalid_argument("-(const Null lhs, const Number& rhs)");
    }

    Null operator-(const Null lhs, const String& rhs)
    {
        throw std::invalid_argument("-(const Null lhs, const String& rhs)");
    }

    // /
    Null operator/(const Null lhs, const Null& rhs)
    {
        throw std::invalid_argument("/(const Null lhs, const Null& rhs)");
    }

    Null operator/(const Null lhs, const Boolean& rhs)
    {
        throw std::invalid_argument("/(const Null lhs, const Boolean& rhs)");
    }

    Null operator/(const Null lhs, const Mysterious& rhs)
    {
        throw std::invalid_argument("/(const Null lhs, const Mysterious& rhs)");
    }

    Null operator/(const Null lhs, const Number& rhs)
    {
        throw std::invalid_argument("/(const Null lhs, const Number& rhs)");
    }

    Null operator/(const Null lhs, const String& rhs)
    {
        throw std::invalid_argument("/(const Null lhs, const String& rhs)");
    }

    // +
    Null operator+(const Null lhs, const Null& rhs)
    {
        throw std::invalid_argument("+(const Null lhs, const Null& rhs)");
    }

    Null operator+(const Null lhs, const Boolean& rhs)
    {
        throw std::invalid_argument("+(const Null lhs, const Boolean& rhs)");
    }

    Null operator+(const Null lhs, const Mysterious& rhs)
    {
        throw std::invalid_argument("+(const Null lhs, const Mysterious& rhs)");
    }

    Null operator+(const Null lhs, const Number& rhs)
    {
        throw std::invalid_argument("+(const Null lhs, const Number& rhs)");
    }

    String operator+(const Null lhs, const String& rhs)
    {
        return String(lhs.toString().val + rhs.val);
    }

    // *
    Null operator*(const Null lhs, const Null& rhs)
    {
        throw std::invalid_argument("*(const Null lhs, const Null& rhs)");
    }

    Null operator*(const Null lhs, const Boolean& rhs)
    {
        throw std::invalid_argument("*(const Null lhs, const Boolean& rhs)");
    }

    Null operator*(const Null lhs, const Mysterious& rhs)
    {
        throw std::invalid_argument("*(const Null lhs, const Mysterious& rhs)");
    }

    Null operator*(const Null lhs, const Number& rhs)
    {
        throw std::invalid_argument("*(const Null lhs, const Number& rhs)");
    }

    Null operator*(const Null lhs, const String& rhs)
    {
        throw std::invalid_argument("*(const Null lhs, const String& rhs)");
    }

    String Null::toString() const {
        return String(this->val);
    }
}
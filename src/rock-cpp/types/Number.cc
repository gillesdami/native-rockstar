#include "Number.h"

namespace rock {
    bool toBool(const Number& var) {
        return !(var.val == 0);
    }
    
    // ==
    Boolean operator==(const Number& lhs, const Number& rhs){
        return Boolean(lhs.val == rhs.val);
    }

    Boolean operator==(const Number& lhs, const Boolean& rhs){
        return Boolean(false);
    }

    Boolean operator==(const Number& lhs, const Mysterious& rhs){
        return Boolean(false);
    }

    Boolean operator==(const Number& lhs, const Null& rhs){
        return Boolean(false);
    }

    Boolean operator==(const Number& lhs, const String& rhs){
        return Boolean(false);
    }

    // !=
    Boolean operator!=(const Number& lhs, const Number& rhs){
        return Boolean(!(lhs == rhs));
    }

    Boolean operator!=(const Number& lhs, const Boolean& rhs){
        return Boolean(!(lhs == rhs));
    }

    Boolean operator!=(const Number& lhs, const Mysterious& rhs){
        return Boolean(!(lhs == rhs));
    }

    Boolean operator!=(const Number& lhs, const Null& rhs){
        return Boolean(!(lhs == rhs));
    }

    Boolean operator!=(const Number& lhs, const String& rhs){
        return Boolean(!(lhs == rhs));
    }

    //>
    Boolean operator>(const Number& lhs, const Number& rhs){
        return Boolean(lhs.val > rhs.val);
    }

    Boolean operator>(const Number& lhs, const Boolean& rhs){
        throw std::invalid_argument("[comparator](const Number& lhs, const Boolean& rhs)");
    }

    Boolean operator>(const Number& lhs, const Mysterious& rhs){
        throw std::invalid_argument("[comparator](const Number& lhs, const Mysterious& rhs)");
    }

    Boolean operator>(const Number& lhs, const Null& rhs){
        return lhs > Number(0);
    }

    Boolean operator>(const Number& lhs, const String& rhs){
        return lhs > rhs.toNumber();
    }

    // >=
    Boolean operator>=(const Number& lhs, const Number& rhs){
        return Boolean(lhs > rhs || lhs == rhs);
    }

    Boolean operator>=(const Number& lhs, const Boolean& rhs){
        return Boolean(lhs > rhs || lhs == rhs);
    }

    Boolean operator>=(const Number& lhs, const Mysterious& rhs){
        return Boolean(lhs > rhs || lhs == rhs);
    }

    Boolean operator>=(const Number& lhs, const Null& rhs){
        return Boolean(lhs > rhs || lhs == rhs);
    }

    Boolean operator>=(const Number& lhs, const String& rhs){
        return Boolean(lhs > rhs || lhs == rhs);
    }

    // <
    Boolean operator<(const Number& lhs, const Number& rhs){
        return Boolean(!(lhs >= rhs));
    }

    Boolean operator<(const Number& lhs, const Boolean& rhs){
        return Boolean(!(lhs >= rhs));
    }

    Boolean operator<(const Number& lhs, const Mysterious& rhs){
        return Boolean(false);
    }

    Boolean operator<(const Number& lhs, const Null& rhs){
        return Boolean(!(lhs >= rhs));
    }

    Boolean operator<(const Number& lhs, const String& rhs){
        return Boolean(!(lhs >= rhs));
    }

    // <=
    Boolean operator<=(const Number& lhs, const Number& rhs){
        return Boolean(!(lhs > rhs));
    }

    Boolean operator<=(const Number& lhs, const Boolean& rhs){
        return Boolean(!(lhs > rhs));
    }

    Boolean operator<=(const Number& lhs, const Mysterious& rhs){
    return Boolean(false);
    }

    Boolean operator<=(const Number& lhs, const Null& rhs){
        return Boolean(!(lhs > rhs));
    }

    Boolean operator<=(const Number& lhs, const String& rhs){
        return Boolean(!(lhs > rhs));
    }

    //--
    Number operator--(Number& rhs, int)
    {
        return Number(rhs.val--);
    }

    // ++
    Number operator++(Number& rhs, int)
    {
        return Number(rhs.val++);
    }

    // -
    Number operator-(const Number lhs, const Number& rhs)
    {
        return Number(lhs.val - rhs.val);
    }

    Number operator-(const Number lhs, const Boolean& rhs)
    {
        throw std::invalid_argument("-(const Number lhs, const Boolean& rhs)");
    }

    Number operator-(const Number lhs, const Mysterious& rhs)
    {
        throw std::invalid_argument("-(const Number lhs, const Mysterious& rhs)");
    }

    Number operator-(const Number lhs, const Null& rhs)
    {
        throw std::invalid_argument("-(const Number lhs, const Null& rhs)");
    }

    Number operator-(const Number lhs, const String& rhs)
    {
        throw std::invalid_argument("-(const Number lhs, const String& rhs)");
    }

    // /
    Number operator/(const Number lhs, const Number& rhs)
    {
        return Number(lhs.val/rhs.val);
    }

    Number operator/(const Number lhs, const Boolean& rhs)
    {
        throw std::invalid_argument("/(const Number lhs, const Boolean& rhs)");
    }

    Number operator/(const Number lhs, const Mysterious& rhs)
    {
        throw std::invalid_argument("/(const Number lhs, const Mysterious& rhs)");
    }

    Number operator/(const Number lhs, const Null& rhs)
    {
        throw std::invalid_argument("/(const Number lhs, const Null& rhs)");
    }

    Number operator/(const Number lhs, const String& rhs)
    {
        throw std::invalid_argument("/(const Number lhs, const String& rhs)");
    }

    // +
    Number operator+(const Number lhs, const Number& rhs)
    {
        return Number(lhs.val + rhs.val);
    }

    Number operator+(const Number lhs, const Boolean& rhs)
    {
        throw std::invalid_argument("+(const Number lhs, const Boolean& rhs)");
    }

    Number operator+(const Number lhs, const Mysterious& rhs)
    {
        throw std::invalid_argument("+(const Number lhs, const Mysterious& rhs)");
    }

    Number operator+(const Number lhs, const Null& rhs)
    {
        throw std::invalid_argument("+(const Number lhs, const Null& rhs)");
    }

    String operator+(const Number lhs, const String& rhs)
    {
        return String(lhs.toString().val + rhs.val);
    }

    // *
    Number operator*(const Number lhs, const Number& rhs)
    {
        return Number(lhs.val * rhs.val);
    }

    Number operator*(const Number lhs, const Boolean& rhs)
    {
        throw std::invalid_argument("*(const Number lhs, const Boolean& rhs)");
    }

    Number operator*(const Number lhs, const Mysterious& rhs)
    {
        throw std::invalid_argument("*(const Number lhs, const Mysterious& rhs)");
    }

    Number operator*(const Number lhs, const Null& rhs)
    {
        throw std::invalid_argument("*(const Number lhs, const Null& rhs)");
    }

    String operator*(const Number lhs, const String& rhs)
    {
        std::ostringstream os;
        for(int i = 0; i < lhs.val; i++)
            os << rhs.val;
        return String(os.str());
    }

    String Number::toString() const {
        char s[100];
        snprintf(s, sizeof(s), "%g", this->val);
        return String(std::string(s));
    }
}
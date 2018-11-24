#include "String.h"

namespace rock {
    bool toBool(const String& var) {
        return var.val == "true" ? true : var.val == "false" ? false :
            throw std::runtime_error("Cannot convert string '" + var.val + "' to boolean");
    }
    
    // ==
    Boolean operator==(const String& lhs, const String& rhs){
        return Boolean(lhs.val == rhs.val);
    }

    Boolean operator==(const String& lhs, const Boolean& rhs){
        return Boolean(false);
    }

    Boolean operator==(const String& lhs, const Mysterious& rhs){
        return Boolean(false);
    }

    Boolean operator==(const String& lhs, const Number& rhs){
        return Boolean(false);
    }

    Boolean operator==(const String& lhs, const Null& rhs){
        return Boolean(false);
    }

    // !=
    Boolean operator!=(const String& lhs, const String& rhs){
        return Boolean(!(lhs == rhs));
    }

    Boolean operator!=(const String& lhs, const Boolean& rhs){
        return Boolean(!(lhs == rhs));
    }

    Boolean operator!=(const String& lhs, const Mysterious& rhs){
        return Boolean(!(lhs == rhs));
    }

    Boolean operator!=(const String& lhs, const Number& rhs){
        return Boolean(!(lhs == rhs));
    }

    Boolean operator!=(const String& lhs, const Null& rhs){
        return Boolean(!(lhs == rhs));
    }

    //>
    Boolean operator>(const String& lhs, const String& rhs){
        return Boolean(lhs.val > rhs.val);
    }

    Boolean operator>(const String& lhs, const Boolean& rhs){
        throw std::invalid_argument("[comparator]>(const String& lhs, const Boolean& rhs)");
    }

    Boolean operator>(const String& lhs, const Mysterious& rhs){
        throw std::invalid_argument("[comparator]>(const String& lhs, const Mysterious& rhs)");
    }

    Boolean operator>(const String& lhs, const Number& rhs){
        return lhs.toNumber() > rhs;
    }

    Boolean operator>(const String& lhs, const Null& rhs){
        throw std::invalid_argument("[comparator](const String& lhs, const Null& rhs)");
    }

    // >=
    Boolean operator>=(const String& lhs, const String& rhs){
        return Boolean(lhs > rhs || lhs == rhs);
    }

    Boolean operator>=(const String& lhs, const Boolean& rhs){
        return Boolean(lhs > rhs || lhs == rhs);
    }

    Boolean operator>=(const String& lhs, const Mysterious& rhs){
        return Boolean(lhs > rhs || lhs == rhs);
    }

    Boolean operator>=(const String& lhs, const Number& rhs){
        return Boolean(lhs > rhs || lhs == rhs);
    }

    Boolean operator>=(const String& lhs, const Null& rhs){
        return Boolean(lhs > rhs || lhs == rhs);
    }

    // <
    Boolean operator<(const String& lhs, const String& rhs){
        return Boolean(!(lhs >= rhs));
    }

    Boolean operator<(const String& lhs, const Boolean& rhs){
        return Boolean(!(lhs >= rhs));
    }

    Boolean operator<(const String& lhs, const Mysterious& rhs){
        return Boolean(!(lhs >= rhs));
    }

    Boolean operator<(const String& lhs, const Number& rhs){
        return Boolean(!(lhs >= rhs));
    }

    Boolean operator<(const String& lhs, const Null& rhs){
        return Boolean(!(lhs >= rhs));
    }

    // <=
    Boolean operator<=(const String& lhs, const String& rhs){
        return Boolean(!(lhs > rhs));
    }

    Boolean operator<=(const String& lhs, const Boolean& rhs){
        return Boolean(!(lhs > rhs));
    }

    Boolean operator<=(const String& lhs, const Mysterious& rhs){
        return Boolean(!(lhs > rhs));
    }

    Boolean operator<=(const String& lhs, const Number& rhs){
        return Boolean(!(lhs > rhs));
    }

    Boolean operator<=(const String& lhs, const Null& rhs){
        return Boolean(!(lhs > rhs));
    }

    //--
    String operator--(String& rhs, int)
    {
        throw std::invalid_argument("--(String& rhs)");
    }

    // ++
    String operator++(String& rhs, int)
    {
        throw std::invalid_argument("++(String& rhs)");
    }

    // -
    String operator-(const String lhs, const String& rhs)
    {
        throw std::invalid_argument("-(const String lhs, const String& rhs)");
    }

    String operator-(const String lhs, const Boolean& rhs)
    {
        throw std::invalid_argument("-(const String lhs, const Boolean& rhs)");
    }

    String operator-(const String lhs, const Mysterious& rhs)
    {
        throw std::invalid_argument("-(const String lhs, const Mysterious& rhs)");
    }

    String operator-(const String lhs, const Number& rhs)
    {
        throw std::invalid_argument("-(const String lhs, const Number& rhs)");
    }

    String operator-(const String lhs, const Null& rhs)
    {
        throw std::invalid_argument("-(const String lhs, const Null& rhs)");
    }

    // /
    String operator/(const String lhs, const String& rhs)
    {
        throw std::invalid_argument("/(const String lhs, const String& rhs)");
    }

    String operator/(const String lhs, const Boolean& rhs)
    {
        throw std::invalid_argument("/(const String lhs, const Boolean& rhs)");
    }

    String operator/(const String lhs, const Mysterious& rhs)
    {
        throw std::invalid_argument("/(const String lhs, const Mysterious& rhs)");
    }

    String operator/(const String lhs, const Number& rhs)
    {
        throw std::invalid_argument("/(const String lhs, const Number& rhs)");
    }

    String operator/(const String lhs, const Null& rhs)
    {
        throw std::invalid_argument("/(const String lhs, const Null& rhs)");
    }

    // +
    String operator+(const String lhs, const String& rhs)
    {
        return String(lhs.val + rhs.val);
    }

    String operator+(const String lhs, const Boolean& rhs)
    {
        return String(lhs.val + rhs.toString().val);
    }

    String operator+(const String lhs, const Mysterious& rhs)
    {
        return String(lhs.val + rhs.toString().val);
    }

    String operator+(const String lhs, const Number& rhs)
    {
        return String(lhs.val + rhs.toString().val);
    }

    String operator+(const String lhs, const Null& rhs)
    {
        return String(lhs.val + rhs.toString().val);
    }

    // *
    String operator*(const String lhs, const String& rhs)
    {
        throw std::invalid_argument("*(const String lhs, const String& rhs)");
    }

    String operator*(const String lhs, const Boolean& rhs)
    {
        throw std::invalid_argument("*(const String lhs, const Boolean& rhs)");
    }

    String operator*(const String lhs, const Mysterious& rhs)
    {
        throw std::invalid_argument("*(const String lhs, const Mysterious& rhs)");
    }

    String operator*(const String lhs, const Number& rhs)
    {
        std::ostringstream os;
        for(int i = 0; i < rhs.val; i++)
            os << lhs.val;
        return String(os.str());
    }

    String operator*(const String lhs, const Null& rhs)
    {
        throw std::invalid_argument("*(const String lhs, const Null& rhs)");
    }

    Number String::toNumber() const {
        return Number(std::stol(this->val));
    }

    String String::toString() const {
        return String(this->val);
    }
}
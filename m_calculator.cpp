#include "m_calculator.h"
//#ifndef Calculator
Calculator* Calculator::m_calculator = nullptr;
void Calculator::Add(int number) {
    Calculator::_calculator()->m_number += number;
}
void Calculator::Subtract(int number) {
    Calculator::_calculator()->m_number -= number;
}
void Calculator::Mutiply(int number) {
    Calculator::_calculator()->m_number *= number;
}
void Calculator::Divide(int number) {
    Calculator::_calculator()->m_number /= number;
}
void Calculator::InitCalculator() {
    Calculator::m_calculator = new Calculator(0);
    //return new Calculator(0);
}
//#endif // !1


//void Calculator::InitCalculator(0);

#include "Calculator.hpp"

int Calculator::sum(int a, int b) {
    return a+b;
}

int Calculator::diff(int a, int b) {
    return sum(a, -b);
}

int Calculator::mul(int a, int b) {
    return a*b;
}

int Calculator::div(int a, int b) {
    return a/b;
}

double Calculator::sum(double a, double b) {
    return a+b;
}

double Calculator::diff(double a, double b) {
    return sum(a, -b);
}

double Calculator::mul(double a, double b) {
    return a*b;
}

double Calculator::div(double a, double b) {
    return mul(a, 1/b);
}


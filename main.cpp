#include <iostream>


double multiplication(double a, double b);
double division(double a, double b);
double addition(double a, double b);

int main() {
    std::cout << "Team Name: ZakonKsiedzaDrRobaka\nLeader Role: Tester\nLeader Github ID: tomaszsztajkowski\n";
    std::cout << "DevOps: bartekmaka06\n";
    std::cout << "Developer #1: zgontea\n";
    std::cout << "Developer #2: FranciszekKarwowski\n";
    std::cout << "Tester #3: tomaszsztajkowski\n";

    return EXIT_SUCCESS;
}


double multiplication(double a, double b) {
    return a * b;
}

double division(double a, double b) {
    if (b == 0) return 0;
    return a / b;
}

double addition(double a, double b) {
    return a + b;
}
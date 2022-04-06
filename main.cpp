#include <iostream>

double difference(double a, double b);
double multiplication(double a, double b);
double division(double a, double b);
double addition(double a, double b);

int main()/*makapaka*/ {
    std::cout << "Team Name: ZakonKsiedzaDrRobaka\nLeader Role: Tester\nLeader Github ID: tomaszsztajkowski\n";
    std::cout << "DevOps: bartekmaka06\n";
    std::cout << "Developer #1: zgontea\n"; //dzbanek
    std::cout << "Developer #2: FranciszekKarwowski\n";
    std::cout << "Tester #3: tomaszsztajkowski\n";

    return EXIT_SUCCESS;
}
//komentarz3
double difference(double a, double b) {
    return a - b;
}

double multiplication(double a, double b) {
    return a * b;
}
//komentarz2
double division(double a, double b) {
    if (b == 0) return 0;
    return a / b;
}
//komentarz1
double addition(double a, double b) {
    return a + b;//frankenstein
}
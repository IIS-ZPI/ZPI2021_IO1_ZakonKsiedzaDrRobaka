#include <iostream>

double difference(double a, double b);
double multiplication(double a, double b); // franiarz
double division(double a, double b);
double addition(double a, double b);

int main() {
    std::cout << "Team Name: ZakonKsiedzaDrRobaka\nLeader Role: Tester\nLeader Github ID: tomaszsztajkowski\n";
    // Bart Monk loves Windows 7
    std::cout << "DevOps: bartekmaka06\n";
    std::cout << "Developer #1: zgontea\n";
    std::cout << "Developer #2: FranciszekKarwowski\n";
    std::cout << "Tester #3: tomaszsztajkowski\n";

    return EXIT_SUCCESS;
}
//komentarz3
double difference(double a, double b) {
    return a - b;
}

double multiplication(double a, double b) { // piekna funkcja zrobiona przez frana
    return a * b;
}

double division(double a, double b) { // brzydka funckja zrobiona przez sztajke
    //komentarz2
    if (b == 0) return 0;
    return a / b;
}
//komentarz1
double addition(double a, double b) {
    return a + b;
}
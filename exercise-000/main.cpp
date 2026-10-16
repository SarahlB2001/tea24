#include <fmt/chrono.h>
#include <fmt/format.h>

#include <stdlib.h>
#include "config.h"


void changeValueByParameter (int value) {
    value = 99;
    fmt:: println("Wert von value: {}", value);
}
void changeValueByPointer(int*ptr) {
    *ptr = 77;
    fmt:: println("Neuer Wert von value: {}", *ptr);
}

int main(int argc, char **argv) {
    int var = 4711;
    int x = 10;
    int *p = &x;
    double* d = new double(3.1415);   // Speicher reservieren UND initialisieren
    int y = 5;

    fmt::print("Wert von x: {} und die Adresse von x:{}",x,fmt::ptr(&x));
    fmt::print("Wert von p: {} und die Adresse von p:{}",*p,fmt::ptr(&p));

    *p = 42;
    fmt::print("neuer Wert von x: {} und der Wert auf den p zeigt:{}",x,*p);

    fmt::println("Wert von d: {} und Adresse von d:{}", *d,fmt::ptr(&d));
    delete d;                         // Speicher freigeben

    /** teil 3 */



    /**
     * The {fmt} lib is a cross platform library for printing and formatting text
     * it is much more convenient than std::cout and printf
     * More info at https://fmt.dev/12.0/api/
     */
    fmt::print("Hello, {}!\n", tea::PROJECT_NAME);

    /* INSERT YOUR CODE HERE */
        fmt::print("Value of var: {}!\n", var);
        fmt::print("Value of argc: {}!\n", argc);


    return 0; /* exit gracefully*/
}

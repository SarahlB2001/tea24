#include <fmt/chrono.h>
#include <fmt/format.h>

#include "config.h"

int main(int argc, char **argv) {
    int var = 4711;
    int x = 10;
    int *p = &x;
    double* d = new double(3.1415);   // Speicher reservieren UND initialisieren


    fmt::print("Wert von x: {} und die Adresse von x:{}",x,fmt::ptr(&x));
    fmt::print("Wert von p: {} und die Adresse von p:{}",*p,fmt::ptr(&p));

    *p = 42;
    fmt::print("neuer Wert von x: {} und der Wert auf den p zeigt:{}",x,*p);

    fmt::println("Wert von d: {} und Adresse von d:{}", *d,fmt::ptr(&d));
    delete d;                         // Speicher freigeben


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

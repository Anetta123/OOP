#include <iostream>
#include "money.h"

int main(void) {
    
    Money a1;
    Money a2;
    float arg;

    std::cout << "First:" << std::endl;
    std::cin >> a1;
    std::cout << "Second:" << std::endl;
    std::cin >> a2;
    std::cout << "Number div and multiply" << std::endl;
    std::cin >> arg;
    if(arg == 0){
        std::cout << "cannot be divided by zero" << std::endl;
        return 0;
    }
    std::cout << std::endl;

    std::cout << a1;

    std::cout << a2;

    std::cout << a1+a2;

    std::cout << a1 - a2;

    std::cout << a1 / a2 << std::endl;

    std::cout << a1 / arg;

    std::cout << a1 * arg << std::endl;

    if(a1 < a2) std::cout << "<:" << std::endl;
    else std::cout << "<: false" << std::endl;

    if(a1 > a2) std::cout << ">: true" << std::endl;
    else std::cout << ">: false" << std::endl;

    if(a1 <= a2) std::cout << "<=: true" << std::endl;
    else std::cout << "<=: false" << std::endl;

    if(a1 >= a2) std::cout << ">=: true" << std::endl;
    else std::cout << ">=: false" << std::endl;

    if(a1 == a2) std::cout << "==: true" << std::endl;
    else std::cout << "==: false" << std::endl;

    if(a1 != a2) std::cout << "!=: true" << std::endl;
    else std::cout << "!=: false" << std::endl;

    long double sum;
    std::cout << "insert summ (+50 cops): ";
    std::cin >> sum;
    std::cout << sum + 50.00_toCop << std::endl;

    return 0;
}

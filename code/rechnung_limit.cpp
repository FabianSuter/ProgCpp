#include <iostream>
int main() {
    unsigned int limit;
    std::cout << "Positive Zahl eingeben: ";
    std::cin >> limit;
    int sum = 0;
    for (unsigned int i=1 ; i <= limit ; i++) { 
        if ( i % 3 == 0 && i % 7 == 0 ) sum += i;
    } 
    std::cout << "Gesuchter Wert: " << sum << std::endl;
    return 0;
}
#include <iostream> // cin, cout etc.

int main() {
    //Initialisierung
    int l = 0;
    std::string str;
    //Einlesen
    std::cin >> l >> str;
    //Ausgeben
    std::cout << l << str << std::endl;
    std::cout << std::showbase << std::hex << 27 << std::endl; 
    // Output: 0x1b
    return 0;
}
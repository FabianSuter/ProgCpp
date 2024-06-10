#include <iostream>

int main() {
    int n;
    int* ptr; // Manuell immer mit Pointer!!
    std::cout << "Enter number of elements:" << std::endl;
    std::cin >> n;
    std::cout << "Entered number of elements: " << n << std::endl;
    ptr = new int[n]; //Allokation
    if (ptr == nullptr) { // Fehlerbehandlung
        std::cerr << "Memory not allocated." << std::endl;
        exit(0);
    } else {
        std::cout << "Memory successfully allocated." << std::endl;
        for (int i = 0; i < n; ++i) {
            ptr[i] = i + 1;
        }
        std::cout << "The elements of the array are: ";
        for (int i = 0; i < n; ++i) {
            std::cout << ptr[i] << " ";
        }
        delete[] ptr; //Deallokation
    }
    return 0;
}
//main.cpp
#include "drink.h" 
#include <iostream> 
int main() { 
    Drink* glass[] = {new Drink, new Drink("Minaral"),
                      new SweetDrink("Apfelsaft"), nullptr, 
                      new AlcDrink("Cuba Libre", 15.0)}; 
    // memory map 
    for (int i = 0; i < sizeof(glass) / sizeof(glass[0]); i++) {
        if (glass[i]) { 
            glass[i]->mix(); 
            delete glass[i]; 
            glass[i] = nullptr; 
        } else { 
            std::cout << "Nothing to mix!" << std::endl; 
        } 
    } 
}
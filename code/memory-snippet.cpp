//drink.cpp
#include "drink.h" 
#include <iostream> 
Drink::Drink() : name{"Noname"} { 
    std::cout << "Drink ctor" << std::endl; 
} 

Drink::Drink(const std::string& name) : name{name} {
    std::cout << name << " ctor" << std::endl;
} 

Drink::~Drink() { 
    std::cout << name << " to gully" << std::endl;
} 

void Drink::mix() const { 
    std::cout << name << " mixing" << std::endl;
} 

SweetDrink::SweetDrink(const std::string& name) : Drink{name} { 
    std::cout << "Sweet" << std::endl;
} 

void SweetDrink::mix() const { 
    std::cout << "Mixing sweet drink: " << std::endl; 
    Drink::mix(); 
} 

AlcDrink::AlcDrink(const std::string& name, double volPercent) : Drink{name}, volPercent{volPercent} { 
    std::cout << "AlcDrink. Volume percent alcohol: " << volPercent << std::endl; 
} 

AlcDrink::~AlcDrink() { 
    std::cout << "Scoop it out!" << std::endl;
}
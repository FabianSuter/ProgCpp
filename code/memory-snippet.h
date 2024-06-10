//drink.h
#pragma once 
#include <string> 
#include <iostream> 
class Drink { 
    public: 
        Drink(); 
        Drink(const std::string& drinkName);
        virtual ~Drink(); 
        virtual void mix() const; 
    private: 
        std::string name; 
}; 

class SweetDrink : public Drink { 
    public: 
        SweetDrink(const std::string& drinkName);
        virtual ~SweetDrink() = default; 
        void mix() const override; 
}; 

class AlcDrink : public Drink { 
    public: 
        AlcDrink(const std::string& drinkName, double volPercent); 
        virtual ~AlcDrink(); 
    private: 
        double volPercent;
};
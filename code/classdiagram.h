#pragma once 
#include <string> 

class Person { 
    public: 
        Person(const std::string& name); 
        void setName(const std::string& value); 
        int getId(); virtual void print() = 0; 
    private: std::string name; 
        int id; 
        static int personenZaehler; 
}; 

class Student : public Person { 
    public: 
        Student(const std::string& name, int matrikel); 
        void setMatrikel(int wert); 
        void print(); 
    private: 
        int matrikel; 
}; 

class Professor : public Person { 
    public: 
        Professor(const std::string& name); 
        void setPersonalnr(int wert); 
        void print(); 
    private: 
        int personalnr; 
};
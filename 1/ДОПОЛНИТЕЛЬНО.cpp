#include <iostream>
using namespace std;

class Animal{
public:
   Animal(const char* Name) : name_(Name){}
    virtual void Speak(){
        std::cout << "ANIMAL called " << name_ << std::endl;
    }
    const char* name_;
};

class Dog : public Animal{
public:
    Dog(const char* Name) : Animal(Name) {}
    void Speak(){
        std::cout << "DOG called " << name_ << std::endl;
    }
};

int main(void){
    Animal Bob("Bob");
    Dog Steve("Steve");
    Bob.Speak();
    Steve.Speak();
}

//в программе использование полиморфизма в том что при использовании функции Speak() программа выдаёт разные выводы

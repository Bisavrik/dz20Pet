#include "Pet.h"

Pet::Pet(const char* name) : name(name) {}

void Pet::Show() const
{
    cout << "Name: " << name << endl;
}

Dog::Dog(const char* name) : Pet(name) {}

void Dog::Sound() const
{
    cout << "Woof!" << endl;
}

void Dog::Type() const
{
    cout << "Type: Dog" << endl;
}

Cat::Cat(const char* name) : Pet(name) {}

void Cat::Sound() const
{
    cout << "Meow!" << endl;
}

void Cat::Type() const 
{
    cout << "Type: Cat" << endl;
}

Parrot::Parrot(const char* name) : Pet(name) {}

void Parrot::Sound() const 
{
    cout << "Squawk!" << endl;
}

void Parrot::Type() const 
{
    cout << "Type: Parrot" << endl;
}

Hamster::Hamster(const char* name) : Pet(name) {}

void Hamster::Sound() const
{
    cout << "Squeak!" << endl;
}

void Hamster::Type() const 
{
    cout << "Type: Hamster" << endl;
}
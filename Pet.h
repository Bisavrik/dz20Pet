#ifndef PET_H
#define PET_H

#include <iostream>
using namespace std;

class Pet 
{
protected:
    const char* name;

public:
    Pet(const char* name);
    virtual ~Pet() = default;

    virtual void Sound() const = 0;  
    virtual void Show() const;       
    virtual void Type() const = 0;   
};

class Dog : public Pet
{
public:
    Dog(const char* name);
    void Sound() const override;
    void Type() const override;
};

class Cat : public Pet 
{
public:
    Cat(const char* name);
    void Sound() const override;
    void Type() const override;
};

class Parrot : public Pet
{
public:
    Parrot(const char* name);
    void Sound() const override;
    void Type() const override;
};

class Hamster : public Pet 
{
public:
    Hamster(const char* name);
    void Sound() const override;
    void Type() const override;
};

#endif

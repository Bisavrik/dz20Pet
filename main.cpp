#include "Pet.h"

int main() 
{
    Pet* pets[] =
    {
        new Dog("Buddy"),
        new Cat("Whiskers"),
        new Parrot("Polly"),
        new Hamster("Nibbles")
    };

    for (int i = 0; i < 4; ++i) 
    {
        pets[i]->Show();
        pets[i]->Type();
        pets[i]->Sound();
        cout << "----------------------" << endl;
    }

    for (int i = 0; i < 4; ++i)
    {
        delete pets[i];
    }

    return 0;
}
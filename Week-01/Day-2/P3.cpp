// Write a program for a robot that takes an input and accordingly print hello in a different language

#include <iostream>
using namespace std;

int main()
{
    char inp;
    cin >> inp;
    switch (inp)
    {
    case 'a':
        cout << "Hello";
        break;
    case 'b':
        cout << "Hola";
        break;
    case 'c':
        cout << "ciao";
        break;
    default:
        cout << "I am still learning more...";
    }

    return 0;
}
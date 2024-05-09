#include<iostream> // Importing the necessary library for input-output operations.
using namespace std; // Using the standard namespace.

// Defining a class named IndiaBix.

class IndiaBix // Defining a class named IndiaBix.
{
    static int x=90; // Declaring a static integer variable x.
    
    public:
    static void SetData(int xx) // Defining a static member function SetData which takes an integer parameter.
    {
        x = xx; // Assigning the value passed as parameter to the static variable x.
    }
    
    static void Display() // Defining another static member function Display.
    {
        cout<< x ; // Displaying the value of static variable x.
    }
};

// Initializing the static variable x.
// int IndiaBix::x = 0; 

int main() // The starting point of the program.
{
    IndiaBix::SetData(44); // Calling the static member function SetData of class IndiaBix and passing 44 as argument.
    IndiaBix::Display(); // Calling the static member function Display of class IndiaBix to display the value of static variable x.
    return 0; // Indicating successful execution of the program.
}

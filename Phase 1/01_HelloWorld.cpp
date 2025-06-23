#include <iostream> // We include this to use the standard input/output stream objects.

using namespace std; // More on namespaces in the notes ( they're in the readme ), 
                     // but this allows us to use standard library names without the std:: prefix.
                     // so you dont need to write std::cout, you can just write cout.
int main()
// The main function is the entry point of a C++ program, this is where the compiler knows to start executing the code.
{
    cout << "Hello world!"; // this is like python's print command, it outputs whatever is inside "" to the console.
    return 0; // you dont really need to add this, but it indicates that the program has finished successfully.
}
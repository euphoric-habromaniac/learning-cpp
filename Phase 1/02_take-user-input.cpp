#include <iostream> 

using namespace std;
int main()
{
    string name; // You just declared a string variable called name
    cout << "Whats your name?";
    cin >> name;
    cout << "Hello, " << name << "!";
    // we can put together different things in cout, like variables and strings, we just need to use the << operator to do that.
    return 0;
}
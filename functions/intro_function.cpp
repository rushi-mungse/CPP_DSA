#include <iostream>
using namespace std;

void print_msg(); // declaration of function

int main()
{
    cout << "Hello from main() \n";
    print_msg();
    return 0;
}

void print_msg() // defination of function
{
    cout << "Hello from function() \n";
    return;
}
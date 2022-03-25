#include <iostream>
using namespace std;

class User
{
    // access mpdifier
public:
    int age;
    string name;

    // constructor function
    User(int age1, string name1)
    {
        age = age1;
        name = name1;
    }
    static void hello()
    {
        cout << "Hello everyone!" << endl;
        return;
    }
};

int main()
{
    User rushi(45, "rushi");
    User *hari = new User(59, "Hari");
    cout << hari->age << hari->name << endl;
    cout << rushi.age << endl;
    cout << rushi.name << endl;
    rushi.hello();

    return 0;
}
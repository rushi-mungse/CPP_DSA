#include <iostream>
using namespace std;

template <class T> // generic function  template<typename T>

void Swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
    return;
}

int main()
{
    int a = 4, b = 5;
    char c = 'c', d = 'd';

    cout << a << "---" << b << endl;
    Swap<int>(a, b);
    cout << a << "---" << b << endl;

    cout << c << "---" << d << endl;
    Swap<char>(c, d);
    cout << c << "---" << d << endl;

    return 0;
}
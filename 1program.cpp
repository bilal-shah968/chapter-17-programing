#include <iostream>
using namespace std;

template <class Type>
Type Max(Type a, Type b)
{
    return (a > b) ? a : b;
}

int main()
{
    int n;
    float m;
    
    n = Max(10, 50); 
    cout << "Maximum of two integers: " << n << endl;
    
    m = Max(3.5f, 2.2f); 
    cout << "Maximum of two floats: " << m << endl;
    cin.get(); 
    return 0;
}

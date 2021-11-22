#include <iostream>

using namespace std; 

int main()
{
    //check if this is a triangle
    int a, b, c;
    cout << ("Enter the lengths of the sides of the triangle: ");
    cin >> a >> b >> c;

    if (a < b + c && c < a + b && b < a + c)
    {
        cout << ("It's triangle!");
    }
    else
    {
        cout << ("It's not a triangle!");
    }

    return 0;
}

#include <iostream>
using namespace std;

bool Input(int& a, int& b)
{
    cout << "Input two numbers: \n";
    cin >> a >> b;
    if (a != b)
        return true;
    else
        return false;
}

int main()
{
    int a, b;
    if (Input(a, b) == false) // if(!Input(a,b))
    {
        cerr << "error";
        return 1;
    }
    int s = a + b;
    cout << "The sum of this two numbers = " << s << endl;
    return 0;
}
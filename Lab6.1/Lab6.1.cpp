#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    cout << "Enter text for the file: " << endl;
    string fileName = "text.txt";
    ofstream fout(fileName);

    const int MAX = 150;
    char str[MAX];
    cin.get(str, MAX, '!');
    fout << str << endl;
    fout.close();
}
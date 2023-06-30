#include <iostream>
#include <string>
#include <map>


using std::string;
using std::map;
using std::cout;
using std::endl;


struct StudentGrade
{
    string name;
    char grade;

    StudentGrade(string name, char grade)
    {
        this->name = name;
        this->grade = grade;
    }
};

int main()
{    
    const char grade5 = '5';
    const char grade4 = '4';
    const char grade3 = '3';
    const char grade2 = '2';
    const char gradeN = 'N';

    StudentGrade alexander("Alexander", grade5);
    StudentGrade sergey("Sergey", grade4);
    StudentGrade anna("Anna", grade5);
    StudentGrade helen("Helen", gradeN);

    map<string, char> studMap;
    studMap[alexander.name] = alexander.grade;
    studMap[sergey.name] = sergey.grade;
    studMap[anna.name] = anna.grade;
    studMap[helen.name] = helen.grade;

    for (auto item = studMap.begin(); item != studMap.end(); item++)
    {
        cout << item->first << ": " << item->second << endl;
    }

    return 0;
}
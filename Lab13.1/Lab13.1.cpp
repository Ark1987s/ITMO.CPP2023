#include <iostream>
#include <vector>
#include "Human.h"
#include "Teacher.h"
#include "Student.h"

using std::vector;

int main()
{
	vector<int> scores;
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(4);
	scores.push_back(4);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	Human* stud = new Student("Ivanov", "Andrey", "Petrovich", scores);

	unsigned int teacher_work_time = 40;
	Human* tch = new Teacher("Smirnov", "Alexander", "Nikolaevich", teacher_work_time);

	Human* humans[] = { stud, tch };
	humans[0]->print();
	humans[1]->print();

	delete stud;
	delete tch;
	return 0;
}
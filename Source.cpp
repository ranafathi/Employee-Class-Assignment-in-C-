#include<iostream>
#include<string>
#include<algorithm>
#include "Header.h"
using namespace std;

int main()
{
	int i, id=0, sal=0, a=0;
	string n;
	Employee emp[2];
	cout << "Please enter employee name, age, ID and salary" << endl;
	
	// Manager salary >= 5000
	// Senior salary >= 3000
	// Junior salary < 3000

	for (i = 0; i < 2; i++)
	{
		cout << "Enter Name" << endl;
		emp[i].setName(n);
		cout << " Enter ID" << endl;
		emp[i].setID(id);
		cout << " Enter Age" << endl;
		emp[i].setAge(a);
		cout << " Enter Salary" << endl;
		emp[i].setSal(sal);

		for ( int j = 0; j < 3; j++)
	{
		emp[j].getName();
		emp[j].getID();
		emp[j].getAge();
		emp[j].getSal();
		cout << "Employee details: " << endl;
		emp[j].showEmployee();
		emp[j].showOrder();
	}

	}

	

	return 0;
	system("pause");
}
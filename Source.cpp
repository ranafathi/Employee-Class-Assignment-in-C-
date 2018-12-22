#include<iostream>
#include<string>
#include<algorithm>
#include "Header.h"
using namespace std;

int main()
{
	Employee emp,y;
	int id = 0, sal = 0, a = 0;
	string n;

	cout << "Please enter employee name, age, ID and salary" << endl;

	// Manager salary >= 5000
	// Senior salary >= 3000
	// Junior salary < 3000


	cout << "Enter Name" << endl;
	getline(cin, n);
	emp.setName(n);
	cout << "Enter ID" << endl;
	cin >> id;
	emp.setID(id);
	cout << "Enter Age" << endl;
	cin >> a;
	emp.setAge(a);
	cout << "Enter Salary" << endl;
	cin >> sal;
	emp.setSal(sal);

	
	cout << "******Employee details: " << endl;
	cout << emp.getName() << endl;
	cout << emp.getID() << endl;
	cout << emp.getAge() << endl;
	cout << emp.getSal() << endl;


	cout << "******Using the show employee function:" << endl;
	emp.showEmployee();


	cout << "Employee " << emp.getName() << "  is a  ";
	emp.showOrder();


	system("pause");
	return 0;
}

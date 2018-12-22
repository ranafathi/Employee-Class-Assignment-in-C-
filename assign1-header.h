#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Employee
{
private:
	string name;
	int empID;
	int age;
	int salary;

public:
	Employee() {
		string name = "  ";
		int empID = 0;
		int age = 0;
		int salary = 0;
	}//default constructor

	Employee(string n, int id, int a, int sal) {
		name = n;
		empID = id;
		age = a;
		salary = sal;
	}//parametirized 

	string getName() { return name; }//getter
	int getID() { return empID; }//getter
	int getAge() { return age; }//getter
	int getSal() { return salary; }//getter

	void setName(string n) { name = n; } //setter
	void setID(int id) { empID = id; } //setter
	void setAge(int a) { age = a; } //setter
	void setSal(int sal) { salary = sal; } //setter

	void showEmployee() {
		cout << "Name: " << name << endl;
		cout << "ID: " << empID << endl;
		cout << "Age: " << age << endl;
		cout << "Salary: " << salary << endl;
	}

	void showOrder() {
		if (salary >= 5000) {
			cout << "Manager" << endl;
		}
		else if (salary >= 3000) {
			cout << "Senior Employee" << endl;
		}
		else if (salary < 3000) {
			cout << "Junior Employee" << endl;
		}
		else if (salary == 0) { cout << "Salary cannot be 0" << endl; }
		else cout << "Invalid salary" << endl;
	}
	//operators overloaded
	Employee operator+(Employee const &emp) {
		Employee res;
		res.empID = empID + emp.empID;
		res.salary = salary + emp.salary;
		return res;
	}

	friend ostream& operator<<(ostream &output, const Employee &emp1) {
		output << "Name:" << emp1.name << "/n ID:" << emp1.empID << "/n Age:" << emp1.age << "/n Salary:" << emp1.salary;
		return output;
	}

	friend istream& operator>>(istream &input, Employee &emp2) {
		input >> emp2.name >> emp2.empID >> emp2.age >> emp2.salary;
		return input;
	}

	Employee &operator++() {
		age++;
		return *this;
	}

	Employee operator++(int) {
		Employee e;
		e = *this;
		age++;
		empID++;
		salary += 1000;

		return *this;
	}

	bool operator==(Employee a) {
		return this->salary == a.salary;
	}
	//end of operators overloaded
};
#pragma once

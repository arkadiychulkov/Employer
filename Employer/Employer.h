#pragma once
#include <iostream>
using namespace std;

class Employer {
protected:
	int salary;
public:
	Employer() {
		cout << "Employer constructor" << endl;
	}
	virtual void Show() = 0;
	~Employer() {
		cout << "Employer destructor" << endl;
	}
};

class worker : public Employer {
public:
	worker(int sal) {
		cout << "worker constructor" << endl;
		salary = sal;
	}
	void Show() {
		cout << "worker sallary is " << salary << endl;
	}
	~worker() {
		cout << "worker destructor" << endl;
	}
};

class manager : public Employer {
public:
	manager(int sal) {
		cout << "manager constructor" << endl;
		salary = sal;
	}
	void Show() {
		cout << "manager sallary is " << salary << endl;
	}
	~manager() {
		cout << "manager destructor" << endl;
	}
};

class president : public Employer {
public:
	president(int sal) {
		cout << "president constructor" << endl;
		salary = sal;
	}
	void Show() {
		cout << "president sallary is " << salary << endl;
	}
	~president() {
		cout << "president destructor" << endl;
	}
};
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include<vector>

using namespace std;

class Employee
{
protected:
	string FullName;
public:
	void set_FullName(string);
	string get_FullName();

	virtual int get_Total() {
		return 0;
	}
	virtual void set_Total(int) {
		return;
	}
	virtual float get_Payment() {
		return 0;
	}
	virtual void set_Payment(float k) {
		return;
	}
	virtual float get_fixedPayment() {
		return 0;
	}
	virtual void set_fixedPayment(float) {
		return;
	}
	virtual float countSalary() {
		return 0;
	}
	virtual int Choice() {
		return 0;
	}
	
	static Employee* make_Employee(int choice);
};



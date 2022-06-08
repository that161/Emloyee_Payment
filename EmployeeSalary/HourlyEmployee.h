#pragma once
#include "Employee.h"

class HourlyEmployee :public Employee {
private:
	int hours;
	float HourlyPayment;
public:
	int get_Total();
	void set_Total(int);
	float get_Payment();
	void set_Payment(float);
	float countSalary();
	int Choice() {
		return 2;
	}
};


#pragma once
#include "Employee.h"

class DailyEmployee : public Employee {
private:
	int days;
	float DailyPayment;
public:
	int get_Total();
	void set_Total(int);
	float get_Payment();
	void set_Payment(float k);
	float countSalary();
	int Choice() {
		return 1;
	}
};


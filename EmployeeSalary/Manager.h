#pragma once
#include "Employee.h"

class Manager : public Employee {
private:
	float fixedPayment;
	int TotalEmployees;
	float PaymentEmployee;
public:
	int get_Total();
	float get_Payment();
	float get_fixedPayment();
	void set_fixedPayment(float);
	void set_Total(int);
	void set_Payment(float);
	float countSalary();
	int Choice() {
		return 4;
	}
};

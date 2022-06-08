#pragma once
#include "Employee.h"

class ProductEmployee : public Employee 
{
private:
	int products;
	float PaymentProduct;

public:
	int get_Total();
	void set_Total(int);
	float get_Payment();
	void set_Payment(float);
	float countSalary();
	int Choice() {
		return 3;
	}
};


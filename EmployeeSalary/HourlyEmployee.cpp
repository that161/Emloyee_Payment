#include "HourlyEmployee.h"

float HourlyEmployee::countSalary() {
	return hours * HourlyPayment;
}


int HourlyEmployee::get_Total() {
	return hours;
}

void HourlyEmployee::set_Total(int k) {
	hours = k;
}

float HourlyEmployee::get_Payment() {
	return HourlyPayment;
}

void HourlyEmployee::set_Payment(float k) {
	HourlyPayment = k;
}

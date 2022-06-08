#include "DailyEmployee.h"

float DailyEmployee::countSalary() {
	return days * DailyPayment;
}

int DailyEmployee::get_Total() {
	return days;
}

void DailyEmployee::set_Total(int k) {
	days = k;
}

float DailyEmployee::get_Payment() {
	return DailyPayment;
}

void DailyEmployee::set_Payment(float k) {
	DailyPayment = k;
}

#include "Manager.h"

float Manager::countSalary() {
	return fixedPayment + (TotalEmployees * PaymentEmployee);
}

float Manager::get_fixedPayment() {
	return fixedPayment;
}

int Manager::get_Total() {
	return TotalEmployees;
}

void Manager::set_fixedPayment(float k) {
	fixedPayment = k;
}

void Manager::set_Payment(float k) {
	PaymentEmployee = k;
}

float Manager::get_Payment() {
	return PaymentEmployee;
}

void Manager::set_Total(int k) {
	TotalEmployees = k;
}

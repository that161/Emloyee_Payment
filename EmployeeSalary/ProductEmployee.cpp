#include "ProductEmployee.h"

float ProductEmployee::countSalary() {
	return products * PaymentProduct;
}

int ProductEmployee::get_Total() {
	return products;
}

void ProductEmployee::set_Total(int k) {
	products = k;
}

float ProductEmployee::get_Payment() {
	return PaymentProduct;
}

void ProductEmployee::set_Payment(float k) {
	PaymentProduct = k;

}
#include "Employee.h"
#include "DailyEmployee.h"
#include "HourlyEmployee.h"
#include "Manager.h"
#include "ProductEmployee.h"

string Employee::get_FullName() {
	return FullName;
}

void Employee::set_FullName(string k) {
	FullName = k;
}

Employee* Employee::make_Employee(int choice) {
	if (choice == 1)
		return new DailyEmployee;
	if (choice == 2)
		return new HourlyEmployee;
	if (choice == 3)
		return new ProductEmployee;
	if (choice == 4)
		return new Manager;
}


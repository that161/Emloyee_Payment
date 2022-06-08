#pragma once
#include "Employee.h"
#include "DailyEmployee.h"
#include "HourlyEmployee.h"
#include "Manager.h"
#include "ProductEmployee.h"

class ListEmployee
{
private:
	string FullName;
	vector<Employee*> arr;
public:
	void readFile(const char*);
	float printSalary();
};



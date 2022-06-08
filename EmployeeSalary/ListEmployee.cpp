#include "ListEmployee.h"

void ListEmployee::readFile(const char* Input) {
	freopen(Input, "rt", stdin);
	int count = 0;
	string temp_Type;
	string temp_FullName;
	string tmp;
	short flag;
	float temp_Payment;
	float temp_Total;
	float second_temp_Payment;
	while (!feof(stdin)) {
		flag = -1;
		getline(cin, temp_Type, ':');
		if (temp_Type == "DailyEmployee")
			flag = 1;
		else if (temp_Type == "HourlyEmployee")
			flag = 2;
		else if (temp_Type == "ProductEmployee")
			flag = 3;
		else if (temp_Type == "Manager")
			flag = 4;
		getline(cin, temp_FullName, '\n');
		getline(cin, tmp, '=');
		cin >> temp_Payment;
		getline(cin, tmp, '=');
		cin >> temp_Total;
		if (flag == 4) {
			getline(cin, tmp, '=');
			cin >> second_temp_Payment;
		}
		switch (flag)
		{
		case 1:
			this->arr.push_back(Employee::make_Employee(flag));
			this->arr[count]->set_FullName(temp_FullName);
			this->arr[count]->set_Payment(temp_Payment);
			this->arr[count]->set_Total(temp_Total);
			count++;
			break;
		case 2:
			this->arr.push_back(Employee::make_Employee(flag));
			this->arr[count]->set_FullName(temp_FullName);
			this->arr[count]->set_Payment(temp_Payment);
			this->arr[count]->set_Total(temp_Total);
			count++;
			break;
		case 3:
			this->arr.push_back(Employee::make_Employee(flag));
			this->arr[count]->set_FullName(temp_FullName);
			this->arr[count]->set_Payment(temp_Payment);
			this->arr[count]->set_Total(temp_Total);
			count++;
			break;
		case 4:
			this->arr.push_back(Employee::make_Employee(flag));
			this->arr[count]->set_FullName(temp_FullName);
			this->arr[count]->set_Payment(second_temp_Payment);
			this->arr[count]->set_Total(temp_Total);
			this->arr[count]->set_fixedPayment(temp_Payment);
			count++;
			break;
		}
		getline(cin, tmp, '\n');
	}
}

float ListEmployee::printSalary() {
	int tmp;
	int SIZE = arr.size();
	cout << " FullName\t\tType\t\t\tSalary\n";
	cout << "------------------------------------------------------" << endl;
	float Sum_of_Salary = 0;
	for (int i = 0; i < SIZE; i++) {
		tmp = arr[i]->Choice();
		switch (tmp)
		{
		case 1:
			cout  << arr[i]->get_FullName() <<"\t\tDailyEmployee\t\t"<< arr[i]->countSalary() << endl;
			Sum_of_Salary += arr[i]->countSalary();
			break;

		case 2:
			cout << arr[i]->get_FullName() << "\t\tHourlyEmployee\t\t" << arr[i]->countSalary() << endl;
			Sum_of_Salary += arr[i]->countSalary();
			break;
		case 3:
			cout << arr[i]->get_FullName() << "\t\tProductEmployee\t\t" << arr[i]->countSalary() << endl;
			Sum_of_Salary += arr[i]->countSalary();
			break;
		case 4:
			cout << arr[i]->get_FullName() << "\t\tManager\t\t\t" << arr[i]->countSalary() << endl;
			Sum_of_Salary += arr[i]->countSalary();
			break;
		}
	}
	return Sum_of_Salary;
}
//Write a program that used to manage The HR data of a department
//that has a team of 5 employees.The employee data like(eno, ename
//    job, salary, bonus).The program should have


//1. Function to accept the data of employees and automatically set the
//salary according to the following formulas In case the


//job = 'Manager'> salary      = 5000
//job = 'Engineer' > salary    = 3000
//job = "Clerck' > salary      = 2000
//Otherwise > salary           = 1000


//2. Function to set the bonus value for a specific employee
//according to specific percent.
 

//3. Function to print out the data of all employees.


#include <iostream>;
#include <string>;
using namespace std;


struct empolyee
{
	int eno;
	string name; 
	string job;
	float salary; 
	float bouns;
	float total_salary;

};

void get_data(empolyee arr[], int size);
void set_bounce(empolyee &e, float percent);
void print(empolyee arr[], int size);
int main ()
{
	empolyee emps[5];
	get_data(emps, 5);
	set_bounce(emps[1] , 0.10);
	print(emps, 5);
}

void get_data(empolyee arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Please Enter Empolyee Number , Empolyee Name , Empolyee Jop for Empolyee " << i + 1 << endl;
		cin >> arr[i].eno >> arr[i].name >> arr[i].job;
	
		if (arr[i].job == "Manager")
			arr[i].salary = 5000;

		else if (arr[i].job == "Engineer")
			arr[i].salary = 3000;

		else if (arr[i].job == "Clerck")
			arr[i].salary = 2000;
		else
			arr[i].salary = 1000;
	}

	
}

void set_bounce(empolyee &e, float percent)
{
	e.bouns = e.salary * percent;

}

void print(empolyee arr[], int size)
{
	for(int i = 0; i < size; i++)
	{

		cout << "Empolyee Number is " << arr[i].eno << endl;
		cout << "Empolyee Name is " << arr[i].name << endl;
		cout << "Empolyee Job is " << arr[i].job << endl;
		cout << "Empolyee Salary is " << arr[i].salary << endl;
		cout << "Empolyee Bounce is " << arr[i].bouns << endl;
		cout << "Empolyee Total Salary is " << arr[i].total_salary << endl;

		cout << "*********************************\n";
	}


}

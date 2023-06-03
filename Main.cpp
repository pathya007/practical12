Question 12: Company maintains employee information as employee ID, name,
designation and salary. Allow user to add, delete 
2 information of employee. Display information of particular employee. If employee
does not exist an appropriate message is 
3 displayed. If it is, then the system displays the employee details. Use index
sequential file to maintain the data.



#include <iostream>
using namespace std;
 
struct Employee {
    char name[50];
    int salary;
    int employeeCode;
    char dept[5];
};
 
int main() {
    Employee e;
     
    cout << "Enter name of employee : ";
    cin.getline(e.name, 50);
    cout << "Enter department : ";
    cin.getline(e.dept, 5);
    cout << "Enter salary of employee : ";
    cin >> e.salary;
    cout << "Enter employee code : ";
    cin >> e.employeeCode;
     
    // Printing employee details 
    cout << "\n*** Employee Details ***" << endl;
    cout << "Name : " << e.name << endl << "Salary : "
        << e.salary << endl;
    cout << "Employee Code : " << e.employeeCode << endl << "
        Department : " << e.dept;
    return 0;
}
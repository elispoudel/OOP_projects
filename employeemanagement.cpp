//Employee Management System

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Employee class to store Employees details
class Employee {
public:
    string name;
    int idNumber;
    int age;
    string address;
    string department;

    // Constructor to initialize the Employee object
    Employee(string name, int idNumber, int age, string address,string department) {
        this->name = name;
        this->idNumber = idNumber;
        this->age = age;
        this->address = address;
        this->department = department;
    }
};

// EmployeeManagementSystem class to manage Employee records
class EmployeeManagementSystem {
private:
    vector<Employee> employees;

public:
    // Function to add a new employee to the system
    void addEmployee(string name, int idNumber, int age, string address, string department) {
        Employee newEmployee(name, idNumber, age, address, department);
        employees.push_back(newEmployee);
        cout << "Employee added successfully!" << endl;
    }

    // Function to display all Employee records
    void displayEmployees() {
        if (employees.empty()) {
            cout << "No Employees in the system." << endl;
            return;
        }

        cout << "---------- Employee Records ----------" << endl;
        for (const Employee& employee : employees) {
            cout << "Name: " << employee.name << endl;
            cout << "Id Number: " << employee.idNumber << endl;
            cout << "Age: " << employee.age << endl;
            cout << "Address: " << employee.address << endl;
            cout << "Department: " << employee.department << endl;
            cout << "------------------------------------" << endl;
        }
    }

    // Function to search for a employee by id number
    void searchEmployee(int idNumber) {
        for (const Employee& employee : employees) {
            if (employee.idNumber == idNumber) {
                cout << "---------- Employee Details ----------" << endl;
                cout << "Name: " << employee.name << endl;
                cout << "Id Number: " << employee.idNumber << endl;
                cout << "Age: " << employee.age << endl;
                cout << "Address: " << employee.address << endl;
                cout << "Department: " << employee.department << endl;  
                cout << "------------------------------------" << endl;
                return;
            }
        }
        cout << "Employee with Id Number " << idNumber << " not found." << endl;
    }

    // Function to delete a employee by id number
    void deleteEmployee(int idNumber) {
        for (auto it = employees.begin(); it != employees.end(); ++it) {
            if (it->idNumber == idNumber) {
                employees.erase(it);
                cout << "Employee with Id Number " << idNumber << " deleted successfully!" << endl;
                return;
            }
        }
        cout << "Employee with Id Number " << idNumber << " not found. Deletion failed." << endl;
    }
};

int main() {
    EmployeeManagementSystem sms;
    int choice;
    string name, address, department ;
    int idNumber, age;
    
    
     string userName;
    string userPassword;
    int loginAttempt = 0;

if (loginAttempt < 5)

        cout << "Please enter your user name: ";
        cin >> userName;
        cout << "Please enter your user password: ";
        cin >> userPassword;

        if (userName == "admin" && userPassword == "123")
        {
            cout << "Welcome admin!\n";

    do {
        cout << "===== Employee Management System =====" << endl;
        cout << "1. Add Employee" << endl;
        cout << "2. Display Employees" << endl;
        cout << "3. Search Employee" << endl;
        cout << "4. Delete Employee" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter Id Number: ";
            cin >> idNumber;
            cout << "Enter Age: ";
            cin >> age;
            cout << "Enter Address: ";
            cin>>address;
             cout << "Enter Department: ";
            cin>>department;
            sms.addEmployee(name, idNumber, age, address, department);
            break;
        case 2:
            sms.displayEmployees();
            break;
        case 3:
            cout << "Enter Id Number to search: ";
            cin >> idNumber;
            sms.searchEmployee(idNumber);
            break;
        case 4:
            cout << "Enter Id Number to delete: ";
            cin >> idNumber;
            sms.deleteEmployee(idNumber);
            break;
        case 5:
            cout << "Exiting the program. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }

        cout << endl;
    } while (choice != 5);
 }
        

  else 
  {
  cout << "Invalid login attempt. Please try again.\n" << '\n';
       }
        return 0;
        
}

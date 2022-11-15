/**
 * @file Employee.h
 * @author Jacqueline Bybee
 * @date 2022-11-15
 * @brief This is a parent class of Officer and Supervisor. This is the header file for the Employee\
 class 
 * 
 * 
 */

#ifndef EMPLOYEE_H
#define EMPLOYEE_H


/**
 * parent class of Officer and Supervisor
 *
 * @class Employee Employee.h "Employees/Employee.h"
 * @brief 
 *
 */
class Employee {
 private:
  int ID; //employee ID
  int years;//number of years worked
  
 protected:
  double hourlyRate;//Rate of pay
  float hoursWorked;//number of hours worked
 public:

/**
 * Prints the ID, years, hourlyRate, and hoursWorked.
 *
 * @param  
 * @pre 
 * @return virtual 
 * @post 
 * 
 */
  virtual void print();

/**
 * Calculates the pay of the employee
 *
 * @param  
 * @pre 
 * @return virtual 
 * @post 
 * 
 */
  virtual double calculatePay();

/**
 * Calculates the number of years worked by the employee
 *
 * @param  
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void anniversary();

/**
 * Defualt cobstructor of the Employee class, Sets all the variables to a set number.
 *
 * @param  
 * @pre 
 * @return Employee(); Returns an default employee object. 
 * @post 
 * 
 */
  Employee();

/**
 * Permetermized constructor, that sets the values of its variables when called.
 *
 * @param int ID employee ID number 
 * @param int years Number of years worked
 * @param double hourlyRate Hourly pay
 * @param float hoursWorked Number of hours worked
 * @pre 
 * @return Employee(int Returns a employee object with set values
 * @post 
 * 
 */
  Employee(int ID, int years, double hourlyRate, float hoursWorked);
};

#endif //EMPLOYEE_H

/**
 * @file Supervisor.h
 * @author Jacqueline Bybee
 * @date 2022-11-15
 * @brief Header file for the supervisor class. Declares the public and private members of Supervisor. And Calls it's parent class (Emmployee).
 * 
 * 
 */

#ifndef SUPERVISOR_H
#define SUPERVISOR_H

#include "Employee.h"


/**
 * hild class of Employee, Inherits its functions 
 *
 * @class Supervisor Supervisor.h "Employees/Supervisor.h"
 * @brief 
 *
 */
class Supervisor : public Employee {
 private:
  int numSupervised;
 public:

/**
 * Prints the supervisors information and overrides the inherited function.
 *
 * @param  
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void print();

/**
 * calculates the pay of the supervisor and overrides the inherited function.
 *
 * @param  
 * @pre 
 * @return double Returns the pay including the cents/change 
 * @post 
 * 
 */
  double calculatePay();

/**
 * Default constructor for the supervisor class, calls the inherited employee constructor.
 *
 * @param  
 * @pre 
 * @return Supervisor(); Returns a class object with default values for it's members
 * @post 
 * 
 */
  Supervisor();

/**
 * Perimaterized constructor for the supervisor class, calls the inherited employee constructor.
 *
 * @param int ID The employee ID number
 * @param int years Years worked
 * @param double hourlyRate Amount paid in a hour
 * @param float hoursWorked Number of hours worked in a week
 * @param int numSupervised 
 * @pre 
 * @return Supervisor(int Returns a class object with set values by the user
 * @post 
 * 
 */
  Supervisor(int ID, int years, double hourlyRate, float hoursWorked, int numSupervised);
};

#endif //SUPERVISOR_H

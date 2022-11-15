/**
 * @file Officer.h
 * @author Jacqueline Bybee
 * @date 2022-11-15
 * @brief Header file for the Officer class, this is a child of the employee class
 * 
 * 
 */

#ifndef OFFICER_H
#define OFFICER_H

#include "Employee.h"


/**
 * child class of Employee, Inherits its functions
 *
 * @class Officer Officer.h "Employees/Officer.h"
 * @brief 
 *
 */
class Officer : public Employee {
 private:
  double evilness; //Corruptness
 public:

/**
 * Calls the inherited employee print function, and overrides it.
 *
 * @param  
 * @pre 
 * @return void 
 * @post 
 * 
 */
  void print();

/**
 * calls the inherited employee function, and overrides it.
 *
 * @param  
 * @pre 
 * @return double Amount paid
 * @post 
 * 
 */
  double calculatePay();

/**
 * Calls the default contructor for the employee class, and overrides it.
 *
 * @param  
 * @pre 
 * @return Officer(); returns a officer object
 * @post 
 * 
 */
  Officer();

/**
 * Calls the inherited empployee constructor and overrides it with user entered data.
 *
 * @param int ID Employee ID number
 * @param int years Number of years worked
 * @param double hourlyRate Pay rate
 * @param float hoursWorked Number of hours worked
 * @param double evilness How evil the cop is 
 * @pre 
 * @return Officer(int returns an officer class that has real data in it.
 * @post 
 * 
 */
  Officer(int ID, int years, double hourlyRate, float hoursWorked, double evilness);
};

#endif //OFFICER_H

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Employee.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 23:34:14 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/23 00:48:05 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Employee.hpp"

namespace Records
{
Employee::Employee( void )
{
    mFirstName = "";
    mLastName = "";
    mEmployeeNumber = -1;
    fHired = false;
    mSalary = kDefaultStatingSalary;
}

void Employee::promote(int inRaiseAmount)
{
    setSalary(getSalary() + inRaiseAmount);
} 
void Employee::demote(int inDemeritAmount)
{
    setSalary(getSalary() - inDemeritAmount);
}
void Employee::hire( void )
{
    fHired = true;
}
void Employee::fire( void )
{
    fHired = false;
}

void Employee::display( void )
{
    std::cout << getLastName() << " " << getFirstName() << std::endl;
    std::cout << "_________________" << std::endl;
}
void Employee::setFirstName(std::string inFirstName)
{
    mFirstName = inFirstName;
}
void Employee::setLastName(std::string inLastName)
{
    mLastName = inLastName;
}
void Employee::setSalary(int inNewSalary)
{
    mSalary = inNewSalary;
}
void Employee::setEmployeeNumber(int inEmployeeNumber)
{
    mEmployeeNumber = inEmployeeNumber;
}
    
bool Employee::getIsHired( void )
{
    return (fHired);
}
std::string Employee::getFirstName( void )
{
    return (mFirstName);
}
std::string Employee::getLastName( void )
{
    return (mLastName);
}   
int Employee::getEmployeeNumber( void )
{
    return (mEmployeeNumber);
}
int Employee::getSalary( void )
{
    return (mSalary);
}
}
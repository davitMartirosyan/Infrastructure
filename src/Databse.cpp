/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Databse.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 01:15:11 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/23 01:29:25 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdexcept>
#include "Database.hpp"

namespace Records
{
    Database::Database( void )
    {
        mNextSlot = 0;
        mNextEmployeeNumber = kFirstEmployeeNumber;
    }

    Database::~Database()
    {
    }

    Employee& Database::addEmployee(std::string inFirstName, std::string inLastName)
    {
        if(mNextSlot >= kMaxEmployees)
        {
            std::cout << "There is a problem. The Dashboard is full." << std::endl;
            throw std::runtime_error("There is a problem");
        }
        Employee& theEmployee = mEmployees[mNextSlot++];
        theEmployee.setFirstName(inFirstName);
        theEmployee.setLastName(inLastName);
        theEmployee.setEmployeeNumber(mNextEmployeeNumber);
        theEmployee.hire();
        return (theEmployee);
    }
    
    Employee& Database::getEmployee(int inEmployeeNumber)
    {
        for(int i = 0; i < mNextSlot; i++)
        {
            if (mEmployees[i].getEmployeeNumber() == inEmployeeNumber)
                return mEmployees[i];
        }
        std::cout << "No Employee with this [" << inEmployeeNumber << "] number.";
        throw std::runtime_error("Employee not found");
    }
    
    Employee& Database::getEmployee(std::string inFirstName, std::string inLastName)
    {
        for(int i = 0; i < mNextSlot; i++)
        {
            if (mEmployees[i].getFirstName() == inFirstName &&
                mEmployees[i].getLastName() == inLastName)
            {
                return (mEmployees[i]);
            }
        }
        std::cout << "The Employee " << inFirstName << " : " << inLastName << " not found";
        throw std::runtime_error("Employee not found");
    }
}
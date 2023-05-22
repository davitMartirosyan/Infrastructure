/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Database.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 00:52:33 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/23 01:14:11 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Employee.hpp"

namespace Records
{
    const int kMaxEmployees = 100;
    const int kFirstEmployeeNumber = 1000;
    class Database
    {
          public:
            Database( void );
            ~Database();

            Employee& addEmployee(std::string inFirstName, std::string inLastName);
            Employee& getEmployee(int inEmployeeNumber);
            Employee& getEmployee(std::string inFirstName, std::string inLastName);
            
            void displayAll( void );
            void displayCurrent( void );
            void displayFormer( void );
            
            protected:
                Employee mEmployees[kMaxEmployees];
                int mNextSlot;
                int mNextEmployeeNumber;
    };
}
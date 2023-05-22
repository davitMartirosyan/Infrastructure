/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Employee.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 00:14:41 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/23 00:48:03 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

namespace Records
{
const int kDefaultStatingSalary = 30000;
class Employee
{
    public:
        Employee( void );
        void promote(int inRaiseAmount = 1000);
        void demote(int inDemeritAmount = 1000);
        void hire( void );
        void fire( void );
        void display( void );
        void setFirstName(std::string inFirstName);
        void setLastName(std::string inLastName);
        void setEmployeeNumber(int inEmployeeNumber);
        void setSalary(int inNewSalary);
        bool getIsHired( void );
        std::string getFirstName( void );
        std::string getLastName( void );
        int getEmployeeNumber( void );
        int getSalary( void );
    private:
        std::string mFirstName;
        std::string mLastName;
        int mEmployeeNumber;
        int mSalary;
        bool fHired;
};
}
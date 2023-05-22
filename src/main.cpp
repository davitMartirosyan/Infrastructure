/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmartiro <dmartiro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 23:39:41 by dmartiro          #+#    #+#             */
/*   Updated: 2023/05/23 01:32:39 by dmartiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Employee.hpp"
#include "Database.hpp"

int main( void )
{
    Records::Database sql;

    sql.addEmployee("Vaxinak", "Abexyan");
    
    Records::Employee e = sql.getEmployee(1000);
    e.display();
}
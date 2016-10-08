/*
 * CyberWorm.h
 *
 *  Created on: Oct 6, 2016
 *      Author: Tamarcuse
 */

#ifndef CYBERWORM_H_
#define CYBERWORM_H_

#include <iostream>
#include <string>
#include <vector>


class CyberWorm
{

private:
    const std::string 	cyber_worm_os;
    const std::string 	cyber_worm_name;
    const int 	cyber_worm_dormancy_time;
    CyberWorm(); // Prevent the use of an empty constructor
	// Add your variables here

public:
    CyberWorm(std::string cyber_worm_os, std::string cyber_worm_name, int cyber_worm_dormancy_time);
	CyberWorm(const CyberWorm& other); //copy constructor;
	// Add your own functions here
	std::string getName();
	std::string getOS();
	int getDormancy();

};


#endif

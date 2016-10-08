/*
 * CyberWorm.cpp
 *
 *  Created on: Oct 6, 2016
 *      Author: Tamarcuse
 */

#include "../include/CyberWorm.h"

#include <iostream>

CyberWorm::CyberWorm(std::string cyber_worm_os, std::string cyber_worm_name, int cyber_worm_dormancy_time):
cyber_worm_os(cyber_worm_os), cyber_worm_name(cyber_worm_name),cyber_worm_dormancy_time(cyber_worm_dormancy_time) {}

CyberWorm::CyberWorm(const CyberWorm& other):
	cyber_worm_os(other.cyber_worm_os), cyber_worm_name(other.cyber_worm_name), cyber_worm_dormancy_time(other.cyber_worm_dormancy_time){}

std::string CyberWorm::getName(){
	return cyber_worm_name;
}

std::string CyberWorm::getOS(){
	return cyber_worm_os;
}

int CyberWorm::getDormancy(){
	return cyber_worm_dormancy_time;
}



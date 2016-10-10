/*
 * CyberDNS.cpp
 *
 *  Created on: Oct 8, 2016
 *      Author: Tamarcuse
 */

#include "../include/CyberDNS.h"

CyberDNS::CyberDNS() {}

void CyberDNS::AddPC(CyberPC & cyber_pc_){
	std::cout << "Adding to server: " << cyber_pc_.getName() << std::endl;
	cyber_DNS_.insert(std::pair<const std::string, CyberPC &>(cyber_pc_.getName(), cyber_pc_));
	pcList.push_back(cyber_pc_.getName());
	std::cout << cyber_pc_.getName() << " connected to server" << std::endl;
}


CyberPC & CyberDNS::GetCyberPC(const std::string & cyber_pc_name) const{
	return cyber_DNS_.at(cyber_pc_name);
}

std::vector<std::string> CyberDNS::GetCyberPCList(){
	return pcList;
}


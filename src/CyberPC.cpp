/*
 * CyberPC.cpp
 *
 *  Created on: Oct 8, 2016
 *      Author: Tamarcuse
 */

#include "../include/CyberPC.h"


const int NO_TIME_TO_INFECT = -1;

CyberPC::CyberPC(std::string cyber_pc_os, std::string cyber_pc_name):
cyber_pc_os_(cyber_pc_os), cyber_pc_name_(cyber_pc_name), cyber_pc_time_to_infect_(NO_TIME_TO_INFECT){}


CyberPC::~CyberPC() {
	deleteWorm();
}


void CyberPC::deleteWorm(){
	if (cyber_worm_ != NULL) {
		delete cyber_worm_;
		cyber_worm_ = NULL;
		cyber_pc_time_to_infect_ = NO_TIME_TO_INFECT;
	}
}

const std::string CyberPC::getName(){
	return cyber_pc_name_;
}

void CyberPC::AddConnection(std::string  second_pc){
	cyber_pc_connections_.push_back(second_pc);
}

void CyberPC::Infect(CyberWorm & worm){
	if (this->cyber_pc_os_ == worm.getOS()) {
		deleteWorm();
		cyber_worm_ = new CyberWorm(worm);
		cyber_pc_time_to_infect_ = worm.getDormancy();
		std::cout << "Hack occurred on  " << cyber_pc_name_ << std::endl;
		std::cout << cyber_pc_name_ << " is now infected by " << worm.getName() << std::endl;
	}
	else{
		std::cout << worm.getName() << " is incompatible with " << cyber_pc_name_ << std::endl;
	}
}

void CyberPC::Run(const CyberDNS & server){
	if (cyber_worm_ != NULL) {
		for(std::vector<std::string>::iterator it = cyber_pc_connections_.begin();
				it != cyber_pc_connections_.end(); ++it){
			server.GetCyberPC(*it).Infect(*cyber_worm_);
		}
	}
}

void CyberPC::Disinfect(){
	std::cout << cyber_worm_->getName() << " successfully removed from " << cyber_pc_name_ << std::endl;
	deleteWorm();
}


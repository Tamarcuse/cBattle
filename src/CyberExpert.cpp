/*
 * CyberExpert.cpp
 *
 *  Created on: Oct 8, 2016
 *      Author: Tamarcuse
 */

#include "../include/CyberExpert.h"

CyberExpert::CyberExpert(std::string cyber_expert_name_,
		int cyber_expert_work_time_, int cyber_expert_rest_time_, int cyber_expert_efficiency_):
		cyber_expert_name_(cyber_expert_name_), cyber_expert_work_time_(cyber_expert_work_time_),
		cyber_expert_rest_time_(cyber_expert_rest_time_), cyber_expert_efficiency_(cyber_expert_efficiency_){}

void CyberExpert::Clean(CyberPC & cyber_pc){
	cyber_pc.Disinfect();
}


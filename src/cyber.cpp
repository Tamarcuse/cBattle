//============================================================================
// Name        : cBattle.cpp
// Author      : Tamarcuse
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "../include/CyberWorm.h"
#include "../include/CyberPC.h"
#include "../include/CyberDNS.h"
#include "../include/CyberExpert.h"
#include <iostream>

int main() {

	std::vector<std::pair<std::string, std::string> > computerInput;
	std::vector<std::pair<std::string, std::string> > networkInput;
	std::vector<std::vector<std::string> > eventsInput;


	std::pair<std::string, std::string> pair1("Desktop PC", "Linux");	std::pair<std::string, std::string> pair2("Critical Server", "Windows"); std::pair<std::string, std::string> pair3("Laptop", "Linux");	std::pair<std::string, std::string> pair4("Refrigerator", "Linux");
	std::pair<std::string, std::string> pair5("Cable TV Box", "Linux");	std::pair<std::string, std::string> pair6("TV Remote", "Linux"); std::pair<std::string, std::string> pair7("Cellphone", "Linux");	std::pair<std::string, std::string> pair8("MicroWave", "Linux");
	std::pair<std::string, std::string> pair9("Smart Oven", "Linux");	std::pair<std::string, std::string> pair10("Apple PC", "Linux");
	computerInput.push_back(pair1);	computerInput.push_back(pair2);	computerInput.push_back(pair3);	computerInput.push_back(pair4);
	computerInput.push_back(pair5);	computerInput.push_back(pair6);	computerInput.push_back(pair7);	computerInput.push_back(pair8);	computerInput.push_back(pair9);	computerInput.push_back(pair10);

	std::pair<std::string, std::string> con1("Desktop PC", "Critical Server"); std::pair<std::string, std::string> con2("Desktop PC", "TV Remote");	std::pair<std::string, std::string> con3("Desktop PC", "Smart Oven"); std::pair<std::string, std::string> con4("Desktop PC", "Laptop");
	std::pair<std::string, std::string> con5("Desktop PC", "Apple PC");	std::pair<std::string, std::string> con6("Smart Oven", "Refrigerator");	std::pair<std::string, std::string> con7("Laptop", "MicroWave"); std::pair<std::string, std::string> con8("MicroWave", "Refrigerator");
	std::pair<std::string, std::string> con9("Cellphone", "Cable TV Box"); std::pair<std::string, std::string> con10("Cellphone", "TV Remote");	std::pair<std::string, std::string> con11("Apple PC", "Smart Oven");

	networkInput.push_back(con1);	networkInput.push_back(con2);	networkInput.push_back(con3); networkInput.push_back(con4);	networkInput.push_back(con5);	networkInput.push_back(con6);
	networkInput.push_back(con7);	networkInput.push_back(con8);	networkInput.push_back(con9); networkInput.push_back(con10);	networkInput.push_back(con11);



	CyberDNS server;

	for(std::vector<std::pair<std::string, std::string> >::iterator it = computerInput.begin();
			it != computerInput.end(); ++it){
		server.AddPC(*new CyberPC(it->second, it->first));
	}

	for(std::vector<std::pair<std::string, std::string> >::iterator it = networkInput.begin();
			it != networkInput.end(); ++it){
		server.GetCyberPC(it->first).AddConnection(it->second);
		server.GetCyberPC(it->second).AddConnection(it->first);
	}





	return 0;
}

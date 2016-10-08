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

#include <iostream>
using namespace std;

int main() {

	CyberDNS server;
	CyberPC *p1 = new CyberPC("Windows" , "P1");
	server.AddPC(*p1);
	CyberPC *p2 = new CyberPC("Wi" , "P2");
	server.AddPC(*p2);

	CyberWorm *w1 = new CyberWorm("Windows" , "Wormie" , 2);
	p1->Infect(*w1);
	p1->AddConnection(p2->getName());
	p1->Run(server);





	return 0;
}

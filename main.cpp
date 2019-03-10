#include <iostream>
#include "player.hpp"
#include "ctime"
int main()
{
	Player sai("saimahesh");
	Player sravya("sravya");
	std::string playon("y");
	while((!(sai.is_won() || sravya.is_won()))&&(playon.compare("y")==0)){
		srand(time(0));
		sai.play(rand());
		sravya.play(rand());
		std::cout<< "want to continue? y/n"<<std::endl;
		std::cin>>playon;
		
	}
	std::cout<< "..........final scores......"<<std::endl;
	std::cout<<sai.name()<<sai.value()<<std::endl;
	std::cout<<sravya.name()<<sravya.value()<<std::endl;

	
}


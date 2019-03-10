#ifndef PLAYER_HPP
#define PLAYER_HPP
#include<iostream>
#include<string>
#include "dye.hpp"
#include "snakeandladder.h"
class Player {
	private:
		enum status{yet_to_start,playing, won};
		status m_status;
		unsigned char m_currentposition;
		const std::string m_name;
		void updatePosition(const int dye_num);
		void checkposition();
		void checkforsnake();
		void checkforladder();
	public:
		Player(std::string name):m_name(name){
		m_status=yet_to_start;
		m_currentposition=0;}
		
		void play(int n);
		inline bool is_won(){
			return (m_status==won);
		};
		inline int value(){
			return m_currentposition;
		}
		inline std::string name(){
			return m_name;
		}

		


};
#endif

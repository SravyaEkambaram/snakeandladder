#include "player.hpp"

void Player::play(int n)
{
	Dye d(n);
	d.roll();
	std::cout<<m_name<<" got :"<<d.value()<<std::endl;
	updatePosition(d.value());


}
void Player::updatePosition(const int dye_num)
{
	switch(m_status) {
	case yet_to_start:
		{
			if(dye_num==1) {
				std::cout<<"Congratulations !!!"<<std::endl;
				m_status=playing;
				m_currentposition +=dye_num;
			}else {
				std::cout<<"Better luck next time !!!"<<std::endl;
			}
			break;
		}
	case playing:
		{
			if(m_currentposition+dye_num==100) {
				std::cout<<"Congratulations !!,"<<m_name<<" You won...!!!"<<std::endl;
				m_status=won;
				m_currentposition+=dye_num;
			}else if(m_currentposition+dye_num>100) {
				std::cout<<"Better luck next time"<<std::endl;
			}else {
				std::cout<<m_name <<" moved to :"<<m_currentposition+dye_num<<std::endl;
				m_currentposition+=dye_num;
				checkposition();

			}
			break;
		}
	case won:
		{
			std::cout<<"Already won..."<<std::endl;
			break;
		}
	default:
		{
			std::cout<<"Never reach here... Bug!!!"<<std::endl;
			break;
		}

	}

		
}
void Player::checkposition()
{
	checkforsnake();
	checkforladder();
	
}
void Player::checkforsnake()
{
	auto search=snakes.find(m_currentposition);
	if(search!=snakes.end()){
		m_currentposition=search->second;
		std::cout<<m_name<<"swallowed by snake !!! going to : "<<m_currentposition<<std::endl;
	}
}
void Player::checkforladder()
{
	auto search=ladders.find(m_currentposition);
	if(search!=ladders.end()){
		m_currentposition=search->second;
		std::cout<<m_name<<"yikes !!! going to : "<<m_currentposition<<std::endl;
	}
}
	




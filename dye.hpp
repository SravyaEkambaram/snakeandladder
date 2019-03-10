#ifndef DYE_HPP
#define DYE_HPP
#include<stdlib.h>
#include<time.h>
class Dye {
	private:
		int m_value;
	public:
		explicit Dye(int n);
		void roll();
		const int & value();
};
#endif


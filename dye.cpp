#include "dye.hpp"
Dye::Dye(int n)
{
	srand(n);
}

const int & Dye::value() {
	return m_value;
}

void Dye::roll()
{
	m_value= rand()%6 +1;
}



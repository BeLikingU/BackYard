#include<iostream>

int main()
{
	int i = 0;
	i = (4, ++i, std::cout<<i<<std::endl, i += 7);
	std::cout<<i<<std::endl;
	return 0;
}
#include<iostream>

void get_and_table()
{

	for(int a=0;a<=1;a++)
	{
		for(int b=0;b<=1;b++)
		{
			for(int c=0;c<=1;c++)
			{
				std::cout<<a<<" "<<b<<" "<<c<<" | "<<(a&&b&&c)<<'\n';
			}
		}
	}

}

void get_or_table()
{
    for(int a=0;a<=1;a++)
	{
		for(int b=0;b<=1;b++)
		{
			for(int c=0;c<=1;c++)
			{
				std::cout<<a<<" "<<b<<" "<<c<<" | "<<(a||b||c)<<'\n';
			}
		}
	}
}


int main()
{

	std::cout<<"The truth table for operator AND is:"<<'\n';
	std::cout<<"____________________________________"<<'\n';
	get_and_table();
	std::cout<<"The truth table for operator OR is:"<<'\n';
	std::cout<<"____________________________________"<<'\n';
	get_or_table();

	return 0;
}

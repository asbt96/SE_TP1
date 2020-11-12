#include<iostream>

void get_table(int n)
{
	int res;

	for(int i=0;i<=10;i++)
	{
	    res=i*n;
		std::cout<<n<<" x "<<i<<" = "<<res<<'\n';
	}

}


int main()
{
	int num;
	std::cout<<"Please enter a number to calculate its multiplication table : ";
	std::cin>>num;
	std::cout<<num<<" MULTIPLICATION TABLE: "<<'\n';
	get_table(num);

	return 0;
}

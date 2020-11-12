#include <iostream>
int rank;
void calculate_fibonacci(int r)
{
    int b=1;
    int a=0;
    int c;

    for(int i=0;i<r;i++)
    {
        if(i==0)
        {
           std:: cout<<a;

        }
        else
        {
            if(i==1)
            {

               std::cout<<","<<b;

            }
            else
            {
                c=a+b;
                std::cout<<","<<c;
                a=b;
                b=c;
            }
        }


    }
}
int main()
{
    std::cout<<"Please enter the rank of the sequence:";
    std::cin>>rank;
    std::cout<<"The fibonacci sequence with "<<rank<<" elements is:"<<'\n';
    calculate_fibonacci(rank);
    return 0;
}

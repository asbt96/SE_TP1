#include <iostream>;
int find_min(int t[])
{
    int minimo;
    for (int i=0;i<=4;i++)
    {
        if (i==0)
        {
           minimo=t[i];
        }
        else
        {
            if(t[i]<minimo)
            {
                minimo=t[i];
            }
        }
    }
    return minimo;

}
int find_max(int t[])
{
    int maximo;
    for (int i=0;i<=4;i++)
    {
        if (i==0)
        {
           maximo=t[i];
        }
        else
        {
            if(t[i]>maximo)
            {
                maximo=t[i];
            }
        }
    }
    return maximo;

}
int main()
{

    int table[5]={-10,5,3,-2,11};
    int mini=find_min(table);
    int maxi=find_max(table);
    std::cout<<"The min of the table is:"<<mini<<" and the max is:"<<maxi;
    return 0;
}


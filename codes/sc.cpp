#include<iostream>
using namespace std;
int SIZE =5;
int answer[5];
int u[5]={0};
void permute (int index,int u[5])
	{
		if( index <SIZE)
		{
			for (int i=0; i<SIZE; i++)
			{
				answer[index] = i;
				u[i]=1;
				permute (index+1,u);
			}
		}
		else
		{

			for (int i =0; answer[i]; i++)
			{
				cout<<answer[i];
			}
			cout<<endl;
		}
	}

int main()
{
permute(0,u);
}

#include<iostream>
using namespace std;

void print_solution(int arr[],int start,int last,int c)
{
	int sum=0;
	
	if(start>last)
	{
		for (int i=start;i<=last;i++)
		{
			sum+=arr[i];
		}
	
		if (sum==c)
		{		
			for(int i=0;i<=last;i++)
			{
				cout<<arr[i]<<"    ";	
			}
			cout<<endl;
		}
	}
	else
	{
		for(arr[start]=c;arr[start]>=0;arr[start]--)
		{
			print_solution(arr,start+1,last,c-arr[start]);			//recursion
		}
	}
}

	int main()
	{
		int c,n;
		
		cout<<"Enter total number of variable for solution : ";
		cin>>n;
		
		cout<<"Enter the sum for equation : ";
		cin>>c;
		
		cout<<"\nSolutions are : \n\n";
		
		int *array=new int[n];		//dynamic memory allocation
		
		for(int x=1;x<=n;x++)			//loop to print x1,x2,x3......xn 
			{
				cout<<"x"<<x<<"   ";
			}			
			cout<<endl;	
		
		print_solution(array,0,n-1,c);		//function call
		
		return 0;
	}




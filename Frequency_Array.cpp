#include<iostream>
using namespace std;

/*
frequency array

so we will be creating two arrays one for storing the elements and other for storing the frequency

*/

int main()
{
	int arr[50],freq[50],i,j,count,size;
	
	cout<<"Enter the size of the array : ";
	cin>>size;
	//scanning thr elements
	
	for(int i=0;i<size;i++)
	{
		cout<<"Enter the data in packet : ";
		cin>>arr[i];
		cout<<endl;
		freq[i]=-1;
		// -1 is added to each packet value so that we can identify that each packet is contining a unique value
		
	}
	
	for(int i=0;i<size;i++)
	{
		count =1;
		for(int j =i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				freq[j]=0;//just for maintaining uniqueness
			}
		}
		//updating the frequency value
		if(freq[i]!=0)
		{
			freq[i]=count;
		}
	}
	
	cout<<"Count of the array elements are :\n";
	
	for(i=0;i<size;i++)
	{
		if(freq[i]!=0)
		{
			cout<<arr[i]<<" is found "<<freq[i]<<" times"<<endl;
		}
	}
	
return 0;	
	
}

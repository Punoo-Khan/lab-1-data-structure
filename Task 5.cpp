/*Find the largest and the smallest element in an array using pointers. Create a function named MinMax having
addresses of Min and Max from main function, use pointers so that it will directly affect the values of the
variables defined inside the main function.*/
#include <iostream>
using namespace std;
void MinMax(int * max,int* min,int arr[])
{
	int size=sizeof(arr[0]);
	//cout << size;
	for(int i=0;i<=size;i++)
	{
		if(*max<arr[i])
		{
			*max=arr[i];
		}
		if(*min>arr[i])
		{
			*min=arr[i];
		}
	}
}
int main()
{
	int num,num1;
	cout << "how many numbers do you want to add: " << endl;
	cin >> num;
	int *array = new int[num];
	for(int i=0;i<num;i++)
	{
		cout << "Enter num " << endl;
		cin >> num1;
		array[i]=num1;
	}
	int min=array[0],max=0;
	MinMax(&max,&min,array);
	cout << "The max value is " << max << "\nThe min value is " << min << endl;
}
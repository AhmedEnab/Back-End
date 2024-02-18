#include<iostream>
#include<math.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int* array = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> array[i];
	}
	int Num;
	cin >> Num;
	for(int j = 0; j < n; j++)
	{
		if (Num == array[j])
		{
			cout << j << endl;
			return 0;
		}
		
	}
	cout << -1 << endl;
}
#include<iostream>
using namespace std;

int main(){
	cout<<"Code By Arif, \"20-06-2020\""<<endl;
	int arrayOfNum[] = {23,2,12,34,45,6,7};
	int arrSize = sizeof(arrayOfNum)/sizeof(arrayOfNum[0]);
	for(int i=1;i<arrSize;i++){
		//cout<<arrayOfNum[i]<<arrSize<<endl;
		int key = arrayOfNum[i];
		int j = i-1;
		while(j>=0 && key < arrayOfNum[j]){
			arrayOfNum[j+1] = arrayOfNum[j];
			j--;
		}
		arrayOfNum[j+1] = key;
	}
	cout<<"sorted Array :";
	for(const auto& e : arrayOfNum){
		cout<<e<<",";
	}
	cout<<endl;
	return 1;
}

#include<iostream>
using namespace std;

int main(){
	int N;
	cout << "Enter the number of student: ";
	cin >> N;
	
	string name[N];
	int age[N];
	int i = 0;
	while(N > i){
        cout << "Name of student "<< i+1 << "=";
        cin >> name[i];
        cout << "Age of student " << i+1 << "=";
        cin >> age[i];
        i++;
	    }
	int key;
	cout << "--------------------------------------\n";
	cout << "Enter an age to search: ";
	cin >> key;
	cout << "--------------------------------------\n";
	int j=0;
	while(j<N){
	    if(age[j] == key){
	        cout << name[j] ;
	    }
	    j++;
	}
	cout << "--------------------------------------\n";
	
	return 0;
}
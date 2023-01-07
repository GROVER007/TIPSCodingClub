#include<iostream>
using namespace std;


namespace helper{
	
//	------ this is a function for finding palindrome number ------		

	void palindrome(int num){
		int remainder,temp;
		int reverse = 0;
		temp = num;
		while(num!=0){
			remainder = num%10;
			reverse = reverse *10 + remainder;
			num = num/10;
		}
			
		if (temp == reverse){
			cout << "Yes this is a palindrome number\n";
		}
		else{
			cout<< "This is not a palindrome number\n";
		}
	}
	
//	------ this is a function for transposing matrix ------

	void matrix(int row,int col){
		int temp;
		int arr[row][col];
		for(int i = 0; i<row ; i++){
			for (int j = 0; j<col ; j++){
				cout<<"\nEnter value of row "<<i<< " and column " <<j <<" here : ";
				cin >> temp;
				arr[i][j] = temp;
			}
		}
		cout<<"\nThe matrix before transpose is : \n\n";
		for(int i = 0; i<row ; i++){
			for (int j = 0; j<col ; j++){
				cout<<arr[i][j] <<"\t";
			}
			cout<<endl;
		}
		cout<<"\nThe matrix after transpose is : \n\n";
		for(int i = 0; i<col ; i++){
			for (int j = 0; j<row ; j++){
				arr[i][j]  = arr[j][i];
				cout<<arr[i][j]<<"\t";
			}
			cout<<endl;
		}
	}
	
//	------ this is a function for identifying amstrong number ------

	void armstrong(int num){
		int remainder,result = 0,temp;
		temp = num;
		
		while(temp != 0 ){
			remainder = temp %10;
			result = result + (remainder*remainder*remainder);
			temp = temp/10;
		}
		
		if(result == num){
			cout<<"The number is an armstrong number\n";
		}
		else{
			cout<<"The number is not an armstrong number\n";
		}
	}
	
//	------ this is a function for dragon story question ------

	void dragon(int a, int b, int g, int s){
		a = a*g; b = b*s;
		if(a>=b){
			cout<<"Gold\n";
		}
		else{
			cout<<"silver\n";
		}
	}
	
//	------	this is a function for story question number 2 (last question)	------

	void min(int a, int b){
		int temp;
		temp = 0;
		while(true){
			if (temp != a && temp!=b){
				break;
			}
			temp++;
		}
		cout<<temp<<endl;
	}
	
}

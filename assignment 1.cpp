#include<iostream>
#include "helper.h" // including user defined header file 
using namespace std;
using namespace helper; // using namespace from that header file


int main(){
	
	int choice,n,row,col,a,b,g,s;
	char again,menu;
	
	while(true){
		
		cout<<"\n\n1. Palindrome Number \n2. Transpose of matrix\n3. Armstrong Number \n4. The dragon egg \n5. Mex of 2\n";	
		cout<<"\nEnter your choice here = ";
		cin>>choice;
		
//		run on the basis of user choice 
		switch(choice){
			
//			palindrome number
			case 1:
				while(true){
					cout << "\nEnter number here = ";
					cin>> n;
					palindrome(n);
					cout<<"\nDo you want to try again ? (Y/N) = ";
					cin >> again;
					if (again == 'n' || again =='N'){
						break;
					}
				}
				break;
			
//			transpose of matrix
			case 2:
				while(true){
					cout << "\nEnter no of row in matrix = ";
					cin>> row;
					cout << "\nEnter no of column in matrix = ";
					cin >> col;
					matrix(row,col);
					cout<<"\nDo you want to try again ? (Y/N) = ";
					cin >> again;
					if (again == 'n' || again =='N'){
						break;
					}
				}
				break;
				
//			armstrong number				
			case 3:
				while(true){
					cout<< "\nEnter a number here = ";
					cin >> n;
					armstrong(n);
					cout<<"\nDo you want to try again ? (Y/N) = ";
					cin >> again;
					if (again == 'n' || again =='N'){
						break;
					}
				}
				break;
				
//			dragon question	
			case 4:
				while(true){
					cout<<"\nenter kg of gold here = ";
					cin >> a;
					cout<<"enter kg of silver here = ";
					cin >> b;
					cout<<"enter coins for gold here = ";
					cin >> g;
					cout<<"enter coins for silver here = ";
					cin >> s;
					dragon(a,b,g,s);
					cout<<"\nDo you want to try again ? (Y/N) = ";
					cin >> again;
					if (again == 'n' || again =='N'){
						break;
					}
				}
				break;
				
//			last story question	
			case 5:
				while(true){
					cout<<"\nenter value here = ";
					cin >> a >> b;
					min(a,b);
					cout<<"\nDo you want to try again ? (Y/N) = ";
					cin >> again;
					if (again == 'n' || again =='N'){
						break;
					}
				}
				break;
				
//			when user insert invalid option
			default :
				cout<<"\nYou have entered an invalid input. Please try again.";
			
		}
		
//		if user want to go back to the menu
		cout<<"\nDo you want to go back to main menu ? = ";
		cin >> menu;
		if(menu == 'N' || menu == 'n'){
			break;
		}
		
	}
	return 0;
	
}



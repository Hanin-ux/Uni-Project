/*
	Mohamed Babiker Osman
	Computer Engineering
	simister 4
*/
#include<iostream>
#include<string> // to import and use String library 
using namespace std ;
int main()
{  
	string  section , dgree , Class ,name , exit; // Here we Defined the variable as String
	 // here the user may enter his full name 
	int score , ID ;  // Define score and ID as integer
	
	do{
	
	cout<<"Enter Your Name : "; // Dislapy A message on screen and wait for user to input his Name
	cin>>name ;  
	cout<<"Enter Your ID : "; cin >> ID ; // ask user to Enter his ID
	cout<<"Select 'A'  Control Class  "<<endl<<"Select 'T' Communication class "<< endl<< "Select 'C' computer Engneering "<<endl;
	cin >> section ; // For input the Section
	if (section == "A") // if condition statment
	{
		Class = " Control"; // here if user input A class will be Control
	}
	else if (section == "T") {
		Class = "Communication"; // here if user input something else class will be Communication
	}
	else if(section == "C"){
		Class = "computer Engneering" ;
	}
	else {
		cout<<"sorry! Department not Found ! try again....."<<endl;
	}
	
	cout<<"Enter The student Score : "; cin >> score ; // here the user will input his Score
	switch(score) // Switch statement to check if score between 90 and 100
	{
	case 90 ... 100 :
	 dgree = "A";
	 break ;
	case 80 ... 89 :
	 dgree = "B"; // and it will check the score to display the right Dgree	
	 break ;
	case 70 ... 79 :
	 dgree = "C";
	 break ;
	case 60 ... 69 :
	 dgree = "D";
	 break ;
	case 50 ... 59 : 
	dgree = "F";
	break ;
	default :
	cout << "Invalid Score" ;
	}
	cout<< "\n"<<"=====Student Information====="<<"\n";
	// Finaly This Line Will Display all the information that user Entered before
	cout << "Name : "<< name << "\n"<<"ID : "<< ID << "\n"<<"Department : "<< Class << "\n"<<"Dgree : "<< dgree << endl ;

	cout<<"Type 'Exit' to stop ! or Type 'No' to Continue... "<<endl;
	cin >> exit ;

	}while ( exit != "Exit" );
	cout<<" \n";

	return 0;
	
}

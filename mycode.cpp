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
	char section [10] , dgree[10] ; // Here we Defined the variable as String
	int everage[10] , score = 0 , ID [10];  // Define score and ID as integer
	string exit , student [10] ,  Class [10]; //Array Have a number of Students and section class
	int material [8] ; //Array of number of the matirals
	string materials [8] = {"English : ","Math : ","C++ Programming : ","History : ","Physics : ","Engineering : ","Economic : ","Medicine : "};
	
	do{
	
	for ( int i = 0; i < 10; i++) // for loop to Enter information of Students
	{
	cout<<"Enter Student Name : "; //Students name
	    cin >> student[i] ;  
	cout<<"Enter Student ID : "; // ask  to Enter Student ID
		cin >> ID[i] ;
	cout<<"Select : A or T or C Class .....";
		cin >> section[i] ; // For input the Section
	if (section[i] == 'A')
	{ 
		Class[i] = "Control"; //  A class will be Control
	} 
	else if (section[i] == 'T')
	{
		Class[i] = "Communication"; // here if user input something else class will be Communication
	}
	else if(section[i] == 'C')
	{
		Class [i] = "computer Engneering" ;
	}
	cout<<" Enter Score Of Material"<<endl;
		for ( int j = 0; j < 8; j++) //for loop to Entered score of 8 Materails 
	{
		cout<<materials[j];
		cin>>material[j];
	}
		for(int k = 0 ; k<8;k++)
		{
		score += material[k]; //Score Equal the Sum of all Materials
		}
		for (int i = 0; i < 10; i++)
		{
		everage[i] = score/8 ; // to calculate the everage of Materails
		}
		switch(everage[i]) // Switch statement to check if score between 90 and 100
		{
		case 90 ... 100 :
		dgree[i] = 'A';
		break ;
		case 80 ... 89 :
		dgree[i] = 'B'; 
		break ;
		case 70 ...79 :
		dgree [i]= 'C';
		break ;
		case 60 ... 69 :
		dgree [i]= 'D';
		break ;
		case 50 ... 59 : 
		dgree [i]= 'F';
		break ;
		default :
		dgree [i]= 'F' ;
	    }

	}	
    // Finaly This Line Will Display all the information that  Entered before
	cout<< "\n\n"<<"=====Student Information====="<<"\n\n";
	
	for (int i = 1; i <= 11; i++)
	{
	    cout << "Student :"<<i<<"  Name :"<< student[i] << " "<<"  ID: "<<ID[i]<<"  "<<"Department: "<< Class [i]<< " "<<"   Everage: "<<everage[i]<<" "<<"Dgree : "<< dgree[i] << endl ;
	}
	 //Asking if stil have a 10 new Student to Entered their Information
	cout<<"Type 'Exit' to stop ! or Type 'No' to Continue... "<<endl;
	cin >> exit ;

	}while ( exit != "Exit" );

	return 0;

}

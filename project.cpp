#include<iostream>
#include<conio.h>
#include <fstream>
#include<dos.h>
#include<cstring>
#include<string>
#include<cctype>
#include<cstdlib>
#include <time.h>
using namespace std;

void design();
void admin();
void subAddAdmin();
void add1();
void add2();
void add3();
void add4();
void add5();

void menuChoice();
void subjectChoice();
void info();
void quizMenu();
void sub1();
void sub2();
void sub3();
void sub4();
void sub5();
void result();
void exit_Choice();
void help_Choice();
void record();
void thanks();
void game1();
void game2();
int cnum(int );
struct data{
	string name;
	string father;
	string subject;
	string institute;
	
};
struct question
{
	string qn;
	string op1;
	string op2;
	string op3;
	string op4;
	string option;

};
question questions[20];
int qncount=15;
///////////

string ch;
string choice;
string subChoice;
data userData;
float score=0;
//---------------------------START MAIN----------------------------------------------------------------------------------------------
int main(){
	 string users;
	 string name;
	 string passward;
	   system("color 3");
	     design();//design of program
	
	     cout<<"\n\n\t\tEnter y for continue and any other key  for terminate....\n\t\t";
		 getline(cin,ch);
		 system("cls");//clear screen
         
		 int len=ch.length();
		 if(len==1){
		 while(ch=="y" || ch=="Y"){
			 char x=char(127);
		system("COLOR 5D");
		cout<<"  *==================================================================*";

		cout<<"\n\n\n  "<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x;

		cout<<"\n\n\n  "<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x;
		cout<<"\n\n\n  "<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<" a==>\tADMIN  "<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x;
		cout<<"\n\n\n  "<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<" b==>\tPLAYER "<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x;
        cout<<"\n\n\n  "<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x;
		cout<<"\n\n\n  *==================================================================*";

	       
			
            cout<<"\n\n\t\t\tEnter 'a' if you are admin and b if you are a player                      \n\t\t||";
	        getline(cin,users);
			system("cls");
	 int len=users.length();
	   if(len==1){
		  if(users=="a"){
			
			cout<<"\n\t\tENTER NAME than press Enter\n\t\t";
			getline(cin,name);
			cout<<"\n\t\tENTER PASSWARD press Enter \n\t\t";
			getline(cin,passward);
			if(passward!="abcd"){
			cout<<"\n\t\tplease enter valid passward\n";
			}//for admin varification
			else{
					subAddAdmin();	
			}//invalid passward
		    }
		// if condition ends when input is admin
		    else if(users=="b"){                      //contestant manuplation
			menuChoice();//for calculation of user for whole quiz
		    }
		//
		    else{
			cout<<"\t\t\t*******WRONG INPUT ..TRY AGAIN\n\t";
	     	}
		//users end

	        }//end brace of len==1
	   //
    	else{
		cout<<"ERROR invalid input.. ENTER from menu...\n";
	}}
		 }
		 else{
			 cout<<"\t\t^__Error__^Enter correct input only 'Y' or 'y' to CONTINUE....\n";
		 }
		
		 
		
		 for(int i=0;i<4;i++){
       cout<<"\t\t.........end in a few seconds";
        cout.flush();
       _sleep(2000);//time for terminate
        exit(1);
		break;
		}

	getch();
	return 0;
}
//----------------------------END MAIN---------------------------------------------------------------------------------------------







//++++++++++++++++++++++++++++++++++////////admin/////////	
///////////////////////start sub add by admin/////////////////////////////
void subAddAdmin(){
	string subAdmin;                                                                                                                                                                                                                                                                      
	                                                                                                                                                                                      
	 cout<<"\n\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||\n";
	 cout<<"\t\t||                                             ||\n";
	 cout<<"\t\t||                                             ||\n";
	 cout<<"\t\t||                                             ||\n";
     cout<<"\t\t||\ta.PROGRAMING-FUND                      ||\n";
     cout<<"\t\t||\tb.GNRL KHNOWLEDGE                      ||\n";
	 cout<<"\t\t||\tc.ISLAMIC STUDIES                      ||\n";
	 cout<<"\t\t||\td.CURRUNT AFFAIRS                      ||\n";
	 cout<<"\t\t||\te.PAKISTAN STUDIES                     ||\n";
	 cout<<"\t\t||                                             ||\n";
	 cout<<"\t\t||                                             ||\n";
	 cout<<"\t\t||                                             ||\n";
	 cout<<"\t\t|||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n";

	
	cout<<"\n\t\tEnter your choice of SUBJECT for ADD QUESTIONS\n\t\tAND PRESS 'ENTER'\n\t\t";
	getline(cin,subAdmin);
	 system("cls");//clear screen
		 int len=subAdmin.length();
		  if(len==1){
			  
	    if (subAdmin=="a"){
			add1();
        }//a end
		else if(subAdmin=="b"){
	        add2();		
		}//end b
		else if(subAdmin=="c"){
			add3();
		}//end c
		else if(subAdmin=="d"){
			add4();
			
		}//end d
		else if(subAdmin=="e"){
			add5();
		}
		else{cout<<"\t\t\tINVALID INPUT YOU CAN ONLY ENTER alphabets between a-e\n";}
	    }//if length
		 else{
			 cout<<"\n\t\t\t^__Error__^Only enter one character from Following menu...\n\n";
		 }
	
}//program end
//_________________________
void add1(){
	question questions[20];
    static int qncount=15;
	string more;
	string question,option1,option2,option3,option4,right;
	ofstream outputFile;
	outputFile.open("file1.txt",ios::app);
	

		if (qncount<20)
	{
		
		cout<<"\n\n\n\nYou Add "<<20-qncount<<" More Question\n";
		cout<<"\nEnter New Question(followed by .)\n";
		getline(cin,questions[qncount].qn,'.');
		question=questions[qncount].qn;
		cout<<"\nEnter option1(followed by .)\n";
		getline(cin,questions[qncount].op1,'.');
		option1=questions[qncount].op1;
		cout<<"\nEnter option2(followed by .)\n";
		getline(cin,questions[qncount].op2,'.');
		option2=questions[qncount].op2;
			cout<<"\nEnter option3(followed by .)\n";
		getline(cin,questions[qncount].op3,'.');
		option3=questions[qncount].op3;
			cout<<"\nEnter option4(followed by .)\n";
		getline(cin,questions[qncount].op4,'.');
		option4=questions[qncount].op4;
		cout<<"\nEnter answer no from (a to d).(followed by .)\n";
		getline(cin,questions[qncount].option,'.');
		right=questions[qncount].option;
		qncount++;
	        outputFile<<qncount<<"."<<question;
    		outputFile<<"a."<<option1;
			outputFile<<"b."<<option2;
			outputFile<<"c."<<option3;
			outputFile<<"d."<<option4;
		    outputFile<<right;
			
	
	}
	outputFile.close();
	cout << "SAVED IN FILE!\n";
	cout<<"\t\tTHANKS";
	
	 for(int i=0;i<4;i++){
       cout<<"\t\t.........end in a few seconds";
        cout.flush();
       _sleep(2000);//time for terminate
        exit(1);
		break;
		}
	
}//---------ist update end

//_________________________
void add2(){
	question questions[20];
    static int qncount=15;
	string more;
	string question,option1,option2,option3,option4,right;
	ofstream outputFile;
	outputFile.open("file2.txt",ios::app);
	

		if (qncount<20)
	{
		
		cout<<"\n\n\n\nYou Add "<<20-qncount<<" More Question\n";
		cout<<"\nEnter New Question(followed by .)\n";
		getline(cin,questions[qncount].qn,'.');
		question=questions[qncount].qn;
		cout<<"\nEnter option1(followed by .)\n";
		getline(cin,questions[qncount].op1,'.');
		option1=questions[qncount].op1;
		cout<<"\nEnter option2(followed by .)\n";
		getline(cin,questions[qncount].op2,'.');
		option2=questions[qncount].op2;
			cout<<"\nEnter option3(followed by .)\n";
		getline(cin,questions[qncount].op3,'.');
		option3=questions[qncount].op3;
			cout<<"\nEnter option4(followed by .)\n";
		getline(cin,questions[qncount].op4,'.');
		option4=questions[qncount].op4;
		cout<<"\nEnter answer no from (a to d).(followed by .)\n";
		getline(cin,questions[qncount].option,'.');
		right=questions[qncount].option;
		qncount++;
	        outputFile<<qncount<<"."<<question;
    		outputFile<<"a."<<option1;
			outputFile<<"b."<<option2;
			outputFile<<"c."<<option3;
			outputFile<<"d."<<option4;
		    outputFile<<right;
	
	}
	
	outputFile.close();
	cout << "SAVE IN FILE!\n";
	cout<<"\t\tTHANKS";
	
	 for(int i=0;i<4;i++){
       cout<<"\t\t.........end in a few seconds";
        cout.flush();
       _sleep(2000);//time for terminate
        exit(1);
		break;
		}
	
}//---------2nd update end

//_________________________
void add3(){
	question questions[20];
    static int qncount=15;
	string more;
	string question,option1,option2,option3,option4,right;
	ofstream outputFile;
	outputFile.open("file3.txt",ios::app);
	

		if (qncount<20)
	{
		
		cout<<"\n\n\n\nYou Add "<<20-qncount<<" More Question\n";
		cout<<"\nEnter New Question(followed by .)\n";
		getline(cin,questions[qncount].qn,'.');
		question=questions[qncount].qn;
		cout<<"\nEnter option1(followed by .)\n";
		getline(cin,questions[qncount].op1,'.');
		option1=questions[qncount].op1;
		cout<<"\nEnter option2(followed by .)\n";
		getline(cin,questions[qncount].op2,'.');
		option2=questions[qncount].op2;
			cout<<"\nEnter option3(followed by .)\n";
		getline(cin,questions[qncount].op3,'.');
		option3=questions[qncount].op3;
			cout<<"\nEnter option4(followed by .)\n";
		getline(cin,questions[qncount].op4,'.');
		option4=questions[qncount].op4;
		cout<<"\nEnter answer no from (a to d).(followed by .)\n";
		getline(cin,questions[qncount].option,'.');
		right=questions[qncount].option;
		qncount++;
	        outputFile<<qncount<<"."<<question;
    		outputFile<<"a."<<option1;
			outputFile<<"b."<<option2;
			outputFile<<"c."<<option3;
			outputFile<<"d."<<option4;
		    outputFile<<right;
	
	}
	outputFile.close();
	cout << "SAVE IN FILE!\n";
	cout<<"\t\tTHANKS";
	
	 for(int i=0;i<4;i++){
       cout<<"\t\t.........end in a few seconds";
        cout.flush();
       _sleep(2000);//time for terminate
        exit(1);
		break;
		}
	
}//---------3rd update end

//_________________________
void add4(){
	question questions[20];
    static int qncount=15;
	string more;
	string question,option1,option2,option3,option4,right;
	ofstream outputFile;
	outputFile.open("file4.txt",ios::app);
	

		if (qncount<20)
	{
		
		cout<<"\n\n\n\nYou Add "<<20-qncount<<" More Question\n";
		cout<<"\nEnter New Question(followed by .)\n";
		getline(cin,questions[qncount].qn,'.');
		question=questions[qncount].qn;
		cout<<"\nEnter option1(followed by .)\n";
		getline(cin,questions[qncount].op1,'.');
		option1=questions[qncount].op1;
		cout<<"\nEnter option2(followed by .)\n";
		getline(cin,questions[qncount].op2,'.');
		option2=questions[qncount].op2;
			cout<<"\nEnter option3(followed by .)\n";
		getline(cin,questions[qncount].op3,'.');
		option3=questions[qncount].op3;
			cout<<"\nEnter option4(followed by .)\n";
		getline(cin,questions[qncount].op4,'.');
		option4=questions[qncount].op4;
		cout<<"\nEnter answer no from (a to d).(followed by .)\n";
		getline(cin,questions[qncount].option,'.');
		right=questions[qncount].option;
		qncount++;
	        outputFile<<qncount<<"."<<question;
    		outputFile<<"a."<<option1;
			outputFile<<"b."<<option2;
			outputFile<<"c."<<option3;
			outputFile<<"d."<<option4;
		    outputFile<<right;
	
	}
	outputFile.close();
	cout << "SAVE IN FILE!\n";
	cout<<"\t\tTHANKS";
	
	 for(int i=0;i<4;i++){
       cout<<"\t\t.........end in a few seconds";
        cout.flush();
       _sleep(2000);//time for terminate
        exit(1);
		break;
		}
	
}//---------4th update end

//_________________________
void add5(){
	question questions[20];
    static int qncount=15;
	string more;
	string question,option1,option2,option3,option4,right;
	ofstream outputFile;
	outputFile.open("file5.txt",ios::app);
	

		if (qncount<20)
	{
		
		cout<<"\n\n\n\nYou Add "<<20-qncount<<" More Question\n";
		cout<<"\nEnter New Question(followed by .)\n";
		getline(cin,questions[qncount].qn,'.');
		question=questions[qncount].qn;
		cout<<"\nEnter option1(followed by .)\n";
		getline(cin,questions[qncount].op1,'.');
		option1=questions[qncount].op1;
		cout<<"\nEnter option2(followed by .)\n";
		getline(cin,questions[qncount].op2,'.');
		option2=questions[qncount].op2;
			cout<<"\nEnter option3(followed by .)\n";
		getline(cin,questions[qncount].op3,'.');
		option3=questions[qncount].op3;
			cout<<"\nEnter option4(followed by .)\n";
		getline(cin,questions[qncount].op4,'.');
		option4=questions[qncount].op4;
		cout<<"\nEnter answer no from (a to d).(followed by .)\n";
		getline(cin,questions[qncount].option,'.');
		right=questions[qncount].option;
		qncount++;
	        outputFile<<qncount<<"."<<question;
    		outputFile<<"a."<<option1;
			outputFile<<"b."<<option2;
			outputFile<<"c."<<option3;
			outputFile<<"d."<<option4;
		    outputFile<<right;
	
	}
	outputFile.close();
	cout << "SAVE IN FILE!\n";
	cout<<"\t\tTHANKS";
	
	 for(int i=0;i<4;i++){
       cout<<"\t\t.........end in a few seconds";
        cout.flush();
       _sleep(2000);//time for terminate
        exit(1);
		break;
		}
	
}//---------5th update end

////////////////////////end sub add admin/////////////////////////////////





////////admin end///////






//-----------START FUNCTIONS-------------------------------------------------------------------------------------------------------
//*****************************************************
void design(){
	system("COLOR 5D");
	   
	cout<<"\n\n\n\n\n\n\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
	    cout<<"\t||                                                     ||\n";
	 cout<<"\t||  |||||||||||||||||||||||||||||||||||||||||||||||||  ||\n";
	 cout<<"\t||  ||                                             ||  ||\n";
     cout<<"\t||  ||\tASSALAM_U_ALIEKUM                          ||  ||\n";
     cout<<"\t||  ||\t      AND                                  ||  ||\n";
	 cout<<"\t||  ||\t        WELCOME  TO QUIZZ CONTESTENT       ||  ||\n";
	 cout<<"\t||  ||                                             ||  ||\n";
	 cout<<"\t||  ||                                             ||  ||\n";
	 cout<<"\t||  |||||||||||||||||||||||||||||||||||||||||||||||||  ||\n";
	 cout<<"\t||                                                     ||\n";
	 cout<<"\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
}
//****************************************************

void menuChoice(){
	 cout<<"\n\n\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
	 cout<<"\t\t||                                                     ||\n";
	 cout<<"\t\t||  |||||||||||||||||||||||||||||||||||||||||||||||||  ||\n";
	 cout<<"\t\t||  ||                                             ||  ||\n";
	 cout<<"\t\t||  ||                                             ||  ||\n";
	 cout<<"\t\t||  ||                                             ||  ||\n";
     cout<<"\t\t||  ||\ta.QUIZ GAME                                ||  ||\n";
     cout<<"\t\t||  ||\tb.EXIT                                     ||  ||\n";
	 cout<<"\t\t||  ||\tc.GAME HELP                                ||  ||\n";
	 cout<<"\t\t||  ||\td.BACK TO MENU                             ||  ||\n";
	 cout<<"\t\t||  ||                                             ||  ||\n";
	 cout<<"\t\t||  ||                                             ||  ||\n";
	 cout<<"\t\t||  ||                                             ||  ||\n";
	 cout<<"\t\t||  |||||||||||||||||||||||||||||||||||||||||||||||||  ||\n";
	 cout<<"\t\t||                                                     ||\n";
	 cout<<"\t\t|||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
	cout<<"\n\n\t\tEnter your choice for effective use of program\n\t\tThan press ENTER\n\t\t";
	getline(cin,choice);
	 system("cls");
		 int len=choice.length();
		 if(len==1){
	    if (choice=="a"){
			
			subjectChoice();//sub chose all subject in it
		
}//a end(quiz game)
		else if(choice=="b"){
			exit_Choice();
		}//end b(exit)
		else if(choice=="c"){
		   help_Choice();
		}//end c(help)
		else if(choice=="d"){
			cout<<"\n\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||\n";
            cout<<"\t\t||                                             ||\n";
            cout<<"\t\t||WELCOME BACK Enter your CHOICE again         ||\n";
            cout<<"\t\t||                                             ||\n";
            cout<<"\t\t|||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
		   menuChoice();
		}//end c(help)

		else{cout<<"\t\t\t^__Error__^INVALID input...Enter from menu ONLY.....\n";}
	}//if length
		 else{
			 cout<<"\n\t\t\t******YOU CAN Only enter one character from Following menu.\n\n";
		 }
		 cout<<"\n\n\t\t\tEnter y for continue and any other key  for terminate...\n\t\t\t";
         getline(cin,ch);
}//function end


//****************************************************

void subjectChoice(){
	

	 cout<<"\n\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||\n";
	 cout<<"\t\t||                                             ||\n";
	 cout<<"\t\t||                                             ||\n";
	 cout<<"\t\t||                                             ||\n";
     cout<<"\t\t||\ta.PROGRAMING-FUND                      ||\n";
     cout<<"\t\t||\tb.GNRL KHNOWLEDGE                      ||\n";
	 cout<<"\t\t||\tc.ISLAMIC STUDIES                      ||\n";
	 cout<<"\t\t||\td.WEB DESIGN                           ||\n";
	 cout<<"\t\t||\te.PAKISTAN STUDIES                     ||\n";
	 cout<<"\t\t||                                             ||\n";
	 cout<<"\t\t||                                             ||\n";
	 cout<<"\t\t||                                             ||\n";
	 cout<<"\t\t|||||||||||||||||||||||||||||||||||||||||||||||||\n\n\n";

	
	cout<<"\n\t\tEnter your choice of SUBJECT for quiz\n\t\t";
	getline(cin,subChoice);
	 system("cls");//clear screen
		 int len=subChoice.length();
		  if(len==1){
			  info();//information function
	    if (subChoice=="a"){
			quizMenu();
			sub1();
        }//a end
		else if(subChoice=="b"){
			quizMenu();
			sub2();
		}//end b
		else if(subChoice=="c"){
			quizMenu();
			sub3();
		}
		else if(subChoice=="d"){

			quizMenu();
			sub4();
		}
		else if(subChoice=="e"){
			quizMenu();
			sub5();
		}
		else{cout<<"\t\t\t^__Error__^INVALID input...Enter from menu ONLY...\n";}
	    }//if length
		 else{
			 cout<<"\n\t\t\t^__Error__^Only enter one character from Following menu...\n\n";
		 }
		


}//program end
//**********************subject choice end*************

//------------start use information---------
void info(){
cout<<"\n\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||\n";
cout<<"\t\t||                                             ||\n";
cout<<"\t\t||Enter your information for REECORD           ||\n";
cout<<"\t\t||                                             ||\n";
cout<<"\t\t|||||||||||||||||||||||||||||||||||||||||||||||||\n\n";


cout<<"\n\tEnter your name\n\t";
getline(cin,userData.name);
cout<<"\n\tEnter your Father name\n\t";
getline(cin,userData.father);
cout<<"\n\tEnter your institution name\n\t";
getline(cin,userData.institute);
cout<<"\n\tEnter your SUBJECT chosen\n\t";
getline(cin,userData.subject);

system("cls");
cout<<"\t------------------------------------------------------\n";
}
void result(){

	cout<<"\t\t^.^.^.^QUIZ RESULT CARD^.^.^.^\n ";
	cout<<"\n\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
	
	cout<<"\t\t\t||||\tNAME:\t\t"<<userData.name<<"\n";
	cout<<"\t\t\t||||\tS/D/O:\t\t"<<userData.father<<"\n";
	cout<<"\t\t\t||||\tINSTITUTE:\t"<<userData.institute<<"\n";
	cout<<"\t\t\t||||\tSUBJECT:\t"<<userData.subject<<"\n";
	cout<<"\t\t\t||||\tTOTAL NO:\t"<<"75"<<"\n\n";
	cout<<"\n\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
}
//------------start use information---------
//quiz satart menu
void quizMenu(){
cout<<"\n\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||\n";
cout<<"\t\t||                                             ||\n";
cout<<"\t\t||QUIZ START ..BEST OF LUCK..FOR(15 questions) ||\n";
cout<<"\t\t||                                             ||\n";
cout<<"\t\t|||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
}
//^^^^^^^^^^^^^^^^^^^^^^^^^START Subject functions^^^^^^^^^^^^^^^
//____________sub PF start_________>>>>>>>>>>>>

	void sub1(){
	string qnAns;
	float score=0;
	ifstream inFile;
	inFile.open("file1.txt");


	if (inFile.fail())
	{
	cout<<"There's some error in your file...";
	_sleep(2000);
	exit(1);
	}
	string qn,op1,op2,op3,op4,ans;

	for(int j=0;j<15;j++){
	//for(int i=0;i<6;i++){
		
	while(!inFile.eof()){
    getline(inFile,qn);	
	getline(inFile,op1);
	getline(inFile,op2);
	getline(inFile,op3);
	getline(inFile,op4);
	getline(inFile,ans);
	    cout<<endl<<qn<<"\n\n";
		cout<<op1<<"\n";
		cout<<op2<<"\n";
		cout<<op3<<"\n";
		cout<<op4<<"\n";
		cout<<"\n\tEnter your ans ONLY from given OPTION any other key is WRONG ANS\n\t";
		getline(cin,qnAns);
		int len=qnAns.length();
		if(len==1){
			if(qnAns==ans){
				cout<<"\t\t\t---------------------------\n";
				cout<<"\n\t\t\t:) CORRECT ANSWER\n";
				cout<<"\t\t\t---------------------------\n";
				score=score+5;
				
			}
			else{
				cout<<"\t\t\t---------------------------\n"; 
				cout<<"\n\t\t\t:( WRONG ANSWER\n";
				cout<<"\t\t\tCorrect Answer is=="<<ans<<endl;
				cout<<"\t\t\t---------------------------\n";
				
			}

			
		}
		else{
			cout<<"\n\t\t\tEnter one character from menu...Ans is CONSIDERED wrong\n";
		}
		
		}// for qn loop i<6
		
		system("cls");
		inFile.close();
	//}//end 15 loop
		
	}//EOF
	cout<<"\n\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||\n\n\t";
	result();
	cout<<"\t\t\t||||\tSCORE GAIN:"<<score<<endl;
	cout<<"\n\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||\n\n\t";
	if(score>=60){
	cout<<"\n CONGRATS YOU WON A GAME:) \nHERE YOU GO FOR THE GAME";
	game2();
	}
	else{game1();}
	thanks();
	
}//end sub1


//start  sub2....
void sub2(){
	string qnAns;
	float score=0;
	ifstream inFile;
	inFile.open("file2.txt");


	if (inFile.fail())
	{
	cout<<"There's some error in your file...";
	_sleep(2000);
	exit(1);
	}
	string qn,op1,op2,op3,op4,ans;

	for(int j=0;j<15;j++){
	for(int i=0;i<6;i++){
		while(!inFile.eof()){
    getline(inFile,qn);	
	getline(inFile,op1);
	getline(inFile,op2);
	getline(inFile,op3);
	getline(inFile,op4);
	getline(inFile,ans);
	    cout<<endl<<qn<<"\n\n";
		cout<<op1<<"\n";
		cout<<op2<<"\n";
		cout<<op3<<"\n";
		cout<<op4<<"\n";
		cout<<"\n\tEnter your ans ONLY from given OPTION any other key is WRONG ANS\n\t";
		getline(cin,qnAns);
		int len=qnAns.length();
		if(len==1){
			if(qnAns==ans){
				cout<<"\t\t\t---------------------------\n";
				cout<<"\n\t\t\t:) CORRECT ANSWER\n";
				cout<<"\t\t\t---------------------------\n";
				score=score+5;
				
			}
			else{
				cout<<"\t\t\t---------------------------\n"; 
				cout<<"\n\t\t\t:( WRONG ANSWER\n";
				cout<<"\t\t\tCorrect Answer is=="<<ans<<endl;
				cout<<"\t\t\t---------------------------\n";
				
			}

			
		}
		else{
			cout<<"\n\t\t\tEnter one character from menu...Ans is CONSIDERED wrong\n";
		}
		
		}// for qn loop i<5
		system("cls");
inFile.close();
	}//end 15 loop
	}//EOF
	cout<<"\n\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||\n\n\t";
	result();
	cout<<"\t\t\t||||\tSCORE GAIN:"<<score<<endl;
	cout<<"\n\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||\n\n\t";
	if(score>=60){
	cout<<"\n CONGRATS YOU WON A GAME:) \nHERE YOU GO FOR THE GAME";
	game2();
	}
	else{game1();}
	thanks();
}//end sub2






//start sub 3...

void sub3(){
	string qnAns;
	float score=0;
	ifstream inFile;
	inFile.open("file3.txt");


	if (inFile.fail())
	{
	cout<<"There's some error in your file...";
	_sleep(2000);
	exit(1);
	}
	string qn,op1,op2,op3,op4,ans;

	for(int j=0;j<15;j++){
	for(int i=0;i<6;i++){
		while(!inFile.eof()){
    getline(inFile,qn);	
	getline(inFile,op1);
	getline(inFile,op2);
	getline(inFile,op3);
	getline(inFile,op4);
	getline(inFile,ans);
	    cout<<endl<<qn<<"\n\n";
		cout<<op1<<"\n";
		cout<<op2<<"\n";
		cout<<op3<<"\n";
		cout<<op4<<"\n";
		cout<<"\n\tEnter your ans ONLY from given OPTION any other key is WRONG ANS\n\t";
		getline(cin,qnAns);
		int len=qnAns.length();
		if(len==1){
			if(qnAns==ans){
				cout<<"\t\t\t---------------------------\n";
				cout<<"\n\t\t\t:) CORRECT ANSWER\n";
				cout<<"\t\t\t---------------------------\n";
				score=score+5;
				
			}
			else{
				cout<<"\t\t\t---------------------------\n"; 
				cout<<"\n\t\t\t:( WRONG ANSWER\n";
				cout<<"\t\t\tCorrect Answer is=="<<ans<<endl;
				cout<<"\t\t\t---------------------------\n";
				
			}

			
		}
		else{
			cout<<"\n\t\t\tEnter one character from menu...Ans is CONSIDERED wrong\n";
		}
		
		}// for qn loop i<5
		system("cls");
inFile.close();
	}//end 15 loop
	}//EOF
	cout<<"\n\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||\n\n\t";
	result();
	cout<<"\t\t\t||||\tSCORE GAIN:"<<score<<endl;
	cout<<"\n\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||\n\n\t";
	if(score>=60){
	cout<<"\n CONGRATS YOU WON A GAME:) \nHERE YOU GO FOR THE GAME";
	game2();
	}
	else{game1();}
	thanks();
}//end sub3




//start sub4

void sub4(){
	string qnAns;
	float score=0;
	ifstream inFile;
	inFile.open("file4.txt");


	if (inFile.fail())
	{
	cout<<"There's some error in your file...";
	_sleep(2000);
	exit(1);
	}
	string qn,op1,op2,op3,op4,ans;

	for(int j=0;j<15;j++){
	for(int i=0;i<6;i++){
		while(!inFile.eof()){
    getline(inFile,qn);	
	getline(inFile,op1);
	getline(inFile,op2);
	getline(inFile,op3);
	getline(inFile,op4);
	getline(inFile,ans);
	    cout<<endl<<qn<<"\n\n";
		cout<<op1<<"\n";
		cout<<op2<<"\n";
		cout<<op3<<"\n";
		cout<<op4<<"\n";
		cout<<"\n\tEnter your ans ONLY from given OPTION any other key is WRONG ANS\n\t";
		getline(cin,qnAns);
		int len=qnAns.length();
		if(len==1){
			if(qnAns==ans){
				cout<<"\t\t\t---------------------------\n";
				cout<<"\n\t\t\t:) CORRECT ANSWER\n";
				cout<<"\t\t\t---------------------------\n";
				score=score+5;
				
			}
			else{
				cout<<"\t\t\t---------------------------\n"; 
				cout<<"\n\t\t\t:( WRONG ANSWER\n";
				cout<<"\t\t\tCorrect Answer is=="<<ans<<endl;
				cout<<"\t\t\t---------------------------\n";
				
			}

			
		}
		else{
			cout<<"\n\t\t\tEnter one character from menu...Ans is CONSIDERED wrong\n";
		}
		
		}// for qn loop i<5
		system("cls");
inFile.close();
	}//end 15 loop
	}//EOF
	cout<<"\n\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||\n\n\t";
	result();
	cout<<"\t\t\t||||\tSCORE GAIN:"<<score<<endl;
	cout<<"\n\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||\n\n\t";
	if(score>=60){
	cout<<"\n CONGRATS YOU WON A GAME:) \nHERE YOU GO FOR THE GAME";
	game2();
	}
	else{game1();}
	thanks();
}//end sub4




// start sub 5
void sub5(){
	string qnAns;
	float score=0;
	ifstream inFile;
	inFile.open("file5.txt");


	if (inFile.fail())
	{
	cout<<"There's some error in your file...";
	_sleep(2000);
	exit(1);
	}
	string qn,op1,op2,op3,op4,ans;

	for(int j=0;j<15;j++){
	for(int i=0;i<6;i++){
		while(!inFile.eof()){
    getline(inFile,qn);	
	getline(inFile,op1);
	getline(inFile,op2);
	getline(inFile,op3);
	getline(inFile,op4);
	getline(inFile,ans);
	    cout<<endl<<qn<<"\n\n";
		cout<<op1<<"\n";
		cout<<op2<<"\n";
		cout<<op3<<"\n";
		cout<<op4<<"\n";
		cout<<"\n\tEnter your ans ONLY from given OPTION any other key is WRONG ANS\n\t";
		getline(cin,qnAns);
		int len=qnAns.length();
		if(len==1){
			if(qnAns==ans){
				cout<<"\t\t\t---------------------------\n";
				cout<<"\n\t\t\t:) CORRECT ANSWER\n";
				cout<<"\t\t\t---------------------------\n";
				score=score+5;
				
			}
			else{
				cout<<"\t\t\t---------------------------\n"; 
				cout<<"\n\t\t\t:( WRONG ANSWER\n";
				cout<<"\t\t\tCorrect Answer is=="<<ans<<endl;
				cout<<"\t\t\t---------------------------\n";
				
			}

			
		}
		else{
			cout<<"\n\t\t\tEnter one character from menu...Ans is CONSIDERED wrong\n";
		}
		
		}// for qn loop i<5
		system("cls");
inFile.close();
	}//end 15 loop
	}//EOF
	cout<<"\n\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||\n\n\t";
	result();
	cout<<"\t\t\t||||\tSCORE GAIN:"<<score<<endl;
	cout<<"\n\n\t\t|||||||||||||||||||||||||||||||||||||||||||||||||\n\n\t";
	if(score>=60){
	cout<<"\n CONGRATS YOU WON A GAME:) \nHERE YOU GO FOR THE GAME";
	game2();
	}
	else{game1();}
	thanks();
}//end sub5




//_________sub PF end_______>>>>>>>>>>>>>>>>>>>

//^^^^^^^^^^^^^^^^^^^^^^^^^End  Subject functions^^^^^^^^^^^^^^^
//**********************************************************************
void exit_Choice(){
	   thanks();
		
		 for(int i=0;i<4;i++){
       cout<<"\t\tTHANK YOU\n\t\t.........end in a few seconds";
        cout.flush();
       _sleep(2000);//time for terminate
        exit(1);
		break;
		}
}


//********************************************************************
void help_Choice(){
	cout<<"\n\n\n|||||||||||||||||||||||||||||||||||||||||||||||||\n\n";
	cout<<"\tWELCOME TO QUIZ GAME HELP\n";
	cout<<"\n\n\t--------------------------------------\n";
	cout<<"\n\n1)\tAssalam-o-Alaikum and Welcome\n";
	cout<<"2)\t^.^.^Instructions^.^.^\n";
	cout<<"3)\tThere are 5 catagories of subject\n";
	cout<<"4)\tChose one of catagory from menu\n";
	cout<<"5)\tEvery catagory have 15 questions\n";
	cout<<"6)\tEvery question have 5 marks\n";
	cout<<"7)\tIF you enter any other key ans is wrong\n";
	cout<<"8)\tIn the end we show you your marks\n";
	cout<<"9)\t^.^.^BEST OF LUCK^.^.^\n";
	cout<<"\t--------------------------------------\n";
	cout<<"\n\n|||||||||||||||||||||||||||||||||||||||||||||||||\n\n\t";
	thanks();
}

void thanks(){
	 char x=char(127);
		system("COLOR 3E");
		cout<<"  *==================================================================*";

		cout<<"\n\n\n  "<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x;

		cout<<"\n\n\n  "<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x;
		cout<<"\n\n\n  "<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<" THANK YOU  "<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x;
		cout<<"\n\n\n  "<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<"FOR PLAAYING"<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x;
        cout<<"\n\n\n  "<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x;
		cout<<"\n\n\n  *==================================================================*";


}
void game2(){
	
cout<<"\n Welcome to MY GAME **********\n";
cout<<"\n THIS GAME IS A LOGICAL GAME: \n";
cout<<"\n YOU MAY CALL IT  A MAGIC......\n";
cout<<"\n GET READY........: \n";
_sleep(2000);
cout<<"\n HERE WE GO!!!!!!!!!!!! \n";
system("cls");
cout<<"\n **********INSTRUCTIONS ABOUT GAME\n";
cout<<"\n AS WE STATED EARLIER IT IS A MAGIC SO YOU HAVE TO KNOW FEW THINGS...YEAH...\n";
_sleep(2000);
cout<<"\n FIRST WE WILL ASK YOU TO ENTER ANY NUMBER CONBINATION OF DESIRED CHARACTERS  \n";
_sleep(2000);
cout<<"\n THEN WE WILL TELL YOU THE FINAL ANSWER OF THE ADDITION THAT IS GOING TO BA HELD AFTER SOME OTHER STEPS.... \n";
_sleep(2000);
cout<<"\n YEAH MAGICAL ANSWER ,...RIGHT!!!!!\n";
_sleep(2000);
cout<<"\n NOW WE REQUIRE ANOTHER NUMBER OF SAME SIZE.....\n";
_sleep(2000);
cout<<"\n AND NOW WE ADD SOME MAGICAL NUMBER BY OURSELVE....\n";
_sleep(2000);
cout<<"\n THE MAGICAL NUMBER ..Hmmm\n";
_sleep(2000);
cout<<"\n NOW YOU CAN ADD THE THREE NUMBERS TWO ENTERED BY YOU AND THE LAST ADDED BY ME ..AWW GREAT!!!\n";
_sleep(2000);
cout<<"\n EXAMPLE IS HERE .......\n";
_sleep(2000);
cout<<"\n YOU ENTERED......LET US SAY! ...1234567.....OR ANY OTHER \n";
_sleep(2000);
cout<<"\n AND THE MAGICAL ANSWER APEARS.....11234566\n";
_sleep(2000);
cout<<"\n THE WE REQUIRE ANOTHER NUMBER FROM YOU....\n";
_sleep(2000);
cout<<"\n LET US SAY ..THE PLAYER ENTERED 2345452,....REMEMBER OF SAME LENGTH....\n";
_sleep(2000);
cout<<"\n NOW THE MAGICAL NUMBER BY ME IS ENTERED....IS.....  \"7654547\"\n";
_sleep(2000);
cout<<"\n NOW YOU CAN ADD ALL OF THESE...1234567+2345452+7654547=11234566 \n";
_sleep(2000);
cout<<"\n HEYY!!! IT WAS A DEMOO NOW  I WILL LET YOU TRY\n";
cout<<"\n ARE YOU READY!!! .....PRESS ANY KEY.....\n";
getch();
//system ("flush");

cout<<"\n HOPE YOU WILL ENJOY THIS GAME!!!!!!!!!!!!!!\n";
system("cls");
cout<<"\n AND HERE IS THE GAME!!!!!!!!!!!!!!\n";
cout<<"\n Enter the number of digits( size) :";

cout<<"\n Enter number :";

string num;
getline(cin,num);
int dnum=stoi(num);
int s=num.length();

int *d=new int [s];//partialing the num1
for(int i=0;i<s;i++){

int p=0;
p=num[i];

d[i]=cnum(p);

}//the magical answer
cout<<"\n THE MAGICAL ANSWER IS: ";

int *ans=new int [s+1];
ans[0]=1;
for(int i=1;i<s;i++){



ans[i]=d[i-1];

}
ans[s]=(d[s-1])-1;

for(int i=0;i<s+1;i++){

cout<<ans[i];

}




cout<<"\n Enter another number :";
string num2;
getline(cin,num2);
int *d1=new int [s];//partialing num2
 int *d3=new int [s];//program own number
for(int i=0;i<s;i++){

int n=0;
n=num2[i];

d1[i]=cnum(n);
d3[i]=-(d1[i]-9);  // number that have some logic of 9
}
for(int i=0;i<s;i++){

cout<<d3[i];

}

cout<<"\n NOW YOU CAN SEE....THE THREE NUMBERS \n";
for(int i=0;i<s;i++){

cout<<d[i];

}
cout<<endl;
for(int i=0;i<s;i++){

cout<<d1[i];

}
cout<<endl;
for(int i=0;i<s;i++){

cout<<d3[i];

}
cout<<"\n YOU CAN ADD AND SEE THE NUMBER MATCHES THE ANSWER : \n";
for(int i=0;i<s+1;i++){

cout<<ans[i];

}
getch();




}


int cnum(int p){
	int r=0;
	switch(p){
	
		case 48:r=0;
			break;
		case 49:r=1;
			break;
		case 50:r=2;
			break;
		case 51:r=3;
			break;
		case 52:r=4;
			break;
		case 53:r=5;
			break;
		case 54:r=6;
			break;
		case 55:r=7;
			break;
		case 56:r=8;
			break;
		case 57:r=9;
			break;
			  default:r=-1;
	
	
	}

	return r;

}
void game1(){
	 srand(time(0));//rand() function always returns the same number and it makes the game boring. To change the seed, we should call srand function.
	  int number;
	  int times=0;
      number = rand() % 100 + 1;
      int guess;
	    cout << "You HAVE 5 CHANCES FOR THIS GUESS NUMBER BETWEEN 1-100" << endl;

      do {
            cout << "Enter your estimate: ";
            cin >> guess;
			times++;
            if (guess > number){
				cout << "Your estimate is GRETER, than the secret number" << endl;}
            else if (guess <number){
				cout << "Your estimate is LESS, than the secret number" << endl;}
            else{
				cout << "Your guess is right!" << endl;
			break;}
      } while (times != 5);
	  cout << "THE RIGTH ANSWER IS : " <<number ;
      system("PAUSE");
	getch();
	
}

//-----------END  FUNCTIONS------------------------------------------------------------------------
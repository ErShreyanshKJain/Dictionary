/*This is a dictionary program and
	It uses functions,structure,and file handling.
	The dictionary database is over 14 mega bytes.
	A jain open source project.
	Copyright Reserved.*/

	  #include<iostream>
	  #include<conio.h>
	  #include<fstream>
	  #include<string.h>
	  #include<stdio.h>
	  #include<process.h>
	  #include<stdlib.h>

using namespace std;

//____________________________________________________

//Comparing Function for searching in file

//____________________________________________________
int comparestr(char word[],char word1[])
	  {
         if(word==word1)
         {return 0;
         }

  	   word=strlwr(word);
  	   word1=strlwr(word1);

		  if(strcmp(word,word1)==0)
		  {
		  return 0;}
		  else
		  {return 1;}

	  }
//_______________________________________________________

//Animation functions

//___________________________________________________________
class Animation{
public:
void exiting(){
 system("CLS");

 for(int i=0;i<80;i++)
 { cout<<"\n\n\n\t\tBye ";
 cout<<"\n\n\n\t\t\tExiting...";
  system("CLS");}
 exit(0);
}

void loading()
{for(int i=0;i<70;i++)
{cout<<"\n\n\n\t\t\tLoading...";
 system("CLS");}
}
}Anm;
//___________________________________________________________

//CLASS SEARCH_OPERATIONS

//___________________________________________________________
class Search_Operations{

char word[20],word1[20],firstname[10],lastname[10];
int length;
string meaning;
public:
	void name()
	{cout<<"\n\n\n\t\t\tEnter Your First name : ";
	  gets(firstname);
	   cin.ignore();
	  cout<<"\n\t\t\tEnter Your Last Name  : ";
	  gets(lastname);
	   cin.ignore();
	  system("CLS");
	  Anm.loading();
	}
//____________________________________________________________________

//Function to search word in the file

//____________________________________________________________________
  void Search_in_file()
 {

	cout<<"\n\nPlease enter word "<<firstname<<" "<<lastname<<": ";
	   cin>>word;
	length=strlen(word);

		ifstream file;

 if((word[0]=='a')||(word[0]=='A')){file.open("A.txt"); }
  if((word[0]=='b')||(word[0]=='B')){file.open("B.txt"); }
  if((word[0]=='c')||(word[0]=='C')){file.open("C.txt"); }
  if((word[0]=='d')||(word[0]=='D')){file.open("D.txt"); }
  if((word[0]=='e')||(word[0]=='E')){file.open("E.txt"); }
  if((word[0]=='f')||(word[0]=='F')){file.open("F.txt"); }
  if((word[0]=='g')||(word[0]=='G')){file.open("G.txt"); }
  if((word[0]=='h')||(word[0]=='H')){file.open("H.txt"); }
  if((word[0]=='i')||(word[0]=='I')){file.open("I.txt"); }
  if((word[0]=='j')||(word[0]=='J')){file.open("J.txt"); }
  if((word[0]=='k')||(word[0]=='K')){file.open("K.txt"); }
  if((word[0]=='l')||(word[0]=='L')){file.open("L.txt"); }
  if((word[0]=='m')||(word[0]=='M')){file.open("M.txt"); }
  if((word[0]=='n')||(word[0]=='N')){file.open("N.txt"); }
  if((word[0]=='o')||(word[0]=='O')){file.open("O.txt"); }
  if((word[0]=='p')||(word[0]=='P')){file.open("P.txt"); }
  if((word[0]=='q')||(word[0]=='Q')){file.open("Q.txt"); }
  if((word[0]=='r')||(word[0]=='R')){file.open("R.txt"); }
  if((word[0]=='s')||(word[0]=='S')){file.open("S.txt"); }
  if((word[0]=='t')||(word[0]=='T')){file.open("T.txt"); }
  if((word[0]=='u')||(word[0]=='U')){file.open("U.txt"); }
  if((word[0]=='v')||(word[0]=='V')){file.open("V.txt"); }
  if((word[0]=='w')||(word[0]=='W')){file.open("W.txt"); }
  if((word[0]=='x')||(word[0]=='X')){file.open("X.txt"); }
  if((word[0]=='y')||(word[0]=='Y')){file.open("Y.txt"); }
  if((word[0]=='z')||(word[0]=='Z')){file.open("Z.txt"); }


		int notfound=0,numbertimes=1;

		  cout<<"\n\nYour Search Result "<<firstname<<" : ";

		  while(!file.eof())
  {
         file>>word1;;
              if(comparestr(word,word1)==0)
           {     notfound=1;
	            file.seekg(2,ios::cur);

		        getline(file,meaning,'\n');


		        if(numbertimes<=5)
		       {
		             cout<<"\n\n"<<"("<<numbertimes<<") "<<word1<<" : ";
					 cout<<meaning;


					 }
			         numbertimes=numbertimes++;
		        if(numbertimes==6){break;}

		    }

		if(strcmp(word,word1)==1)
			{ string nextline;

				        getline(file,nextline,'\n');

				    }
														}//end of outer while.
 if(notfound==0)
 {cout<<"\n\n\t\t\tSorry "<<firstname<<" Not found...";}
file.close();
}

//________________________________________________________________

//________________________________________________________________
 char searchagain(void)
{ char choice;
 cout<<"\n\n\nDo you want to Enter another word "<<firstname<<" ? (Y/N) : ";
	 againenter : cin>>choice;
	 cin.ignore();
	 if((choice=='N')||(choice=='n'))
	 {Anm.exiting();     }

	 if((choice=='Y')||(choice=='y'))
	 {system("CLS");}
	 else
	 {
	 goto againenter;}
  return(choice);
 }
};
//_______________________________________________________

//_______________________________________________________
 int main()
	  {
		system("CLS");
	  char word[20];
	  char choice;
	  int length;
	  Anm.loading();
	  Search_Operations SEARCH;
	  cout<<"\t\t+++++++[JAIN DICTIONARY]+++++++";
	  SEARCH.name();
	  do{
		cout<<"\t\t+++++++[JAIN DICTIONARY]+++++++";

	     SEARCH.Search_in_file();

		 choice=SEARCH.searchagain();


	 }while(choice=='Y'||choice=='y');
  getch();
  return 0;
  }    

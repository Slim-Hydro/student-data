#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
using namespace std;
struct stdData
{string stdName[5];
  int stdID[5];//Array to hold student ID
  int stdAge[5];//Array to hold student age
  char stdGend[5]; //array to hold student gender
  double stdSc[5]; //array to hold student score
  char stdGr[5]; //array to hold student grade
};
int main()
{ stdData A;//stdData member to help us access variables of stdData
  int i=1; //loop control variable in the program
  int mCount=0,fCount=0,TotAge=0; //variables to store male count, female count and total age respectively
  double avSc=0,TotSc=0,avAge=0; //variables to store average score, total score and average age respectively
  while(i<6) //while loop to allow the entering of a particular students data
 {
  cout<<"Input student "<<i<<"'s name and press enter"<<endl;
cin>>A.stdName[i];
cout<<"Input student "<<i<<"'s ID and press enter"<<endl;
cin>>A.stdID[i];
cout<<"Input student "<<i<<"'s age and press enter"<<endl;
cin>>A.stdAge[i];
TotAge=TotAge+A.stdAge[i];
cout<<"Input student "<<i<<"'s gender, \"f\" for female or \"m\" for male and press enter"<<endl;
cin>>A.stdGend[i];
if (A.stdGend[i]=='f')
    fCount++;
else if (A.stdGend[i]=='m')
    mCount++;
cout<<"Input student "<<i<<"'s score and press enter"<<endl;
cin>>A.stdSc[i];
TotSc=TotSc+A.stdGr[i];
if(A.stdGr[i]>= 90)
A.stdGr[i]= 'A';
else if (A.stdSc[i]>=80)
A.stdGr[i]= 'B';
else if (A.stdSc[i]>=70)
A.stdGr[i] = 'C';
else if (A.stdSc[i]>=60)
A.stdGr[i]= 'D';
else
A.stdGr[i]= 'F';
i++;
 }
 avAge=TotAge/5;
 avSc=TotSc/5;
 i=1;
ofstream std;
std.open("Students data.txt", ios::app);
std<<"**************************************************************"<<endl;
std<<"ID number"<<"\tName"<<"\tAge"<<"\tGender"<<"\tScore"<<"\tGrade"<<endl;
while(i<6)
   {
    std<<i<<"."<<A.stdID[i]<<"\t\t"<<A.stdName[i]<<"\t\t"<<A.stdAge[i]<<"\t"<<A.stdGend[i];
    std<<"\t"<<A.stdSc[i]<<"\t"<<A.stdGr[i]<<endl;
    i++;
   }
    std<<endl;
    std<<"The average age is "<<round(avAge)<<"."<<endl;
    std<<"The average score is "<<avSc<<"."<<endl;
    std<<"The total number of males is "<<mCount<<"."<<endl;
    std<<"The total number of females is "<<fCount<<"."<<endl;
    std.close();
return 0;
}



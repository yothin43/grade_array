#include <iostream>
#include <string>
using namespace std;
void ListStudent(string namestr[100],int score[100]);
char CalGrade(int score);
int main()
{
	int number,score[100];
	string namestr[100];
	cout <<"Input Number of Student : ";
	cin>>number;
	for(int i=0;i<number;i++)
	{
		cout<<"Input name : ";
		cin>>namestr[i];
		cout<<"Input score" << i+1<<" : ";
		cin>>score[i];

	}
	cout<<endl;
	ListStudent(namestr, score);
	return 0 ;

}
void ListStudent(string namestr[100],int score[100])
{
	for(int i = 0;i<100;i++)
	{
		if (namestr[i] !="")
	{
		cout<<"Student name :"<<namestr[i]<<" Score"<<i+1<<"="<<score[i];
		cout<<"  You grade is "<<CalGrade(score[i])<<endl;
	}
	else {break;}
}
}
char CalGrade(int score)
{
	char grade;
	if(score>=80)
	{
		grade = 'A';
	}
	else if(score>=70)
	{
		grade = 'B';
	}
	else if(score>=60)
	{
		grade = 'C';
	}
	else if(score>=50)
	{
		grade = 'D';
	}
	else
	{
		grade = 'F';
	}
	return grade;
}
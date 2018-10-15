#include<iostream>
#include<fstream>
#include<string>
using namespace std;

struct Student{
 string idNumber;
    string name;
    int age;
    int score;
    string gender;
    string grade;

};

int main()
{
Student s1;

cout<<"Please enter your ID number, Name , Age , Gender(M/F), and score respectively."<<endl;
cin>>s1.idNumber;
cin>>s1.name;
cin>>s1.age;
cin>>s1.gender;
cin>>s1.score;

Student s2;
cout<<"Please enter your ID number, Name , Age , Gender(M/F), and score respectively."<<endl;
cin>>s2.idNumber;
cin>>s2.name;
cin>>s2.age;
cin>>s2.gender;
cin>>s2.score;

Student s3;
 cout<<"Please enter your ID number, Name , Age , Gender(M/F), and score respectively."<<endl;
cin>>s3.idNumber;
cin>>s3.name;
cin>>s3.age;
cin>>s3.gender;
cin>>s3.score;

Student s4;
cout<<"Please enter your ID number, Name , Age , Gender(M/F), and score respectively."<<endl;
cin>>s4.idNumber;
cin>>s4.name;
cin>>s4.age;
cin>>s4.gender;
cin>>s4.score;

Student s5;
cout<<"Please enter your ID number, Name , Age , Gender(M/F), and score respectively."<<endl;
cin>>s5.idNumber;
cin>>s5.name;
cin>>s5.age;
cin>>s5.gender;
cin>>s5.score;
//GRADING FOR STUDENT1
 if(s1.score<=100 && s1.score>=80){

   s1.grade="A";
}
if(s1.score<=79 && s1.score>=70){

    s1.grade="B";
}
if(s1.score<=69 && s1.score>=60){

    s1.grade="C";
}
if(s1.score<=59 && s1.score>=50){

    s1.grade="D";
}
if(s1.score<=49 && s1.score>=40){

    s1.grade="E";
}
else{

    s1.grade="F";
}
//GRADING FOR STUDENT2
 if(s2.score<=100 && s2.score>=80){

   s1.grade="A";
}
if(s2.score<=79 && s2.score>=70){

    s2.grade="B";
}
if(s2.score<=69 && s2.score>=60){

    s2.grade="C";
}
if(s2.score<=59 && s2.score>=50){

    s2.grade="D";
}
if(s2.score<=49 && s2.score>=40){

    s2.grade="E";
}
else{

    s2.grade="F";
}
//GRADING FOR STUDENT 3
 if(s3.score<=100 && s3.score>=80){

   s3.grade="A";
}
if(s3.score<=79 && s3.score>=70){

    s1.grade="B";
}
if(s3.score<=69 && s3.score>=60){

    s3.grade="C";
}
if(s3.score<=59 && s3.score>=50){

    s1.grade="D";
}
if(s3.score<=49 && s3.score>=40){

    s3.grade="E";
}
else{

    s3.grade="F";
}
//GRADING FOR STUDENT 4
 if(s4.score<=100 && s4.score>=80){

   s4.grade="A";
}
if(s4.score<=79 && s4.score>=70){

    s4.grade="B";
}
if(s4.score<=69 && s4.score>=60){

    s4.grade="C";
}
if(s4.score<=59 && s4.score>=50){

    s4.grade="D";
}
if(s1.score<=49 && s1.score>=40){

    s4.grade="E";
}
else{

    s4.grade="F";
}
//GRADING FOR STUDENT 5
 if(s5.score<=100 && s5.score>=80){

   s5.grade="A";
}
if(s5.score<=79 && s5.score>=70){

    s5.grade="B";
}
if(s5.score<=69 && s5.score>=60){

    s5.grade="C";
}
if(s5.score<=59 && s5.score>=50){

    s5.grade="D";
}
if(s5.score<=49 && s5.score>=40){

    s5.grade="E";
}
else{

    s5.grade="F";
}




ofstream writer;
writer.open("report.txt");
writer<<"IDNUMBER"<<"          "<<"NAME"<<"          "<<"AGE" <<"          "<<"GENDER "<<"          "<<"SCORE "<<"          "<<"GRADE"<<endl;
writer<<"***************************************************************************************************************************************"<<endl;
writer<<s1.idNumber<<"          "<<s1.name<<"          "<<s1.age<<"          "<<s1.gender<<"          "<<s1.score<<"               "<<s1.grade<<endl;
writer<<s2.idNumber<<"          "<<s2.name<<"          "<<s2.age<<"          "<<s2.gender<<"          "<<s2.score<<"               "<<s2.grade<<endl;
writer<<s3.idNumber<<"          "<<s3.name<<"          "<<s3.age<<"          "<<s3.gender<<"          "<<s3.score<<"               "<<s3.grade<<endl;
writer<<s4.idNumber<<"          "<<s4.name<<"          "<<s4.age<<"          "<<s4.gender<<"          "<<s4.score<<"               "<<s4.grade<<endl;
writer<<s5.idNumber<<"          "<<s5.name<<"          "<<s5.age<<"          "<<s5.gender<<"          "<<s5.score<<"               "<<s5.grade<<endl;
writer<<"***************************************************************************************************************************************"<<endl;
writer<<"Average Age:"<<(s1.age+s2.age+s3.age+s4.age+s5.age)/5<<endl;
writer<<"Average Score:"<<(s1.score+s2.score+s3.score+s4.score+s5.score)/5;
writer.close();
return 0;
}


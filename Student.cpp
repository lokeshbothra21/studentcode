#include<iostream>
#include "Student.h"
using namespace std;

Student::Student(int studid,string studname,int marks1,int marks2,int marks3){
				this->studid=studid;
				this->studname=studname;
				this->marks1=marks1;
				this->marks2=marks2;
				this->marks3=marks3;
				
			};
			void Student::totalmarks(int marks1,int marks2,int marks3){
				cout<<"Total marks:"<<marks1+marks2+marks3;
				
			};
			void Student::percentage(int marks1,int marks2,int marks3){
			int per;
			per=(marks1+marks2+marks3)/300*100;
			cout<<"percentage"<<per;
			};
			


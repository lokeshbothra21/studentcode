#include<iostream>
using namespace std;

class Student{
	private:
		int studid;
		string studname;
		int marks1,marks2,marks3;
		public:
			Student();
			Student(int studid,string studname,int marks1,int marks2,int marks3);
			void totalmarks(int marks1,int marks2,int marks3);
			void percentage(int marks1,int marks2,int marks3);
	
};

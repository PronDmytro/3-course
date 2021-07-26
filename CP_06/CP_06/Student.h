#pragma once
#include <string>
#include <ctime>
#include <atltime.h>
#include <iostream>
#include "Speciality.h"
using namespace std;
class Student
{
private:
	string _name,
	string_surname,
	_second_name,
	_group,
	_formEducation;
	Speciality _speciality;
	int _kurs;
	tm _date_of_birth;
	/*time_t rawtime;
	struct tm* timeinfo;

	time(&rawtime);
	timeinfo = localtime(&rawtime);*/
public:
	Student();
	~Student();

	tm get_date_of_birth();
	void set_date_of_birth(string);
	
	int get_age();

	
	//int average();
	string get_group();
	void set_group(string);

	string get_abb_name();

	Speciality get_speciality();
	void set_speciality(int);

	string get_form_education();
	void set_form_education(string);
	
	
};


#include "Student.h"

tm Student::get_date_of_birth()
{
	return _date_of_birth;
}
void Student::set_date_of_birth(string date_of_birth)
{
	int year = 0, mon = 0, day = 0;
	
	_date_of_birth.tm_year = year;
	_date_of_birth.tm_mon = mon;
	_date_of_birth.tm_mday = day;
}

int Student::get_age()
{
	
}

string Student::get_group()
{
	return _group;
}
void Student::set_group(string group)
{
	_group = group;
}

string Student::get_abb_name()
{
	
}

Speciality Student::get_speciality()
{
	return _speciality;
}
void Student::set_speciality(int code)
{
	_speciality.setId(code);
}

string Student::get_form_education()
{
	return _formEducation;
}
void Student::set_form_education(string formEducation)
{
	_formEducation = formEducation;
}


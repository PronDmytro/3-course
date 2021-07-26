#pragma once
#include <string>

using namespace std;

class Speciality
{
private:
	int _id;
	string _name;
	void update_name();
public:
	int getId();
	void setId(int);

	string get_name();

	Speciality();
	~Speciality();
};


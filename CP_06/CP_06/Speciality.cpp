#include "Speciality.h"

void Speciality::update_name()
{
	switch (_id)
	{
	case 121: _name = "PR";break;
	default: _name = "Error";
	}
}

int Speciality::getId()
{
	return _id;
}

void Speciality::setId(int id)
{
	_id = id;
	update_name();
}


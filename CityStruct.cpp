#include "CityStruct.h"

#include <string>
#include <iostream>

using namespace std;

CityStruct::CityStruct()
{
	mName = mPopulation = mID = 0;
}
/*
CityStruct::CityStruct(string name, int pop, int ID)
{
	setName(name);
	setPop(pop);
	setID(ID);

}
*/
void CityStruct::setName(string name)
{
	mName = name;
	
}

void CityStruct::setPop(int pop)
{
	mPopulation = pop;
}

void CityStruct::setID(int ID)
{
	mID = ID;
}


string CityStruct::getName() const
{
	return mName;
}


int CityStruct::getPop() const
{
	return mPopulation;
}

void CityStruct::printClass() const
{
	cout<<mName <<" has a population of: \n"
		<<mPopulation<<endl;
}

string CityStruct::getNameByPop(int pop)
{
	if(pop == mPopulation)
		return mName;
	else
		return "This city is not in the list";
}

string CityStruct::getNameByID(int ID)
{
	if(ID == mID)
		return mName;
	else
		return "There is no city in the graph matching this ID.";
}
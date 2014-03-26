#ifndef CITYSTRUCT_H
#define CITYSTRUCT_H

#include <string>

using namespace std;


class CityStruct
{
public:
	CityStruct();
	//CityStruct(string name ="", int pop =0, int ID =0);
	void setName(string);
	void setPop(int);
	void setID(int);
	string getNameByPop(int);

	string getName() const;
	int getPop() const;
	string getNameByID(int);

	void printClass()const;
	
private:
	int mPopulation, mID;
	string mName;
};


#endif


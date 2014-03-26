#include <iostream>
#include <fstream>
#include "graphType.h"
#include "CityStruct.h"
 
using namespace std;
enum cities
{
	Bridgeport, New_Haven, Hartford, Stamford,
	Waterbury, Norwalk, Danbury, New_Britain
};


void main()
{
	string cityName[8] = {"Bridgeport", "New Haven", "Hartford",
		"Stamford","Waterbury","Norwalk","Danbury","New Britain"};
	
	long population[8] = {144229,129779,124775,122643,110366,85603,
		80893,71254};



	graphType<long,50> myGraph;
	CityStruct newCity[10];
	for(int i=0;i<8; i++)
	{
		newCity[i].setID(i);
		newCity[i].setName(cityName[i]);
		newCity[i].setPop(population[i]);
	}

	for(int i=0;i<8;i++)
	{
		newCity[i].printClass();
	};


	myGraph.createGraph();
	myGraph.printGraph();
	cout<<endl<<endl;
	
	cout<<"Depth First Traversal: ";
	myGraph.depthFirstTraversal();
	cout<<endl;

	cout<<"Breadth First Traversal: ";
	myGraph.breadthFirstTraversal();
	cout<<endl;
	
}
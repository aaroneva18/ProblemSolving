#pragma once
#include <iostream>
#include <list>
#include <vector>
using std::cout, std::cin, std::vector, std::string;
class ArbolDeNavidad {

public:

	vector<string> asteriscos;
	vector<string> espacios;

	bool treeIsActive;

	int height;

	void init(int height);

	void printTree();

	void deployInferface();

	void deployText();

	void switchTreeActions(int p_numAction);


};


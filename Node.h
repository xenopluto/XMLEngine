#ifndef __NODE_H__
#define __NODE_H__

#include <string>
#include <vector>

using namespace std;

class Node
{
public:
	bool AddAttribute(string att);
	void PrintTree();
private:
	std::vector<string> attrs;
	string value;
	vector<Node*> children;
};

#endif //__NODE_H__
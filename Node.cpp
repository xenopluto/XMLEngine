#include "Node.h"
#include <stdio.h>

bool Node::AddAttribute(string att) {
	attrs.push_back(att);
}

void Node::PrintTree() {
	printf("PrintTree\n");
	for (int i = 0; i < attrs.size(); i++) {
		printf(" %s", attrs[i].c_str());
	}
	printf("\nend..\n");
}
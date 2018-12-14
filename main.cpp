#include <stdio.h>

#include "Node.h"

int
main(int argc, char* argv[])
{
	printf("arg counts: %d, args:", argc);
	for (int i = 0; i < argc; i++) {
		printf(" %s", argv[i]);
	}
	printf("\n");
	printf("Something done...\n");
	Node temp;
	temp.AddAttribute("hm");
	temp.PrintTree();
	return 0;
}
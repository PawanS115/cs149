#include "user/user.h"

typedef unsigned int uint;

int main (int argc, char *argv[]){
	if (argc < 2){
		exit(1);
	}
	
	int ticks = atoi(argv[1]);
	sleep(ticks);
	exit(0);
}

//Generate 106 samples of U using a C program and save into a file called uni.dat
//Yash Ramteke - BT21BTECH11006


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "header.h"

#define NUM 1000000

int main() {
	generateUniform("uni.dat", 1000000);
	return 0;	
}

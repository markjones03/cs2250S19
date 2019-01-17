#include <stdio.h>
#include <math.h>


// Constants
 const double GRAVITY = 9.8; //meters/second^2
 const double BUILDING = 500; //meters

int main()
{

	//formula: s =0.5 Gravity times time^2
	
	double time = 0;
	double distance =0;
	double fromground =0;

	//Take usser input; time travelled
	printf("Enter time travelled:");
	
	scanf("%lf", &time);
	
	distance = 0.5 * GRAVITY * pow(time, 2);
	
	//display distance
	
	printf("After %lf seconds, your ball traveled %lf meters\n", time, distance);
	// distance from ground in meters
	fromground = BUILDING - distance;
	printf("The ball is %lf meters from the ground\n", fromground);

	return 0;
}
		

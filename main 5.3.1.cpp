#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;
//This program creates a simulation of rolling two dice and seeing if
//they add up to a prime number.
//Author: Badtothebunny
//First I am creating a function to determine if a number is prime or not.
int isPrime (int sum)
{
	int test=2;
	while (sum%test !=0 && test<=sqrt(sum))
		test++;
	if (sum%test ==0)
		return 0;
	else
		return 1;
}
int main(int argc, char** argv) 
{
	int cnt=0,dice1,dice2,win=0,sum=0;
	while (cnt<500)
	{
		dice1=rand()%6+1;
		dice2=rand()%6+1;
		sum=dice1+dice2;
		if (isPrime(sum)==1)
			win++;
		cnt++;
	}
	cout<<"The amount of times won out of 500: "<<win<<endl;
}


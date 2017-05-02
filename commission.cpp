#include<iostream>
#include"gtest/gtest.h"
#include"commission.h"

int sellResult(int lock,int stock,int barrel)
{
	if(lock<1 || stock<1 || barrel<1)
		return 0;
	if(lock>70 || stock>80 || barrel>90)
		return 0;
	
	return lock*45+stock*30+barrel*25;
}
int salary(int result)
{
	int pay = 0;
	if(result<100 || result>7800)
		return 0;
	if(result>1800)
		pay=(result-1800)*20/100+100+120;
	else if(result>1000)
		pay=(result-1000)*15/100+100;
	else 
		pay=result*10/100;

	return pay;
}
int commission(int lock,int stock,int barrel)
{
	return salary(sellResult(lock,stock,barrel));
}




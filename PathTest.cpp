#include<iostream>
#include"gtest/gtest.h"
#include"commission.h"

TEST(commission,C0)
{
	EXPECT_EQ(0,commission(0,0,0));
	EXPECT_EQ(0,commission(71,81,91));
	EXPECT_EQ(234,commission(1,60,1));
	EXPECT_EQ(140,commission(1,40,1));
	EXPECT_EQ(10,commission(1,1,1));
}
TEST(commission,C1)
{
	EXPECT_EQ(0,commission(0,0,0));
	EXPECT_EQ(0,commission(71,81,91));
	EXPECT_EQ(234,commission(1,60,1));
	EXPECT_EQ(140,commission(1,40,1));
	EXPECT_EQ(10,commission(1,1,1));
}
TEST(commission,C2)
{
	EXPECT_EQ(0,commission(0,0,0));
	EXPECT_EQ(0,commission(71,81,91));
	EXPECT_EQ(234,commission(1,60,1));
	EXPECT_EQ(140,commission(1,40,1));
	EXPECT_EQ(10,commission(1,1,1));
}


TEST(commission,MCDC)
{
	//go through all statement and exit node
	//all branch taken
	//extra check in function salary will be traverse if function sellResult works correctly to a invalid input
	EXPECT_EQ(0,commission(0,0,0));
	EXPECT_EQ(0,commission(71,81,91));
	EXPECT_EQ(234,commission(1,60,1));
	EXPECT_EQ(140,commission(1,40,1));
	EXPECT_EQ(10,commission(1,1,1));
	//condition check
	EXPECT_EQ(0,commission(0,1,1));
	EXPECT_EQ(0,commission(1,0,1));
	EXPECT_EQ(0,commission(1,1,0));
	EXPECT_EQ(0,commission(0,0,1));
	EXPECT_EQ(0,commission(0,1,0));
	EXPECT_EQ(0,commission(1,0,0));
	EXPECT_EQ(0,commission(0,0,0));
	EXPECT_EQ(0,commission(71,80,90));
	EXPECT_EQ(0,commission(70,81,90));
	EXPECT_EQ(0,commission(70,80,91));
	EXPECT_EQ(0,commission(71,81,90));
	EXPECT_EQ(0,commission(71,80,91));
	EXPECT_EQ(0,commission(70,81,91));
	EXPECT_EQ(0,commission(71,81,91));
	EXPECT_EQ(234,commission(1,60,1));
	EXPECT_EQ(140,commission(1,40,1));
	EXPECT_EQ(10,commission(1,1,1));

}



int main(int argc,char** argv)
{
	testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();

}

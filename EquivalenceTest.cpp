#include<iostream>
#include"gtest/gtest.h"
#include"commission.h"

TEST(TheCommissionProblem,Equivalence)
{

EXPECT_EQ(	20	,commission(	2	,	2	,	2	));
EXPECT_EQ(	0	,commission(	0	,	2	,	2	));
EXPECT_EQ(	0	,commission(	2	,	0	,	2	));
EXPECT_EQ(	0	,commission(	2	,	2	,	0	));
EXPECT_EQ(	0	,commission(	0	,	0	,	2	));
EXPECT_EQ(	0	,commission(	0	,	2	,	0	));
EXPECT_EQ(	0	,commission(	2	,	0	,	0	));
EXPECT_EQ(	0	,commission(	0	,	0	,	0	));
EXPECT_EQ(	0	,commission(	71	,	2	,	2	));
EXPECT_EQ(	0	,commission(	2	,	81	,	2	));
EXPECT_EQ(	0	,commission(	2	,	2	,	91	));
EXPECT_EQ(	0	,commission(	71	,	81	,	2	));
EXPECT_EQ(	0	,commission(	71	,	2	,	91	));
EXPECT_EQ(	0	,commission(	2	,	81	,	91	));
EXPECT_EQ(	0	,commission(	71	,	81	,	91	));
}



int main(int argc,char** argv)
{
	testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();

}

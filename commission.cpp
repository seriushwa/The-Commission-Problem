#include<iostream>
#include"gtest/gtest.h"

int sellResult(int lock,int stock,int barrel)
{
	return 0;
}
int salary(int result)
{
	return 0;
}

TEST(sellResult,Boundary)
{
EXPECT_EQ(	0	,sellResult(	0	,	0	,	0	));
EXPECT_EQ(	0	,sellResult(	0	,	0	,	1	));
EXPECT_EQ(	0	,sellResult(	0	,	0	,	2	));
EXPECT_EQ(	0	,sellResult(	0	,	0	,	45	));
EXPECT_EQ(	0	,sellResult(	0	,	0	,	89	));
EXPECT_EQ(	0	,sellResult(	0	,	0	,	90	));
EXPECT_EQ(	0	,sellResult(	0	,	0	,	91	));
EXPECT_EQ(	0	,sellResult(	0	,	1	,	0	));
EXPECT_EQ(	0	,sellResult(	0	,	1	,	1	));
EXPECT_EQ(	0	,sellResult(	0	,	1	,	2	));
EXPECT_EQ(	0	,sellResult(	0	,	1	,	45	));
EXPECT_EQ(	0	,sellResult(	0	,	1	,	89	));
EXPECT_EQ(	0	,sellResult(	0	,	1	,	90	));
EXPECT_EQ(	0	,sellResult(	0	,	1	,	91	));
EXPECT_EQ(	0	,sellResult(	0	,	2	,	0	));
EXPECT_EQ(	0	,sellResult(	0	,	2	,	1	));
EXPECT_EQ(	0	,sellResult(	0	,	2	,	2	));
EXPECT_EQ(	0	,sellResult(	0	,	2	,	45	));
EXPECT_EQ(	0	,sellResult(	0	,	2	,	89	));
EXPECT_EQ(	0	,sellResult(	0	,	2	,	90	));
EXPECT_EQ(	0	,sellResult(	0	,	2	,	91	));
EXPECT_EQ(	0	,sellResult(	0	,	40	,	0	));
EXPECT_EQ(	0	,sellResult(	0	,	40	,	1	));
EXPECT_EQ(	0	,sellResult(	0	,	40	,	2	));
EXPECT_EQ(	0	,sellResult(	0	,	40	,	45	));
EXPECT_EQ(	0	,sellResult(	0	,	40	,	89	));
EXPECT_EQ(	0	,sellResult(	0	,	40	,	90	));
EXPECT_EQ(	0	,sellResult(	0	,	40	,	91	));
EXPECT_EQ(	0	,sellResult(	0	,	79	,	0	));
EXPECT_EQ(	0	,sellResult(	0	,	79	,	1	));
EXPECT_EQ(	0	,sellResult(	0	,	79	,	2	));
EXPECT_EQ(	0	,sellResult(	0	,	79	,	45	));
EXPECT_EQ(	0	,sellResult(	0	,	79	,	89	));
EXPECT_EQ(	0	,sellResult(	0	,	79	,	90	));
EXPECT_EQ(	0	,sellResult(	0	,	79	,	91	));
EXPECT_EQ(	0	,sellResult(	0	,	80	,	0	));
EXPECT_EQ(	0	,sellResult(	0	,	80	,	1	));
EXPECT_EQ(	0	,sellResult(	0	,	80	,	2	));
EXPECT_EQ(	0	,sellResult(	0	,	80	,	45	));
EXPECT_EQ(	0	,sellResult(	0	,	80	,	89	));
EXPECT_EQ(	0	,sellResult(	0	,	80	,	90	));
EXPECT_EQ(	0	,sellResult(	0	,	80	,	91	));
EXPECT_EQ(	0	,sellResult(	0	,	81	,	0	));
EXPECT_EQ(	0	,sellResult(	0	,	81	,	1	));
EXPECT_EQ(	0	,sellResult(	0	,	81	,	2	));
EXPECT_EQ(	0	,sellResult(	0	,	81	,	45	));
EXPECT_EQ(	0	,sellResult(	0	,	81	,	89	));
EXPECT_EQ(	0	,sellResult(	0	,	81	,	90	));
EXPECT_EQ(	0	,sellResult(	0	,	81	,	91	));
			
EXPECT_EQ(	0	,sellResult(	1	,	0	,	0	));
EXPECT_EQ(	0	,sellResult(	1	,	0	,	1	));
EXPECT_EQ(	0	,sellResult(	1	,	0	,	2	));
EXPECT_EQ(	0	,sellResult(	1	,	0	,	45	));
EXPECT_EQ(	0	,sellResult(	1	,	0	,	89	));
EXPECT_EQ(	0	,sellResult(	1	,	0	,	90	));
EXPECT_EQ(	0	,sellResult(	1	,	0	,	91	));
EXPECT_EQ(	0	,sellResult(	1	,	1	,	0	));
EXPECT_EQ(	100	,sellResult(	1	,	1	,	1	));
EXPECT_EQ(	125	,sellResult(	1	,	1	,	2	));
EXPECT_EQ(	1200	,sellResult(	1	,	1	,	45	));
EXPECT_EQ(	2300	,sellResult(	1	,	1	,	89	));
EXPECT_EQ(	2325	,sellResult(	1	,	1	,	90	));
EXPECT_EQ(	0	,sellResult(	1	,	1	,	91	));
EXPECT_EQ(	0	,sellResult(	1	,	2	,	0	));
EXPECT_EQ(	130	,sellResult(	1	,	2	,	1	));
EXPECT_EQ(	155	,sellResult(	1	,	2	,	2	));
EXPECT_EQ(	1230	,sellResult(	1	,	2	,	45	));
EXPECT_EQ(	2330	,sellResult(	1	,	2	,	89	));
EXPECT_EQ(	2355	,sellResult(	1	,	2	,	90	));
EXPECT_EQ(	0	,sellResult(	1	,	2	,	91	));
EXPECT_EQ(	0	,sellResult(	1	,	40	,	0	));
EXPECT_EQ(	1270	,sellResult(	1	,	40	,	1	));
EXPECT_EQ(	1295	,sellResult(	1	,	40	,	2	));
EXPECT_EQ(	2370	,sellResult(	1	,	40	,	45	));
EXPECT_EQ(	3470	,sellResult(	1	,	40	,	89	));
EXPECT_EQ(	3495	,sellResult(	1	,	40	,	90	));
EXPECT_EQ(	0	,sellResult(	1	,	40	,	91	));
EXPECT_EQ(	0	,sellResult(	1	,	79	,	0	));
EXPECT_EQ(	2440	,sellResult(	1	,	79	,	1	));
EXPECT_EQ(	2465	,sellResult(	1	,	79	,	2	));
EXPECT_EQ(	3540	,sellResult(	1	,	79	,	45	));
EXPECT_EQ(	4640	,sellResult(	1	,	79	,	89	));
EXPECT_EQ(	4665	,sellResult(	1	,	79	,	90	));
EXPECT_EQ(	0	,sellResult(	1	,	79	,	91	));
EXPECT_EQ(	0	,sellResult(	1	,	80	,	0	));
EXPECT_EQ(	2470	,sellResult(	1	,	80	,	1	));
EXPECT_EQ(	2495	,sellResult(	1	,	80	,	2	));
EXPECT_EQ(	3570	,sellResult(	1	,	80	,	45	));
EXPECT_EQ(	4670	,sellResult(	1	,	80	,	89	));
EXPECT_EQ(	4695	,sellResult(	1	,	80	,	90	));
EXPECT_EQ(	0	,sellResult(	1	,	80	,	91	));
EXPECT_EQ(	0	,sellResult(	1	,	81	,	0	));
EXPECT_EQ(	0	,sellResult(	1	,	81	,	1	));
EXPECT_EQ(	0	,sellResult(	1	,	81	,	2	));
EXPECT_EQ(	0	,sellResult(	1	,	81	,	45	));
EXPECT_EQ(	0	,sellResult(	1	,	81	,	89	));
EXPECT_EQ(	0	,sellResult(	1	,	81	,	90	));
EXPECT_EQ(	0	,sellResult(	1	,	81	,	91	));

EXPECT_EQ(	0	,sellResult(	2	,	0	,	0	));
EXPECT_EQ(	0	,sellResult(	2	,	0	,	1	));
EXPECT_EQ(	0	,sellResult(	2	,	0	,	2	));
EXPECT_EQ(	0	,sellResult(	2	,	0	,	45	));
EXPECT_EQ(	0	,sellResult(	2	,	0	,	89	));
EXPECT_EQ(	0	,sellResult(	2	,	0	,	90	));
EXPECT_EQ(	0	,sellResult(	2	,	0	,	91	));
EXPECT_EQ(	0	,sellResult(	2	,	1	,	0	));
EXPECT_EQ(	145	,sellResult(	2	,	1	,	1	));
EXPECT_EQ(	170	,sellResult(	2	,	1	,	2	));
EXPECT_EQ(	1245	,sellResult(	2	,	1	,	45	));
EXPECT_EQ(	2345	,sellResult(	2	,	1	,	89	));
EXPECT_EQ(	2370	,sellResult(	2	,	1	,	90	));
EXPECT_EQ(	0	,sellResult(	2	,	1	,	91	));
EXPECT_EQ(	0	,sellResult(	2	,	2	,	0	));
EXPECT_EQ(	175	,sellResult(	2	,	2	,	1	));
EXPECT_EQ(	200	,sellResult(	2	,	2	,	2	));
EXPECT_EQ(	1275	,sellResult(	2	,	2	,	45	));
EXPECT_EQ(	2375	,sellResult(	2	,	2	,	89	));
EXPECT_EQ(	2400	,sellResult(	2	,	2	,	90	));
EXPECT_EQ(	0	,sellResult(	2	,	2	,	91	));
EXPECT_EQ(	0	,sellResult(	2	,	40	,	0	));
EXPECT_EQ(	1315	,sellResult(	2	,	40	,	1	));
EXPECT_EQ(	1340	,sellResult(	2	,	40	,	2	));
EXPECT_EQ(	2415	,sellResult(	2	,	40	,	45	));
EXPECT_EQ(	3515	,sellResult(	2	,	40	,	89	));
EXPECT_EQ(	3540	,sellResult(	2	,	40	,	90	));
EXPECT_EQ(	0	,sellResult(	2	,	40	,	91	));
EXPECT_EQ(	0	,sellResult(	2	,	79	,	0	));
EXPECT_EQ(	2485	,sellResult(	2	,	79	,	1	));
EXPECT_EQ(	2510	,sellResult(	2	,	79	,	2	));
EXPECT_EQ(	3585	,sellResult(	2	,	79	,	45	));
EXPECT_EQ(	4685	,sellResult(	2	,	79	,	89	));
EXPECT_EQ(	4710	,sellResult(	2	,	79	,	90	));
EXPECT_EQ(	0	,sellResult(	2	,	79	,	91	));
EXPECT_EQ(	0	,sellResult(	2	,	80	,	0	));
EXPECT_EQ(	2515	,sellResult(	2	,	80	,	1	));
EXPECT_EQ(	2540	,sellResult(	2	,	80	,	2	));
EXPECT_EQ(	3615	,sellResult(	2	,	80	,	45	));
EXPECT_EQ(	4715	,sellResult(	2	,	80	,	89	));
EXPECT_EQ(	4740	,sellResult(	2	,	80	,	90	));
EXPECT_EQ(	0	,sellResult(	2	,	80	,	91	));
EXPECT_EQ(	0	,sellResult(	2	,	81	,	0	));
EXPECT_EQ(	0	,sellResult(	2	,	81	,	1	));
EXPECT_EQ(	0	,sellResult(	2	,	81	,	2	));
EXPECT_EQ(	0	,sellResult(	2	,	81	,	45	));
EXPECT_EQ(	0	,sellResult(	2	,	81	,	89	));
EXPECT_EQ(	0	,sellResult(	2	,	81	,	90	));
EXPECT_EQ(	0	,sellResult(	2	,	81	,	91	));
							
EXPECT_EQ(	0	,sellResult(	35	,	0	,	0	));
EXPECT_EQ(	0	,sellResult(	35	,	0	,	1	));
EXPECT_EQ(	0	,sellResult(	35	,	0	,	2	));
EXPECT_EQ(	0	,sellResult(	35	,	0	,	45	));
EXPECT_EQ(	0	,sellResult(	35	,	0	,	89	));
EXPECT_EQ(	0	,sellResult(	35	,	0	,	90	));
EXPECT_EQ(	0	,sellResult(	35	,	0	,	91	));
EXPECT_EQ(	0	,sellResult(	35	,	1	,	0	));
EXPECT_EQ(	1630	,sellResult(	35	,	1	,	1	));
EXPECT_EQ(	1655	,sellResult(	35	,	1	,	2	));
EXPECT_EQ(	2730	,sellResult(	35	,	1	,	45	));
EXPECT_EQ(	3830	,sellResult(	35	,	1	,	89	));
EXPECT_EQ(	3855	,sellResult(	35	,	1	,	90	));
EXPECT_EQ(	0	,sellResult(	35	,	1	,	91	));
EXPECT_EQ(	0	,sellResult(	35	,	2	,	0	));
EXPECT_EQ(	1660	,sellResult(	35	,	2	,	1	));
EXPECT_EQ(	1685	,sellResult(	35	,	2	,	2	));
EXPECT_EQ(	2760	,sellResult(	35	,	2	,	45	));
EXPECT_EQ(	3860	,sellResult(	35	,	2	,	89	));
EXPECT_EQ(	3885	,sellResult(	35	,	2	,	90	));
EXPECT_EQ(	0	,sellResult(	35	,	2	,	91	));
EXPECT_EQ(	0	,sellResult(	35	,	40	,	0	));
EXPECT_EQ(	2800	,sellResult(	35	,	40	,	1	));
EXPECT_EQ(	2825	,sellResult(	35	,	40	,	2	));
EXPECT_EQ(	3900	,sellResult(	35	,	40	,	45	));
EXPECT_EQ(	5000	,sellResult(	35	,	40	,	89	));
EXPECT_EQ(	5025	,sellResult(	35	,	40	,	90	));
EXPECT_EQ(	0	,sellResult(	35	,	40	,	91	));
EXPECT_EQ(	0	,sellResult(	35	,	79	,	0	));
EXPECT_EQ(	3970	,sellResult(	35	,	79	,	1	));
EXPECT_EQ(	3995	,sellResult(	35	,	79	,	2	));
EXPECT_EQ(	5070	,sellResult(	35	,	79	,	45	));
EXPECT_EQ(	6170	,sellResult(	35	,	79	,	89	));
EXPECT_EQ(	6195	,sellResult(	35	,	79	,	90	));
EXPECT_EQ(	0	,sellResult(	35	,	79	,	91	));
EXPECT_EQ(	0	,sellResult(	35	,	80	,	0	));
EXPECT_EQ(	4000	,sellResult(	35	,	80	,	1	));
EXPECT_EQ(	4025	,sellResult(	35	,	80	,	2	));
EXPECT_EQ(	5100	,sellResult(	35	,	80	,	45	));
EXPECT_EQ(	6200	,sellResult(	35	,	80	,	89	));
EXPECT_EQ(	6225	,sellResult(	35	,	80	,	90	));
EXPECT_EQ(	0	,sellResult(	35	,	80	,	91	));
EXPECT_EQ(	0	,sellResult(	35	,	81	,	0	));
EXPECT_EQ(	0	,sellResult(	35	,	81	,	1	));
EXPECT_EQ(	0	,sellResult(	35	,	81	,	2	));
EXPECT_EQ(	0	,sellResult(	35	,	81	,	45	));
EXPECT_EQ(	0	,sellResult(	35	,	81	,	89	));
EXPECT_EQ(	0	,sellResult(	35	,	81	,	90	));
EXPECT_EQ(	0	,sellResult(	35	,	81	,	91	));
								
EXPECT_EQ(	0	,sellResult(	69	,	0	,	0	));
EXPECT_EQ(	0	,sellResult(	69	,	0	,	1	));
EXPECT_EQ(	0	,sellResult(	69	,	0	,	2	));
EXPECT_EQ(	0	,sellResult(	69	,	0	,	45	));
EXPECT_EQ(	0	,sellResult(	69	,	0	,	89	));
EXPECT_EQ(	0	,sellResult(	69	,	0	,	90	));
EXPECT_EQ(	0	,sellResult(	69	,	0	,	91	));
EXPECT_EQ(	0	,sellResult(	69	,	1	,	0	));
EXPECT_EQ(	3160	,sellResult(	69	,	1	,	1	));
EXPECT_EQ(	3185	,sellResult(	69	,	1	,	2	));
EXPECT_EQ(	4260	,sellResult(	69	,	1	,	45	));
EXPECT_EQ(	5360	,sellResult(	69	,	1	,	89	));
EXPECT_EQ(	5385	,sellResult(	69	,	1	,	90	));
EXPECT_EQ(	0	,sellResult(	69	,	1	,	91	));
EXPECT_EQ(	0	,sellResult(	69	,	2	,	0	));
EXPECT_EQ(	3190	,sellResult(	69	,	2	,	1	));
EXPECT_EQ(	3215	,sellResult(	69	,	2	,	2	));
EXPECT_EQ(	4290	,sellResult(	69	,	2	,	45	));
EXPECT_EQ(	5390	,sellResult(	69	,	2	,	89	));
EXPECT_EQ(	5415	,sellResult(	69	,	2	,	90	));
EXPECT_EQ(	0	,sellResult(	69	,	2	,	91	));
EXPECT_EQ(	0	,sellResult(	69	,	40	,	0	));
EXPECT_EQ(	4330	,sellResult(	69	,	40	,	1	));
EXPECT_EQ(	4355	,sellResult(	69	,	40	,	2	));
EXPECT_EQ(	5430	,sellResult(	69	,	40	,	45	));
EXPECT_EQ(	6530	,sellResult(	69	,	40	,	89	));
EXPECT_EQ(	6555	,sellResult(	69	,	40	,	90	));
EXPECT_EQ(	0	,sellResult(	69	,	40	,	91	));
EXPECT_EQ(	0	,sellResult(	69	,	79	,	0	));
EXPECT_EQ(	5500	,sellResult(	69	,	79	,	1	));
EXPECT_EQ(	5525	,sellResult(	69	,	79	,	2	));
EXPECT_EQ(	6600	,sellResult(	69	,	79	,	45	));
EXPECT_EQ(	7700	,sellResult(	69	,	79	,	89	));
EXPECT_EQ(	7725	,sellResult(	69	,	79	,	90	));
EXPECT_EQ(	0	,sellResult(	69	,	79	,	91	));
EXPECT_EQ(	0	,sellResult(	69	,	80	,	0	));
EXPECT_EQ(	5530	,sellResult(	69	,	80	,	1	));
EXPECT_EQ(	5555	,sellResult(	69	,	80	,	2	));
EXPECT_EQ(	6630	,sellResult(	69	,	80	,	45	));
EXPECT_EQ(	7730	,sellResult(	69	,	80	,	89	));
EXPECT_EQ(	7755	,sellResult(	69	,	80	,	90	));
EXPECT_EQ(	0	,sellResult(	69	,	80	,	91	));
EXPECT_EQ(	0	,sellResult(	69	,	81	,	0	));
EXPECT_EQ(	0	,sellResult(	69	,	81	,	1	));
EXPECT_EQ(	0	,sellResult(	69	,	81	,	2	));
EXPECT_EQ(	0	,sellResult(	69	,	81	,	45	));
EXPECT_EQ(	0	,sellResult(	69	,	81	,	89	));
EXPECT_EQ(	0	,sellResult(	69	,	81	,	90	));
EXPECT_EQ(	0	,sellResult(	69	,	81	,	91	));
							
EXPECT_EQ(	0	,sellResult(	70	,	0	,	0	));
EXPECT_EQ(	0	,sellResult(	70	,	0	,	1	));
EXPECT_EQ(	0	,sellResult(	70	,	0	,	2	));
EXPECT_EQ(	0	,sellResult(	70	,	0	,	45	));
EXPECT_EQ(	0	,sellResult(	70	,	0	,	89	));
EXPECT_EQ(	0	,sellResult(	70	,	0	,	90	));
EXPECT_EQ(	0	,sellResult(	70	,	0	,	91	));
EXPECT_EQ(	0	,sellResult(	70	,	1	,	0	));
EXPECT_EQ(	3205	,sellResult(	70	,	1	,	1	));
EXPECT_EQ(	3230	,sellResult(	70	,	1	,	2	));
EXPECT_EQ(	4305	,sellResult(	70	,	1	,	45	));
EXPECT_EQ(	5405	,sellResult(	70	,	1	,	89	));
EXPECT_EQ(	5430	,sellResult(	70	,	1	,	90	));
EXPECT_EQ(	0	,sellResult(	70	,	1	,	91	));
EXPECT_EQ(	0	,sellResult(	70	,	2	,	0	));
EXPECT_EQ(	3235	,sellResult(	70	,	2	,	1	));
EXPECT_EQ(	3260	,sellResult(	70	,	2	,	2	));
EXPECT_EQ(	4335	,sellResult(	70	,	2	,	45	));
EXPECT_EQ(	5435	,sellResult(	70	,	2	,	89	));
EXPECT_EQ(	5460	,sellResult(	70	,	2	,	90	));
EXPECT_EQ(	0	,sellResult(	70	,	2	,	91	));
EXPECT_EQ(	0	,sellResult(	70	,	40	,	0	));
EXPECT_EQ(	4375	,sellResult(	70	,	40	,	1	));
EXPECT_EQ(	4400	,sellResult(	70	,	40	,	2	));
EXPECT_EQ(	5475	,sellResult(	70	,	40	,	45	));
EXPECT_EQ(	6575	,sellResult(	70	,	40	,	89	));
EXPECT_EQ(	6600	,sellResult(	70	,	40	,	90	));
EXPECT_EQ(	0	,sellResult(	70	,	40	,	91	));
EXPECT_EQ(	0	,sellResult(	70	,	79	,	0	));
EXPECT_EQ(	5545	,sellResult(	70	,	79	,	1	));
EXPECT_EQ(	5570	,sellResult(	70	,	79	,	2	));
EXPECT_EQ(	6645	,sellResult(	70	,	79	,	45	));
EXPECT_EQ(	7745	,sellResult(	70	,	79	,	89	));
EXPECT_EQ(	7770	,sellResult(	70	,	79	,	90	));
EXPECT_EQ(	0	,sellResult(	70	,	79	,	91	));
EXPECT_EQ(	0	,sellResult(	70	,	80	,	0	));
EXPECT_EQ(	5575	,sellResult(	70	,	80	,	1	));
EXPECT_EQ(	5600	,sellResult(	70	,	80	,	2	));
EXPECT_EQ(	6675	,sellResult(	70	,	80	,	45	));
EXPECT_EQ(	7775	,sellResult(	70	,	80	,	89	));
EXPECT_EQ(	7800	,sellResult(	70	,	80	,	90	));
EXPECT_EQ(	0	,sellResult(	70	,	80	,	91	));
EXPECT_EQ(	0	,sellResult(	70	,	81	,	0	));
EXPECT_EQ(	0	,sellResult(	70	,	81	,	1	));
EXPECT_EQ(	0	,sellResult(	70	,	81	,	2	));
EXPECT_EQ(	0	,sellResult(	70	,	81	,	45	));
EXPECT_EQ(	0	,sellResult(	70	,	81	,	89	));
EXPECT_EQ(	0	,sellResult(	70	,	81	,	90	));
EXPECT_EQ(	0	,sellResult(	70	,	81	,	91	));
								
EXPECT_EQ(	0	,sellResult(	71	,	0	,	0	));
EXPECT_EQ(	0	,sellResult(	71	,	0	,	1	));
EXPECT_EQ(	0	,sellResult(	71	,	0	,	2	));
EXPECT_EQ(	0	,sellResult(	71	,	0	,	45	));
EXPECT_EQ(	0	,sellResult(	71	,	0	,	89	));
EXPECT_EQ(	0	,sellResult(	71	,	0	,	90	));
EXPECT_EQ(	0	,sellResult(	71	,	0	,	91	));
EXPECT_EQ(	0	,sellResult(	71	,	1	,	0	));
EXPECT_EQ(	0	,sellResult(	71	,	1	,	1	));
EXPECT_EQ(	0	,sellResult(	71	,	1	,	2	));
EXPECT_EQ(	0	,sellResult(	71	,	1	,	45	));
EXPECT_EQ(	0	,sellResult(	71	,	1	,	89	));
EXPECT_EQ(	0	,sellResult(	71	,	1	,	90	));
EXPECT_EQ(	0	,sellResult(	71	,	1	,	91	));
EXPECT_EQ(	0	,sellResult(	71	,	2	,	0	));
EXPECT_EQ(	0	,sellResult(	71	,	2	,	1	));
EXPECT_EQ(	0	,sellResult(	71	,	2	,	2	));
EXPECT_EQ(	0	,sellResult(	71	,	2	,	45	));
EXPECT_EQ(	0	,sellResult(	71	,	2	,	89	));
EXPECT_EQ(	0	,sellResult(	71	,	2	,	90	));
EXPECT_EQ(	0	,sellResult(	71	,	2	,	91	));
EXPECT_EQ(	0	,sellResult(	71	,	40	,	0	));
EXPECT_EQ(	0	,sellResult(	71	,	40	,	1	));
EXPECT_EQ(	0	,sellResult(	71	,	40	,	2	));
EXPECT_EQ(	0	,sellResult(	71	,	40	,	45	));
EXPECT_EQ(	0	,sellResult(	71	,	40	,	89	));
EXPECT_EQ(	0	,sellResult(	71	,	40	,	90	));
EXPECT_EQ(	0	,sellResult(	71	,	40	,	91	));
EXPECT_EQ(	0	,sellResult(	71	,	79	,	0	));
EXPECT_EQ(	0	,sellResult(	71	,	79	,	1	));
EXPECT_EQ(	0	,sellResult(	71	,	79	,	2	));
EXPECT_EQ(	0	,sellResult(	71	,	79	,	45	));
EXPECT_EQ(	0	,sellResult(	71	,	79	,	89	));
EXPECT_EQ(	0	,sellResult(	71	,	79	,	90	));
EXPECT_EQ(	0	,sellResult(	71	,	79	,	91	));
EXPECT_EQ(	0	,sellResult(	71	,	80	,	0	));
EXPECT_EQ(	0	,sellResult(	71	,	80	,	1	));
EXPECT_EQ(	0	,sellResult(	71	,	80	,	2	));
EXPECT_EQ(	0	,sellResult(	71	,	80	,	45	));
EXPECT_EQ(	0	,sellResult(	71	,	80	,	89	));
EXPECT_EQ(	0	,sellResult(	71	,	80	,	90	));
EXPECT_EQ(	0	,sellResult(	71	,	80	,	91	));
EXPECT_EQ(	0	,sellResult(	71	,	81	,	0	));
EXPECT_EQ(	0	,sellResult(	71	,	81	,	1	));
EXPECT_EQ(	0	,sellResult(	71	,	81	,	2	));
EXPECT_EQ(	0	,sellResult(	71	,	81	,	45	));
EXPECT_EQ(	0	,sellResult(	71	,	81	,	89	));
EXPECT_EQ(	0	,sellResult(	71	,	81	,	90	));
EXPECT_EQ(	0	,sellResult(	71	,	81	,	91	));

}

TEST(Commission,Boundary)
{
EXPECT_EQ(0,salary(95));
EXPECT_EQ(10,salary(100));
EXPECT_EQ(10,salary(105));
EXPECT_EQ(395,salary(3950));
EXPECT_EQ(779,salary(7795));
EXPECT_EQ(780,salary(7800));
EXPECT_EQ(0,salary(7805));
}

TEST(TheCommissionProblem,Equivalence)
{

EXPECT_EQ(	20	,sellResult(	2	,	2	,	2	));
EXPECT_EQ(	0	,sellResult(	0	,	2	,	2	));
EXPECT_EQ(	0	,sellResult(	2	,	0	,	2	));
EXPECT_EQ(	0	,sellResult(	2	,	2	,	0	));
EXPECT_EQ(	0	,sellResult(	0	,	0	,	2	));
EXPECT_EQ(	0	,sellResult(	0	,	2	,	0	));
EXPECT_EQ(	0	,sellResult(	2	,	0	,	0	));
EXPECT_EQ(	0	,sellResult(	0	,	0	,	0	));
EXPECT_EQ(	0	,sellResult(	71	,	2	,	2	));
EXPECT_EQ(	0	,sellResult(	2	,	81	,	2	));
EXPECT_EQ(	0	,sellResult(	2	,	2	,	91	));
EXPECT_EQ(	0	,sellResult(	71	,	81	,	2	));
EXPECT_EQ(	0	,sellResult(	71	,	2	,	91	));
EXPECT_EQ(	0	,sellResult(	2	,	81	,	91	));
EXPECT_EQ(	0	,sellResult(	71	,	81	,	91	));
}


int main(int argc,char** argv)
{
	testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();

}

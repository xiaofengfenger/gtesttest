/*
 * test.cpp
 *
 *  Created on: 2020年2月13日
 *      Author: yinxuefeng
 */


#include <cstdlib>
#include <iostream>
#include <test.h>


TEST(F_add,add){
	    ASSERT_TRUE(add(1,2)==3);
}


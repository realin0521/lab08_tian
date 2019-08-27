#include<iostream>
#include "strFuncs.h"
#include "tddFuncs.h"
#include<string>
using namespace std;

int main(){
	assertEquals(true,isAnagram("Help","hepl"));
	assertEquals(false,isAnagram("reddit","book"));
	assertEquals(true,isPalindrome("Racecar"));
	assertEquals(false,isPalindrome("kourosh"));
}



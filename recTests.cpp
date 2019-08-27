#include<iostream>
#include"strFuncs.h"
#include"tddFuncs.h"
#include<string>
#include"recLinkedListFuncs.h"
#include"linkedListFuncs.h"
using namespace std;
int main(){
	int arr[3]={1,2,3};
	int(*p)[3]=arr;
	LinkedList * arrayToLinkedList(p,3);
	assertEquals((isAnagram("abc","ACB")),true,"isAnagram(abc)==true");
	assertEquals((isPalindrome("RaceCar")),true,"isPalindrome(RaceCar)==true");
	assertEquals((recursiveLargestValue(LinkedList->head)),3,"largest of {1,2,3}==3");
	assertEquals((recursiveSum(LinkedList->head)),6,"sum of {1,2,3}==6");

}

#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include "strFuncs.h"
using namespace std;


bool isAnagram(string s1, string s2){
	int i=0;
	while(i<s1.length()){
		if(isalpha(s1.at(i))==false){
			s1.erase(i,1);
		}
		else{
			s1[i]=tolower(s1[i]);
			i++;
		}
	}
	i=0;
	while(i<s2.length()){
		if(isalpha(s2.at(i))==false){
			s2.erase(i,1);
		}
		else{
			s2[i]=tolower(s2[i]);
			i++;
		}
	}
	if(s1.length()!=s2.length()){
		return false;
	}
	else{
		for(int j=0;j<s1.length();j++){
			int search = s2.find(s1[j]);
			if(search != -1){
				s2.erase(search,1);
			}
		}
		return (s2 == "");
	}
}


bool isPalindrome(const string s1){
	string word=s1;
	int length=word.length();
	if(length<=1){
		return true;
	}
	if(tolower(word[0])!=tolower(word[length-1])){
		return false;
	}
	word=(word.substr(1, (length-2)));
	return isPalindrome(word);

}



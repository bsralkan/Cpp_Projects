#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;

int main() {
	string num1 = "123456789098765325235252352352352352323235464645656786786744344534242346688";
	string num2 = "3423242325235233465747457456456455555555555555555555554564564554574555555554543";
	int temp1 = 0, temp2 = 0;
	int len = num2.length();

	if (num1.length() > num2.length()) {
		len = num1.length();
		int fark = num1.length() - num2.length();
		for (int i = 0; i < fark; i++) {
			num2 += '0';
		}
	}
	else {
		int fark = num2.length() - num1.length();
		for (int i = 0; i < fark; i++) {
			num1 += '0';
		}
	}
	int sum = 0;
	string result="";
	int k = 0;
	for (int i = len; i >= 0 ; i--) {
		temp1 = num1[i] - '0';
		temp2 = num2[i] - '0';
		sum += temp1+temp2;
		if (sum >= 10) {
			result+=(sum%10) + '0';
			k++;
			sum = sum % 10;
		}
		else {
			result += to_string(sum);
			k++;
			sum = 0;
		} 
	}
	len = result.length();
	k = len;
	string result1 = "";
	for (int i = 0; i < len-2; i++) {
		result1 += result[k];
		k--;
	}
	cout << result1;
}
#include <iostream>
#include <string>
using namespace std;

/* 
	利用栈（先进后出）来判断回文字符串
	主要原理：
		1.回文字符串取中间位置mid
		2.将mid之前的元素入栈，放到stack
		3.stack元素依次出栈和mid之后的元素比较
*/


int main() {
	// 输入原始字符串
	char str[101];
	cin >> str;

	cout << "input str is:" << str << endl;

	// 计算字符串中间位置mid
	int len = strlen(str);
	int mid = len / 2;

	cout << "middle position is:" << mid << endl;

	// mid之前的元素入栈，top表示当前栈顶的位置
	int top = 0;
	char stack[101] = "";
	for (int i = 0; i < mid; i++) {
		stack[top++] = str[i];
	}

	cout << "stack is:" << stack << endl;

	// 根据字符串长度判断比较的起点next
	int next = 0;
	if (len % 2 == 0) {
		next = mid;
	}
	else
	{
		next = mid + 1;
	}

	//  stack依次出栈和mid之后的元素比较，不相同即退出
	for (int i = next; i < len; i++) {
		if (str[i] != stack[--top]) break;
	}

	// 栈顶top为0表示stack依次出栈的元素和mid之后的元素相同
	// 即为回文字符串
	if (top == 0) {
		cout << "Yes palindrome" << endl;
	}
	else
	{
		cout << "No palindrome" << endl;
	}

	system("pause");
}
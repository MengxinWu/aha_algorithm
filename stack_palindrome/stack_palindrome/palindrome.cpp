#include <iostream>
#include <string>
using namespace std;

/* 
	����ջ���Ƚ���������жϻ����ַ���
	��Ҫԭ��
		1.�����ַ���ȡ�м�λ��mid
		2.��mid֮ǰ��Ԫ����ջ���ŵ�stack
		3.stackԪ�����γ�ջ��mid֮���Ԫ�رȽ�
*/


int main() {
	// ����ԭʼ�ַ���
	char str[101];
	cin >> str;

	cout << "input str is:" << str << endl;

	// �����ַ����м�λ��mid
	int len = strlen(str);
	int mid = len / 2;

	cout << "middle position is:" << mid << endl;

	// mid֮ǰ��Ԫ����ջ��top��ʾ��ǰջ����λ��
	int top = 0;
	char stack[101] = "";
	for (int i = 0; i < mid; i++) {
		stack[top++] = str[i];
	}

	cout << "stack is:" << stack << endl;

	// �����ַ��������жϱȽϵ����next
	int next = 0;
	if (len % 2 == 0) {
		next = mid;
	}
	else
	{
		next = mid + 1;
	}

	//  stack���γ�ջ��mid֮���Ԫ�رȽϣ�����ͬ���˳�
	for (int i = next; i < len; i++) {
		if (str[i] != stack[--top]) break;
	}

	// ջ��topΪ0��ʾstack���γ�ջ��Ԫ�غ�mid֮���Ԫ����ͬ
	// ��Ϊ�����ַ���
	if (top == 0) {
		cout << "Yes palindrome" << endl;
	}
	else
	{
		cout << "No palindrome" << endl;
	}

	system("pause");
}
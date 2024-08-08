
#include <bits/stdc++.h>
using namespace std;

// Function to return precedence of operators
int priority(char c)
{
	if (c == '^')
		return 3;
	else if (c == '/' || c == '*')
		return 2;
	else if (c == '+' || c == '-')
		return 1;
	else
		return -1;
}

// The main function to convert infix expression
// to postfix expression
void infixToPrefix(string s)
{

	string str = "";

	int size = s.length();

	for (int i = size - 1; i >= 0; i--)
	{

		if (s[i] == '(')
		{
			str += ')';
		}

		else if (s[i] == ')')
		{
			str += '(';
		}

		else
		{
			str += s[i];
		}
	}

	stack<char> st;
	string result = "";

	for (int i = 0; i < str.length(); i++)
	{
		char c = str[i];
		// If the scanned character is
		// an operand, add it to output string.
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
			result += c;

		// If the scanned character is an
		// ‘(‘, push it to the stack.
		else if (c == '(')
			st.push('(');

		// If the scanned character is an ‘)’,
		// pop and add to output string from the stack
		// until an ‘(‘ is encountered.
		else if (c == ')')
		{
			while (st.top() != '(')
			{
				result += st.top();
				st.pop();
			}
			st.pop();
		}

		// If an operator
		else
		{
			if (str[i] == '^')
			{

				while (!st.empty() && priority(str[i]) <= priority(st.top()))
				{
					result += st.top();
					st.pop();
				}
			}

			else
			{
				while (!st.empty() && priority(str[i]) < priority(st.top()))
				{
					result += st.top();
					st.pop();
				}
			}

			st.push(c);
		}
	}

	// Pop all the remaining elements from the stack
	while (!st.empty())
	{
		result += st.top();
		st.pop();
	}

	reverse(result.begin(), result.end());
	cout <<result<< endl;
}

int main()
{
	// cout<<"enter infix expression\n";
	string str;
	cin >> str;
	infixToPrefix(str);

	return 0;
}

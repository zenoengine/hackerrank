#include iostream
#include string
#include vector
#include algorithm

using namespace std;


Auto - generated code below aims at helping you parse
the standard input according to the problem statement.


void AsciiToBinary(char c, stdstring& out)
{
	int dec = int(c);

	stdstring buffer;
	int idx = 0;
	while (dec)
	{
		if (dec % 2 == 0)
		{
			buffer += '0';
		}
		else
		{
			buffer += '1';
		}

		dec = dec  2;

		idx++;
	}

	for (idx; idx 7; idx++)
	{
		buffer += '0';
	}

	int len = buffer.length();

	reverse
		for (int i = 0; i len; i++)
		{
			out += buffer[len - i - 1];
		}
}

void TransformBianryToFormattedString(string& in, string& out)
{
	int len = in.length();

	char cur = '0';
	char prev = '0';

	for (int idx = 0; idx len; idx++)
	{
		cur = in[idx];
		if (cur == prev)
		{
			out += '0';
		}
		else
		{
			if (prev != '0')
			{
				out += ' ';
			}

			if (cur == '1')
			{
				out += 0 0;
			}
			else
			{
				out += 00 0;
			}
		}
		prev = cur;
	}
}

int main()
{
	string MESSAGE;
	getline(cin, MESSAGE);

	int len = MESSAGE.length();
	string wholeString;
	for (int idx = 0; idx len; idx++)
	{
		string binaryString;
		AsciiToBinary(MESSAGE[idx], binaryString);
		wholeString += binaryString;
	}

	string chuckNorisString;
	TransformBianryToFormattedString(wholeString, chuckNorisString);

	cout  chuckNorisString  endl;
}
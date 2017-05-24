#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

/**
* Auto-generated code below aims at helping you parse
* the standard input according to the problem statement.
**/
void ToLowerCase(string& str)
{
	std::locale loc;
	for (std::string::size_type i = 0; i<str.length(); ++i)
	{
		str[i] = std::tolower(str[i], loc);
	}
}

bool GetFileExtension(string& fileName, string& ext)
{
	int len = fileName.length();

	bool findDot = false;
	string buffer;
	int dotPos = 0;
	for (int idx = len; idx >= 0; idx--)
	{
		if (fileName[idx] == '.')
		{
			findDot = true;
			dotPos = idx;
			break;
		}
	}

	if (findDot)
	{
		for (int idx = dotPos + 1; idx < len; idx++)
		{
			buffer += fileName[idx];
		}

		if (buffer.length() > 0)
		{
			ext = buffer;
			return true;
		}
	}

	return false;
}

int main()
{
	map<string, string> mimeMap;
	vector<string> files;
	int N; // Number of elements which make up the association table.
	cin >> N; cin.ignore();
	int Q; // Number Q of file names to be analyzed.
	cin >> Q; cin.ignore();
	for (int i = 0; i < N; i++) {
		string EXT; // file extension
		string MT; // MIME type.
		cin >> EXT >> MT; cin.ignore();

		ToLowerCase(EXT);
		mimeMap.insert(make_pair(EXT, MT));
	}
	for (int i = 0; i < Q; i++) {
		string FNAME; // One file name per line.
		getline(cin, FNAME);

		ToLowerCase(FNAME);
		files.push_back(FNAME);
	}

	int len = files.size();

	for (int idx = 0; idx < len; idx++)
	{
		string fileName = files[idx];
		int len = fileName.length();

		string extension;
		if (GetFileExtension(fileName, extension))
		{
			auto iter = mimeMap.find(extension);

			if (iter != mimeMap.end())
			{
				cout << iter->second << endl;
			}
			else
			{
				cout << "UNKNOWN" << endl;
			}
		}
		else
		{
			cout << "UNKNOWN" << endl;
		}
	}
}
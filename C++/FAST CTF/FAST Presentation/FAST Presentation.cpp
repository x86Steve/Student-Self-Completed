// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;

bool isPatched = true;

size_t write_data(void *ptr, size_t size, size_t nmemb, FILE *stream) {
	size_t written = fwrite(ptr, size, nmemb, stream);
	return written;
}

int main()
{
	if (!IsElevated())
	{
		cout << "This program must be run as administrator!" << endl;
		system("pause");
		return 0;
	}
	/*
	ofstream myfile;

	myfile.open("example.txt");



	std::string youtube = encryptDecrypt("http://why.soserio.us/Media/chrome_2018-10-28_19-13-32.png");

	myfile << youtube << endl;

	myfile.close();

	
	 *
	 */
	
	
	
	string Caption = "FAST 2018 CTF";
	string sz_user_name, sz_password;
	std::string Hacked = R"(M>NAMA1AMANAMANAMANAMA1AMANAMANAMANAM>NAM>1>2>NAMAN>MA1AMANAMANA2ANAgNMAAANAMANAMANAMAAANAMANAMANAMNM1AMA1MANMF>DANAMANAAAMkA>1MNA2>N>MAN>2>NMN>2A1>2ANA2>AANAAAMA1>AA2ANA2>1AMN2AdMA1>MAABA1MNNM>1ANMNAA2A2ABA1MNAMNMAAA2NAABA1A1AA2>kAAMNAF>AMI1>MNAM]AM>1NAF>AAM>A>AE>ANAF>DAM1Ag1MA>A2>2M1M=1>2>=1=1>1>A2>2M1M1>2>11>1M2>A2>2>AAM=1>)";
	std:string Death = R"###(bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbln-&zzzzzzzzzzz -nlHbbbbbbbbbbbbbbbbbbbbbbbbbbbbl&zzzzzzzzzzzzzzzzzzzzzzz lHbbbbbbbbbbbbbbbbbbbbbbbbbl&zzzzzzzzzzzzzzzzzzzzzzzzzzzzz lHbbbbbbbbbbbbbbbbbbbbbbbl&zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz lHbbbbbbbbbbbbbbbbbbbbbl&zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz lHbbbbbbbbbbbbbbbbbbbb&zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz Hbbbbbbbbbbbbbbbbbbb&zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz Hbbbbbbbbbbbbbbbbbb&zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzHbbbbbbbbbbbbbbbbbbzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzHbbbbbbbbbbbbbbbbbbzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzHbbbbbbbbbbbbbbbbbbzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzHbbbbbbbbbbbbbbbbbbzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzHbbbbbbbbbbbbbbbbbb`zzzzzzzzzzebbb`zzzzzzzzzz`bbbb`zzzzzzzzz`HbbbbbbbbbbbbbbbbbbbzzzzzzzzbbbbbbbbzzzzzzzzbbbbbbbbzzzzzzzzHbbbbbbbbbbbbbbbbbbbzzzzzzzbbbbbbbbbbzzzzzzbbbbbbbbbbzzzzzzzHbbbbbbbbbbbbbbbbbbbbzzzzzzbbbbbbbbbb&zzzzzz bbbbbbbbbbzzzzzzHbbbbbbbbbbbbbbbbbbbbbzzzzz bbbbbbbb&zzzzzzzz bbbbbbbb&zzzzzHbbbbbbbbbbbbbbbbbbbbbbzzzzzz lbbbl&zzzzzzzzzzz lbbbl&zzzzzzHbbbbbbbbbbbbbbbbbbbbbbbzzzzzzzzzzzzzzzzbzzzzzzzzzzzzzzzzHbbbbbbbbbbbbbbbbbbbbbbbbzzzzzzzzzzzzzzzbbbzzzzzzzzzzzzzzHbbbbbbbbbbbbbbbbbbbbbbbb`zzzzzzzzzzzzzbbbbbzzzzzzzzzzzz`Hbbbbbbbbbbbbbbbbbbbbbbbbbbb`zzzzzzzzzzzzzzzzzzzzzzzz`Hbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb`zzzzzzzzzzzzzz`Hbbbbbbbbbbbbbbbbbbbbbbbbbbbbbzzz bbzzzzzzzzzzbb&zzzHbbbbbbbbbbbbbbbbbbbbbbbbbbbbb`zzz bbbbbbbbbbbbbb&zzz`Hbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbzzz -lbbbbbbbbl-&zzzHbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbzzzzzzzzzzzzzzzzzzHbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb`zzzzzzzzzzzzzz`Hbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb`zzzzzzzzzz`Hbbbbbbbbbb&zzzz -lbbbbbbbbbbbbbbbbbb`zzzzzz`bbbbbbbbbbbbbbbbbbl-&zzz Hbbbbbbbbbzzzzzzzzz -lbbbbbbbbbbbbbbbbbb````bbbbbbbbbbbbbbbbbbl-&zzzzzzzHbbbbbbbbb`zzzzzzzzzzz lbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbl-&zzzzzzzzzHbbbbbbbbb&zzzzzzzzzzzzz -lbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbl-&zzzzzzzzzzzzHbbbbbbb&zzzzzzzzzzzzzzzzzzzz -lbbbbbbbbbbbbbbbbbbbbbl-&zzzzzzzzzzzzzzzz Hbbbbbbbzzzzzzzzzzzzzzzzzzzzzzzz -lbbbbbbbbbbbbl-&zzzzzzzzzzzzzzzzzzzzzz Hbbbbbbbzzzzzzzzz`b`zzzzzzzzzzzzzzz -lbbbbbl-&zzzzzzzzzzzzzz`b`zzzzzzHbbbbbbbbzzzz`bbbbbbbbbbb`zzzzzzzzzzzz &zzzzzzzzzzzz`bbbbbbbbbbbb`zHbbbbbbbbbb``bbbbbbbbbbbbbbbbbbb`zzzzzzzzzzzzzzzz`Hbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbl-&zzzzzzzzzz -lHbbbbbbbbbbbbbbbbbbbbbbbbbbbbbl-&zzzzzzzzzzzzzzzzzz -lHbbbbbbbbbbbbbbbbbbbbbbbbbl-&zzzzzzzzzz`bb`zzzzzzzzzz -lHbbbbbbbbbbbbbbbbbbbbbbl-&zzzzzzzzzz`bbbbbbbb`zzzzzzzzzz -lHbbbbbbbbbbbbbbbbbbl-&zzzzzzzzzzz`bbbbbbbbbbbbbb`zzzzzzzzzzz -lHbbbbbbbbl-&zzzzzzzzzzzzzzzzzz`bbbbbbbbbbbbbbbbbbbb`zzzzzzzzzzzzzzzz -lHbbbbbbbzzzzzzzzzzzzzzzzzzz`bbbbbbbbbbbbbbbbbbbbbbbbb`zzzzzzzzzzzzzzzz Hbbbbbbbzzzzzzzzzzzzzzzzzz`bbbbbbbbbbbbbbbbbbbbbbbbbbbb`zzzzzzzzzzzzzzzzHbbbbbbbb`zzzzzzzzzzzzzzzbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb`zzzzzzzzzzzzzzHbbbbbbbbbbbbb``zzzzzzzbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb`zzzzzz`Hbbbbbbbbbbbbbbbb`zzzzbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbzzz`Hbbbbbbbbbbbbbbbbbbb``bbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbb```)###";
	print_FASTCTF();

	print_hacked(Death);
	return 0;

	download_files();
	
	do
	{
		sz_user_name = sz_get_user_name();
		sz_password = sz_get_password();

		if (strcmp(sz_user_name.c_str(),"Admin") == 0 && strcmp(sz_password.c_str(), "humblesteve") == 0)
		{

			cout << "Welcome administrator." << endl;

			MessageBox(NULL, L"Congrats, you found my password :(.",
				L"FAST CTF 2018",
				MB_OK | MB_ICONQUESTION);

			if (isPatched || !exists_test1("C:\\Users\\Default\\Desktop\\illbewatchingyou.png"))
			{
				print_Console("UserName: ");
				print_hacked(Death);
				break;
			}
		}

		else
			cout << "Invalid login. Try Again." << endl;

	} while (true);

	system("pause");

	return 0;
}

string sz_get_user_name()
{
	string sz_user_name;

	print_Console("UserName: ");

	getline(cin, sz_user_name);

	cout << endl;

	return sz_user_name;
}

string sz_get_password()
{
	string sz_password;

	print_Console("Password: ");

	getline(cin, sz_password);

	cout << endl;

	return sz_password;
}

void print_FASTCTF()
{
	/*
	 * Microsoft Windows [Version 10.0.17134.345]
	  (c) 2018 Microsoft Corporation. All rights reserved.
	 */
	cout << "Forensics And Security Technology [Terminal Version 10.0.17134.3435]" << endl;
	cout << "(c) 2018 Cal Poly Pomona. All rights reserved." << endl << endl;
}

void print_Console(std::string text)
{
	cout << "admin@CPPFAST:/ " << text;
}

std::string XOR(std::string data, char * key)
{
	std:string xordata = data;
	for (int i = 0; i < xordata.size(); i++)
		xordata[i] = data[i] ^ key[i % (sizeof(key) / sizeof(char))];
	return xordata;
}

string encryptDecrypt(string toEncrypt) 
{
	char key[1] = { 'B' }; //Any chars will work
	string output = toEncrypt;

	for (int i = 0; i < toEncrypt.size(); i++)
		output[i] = toEncrypt[i] ^ key[i % (sizeof(key) / sizeof(char))];

	return output;
}

void print_hacked(std::string text)
{
	Sleep(10000);

	BlockInput(true);

	std::string youtube = "*6621xmm555l;-767 'l!-/m5#6!*}4u$ 2";
	youtube = encryptDecrypt(youtube);
	std::wstring stemp = s2ws(youtube);
	LPCWSTR result = stemp.c_str();

	//BlockInput(true);

	cout << endl << encryptDecrypt(text);

	cout << endl;
	ShellExecute(0, 0, result, 0, 0, SW_SHOW);
	Sleep(2500);

	::SetForegroundWindow(GetConsoleWindow());


std:string Text = "Congratulations, you have survived the FAST INTRO to Reverse Engineering and Malware Analysis.\nSo, for the time being, your mouse and keyboard are frozen. YOU need to relax and for a second let the hacker talk.\nUnfortunately for your business, I've been here for quite some time...\nAs we speak I'm alerted of your findings.\nThe contents of your disk and all machines that have been compromised during this time will be encrypted.\nHere's a five minute warning.\nGood luck, Incident Response Team >:].\nYou are now free to use the keyboard and mouse, babe(s).";

	for(char x : Text)
	{
		cout << x;
		if (x == '\n')
			Sleep(2200);
			
		Sleep(60);
	}

	cout << endl;

	BlockInput(false);

	system("pause");
}

void download_files()
{
	isPatched = false;
	CURL *curl;
	FILE *fp;
	CURLcode res;
	std::string url = "*662xmm5*;l1-1'0+-l71m'&+#m!*0-/'prszosropzs{osqoqpl2,%";
	//char url[] = "http://why.soserio.us/Media/chrome_2018-10-28_19-13-32.png";
	char outfilename[FILENAME_MAX] = "C:\\Users\\Default\\Desktop\\illbewatchingyou.png";

	curl = curl_easy_init();
	if (curl)
	{
		fp = fopen(outfilename, "wb");
		curl_easy_setopt(curl, CURLOPT_URL, encryptDecrypt(url).c_str());
		curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_data);
		curl_easy_setopt(curl, CURLOPT_WRITEDATA, fp);
		res = curl_easy_perform(curl);
		/* always cleanup */
		curl_easy_cleanup(curl);
		fclose(fp);
	}
}

inline bool exists_test1(const std::string& name)
{
	if (FILE *file = fopen(name.c_str(), "r")) {
		fclose(file);
		return true;
	}
	else {
		return false;
	}
}

BOOL IsElevated()
{
	BOOL fRet = FALSE;
	HANDLE hToken = NULL;
	if (OpenProcessToken(GetCurrentProcess(), TOKEN_QUERY, &hToken))
	{
		TOKEN_ELEVATION Elevation;
		DWORD cbSize = sizeof(TOKEN_ELEVATION);
		if (GetTokenInformation(hToken, TokenElevation, &Elevation, sizeof(Elevation), &cbSize))
		{
			fRet = Elevation.TokenIsElevated;
		}
	}
	if (hToken)
	{
		CloseHandle(hToken);
	}
	return fRet;
}

std::wstring s2ws(const std::string& s)
{
	int len;
	int slength = (int)s.length() + 1;
	len = MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, 0, 0);
	wchar_t* buf = new wchar_t[len];
	MultiByteToWideChar(CP_ACP, 0, s.c_str(), slength, buf, len);
	std::wstring r(buf);
	delete[] buf;
	return r;
}
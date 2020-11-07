#include <iostream>
#include <stdint.h>
#include <vector>
#include <fstream> // For reading files
#include <string>
using namespace std;

#define MANGALIST_ELEMENTS_NUM	7U

class MangaList
{
	public :
		string MangaName;
		string MangaAuthor;
		float LastReadIndx;
		string MangaOrigin;
		string WebsiteKey;
		float NewChapterIndx;
		uint8_t MangaRank;

		void PrintElements(void)
		{
			std::cout << this->MangaName << std::endl;
			std::cout << this->MangaAuthor << std::endl;
			std::cout << this->LastReadIndx << std::endl;
			std::cout << this->MangaOrigin << std::endl;
			std::cout << this->WebsiteKey << std::endl;
			std::cout << this->NewChapterIndx << std::endl;
			std::cout << this->MangaRank << std::endl;
		}
};

int main(void) {
	/*
	 So to send the message the C program needs to:

	 create a socket
	 lookup the IP address
	 open the socket
	 send the request
	 wait for the response
	 close the socket
	 */
	vector <MangaList> MyMangaList{{ "MeManga", "MeAuthor", 3, "MeOrigin","MeKey", 5, 'S' }};
//	MyMangaList[0].PrintElements();
	// Open File
	ifstream in ("C:\\Users\\helld\\Desktop\\MangaScript\\MangaList\\Manga.txt");
	string Elements[MANGALIST_ELEMENTS_NUM],str;
	int i=0;
	getline(in, str,'\0');
	while (getline(str, Elements, '^'))
	{

	}
	if (str.size() > 0) {
		cout << str << endl;
	}


	return 0;
}


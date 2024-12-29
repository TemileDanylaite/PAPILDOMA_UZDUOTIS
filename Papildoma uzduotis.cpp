#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <set>
#include <regex>
#include <vector>
#include <algorithm>
#include <string>
#include <iomanip>



//Valymas
std::string cleanWord(const std::string& word) {
	std::string cleaned;
	for (unsigned char ch : word) {
		if (std::isalnum(ch)) {
			cleaned += std::tolower(ch); 
		}
	}
	return cleaned;
}

int main()
{
	std::ifstream inputFile("text.txt");
	std::ofstream wordCountFile("Pasikartojantys_zodziai.txt");
	std::ofstream crossRefFile("Cross-reference_lentele.txt");
	std::ofstream urlFile("Rasti_url_adresai.txt");

	if (!inputFile.is_open() || !wordCountFile.is_open() || !crossRefFile.is_open() || !urlFile.is_open()){
		std::cerr << "Nepavyko atidaryti input'o ar output'o failu!\n";
		return 1;
	}

	std::map<std::string, int> wordCount;
	std::map<std::string, std::set<int>> wordLines;
	std::vector<std::string> urls;

	
	std::regex urlRegex(R"((https?://)?(www\.)?([a-zA-Z0-9.-]+\.[a-zA-Z]{2,})(:\d+)?(/[^\s]*)?)");


	std::string line;
	int lineNumber = 0;

	
	while (std::getline(inputFile, line)) {
		lineNumber++;
		std::istringstream lineStream(line);
		std::string word;

		while (lineStream >> word) {
			std::string cleaned = cleanWord(word);
			if (!cleaned.empty()) {
				wordCount[cleaned]++;
				wordLines[cleaned].insert(lineNumber);
			}

			std::smatch urlMatch;
			if (std::regex_search(word, urlMatch, urlRegex)) {
				urls.push_back(urlMatch[0]);
			}
		}
	}

	std::string word;

	//Ouput words that occur more than once
	wordCountFile << "Zodziai, kurie pasikartoja daugaiu nei 1 karta:\n";
	for (auto it = wordCount.begin(); it != wordCount.end(); ++it) {
		const std::string& word = it->first;
		int count = it->second;

		if (count > 1) {
			wordCountFile << word << ": " << count << "\n";
		}
	}

	//Ouput cross-reference table
	crossRefFile << "Cross-reference lentele:\n";
	crossRefFile << std::left << std::setw(20) << "Zodis" << std::right << std::setw(17) << "Eiles numeriai\n";

	for (auto it = wordLines.begin(); it != wordLines.end(); ++it) {
		const std::string& word = it->first;
		const std::set<int>& lines = it->second;

		if (wordCount[word] > 1) {
			crossRefFile << std::left << std::setw(20) << word;
			crossRefFile << std::right;

			for (int line : lines) {
				crossRefFile << std::setw(3) << line;
			}
			crossRefFile << "\n";
		}
	}

	//Output found URLs
	urlFile << "Rasti URLs:\n";
	for (const auto& url : urls) {
		urlFile << url << "\n";
	}

	inputFile.close();
	wordCountFile.close();
	crossRefFile.close();
	urlFile.close();

	std::cout << "Rezultatai issaugoti txt failuose";
	return 0;
}





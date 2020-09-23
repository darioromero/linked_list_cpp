// Your First C++ Program

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include "NodesList.h"

using namespace std;

vector<string> sentenceTokenizer(string sentence, char delimiter)
{
	// function body
	vector<string> out;
	stringstream ss(sentence); // Turn the string into a stream. 
	string token;

	while (getline(ss, token, delimiter)) {
		out.push_back(token);
	}

	return out;
}

int main() {

	NodesList nodesList;
	cout << std::string(104, '-') << endl;
	cout << "initial head (ptr): [" << nodesList.getHeadPtr();
	cout << "]" << endl;
	cout << std::string(104, '-') << endl;

	string sentence = "There's something thrilling about the way certain writers can take readers behind the curtain of how stories are told";

	vector<string> s = sentenceTokenizer(sentence, ' ');

	// extracting tokens and inserting them into the linked list
	for (string t : s) {
		//cout << t << endl;
		nodesList.insertNode(t);
	}

	// get head of the Linked List
	Node* h = nodesList.getHeadPtr();
	cout << std::string(104, '-') << endl;
	cout << "final head (prt): [" << h << "] - ";
	cout << "# Nodes: " << nodesList.n_nodes << endl;
	cout << std::string(104, '-') << endl;

	// print Linked List
	cout << "Linked List forward" << endl;
	nodesList.printList(h);
	cout << "\n" << std::string(32, '-') << endl;

	// print Linked List 'backward'
	cout << "Linked List backward" << endl;
	nodesList.printListBackward(h);
	cout << "\n" << std::string(32, '-') << endl;

	return 0;
}
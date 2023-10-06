#include <iostream>
#include <unordered_map>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

// Function to tokenize the input text into individual words
vector<string> tokenize(const string& text) {
    vector<string> words;
    stringstream ss(text);
    string word;
    while (ss >> word) {
        words.push_back(word);
    }
    return words;
}

// Function to identify and save unique words in the dictionary
unordered_map<string, int> saveInDictionary(const string& text) {
    unordered_map<string, int> dictionary;

    vector<string> words = tokenize(text);

    for (const string& word : words) {
        // Convert the word to lowercase (if needed) to make it case-insensitive
        // Remove this step if you want case-sensitive matching
        // std::transform(word.begin(), word.end(), word.begin(), ::tolower);

        // Check if the word is already in the dictionary
        if (dictionary.find(word) == dictionary.end()) {
            // If not present, add it to the dictionary
            dictionary[word] = 1;
        } else {
            // If already present, increment the count of occurrences
            dictionary[word]++;
        }
    }

    return dictionary;
}

int main() {
    string inputText = "cat batman latt matter cat mater cat";
    unordered_map<string, int> dictionary = saveInDictionary(inputText);

    // Print the words saved in the dictionary and their counts
    for (const auto& entry : dictionary) {
        cout << entry.first << ": " << entry.second << endl;
    }

    return 0;
}

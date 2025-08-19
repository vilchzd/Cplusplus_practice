// Section 20
// Challenge 1
// Identifying palindrome strings using a deque
#include <cctype>
#include <deque>
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>


bool is_palindrome(const std::string& s) {   
    std::deque<char> palindrome = {}; 
    std::deque<char> inv_palindrome = {}; 
    for(const auto& letter : s) {
        if (isalpha(letter)) { 
        char n_letter = toupper(letter);
        palindrome.push_back(n_letter);
        inv_palindrome.push_front(n_letter);
        }
    }   
    for (int i = 0; i <= s.size(); i++) {
        if (palindrome[0] != inv_palindrome[0])
        return false;
    }

    return true;
}

int main()
{
    std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
    std::cout << std::boolalpha;
    std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
    for(const auto& s : test_strings) {
        std::cout << std::setw(8) << std::left << is_palindrome(s)  << s << std::endl;
    }
    std::cout << std::endl;
    return 0;
}
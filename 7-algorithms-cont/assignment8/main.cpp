#include <algorithm>
#include <cctype>
#include <fstream>
#include <functional>
#include <iostream>
#include <iterator>
#include <random>
#include <regex>
#include <string>
#include <vector>

using namespace std;

template <typename T> void print(const vector<T> &vec)
{
    for (auto v : vec)
    {
        cout << v << ", ";
    }
    cout << endl;
}

int main()
{
    mt19937 mt;
    uniform_int_distribution<int> uid(0, 1000);

    vector<int> vec(10);

    // Fill vector with random numbers
    generate(vec.begin(), vec.end(), [&mt, &uid]() { return uid(mt); });
    cout << "Vector: " << endl;
    print(vec);

    // Maximum element
    auto max_el = max_element(cbegin(vec), cend(vec));
    cout << "Maximum: " << *max_el << " at index "
         << distance(cbegin(vec), max_el) << endl;

    // Finding sum
    int acc = accumulate(cbegin(vec), cend(vec), 0);
    cout << "The sum is: " << acc << endl;

    // Number of odd values
    int num_odd{0};
    for_each(cbegin(vec), cend(vec),
             [&num_odd](int n)
             {
                 if (n % 2 == 1)
                 {
                     ++num_odd;
                 }
             });
    cout << "Number of odd values: " << num_odd << endl;

    // Normalize
    vector<double> vec_normalized;
    transform(cbegin(vec), cend(vec), back_inserter(vec_normalized),
              [&max_el](int n) { return 1.0 * n / (*max_el); });
    cout << "Normalized vector: " << endl;
    print(vec_normalized);

    // Find elements greater than 455
    vector<int> vec_sorted(vec.size());
    partial_sort_copy(cbegin(vec), cend(vec), begin(vec_sorted),
                      end(vec_sorted));
    cout << "Sorted vector: " << endl;
    print(vec_sorted);
    auto first_largest = lower_bound(cbegin(vec_sorted), cend(vec_sorted), 455);
    cout << "First element larger than 455: " << *first_largest << endl;
    cout << "There are " << distance(first_largest, cend(vec_sorted))
         << " elements larger than 455" << endl;

    // Copying odd numbers to a vector of doubles
    vector<double> vec_odd;
    copy_if(cbegin(vec), cend(vec), back_inserter(vec_odd),
            [](int n) { return n % 2 == 1; });
    cout << "The odd values are: " << endl;
    print(vec_odd);

    // Sorted in descending order
    vector<int> vec_sorted_descending(vec.size());
    partial_sort_copy(cbegin(vec), cend(vec), begin(vec_sorted_descending),
                      end(vec_sorted_descending), greater<>());
    cout << "Sorted descending: " << endl;
    print(vec_sorted_descending);

    // Shuffle all but first and last elements
    vector<int> vec_shuffled(vec.size());
    copy(cbegin(vec), cend(vec), begin(vec_shuffled));
    shuffle(begin(vec_shuffled) + 1, end(vec_shuffled) - 1, mt);
    cout << "Shuffled vector: " << endl;
    print(vec_shuffled);

    // Remove all odd numbers
    vector<int> vec_even;
    remove_copy_if(cbegin(vec), cend(vec), back_inserter(vec_even),
                   [](int n) { return n % 2 == 1; });
    cout << "Vector with odd values removed: " << endl;
    print(vec_even);

    // Write to file
    ofstream ofile{"even_numbers.txt"};
    // Create comma-separated string without a trailing comma
    string comma_separated =
        accumulate(vec_even.begin() + 1, vec_even.end(), to_string(vec_even[0]),
                   [](string a, int b) { return a + ", "s + to_string(b); });
    ofile << comma_separated;
    ofile.close();

    // Display distinct lowercase words in words.txt
    ifstream in_file("words.txt");
    string str((std::istreambuf_iterator<char>(in_file)),
               std::istreambuf_iterator<char>());
    regex words_regex("[a-zA-z']+");  // match multiple letter groups
    vector<string> words{
        sregex_token_iterator(str.begin(), str.end(), words_regex),
        sregex_token_iterator()};
    // nested transform -- there must be a different way?
    transform(begin(words), end(words), begin(words),
              [](string &str)
              {
                  string out;
                  out.reserve(str.size());
                  transform(str.begin(), str.end(), back_inserter(out),
                            ::tolower);
                  return out;
              });
    vector<string> unique_words;
    sort(begin(words), end(words));
    unique_copy(cbegin(words), cend(words), back_inserter(unique_words));
    cout << "Unique words: " << endl;
    print(unique_words);

    // Count total number of words in words.txt
    cout << "Number of words: " << words.size() << endl;

    // Count the number of lines in words.txt
    in_file.close();
    ifstream in_file_again("words.txt");
    in_file_again.unsetf(ios_base::skipws);
    int num_lines = count(istream_iterator<char>(in_file_again),
                          istream_iterator<char>(), '\n');
    in_file_again.close();
    cout << "Number of lines: " << num_lines << endl;

    // Count the number of characters in words.txt
    cout << "Number of characters: " << str.size() << endl;

    // Display words common to both words.txt and words2.txt
    // Open words2.txt, and get the unique words
    ifstream in_file2("words2.txt");
    string str2((std::istreambuf_iterator<char>(in_file2)),
                std::istreambuf_iterator<char>());
    vector<string> words2{
        sregex_token_iterator(str2.begin(), str2.end(), words_regex),
        sregex_token_iterator()};
    // nested transform -- there must be a different way?
    transform(begin(words2), end(words2), begin(words2),
              [](string &str)
              {
                  string out;
                  out.reserve(str.size());
                  transform(str.begin(), str.end(), back_inserter(out),
                            ::tolower);
                  return out;
              });
    vector<string> unique_words2;
    sort(begin(words2), end(words2));
    unique_copy(cbegin(words2), cend(words2), back_inserter(unique_words2));

    vector<string> intersection_words;
    set_intersection(cbegin(unique_words), cend(unique_words),
                     cbegin(unique_words2), cend(unique_words2),
                     back_inserter(intersection_words));
    cout << "Words common to both: ";
    print(intersection_words);

    // Calculate the factorial of 6
    vector<int> numbers;
    generate_n(back_inserter(numbers), 6,
               [&]()
               {
                   static int n = 0;
                   ++n;
                   return n;
               });
    print(numbers);
    int factorial = accumulate(cbegin(numbers), cend(numbers), 1,
                               [](int m, int n) { return m * n; });
    cout << "6! = " << factorial << endl;
}

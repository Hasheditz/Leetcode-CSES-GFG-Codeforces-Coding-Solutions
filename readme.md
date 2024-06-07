# **Date**: June 7, 2024

# 648. Replace Words

**Difficulty**: ![Medium](https://img.shields.io/badge/Medium-yellow)  
**Related Topics**: ![String](https://img.shields.io/badge/String-blue) ![Trie](https://img.shields.io/badge/Trie-blue)

<p>
  <a href="https://github.com/Hasheditz/Leetcode-CSES-GFG-Codeforces-Coding-Solutions?tab=readme-ov-file#replace-words" style="margin-right: 5px;">
    <img src="https://img.shields.io/badge/All%20Problem%20Solutions-green" alt="All Problem Solutions">
  </a>
  <a href="https://leetcode.com/problems/replace-words/">
    <img src="https://img.shields.io/badge/Link%20To%20The%20Question-blue" alt="Link To The Question">
  </a>
</p>

## Editorial

This problem requires us to replace words in a sentence using a dictionary of root words. The goal is to ensure that each word in the sentence is replaced by the shortest root word from the dictionary that is a prefix of the word.

### Solution Explanation

To solve this problem efficiently, we can break down the solution into the following steps:

#### Key Steps:
1. **Tokenize the Sentence**: Split the given sentence into individual words.
2. **Replace Words**: For each word, check if any root word in the dictionary is a prefix of the word. Replace the word with the shortest root word that matches.
3. **Reconstruct the Sentence**: Combine the modified words back into a sentence.

### Code

```cpp
class Solution {
public:
    string replaceWords(vector<string>& dict, string sent) {
        // Step 1: Split the sentence into words
        int n = sent.size();
        int i = 0;
        vector<string> token;
        string temp;

        while (i < n) {
            if (sent[i] != ' ') {
                temp += sent[i];
                i++;
            } else {
                token.push_back(temp);
                temp = "";
                i++;
            }
        }
        token.push_back(temp);

        // Step 2: Replace words using the dictionary
        for (const auto& root : dict) {
            int sz = root.size();
            for (int j = 0; j < token.size(); j++) {
                string curr = token[j].substr(0, sz);
                if (curr == root) {
                    token[j] = root;
                }
            }
        }

        // Step 3: Reconstruct the sentence
        string res;
        for (const auto& word : token) {
            res += word + " ";
        }
        res.pop_back(); // Remove the trailing space

        return res;
    }
};
```
## Explanation of Code

### Initialization:
- We initialize an empty vector `token` to store individual words from the sentence and a temporary string `temp` to build each word.

### Tokenize the Sentence:
- We iterate through the sentence character by character. When we encounter a space, we add the current word to the vector `token` and reset `temp` for the next word.

### Replace Words:
- For each root word in the dictionary, we check if it matches the prefix of any word in the vector `token`. If it does, we replace the word with the root word.

### Reconstruct the Sentence:
- We concatenate the words from the vector `token` into a single string `res`, adding a space between each word. Finally, we remove the trailing space.

This approach ensures an efficient replacement of words based on the given dictionary of root words.

## Like and Upvote

If you found this solution helpful, please consider liking 👍 and upvoting ⬆️. Your support helps me to keep providing high-quality solutions.

<p align="center">
  <img src="https://preview.redd.it/petition-to-change-the-upvote-and-downvote-button-to-like-v0-jbrdq402054c1.jpg?width=640&crop=smart&auto=webp&s=8225d21c98a245f44fd6c1f74a4c6c67f0061f25" width="280">
</p>

// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/create-anagram.html .

int createAnagram(std::string s, std::string t) {
    int countS[26] = {0}, countT[26] = {0};
    for (int i = 0; i < s.length(); i++) {
        countS[s[i] - 'A']++;
        countT[t[i] - 'A']++;
    }
    int res = 0;
    for (int i = 0; i < 26; i++) {
        int diff = countS[i] - countT[i];
        if (diff > 0) res += diff;
    }
    return res;
}


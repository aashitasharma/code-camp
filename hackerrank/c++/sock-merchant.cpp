// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!

int sockMerchant(int n, vector<int> ar) {
    map<int, int> mapping;
    for (int num : ar) {
        if (mapping.find(num) == mapping.end()) {
            mapping[num] = 0;
        }
        mapping[num]++;
    }
    int res = 0;
    for (auto it = mapping.begin(); it != mapping.end(); it++) {
        res += it->second / 2;
    }
    return res;
}

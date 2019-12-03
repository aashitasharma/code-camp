// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/is-geometric-progression.html .

bool isGeometricProgression(std::vector<int> sequence) {
    for (int i = 2; i < sequence.size(); i++) {
        if ((long long)sequence[i - 1] * sequence[i - 1] != (long long)sequence[i - 2] * sequence[i]) {
            return false;
        }
    }
    return true;
}

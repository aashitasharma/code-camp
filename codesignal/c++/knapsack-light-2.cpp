// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/knapsack-light-2.html .

std::string knapsackLight2(int weight1, int weight2, int maxW) {
    using namespace std;
    if (weight1 + weight2 <= maxW) {
        return "both";
    }
    if (weight1 <= maxW && weight2 <= maxW) {
        return "either";
    }
    if (weight1 <= maxW) {
        return "first";
    }
    if (weight2 <= maxW) {
        return "second";
    }
    return "none";
}

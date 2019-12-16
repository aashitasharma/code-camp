// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codewars/find-numbers-which-are-divisible-by-given-number.html .

std::vector<int> divisible_by(std::vector<int> numbers, int divisor) {
    using namespace std;
    vector<int> res;
    for (auto num: numbers) {
        if (num % divisor == 0) {
            res.push_back(num);
        }
    }
    return res;
}

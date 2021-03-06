// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yanzhan.site .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yanzhan.site/codesignal/first-multiple.html .

int gcd(int a, int b) {
    if (a % b == 0) {
        return b;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    int g = gcd(max(a, b), min(a, b));
    return a / g * b;
}

int firstMultiple(std::vector<int> divisors, int start) {
    int l = 1;
    for (auto num: divisors) {
        l = lcm(l, num);
    }
    if (l >= start) {
        return l;
    }
    if (start % l == 0) {
        return start;
    }
    return (start / l + 1) * l;
}


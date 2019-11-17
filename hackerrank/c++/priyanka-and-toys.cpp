// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/hackerrank/priyanka-and-toys.html .

int toys(vector<int> ws) {
    sort(ws.begin(), ws.end());
    int low = ws[0], res = 1;
    for (int i = 1; i < ws.size(); i++) {
        if (ws[i] > low + 4) {
            low = ws[i];
            res++;
        }
    }
    return res;
}
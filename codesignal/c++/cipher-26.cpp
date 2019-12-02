// Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
// For this specific algothmic problem, visit my Youtube Video :  .
// It's fascinating to solve algothmic problems, follow Yanzhan to learn more!
// Blog URL for this problem: https://yangyanzhan.github.io/codesignal/cipher-26.html .

std::string cipher26(std::string message) {
    using namespace std;
    if (message.size() == 0) {
        return "";
    }
    string decrypted = "";
    decrypted += message[0];
    for (int i = 1; i < message.size(); i++) {
        decrypted += (message[i] - message[i - 1] + 26) % 26 + 'a';
    }
    return decrypted;
}

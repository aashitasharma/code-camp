# Hi, I'm Yanzhan. For more algothmic problems, visit my Youtube Channel (Yanzhan Yang's Youtube Channel) : https://www.youtube.com/channel/UCDkz-__gl3frqLexukpG0DA?view_as=subscriber or my Twitter Account (Yanzhan Yang's Twitter) : https://twitter.com/YangYanzhan or my GitHub HomePage (Yanzhan Yang's GitHub HomePage) : https://yangyanzhan.github.io .
# For this specific algothmic problem, visit my Youtube Video : https://youtu.be/yIhNDagO_KY
# Blog URL for this problem: https://yangyanzhan.github.io/exercism/raku/acronym.html .

unit module Acronym;

sub abbreviate ($phrase) is export {
    $phrase.comb(/\w+/).map({ $_.uc.substr(0, 1) }).join("");
}
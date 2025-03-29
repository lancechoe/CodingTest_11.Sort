/*
문제
알파벳 소문자로 이루어진 N개의 단어가 들어오면 아래와 같은 조건에 따라 정렬하는 프로그램을 작성하시오.

길이가 짧은 것부터
길이가 같으면 사전 순으로
단, 중복된 단어는 하나만 남기고 제거해야 한다.

입력
첫째 줄에 단어의 개수 N이 주어진다. (1 ≤ N ≤ 20,000) 둘째 줄부터 N개의 줄에 걸쳐 알파벳 소문자로 이루어진 단어가 한 줄에 하나씩 주어진다. 주어지는 문자열의 길이는 50을 넘지 않는다.

출력
조건에 따라 정렬하여 단어들을 출력한다.
*/

#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

// 정렬 기준 함수
bool compare(const string &a, const string &b) {
    if (a.length() == b.length()) return a < b; // 길이가 같으면 사전 순 정렬
    return a.length() < b.length(); // 길이가 짧은 순 정렬
}

int main() {
    int N;
    cin >> N;

    set<string> wordSet; // 중복 제거를 위한 set

    // 입력 받기 (중복 자동 제거)
    for (int i = 0; i < N; i++) {
        string word;
        cin >> word;
        wordSet.insert(word);
    }

    // set의 요소들을 vector로 변환
    vector<string> words(wordSet.begin(), wordSet.end());

    // 정렬
    sort(words.begin(), words.end(), compare);

    // 출력
    for (const string &word : words) {
        cout << word << '\n';
    }

    return 0;
}

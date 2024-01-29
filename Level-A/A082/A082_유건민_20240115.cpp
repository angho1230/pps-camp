#include <iostream>
#include <algorithm>
using namespace std;

struct user {
	int age;
	string name;
	int index;
};

user arr[100000];

bool compare(user a, user b) {
	if (a.age == b.age) {
		return a.index < b.index;
	}
	else {
		return a.age < b.age;
	}
}
int main(void) {
    int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i].age >> arr[i].name;
		arr[i].index = i;
	}
	sort(arr, arr + N, compare);
	for (int i = 0; i < N; i++) {
		cout << arr[i].age << ' ' << arr[i].name << '\n';
	}
    
    return 0;
}
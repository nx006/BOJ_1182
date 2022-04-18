#include <iostream>
#include <vector>
using namespace std;

int sizeArr;
int target;
int result;

void bricks(int index, int sum, vector<int>& arr)
{
	if (index == sizeArr) return;
	if (sum + arr[index] == target) result++;

	bricks(index + 1, sum + arr[index], arr); //현재 index 숫자를 더하는 경우
	bricks(index + 1, sum, arr); //현재 index 숫자를 더하지 않고 그냥 넘어가는 경우
}

int main()
{
	
	cin >> sizeArr >> target;
	vector<int> arr(sizeArr);
	for (int i = 0; i < sizeArr; i++) {
		cin >> arr[i];
	}

	bricks(0, 0, arr);
	cout << result;
	return 0;
}

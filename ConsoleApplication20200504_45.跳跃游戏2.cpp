// ConsoleApplication20200504_45.跳跃游戏2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int min_nums(vector<int>& nums, int count, int position) {
	if (position+1 >= nums.size()) return count + 1;
	int a = 65535;
	count++;
	for (int i = 1; i <= nums[position]; i++) {
		a = min(a, min_nums(nums, count, position + i));
	}
	return a;
}

int jump(vector<int>& nums) {
	if (nums.size() == 1 && nums[0] == 0) return 0;
	int count = 0;
	int position = 0;
	int a=65535;
	for (int i = 1; i <= nums[position]; i++)
	{
		a = min(a, min_nums(nums, count, position + i));
	}
	return a;

}
int main()
{
	int a[20] = { 5,6,4,4,6,9,4,4,7,4,4,8,2,6,8,1,5,9,6,5 };
	vector<int> a1(a, a + 20);
    std::cout << jump(a1);
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件

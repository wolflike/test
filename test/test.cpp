//#include<iostream>
//#include<string>
//#include<time.h>
//using namespace std;
//void try1(int index, int t, int n);
//char temp[3] = { 'P','A','T' };
//std::string a;
//int count1=0;
//
//
//int main()
//{
//	std::ios::sync_with_stdio(false);
//	clock_t start, finish;
//	double totaltime;
//	start = clock();
//	//count = 0;
//	std::cin >> a;
//	try1(0, 0, a.size());
//	cout << count1;
//	finish = clock();
//	totaltime = (double)(finish - start) / CLOCKS_PER_SEC;
//	cout << "\n�˳��������ʱ��Ϊ" << totaltime << "�룡" << endl;
//}
//void try1(int index, int t, int n)
//{
//	if (index == 3)
//	{
//		count1 = ++count1 % 1000000007;
//	}
//	else {
//		for (int i = t; i<n; i++)
//		{
//			if (a[i] == temp[index])
//				try1(index + 1, i + 1, n);
//		}
//	}
//
//}
/*
��Ŀ����:
�ַ���APPAPT�а������������ʡ�PAT�������е�һ��PAT�ǵ�2λ(P),��4λ(A),��6λ(T)���ڶ���PAT�ǵ�3λ(P),��4λ(A),��6λ(T)��
�ָ����ַ�������һ�������γɶ��ٸ�PAT��
��������:
����ֻ��һ�У�����һ���ַ��������Ȳ�����10^5��ֻ����P��A��T������ĸ��
�������:
��һ������������ַ����а������ٸ�PAT�����ڽ�����ܱȽϴ�ֻ�����1000000007ȡ�����Ľ����

*/
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	//string a;
	char a[100000];
	cin >> a;
	int i,j;
	int count=0,count_P,count_T;
	for (i = 0; a[i]!='\0'; i++) {
		count_P = count_T = 0;
		if (a[i] == 'A') {
			for (j = i - 1; j >= 0; j--) {
				if (a[j] == 'P')
					count_P++;
			}
			for (j = i + 1;a[j] != '\0'; j++)
				if (a[j] == 'T')
					count_T++;
			count += count_P * count_T;
			count %= 1000000007;
		}
		
	}
	std::cout << count;
}
//int main()
//{
//
//}
//#include <iostream>
//#include <vector>
//#include <limits.h>
//#include<time.h>
//using namespace std;
//
//void dfs(int start, int index, int end);
//
//int cmax, N, sp, M;
//int costTimes, outBikes, inBikes;
//int resultTimes = INT_MAX;
//int resultOutBikes, resultInBikes;
//vector<int> bikes, path, resultPath;
//vector<vector<int> > times;
//vector<bool> visited;
//
//int main()
//{
//	clock_t start, finish;
//	double totaltime;
//	start = clock();
//	ios::sync_with_stdio(false);
//	// ��������
//	cin >> cmax >> N >> sp >> M;
//	bikes.resize(N + 1, 0);
//	visited.resize(N + 1, false);
//	times.resize(N + 1, vector<int>(N + 1, 0));
//	for (int i = 1; i <= N; i++) {
//		cin >> bikes[i];
//	}
//	int m, n, dist;
//	for (int i = 0; i<M; i++) {
//		cin >> m >> n >> dist;
//		times[m][n] = dist;
//		times[n][m] = dist;
//	}
//
//	// ���Ѳ�������
//	dfs(0, 0, sp);
//	cout << resultOutBikes << " 0";
//	for (int i = 1; i<resultPath.size(); i++) {
//		cout << "->" << resultPath[i];
//	}
//	cout << " " << resultInBikes;
//	finish = clock();
//	totaltime = (double)(finish - start) / CLOCKS_PER_SEC;
//	std::cout << "\n�˳��������ʱ��Ϊ" << totaltime << "�룡" << std::endl;
//	return 0;
//}
//
//void dfs(int start, int index, int end)
//{
//	// ����
//	visited[index] = true;
//	path.push_back(index);
//	costTimes += times[start][index];
//
//	// ����
//	if (index == end) {
//		// ��������·�ϴ�ȥ�ĳ��ʹ��صĳ�
//		inBikes = 0, outBikes = 0;
//		for (int i = 1; i<path.size(); i++) {
//			if (bikes[path[i]] > cmax / 2) {
//				inBikes += bikes[path[i]] - cmax / 2;
//			}
//			else {
//				if ((cmax / 2 - bikes[path[i]]) < inBikes) {
//					inBikes -= (cmax / 2 - bikes[path[i]]);
//				}
//				else {
//					outBikes += (cmax / 2 - bikes[path[i]]) - inBikes;
//					inBikes = 0;
//				}
//			}
//		}
//		// �ж�����·�Ƿ����
//		if (costTimes != resultTimes) {
//			if (costTimes < resultTimes) {
//				resultTimes = costTimes;
//				resultPath = path;
//				resultOutBikes = outBikes;
//				resultInBikes = inBikes;
//			}
//		}
//		else if (outBikes != resultOutBikes) {
//			if (outBikes < resultOutBikes) {
//				resultPath = path;
//				resultOutBikes = outBikes;
//				resultInBikes = inBikes;
//			}
//		}
//		else if (inBikes < resultInBikes) {
//			resultPath = path;
//			resultOutBikes = outBikes;
//			resultInBikes = inBikes;
//		}
//	}
//	else {
//		// �ݹ�
//		for (int i = 1; i <= N; i++) {
//			if (times[index][i] != 0 && !visited[i]) {
//				dfs(index, i, end);
//			}
//		}
//	}
//
//	// ����
//	visited[index] = false;
//	path.pop_back();
//	costTimes -= times[start][index];
//}

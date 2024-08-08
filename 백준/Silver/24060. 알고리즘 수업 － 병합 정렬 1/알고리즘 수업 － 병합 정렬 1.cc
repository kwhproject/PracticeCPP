#include <iostream>
#include <algorithm>
#include <vector>

int n, k;
int count = 0;
int answer = -1;
int* a, *tmp;

void merge(int a[], int p, int q, int r)
{
	int i = p;
	int j = q + 1;
	int t = 1;
	
	while (i <= q && j <= r)
	{
		if (a[i] <= a[j])	tmp[t++] = a[i++];
		else				tmp[t++] = a[j++];
	}

	while (i <= q)	tmp[t++] = a[i++];
	while (j <= r)	tmp[t++] = a[j++];

	i = p, t = 1;
	while (i <= r)
	{
		a[i++] = tmp[t++];
		count++;
		if (count == k)
		{
			answer = a[i - 1];
			break;
		}
	}

}

void merge_sort(int a[], int p, int r)
{
	if (p < r)
	{
		int q = (p + r) / 2;
		merge_sort(a, p, q);
		merge_sort(a, q + 1, r);
		merge(a, p, q, r);
	}
}

int main()
{
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::cin >> n >> k;
	a = new int[n];
	tmp = new int[n];

	for (int i = 0; i < n; i++)
	{
		std::cin >> a[i];
	}

	merge_sort(a, 0, n - 1);
	std::cout << answer;

	return 0;
}
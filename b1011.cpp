#include<cstdio>
int main()
{
	int T;
	scanf("%d", &T);
	int i = 1;
	for (; T > 0; T--)
	{
		long long a[3];
		for(int j=0;j<3;j++){
		    scanf("%lld",&a[j]);
        }
		if ((a[0] + a[1]) <= a[2])
			printf("Case #%d: false\n", i++);
		else
			printf("Case #%d: true\n", i++);
	}
	return 0;
}

#include <iostream>
using namespace std;
const int maxn = (int)2e5+5;
const int logn = 20;
int a[maxn], sum[maxn];
int main()
{
   //ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
   //freopen("input.txt", "r", stdin);
   //freopen("output.txt", "w", stdout);
   int n;
   cin>>n;
   sum[0] = 0;
   for(int i=1;i<=n;i++){
       cin>>a[i];
       sum[i] = sum[i-1] + a[i];
   }
   int q;
   cin>>q;
   for(int i = 1;i<=q;i++){
       int l, r;
       cin>>l>>r;
       cout << sum[r] - sum[l-1] << "\n";
   }
   return 0;
}

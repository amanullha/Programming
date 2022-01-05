
void solve()
{

    int n, lala;
    cin >> n >> lala;
  int v[n];
   for(int i=0;i<n;i++)
   {
       cin>>v[i];
   }
    int kk = lala;
    int i = 0;
    int m=0;
    while (kk&&i<n)
    {
        if (kk >= v[i])
           {
               kk = kk - v[i];
               m+=v[i];
               v[i]=0;
               i++;
           } 

            else 
            {
                v[i]=v[i]-kk;
                m+=kk;
                kk=0;
            }
            
    }
    v[n-1]+=m;
    for(int i=0;i<n;i++)cout<<v[i]<<...//:<D
 
}

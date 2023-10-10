                                                              //    Matrix Exponen

ll ar[3];
ll iden[3][3],tra[3][3];
const ll mod=1e9+7;
void mul(ll id[][3], ll tr[][3])
{
      ll res[3][3];
      for(int i=1;i<3;i++)
      {
        for(int j=1;j<3;j++)
        {
              res[i][j]=0;
              for(int k=1;k<3;k++)
              {
                ll x=(id[i][k]*tr[k][j])%mod;
                res[i][j]=(res[i][j]+x)%mod;
              }
        }
      }
      for(int i=1;i<3;i++)
      {
        for(int j=1;j<3;j++)
        {
            id[i][j]=res[i][j];
        }
      }
}
void fib(ll n)
{
    if(n<=2)
    {
        cout<<ar[n]<<nl;
        return;
    }
    n--;
    iden[1][1]=iden[2][2]=1;
    iden[1][2]=iden[2][1]=0;
    tra[1][1]=0;
    tra[1][2]=tra[2][1]=tra[2][2]=1;
    while(n)
    {
        if(n&1)
        {
            n--;
            mul(iden,tra);
        }
        else
        {
                 n/=2;
                 mul(tra,tra);
        }
      
    }
    ll ans=(ar[1]*iden[1][1]+ar[2]*iden[2][1])%mod;
    cout<<ans<<nl;
}
void solve()
{
    ll n,m,pos,i;
    cin>>ar[1]>>ar[2]>>n;B
    n++;
    fib(n);
    
}
                             Binary Exp



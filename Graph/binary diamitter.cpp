#include<bits/stdc++.h>
using namespace std;
int height(node* p)
{
    if(p==NULL)
        return 0;

    int l=height(p->left);
    int r=height(p->right);
int h;
    if(l>r)
    {
        h=l+1;
    }
    else
        h=r+1;
return h;
}


int diameter(node* p)
{
if(p==NULL)return 0;

int lh=height(p->left);
int rh=height(p->right);


int dl=diameter(p->left);
int dr=diameter(p->right);


int Maxdia=max((lh+rh+1),max(dl,dr));



return Maxdia;
}




int main()
{


    return 0;
}

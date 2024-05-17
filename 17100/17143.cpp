#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int R,C,M;
int dx[5] = {0, 0, 0, 1, -1}; 
int dy[5] = {0, -1, 1, 0, 0};
int answer = 0;

struct shark
{
    int r;
    int c;
    int s;
    int d;
    int z;
    int a;
};

int main() {
   ios::sync_with_stdio(0);
   cin.tie(0);
   
   vector<shark> sharks;
   
   
   int target = -1;
   
   cin >> R >> C >> M;
   
   for(int i = 0 ; i < M; i++)
   {
       shark ss;
       
       cin >> ss.r >> ss.c >> ss.s >> ss.d >> ss.z;
       ss.a = 1;
       
       
       if(ss.c == 1)
       {
           if(target == -1)
               target = i;
           else if(sharks[target].r > ss.r)
               target = i;
       }
       
       sharks.push_back(ss);
   }
   
   for(int i = 1 ; i<=C;i++)
   {
       if(target != -1)
       {
           sharks[target].a = 0;
           answer += sharks[target].z;
           target = -1;
       }
       
        vector<vector<int>> map(101, vector<int>(101, -1));
        
       for(int j = 0; j < sharks.size(); j++)
       {
           if(sharks[j].a == 0)
               continue;
               
           
           int cx = sharks[j].c;
           int cy = sharks[j].r;
           int cs = sharks[j].s;
           
           
           while(cx+dx[sharks[j].d] * cs < 1 || cx+dx[sharks[j].d] * cs > C ||
           cy+dy[sharks[j].d] * cs < 1 || cy+dy[sharks[j].d] * cs > R)
           {
               if(cx + dx[sharks[j].d] * cs < 1)
               {
                   cs = cs - (cx - 1);
                   cx = 1;
                   sharks[j].d = 3;
               }
               else if(cx + dx[sharks[j].d] * cs > C)
               {
                   cs = cs - (C - cx);
                   cx = C;
                   sharks[j].d = 4;
               }
               else if(cy + dy[sharks[j].d] * cs < 1)
               {
                   cs = cs - (cy - 1);
                   cy = 1;
                   sharks[j].d = 2;
               }
               else
               {
                   cs = (((cy + dy[sharks[j].d] * cs)) - R);
                   cy = R;
                   sharks[j].d = 1;
               }
           }
           sharks[j].c = cx+dx[sharks[j].d] * cs;
           sharks[j].r = cy+dy[sharks[j].d] * cs;
           
           if(map[sharks[j].r][sharks[j].c] > -1)
           {
               if(sharks[j].z > sharks[map[sharks[j].r][sharks[j].c]].z)
               {
                   sharks[map[sharks[j].r][sharks[j].c]].a = 0;
                   map[sharks[j].r][sharks[j].c] = j;
               }
               else
                   sharks[j].a = 0;
           }
           else
                map[sharks[j].r][sharks[j].c] = j;
                
                
           if(sharks[j].a == 1 && sharks[j].c == i+1 && (sharks[target].a == 0||target == -1 || sharks[j].r < sharks[target].r))
                   target = j;
       }
   }
   
   cout << answer;
   
   
   return 0;
}
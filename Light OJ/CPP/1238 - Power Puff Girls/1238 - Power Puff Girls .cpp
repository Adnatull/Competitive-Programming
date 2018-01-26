    #include <bits/stdc++.h>
     
    using namespace std;
     
     
        int m,n;
        int mac;
        pair < int, int > h;
     
    int bfs (string st[], int x, int y) {
       
        queue < pair <int, int> > q;
        q.push(make_pair(x,y));
       
        map < int, map <int, bool > > check;
        map < int, map < int, int > > dist;
        check[x][y]=true;
        dist[x][y] = 0;
        int s,t,u,v;
        while (!q.empty()) {
            u = q.front().first;
            v = q.front().second;
            q.pop();
           
            if(u==h.first && v==h.second) {
                int fo=dist[u][v];
                return fo;
               
                }
           
            s=u-1;
            t=v;   
           
            if((st[s][t]=='.' || st[s][t]=='h' || st[s][t]=='a' || st[s][t]=='b' || st[s][t]=='c') && !check[s][t])  {
                check[s][t]=true;
                dist[s][t]=dist[u][v]+1;
                if(s==h.first && t==h.second) {
                    int found = dist[s][t];
                    return found;
                   
                }
                   
                q.push(make_pair(s,t));    
            }
           
            s = u;
            t = v-1;
            if((st[s][t]=='.' || st[s][t]=='h' || st[s][t]=='a' || st[s][t]=='b' || st[s][t]=='c') && !check[s][t])  {
                check[s][t]=true;
                dist[s][t]=dist[u][v]+1;
                if(s==h.first && t==h.second) {
                    int found = dist[s][t];
                    return found;
                   
                }
                   
                q.push(make_pair(s,t));    
            }
           
            s= u;
            t= v+1;
            if((st[s][t]=='.' || st[s][t]=='h' || st[s][t]=='a' || st[s][t]=='b' || st[s][t]=='c') && !check[s][t])  {
                check[s][t]=true;
                dist[s][t]=dist[u][v]+1;
                if(s==h.first && t==h.second) {
                    int found = dist[s][t];
                    return found;
                   
                }
                   
                q.push(make_pair(s,t));    
            }
           
            s = u+1;
            t = v;
            if((st[s][t]=='.' || st[s][t]=='h' || st[s][t]=='a' || st[s][t]=='b' || st[s][t]=='c') && !check[s][t])  {
                check[s][t]=true;
                dist[s][t]=dist[u][v]+1;
                if(s==h.first && t==h.second) {
                    int found = dist[s][t];
                    return found;
                   
                }
                   
                q.push(make_pair(s,t));    
            }
        }
        return dist[h.first][h.second];
       
    }
     
     
    int main() {
       
        //freopen ("in.txt", "r", stdin);
        //freopen ("out.txt", "w", stdout);
       
        int t;
        scanf ("%d",&t);
       
        for (int i=1; i<=t; i++) {
        pair < int, int > a;
        pair < int, int > b;
        pair < int, int > c;
     
        scanf ("%d %d",&m, &n);
       
        string s[m];
     
        for (int j=0; j<m; j++) {
                cin >> s[j];
                for (int k=0; k<n; k++) {
                   
                    if (s[j][k]=='a')
                        a=make_pair(j,k);
                    if(s[j][k]=='b')
                        b= make_pair(j,k);
                   
                    if(s[j][k]=='c')
                        c = make_pair(j,k);
                    if(s[j][k]=='h')
                        h = make_pair(j,k);
                       
                }
        }
       
        mac = INT_MIN;
        int x,y;
        x= a.first, y = a.second;
        int z = bfs(s,x,y);
        mac = max(mac,z);
       
        x = b.first, y=b.second;
        z = bfs (s,x,y);
        mac = max (mac, z);
       
        x = c.first, y = c.second;
        z = bfs (s,x,y);
        mac = max (mac, z);
       
        printf ("Case %d: %d\n",i,mac);
       
       
       
        }
       
        return 0;
    }

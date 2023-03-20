   ll b=m[v[i]][0];
            d.pb(i-b);
            m.clear();
            for(ll j=b+1;j<i;j++)
            {
                cout<<j<<" "<<v[j-(i-b)]<<"\n";
                v.insert(v.begin()+i+1,v[j-i+b]);
            }
            f(i+1);
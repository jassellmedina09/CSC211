#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin>> n >> k;

    double x[n];
    double y[n];
    string type[n];

    for (int i =0; i<n; i ++){
        cin >> x[i] >> y[i] >> type[i];
    }

double X,Y;
cin >> X >> Y;
double dist[n];
for (int i = 0; i<n; i++){
    dist[i] = sqrt(((x[i]-X)*(x[i]-X)+(y[i]-Y)*(y[i]-Y)));
}

for (int i =0; i<n; i++){
    for (int j = i+1; j<n; j++){
        if(dist[i]>dist[j]){
            double d = dist[i];
            dist[i] = dist [j];
            dist[j] = d;
            string str = type[i];
            type[i] = type[j];
            type[j] = str;

        }
    }
}

int Rcount = 0;
int Bcount = 0;

for (int i = 0; i<k; i++){
    if(type[i] == "R")
        Rcount++;
    else
        Bcount++;

}

if(Rcount > Bcount)
    cout<< "R" << endl;
else
    cout<<"B" << endl;
return 0;

}

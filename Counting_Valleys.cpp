#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
int count=0,v=0;int i;
for(i=0;i<n;i++)
{
    {
        if(s[i]=='U')
        count=count+1;
        else if(s[i]=='D')
        count=count-1;
        else
        ;
    }
if(count==0 && s[i]=='U')
v++;
}

return v;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}

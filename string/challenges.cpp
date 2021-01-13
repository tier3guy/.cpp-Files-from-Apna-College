#include<iostream> 
#include<string>
#include<algorithm>
using namespace std;
int main()
{

// challenge 1 :
/*  string s = "Avinash Gupta";
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;   */

    string s = "Avinash Gupta";
 // cout << 'a'-'A' << endl;
    for(int i=0;i<s.length();i++){
        if(s[i] >= 'a' && s[i]<='z'){
            s[i] -= 32;
        }
    }
    cout << s << endl;

    string s2 = "aVINASH gUPTA";
    for(int i=0;i<s.length();i++){
        if(s2[i] >= 'A' && s2[i]<='Z'){
            s2[i] += 32;
        }
    }
    cout << s2 << endl;    

// challenge 2 :
    string s1 = "2689469411";
    sort(s1.begin(),s1.end(),greater<int>());
    cout<<s1<<endl;  

// challenge 3:
    string s3 = "bebuiweffffffbasmsajn";
    int frequency[26];
    for(int i=0;i<26;i++){
        frequency[i]=0;
    }

    for(int i=0;i<s3.length();i++){
        frequency[s3[i]-'a']++;
    }
    char ans = 'a';
    int maxF = 0;
    for(int i=0;i<26;i++){
        if(frequency[i]>=maxF){
            maxF = frequency[i];
            ans = 'a' + i;
        }
    }
    cout << ans << " " << maxF << endl;
    
return 0;
}
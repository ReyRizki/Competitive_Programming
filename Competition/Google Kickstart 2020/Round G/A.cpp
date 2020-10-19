#include <bits/stdc++.h>

#define REP(i, a, b) for (auto i = (a); i < (b); i++)
#define REPR(i, a, b) for (auto i = (a-1); i >= (b); i--)

using namespace std;

// Fills lps[] for given patttern pat[0..M-1] 
void computeLPSArray(string pat, int M, int* lps) 
{ 
    // length of the previous longest prefix suffix 
    int len = 0; 
  
    lps[0] = 0; // lps[0] is always 0 
  
    // the loop calculates lps[i] for i = 1 to M-1 
    int i = 1; 
    while (i < M) { 
        if (pat[i] == pat[len]) { 
            len++; 
            lps[i] = len; 
            i++; 
        } 
        else // (pat[i] != pat[len]) 
        { 
            // This is tricky. Consider the example. 
            // AAACAAAA and i = 7. The idea is similar 
            // to search step. 
            if (len != 0) { 
                len = lps[len - 1]; 
  
                // Also, note that we do not increment 
                // i here 
            } 
            else // if (len == 0) 
            { 
                lps[i] = 0; 
                i++; 
            } 
        } 
    } 
} 
  
// Prints occurrences of txt[] in pat[] 
void KMPSearch(string pat, string txt, vector<int> &v) 
{ 
    int M = pat.length(); 
    int N = txt.length(); 
  
    // create lps[] that will hold the longest prefix suffix 
    // values for pattern 
    int lps[M]; 
  
    // Preprocess the pattern (calculate lps[] array) 
    computeLPSArray(pat, M, lps); 
  
    int i = 0; // index for txt[] 
    int j = 0; // index for pat[] 
    while (i < N) { 
        if (pat[j] == txt[i]) { 
            j++; 
            i++; 
        } 
  
        if (j == M) { 
            v.push_back(i - j);
            j = lps[j - 1]; 
        } 
  
        // mismatch after j matches 
        else if (i < N && pat[j] != txt[i]) { 
            // Do not match lps[0..lps[j-1]] characters, 
            // they will match anyway 
            if (j != 0) 
                j = lps[j - 1]; 
            else
                i = i + 1; 
        } 
    } 
} 
  
void solve()
{
    string s; cin >> s;

    vector<int> kick;
    vector<int> start;

    KMPSearch("KICK", s, kick);
    KMPSearch("START", s, start);

    int result = 0;

    for (auto it = kick.begin(); it != kick.end(); ++it)
        result += start.size() - (upper_bound(start.begin(), start.end(), *it) - start.begin());
    
    cout << result << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1; cin >> t;

    REP(i, 0, t)
    {
        cout << "Case #" << i + 1 << ": ";
        solve();
    }

    return 0;
}
## Algorithms
1. **Naive Pattern Searching**
   - **Problem:** Find out the index of pattern in given string
   - **Approach:** Slide the pattern over text one by one and check for a match. If a match is found, then slides by 1 again to check for subsequent matches.
   - **Example:**  
      txt = "AABAACAADAABAAABAA"  
      pat = "AABA"  
      Output = 0, 9, 13
   - **Psuedo Code:**  
     ``` cpp
      N = txt.length(), M = pat.length()  
      for (int i = 0; i <= N - M; i++) {

          /* For current index i, check for pattern match */
          for (int j = 0; j < M; j++)
              if (txt[i + j] != pat[j])
                  break;

          if (j == M) // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
              cout << "Pattern found at index "
                   << i << endl;
      }
     ```  
     
2. **KMP Algorithm**
  -

# B2B vs C2C Matrix Generator

This project implements a randomized matrix generator in C that satisfies a specific pattern frequency condition.

## ⚙️ Logic

1.  **Generation:** Fills an $N \times N$ matrix with random characters: `B`, `2`, `C`.
2.  **Analysis:** Scans each row horizontally to count two specific patterns:
    * **Pattern 1:** `B` $\to$ `2` $\to$ `B`
    * **Pattern 2:** `C` $\to$ `2` $\to$ `C`
3.  **Validation:**
    * Checks if `Count(B2B) > Count(C2C)`.
    * If **True**: Prints the matrix.
    * If **False**: Discards the matrix and regenerates a new one (Rejection Sampling).

## 🚀 Example Output

**Condition:** Find a matrix where "B2B" is more frequent than "C2C".

```text
--- Uygun Matris Bulundu (N=5) ---
B2B Sayisi: 2 | C2C Sayisi: 0
-----------------------------------
B  2  B  2  B 
C  2  B  C  C 
2  B  2  2  2 
C  C  B  B  C 
2  2  C  2  B

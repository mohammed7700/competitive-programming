# Memoization;
-   merke zwischenergebnisse der rekursiven Aufrufe

# 1 Edit-Distance

## rekursive
-   replace, insert, delete
-   BERLIN -> KOELN
-       1 ... i ; x1, ..., xi
    	1 ... j ; x1, ..., xj  

        d(i,j): distance
        replace for xi != xj:  d(i-1, j-1) + 1
        delete for y == null: d(i-1, j) + 1
        insert for y missing character: d(i, j-1) + 1
        y, x matches: d(i-1, j-1)
        search min of these operations recursivly 
        time: O(n*m)

# 2 longest common subsequence 
-   DUESSELDORF
    OBERHAUSEN

-   LCS(i,j) =  LCS(i-1, j-1) if x=y
                LCS(i-1, j) benutze x if x!=y
                LCS(i, j-1) benutze y if x!=y
                    -> take maximum
    LCS(0,j) = 0
    LCS(i,0) = 0
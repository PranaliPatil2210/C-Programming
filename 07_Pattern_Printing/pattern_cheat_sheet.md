# Pattern Printing Cheat Sheet

| Pattern | Inner Loop | Print |
|----------|------------|-------|
| Square | j <= n | * |
| Number Square | j <= n | i / j |
| Increasing Triangle | j <= i | * / i / j |
| Decreasing Triangle | j <= n-i+1 | * / j |
| Floyd's Triangle | j <= i | num++ |
| Character Triangle | j <= i | 'A'+j-1 |
| Continuous Characters | j <= i | ch++ |
| Right Triangle | Spaces + Stars | * |
| Pyramid | Spaces + 2*i-1 | * |
| Inverted Pyramid | Spaces + 2*(n-i)+1 | * |
| Hollow Square | Boundary Check | * |
| Hollow Rectangle | Boundary Check | * |

## Pattern Solving Strategy

1. Count the rows.
2. Count the spaces.
3. Count the stars or numbers.
4. Find the formula.
5. Write the loops.
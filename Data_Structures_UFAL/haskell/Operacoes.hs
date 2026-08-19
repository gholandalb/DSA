Soma :: [Int] -> Int
Soma [] = 0
Soma (x:xs) = x + Soma xs

Multiplicacao :: [Int] -> Int
Multiplicacao [] = 1
Multiplicacao (x:xs) = x * Multiplicacao xs

Pow :: Int -> Int -> Int
Pow x 0 = 1
Pow x n = x * Pow x (n - 1)

Size :: [Int] -> Int
Size [] = 0
Size (x:xs) = 1 + Size xs

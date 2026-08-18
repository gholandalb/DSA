nesimo :: Int -> Int -> [Int] -> Int
nesimo n i [] = -1
nesimo n i (x:xs) =
    if n == i
        then x
        else nesimo n (i + 1) xs

main :: IO ()
main = do
    print (nesimo 6 1 [1, 4, 7, 9, 13, 20, 31])
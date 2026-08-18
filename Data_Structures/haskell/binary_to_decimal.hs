
length1 :: [Int] -> Int
length1 [] = 0
length1 (_:xs) = 1 + length1 xs


pow :: Int -> Int -> Int
pow _ 0 = 1
pow base expo = base * pow base (expo - 1)


binaryToDecimal :: [Int] -> Int
binaryToDecimal [] = 0
binaryToDecimal (x:xs) =
    x * pow 2 (length1 xs) + binaryToDecimal xs


main :: IO ()
main = do
    print (binaryToDecimal [1,0,1,1])
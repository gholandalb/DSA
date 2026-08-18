quickSort :: [Int] -> [Int]
quickSort [] = []
quickSort (a:as) = quickSort [x | x <-as, x < a]
                   ++ [a] ++
                   quickSort [x | x <-as, x >= a]

Print :: [Int] -> IO ()
Print [] = return ()
Print (x:xs) = do
    print x
    Print xs

main :: IO ()
main = do
    print (Print quicksort [1, 4, 7, 9, 13, 20, 31])
-- =========================================
-- HASKELL ESSENCIAL PARA PROVA
-- =========================================


-- 1. FUNÇÕES
-- =========================================

soma :: Int -> Int -> Int
soma x y = x + y

quadrado :: Int -> Int
quadrado x = x * x


-- IF
maior :: Int -> Int -> Int
maior x y =
    if x > y
        then x
        else y


-- GUARDS
sinal :: Int -> Int
sinal x
    | x > 0     = 1
    | x < 0     = -1
    | otherwise = 0



-- 2. LISTAS + RECURSÃO
-- =========================================

-- x  = primeiro elemento
-- xs = restante da lista
--
-- [1,2,3,4]
-- x  = 1
-- xs = [2,3,4]


-- Somar lista
somaLista :: [Int] -> Int
somaLista [] = 0
somaLista (x:xs) = x + somaLista xs


-- Tamanho da lista
tamanho :: [a] -> Int
tamanho [] = 0
tamanho (_:xs) = 1 + tamanho xs


-- Maior elemento
maiorElemento :: [Int] -> Int
maiorElemento [x] = x
maiorElemento (x:xs) =
    max x (maiorElemento xs)



-- 3. SEARCH
-- =========================================

-- Busca linear
busca :: Eq a => a -> [a] -> Bool
busca _ [] = False

busca n (x:xs)
    | n == x    = True
    | otherwise = busca n xs


-- Exemplo:
-- busca 7 [2,4,7,9]
-- True



-- 4. FILTER
-- =========================================

-- Pegar somente os pares
pares :: [Int] -> [Int]
pares [] = []

pares (x:xs)
    | even x    = x : pares xs
    | otherwise = pares xs


-- Exemplo:
-- pares [1,2,3,4,5]
-- [2,4]



-- 5. MAP
-- =========================================

dobrar :: [Int] -> [Int]
dobrar [] = []
dobrar (x:xs) = 2*x : dobrar xs


-- Exemplo:
-- dobrar [1,2,3]
-- [2,4,6]


-- Usando map:
dobrarMap :: [Int] -> [Int]
dobrarMap xs = map (\x -> 2*x) xs

-- 7. SORT - QUICKSORT
-- =========================================

quickSort :: [Int] -> [Int]
quickSort [] = []

quickSort (x:xs) =
    quickSort menores
    ++ [x] ++
    quickSort maiores
    where
        menores = [y | y <- xs, y <= x]
        maiores = [y | y <- xs, y > x]


-- Exemplo:
-- quickSort [5,2,8,1,3]
-- [1,2,3,5,8]



-- 8. O QUE : E ++ FAZEM
-- =========================================

-- : adiciona UM elemento no começo
--
-- 1 : [2,3]
-- resultado: [1,2,3]


-- ++ junta DUAS listas
--
-- [1,2] ++ [3,4]
-- resultado: [1,2,3,4]
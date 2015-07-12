rmdups [] = []
rmdups (x:xs)
    | elem x xs = rmdups xs
    | otherwise = x : rmdups xs

main = do
    s <- getLine
    putStrLn $ reverse $ rmdups $ reverse s

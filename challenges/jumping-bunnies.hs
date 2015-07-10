readInts :: IO [Int]
readInts = fmap (map read . words) getLine

main = do
    n <- readLn :: IO Int
    a <- readInts
    print $ foldr (lcm) 1 a

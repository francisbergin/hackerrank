factorial :: Integer -> Integer
factorial 0 = 1
factorial n = n * factorial (n - 1)

main = do
    n <- readLn :: IO Integer
    print (factorial n)

rev s = tail s ++ [head s]
f s = tail $ take ((length s)+1) (iterate rev s)

main = do
    n <- readLn :: IO Int
    getContents >>= mapM_ putStrLn . map unwords . map f . words

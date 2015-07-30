f [] = []
f (c1:c2:s) = [c2, c1] ++ f s

main = do
    n <- readLn :: IO Int
    getContents >>= mapM_ putStrLn . map f . words

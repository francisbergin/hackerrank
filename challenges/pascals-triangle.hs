fac n = product [1..n]

pascal r = [fac r `div` (fac c * fac (r-c)) | c <- [0..r]]

main = do
    k <- readLn :: IO Int
    mapM_ putStrLn . map unwords . map (map show) $ map pascal [0..(k-1)]

f :: [Int] -> [Int]
f lst = map fst (filter (\n -> (snd n) `mod` 2 /= 0) (zip lst [0..]))

main = do
    inputdata <- getContents
    mapM_ (putStrLn. show). f. map read. lines $ inputdata

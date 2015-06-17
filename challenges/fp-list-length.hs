len :: [a] -> Int
len lst = snd (last (zip lst [0..])) + 1

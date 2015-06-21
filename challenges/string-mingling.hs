import Data.List

main :: IO ()
main = do
    s1 <- getLine
    s2 <- getLine
    putStrLn . intercalate "" $ [[x,y] | (x,y) <- zip s1 s2]

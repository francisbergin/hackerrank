import Data.List
import Data.Maybe

toTuple :: [a] -> (a,a)
toTuple [x,y] = (x,y)

getPos :: IO (Int, Int)
getPos = do l <- getLine; return (toTuple (map read $ words l :: [Int]))

getBoard :: Int -> IO [String]
getBoard n = if n==0 then return [] else do i <- getLine; is <- getBoard(n-1); return (i:is)

getDirt :: [String] -> (Int, Int)
getDirt board = (fromJust(findIndex (/= Nothing) (map (elemIndex 'd') board)), fromJust(fromJust (find (/= Nothing) (map (elemIndex 'd') board))))

nextMove :: (Int, Int) -> (Int, Int) -> [String] -> [Char]
nextMove pos dirt board =
    if pos == dirt
    then "CLEAN"
    else
        if (fst pos - fst dirt) > 0
        then "UP"
        else
            if (fst pos - fst dirt) < 0
            then "DOWN"
            else
                if (snd pos - snd dirt) > 0
                then "LEFT"
                else "RIGHT"

main :: IO()
main = do
    pos <- getPos
    board <- getBoard 5
    putStrLn $ nextMove pos (getDirt board) board

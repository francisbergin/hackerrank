import Text.Printf (printf)

func a b x = sum (zipWith (*) a (map (x^^) b))
interval l r = map (+(fromIntegral l)) (map (*0.001) [1..(((fromIntegral r)-(fromIntegral l))/0.001)])
height l r a b = map (func (map fromIntegral a) b) (interval l r)
area l r a b = sum (map (*0.001) (height l r a b))
volume l r a b = sum (map (*(0.001*pi)) (map (^2) (height l r a b)))

solve :: Int -> Int -> [Int] -> [Int] -> [Double]
solve l r a b = [area l r a b, volume l r a b]

main :: IO ()
main = getContents >>= mapM_ (printf "%.1f\n"). (\[a, b, [l, r]] -> solve l r a b). map (map read. words). lines

fac :: Double -> Double
fac n = if n < 2 then 1 else n * fac (n-1)

solve :: Double -> Double
solve x = 1 + x + (x^2)/fac 2 + (x^3)/fac 3 + (x^4)/fac 4 + (x^5)/fac 5 + (x^6)/fac 6 + (x^7)/fac 7 + (x^8)/fac 8 + (x^9)/fac 9

main :: IO ()
main = getContents >>= mapM_ print. map solve. map (read::String->Double). tail. words

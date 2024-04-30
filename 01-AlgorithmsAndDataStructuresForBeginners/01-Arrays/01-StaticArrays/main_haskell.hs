{-
    To compile and run, in the terminal, type:
        ghc -o main_haskell main_haskell.hs
    After compilation, in the terminal, type:
        ./main_haskell 
-}

module Main where

main :: IO ()
main = do
    let myArray = [1, 3, 5]
    putStrLn (show (myArray !! 0))
    putStrLn (show (myArray !! 1))
    putStrLn (show (myArray !! 2))

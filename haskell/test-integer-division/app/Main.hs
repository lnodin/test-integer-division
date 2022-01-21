module Main where

import Lib

x :: Int 
x = 25 

y :: Int 
y = -25 

z :: Int 
z = 3

t :: Int 
t = -3 

main = do
    print $ x `mod` z
    print $ x `mod` t
    print $ y `mod` z
    print $ y `mod` t

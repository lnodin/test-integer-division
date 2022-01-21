module Main where

import Text.Printf
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
    printf "%d mod %d = %d\n" x z (x `mod` z)
    printf "%d mod %d = %d\n" x t (x `mod` t)
    printf "%d mod %d = %d\n" y z (y `mod` z)
    printf "%d mod %d = %d\n" y t (y `mod` t)
    printf "%d rem %d = %d\n" x z (x `rem` z)
    printf "%d rem %d = %d\n" x t (x `rem` t)
    printf "%d rem %d = %d\n" y z (y `rem` z)
    printf "%d rem %d = %d\n" y t (y `rem` t)
    -- For any language like C, CPP, C# or Java, mod or % operator that gives the remainder after division with truncation towards 0
    -- (-11)/5 = -2
    -- (-11)%5 = -1
    -- 5*((-11)/5) + (-11)%5 = 5*(-2) + (-1) = -11.
    -- Haskell:
    -- (-11)/5 = -3
    -- (-11)%5 = 4
    -- 5*((-11)/5) + (-11)%5 = 5*(-3) + 4 = -11.
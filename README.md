# Advent of Code 2025 Solutions

## Day 1

Part 1 was pretty easy, I spent most of the time just writing some clean
boilerplate for the rest of the days (if I ever got to them). Part 2 is where
things got tricky, as I didn't originally consider the edge cases where we start
at 0 before rotating (doesn't count as a click). That was simple enough to find,
but it was the >=100 rotation lines that got me. I really didn't want to 'write
my own' modulo function to count how many cycles off we are from the 0-99 range,
but I couldn't come up with a much cleaner solution and spent way too long
trying. I could have implemented this pretty simply using integer division, but
something felt wrong about that solution performance-wise. I figure the compiler
will have an easier time dealing with the loops of addition than integer
division and multiplication. Maybe I'm just being too paranoid about low-level
performance.

[TODO] - verify performance hunch: does my version perform better or worse than
using integer division and mult.

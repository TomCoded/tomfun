# Function Parser

This is a small library I wrote in undergrad to handle parsing and evaluation of dynamic functions. It reads a string and then builds a tree from a root node. For example, it can parse `2*sin(t-2)` or `0-9.8*t`, and the class hierarchy will then be evaluated at runtime for a given value of t.

I originally did this for fun to build out a graphics project (the birdFountain, the openGL project in my repos) I was working on. It also allowed for the definition of custom matrix transformations in my photon mapper.

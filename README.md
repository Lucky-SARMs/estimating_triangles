# estimating_triangles

Visually modelling an algorithm to create triangles for Thiessen polygons

This is how a [Thiessen Polygon Network](https://link.springer.com/referenceworkentry/10.1007%2F1-4020-4497-6_220) looks like:


Here is the task that this program is aimed to solve:

>Imagine that you have a number of points (e.g. explaining elevation) distributed in a regular pattern (like centre points in an ordinary raster, see below). How would you divide them into triangles in order to create a “triangular regular network”?

```
+ + + + +
+ + + + +
+ + + + +
```

My idea is to have the algorithm figure out how many smallest triangles can fit depending on the `width` and `height`, and from there fill the surface with the smallest possible triangles.

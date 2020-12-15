# estimating delaunay triangulation for creating thiessen polygons

def show_raster(width_t, height_t):
	"""creates a representation of an equally spaced raster."""
	raster = ""
	for z in range(height_t):
		line = ""
		for x in range(width_t):
			line += "x "
		raster += line + "\n"
	return raster

height = 3
width = 5

example_raster = show_raster(width, height)
print(example_raster) 

#print show_raster(8, 10)
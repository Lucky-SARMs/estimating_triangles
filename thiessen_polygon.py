# estimating delaunay triangulation for creating thiessen polygons

width = 5
height = 3

def show_raster(width, height):
	"""creates a representation of an equally spaced raster."""
	raster = ""
	for z in range(height):
		line = ""
		for x in range(width):
			line += "x "
		raster += line + "\n"
	return raster


print show_raster(width, height)

#print show_raster(8, 10)
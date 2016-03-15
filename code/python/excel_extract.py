def extract_data(wsheet):
	import xlrd
	ncols = wsheet.ncols
	nrows = wsheet.nrows
	data = [[[] for i in range(0, nrows)] for j in range(0, ncols)]
	for i in range(0, ncols):
		for j in range(0,nrows):
			data[i][j] = wsheet.cell(j,i).value
	return data
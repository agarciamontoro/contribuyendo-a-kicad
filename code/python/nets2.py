# find devuleve un iterador para los nombres de red
# coincidentes. Devuelve una tupla: nombre, info
clknet = nets.find("/clk").value()[1]
clkclass = clknet.GetNetClass()

print("net {} is on netclass {}".format(
        clknet.GetNetname(),
        clkclass))

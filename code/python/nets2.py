# find returns an iterator to all matching
# nets. The value is a tuple: name, netinfo
clknet = nets.find("/clk").value()[1]
clkclass = clknet.GetNetClass()

print("net {} is on netclass {}".format(
        clknet.GetNetname(),
        clkclass))

import pcbnew

# Objeto para manejar la placa
board = pcbnew.GetBoard()

# Red donde añadir la pista
clknet = nets.find("/clk").value()[1]

# Mapa de las capas
layertable = {}

numlayers = pcbnew.LAYER_ID_COUNT
for i in range(numlayers):
    layertable[i] = board.GetLayerName(i)
    print(i, board.GetLayerName(i)))

# Crea la nueva pista
track = pcbnew.TRACK(board)
track.SetStart(pcbnew.wxPoint(136144000,
                              95504000))
track.SetEnd(pcbnew.wxPoint(176144000,
                            95504000))
track.SetWidth(1614400)
track.SetLayer(layertable["F.Cu"])

# Añade la pista
board.Add(track)
track.SetNet(clknet)

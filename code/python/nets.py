# Devuelve un diccionario código:info
netcodes = board.GetNetsByNetcode()

# Itera sobre todas las redes en la placa
for netcode, net in netcodes.items():
    # Aquí va la magia negra

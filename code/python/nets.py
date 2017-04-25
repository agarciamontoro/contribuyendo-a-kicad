# returns a dictionary netcode:netinfo_item
netcodes = board.GetNetsByNetcode()

# list off all of the nets in the board.
for netcode, net in netcodes.items():
    # Where the cool stuff should go

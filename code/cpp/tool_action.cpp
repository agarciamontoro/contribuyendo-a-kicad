TOOL_ACTION flip(
    "pcbnew.InteractiveEdit.flip",
    AS_GLOBAL, 'F',
    _( "Flip" ),
    _( "Flips selected item(s)" ),
    swap_layer_xpm
);

// Interact with other tools
InvokeTool()
GetTool()
RunAction()

// Access essential objects
GetView()
GetModel()
GetEditFrame()

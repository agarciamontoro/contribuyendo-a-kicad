void PCB_ACTIONS::RegisterAllTools( TOOL_MANAGER* aToolManager )
{
    aToolManager->RegisterTool( new COMMON_TOOLS );
    aToolManager->RegisterTool( new SELECTION_TOOL );
    aToolManager->RegisterTool( new ZOOM_TOOL );
    // ...

    aToolManager->RegisterTool( new NEW_TOOL );
}

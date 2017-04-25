NEW_TOOL::eventHandler( ... )
{
    // interactive tool
    while( OPT_TOOL_EVENT evt = Wait() )
    {
        if( evt->IsClick( BUT_LEFT )
            // Left button was clicked
        else if( evt->IsDrag( BUT_LEFT )
            // Mouse moving with left
            // button clicked
    }
}

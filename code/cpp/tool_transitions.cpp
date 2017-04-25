NEW_TOOL::SetTransitions()
{
    // set event handlers
    Go( &NEW_TOOL::eventHandler, eventA );
}

NEW_TOOL::eventHandler( ... )
{
    // single action handler
    // execute an action and finish
    selectedItem->SetPosition( wxPoint( 0, 0 ) );
}

BOARD_COMMIT commit( frame );
commit.Add( new TRACK( ... ) )
commit.Modify( module );

// perform module modifications

commit.Remove( drawing );
commit.Push( "Updated board" );

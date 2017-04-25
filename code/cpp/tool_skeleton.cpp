class NEW_TOOL : public PCB_TOOL
{
public:
    NEW_TOOL();
    ~NEW_TOOL();
    void Reset( RESET_REASON aReason );
    bool Init();
    void SetTransitions();
private:
    int eventHandler( const TOOL_EVENT& aEvent );
};

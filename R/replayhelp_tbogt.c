void main()
{
    l_U0 = 2;
    PRINTSTRING( "\n\n\n\n\n\nREPLAY HELP LAUNCHED\n\n\n\n\n" );
    sub_54();
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_54()
{
    PRINT_HELP( "REPLAY_S" );
    SETTIMERA( 0 );
    while ((TIMERA() < 7500) AND (sub_103( l_U0 )))
    {
        WAIT( 0 );
        if ((IS_BIT_SET( g_U10938._fU0, 4 )) || (g_U12379))
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "REPLAY_S" ))
            {
                CLEAR_HELP();
            }
            sub_203( l_U0 );
            TERMINATE_THIS_SCRIPT();
        }
    }
    sub_203( l_U0 );
    TERMINATE_THIS_SCRIPT();
    return;
}

boolean sub_103(int iParam0)
{
    return iParam0 == g_U42868;
}

void sub_203(unknown uParam0)
{
    if (NOT (sub_103( uParam0 )))
    {
        return;
    }
    g_U42867 = 0;
    g_U42868 = 4;
    g_U42869 = 0;
    g_U42870 = 4;
    return;
}

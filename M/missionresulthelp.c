void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U100 = 0;
    while (true)
    {
        WAIT( 0 );
        if (IS_PLAYER_PLAYING( sub_45() ))
        {
            switch (l_U100)
            {
                case 0:
                if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                {
                    PRINT_HELP( "MisResultHelp1" );
                    l_U100 = 1;
                }
                break;
                case 1:
                if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                {
                    PRINT_HELP( "MisResultHelp2" );
                    l_U100 = 2;
                }
                break;
                case 2:
                if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                {
                    PRINT_HELP( "MisResultHelp3" );
                    l_U100 = 3;
                }
                break;
                case 3:
                if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                {
                    g_U43626 = 1;
                    PRINT_HELP_FOREVER( "MisResultHelp4" );
                    GET_GAME_TIMER( ref l_U101 );
                    l_U100 = 4;
                }
                break;
                case 4:
                GET_GAME_TIMER( ref l_U102 );
                l_U103 = l_U102 - l_U101;
                if (l_U103 > 15000)
                {
                    l_U100 = 5;
                }
                if (IS_CONTROL_PRESSED( 2, 78 ))
                {
                    CLEAR_HELP();
                    g_U43626 = 1;
                    TERMINATE_THIS_SCRIPT();
                }
                if (NOT g_U43561)
                {
                    CLEAR_HELP();
                    g_U43626 = 1;
                    TERMINATE_THIS_SCRIPT();
                }
                break;
                case 5:
                if (IS_CONTROL_PRESSED( 2, 78 ))
                {
                    CLEAR_HELP();
                    g_U43626 = 1;
                    TERMINATE_THIS_SCRIPT();
                }
                if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                {
                    g_U43626 = 1;
                    CLEAR_HELP();
                    TERMINATE_THIS_SCRIPT();
                }
                if (NOT g_U43561)
                {
                    CLEAR_HELP();
                    g_U43626 = 1;
                    TERMINATE_THIS_SCRIPT();
                }
                break;
            }
        }
        else
        {
            g_U43626 = 1;
            CLEAR_HELP();
            TERMINATE_THIS_SCRIPT();
        }
    }
    return;
}

void sub_45()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void main()
{
    boolean bVar2;

    l_U0 = 1;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    bVar2 = true;
    while (bVar2)
    {
        WAIT( 0 );
        if (NOT g_U12303)
        {
            if (IS_PLAYER_PLAYING( sub_49() ))
            {
                if (NOT (IS_CHAR_DEAD( sub_92() )))
                {
                    if (NOT (IS_THREAD_ACTIVE( g_U815 )))
                    {
                        if ((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) AND (NOT g_U39103))
                        {
                            if ((NOT g_U10974._fU0) AND (NOT IS_AUTO_SAVE_IN_PROGRESS()))
                            {
                                if (sub_211( l_U0 ))
                                {
                                    PRINT_HELP( "LEADER_1" );
                                    bVar2 = false;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    WAIT( 6000 );
    sub_424( l_U0 );
    while (NOT g_U15728[21])
    {
        WAIT( 0 );
    }
    bVar2 = true;
    while (bVar2)
    {
        WAIT( 0 );
        if (NOT g_U12303)
        {
            if (IS_PLAYER_PLAYING( sub_49() ))
            {
                if (NOT (IS_CHAR_DEAD( sub_92() )))
                {
                    if (NOT (IS_THREAD_ACTIVE( g_U815 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            if ((NOT g_U10974._fU0) AND (NOT IS_AUTO_SAVE_IN_PROGRESS()))
                            {
                                if (sub_211( l_U0 ))
                                {
                                    PRINT_HELP( "LEADER_2" );
                                    bVar2 = false;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    WAIT( 6000 );
    sub_424( l_U0 );
    bVar2 = true;
    while (bVar2)
    {
        WAIT( 0 );
        if (NOT g_U12303)
        {
            if (IS_PLAYER_PLAYING( sub_49() ))
            {
                if (NOT (IS_CHAR_DEAD( sub_92() )))
                {
                    if (NOT (IS_THREAD_ACTIVE( g_U815 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            if ((NOT g_U10974._fU0) AND (NOT IS_AUTO_SAVE_IN_PROGRESS()))
                            {
                                if (sub_211( l_U0 ))
                                {
                                    PRINT_HELP( "LEADER_3" );
                                    bVar2 = false;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    WAIT( 6000 );
    sub_424( l_U0 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_49()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_92()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_211(int iParam0)
{
    int iVar3;

    iVar3 = g_U38670[iParam0];
    if (g_U38677 == iParam0)
    {
        return 1;
    }
    if (g_U38679 == iParam0)
    {
        if (iVar3 <= g_U38676)
        {
            return 0;
        }
        g_U38676 = g_U38678;
        g_U38677 = g_U38679;
        g_U38678 = 0;
        g_U38679 = 6;
        return 1;
    }
    if (iVar3 <= g_U38678)
    {
        return 0;
    }
    g_U38678 = iVar3;
    g_U38679 = iParam0;
    return 0;
}

void sub_424(unknown uParam0)
{
    if (NOT (sub_435( uParam0 )))
    {
        return;
    }
    g_U38676 = 0;
    g_U38677 = 6;
    g_U38678 = 0;
    g_U38679 = 6;
    return;
}

boolean sub_435(int iParam0)
{
    return iParam0 == g_U38677;
}

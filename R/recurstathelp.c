void main()
{
    boolean bVar2;
    boolean bVar3;

    l_U0 = 2;
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
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            if ((NOT g_U10974._fU0) AND (NOT IS_AUTO_SAVE_IN_PROGRESS()))
                            {
                                if (sub_202( l_U0 ))
                                {
                                    if (NOT g_U39103)
                                    {
                                        PRINTSTRING( "---------------------> Recurring Lost Stats tutorial: THIS MUST BE AFTER A RELOAD, SO TERMINATE\n" );
                                        g_U15728[11] = 1;
                                        TERMINATE_THIS_SCRIPT();
                                    }
                                    PRINTSTRING( "---------------------> Recurring Lost Stats tutorial: allow to display (because it hasn't reached here after a reload of BG1)\n" );
                                    PRINT_HELP_FOREVER( "RECUR_1" );
                                    bVar2 = false;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    WAIT( 5900 );
    sub_685( l_U0 );
    bVar3 = false;
    bVar2 = true;
    while (bVar2)
    {
        WAIT( 0 );
        bVar3 = false;
        if (IS_HELP_MESSAGE_BEING_DISPLAYED())
        {
            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "RECUR_1" )))
            {
                bVar3 = true;
            }
        }
        if (NOT g_U12303)
        {
            if (IS_PLAYER_PLAYING( sub_49() ))
            {
                if (NOT (IS_CHAR_DEAD( sub_92() )))
                {
                    if (NOT bVar3)
                    {
                        if ((NOT g_U10974._fU0) AND (NOT IS_AUTO_SAVE_IN_PROGRESS()))
                        {
                            if (sub_202( l_U0 ))
                            {
                                PRINT_HELP_FOREVER( "RECUR_2" );
                                bVar2 = false;
                            }
                        }
                    }
                }
            }
        }
    }
    WAIT( 5900 );
    sub_685( l_U0 );
    bVar2 = true;
    while (bVar2)
    {
        WAIT( 0 );
        bVar3 = false;
        if (IS_HELP_MESSAGE_BEING_DISPLAYED())
        {
            if (NOT (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "RECUR_2" )))
            {
                bVar3 = true;
            }
        }
        if (NOT g_U12303)
        {
            if (IS_PLAYER_PLAYING( sub_49() ))
            {
                if (NOT (IS_CHAR_DEAD( sub_92() )))
                {
                    if (NOT bVar3)
                    {
                        if ((NOT g_U10974._fU0) AND (NOT IS_AUTO_SAVE_IN_PROGRESS()))
                        {
                            if (sub_202( l_U0 ))
                            {
                                PRINT_HELP_FOREVER( "RECUR_3" );
                                bVar2 = false;
                            }
                        }
                    }
                }
            }
        }
    }
    WAIT( 6000 );
    sub_685( l_U0 );
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "RECUR_3" ))
    {
        CLEAR_HELP();
    }
    g_U15728[11] = 1;
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

int sub_202(int iParam0)
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

void sub_685(unknown uParam0)
{
    if (NOT (sub_696( uParam0 )))
    {
        return;
    }
    g_U38676 = 0;
    g_U38677 = 6;
    g_U38678 = 0;
    g_U38679 = 6;
    return;
}

boolean sub_696(int iParam0)
{
    return iParam0 == g_U38677;
}

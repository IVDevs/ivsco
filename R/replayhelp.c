void main()
{
    l_U0 = 8;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    while (NOT (sub_23( l_U0 )))
    {
        WAIT( 0 );
    }
    if (g_U15654[16])
    {
        sub_224();
    }
    PRINT_HELP( "REPLAY_1" );
    SETTIMERA( 0 );
    while ((TIMERA() < 7500) AND (sub_273( l_U0 )))
    {
        WAIT( 0 );
        if ((g_U9893._fU12) || (g_U10978))
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "REPLAY_1" ))
            {
                CLEAR_HELP();
            }
            sub_365( l_U0 );
            TERMINATE_THIS_SCRIPT();
        }
    }
    sub_365( l_U0 );
    while (NOT (sub_23( l_U0 )))
    {
        WAIT( 0 );
    }
    PRINT_HELP( "REPLAY_2" );
    SETTIMERA( 0 );
    while ((TIMERA() < 7500) AND (sub_273( l_U0 )))
    {
        WAIT( 0 );
        if ((g_U9893._fU12) || (g_U10978))
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "REPLAY_2" ))
            {
                CLEAR_HELP();
            }
            sub_365( l_U0 );
            TERMINATE_THIS_SCRIPT();
        }
    }
    sub_365( l_U0 );
    while (NOT (sub_23( l_U0 )))
    {
        WAIT( 0 );
    }
    PRINT_HELP( "REPLAY_3" );
    SETTIMERA( 0 );
    while ((TIMERA() < 7500) AND (sub_273( l_U0 )))
    {
        WAIT( 0 );
        if ((g_U9893._fU12) || (g_U10978))
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "REPLAY_3" ))
            {
                CLEAR_HELP();
            }
            sub_365( l_U0 );
            TERMINATE_THIS_SCRIPT();
        }
    }
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "REPLAY_3" ))
    {
        CLEAR_HELP();
    }
    sub_365( l_U0 );
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_23(int iParam0)
{
    int iVar3;

    iVar3 = g_U64522[iParam0];
    if (g_U64539 == iParam0)
    {
        return 1;
    }
    if (g_U64541 == iParam0)
    {
        if (iVar3 <= g_U64538)
        {
            return 0;
        }
        g_U64538 = g_U64540;
        g_U64539 = g_U64541;
        g_U64540 = 0;
        g_U64541 = 16;
        return 1;
    }
    if (iVar3 <= g_U64540)
    {
        return 0;
    }
    g_U64540 = iVar3;
    g_U64541 = iParam0;
    return 0;
}

void sub_224()
{
    PRINT_HELP( "REPLAY_S" );
    SETTIMERA( 0 );
    while ((TIMERA() < 7500) AND (sub_273( l_U0 )))
    {
        WAIT( 0 );
        if ((g_U9893._fU12) || (g_U10978))
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "REPLAY_S" ))
            {
                CLEAR_HELP();
            }
            sub_365( l_U0 );
            TERMINATE_THIS_SCRIPT();
        }
    }
    sub_365( l_U0 );
    TERMINATE_THIS_SCRIPT();
    return;
}

boolean sub_273(int iParam0)
{
    return iParam0 == g_U64539;
}

void sub_365(unknown uParam0)
{
    if (NOT (sub_273( uParam0 )))
    {
        return;
    }
    g_U64538 = 0;
    g_U64539 = 16;
    g_U64540 = 0;
    g_U64541 = 16;
    return;
}

void main()
{
    boolean bVar2;
    boolean bVar3;

    l_U0 = 7;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    bVar2 = true;
    while (bVar2)
    {
        WAIT( 0 );
        if (g_U15654[21])
        {
            TERMINATE_THIS_SCRIPT();
        }
        if (g_U15654[17])
        {
            bVar2 = false;
        }
    }
    bVar3 = false;
    while (NOT bVar3)
    {
        WAIT( 0 );
        if ((NOT g_U10978) AND (NOT g_U9893._fU12))
        {
            if (sub_121( l_U0 ))
            {
                bVar3 = true;
            }
        }
    }
    PRINT_HELP( "TXTMSG_1" );
    SETTIMERA( 0 );
    while ((TIMERA() < 7500) AND (sub_343( l_U0 )))
    {
        WAIT( 0 );
        if ((g_U9893._fU12) || (g_U10978))
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TXTMSG_1" ))
            {
                CLEAR_HELP();
            }
            sub_435( l_U0 );
            TERMINATE_THIS_SCRIPT();
        }
    }
    sub_435( l_U0 );
    bVar3 = false;
    while (NOT bVar3)
    {
        WAIT( 0 );
        if ((NOT g_U10978) AND (NOT g_U9893._fU12))
        {
            if (sub_121( l_U0 ))
            {
                bVar3 = true;
            }
        }
    }
    PRINT_HELP( "TXTMSG_2" );
    SETTIMERA( 0 );
    while ((TIMERA() < 7500) AND (sub_343( l_U0 )))
    {
        WAIT( 0 );
        if ((g_U9893._fU12) || (g_U10978))
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TXTMSG_2" ))
            {
                CLEAR_HELP();
            }
            sub_435( l_U0 );
            TERMINATE_THIS_SCRIPT();
        }
    }
    sub_435( l_U0 );
    bVar3 = false;
    while (NOT bVar3)
    {
        WAIT( 0 );
        if ((NOT g_U10978) AND (NOT g_U9893._fU12))
        {
            if (sub_121( l_U0 ))
            {
                bVar3 = true;
            }
        }
    }
    PRINT_HELP( "TXTMSG_3" );
    SETTIMERA( 0 );
    while ((TIMERA() < 7500) AND (sub_343( l_U0 )))
    {
        WAIT( 0 );
        if ((g_U9893._fU12) || (g_U10978))
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TXTMSG_3" ))
            {
                CLEAR_HELP();
            }
            sub_435( l_U0 );
            TERMINATE_THIS_SCRIPT();
        }
    }
    sub_435( l_U0 );
    bVar3 = false;
    while (NOT bVar3)
    {
        WAIT( 0 );
        if ((NOT g_U10978) AND (NOT g_U9893._fU12))
        {
            if (sub_121( l_U0 ))
            {
                bVar3 = true;
            }
        }
    }
    PRINT_HELP( "TXTMSG_4" );
    SETTIMERA( 0 );
    while ((TIMERA() < 7500) AND (sub_343( l_U0 )))
    {
        WAIT( 0 );
        if ((g_U9893._fU12) || (g_U10978))
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TXTMSG_4" ))
            {
                CLEAR_HELP();
            }
            sub_435( l_U0 );
            TERMINATE_THIS_SCRIPT();
        }
    }
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TXTMSG_4" ))
    {
        CLEAR_HELP();
    }
    sub_435( l_U0 );
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_121(int iParam0)
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

boolean sub_343(int iParam0)
{
    return iParam0 == g_U64539;
}

void sub_435(unknown uParam0)
{
    if (NOT (sub_343( uParam0 )))
    {
        return;
    }
    g_U64538 = 0;
    g_U64539 = 16;
    g_U64540 = 0;
    g_U64541 = 16;
    return;
}

void main()
{
    boolean bVar2;

    l_U0 = 12;
    l_U1 = 0;
    l_U2 = 0;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    l_U1 = 0;
    l_U2 = 0;
    bVar2 = true;
    while (bVar2)
    {
        WAIT( 0 );
        sub_54();
        sub_846();
        if ((l_U1) AND (l_U2))
        {
            bVar2 = false;
        }
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_54()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = GET_TIME_SINCE_LAST_ARREST();
    if (l_U1)
    {
        return;
    }
    if (iVar2 == -1)
    {
        return;
    }
    if (iVar2 > 10000)
    {
        return;
    }
    while (iVar2 < 10000)
    {
        WAIT( 0 );
        iVar2 = GET_TIME_SINCE_LAST_ARREST();
    }
    while (NOT (sub_145( l_U0 )))
    {
        WAIT( 0 );
    }
    PRINT_HELP( "BUST_1" );
    SETTIMERA( 0 );
    while ((TIMERA() < 7500) AND (sub_371( l_U0 )))
    {
        WAIT( 0 );
        iVar2 = GET_TIME_SINCE_LAST_ARREST();
        iVar3 = GET_TIME_SINCE_LAST_DEATH();
        iVar4 = 0;
        if (NOT (iVar3 == -1))
        {
            if (iVar3 < 10000)
            {
                iVar4 = 1;
            }
        }
        if ((((g_U9893._fU12) || (g_U10978)) || (iVar2 < 10000)) || (iVar4))
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BUST_1" ))
            {
                CLEAR_HELP();
            }
            sub_516( l_U0 );
            return;
        }
    }
    sub_516( l_U0 );
    l_U1 = 1;
    while (NOT (sub_145( l_U0 )))
    {
        WAIT( 0 );
    }
    PRINT_HELP( "BUST_2" );
    SETTIMERA( 0 );
    while ((TIMERA() < 7500) AND (sub_371( l_U0 )))
    {
        WAIT( 0 );
        iVar2 = GET_TIME_SINCE_LAST_ARREST();
        iVar3 = GET_TIME_SINCE_LAST_DEATH();
        iVar4 = 0;
        if (NOT (iVar3 == -1))
        {
            if (iVar3 < 10000)
            {
                iVar4 = 1;
            }
        }
        if ((((g_U9893._fU12) || (g_U10978)) || (iVar2 < 10000)) || (iVar4))
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BUST_2" ))
            {
                CLEAR_HELP();
            }
            sub_516( l_U0 );
            return;
        }
    }
    sub_516( l_U0 );
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "BUST_2" ))
    {
        CLEAR_HELP();
    }
    return;
}

int sub_145(int iParam0)
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

boolean sub_371(int iParam0)
{
    return iParam0 == g_U64539;
}

void sub_516(unknown uParam0)
{
    if (NOT (sub_371( uParam0 )))
    {
        return;
    }
    g_U64538 = 0;
    g_U64539 = 16;
    g_U64540 = 0;
    g_U64541 = 16;
    return;
}

void sub_846()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = GET_TIME_SINCE_LAST_DEATH();
    if (l_U2)
    {
        return;
    }
    if (iVar2 == -1)
    {
        return;
    }
    if (iVar2 > 10000)
    {
        return;
    }
    while (iVar2 < 10000)
    {
        WAIT( 0 );
        iVar2 = GET_TIME_SINCE_LAST_DEATH();
    }
    while (NOT (sub_145( l_U0 )))
    {
        WAIT( 0 );
    }
    PRINT_HELP( "HOSP_1" );
    SETTIMERA( 0 );
    while ((TIMERA() < 7500) AND (sub_371( l_U0 )))
    {
        WAIT( 0 );
        iVar3 = GET_TIME_SINCE_LAST_ARREST();
        iVar2 = GET_TIME_SINCE_LAST_DEATH();
        iVar4 = 0;
        if (NOT (iVar3 == -1))
        {
            if (iVar3 < 10000)
            {
                iVar4 = 1;
            }
        }
        if ((((g_U9893._fU12) || (g_U10978)) || (iVar2 < 10000)) || (iVar4))
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HOSP_1" ))
            {
                CLEAR_HELP();
            }
            sub_516( l_U0 );
            return;
        }
    }
    sub_516( l_U0 );
    l_U2 = 1;
    while (NOT (sub_145( l_U0 )))
    {
        WAIT( 0 );
    }
    PRINT_HELP( "HOSP_2" );
    SETTIMERA( 0 );
    while ((TIMERA() < 7500) AND (sub_371( l_U0 )))
    {
        WAIT( 0 );
        iVar3 = GET_TIME_SINCE_LAST_ARREST();
        iVar2 = GET_TIME_SINCE_LAST_DEATH();
        iVar4 = 0;
        if (NOT (iVar3 == -1))
        {
            if (iVar3 < 10000)
            {
                iVar4 = 1;
            }
        }
        if ((((g_U9893._fU12) || (g_U10978)) || (iVar2 < 10000)) || (iVar4))
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HOSP_2" ))
            {
                CLEAR_HELP();
            }
            sub_516( l_U0 );
            return;
        }
    }
    sub_516( l_U0 );
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "HOSP_2" ))
    {
        CLEAR_HELP();
    }
    return;
}

void main()
{
    string sVar2;

    l_U0 = 0;
    l_U1 = 1;
    l_U2 = 3;
    l_U8 = 0;
    l_U25 = -1;
    l_U29 = 0;
    l_U30 = 1;
    l_U31 = 1;
    l_U32 = 0;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    while (NOT (sub_55( 1 )))
    {
        WAIT( 1000 );
    }
    WAIT( 2000 );
    while (NOT (sub_119( l_U32 )))
    {
        WAIT( 0 );
    }
    PRINT_HELP( "DIAL1" );
    SETTIMERA( 0 );
    while ((TIMERA() < 7500) AND (sub_346( l_U32 )))
    {
        WAIT( 0 );
        if ((g_U9893._fU12) || (g_U10978))
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "DIAL1" ))
            {
                CLEAR_HELP();
            }
            sub_437( l_U32 );
            TERMINATE_THIS_SCRIPT();
        }
    }
    sub_437( l_U32 );
    while (NOT (sub_119( l_U32 )))
    {
        WAIT( 0 );
    }
    PRINT_HELP( "DIAL2" );
    SETTIMERA( 0 );
    while ((TIMERA() < 7500) AND (sub_346( l_U32 )))
    {
        WAIT( 0 );
        if ((g_U9893._fU12) || (g_U10978))
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "DIAL2" ))
            {
                CLEAR_HELP();
            }
            sub_437( l_U32 );
            TERMINATE_THIS_SCRIPT();
        }
    }
    sub_437( l_U32 );
    while (NOT (sub_119( l_U32 )))
    {
        WAIT( 0 );
    }
    sVar2 = "DIAL3";
    if (((# -NULL-0xc27c84()) == 0) AND ((# -NULL-0xc27bfa()) == 0))
    {
        sVar2 = "DIAL3ps3";
    }
    PRINT_HELP( sVar2 );
    SETTIMERA( 0 );
    while ((TIMERA() < 7500) AND (sub_346( l_U32 )))
    {
        WAIT( 0 );
        if ((g_U9893._fU12) || (g_U10978))
        {
            if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( sVar2 ))
            {
                CLEAR_HELP();
            }
            sub_437( l_U32 );
            TERMINATE_THIS_SCRIPT();
        }
    }
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( sVar2 ))
    {
        CLEAR_HELP();
    }
    sub_437( l_U32 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_55(unknown uParam0)
{
    return g_U15807[uParam0]._fU16;
}

int sub_119(int iParam0)
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

boolean sub_346(int iParam0)
{
    return iParam0 == g_U64539;
}

void sub_437(unknown uParam0)
{
    if (NOT (sub_346( uParam0 )))
    {
        return;
    }
    g_U64538 = 0;
    g_U64539 = 16;
    g_U64540 = 0;
    g_U64541 = 16;
    return;
}

void main()
{
    boolean bVar2;
    boolean bVar3;

    l_U0 = 11;
    THIS_SCRIPT_SHOULD_BE_SAVED();
    g_U9190 = 0;
    bVar2 = true;
    while (bVar2)
    {
        sub_36();
        bVar2 = false;
        SETTIMERA( 0 );
        bVar3 = true;
        while (bVar3)
        {
            WAIT( 0 );
            if (sub_324())
            {
                bVar3 = false;
            }
            else if (TIMERA() > 30000)
            {
                bVar3 = false;
                bVar2 = true;
            }
        }
    }
    PRINT_HELP( "VL2_24" );
    SETTIMERA( 0 );
    while ((TIMERA() < 7500) AND (sub_649( l_U0 )))
    {
        WAIT( 0 );
    }
    if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "VL2_24" ))
    {
        CLEAR_HELP();
    }
    sub_726( l_U0 );
    g_U9190 = 1;
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_36()
{
    boolean bVar2;

    bVar2 = true;
    while (bVar2)
    {
        WAIT( 0 );
        if (sub_63())
        {
            bVar2 = false;
        }
        if (bVar2)
        {
            sub_248();
        }
    }
    return;
}

int sub_63()
{
    if (NOT (IS_PLAYER_PLAYING( sub_72() )))
    {
        return 0;
    }
    if ((NOT g_U10978) AND (NOT sub_126()))
    {
        if (IS_CHAR_TRYING_TO_ENTER_A_LOCKED_CAR( sub_167() ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_72()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_126()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

void sub_167()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_248()
{
    if (g_U9190)
    {
        TERMINATE_THIS_SCRIPT();
    }
    return;
}

int sub_324()
{
    if (IS_CHAR_DEAD( sub_167() ))
    {
        return 0;
    }
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_167() ))
    {
        if (sub_374( l_U0 ))
        {
            return 1;
        }
    }
    sub_248();
    return 0;
}

int sub_374(int iParam0)
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

boolean sub_649(int iParam0)
{
    return iParam0 == g_U64539;
}

void sub_726(unknown uParam0)
{
    if (NOT (sub_649( uParam0 )))
    {
        return;
    }
    g_U64538 = 0;
    g_U64539 = 16;
    g_U64540 = 0;
    g_U64541 = 16;
    return;
}

void main()
{
    boolean bVar2;
    boolean bVar3;

    bVar2 = true;
    while (bVar2)
    {
        WAIT( 0 );
        if (g_U15811[2])
        {
            bVar2 = false;
        }
    }
    bVar3 = false;
    while (NOT bVar3)
    {
        WAIT( 0 );
        if ((NOT g_U12379) AND (NOT (IS_BIT_SET( g_U10938._fU0, 4 ))))
        {
            if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
            {
                bVar3 = true;
            }
        }
    }
    WAIT( 0 );
    PRINT_HELP( "TXTMSG_1" );
    WAIT( 0 );
    SETTIMERA( 0 );
    while ((TIMERA() < 7500) AND (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TXTMSG_1" )))
    {
        WAIT( 0 );
    }
    bVar3 = false;
    while (NOT bVar3)
    {
        WAIT( 0 );
        if ((NOT g_U12379) AND (NOT (IS_BIT_SET( g_U10938._fU0, 4 ))))
        {
            if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
            {
                bVar3 = true;
            }
        }
        else
        {
            CLEAR_HELP();
            TERMINATE_THIS_SCRIPT();
        }
    }
    WAIT( 0 );
    PRINT_HELP( "TXTMSG_2" );
    WAIT( 0 );
    SETTIMERA( 0 );
    while ((TIMERA() < 7500) AND (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TXTMSG_2" )))
    {
        WAIT( 0 );
    }
    bVar3 = false;
    while (NOT bVar3)
    {
        WAIT( 0 );
        if ((NOT g_U12379) AND (NOT (IS_BIT_SET( g_U10938._fU0, 4 ))))
        {
            if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
            {
                bVar3 = true;
            }
        }
        else
        {
            CLEAR_HELP();
            TERMINATE_THIS_SCRIPT();
        }
    }
    WAIT( 0 );
    PRINT_HELP( "TXTMSG_3" );
    WAIT( 0 );
    SETTIMERA( 0 );
    while ((TIMERA() < 7500) AND (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TXTMSG_3" )))
    {
        WAIT( 0 );
    }
    bVar3 = false;
    while (NOT bVar3)
    {
        WAIT( 0 );
        if ((NOT g_U12379) AND (NOT (IS_BIT_SET( g_U10938._fU0, 4 ))))
        {
            if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
            {
                bVar3 = true;
            }
        }
        else
        {
            CLEAR_HELP();
            TERMINATE_THIS_SCRIPT();
        }
    }
    WAIT( 0 );
    PRINT_HELP( "TXTMSG_4" );
    WAIT( 0 );
    SETTIMERA( 0 );
    while ((TIMERA() < 7500) AND (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( "TXTMSG_4" )))
    {
        WAIT( 0 );
    }
    CLEAR_HELP();
    TERMINATE_THIS_SCRIPT();
    return;
}

void main()
{
    l_U0 = 0;
    l_U1 = 0;
    l_U2 = 0;
    l_U3 = 0;
    l_U4 = 1;
    l_U70 = 6;
    l_U108 = nil;
    l_U121 = nil;
    l_U139 = 1;
    l_U174 = nil;
    l_U194 = 1;
    l_U270 = 6;
    l_U279 = "BOGT_BoxDrop";
    l_U280 = "BOGT_Box_TickDrop";
    l_U345 = 0.63600000;
    l_U346 = 0.37600000;
    l_U395 = 0.05200000;
    l_U396 = 0.35300000;
    l_U397 = 0.30000000;
    l_U398 = 0.37200000;
    l_U399 = 0.37300000;
    l_U400 = 0.38700000;
    l_U401 = 0.44400000;
    l_U402 = 0.03750000;
    l_U403 = 0.36900000;
    l_U404 = 0.62350000;
    l_U405 = 0.60800000;
    l_U406 = {0.24300000, 0.46700000, 0.00000000};
    l_U409 = {0.23100000, 0.43500000, 0.00000000};
    l_U412 = {0.23100000, 0.43500000, 0.00000000};
    l_U415 = {0.31920000, 0.65250000, 0.00000000};
    l_U418 = {0.31920000, 0.65250000, 0.00000000};
    l_U421 = {0.24300000, 0.46700000, 0.00000000};
    l_U424 = {0.50000000, 1.10000000, 0.00000000};
    l_U427 = {0.31920000, 0.65250000, 0.00000000};
    l_U430 = {0.18225000, 0.35025000, 0.00000000};
    l_U433 = 0.30000000;
    l_U434 = 0.37000000;
    l_U435 = 0.56200000;
    l_U436 = 0.40100000;
    l_U437 = 0.30000000;
    l_U438 = 0.37000000;
    l_U439 = 0.69700000;
    l_U440 = 0.40100000;
    l_U441 = 0.30000000;
    l_U442 = 0.37000000;
    l_U443 = 0.66500000;
    l_U444 = 0.40100000;
    l_U445 = 0.32500000;
    l_U446 = 0.62500000;
    l_U447 = 0.00800000;
    l_U448 = 0.49700000;
    l_U449 = 0.52500000;
    l_U450 = 0.49700000;
    l_U451 = 0.51800000;
    l_U452 = 1;
    l_U453 = 0;
    l_U454 = {0.50000000, 0.50000000, 0};
    l_U457 = 0.20000000;
    l_U458 = 0.20000000;
    l_U502 = 0;
    l_U503 = 0;
    l_U515 = 0;
    l_U519 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        g_U43588 = 0;
        g_U43628 = 0;
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "MissionStatTracker" );
        TERMINATE_THIS_SCRIPT();
    }
    while (true)
    {
        WAIT( 0 );
        if ((FLOOR( TO_FLOAT( sub_783() / 1000 ) )) <= ((sub_1648( g_U43137 )) / 1000))
        {
            g_U43563 = 1;
        }
        else
        {
            g_U43563 = 0;
        }
        if (g_U43599 == 1)
        {
            g_U43611 = sub_1755();
            g_U43599 = 0;
        }
        if (g_U12379 == 1)
        {
            if (g_U43133 == 1)
            {
                if (g_U43624 == 0)
                {
                    if ((FLOOR( (TO_FLOAT( sub_783() )) / 1000 )) < (FLOOR( (TO_FLOAT( g_U43611 )) / 1000 )))
                    {
                        g_U43574 = 1;
                    }
                    else
                    {
                        g_U43574 = 0;
                    }
                }
                else
                {
                    g_U43574 = 0;
                }
            }
            else
            {
                g_U43574 = 0;
            }
        }
        sub_2633();
    }
    return;
}

void sub_783()
{
    if (g_U43496 == 1)
    {
        GET_GAME_TIMER( ref g_U43502 );
        g_U43503 = g_U43502 - g_U43501;
        if (g_U43498 == 1)
        {
            l_U510 = 0;
            GET_GAME_TIMER( ref g_U43508 );
            g_U43509 = g_U43508 - g_U43507;
        }
        else if (l_U510 == 0)
        {
            l_U509 += g_U43509;
            l_U510 = 1;
        }
        GET_GAME_TIMER( ref g_U43507 );;
        g_U43503 -= l_U509;
        if (g_U43503 < 0)
        {
            g_U43503 = 0;
        }
        sub_992();
    }
    if (g_U43503 > 18000000)
    {
        g_U43503 = 18000000;
    }
    if (g_U43503 < 0)
    {
        g_U43503 = 0;
    }
    return g_U43503;
}

void sub_992()
{
    if (sub_1001())
    {
        g_U43498 = 1;
    }
    else
    {
        g_U43498 = 0;
    }
    return;
}

int sub_1001()
{
    unknown uVar2;

    if (HAS_CUTSCENE_FINISHED() == 0)
    {
        l_U504 = 1;
        return 1;
    }
    else
    {
        l_U504 = 0;
    }
    GET_SCRIPT_CAM( ref uVar2 );
    if (DOES_CAM_EXIST( uVar2 ))
    {
        if (((IS_CAM_ACTIVE( uVar2 )) || (IS_CAM_PROPAGATING( uVar2 ))) AND (NOT (sub_1127( sub_1086() ))))
        {
            l_U505 = 1;
            return 1;
        }
    }
    else
    {
        l_U505 = 0;
    }
    if (IS_PAUSE_MENU_ACTIVE())
    {
        l_U506 = 1;
        return 1;
    }
    else
    {
        l_U506 = 0;
    }
    if (g_U9583 == 1)
    {
        l_U507 = 1;
        return 1;
    }
    else
    {
        l_U507 = 0;
    }
    if (IS_SCREEN_FADED_OUT())
    {
        l_U508 = 1;
        return 1;
    }
    else
    {
        l_U508 = 0;
    }
    return 0;
}

void sub_1086()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_1127(int iParam0)
{
    unknown uVar3;
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( iParam0 )))
    {
        if (IS_CHAR_IN_ANY_CAR( iParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( iParam0, ref uVar3 );
            if (IS_VEH_DRIVEABLE( uVar3 ))
            {
                if (sub_1191( uVar3 ))
                {
                    GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar3, ref iVar5 );
                    if (iVar5 == 3)
                    {
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar3, 1 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar3, 1, ref iVar4 );
                            if (iVar4 == iParam0)
                            {
                                return 1;
                            }
                        }
                        if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar3, 2 )))
                        {
                            GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar3, 2, ref iVar4 );
                            if (iVar4 == iParam0)
                            {
                                return 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_1191(int iParam0)
{
    if ((((IS_CAR_MODEL( iParam0, -956048545 )) || (IS_CAR_MODEL( iParam0, 1884962369 ))) || (IS_CAR_MODEL( iParam0, 1208856469 ))) || (iParam0 == g_U2687))
    {
        return 1;
    }
    return 0;
}

void sub_1648(unknown uParam0)
{
    int iVar3;
    int Result;
    unknown uVar5;

    iVar3 = g_U43138[uParam0]._fU0 * 60000;
    Result = (g_U43138[uParam0]._fU4 * 1000) + iVar3;
    return Result;
}

int sub_1755()
{
    if (g_U43137 == 0)
    {
        return GET_INT_STAT( 474 );
    }
    if (g_U43137 == 1)
    {
        return GET_INT_STAT( 478 );
    }
    if (g_U43137 == 2)
    {
        return GET_INT_STAT( 483 );
    }
    if (g_U43137 == 3)
    {
        return GET_INT_STAT( 489 );
    }
    if (g_U43137 == 21)
    {
        return GET_INT_STAT( 577 );
    }
    if (g_U43137 == 15)
    {
        return GET_INT_STAT( 543 );
    }
    if (g_U43137 == 16)
    {
        return GET_INT_STAT( 549 );
    }
    if (g_U43137 == 17)
    {
        return GET_INT_STAT( 556 );
    }
    if (g_U43137 == 12)
    {
        return GET_INT_STAT( 524 );
    }
    if (g_U43137 == 13)
    {
        return GET_INT_STAT( 532 );
    }
    if (g_U43137 == 19)
    {
        return GET_INT_STAT( 567 );
    }
    if (g_U43137 == 20)
    {
        return GET_INT_STAT( 572 );
    }
    if (g_U43137 == 5)
    {
        return GET_INT_STAT( 492 );
    }
    if (g_U43137 == 4)
    {
        return GET_INT_STAT( 497 );
    }
    if (g_U43137 == 6)
    {
        return GET_INT_STAT( 501 );
    }
    if (g_U43137 == 7)
    {
        return GET_INT_STAT( 505 );
    }
    if (g_U43137 == 8)
    {
        return GET_INT_STAT( 510 );
    }
    if (g_U43137 == 9)
    {
        return GET_INT_STAT( 610 );
    }
    if (g_U43137 == 14)
    {
        return GET_INT_STAT( 537 );
    }
    if (g_U43137 == 22)
    {
        return GET_INT_STAT( 582 );
    }
    if (g_U43137 == 23)
    {
        return GET_INT_STAT( 590 );
    }
    if (g_U43137 == 24)
    {
        return GET_INT_STAT( 598 );
    }
    if (g_U43137 == 18)
    {
        return GET_INT_STAT( 562 );
    }
    if (g_U43137 == 10)
    {
        return GET_INT_STAT( 515 );
    }
    if (g_U43137 == 25)
    {
        return GET_INT_STAT( 604 );
    }
    if (g_U43137 == 11)
    {
        return GET_INT_STAT( 519 );
    }
    return 0;
}

void sub_2633()
{
    g_U43550 = sub_2649( g_U43503 );
    g_U43551 = sub_2712( g_U43503 );
    g_U43552 = sub_2769( g_U43503 );
    g_U43553 = sub_2818( g_U43503 );
    return;
}

void sub_2649(int iParam0)
{
    int iVar3;
    int iVar4;
    int Result;

    iVar3 = iParam0 / 1000;
    iVar4 = iVar3 / 60;
    Result = iVar4 / 60;
    Result = Result mod 24;
    return Result;
}

void sub_2712(int iParam0)
{
    int iVar3;
    int Result;

    iVar3 = iParam0 / 1000;
    Result = iVar3 / 60;
    Result = Result mod 60;
    return Result;
}

void sub_2769(int iParam0)
{
    int Result;

    Result = iParam0 / 1000;
    Result = Result mod 60;
    return Result;
}

int sub_2818(int iParam0)
{
    return iParam0 mod 1000;
}

void main()
{
    l_U4 = 0;
    l_U5 = 1;
    l_U6 = 3;
    l_U8 = 0;
    l_U25 = -1;
    l_U29 = 0;
    l_U30 = 1;
    l_U31 = 1;
    l_U39 = 150.00000000;
    l_U129 = 0;
    l_U130 = 150.00000000;
    l_U180 = 0;
    l_U481 = 0;
    l_U485 = 0.00000000;
    l_U487 = 0;
    l_U488 = 0;
    l_U490 = 0;
    l_U491 = 0;
    l_U492 = 0;
    l_U493 = 0;
    l_U494 = 0;
    l_U495 = 0;
    l_U496 = 1;
    l_U497 = 0;
    l_U498 = 0;
    l_U499 = 0;
    l_U500 = 0;
    l_U501 = 0;
    l_U502 = 1;
    l_U503 = 0;
    l_U504 = 0;
    l_U505 = 0;
    l_U538 = 0;
    l_U539 = -1;
    l_U540 = 1;
    l_U544 = 0;
    l_U545 = "NONE";
    l_U572 = 0;
    l_U573 = 0;
    l_U583 = 0;
    l_U584 = 1;
    l_U585 = 2;
    l_U592 = 0;
    l_U593 = 999999.90000000;
    l_U594 = 0.00000000;
    l_U595 = 0.26000000;
    l_U596 = 0.65000000;
    l_U598 = 5000.00000000;
    l_U599 = 5000.00000000;
    l_U601 = 0.00000000;
    l_U603 = 0;
    l_U614 = "amb@smoking_spliff";
    l_U615 = "create_spliff";
    l_U616 = "partial_smoke";
    l_U617 = "partial_smoke_car";
    l_U618 = {0.13700000, 0.03100000, 0.03500000};
    l_U621 = {2.21400000, -0.12100000, 0.00000000};
    l_U624 = {0.00000000, 0.00000000, 0.13600000};
    l_U627 = {0.00000000, 0.00000000, 0.00000000};
    l_U630 = {-0.48300000, -0.28500000, 0.62000000};
    l_U633 = {-0.48300000, -1.30000000, 0.62000000};
    l_U636 = {0.00000000, 0.00000000, 90.00000000};
    l_U639 = {0.00000000, -0.28500000, 0.50000000};
    l_U642 = {0.00000000, 0.00000000, 0.00000000};
    l_U664 = 0;
    l_U665 = 1;
    l_U666 = 2;
    l_U667 = "missrandom_idle";
    l_U668 = "female_ilde";
    l_U669 = "female_ilde2";
    l_U670 = 1;
    l_U671 = 0;
    l_U672 = 0;
    l_U702 = 54;
    l_U703 = 0;
    l_U704 = 0;
    l_U705 = 0;
    l_U706 = 0;
    l_U707 = 0;
    l_U708 = 12;
    l_U709 = 0;
    l_U714 = 0;
    l_U716 = -1;
    l_U717 = 4;
    l_U749 = 0;
    l_U750 = 0;
    l_U755 = 0;
    l_U756 = "";
    l_U757 = 0;
    l_U770 = 0;
    l_U774 = 0;
    l_U775 = 1;
    l_U776 = 0;
    l_U777 = 0;
    l_U778 = 0;
    l_U779 = 0;
    l_U780 = l_U794;
    if (g_U22274[l_U780]._fU500._fU176)
    {
        if (g_U26753)
        {
            sub_973( "HospitalPickUp: g_doingHospitalPickup already TRUE" );
        }
        g_U26753 = 1;
    }
    sub_1142();
    while (NOT l_U709)
    {
        if (NOT sub_3407())
        {
            sub_973( "HospitalPickup: Perform_Mission_Loop() returned FALSE unexpectedly" );
        }
        WAIT( 0 );
    }
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_34149();
    }
    WAIT( 0 );
    while (sub_3407())
    {
        WAIT( 0 );
    }
    sub_34149();
    sub_973( "HOSPITAL PICKUP: should never reach ENDSCRIPT" );
    return;
}

void sub_973(unknown uParam0)
{
    sub_1011( "ERROR: HOSPITAL PICKUP: ", uParam0 );
    return;
}

void sub_1011(unknown uParam0, unknown uParam1)
{
    SCRIPT_ASSERT( "ERROR: Press IGNORE button and look at console window for details" );
    PRINTSTRING( uParam0 );
    PRINTSTRING( uParam1 );
    PRINTNL();
    return;
}

void sub_1142()
{
    unknown uVar2;
    unknown uVar3;
    int iVar4;

    # -sub_C1FFC0-0xc214c8( 0, ref l_U506 );
    sub_1163();
    sub_1371();
    sub_1395();
    l_U703 = 1;
    l_U704 = 0;
    if (NOT g_U22274[l_U780]._fU500._fU176)
    {
        l_U703 = 7;
        return;
    }
    uVar2 = g_U22274[l_U780]._fU500._fU28;
    uVar3 = g_U10090[uVar2]._fU16;
    sub_1674( l_U782._fU0, l_U782._fU4, l_U782._fU8, uVar3 );
    sub_1722( g_U26415[l_U780] );
    sub_1753( 1 );
    sub_1936();
    sub_2014( 0, ref g_U22274[l_U780]._fU500._fU36 );
    sub_2014( 1, ref g_U22274[l_U780]._fU500._fU68 );
    sub_2014( 2, ref g_U22274[l_U780]._fU500._fU52 );
    iVar4 = 1;
    if (g_U15654[6])
    {
        sub_2133( ref l_U789, 16, 0, iVar4 );
    }
    else
    {
        sub_2133( ref l_U789, 2, 0, iVar4 );
    }
    l_U495 = 1;
    sub_2779( ref g_U22274[l_U780]._fU500._fU84 );
    sub_2942( 0, sub_2893(), "NIKO", 0 );
    l_U532 = {g_U22274[l_U780]._fU500._fU116};
    l_U536 = g_U22274[l_U780]._fU500._fU132;
    l_U537 = l_U780;
    sub_3177( l_U545, l_U545, l_U545, l_U545 );
    return;
}

void sub_1163()
{
    l_U703 = 0;
    l_U704 = 0;
    l_U706 = 0;
    l_U707 = 0;
    l_U708 = 12;
    l_U709 = 0;
    sub_1208();
    return;
}

void sub_1208()
{
    l_U723._fU0 = 1;
    l_U723._fU4 = 0;
    l_U723._fU8 = 0;
    l_U723._fU12 = 0;
    l_U723._fU16 = 1;
    l_U723._fU20 = 0;
    l_U723._fU24 = 0;
    l_U723._fU28 = 0;
    l_U723._fU32 = 0;
    l_U723._fU36 = 0;
    l_U723._fU40 = 0;
    l_U723._fU44 = 0;
    l_U723._fU48 = 0;
    l_U723._fU52 = 64537;
    l_U723._fU56 = 64537;
    return;
}

void sub_1371()
{
    l_U715 = nil;
    return;
}

void sub_1395()
{
    l_U781 = nil;
    l_U751 = nil;
    sub_1418();
    l_U788 = nil;
    sub_1482();
    return;
}

void sub_1418()
{
    unknown uVar2;

    uVar2 = g_U22274[l_U780]._fU500._fU28;
    l_U782 = {g_U10090[uVar2]._fU4};
    return;
}

void sub_1482()
{
    unknown uVar2;

    uVar2 = g_U22274[l_U780]._fU500._fU32;
    l_U785 = {g_U9731[uVar2]._fU4};
    l_U752 = {g_U9731[uVar2]._fU16};
    return;
}

void sub_1674(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U482 = {uParam0, uParam1, uParam2};
    l_U485 = uParam3;
    return;
}

void sub_1722(unknown uParam0)
{
    l_U488 = 1;
    l_U489 = uParam0;
    return;
}

void sub_1753(boolean bParam0)
{
    int iVar3;

    if (NOT (DOES_BLIP_EXIST( l_U486 )))
    {
        ADD_BLIP_FOR_CONTACT( l_U482._fU0, l_U482._fU4, l_U482._fU8, ref l_U486 );
        CHANGE_BLIP_DISPLAY( l_U486, 2 );
        CHANGE_BLIP_PRIORITY( l_U486, 1 );
        if (l_U488)
        {
            CHANGE_BLIP_SPRITE( l_U486, l_U489 );
            if (bParam0)
            {
                iVar3 = 0;
                GET_GAME_TIMER( ref iVar3 );
                CHANGE_BLIP_PRIORITY( l_U486, l_U6 );
                FLASH_BLIP( l_U486, 1 );
                l_U503 = iVar3 + 10000;
                l_U504 = 1;
            }
        }
    }
    return;
}

void sub_1936()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        StrCopy( ref l_U507[I], "", 16 );
    }
    return;
}

void sub_2014(int iParam0, unknown uParam1)
{
    if (iParam0 >= 3)
    {
        return;
    }
    StrCopy( ref l_U507[iParam0], uParam1, 16 );
    return;
}

void sub_2133(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_2186( iParam0, uParam1, uParam2 );
    if (NOT bParam3)
    {
        return;
    }
    if (NOT ((ref iParam0->_fU8->_fU4) == 0))
    {
        if ((ref iParam0->_fU8->_fU4) <= 15)
        {
            ref iParam0->_fU8->_fU4 = 15;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 30)
        {
            ref iParam0->_fU8->_fU4 = 30;
        }
        else if ((ref iParam0->_fU8->_fU4) <= 45)
        {
            ref iParam0->_fU8->_fU4 = 45;
        }
        else
        {
            ref iParam0->_fU8->_fU4 = 0;
            ref iParam0->_fU8->_fU0++;
        };;;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_2318( iParam0 + 0 );
    }
    return;
}

void sub_2186(int iParam0, int iParam1, int iParam2)
{
    ref iParam0->_fU8->_fU4 += iParam2;
    ref iParam0->_fU8->_fU0 += iParam1;
    while ((ref iParam0->_fU8->_fU4) >= 60)
    {
        ref iParam0->_fU8->_fU4 -= 60;
        ref iParam0->_fU8->_fU0++;
    }
    while ((ref iParam0->_fU8->_fU0) >= 24)
    {
        ref iParam0->_fU8->_fU0 -= 24;
        sub_2318( iParam0 + 0 );
    }
    return;
}

void sub_2318(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_2349( iParam0->_fU4 )))
    {
        iParam0->_fU0 = 1;
        iParam0->_fU4++;
        if (iParam0->_fU4 > 12)
        {
            iParam0->_fU4 = 1;
        }
    }
    return;
}

int sub_2349(unknown uParam0)
{
    switch (uParam0)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: return 31;
        case 4:
        case 6:
        case 9:
        case 11: return 30;
        case 2: return 28;
    }
    return 30;
}

void sub_2779(unknown uParam0)
{
    StrCopy( ref l_U181._fU0, uParam0, 16 );
    sub_2798();
    return;
}

void sub_2798()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U181._fU16[I]._fU0 = nil;
        StrCopy( ref l_U181._fU16[I]._fU4, "", 32 );
        l_U181._fU344[I] = 0;
    }
    return;
}

void sub_2893()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2942(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U181._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U181._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_3026( "\n PED NUMBER ", uParam0 );
    sub_3066( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_3026(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3066(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3177(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    StrCopy( ref l_U546._fU0, uParam0, 32 );
    StrCopy( ref l_U546._fU32, uParam1, 16 );
    StrCopy( ref l_U546._fU48, uParam2, 16 );
    StrCopy( ref l_U546._fU64, uParam3, 16 );
    l_U546._fU80 = 0;
    l_U546._fU84 = 0;
    l_U546._fU88 = 0;
    l_U546._fU92 = 0;
    l_U546._fU100 = 1;
    l_U546._fU96 = 1;
    if (COMPARE_STRING( uParam0, l_U545 ))
    {
        l_U546._fU96 = 0;
    }
    sub_3321();
    return;
}

void sub_3321()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 10000, 20000, ref iVar3 );
    l_U546._fU84 = iVar2 + iVar3;
    return;
}

int sub_3407()
{
    boolean bVar2;

    l_U706 = 0;
    l_U707 = 0;
    l_U708 = 12;
    switch (l_U703)
    {
        case 0:
        sub_973( "Mission Loop: Stage should never be 'Initialise'" );
        break;
        case 1:
        sub_3547();
        break;
        case 5:
        sub_16733();
        break;
        case 6:
        l_U706 = 1;
        break;
        case 7:
        sub_28875();
        break;
        default:
        sub_973( "Mission_Loop: Unknown Stage ID" );
        return 0;
    }
    bVar2 = sub_31793( l_U781 );
    if (bVar2)
    {
        l_U707 = 1;
        l_U708 = 7;
        sub_32100();
        return 0;
    }
    sub_34769( l_U781 );
    if (l_U706)
    {
        sub_46979();
        return 0;
    }
    if (l_U707)
    {
        sub_32100();
        return 0;
    }
    return 1;
}

void sub_3547()
{
    l_U722 = 0;
    if (NOT (l_U781 == nil))
    {
        if (IS_CHAR_INJURED( l_U781 ))
        {
            l_U707 = 1;
            l_U708 = 0;
            return;
        }
    }
    if (sub_3614( l_U789 ))
    {
        if (NOT sub_3864())
        {
            l_U707 = 1;
            l_U708 = 9;
            return;
        }
    }
    if (sub_4043())
    {
        if (sub_3864())
        {
            l_U707 = 1;
            l_U708 = 9;
            return;
        }
    }
    if (NOT (sub_4131( l_U780, ref l_U781, ref l_U751 )))
    {
        return;
    }
    if (NOT l_U707)
    {
        sub_16612();
        if (NOT (IS_CHAR_DEAD( sub_2893() )))
        {
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2893(), 0 );
        }
        l_U750 = 1;
        l_U703 = 5;
    }
    return;
}

int sub_3614(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;

    if (uParam0._fU8._fU4 == -1)
    {
        return 1;
    }
    iVar6 = 0;
    iVar7 = 0;
    GET_CURRENT_DATE( ref iVar6, ref iVar7 );
    iVar8 = 0;
    iVar9 = 0;
    GET_TIME_OF_DAY( ref iVar8, ref iVar9 );
    if ((iVar7 == uParam0._fU0._fU4) AND (iVar6 == uParam0._fU0._fU0))
    {
        if (iVar8 < uParam0._fU8._fU0)
        {
            return 0;
        }
        else if (iVar8 > uParam0._fU8._fU0)
        {
            return 1;
        }
        if (iVar9 > uParam0._fU8._fU4)
        {
            return 1;
        }
        return 0;
    }
    if (sub_3783( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_3783(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    int iVar7;

    iVar7 = COMPARE_TWO_DATES( uParam1, uParam0, uParam3, uParam2 );
    if (iVar7 >= 0)
    {
        if (iVar7 <= iParam4)
        {
            return 1;
        }
    }
    return 0;
}

boolean sub_3864()
{
    float fVar2;

    fVar2 = sub_3873();
    return fVar2 <= 100.00000000;
}

void sub_3873()
{
    vector vVar2;
    float Result;

    if (IS_CHAR_DEAD( sub_2893() ))
    {
        return 9999.90000000;
    }
    vVar2 = {0.00000000, 0.00000000, 0.00000000};
    Result = 0.00000000;
    GET_CHAR_COORDINATES( sub_2893(), ref vVar2.x, ref vVar2.y, ref vVar2.z );
    GET_DISTANCE_BETWEEN_COORDS_3D( vVar2.x, vVar2.y, vVar2.z, l_U482._fU0, l_U482._fU4, l_U482._fU8, ref Result );
    return Result;
}

boolean sub_4043()
{
    int iVar2;

    iVar2 = GET_TIME_SINCE_LAST_DEATH();
    if (iVar2 < 0)
    {
        return 0;
    }
    return iVar2 < 10000;
}

int sub_4131(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_PLAYER_PLAYING( sub_4140() )))
    {
        return 0;
    }
    sub_4190( uParam0 );
    sub_4225();
    sub_4421( (uParam1^) );
    sub_5201();
    if (l_U481 == 0)
    {
        sub_5316( uParam0, uParam1 );
        return 0;
    }
    if (l_U481 == 1)
    {
        sub_8025( uParam0, uParam1, uParam2 );
        return 0;
    }
    if (l_U481 == 2)
    {
        sub_8736( uParam2, (uParam1^) );
        return 0;
    }
    if (l_U481 == 3)
    {
        sub_13087();
        return 0;
    }
    if (l_U481 == 4)
    {
        if (sub_13438( uParam1, uParam2 ))
        {
            return 0;
        }
    }
    CLEAR_HELP();
    SET_PLAYER_CONTROL( sub_4140(), 1 );
    g_U22274[uParam0]._fU20 = 1;
    return 1;
}

void sub_4140()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_4190(unknown uParam0)
{
    l_U494 = g_U22274[uParam0]._fU28;
    return;
}

void sub_4225()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (NOT (IS_KEYBOARD_KEY_JUST_PRESSED( 36 )))
    {
        return;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_4140() )))
    {
        return;
    }
    if (g_U10978)
    {
        return;
    }
    if (g_U9893._fU12)
    {
        return;
    }
    if (sub_3873() < 14.00000000)
    {
        return;
    }
    if (NOT (GET_CLOSEST_CAR_NODE( l_U482._fU0, l_U482._fU4, l_U482._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 )))
    {
        return;
    }
    LOAD_SCENE( uVar2._fU0, uVar2._fU4, uVar2._fU8 );
    SET_CHAR_COORDINATES( sub_2893(), uVar2._fU0, uVar2._fU4, uVar2._fU8 );
    return;
}

void sub_4421(unknown uParam0)
{
    if (COMPARE_STRING( ref l_U546._fU0, l_U545 ))
    {
        return;
    }
    if (NOT l_U546._fU96)
    {
        return;
    }
    sub_4476( uParam0 );
    l_U546._fU80 = l_U481;
    return;
}

void sub_4476(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    boolean bVar8;
    boolean bVar9;

    if (l_U481 == 0)
    {
        return;
    }
    if (NOT (HAVE_ANIMS_LOADED( ref l_U546._fU0 )))
    {
        REQUEST_ANIMS( ref l_U546._fU0 );
        return;
    }
    if (IS_CHAR_DEAD( uParam0 ))
    {
        return;
    }
    GET_SCRIPT_TASK_STATUS( uParam0, 80, ref iVar3 );
    if (iVar3 == 0)
    {
        return;
    }
    bVar4 = iVar3 == 1;
    iVar5 = 0;
    GET_CHAR_HEALTH( uParam0, ref iVar5 );
    if (iVar5 < 200)
    {
        return;
    }
    if (NOT bVar4)
    {
        CLEAR_CHAR_TASKS( uParam0 );
        TASK_PLAY_ANIM( uParam0, ref l_U546._fU32, ref l_U546._fU0, 8.00000000, 1, 0, 0, 0, -2 );
        l_U546._fU88 = 0;
        l_U546._fU92 = 0;
        return;
    }
    iVar6 = 0;
    GET_GAME_TIMER( ref iVar6 );
    iVar7 = 0;
    if ((((l_U546._fU80 == 1) AND (l_U481 == 2)) AND (NOT (COMPARE_STRING( ref l_U546._fU48, l_U545 )))) AND (NOT l_U546._fU88))
    {
        iVar7 = 1;
    }
    bVar8 = false;
    if (l_U546._fU100)
    {
        bVar9 = sub_4775();
        if (NOT bVar9)
        {
            bVar9 = IS_CHAR_ON_FOOT( sub_2893() );
        }
        if (((((l_U546._fU80 == 1) AND (l_U481 == 2)) AND (bVar9)) AND (NOT (COMPARE_STRING( ref l_U546._fU64, l_U545 )))) AND (NOT l_U546._fU92))
        {
            iVar7 = 1;
            bVar8 = true;
        }
    }
    else if (l_U481 == 1)
    {
        l_U546._fU100 = 1;
    }
    if ((iVar6 > l_U546._fU84) || (iVar7))
    {
        CLEAR_CHAR_TASKS( uParam0 );
        if (bVar8)
        {
            TASK_PLAY_ANIM( uParam0, ref l_U546._fU64, ref l_U546._fU0, 8.00000000, 0, 0, 0, 0, -2 );
            l_U546._fU100 = 0;
            l_U546._fU92 = 1;
        }
        else if (NOT (COMPARE_STRING( ref l_U546._fU48, l_U545 )))
        {
            TASK_PLAY_ANIM( uParam0, ref l_U546._fU48, ref l_U546._fU0, 8.00000000, 0, 0, 0, 0, -2 );
        }
        l_U546._fU88 = 1;
        sub_3321();
        return;
    }
    return;
}

boolean sub_4775()
{
    unknown uVar2;
    float fVar3;

    if (IS_CHAR_DEAD( sub_2893() ))
    {
        return 0;
    }
    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2893() )))
    {
        return 0;
    }
    uVar2 = nil;
    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2893(), ref uVar2 );
    fVar3 = 0.00000000;
    GET_CAR_SPEED( uVar2, ref fVar3 );
    return fVar3 > 0.02000000;
}

void sub_5201()
{
    int iVar2;

    if (NOT l_U504)
    {
        return;
    }
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (NOT (iVar2 > l_U503))
    {
        return;
    }
    CHANGE_BLIP_PRIORITY( l_U486, l_U5 );
    FLASH_BLIP( l_U486, 0 );
    l_U503 = 0;
    l_U504 = 0;
    return;
}

void sub_5316(unknown uParam0, unknown uParam1)
{
    float fVar4;

    fVar4 = sub_3873();
    if (fVar4 > 98.00000000)
    {
        return;
    }
    if ((g_U10978) || (g_U9893._fU12))
    {
        return;
    }
    if (NOT (sub_5371( uParam0 )))
    {
        sub_6103( uParam0 );
        return;
    }
    sub_6167( uParam0, uParam1, l_U482._fU0, l_U482._fU4, l_U482._fU8, l_U485 );
    SET_CHAR_DECISION_MAKER( (uParam1^), l_U506 );
    g_U22274[uParam0]._fU24 = 1;
    sub_2942( l_U536, (uParam1^), ref l_U532, 0 );
    sub_7869( uParam0, (uParam1^) );
    l_U481 = 1;
    l_U493 = 0;
    return;
}

void sub_5371(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_5382( uParam0 ) );
}

int sub_5382(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        if (g_U64464[uParam0] == 2)
        {
            return 558221221;
        }
        return -1992728631;
        case 1: return 896408642;
        case 3:
        if (g_U64464[uParam0] == 1)
        {
            return -1275031987;
        }
        return 1487004273;
        case 4: return 57218969;
        case 5: return 1445589009;
        case 6: return 155063868;
        case 7: return -617264103;
        case 8: return -1729980128;
        case 9: return 1794146792;
        case 11: return 1710545037;
        case 12: return -1775659292;
        case 13: return 1690783035;
        case 14: return 954215094;
        case 15: return 809067472;
        case 16: return 1169442297;
        case 17: return 1872110126;
        case 18: return 1500493064;
        case 19: return -1826458934;
        case 22: return -366421228;
        case 20: return -379234846;
        case 24: return 237511807;
        case 25: return 237497537;
        case 26: return -1040287406;
        case 27: return -357652594;
        case 52: return 2129490787;
        case 53: return 386513184;
        case 2: return -1080659212;
        case 10: return -773750838;
        case 28: return -1788328884;
        case 29: return 1056837725;
        case 30: return -292713088;
        case 31:
        case 32: return -292713088;
    }
    sub_6045( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_6045(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_6103(unknown uParam0)
{
    REQUEST_MODEL( sub_5382( uParam0 ) );
    return;
}

void sub_6167(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_5382( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_6217( uParam0, (uParam1^) );
    return;
}

void sub_6217(unknown uParam0, unknown uParam1)
{
    sub_6229( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_6229(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_6323( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_6867( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_6323(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == iParam1)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == iParam2)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == iParam2)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, iParam2, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 2 )) == iParam3)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 2 )) == iParam3)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 2, iParam3, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 5 )) == iParam4)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 5 )) == iParam4)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 5, iParam4, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 4 )) == iParam5)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 4 )) == iParam5)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 4, iParam5, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 3 )) == iParam6)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 3 )) == iParam6)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 3, iParam6, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 7 )) == iParam7)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 7 )) == iParam7)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 7, iParam7, 0 );
        }
        iVar12 = -1;
        GET_CHAR_PROP_INDEX( (uParam0^), 0, ref iVar12 );
        if (NOT (iVar12 == iParam8))
        {
            if (iParam8 == -1)
            {
                CLEAR_CHAR_PROP( (uParam0^), 0 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( (uParam0^), 0, iParam8 );
            }
        }
        iVar13 = -1;
        GET_CHAR_PROP_INDEX( (uParam0^), 0, ref iVar13 );
        if (NOT (iVar13 == iParam9))
        {
            if (iParam9 == -1)
            {
                CLEAR_CHAR_PROP( (uParam0^), 1 );
            }
            else
            {
                SET_CHAR_PROP_INDEX( (uParam0^), 1, iParam9 );
            }
        }
    }
    return;
}

void sub_6867(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_6323( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_6323( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_6323( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_6323( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_6323( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_6323( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_6323( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_6323( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_6323( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_6323( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_6323( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_6323( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_6323( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_7869(unknown uParam0, unknown uParam1)
{
    int iVar4;

    sub_6867( uParam1, uParam0, l_U538 );
    CLEAR_CHAR_PROP( uParam1, 0 );
    iVar4 = -1;
    if (NOT (iVar4 == l_U539))
    {
        if (l_U539 == -1)
        {
            CLEAR_CHAR_PROP( uParam1, 1 );
        }
        else
        {
            SET_CHAR_PROP_INDEX( uParam1, 1, l_U539 );
        }
    }
    ENABLE_PED_HELMET( uParam1, l_U540 );
    return;
}

void sub_8025(unknown uParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;

    fVar5 = sub_3873();
    if (((fVar5 > 100.00000000) || (g_U10978)) || (g_U9893._fU12))
    {
        sub_8070( uParam1 );
        sub_8103( uParam0 );
        l_U481 = 0;
        g_U22274[uParam0]._fU24 = 0;
        return;
    }
    if (NOT (IS_CHAR_DEAD( sub_2893() )))
    {
        if (sub_8180( sub_2893() ))
        {
            return;
        }
    }
    if (fVar5 < 12.00000000)
    {
        l_U481 = 2;
        if (NOT IS_HINT_RUNNING())
        {
            if (IS_CHAR_IN_ANY_CAR( sub_2893() ))
            {
                GET_CHAR_COORDINATES( (uParam1^), ref l_U541._fU0, ref l_U541._fU4, ref l_U541._fU8 );
                l_U541._fU8 += 1.50000000;
                HINT_CAM( l_U541._fU0, l_U541._fU4, l_U541._fU8, 0, 0, 0, 30000 );
            }
        }
        l_U491 = 0;
        sub_8584();
        sub_8630( (uParam1^), uParam2 );
        TASK_LOOK_AT_CHAR( (uParam1^), sub_2893(), -2, 0 );
        return;
    }
    return;
}

void sub_8070(unknown uParam0)
{
    DELETE_CHAR( uParam0 );
    (uParam0^) = nil;
    return;
}

void sub_8103(unknown uParam0)
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_5382( uParam0 ) );
    return;
}

int sub_8180(int iParam0)
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
                if (sub_8244( uVar3 ))
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

int sub_8244(int iParam0)
{
    if ((((IS_CAR_MODEL( iParam0, -956048545 )) || (IS_CAR_MODEL( iParam0, 1884962369 ))) || (IS_CAR_MODEL( iParam0, 1208856469 ))) || (iParam0 == g_U2239))
    {
        return 1;
    }
    return 0;
}

void sub_8584()
{
    REMOVE_BLIP( l_U486 );
    l_U503 = 0;
    l_U504 = 0;
    return;
}

void sub_8630(unknown uParam0, unknown uParam1)
{
    if (DOES_BLIP_EXIST( (uParam1^) ))
    {
        return;
    }
    ADD_BLIP_FOR_CHAR( uParam0, uParam1 );
    SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
    return;
}

void sub_8736(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = sub_3873();
    if (sub_8758( uVar4, uParam0, uParam1 ))
    {
        return;
    }
    if (sub_8976( uVar4 ))
    {
        return;
    }
    sub_12308();
    if ((sub_12402()) || (sub_12840()))
    {
        return;
    }
    return;
}

int sub_8758(float fParam0, unknown uParam1, unknown uParam2)
{
    boolean bVar5;

    bVar5 = false;
    if (NOT (IS_CHAR_DEAD( sub_2893() )))
    {
        if (sub_8180( sub_2893() ))
        {
            bVar5 = true;
        }
    }
    if (((NOT g_U10978) AND (NOT g_U9893._fU12)) AND (NOT bVar5))
    {
        if (fParam0 <= 14.00000000)
        {
            return 0;
        }
    }
    l_U481 = 1;
    CLEAR_HELP();
    sub_8862( uParam1 );
    sub_1753( 0 );
    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
    TASK_CLEAR_LOOK_AT( uParam2 );
    return 1;
}

void sub_8862(unknown uParam0)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        return;
    }
    REMOVE_BLIP( (uParam0^) );
    (uParam0^) = nil;
    return;
}

int sub_8976(float fParam0)
{
    int iVar3;

    if (fParam0 > 7.00000000)
    {
        return 0;
    }
    l_U481 = 3;
    if (NOT l_U493)
    {
        sub_9019();
    }
    iVar3 = 0;
    if (l_U491)
    {
        if (l_U492)
        {
            PRINT_HELP_FOREVER( ref l_U507[2] );
        }
        else
        {
            PRINT_HELP_FOREVER( ref l_U507[1] );
        }
    }
    else if (l_U494)
    {
        sub_9201( l_U537, ref l_U520 );
        iVar3 = sub_10678( l_U537 );
        sub_11051( iVar3 );
    }
    else
    {
        sub_11992( l_U537, ref l_U520 );
    }
    return 1;
}

int sub_9019()
{
    int iVar2;

    l_U493 = 1;
    iVar2 = IS_CHAR_IN_ANY_CAR( sub_2893() );
    if (l_U491 == iVar2)
    {
        return 0;
    }
    l_U491 = iVar2;
    l_U492 = 0;
    if (l_U491)
    {
        if (IS_CHAR_IN_ANY_HELI( sub_2893() ))
        {
            l_U492 = 1;
        }
    }
    return 1;
}

void sub_9201(unknown uParam0, unknown uParam1)
{
    if (g_U22274[uParam0]._fU500._fU4)
    {
        sub_9236( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 0:
        sub_9310( "FCR_ARRFL", uParam1, 8, 1 );
        return;
        case 3:
        sub_9310( "FCJ_ARRFL", uParam1, 8, 1 );
        return;
        case 7:
        sub_9310( "FCD2_ARRFL", uParam1, 8, 1 );
        return;
        case 8:
        if ((g_U22274[uParam0]._fU144 == 4) || (g_U22274[uParam0]._fU144 == 9))
        {
            ;
        }
        else
        {
            sub_9310( "FCB2_ARRFL", uParam1, 8, 1 );
        }
        return;
        case 13:
        sub_9310( "FCP_ARRFL", uParam1, 8, 1 );
        return;
    }
    sub_9310( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_9236(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        sub_9310( "FCR_ARRFH", uParam1, 8, 1 );
        return;
        case 3:
        sub_9310( "FCJ_ARHOSPF", uParam1, 8, 1 );
        return;
        case 7:
        sub_9310( "FCD2_ARRNL", uParam1, 8, 1 );
        return;
        case 8:
        sub_9310( "FCB2_ARRNL", uParam1, 8, 1 );
        return;
        case 13:
        sub_9310( "FCP_ARRFNL", uParam1, 8, 1 );
        return;
    }
    sub_9310( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_9310(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_9333( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_9333(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;
    char[12] cVar11;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;

    StrCopy( ref cVar7, uParam1, 16 );
    array(ref cVar11, 2);
    StrCopy( ref cVar11[0], uParam0, 16 );
    StrCopy( ref cVar11[1], "END", 16 );
    return sub_9387( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_9387(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_9409( iParam1 )))
    {
        return 0;
    }
    l_U181._fU384 = 0;
    iParam1->_fU16 = 0;
    iParam1->_fU20 = uParam5;
    if (bParam3)
    {
        if (iParam1->_fU12)
        {
            iVar12 = iParam1->_fU8;
            iParam1->_fU12 = 0;
        }
    }
    else
    {
        iParam1->_fU12 = 0;
        if (bParam4)
        {
            iVar12 = uParam6;
            iParam1->_fU8 = uParam6;
            iParam1->_fU12 = 0;
        }
        else
        {
            iParam1->_fU8 = 0;
            iParam1->_fU12 = 0;
        }
    }
    iParam1->_fU16 = bParam4;
    for ( I = 0; I <= (g_U8499 - 1); I++ )
    {
        StrCopy( ref g_U8499[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8499[I] = {(uParam0^)[I]};
    }
    g_U8493 = {(iParam1^)};
    sub_10101( ref g_U8395, ref l_U181 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_9409(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_9486( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U556[1] ))
    {
        switch (g_U91._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_9486( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 > iParam0->_fU0)
        {
            sub_9486( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8392 = iParam0->_fU0;
    g_U8393++;
    if (g_U8393 > 100000)
    {
        g_U8393 = 1;
    }
    iParam0->_fU4 = g_U8393;
    return 1;
}

void sub_9486(unknown uParam0)
{
    return;
}

void sub_10101(int iParam0, int iParam1)
{
    int I;

    iParam0->_fU0 = {iParam1->_fU0};
    for ( I = 0; I <= 8; I++ )
    {
        iParam0->_fU16[I] = {iParam1->_fU16[I]};
        iParam0->_fU344[I] = iParam1->_fU344[I];
    }
    iParam0->_fU384 = iParam1->_fU384;
    iParam0->_fU388 = iParam1->_fU388;
    return;
}

int sub_10678(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 1: return 1;
        case 2: return 2;
        case 3: return 3;
        case 4: return 4;
        case 5: return 5;
        case 6: return 6;
        case 7: return 7;
        case 8: return 8;
        case 9: return 9;
        case 10: return 10;
        case 11: return 11;
        case 12: return 12;
        case 13: return 13;
        case 14: return 14;
        case 15: return 15;
        case 16: return 16;
        case 17: return 17;
        case 18: return 18;
        case 19: return 19;
        case 22: return 20;
        case 20: return 21;
        case 21: return 22;
    }
    sub_6045( "Flow_public: Return_Strand_From_Contact(): Unknown Contact" );
    return 28;
}

void sub_11051(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 0: return;
        case 3:
        case 7:
        iVar3 = -5;
        break;
        case 8:
        iVar3 = -10;
        break;
        case 13:
        iVar3 = -10;
        break;
        default:
        sub_6045( "Flow_Friend_Late_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_11221( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_11221( uParam0, 0, iVar4 );
    return;
}

void sub_11221(unknown uParam0, int iParam1, int iParam2)
{
    g_U10981[uParam0]._fU40[iParam1] += iParam2;
    if (g_U10981[uParam0]._fU40[iParam1] < 0)
    {
        g_U10981[uParam0]._fU40[iParam1] = 0;
    }
    if (g_U10981[uParam0]._fU40[iParam1] > 100)
    {
        g_U10981[uParam0]._fU40[iParam1] = 100;
    }
    if (iParam1 == 1)
    {
        sub_11378( uParam0 );
    }
    return;
}

void sub_11378(unknown uParam0)
{
    if (g_U0)
    {
        return;
    }
    if (IS_BIT_SET( ProtectedGet(g_U64791), 11 ))
    {
        return;
    }
    if (g_U10981[uParam0]._fU40[1] < 90)
    {
        return;
    }
    switch (uParam0)
    {
        case 0:
        SET_BIT( 1, 6 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 3:
        SET_BIT( 1, 7 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 7:
        SET_BIT( 1, 8 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 8:
        SET_BIT( 1, 9 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
        case 13:
        SET_BIT( 1, 10 );
        break;
        break;
        2;
        1;
        ref g_U64791;
        1;
        ref g_U64791;
        break;
    }
    if (((((NOT (IS_BIT_SET( ProtectedGet(g_U64791), 1 ))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 2 )))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 3 )))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 4 )))) || (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 5 ))))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 7 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 9 )))
    {
        return;
    }
    if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 10 )))
    {
        return;
    }
    if (g_U10981[0]._fU8)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 6 )))
        {
            return;
        }
    }
    if (g_U10981[7]._fU8)
    {
        if (NOT (IS_BIT_SET( ProtectedGet(g_U64791), 8 )))
        {
            return;
        }
    }
    SET_BIT( 1, 11 );
    AWARD_ACHIEVEMENT( 35 );
    return;
    break;
    2;
    1;
    ref g_U64791;
    1;
    ref g_U64791;
    break;
}

void sub_11992(unknown uParam0, unknown uParam1)
{
    if (g_U22274[uParam0]._fU500._fU4)
    {
        sub_9236( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 0:
        sub_9310( "FCR_ARRFNL", uParam1, 8, 1 );
        return;
        case 3:
        sub_9310( "FCJ_ARRFNL", uParam1, 8, 1 );
        return;
        case 7:
        sub_9310( "FCD2_ARRNL", uParam1, 8, 1 );
        return;
        case 8:
        if ((g_U22274[uParam0]._fU144 == 4) || (g_U22274[uParam0]._fU144 == 9))
        {
            ;
        }
        else
        {
            sub_9310( "FCB2_ARRNL", uParam1, 8, 1 );
        }
        return;
        case 13:
        sub_9310( "FCP_ARRFNL", uParam1, 8, 1 );
        return;
    }
    sub_9310( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_12308()
{
    if (NOT sub_9019())
    {
        return;
    }
    if (l_U491)
    {
        if (l_U492)
        {
            PRINT_HELP_FOREVER( ref l_U507[2] );
        }
        else
        {
            PRINT_HELP_FOREVER( ref l_U507[0] );
        }
        return;
    }
    CLEAR_HELP();
    return;
}

int sub_12402()
{
    unknown uVar2;
    float fVar3;
    int iVar4;

    if (NOT (IS_CHAR_IN_ANY_CAR( sub_2893() )))
    {
        return 0;
    }
    uVar2 = nil;
    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2893(), ref uVar2 );
    fVar3 = 0.00000000;
    GET_CAR_SPEED( uVar2, ref fVar3 );
    if ((fVar3 < 0.01000000) AND (sub_12477( 1, 1 )))
    {
        if (NOT l_U492)
        {
            SET_PLAYER_CONTROL( sub_4140(), 0 );
        }
        l_U481 = 4;
        CLEAR_HELP();
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        l_U544 = iVar4 + 20000;
        return 1;
    }
    return 0;
}

int sub_12477(boolean bParam0, boolean bParam1)
{
    unknown uVar4;
    int iVar5;
    float fVar6;

    if (IS_MINIGAME_IN_PROGRESS())
    {
        return 0;
    }
    if (bParam1)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_2893() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2893(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_CAR_UPRIGHT_VALUE( uVar4, ref fVar6 );
                if ((fVar6 < 0.95000000) || (fVar6 > 1.01100000))
                {
                    return 0;
                }
            }
        }
    }
    if (bParam0)
    {
        if (IS_CHAR_IN_ANY_CAR( sub_2893() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2893(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2893()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2893() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2893() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_4140() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_4140() )))
    {
        return 0;
    }
    return 1;
}

int sub_12840()
{
    int iVar2;
    boolean bVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    bVar3 = false;
    if (((IS_CHAR_IN_ANY_CAR( sub_2893() )) AND (sub_12477( 1, 1 ))) AND (IS_PLAYER_PRESSING_HORN( sub_4140() )))
    {
        if (l_U492)
        {
            return 0;
        }
        if (l_U500 == 0)
        {
            l_U500 = iVar2 + 400;
            return 0;
        }
        if (l_U500 > iVar2)
        {
            return 0;
        }
        l_U500 = 0;
        bVar3 = true;
    }
    if (NOT bVar3)
    {
        if (l_U500 > 0)
        {
            l_U500 = 0;
            bVar3 = true;
        }
    }
    if (bVar3)
    {
        SET_PLAYER_CONTROL( sub_4140(), 0 );
        l_U481 = 4;
        CLEAR_HELP();
        l_U544 = iVar2 + 20000;
        return 1;
    }
    return 0;
}

void sub_13087()
{
    unknown uVar2;

    uVar2 = sub_3873();
    if (sub_13105( uVar2 ))
    {
        if (l_U491)
        {
            if (l_U492)
            {
                PRINT_HELP_FOREVER( ref l_U507[2] );
            }
            else
            {
                PRINT_HELP_FOREVER( ref l_U507[0] );
            }
        }
        return;
    }
    if (NOT (IS_CHAR_IN_ANY_CAR( sub_2893() )))
    {
        return;
    }
    if ((sub_12402()) || (sub_12840()))
    {
        return;
    }
    sub_13316();
    return;
}

int sub_13105(float fParam0)
{
    boolean bVar3;

    bVar3 = false;
    if (NOT (IS_CHAR_DEAD( sub_2893() )))
    {
        if (sub_8180( sub_2893() ))
        {
            bVar3 = true;
        }
    }
    if (((NOT g_U10978) AND (NOT g_U9893._fU12)) AND (NOT bVar3))
    {
        if (fParam0 <= 9.00000000)
        {
            return 0;
        }
    }
    l_U481 = 2;
    l_U491 = 0;
    return 1;
}

void sub_13316()
{
    if (NOT sub_9019())
    {
        return;
    }
    if (l_U491)
    {
        if (l_U492)
        {
            PRINT_HELP_FOREVER( ref l_U507[2] );
        }
        else
        {
            PRINT_HELP_FOREVER( ref l_U507[1] );
        }
        return;
    }
    CLEAR_HELP();
    return;
}

int sub_13438(unknown uParam0, unknown uParam1)
{
    boolean bVar4;
    int iVar5;
    int iVar6;
    unknown uVar7;
    int iVar8;
    int iVar9;
    int iVar10;
    int iVar11;
    int iVar12;

    bVar4 = g_U10978;
    if (NOT bVar4)
    {
        if (g_U9893._fU12)
        {
            bVar4 = true;
        }
    }
    if ((NOT l_U487) AND (bVar4))
    {
        l_U481 = 3;
        return 1;
    }
    iVar5 = 0;
    iVar6 = 0;
    if (NOT l_U487)
    {
        GET_GROUP_SIZE( sub_13518(), ref iVar5, ref iVar6 );
        if (iVar6 > 0)
        {
            if (NOT sub_13577())
            {
                sub_6045( "Check_If_Still_Joining_Group: Player has group members, but not Dwayne Backup" );
            }
            sub_13720();
            return 1;
        }
    }
    uVar7 = nil;
    iVar8 = 0;
    iVar9 = 1;
    if (NOT l_U487)
    {
        if (NOT l_U496)
        {
            iVar9 = 3;
        }
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2893() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2893(), ref uVar7 );
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar7, ref iVar8 );
            if ((iVar8 < iVar9) || (l_U497))
            {
                TASK_LEAVE_CAR( sub_2893(), uVar7 );
                l_U498 = 1;
            }
        }
        GET_SCRIPT_TASK_STATUS( (uParam0^), 80, ref iVar10 );
        if ((NOT (iVar10 == 1)) AND (NOT (iVar10 == 7)))
        {
            return 1;
        }
        if (NOT (COMPARE_STRING( ref l_U546._fU0, l_U545 )))
        {
            CLEAR_CHAR_TASKS( (uParam0^) );
            REMOVE_ANIMS( ref l_U546._fU0 );
            l_U546._fU96 = 0;
        }
        SET_NEXT_DESIRED_MOVE_STATE( 2 );
        SET_GROUP_MEMBER( sub_13518(), (uParam0^) );
        l_U487 = 1;
        TASK_CLEAR_LOOK_AT( (uParam0^) );
        sub_14009();
        g_U10978 = 1;
    }
    iVar11 = 0;
    if ((IS_CHAR_IN_ANY_CAR( sub_2893() )) AND (NOT l_U498))
    {
        MODIFY_CHAR_MOVE_STATE( (uParam0^), 2 );
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2893(), ref uVar7 );
        if (NOT (IS_CHAR_IN_CAR( (uParam0^), uVar7 )))
        {
            if (NOT (l_U544 == 0))
            {
                iVar12 = 0;
                GET_GAME_TIMER( ref iVar12 );
                if ((l_U544 < iVar12) || (NOT (IS_VEH_DRIVEABLE( uVar7 ))))
                {
                    SET_PLAYER_CONTROL( sub_4140(), 1 );
                    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    l_U544 = 0;
                }
                else if (NOT (IS_GROUP_MEMBER( (uParam0^), sub_13518() )))
                {
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    SET_GROUP_MEMBER( sub_13518(), (uParam0^) );
                }
            }
            else if (sub_3873() > 20.00000000)
            {
                return 0;
            }
            return 1;
        }
        if (l_U494)
        {
            sub_15049( l_U537, ref l_U520 );
            iVar11 = sub_10678( l_U537 );
            sub_11051( iVar11 );
        }
        else
        {
            sub_15604( l_U537, ref l_U520 );
        }
        sub_8862( uParam1 );
        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
        return 0;
    }
    if (l_U494)
    {
        sub_9201( l_U537, ref l_U520 );
        iVar11 = sub_10678( l_U537 );
        sub_11051( iVar11 );
    }
    else
    {
        sub_11992( l_U537, ref l_U520 );
    }
    if ((IS_HINT_RUNNING()) AND (NOT l_U498))
    {
        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
    }
    return 0;
}

void sub_13518()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_13577()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dwayne_backup" )) >= 1)
    {
        return 1;
    }
    return 0;
}

void sub_13720()
{
    if (sub_13577())
    {
        g_U64921 = 1;
    }
    return;
}

void sub_14009()
{
    sub_14018();
    sub_14121( ref g_U9893._fU68 );
    sub_14170();
    return;
}

void sub_14018()
{
    g_U9893._fU4 = 0;
    g_U9893._fU8 = 0;
    g_U9893._fU12 = 0;
    g_U9893._fU16 = 0;
    g_U9893._fU20 = 0;
    g_U9893._fU28 = 0;
    g_U9893._fU32 = 0;
    g_U9893._fU36 = 0;
    g_U9893._fU48 = 0;
    return;
}

void sub_14121(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_14170()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_14208( 1, g_U569[I] )) == 0)
        {
            sub_14459( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_14637())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    g_U91._fU404 = 1000;
    return;
}

int sub_14208(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    switch (uParam0)
    {
        case 0:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 14, 23 );
        break;
        case 1:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 0, 13 );
        break;
        case 2:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 14, 27 );
        break;
        case 3:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 0, 13 );
        break;
        case 4:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 27 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return uParam1._fU0[2];
        break;
    }
    return -1;
}

void sub_14459(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_14544( g_U569 - 1 );
    return;
}

void sub_14544(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_14637()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_14208( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_15049(unknown uParam0, unknown uParam1)
{
    if (g_U22274[uParam0]._fU500._fU4)
    {
        sub_15084( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 0:
        sub_9310( "FCR_ARRL", uParam1, 8, 1 );
        return;
        case 3:
        sub_9310( "FCJ_ARRL", uParam1, 8, 1 );
        return;
        case 7:
        sub_9310( "FCD2_ARRL", uParam1, 8, 1 );
        return;
        case 8:
        if ((g_U22274[uParam0]._fU144 == 4) || (g_U22274[uParam0]._fU144 == 9))
        {
            ;
        }
        else
        {
            sub_9310( "FCB2_ARRL", uParam1, 8, 1 );
        }
        return;
        case 13:
        sub_9310( "FCP_ARRL", uParam1, 8, 1 );
        return;
    }
    sub_9310( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_15084(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        if (NOT g_U15654[6])
        {
            sub_9310( "FCR_ARRH", uParam1, 8, 1 );
        }
        return;
        case 3:
        sub_9310( "FCJ_ARHOSP", uParam1, 8, 1 );
        return;
        case 7:
        sub_9310( "FCD2_ARRCNL", uParam1, 8, 1 );
        return;
        case 8:
        sub_9310( "FCB2_ARRCNL", uParam1, 8, 1 );
        return;
        case 13:
        sub_9310( "FCP_ARRCNL", uParam1, 8, 1 );
        return;
    }
    sub_9310( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_15604(unknown uParam0, unknown uParam1)
{
    if (g_U22274[uParam0]._fU500._fU4)
    {
        sub_15084( uParam0, uParam1 );
        return;
    }
    if (IS_CHAR_DEAD( sub_2893() ))
    {
        return;
    }
    switch (uParam0)
    {
        case 0:
        if (IS_CHAR_ON_ANY_BIKE( sub_2893() ))
        {
            sub_9310( "FCR_ARRMNL", uParam1, 8, 1 );
        }
        else if (IS_CHAR_IN_ANY_HELI( sub_2893() ))
        {
            sub_9310( "FCR_ARRHNL", uParam1, 8, 1 );
        }
        else
        {
            sub_9310( "FCR_ARRCNL", uParam1, 8, 1 );
        }
        return;
        case 3:
        if (IS_CHAR_ON_ANY_BIKE( sub_2893() ))
        {
            sub_9310( "FCJ_ARRMNL", uParam1, 8, 1 );
        }
        else if (IS_CHAR_IN_ANY_HELI( sub_2893() ))
        {
            sub_9310( "FCJ_ARRHNL", uParam1, 8, 1 );
        }
        else
        {
            sub_9310( "FCJ_ARRCNL", uParam1, 8, 1 );
        }
        return;
        case 7:
        if (IS_CHAR_ON_ANY_BIKE( sub_2893() ))
        {
            sub_9310( "FCD2_ARRMNL", uParam1, 8, 1 );
        }
        else if (IS_CHAR_IN_ANY_HELI( sub_2893() ))
        {
            sub_9310( "FCD2_ARRHNL", uParam1, 8, 1 );
        }
        else
        {
            sub_9310( "FCD2_ARRCNL", uParam1, 8, 1 );
        }
        return;
        case 8:
        if ((g_U22274[uParam0]._fU144 == 4) || (g_U22274[uParam0]._fU144 == 9))
        {
            ;
        }
        else if (IS_CHAR_ON_ANY_BIKE( sub_2893() ))
        {
            sub_9310( "FCB2_ARRMNL", uParam1, 8, 1 );
        }
        else if (IS_CHAR_IN_ANY_HELI( sub_2893() ))
        {
            sub_9310( "FCB2_ARRHNL", uParam1, 8, 1 );
        }
        else
        {
            sub_9310( "FCB2_ARRCNL", uParam1, 8, 1 );
        };;;
        return;
        case 13:
        if (IS_CHAR_ON_ANY_BIKE( sub_2893() ))
        {
            sub_9310( "FCP_ARRMNL", uParam1, 8, 1 );
        }
        else if (IS_CHAR_IN_ANY_HELI( sub_2893() ))
        {
            sub_9310( "FCP_ARRHNL", uParam1, 8, 1 );
        }
        else
        {
            sub_9310( "FCP_ARRCNL", uParam1, 8, 1 );
        }
        return;
    }
    sub_9310( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_16612()
{
    SET_MISSION_FLAG( 1 );
    g_U10978 = 1;
    l_U709 = 1;
    sub_14121( ref l_U789 );
    g_U22274[l_U780]._fU144 = 14;
    return;
}

void sub_16733()
{
    char[16] cVar2;

    l_U722 = 0;
    l_U490 = 1;
    if (g_U15654[6])
    {
        StrCopy( ref cVar2, "MF5AUD", 16 );
    }
    else
    {
        cVar2 = {g_U22274[l_U780]._fU500._fU84};
    }
    if (NOT (sub_16827( l_U780, l_U781, l_U785, ref cVar2 )))
    {
        return;
    }
    sub_28627();
    l_U703 = 6;
    l_U704 = 0;
    return;
}

void sub_16827(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int iVar8;

    iVar8 = 0;
    return sub_16852( uParam0, uParam1, uParam2, iVar8, uParam5 );
}

int sub_16852(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5, unknown uParam6)
{
    float fVar9;
    boolean bVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    vector vVar15;
    vector vVar18;
    vector vVar21;
    vector vVar24;
    float fVar27;
    int iVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    float fVar35;
    float fVar36;
    float fVar37;
    int iVar38;

    if (NOT l_U777)
    {
        if (IS_CHAR_INJURED( iParam1 ))
        {
            l_U707 = 1;
            l_U708 = 0;
            return 1;
        }
    }
    if (l_U757)
    {
        if (sub_16918( uParam0, iParam1, uParam6 ))
        {
            l_U704 = 99;
        }
        else
        {
            return 0;
        }
    }
    if (l_U704 == 0)
    {
        if (NOT l_U757)
        {
            if (bParam5)
            {
                sub_18875( uParam0 );
            }
            else
            {
                sub_19587( uParam0, uParam2 );
            }
        }
        if (NOT l_U749)
        {
            sub_2133( ref l_U741, 5, 0, 0 );
            sub_2133( ref l_U745, 8, 0, 0 );
        }
        l_U767 = {0.00000000, 0.00000000, 0.00000000};
        l_U770 = 0;
        l_U777 = 0;
        l_U704++;
    }
    if (l_U704 == 1)
    {
        if (NOT (sub_18351( l_U520 )))
        {
            if (NOT l_U749)
            {
                sub_2779( uParam6 );
                sub_2942( 0, sub_2893(), "NIKO", 0 );
                sub_2942( l_U536, iParam1, ref l_U532, 0 );
                if (l_U755)
                {
                    sub_20452( l_U537, ref l_U520, l_U756 );
                }
                else if (NOT (g_U22274[uParam0]._fU144 == 7))
                {
                    sub_20619( l_U537, ref l_U520 );
                }
                else
                {
                    sub_21497( l_U537 );
                }
                sub_21697( uParam0, bParam5 );
            }
            l_U704++;
        }
        sub_22454( uParam0, bParam5, uParam2 );
    }
    if (l_U704 == 2)
    {
        fVar9 = uParam2._fU8 + 0.00000000;
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2893(), uParam2._fU0, uParam2._fU4, fVar9, 2.50000000, 2.50000000, 2.50000000, 1 ))
        {
            if (sub_23015( iParam1 ))
            {
                l_U704++;
            }
        }
        l_U722 = 1;
        if (l_U495)
        {
            sub_23262( iParam1, ref l_U751 );
        }
        else
        {
            sub_23316( uParam0 );
        }
        sub_22454( uParam0, bParam5, uParam2 );
    }
    if (NOT l_U749)
    {
        if (l_U704 < 3)
        {
            if (NOT (IS_CHAR_DEAD( sub_2893() )))
            {
                if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2893(), uParam2._fU0, uParam2._fU4, uParam2._fU8, 50.00000000, 50.00000000, 50.00000000, 0 )))
                {
                    sub_23832( uParam0, iParam1 );
                }
            }
        }
    }
    if (IS_CHAR_DEAD( sub_2893() ))
    {
        return 0;
    }
    bVar10 = IS_CHAR_SITTING_IN_ANY_CAR( sub_2893() );
    if (bVar10)
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2893(), ref uVar11 );
        if (IS_CAR_DEAD( uVar11 ))
        {
            if ((NOT (IS_CHAR_DEAD( sub_2893() ))) AND (NOT (IS_CHAR_DEAD( iParam1 ))))
            {
                TASK_LEAVE_ANY_CAR( sub_2893() );
                TASK_LEAVE_ANY_CAR( iParam1 );
            }
            return 0;
        }
    }
    if (l_U704 == 3)
    {
        if (bVar10)
        {
            GET_CHAR_COORDINATES( sub_2893(), ref vVar15.x, ref vVar15.y, ref vVar15.z );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2893(), 2.00000000, 8.00000000, 3.00000000, ref uVar12._fU0, ref uVar12._fU4, ref uVar12._fU8 );
        }
        else
        {
            GET_CHAR_COORDINATES( sub_2893(), ref vVar18.x, ref vVar18.y, ref vVar18.z );
            GET_CHAR_COORDINATES( iParam1, ref vVar21.x, ref vVar21.y, ref vVar21.z );
            vVar24 = {vVar18 - vVar21};
            vVar24.x *= 1.00000000;
            vVar24.y *= 1.00000000;
            vVar24.z *= 1.00000000;
            vVar24.z += 2.00000000;
            uVar12 = {vVar18 + vVar24};
            vVar15 = {vVar21};
            vVar15 = {vVar15 + 0.50000000};
        }
        sub_17151();
        CREATE_CAM( 14, ref l_U710[1] );
        SET_CAM_POS( l_U710[1], uVar12._fU0, uVar12._fU4, uVar12._fU8 );
        POINT_CAM_AT_COORD( l_U710[1], vVar15.x, vVar15.y, vVar15.z );
        SET_CAM_FOV( l_U710[1], 50.00000000 );
        SET_CAM_ACTIVE( l_U710[1], 1 );
        SET_CAM_PROPAGATE( l_U710[1], 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        SETTIMERA( 0 );
        l_U704++;
    }
    if (l_U704 == 4)
    {
        if (sub_25187())
        {
            sub_25436( uParam0 );
            sub_22533( uParam0 );
            SET_PLAYER_CONTROL( sub_4140(), 0 );
            l_U704++;
        }
    }
    if (l_U704 == 5)
    {
        if ((NOT (IS_CHAR_DEAD( sub_2893() ))) AND (NOT (IS_CHAR_DEAD( iParam1 ))))
        {
            if (bVar10)
            {
                TASK_LOOK_AT_CHAR( sub_2893(), iParam1, -2, 0 );
                TASK_LOOK_AT_CHAR( iParam1, sub_2893(), -2, 0 );
            }
            else
            {
                TASK_TURN_CHAR_TO_FACE_CHAR( sub_2893(), iParam1 );
                TASK_TURN_CHAR_TO_FACE_CHAR( iParam1, sub_2893() );
            }
        }
        l_U704++;
    }
    if (l_U704 == 6)
    {
        if (TIMERA() > 2000)
        {
            SETTIMERA( 0 );
            l_U704++;
        }
    }
    fVar27 = 0.00000000;
    if (l_U704 == 7)
    {
        if (bVar10)
        {
            l_U704++;
        }
        else if ((IS_CHAR_DEAD( sub_2893() )) || (IS_CHAR_DEAD( iParam1 )))
        {
            l_U704++;
        }
        else
        {
            GET_CHAR_COORDINATES( sub_2893(), ref vVar18.x, ref vVar18.y, ref vVar18.z );
            GET_CHAR_COORDINATES( iParam1, ref vVar21.x, ref vVar21.y, ref vVar21.z );
            fVar27 = sub_26168( vVar18, vVar21 );
            if ((fVar27 < 5.00000000) || (TIMERA() > 7000))
            {
                l_U704++;
            }
        }
    }
    if (l_U704 == 8)
    {
        iVar28 = 0;
        sub_17614( iVar28 );
        if (NOT l_U749)
        {
            sub_2779( uParam6 );
            sub_2942( 0, sub_2893(), "NIKO", 0 );
            sub_2942( l_U536, iParam1, ref l_U532, 0 );
            if (l_U755)
            {
                sub_26367( l_U537, ref l_U520 );
            }
            else
            {
                sub_17806( l_U537, ref l_U520 );
            }
        }
        l_U704++;
    }
    fVar35 = 0.00000000;
    fVar36 = 0.00000000;
    fVar37 = 0.00000000;
    if (l_U704 == 9)
    {
        GET_PED_BONE_POSITION( sub_2893(), 1205, 0.00000000, 0.00000000, 0.00000000, ref uVar29 );
        if (bVar10)
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar11, 0.00000000, 0.00000000, 0.00000000, ref uVar32._fU0, ref uVar32._fU4, ref uVar32._fU8 );
            fVar27 = sub_26168( uVar29, uVar32 );
            fVar35 = fVar27 + 1.30000000;
            if (fVar27 > 4.00000000)
            {
                fVar35 += 0.70000000;
            }
            fVar36 = (uVar29._fU8 - uVar32._fU8) + 0.60000000;
            uVar12 = {0.00000000, fVar35, fVar36};
            fVar37 = uVar29._fU8 - uVar32._fU8;
            vVar15 = {0.00000000, 0.00000000, fVar37};
            l_U704++;
        }
        else
        {
            l_U704++;
        }
    }
    if (l_U704 == 10)
    {
        if (bVar10)
        {
            if (IS_CAR_DEAD( uVar11 ))
            {
                bVar10 = false;
            }
        }
        if (bVar10)
        {
            ATTACH_CAM_TO_VEHICLE( l_U710[1], uVar11 );
            SET_CAM_ATTACH_OFFSET( l_U710[1], uVar12._fU0, uVar12._fU4, uVar12._fU8 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U710[1], 1 );
            POINT_CAM_AT_VEHICLE( l_U710[1], uVar11 );
            SET_CAM_POINT_OFFSET( l_U710[1], vVar15.x, vVar15.y, vVar15.z );
            SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U710[1], 1 );
            SET_CAM_FOV( l_U710[1], 40.00000000 );
        }
        else
        {
            ATTACH_CAM_TO_PED( l_U710[1], sub_2893() );
            SET_CAM_ATTACH_OFFSET( l_U710[1], 0.70000000, -1.40000000, 0.70000000 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U710[1], 1 );
            GET_CHAR_COORDINATES( iParam1, ref vVar15.x, ref vVar15.y, ref vVar15.z );
            vVar15.z += 0.50000000;
            POINT_CAM_AT_COORD( l_U710[1], vVar15.x, vVar15.y, vVar15.z );
            SET_CAM_FOV( l_U710[1], 50.00000000 );
        }
        l_U704++;
    }
    if (l_U704 == 11)
    {
        if (sub_27224())
        {
            l_U704 = 50;
            return 0;
        }
        if (NOT (sub_18351( l_U520 )))
        {
            if (bVar10)
            {
                if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar11, 0 )))
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar11, 2.50000000, 0.00000000, 0.00000000, ref l_U738._fU0, ref l_U738._fU4, ref l_U738._fU8 );
                }
                else if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uVar11, 1 )))
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar11, -2.50000000, 0.00000000, 0.00000000, ref l_U738._fU0, ref l_U738._fU4, ref l_U738._fU8 );
                }
                else
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar11, 2.50000000, 0.00000000, 0.00000000, ref l_U738._fU0, ref l_U738._fU4, ref l_U738._fU8 );
                }
                fVar9 = l_U738._fU8 + 1.50000000;
                GET_GROUND_Z_FOR_3D_COORD( l_U738._fU0, l_U738._fU4, fVar9, ref l_U738._fU8 );
            }
            else
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2893(), -1.50000000, -5.00000000, 10.00000000, ref l_U738._fU0, ref l_U738._fU4, ref l_U738._fU8 );
                fVar9 = l_U738._fU8;
                GET_GROUND_Z_FOR_3D_COORD( l_U738._fU0, l_U738._fU4, fVar9, ref l_U738._fU8 );
            }
            l_U487 = 0;
            if ((NOT (iParam1 == nil)) AND (NOT (IS_CHAR_DEAD( iParam1 ))))
            {
                if (IS_GROUP_MEMBER( iParam1, sub_13518() ))
                {
                    REMOVE_CHAR_FROM_GROUP( iParam1 );
                }
            }
            SETTIMERA( 0 );
            l_U704++;
        }
        else
        {
            BLOCK_CHAR_AMBIENT_ANIMS( iParam1, 1 );
        }
    }
    if (l_U704 == 12)
    {
        if (NOT (IS_CHAR_DEAD( sub_2893() )))
        {
            TASK_CLEAR_LOOK_AT( sub_2893() );
        }
        if ((sub_27816( iParam1, l_U738 )) || (TIMERA() > 7000))
        {
            l_U704++;
        }
    }
    if (l_U704 == 13)
    {
        sub_8103( uParam0 );
        DELETE_CHAR( ref iParam1 );
        sub_18738();
        SET_GAME_CAM_HEADING( 0.00000000 );
        l_U704 = 99;
    }
    if (l_U704 == 99)
    {
        l_U703 = 6;
        l_U704 = 0;
        return 1;
    }
    if (l_U704 == 50)
    {
        DO_SCREEN_FADE_OUT( 500 );
        SETTIMERA( 0 );
        l_U777 = 1;
        l_U704++;
    }
    if (l_U704 == 51)
    {
        if ((IS_SCREEN_FADED_OUT()) || (TIMERA() > 3000))
        {
            l_U704++;
        }
    }
    iVar38 = 0;
    if (l_U704 == 52)
    {
        sub_28287( ref l_U520, iVar38 );
        l_U487 = 0;
        if ((NOT (iParam1 == nil)) AND (NOT (IS_CHAR_DEAD( iParam1 ))))
        {
            if (IS_GROUP_MEMBER( iParam1, sub_13518() ))
            {
                REMOVE_CHAR_FROM_GROUP( iParam1 );
            }
        }
        sub_8103( uParam0 );
        DELETE_CHAR( ref iParam1 );
        sub_18738();
        SET_GAME_CAM_HEADING( 0.00000000 );
        l_U704++;
    }
    if (l_U704 == 53)
    {
        DO_SCREEN_FADE_IN( 500 );
        SETTIMERA( 0 );
        l_U704++;
    }
    if (l_U704 == 54)
    {
        if ((IS_SCREEN_FADED_IN()) || (TIMERA() > 3000))
        {
            l_U704 = 99;
        }
    }
    return 0;
}

int sub_16918(unknown uParam0, int iParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    int iVar9;

    if (IS_CHAR_DEAD( sub_2893() ))
    {
        return 1;
    }
    if (l_U705 == 0)
    {
        SET_CHAR_COORDINATES( iParam1, l_U758._fU0, l_U758._fU4, l_U758._fU8 );
        SET_CHAR_COORDINATES( sub_2893(), l_U761._fU0, l_U761._fU4, l_U761._fU8 );
        uVar5 = sub_17035( l_U761, l_U758 );
        SET_CHAR_HEADING( iParam1, uVar5 );
        uVar5 = sub_17035( l_U758, l_U761 );
        SET_CHAR_HEADING( sub_2893(), uVar5 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        sub_17151();
        SET_PLAYER_CONTROL( sub_4140(), 0 );
        l_U705++;
    }
    if (l_U705 == 1)
    {
        CREATE_CAM( 14, ref l_U710[1] );
        ATTACH_CAM_TO_PED( l_U710[1], sub_2893() );
        SET_CAM_ATTACH_OFFSET( l_U710[1], 0.70000000, -1.40000000, 0.70000000 );
        SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U710[1], 1 );
        GET_CHAR_COORDINATES( iParam1, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        uVar6._fU8 += 0.50000000;
        POINT_CAM_AT_COORD( l_U710[1], uVar6._fU0, uVar6._fU4, uVar6._fU8 );
        SET_CAM_FOV( l_U710[1], 50.00000000 );
        SET_CAM_ACTIVE( l_U710[1], 1 );
        SET_CAM_PROPAGATE( l_U710[1], 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        SETTIMERA( 0 );
        l_U705++;
    }
    if (l_U705 == 2)
    {
        if (TIMERA() > 2000)
        {
            l_U705++;
        }
    }
    if (l_U705 == 3)
    {
        DO_SCREEN_FADE_IN( 1000 );
        l_U705++;
    }
    if (l_U705 == 4)
    {
        if (IS_SCREEN_FADED_IN())
        {
            l_U705++;
        }
    }
    if (l_U705 == 5)
    {
        iVar9 = 0;
        sub_17614( iVar9 );
        sub_2779( uParam2 );
        sub_2942( 0, sub_2893(), "NIKO", 0 );
        sub_2942( l_U536, iParam1, ref l_U532, 0 );
        sub_17806( l_U537, ref l_U520 );
        l_U705++;
    }
    if (l_U705 == 6)
    {
        if (NOT (sub_18351( l_U520 )))
        {
            l_U487 = 0;
            if ((NOT (iParam1 == nil)) AND (NOT (IS_CHAR_DEAD( iParam1 ))))
            {
                if (IS_GROUP_MEMBER( iParam1, sub_13518() ))
                {
                    REMOVE_CHAR_FROM_GROUP( iParam1 );
                }
            }
            l_U705++;
        }
        else
        {
            BLOCK_CHAR_AMBIENT_ANIMS( iParam1, 1 );
        }
    }
    if (l_U705 == 7)
    {
        TASK_FOLLOW_NAV_MESH_TO_COORD( iParam1, l_U764._fU0, l_U764._fU4, l_U764._fU8, 2, -2, 0.10000000 );
        SETTIMERA( 0 );
        l_U705++;
    }
    if (l_U705 == 8)
    {
        if (TIMERA() > 5000)
        {
            l_U705++;
        }
    }
    if (l_U705 == 9)
    {
        sub_8103( uParam0 );
        DELETE_CHAR( ref iParam1 );
        sub_18738();
        SET_GAME_CAM_HEADING( 0.00000000 );
        return 1;
    }
    return 0;
}

void sub_17035(vector vParam0, vector vParam3)
{
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    float Result;

    uVar8 = {vParam0 - vParam3};
    Result = 0.00000000;
    GET_HEADING_FROM_VECTOR_2D( uVar8._fU0, uVar8._fU4, ref Result );
    return Result;
}

void sub_17151()
{
    int iVar2;

    l_U714 = 1;
    iVar2 = 0;
    BEGIN_CAM_COMMANDS( ref iVar2 );
    if (iVar2 == 1)
    {
        return;
    }
    while (iVar2 > 0)
    {
        END_CAM_COMMANDS( ref iVar2 );
    }
    BEGIN_CAM_COMMANDS( ref iVar2 );
    return;
}

void sub_17614(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8392 >= 4) AND (g_U8392 <= 8))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_17806(unknown uParam0, unknown uParam1)
{
    if (g_U22274[uParam0]._fU500._fU4)
    {
        sub_17841( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 0:
        sub_9310( "FCR_DRPOFF", uParam1, 7, 1 );
        return;
        case 3:
        sub_9310( "FCJ_DRPOFF", uParam1, 7, 1 );
        return;
        case 7:
        sub_9310( "FCD2_DRPOFF", uParam1, 7, 1 );
        return;
        case 8:
        sub_9310( "FCB2_DRPOFF", uParam1, 7, 1 );
        return;
        case 13:
        sub_9310( "FCP_DRPOFF", uParam1, 7, 1 );
        return;
    }
    sub_9310( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_17841(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 0:
        if (g_U15654[6])
        {
            sub_9310( "MF3_APPT", uParam1, 8, 1 );
        }
        else
        {
            sub_9310( "FCR_HDRPOF", uParam1, 8, 1 );
        }
        return;
        case 3:
        sub_9310( "FCJ_HOSPDRP", uParam1, 8, 1 );
        return;
        case 7:
        sub_9310( "FCD2_DRPOFF", uParam1, 8, 1 );
        break;
        case 8:
        sub_9310( "FCB2_DRPOFF", uParam1, 8, 1 );
        return;
        case 13:
        sub_9310( "FCP_DRPOFF", uParam1, 8, 1 );
        return;
    }
    sub_9310( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

int sub_18351(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_9486( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_9486( "\n speech is not playing" );
    }
    return 0;
}

void sub_18738()
{
    int iVar2;

    DESTROY_ALL_CAMS();
    SET_USE_HIGHDOF( 0 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    iVar2 = 0;
    END_CAM_COMMANDS( ref iVar2 );
    l_U714 = 0;
    return;
}

void sub_18875(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_18933();
        return;
        case 3:
        sub_19026();
        return;
        case 7:
        sub_19119();
        return;
        case 8:
        sub_19212();
        return;
        case 13:
        sub_19305();
        return;
    }
    sub_6045( "FriendDistribute_GTA4: Friend_Distribute_Add_Blip_For_Home: Not a friend" );
    sub_6045( "FriendDistribute_GTA4: Friend_Distribute_Add_Blip_For_Home: Should never reach here" );
    return;
}

void sub_18933()
{
    if (NOT (DOES_BLIP_EXIST( l_U582 )))
    {
        ADD_BLIP_FOR_COORD( l_U576._fU0, l_U576._fU4, l_U576._fU8, ref l_U582 );
        if (l_U490)
        {
            SET_ROUTE( l_U582, 1 );
        }
    }
    return;
}

void sub_19026()
{
    if (NOT (DOES_BLIP_EXIST( l_U654 )))
    {
        ADD_BLIP_FOR_COORD( l_U648._fU0, l_U648._fU4, l_U648._fU8, ref l_U654 );
        if (l_U490)
        {
            SET_ROUTE( l_U654, 1 );
        }
    }
    return;
}

void sub_19119()
{
    if (NOT (DOES_BLIP_EXIST( l_U692 )))
    {
        ADD_BLIP_FOR_COORD( l_U686._fU0, l_U686._fU4, l_U686._fU8, ref l_U692 );
        if (l_U490)
        {
            SET_ROUTE( l_U692, 1 );
        }
    }
    return;
}

void sub_19212()
{
    if (NOT (DOES_BLIP_EXIST( l_U663 )))
    {
        ADD_BLIP_FOR_COORD( l_U657._fU0, l_U657._fU4, l_U657._fU8, ref l_U663 );
        if (l_U490)
        {
            SET_ROUTE( l_U663, 1 );
        }
    }
    return;
}

void sub_19305()
{
    if (NOT (DOES_BLIP_EXIST( l_U701 )))
    {
        ADD_BLIP_FOR_COORD( l_U695._fU0, l_U695._fU4, l_U695._fU8, ref l_U701 );
        if (l_U490)
        {
            SET_ROUTE( l_U701, 1 );
        }
    }
    return;
}

void sub_19587(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    switch (uParam0)
    {
        case 0:
        sub_19648( uParam1 );
        return;
        case 3:
        sub_19735( uParam1 );
        return;
        case 7:
        sub_19822( uParam1 );
        return;
        case 8:
        sub_19909( uParam1 );
        return;
        case 13:
        sub_19996( uParam1 );
        return;
    }
    sub_6045( "FriendDistribute_GTA4: Friend_Distribute_Add_Blip_For_Dropoff: Not a friend" );
    sub_6045( "FriendDistribute_GTA4: Friend_Distribute_Add_Blip_For_Dropoff: Should never reach here" );
    return;
}

void sub_19648(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (DOES_BLIP_EXIST( l_U582 )))
    {
        ADD_BLIP_FOR_COORD( uParam0._fU0, uParam0._fU4, uParam0._fU8, ref l_U582 );
        if (l_U490)
        {
            SET_ROUTE( l_U582, 1 );
        }
    }
    return;
}

void sub_19735(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (DOES_BLIP_EXIST( l_U654 )))
    {
        ADD_BLIP_FOR_COORD( uParam0._fU0, uParam0._fU4, uParam0._fU8, ref l_U654 );
        if (l_U490)
        {
            SET_ROUTE( l_U654, 1 );
        }
    }
    return;
}

void sub_19822(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (DOES_BLIP_EXIST( l_U692 )))
    {
        ADD_BLIP_FOR_COORD( uParam0._fU0, uParam0._fU4, uParam0._fU8, ref l_U692 );
        if (l_U490)
        {
            SET_ROUTE( l_U692, 1 );
        }
    }
    return;
}

void sub_19909(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (DOES_BLIP_EXIST( l_U663 )))
    {
        ADD_BLIP_FOR_COORD( uParam0._fU0, uParam0._fU4, uParam0._fU8, ref l_U663 );
        if (l_U490)
        {
            SET_ROUTE( l_U663, 1 );
        }
    }
    return;
}

void sub_19996(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (DOES_BLIP_EXIST( l_U701 )))
    {
        ADD_BLIP_FOR_COORD( uParam0._fU0, uParam0._fU4, uParam0._fU8, ref l_U701 );
        if (l_U490)
        {
            SET_ROUTE( l_U701, 1 );
        }
    }
    return;
}

void sub_20452(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (g_U22274[uParam0]._fU500._fU4)
    {
        sub_17841( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        sub_9310( uParam2, uParam1, 7, 1 );
        return;
        case 8:
        sub_9310( uParam2, uParam1, 7, 1 );
        return;
    }
    sub_9310( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_20619(unknown uParam0, unknown uParam1)
{
    if (g_U22274[uParam0]._fU500._fU4)
    {
        sub_20654( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 0:
        sub_9310( "FCR_TKHM", uParam1, 7, 1 );
        return;
        case 3:
        sub_9310( "FCJ_TKHM2", uParam1, 7, 1 );
        return;
        case 7:
        sub_9310( "FCD2_TKHM", uParam1, 7, 1 );
        return;
        case 8:
        sub_9310( "FCB2_TKHM", uParam1, 7, 1 );
        return;
        case 13:
        sub_9310( "FCP_TKHM", uParam1, 7, 1 );
        return;
    }
    sub_9310( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_20654(unknown uParam0, unknown uParam1)
{
    unknown[2] uVar4;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    array(ref uVar4, 2);
    switch (uParam0)
    {
        case 0:
        if (g_U15654[6])
        {
            sub_20752( ref uVar4, "MF3_HOSP", "MF3_TKHM" );
            sub_21094( ref uVar4, uParam1, 8, 1 );
        }
        return;
        case 3: return;
        case 7:
        sub_9310( "FCD2_TKHM", uParam1, 8, 1 );
        break;
        case 8:
        sub_9310( "FCB2_TKHM", uParam1, 8, 1 );
        return;
        case 13:
        sub_9310( "FCP_TKHM", uParam1, 8, 1 );
        return;
    }
    sub_9310( "PLACEHOLDER", uParam1, 8, 1 );
    return;
}

void sub_20752(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_20803( uParam0, uParam1, uParam2, "END", "END", "END", "END", "END", "END" );
    return;
}

void sub_20803(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    char[16] cVar11;
    int I;

    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        switch (I)
        {
            case 0:
            StrCopy( ref cVar11, uParam1, 16 );
            break;
            case 1:
            StrCopy( ref cVar11, uParam2, 16 );
            break;
            case 2:
            StrCopy( ref cVar11, uParam3, 16 );
            break;
            case 3:
            StrCopy( ref cVar11, uParam4, 16 );
            break;
            case 4:
            StrCopy( ref cVar11, uParam5, 16 );
            break;
            case 5:
            StrCopy( ref cVar11, uParam6, 16 );
            break;
            case 6:
            StrCopy( ref cVar11, uParam7, 16 );
            break;
            case 7:
            StrCopy( ref cVar11, uParam8, 16 );
            break;
            case 8:
            StrCopy( ref cVar11, "END", 16 );
            break;
        }
        (uParam0^)[I] = {cVar11};
        if (COMPARE_STRING( ref (uParam0^)[I], "END" ))
        {
            I = (uParam0^);
        }
    }
    return;
}

void sub_21094(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_21117( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3 );
}

void sub_21117(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;

    StrCopy( ref cVar7, uParam1, 16 );
    return sub_9387( uParam0, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

void sub_21497(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        PRINT_NOW( "RMDRKHM", 7500, 1 );
        break;
        case 3:
        PRINT_NOW( "JBDRKHM", 7500, 1 );
        break;
        case 7:
        PRINT_NOW( "DWDRKHM", 7500, 1 );
        break;
        case 8:
        PRINT_NOW( "BRDRKHM", 7500, 1 );
        break;
        case 13:
        PRINT_NOW( "PKDRKHM", 7500, 1 );
        break;
    }
    return;
}

void sub_21697(unknown uParam0, boolean bParam1)
{
    boolean bVar4;
    boolean bVar5;

    if ((g_U9193) AND (g_U9194))
    {
        return;
    }
    if (g_U22274[uParam0]._fU500._fU4)
    {
        return;
    }
    bVar4 = false;
    if (NOT g_U9193)
    {
        if (bParam1)
        {
            bVar4 = true;
        }
    }
    bVar5 = false;
    if (NOT g_U9194)
    {
        if (g_U22274[uParam0]._fU144 == 7)
        {
            bVar5 = true;
        }
    }
    if (bVar5)
    {
        if (bVar4)
        {
            sub_21829( uParam0 );
            g_U9194 = 1;
            return;
        }
        PRINT_HELP( "FRDRUNK" );
        g_U9194 = 1;
        return;
    }
    if (bVar4)
    {
        if (g_U32898._fU32 == 0)
        {
            sub_22067( uParam0 );
        }
        else
        {
            sub_22250( uParam0 );
        }
        g_U9193 = 1;
    }
    return;
}

void sub_21829(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        PRINT_HELP( "FRDRHMR" );
        break;
        case 3:
        PRINT_HELP( "FRDRHMJ" );
        break;
        case 7:
        PRINT_HELP( "FRDRHMD" );
        break;
        case 8:
        PRINT_HELP( "FRDRHMB" );
        break;
        case 13:
        PRINT_HELP( "FRDRHMP" );
        break;
    }
    return;
}

void sub_22067(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        PRINT_HELP( "FRALTRH" );
        break;
        case 3:
        PRINT_HELP( "FRALTJH" );
        break;
        case 7:
        PRINT_HELP( "FRALTDH" );
        break;
        case 8:
        PRINT_HELP( "FRALTBH" );
        break;
        case 13:
        PRINT_HELP( "FRALTPH" );
        break;
    }
    return;
}

void sub_22250(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        PRINT_HELP( "FRALTR" );
        break;
        case 3:
        PRINT_HELP( "FRALTJ" );
        break;
        case 7:
        PRINT_HELP( "FRALTD" );
        break;
        case 8:
        PRINT_HELP( "FRALTB" );
        break;
        case 13:
        PRINT_HELP( "FRALTP" );
        break;
    }
    return;
}

void sub_22454(unknown uParam0, boolean bParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    boolean bVar7;

    if (l_U757)
    {
        return;
    }
    bVar7 = true;
    if (l_U501)
    {
        bVar7 = false;
    }
    if (bVar7)
    {
        if (bParam1)
        {
            sub_18875( uParam0 );
        }
        else
        {
            sub_19587( uParam0, uParam2 );
        }
        return;
    }
    sub_22533( uParam0 );
    return;
}

void sub_22533(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_22591();
        return;
        case 3:
        sub_22623();
        return;
        case 7:
        sub_22655();
        return;
        case 8:
        sub_22687();
        return;
        case 13:
        sub_22719();
        return;
    }
    sub_6045( "FriendDistribute_GTA4: Friend_Distribute_Remove_Blip_For_Home: Not a friend" );
    sub_6045( "FriendDistribute_GTA4: Friend_Distribute_Remove_Blip_For_Home: Should never reach here" );
    return;
}

void sub_22591()
{
    REMOVE_BLIP( l_U582 );
    return;
}

void sub_22623()
{
    REMOVE_BLIP( l_U654 );
    return;
}

void sub_22655()
{
    REMOVE_BLIP( l_U692 );
    return;
}

void sub_22687()
{
    REMOVE_BLIP( l_U663 );
    return;
}

void sub_22719()
{
    REMOVE_BLIP( l_U701 );
    return;
}

int sub_23015(unknown uParam0)
{
    unknown uVar3;
    vector vVar4;

    if (IS_CHAR_DEAD( uParam0 ))
    {
        return 0;
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2893() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2893(), ref uVar3 );
        if (NOT (IS_CHAR_SITTING_IN_CAR( sub_2893(), uVar3 )))
        {
            return 0;
        }
        return IS_CHAR_SITTING_IN_CAR( uParam0, uVar3 );
    }
    if (IS_CHAR_IN_ANY_CAR( uParam0 ))
    {
        return 0;
    }
    vVar4 = {0.00000000, 0.00000000, 0.00000000};
    GET_CHAR_COORDINATES( uParam0, ref vVar4.x, ref vVar4.y, ref vVar4.z );
    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2893(), vVar4.x, vVar4.y, vVar4.z, 4.00000000, 4.00000000, 4.00000000, 0 )))
    {
        return 0;
    }
    return 1;
}

void sub_23262(unknown uParam0, unknown uParam1)
{
    if (NOT l_U501)
    {
        sub_8862( uParam1 );
        return;
    }
    sub_8630( uParam0, uParam1 );
    return;
}

void sub_23316(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_23374();
        return;
        case 3:
        sub_23408();
        return;
        case 7:
        sub_23442();
        return;
        case 8:
        sub_23476();
        return;
        case 13:
        sub_23510();
        return;
    }
    sub_6045( "FriendDistribute_GTA4: Friend_Distribute_Maintain_Friend_Blip: Not a friend" );
    sub_6045( "FriendDistribute_GTA4: Friend_Distribute_Maintain_Friend_Blip: Should never reach here" );
    return;
}

void sub_23374()
{
    sub_23262( l_U574, ref l_U575 );
    return;
}

void sub_23408()
{
    sub_23262( l_U646, ref l_U647 );
    return;
}

void sub_23442()
{
    sub_23262( l_U684, ref l_U685 );
    return;
}

void sub_23476()
{
    sub_23262( l_U655, ref l_U656 );
    return;
}

void sub_23510()
{
    sub_23262( l_U693, ref l_U694 );
    return;
}

int sub_23832(unknown uParam0, unknown uParam1)
{
    if (sub_23845( ref l_U741 ))
    {
        if (sub_3614( l_U741 ))
        {
            sub_14121( ref l_U741 );
            sub_23960( uParam0, ref l_U520, l_U536, uParam1, l_U532 );
            return 1;
        }
    }
    if (sub_23845( ref l_U745 ))
    {
        if (sub_3614( l_U745 ))
        {
            sub_14121( ref l_U745 );
            sub_24184( uParam0, ref l_U520, l_U536, uParam1, l_U532 );
            l_U749 = 1;
            return 1;
        }
    }
    return 0;
}

int sub_23845(int iParam0)
{
    if (((((ref iParam0->_fU0->_fU4) == -1) AND ((ref iParam0->_fU0->_fU0) == -1)) AND ((ref iParam0->_fU8->_fU0) == -1)) AND ((ref iParam0->_fU8->_fU4) == -1))
    {
        return 0;
    }
    return 1;
}

void sub_23960(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    switch (uParam0)
    {
        case 0:
        case 3:
        case 7:
        case 8: return;
        case 13:
        sub_2779( "FCPAAUD" );
        sub_2942( 0, sub_2893(), "NIKO", 0 );
        sub_2942( uParam2, uParam3, ref uParam4, 0 );
        sub_9310( "FCP_BGET", uParam1, 7, 1 );
        return;
    }
    sub_9310( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

void sub_24184(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    switch (uParam0)
    {
        case 0:
        sub_2779( "FCR21AU" );
        sub_2942( 0, sub_2893(), "NIKO", 0 );
        sub_2942( uParam2, uParam3, ref uParam4, 0 );
        sub_9310( "FCR_TKHM", uParam1, 7, 1 );
        return;
        case 3:
        sub_2779( "FCPAAUD" );
        sub_2942( 0, sub_2893(), "NIKO", 0 );
        sub_2942( uParam2, uParam3, ref uParam4, 0 );
        sub_9310( "FCJ_BTKHM", uParam1, 7, 1 );
        return;
        case 7:
        sub_2779( "FCD2AU" );
        sub_2942( 0, sub_2893(), "NIKO", 0 );
        sub_2942( uParam2, uParam3, ref uParam4, 0 );
        sub_9310( "FCD2_TKHM", uParam1, 7, 1 );
        return;
        case 8:
        sub_2779( "FCB2AU" );
        sub_2942( 0, sub_2893(), "NIKO", 0 );
        sub_2942( uParam2, uParam3, ref uParam4, 0 );
        sub_9310( "FCB2_TKHM", uParam1, 7, 1 );
        return;
        case 13:
        sub_2779( "FCPAAUD" );
        sub_2942( 0, sub_2893(), "NIKO", 0 );
        sub_2942( uParam2, uParam3, ref uParam4, 0 );
        sub_9310( "FCP_BTKHM", uParam1, 7, 1 );
        return;
    }
    sub_9310( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

int sub_25187()
{
    int iVar2;
    unknown uVar3;
    float fVar4;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (l_U572 == 0)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_2893() )))
        {
            return 1;
        }
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2893() )))
        {
            return 0;
        }
        SET_PLAYER_CONTROL( sub_4140(), 0 );
        l_U499 = iVar2 + 4000;
        l_U572 = 1;
    }
    if (l_U572 == 1)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_2893() )))
        {
            l_U572 = 0;
            return 1;
        }
        if (sub_8180( sub_2893() ))
        {
            return 0;
        }
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2893(), ref uVar3 );
        GET_CAR_SPEED( uVar3, ref fVar4 );
        if ((fVar4 < 0.04000000) || (l_U499 < iVar2))
        {
            SET_PLAYER_CONTROL( sub_4140(), 1 );
            l_U572 = 0;
            return 1;
        }
    }
    return 0;
}

void sub_25436(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_25494();
        return;
        case 3:
        sub_25523();
        return;
        case 7:
        sub_25552();
        return;
        case 8:
        sub_25581();
        return;
        case 13:
        sub_25610();
        return;
    }
    sub_6045( "FriendDistribute_GTA4: Friend_Distribute_Remove_Friend_Blip: Not a friend" );
    sub_6045( "FriendDistribute_GTA4: Friend_Distribute_Remove_Friend_Blip: Should never reach here" );
    return;
}

void sub_25494()
{
    sub_8862( ref l_U575 );
    return;
}

void sub_25523()
{
    sub_8862( ref l_U647 );
    return;
}

void sub_25552()
{
    sub_8862( ref l_U685 );
    return;
}

void sub_25581()
{
    sub_8862( ref l_U656 );
    return;
}

void sub_25610()
{
    sub_8862( ref l_U694 );
    return;
}

void sub_26168(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    float Result;

    Result = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref Result );
    return Result;
}

void sub_26367(unknown uParam0, unknown uParam1)
{
    if (g_U22274[uParam0]._fU500._fU4)
    {
        sub_17841( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        sub_9310( "FCJ_DRPOFFL", uParam1, 7, 1 );
        return;
        case 8:
        sub_9310( "FCB2_DOFFL", uParam1, 7, 1 );
        return;
    }
    sub_9310( "PLACEHOLDER", uParam1, 7, 1 );
    return;
}

int sub_27224()
{
    if ((((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_27816(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (l_U573 == 0)
    {
        if (IS_GROUP_MEMBER( uParam0, sub_13518() ))
        {
            REMOVE_CHAR_FROM_GROUP( uParam0 );
        }
        if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
        {
            l_U573 = 1;
            return 0;
        }
        SET_PLAYER_CONTROL( sub_4140(), 0 );
        TASK_LEAVE_ANY_CAR( uParam0 );
        l_U573 = 1;
    }
    if (l_U573 == 1)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
        {
            TASK_FOLLOW_NAV_MESH_TO_COORD( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8, 2, -2, 0.10000000 );
            SETTIMERA( 0 );
            l_U573 = 2;
        }
    }
    if (l_U573 == 2)
    {
        if (TIMERA() > 3000)
        {
            SET_PLAYER_CONTROL( sub_4140(), 1 );
            l_U573 = 0;
            return 1;
        }
    }
    return 0;
}

void sub_28287(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_28627()
{
    unknown uVar2;

    uVar2 = sub_10678( l_U780 );
    if (l_U780 < 23)
    {
        uVar2 = sub_10678( l_U780 );
        sub_28676( uVar2, 0, 17 );
        sub_28754( uVar2, l_U785, 50.00000000 );
    }
    return;
}

void sub_28676(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    g_U10981[uParam0]._fU292._fU4 = 1;
    iVar5 = 0;
    sub_2133( ref g_U10981[uParam0]._fU292._fU8, uParam1, uParam2, iVar5 );
    return;
}

void sub_28754(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    g_U10981[uParam0]._fU292._fU24 = 1;
    g_U10981[uParam0]._fU292._fU28 = {uParam1};
    g_U10981[uParam0]._fU292._fU40 = uParam4;
    return;
}

void sub_28875()
{
    int iVar2;
    int iVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (l_U704 == 0)
    {
        iVar2 = 0;
        iVar3 = 15;
        iVar4 = 0;
        sub_2133( ref l_U789, iVar2, iVar3, iVar4 );
        uVar5 = sub_10678( l_U780 );
        sub_28934( uVar5 );
        l_U704++;
    }
    if (l_U704 == 1)
    {
        if (sub_3614( l_U789 ))
        {
            uVar6 = g_U22274[l_U780]._fU104;
            uVar7 = sub_29202( l_U780 );
            sub_29325( uVar6 );
            sub_29434( uVar6, l_U780, uVar7, 0 );
            l_U707 = 1;
            l_U708 = 10;
            return;
        }
    }
    return;
}

void sub_28934(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 0:
        case 7:
        iVar3 = -10;
        break;
        case 3:
        iVar3 = -10;
        break;
        case 8:
        case 13:
        iVar3 = -10;
        break;
        default:
        sub_6045( "Flow_Hospital_No_Pickup_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_11221( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_11221( uParam0, 0, iVar4 );
    return;
}

void sub_29202(unknown uParam0)
{
    unknown Result;
    int iVar4;

    Result = g_U22274[uParam0]._fU500._fU144;
    iVar4 = Result;
    iVar4++;
    if (iVar4 >= g_U22274[uParam0]._fU500._fU140)
    {
        iVar4 = g_U22274[uParam0]._fU500._fU136;
    }
    g_U22274[uParam0]._fU500._fU144 = iVar4;
    return Result;
}

void sub_29325(unknown uParam0)
{
    g_U63988._fU12[uParam0]._fU0 = 0;
    g_U63988._fU12[uParam0]._fU4 = 0;
    g_U63988._fU12[uParam0]._fU12 = 57;
    g_U63988._fU12[uParam0]._fU16 = 0;
    g_U63988._fU12[uParam0]._fU20 = 0;
    return;
}

void sub_29434(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    iVar6 = 7;
    sub_29456( uParam0, uParam1, uParam2, uParam3, iVar6 );
    return;
}

void sub_29456(int iParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;

    iVar7 = 59;
    if (iParam0 >= iVar7)
    {
        SCRIPT_ASSERT( "Text_Player: Unknown Txt ID. Tell Keith. Needs added to g_eAmbientTxtmsgs." );
        sub_29568( uParam1, uParam2 );
        return;
    }
    if (g_U63988._fU12[iParam0]._fU0)
    {
        SCRIPT_ASSERT( "Text_Player: Txt has already been setup." );
    }
    iVar8 = 0;
    GET_GAME_TIMER( ref iVar8 );
    g_U63988._fU12[iParam0]._fU0 = 1;
    g_U63988._fU12[iParam0]._fU4 = 0;
    g_U63988._fU12[iParam0]._fU8 = 0;
    g_U63988._fU12[iParam0]._fU12 = uParam1;
    g_U63988._fU12[iParam0]._fU16 = uParam2;
    g_U63988._fU12[iParam0]._fU20 = iVar8 + iParam3;
    g_U63988._fU12[iParam0]._fU28 = uParam4;
    sub_31502( iParam0, iParam3 );
    return;
}

void sub_29568(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;

    array(ref uVar4._fU0._fU0, 3);
    ref uVar4._fU0;
    ref uVar4;
    uVar11 = sub_29591( uParam0 );
    sub_30082( uVar11, uParam1, 16383, 16383, ref uVar4 );
    sub_30426( ref uVar4, 1 );
    sub_30454( ref uVar4, 0 );
    sub_30482( ref uVar4, 2 );
    sub_30512( ref uVar4 );
    return;
}

int sub_29591(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return 0;
        case 1: return 1;
        case 2: return 2;
        case 3: return 3;
        case 4: return 4;
        case 5: return 5;
        case 6: return 6;
        case 7: return 7;
        case 8: return 8;
        case 9: return 9;
        case 10: return 10;
        case 11: return 11;
        case 12: return 12;
        case 13: return 13;
        case 14: return 14;
        case 15: return 15;
        case 16: return 16;
        case 17: return 17;
        case 18: return 18;
        case 19: return 19;
        case 22: return 22;
        case 20: return 20;
        case 28: return 28;
        case 29: return 29;
        case 30: return 30;
        case 31: return 31;
        case 32: return 32;
        case 34: return 81;
        case 25: return 25;
    }
    sub_6045( "Flow_public: Return_Text_Message_From_Contact(): Contact Text Message ID not set up yet" );
    return 99;
}

void sub_30082(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_30104( uParam0, 0, iParam4 + 0 );
    sub_30104( uParam1, 1, iParam4 + 0 );
    sub_30104( uParam2, 2, iParam4 + 0 );
    sub_30104( uParam3, 3, iParam4 + 0 );
    sub_30104( 0, 4, iParam4 + 0 );
    sub_30104( 1, 5, iParam4 + 0 );
    sub_30104( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_30104(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 14, 23, uParam0 );
        break;
        case 1:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 0, 13, uParam0 );
        break;
        case 2:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 14, 27, uParam0 );
        break;
        case 3:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 0, 13, uParam0 );
        break;
        case 4:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 24, 27, uParam0 );
        break;
        case 5:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 28, 31, uParam0 );
        break;
        case 6:
        iParam2->_fU0[2] = uParam0;
        break;
    }
    return;
}

void sub_30426(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_30454(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

void sub_30482(int iParam0, unknown uParam1)
{
    sub_30104( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_30512(int iParam0)
{
    int I;
    int iVar4;
    char[16] cVar5;
    int iVar9;

    iVar4 = 0;
    StrCopy( ref cVar5, "TM_NAME_", 16 );
    if (g_U91._fU540)
    {
        return 0;
    }
    if ((g_U569[g_U569 - 1]._fU0[0]) != -1)
    {
        if (NOT sub_30582())
        {
            sub_14459( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_30709( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_14459( iVar9 );
    }
    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (g_U569[I]._fU0[0] == -1)
        {
            g_U569[I] = {iParam0->_fU0};
            iParam0->_fU24 = I;
            I = g_U569;
            iVar4++;
            if (iVar4 > 1)
            {
                SET_PHONE_HUD_ITEM( 1, "UNREAD_MESSAGES", iVar4 );
            }
            else
            {
                ConcatString(ref cVar5, sub_14208( 0, iParam0->_fU0 ), 16);
                SET_PHONE_HUD_ITEM( 1, ref cVar5, iVar4 );
            }
            g_U91._fU520 = 1;
            PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
            if (g_U555 == 9)
            {
                g_U91._fU404 = 1015;
            }
            else if (g_U91._fU0 == 1014)
            {
                g_U91._fU92 = 1;
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 300, 1 );
            g_U15654[17] = 1;
        }
        else if ((sub_14208( 4, g_U569[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_30582()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_14208( 1, g_U569[I] )) != 0) AND (g_U569[I]._fU20))
        {
            sub_14459( I );
            return 1;
        }
    }
    return 0;
}

int sub_30709(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U569 - 1); Result++ )
    {
        if (g_U569[Result]._fU0[0] != -1)
        {
            if (sub_30774( uParam0, g_U569[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = g_U569;
        }
    }
    return -1;
}

int sub_30774(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[0] == uParam6._fU0[0]) AND (uParam0._fU0[2] == uParam6._fU0[2]))
    {
        iVar14 = sub_14208( 0, uParam0 );
        if (iVar14 == (sub_14208( 0, uParam6 )))
        {
            iVar15 = sub_14208( 3, uParam0 );
            if (iVar15 == (sub_14208( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_31502(unknown uParam0, int iParam1)
{
    g_U63988._fU12[uParam0]._fU24 = 0;
    if (iParam1 == 0)
    {
        return;
    }
    if (sub_31541( iParam1 ))
    {
        g_U63988._fU12[uParam0]._fU24 = iParam1;
        return;
    }
    return;
}

int sub_31541(int iParam0)
{
    int iVar3;

    iVar3 = sub_31550();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    iVar3 = sub_31605();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    return 0;
}

int sub_31550()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_31605()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_31793(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;

    if (IS_CHAR_INJURED( uParam0 ))
    {
        return 0;
    }
    if (NOT l_U487)
    {
        return 0;
    }
    if (IS_MINIGAME_IN_PROGRESS())
    {
        return 0;
    }
    if (NOT l_U502)
    {
        return 0;
    }
    if (IS_GROUP_MEMBER( uParam0, sub_13518() ))
    {
        return 0;
    }
    if (NOT l_U501)
    {
        TASK_LOOK_AT_CHAR( uParam0, sub_2893(), -2, 0 );
        l_U501 = 1;
    }
    GET_CHAR_COORDINATES( sub_2893(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    GET_CHAR_COORDINATES( uParam0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    fVar9 = sub_26168( uVar3, uVar6 );
    if (fVar9 < 12.00000000)
    {
        SET_GROUP_MEMBER( sub_13518(), uParam0 );
        TASK_CLEAR_LOOK_AT( uParam0 );
        l_U501 = 0;
        return 0;
    }
    PRINT_NOW( "FA_2FAR", 500, 1 );
    if (fVar9 < 200.00000000)
    {
        return 0;
    }
    TASK_CLEAR_LOOK_AT( uParam0 );
    return 1;
}

void sub_32100()
{
    boolean bVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    int iVar12;
    int iVar13;

    bVar2 = false;
    uVar3 = sub_10678( l_U780 );
    array(ref uVar4._fU0._fU0, 3);
    ref uVar4._fU0;
    ref uVar4;
    iVar12 = -1;
    iVar13 = -1;
    switch (l_U708)
    {
        case 0:
        g_U22274[l_U780]._fU500._fU184 = l_U781;
        g_U22274[l_U780]._fU500._fU8 = 1;
        bVar2 = sub_32257( l_U781 );
        if (bVar2)
        {
            sub_32340( uVar3 );
        }
        sub_14121( ref l_U789 );
        break;
        case 9:
        iVar12 = g_U22274[l_U780]._fU104;
        iVar13 = sub_33270( l_U780 );
        sub_29325( iVar12 );
        sub_29456( iVar12, l_U780, iVar13, 5000, 5 );
        sub_28627();
        break;
        case 10: break;
        case 7:
        sub_33445( l_U781, l_U780 );
        break;
        case 11: break;
        case 12: break;
        default: sub_973( "Unrecognised Fail ID" );
    }
    sub_33774( bVar2 );
    sub_34149();
    return;
}

void sub_32257(unknown uParam0)
{
    int Result;

    Result = 0;
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (NOT (IS_CHAR_DEAD( sub_2893() )))
        {
            Result = HAS_CHAR_BEEN_DAMAGED_BY_CHAR( uParam0, sub_2893(), 0 );
        }
    }
    return Result;
}

void sub_32340(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        sub_32549( uParam0, 0, -10, -10, 0, 0 );
        break;
        default: sub_33083( "Flow_Killed_By_Player_Stats_Update: Need to add stat details for strand" );
    }
    return;
}

void sub_32549(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_32560( uParam1 );
    sub_32734( uParam0, 0, uParam2 );
    sub_32734( uParam0, 1, uParam3 );
    sub_32734( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_32943();
    return;
}

void sub_32560(unknown uParam0)
{
    ADD_SCORE( sub_4140(), uParam0 );
    sub_32585( uParam0 );
    return;
}

void sub_32585(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_6045( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_32734(unknown uParam0, int iParam1, int iParam2)
{
    g_U10981[uParam0]._fU40[iParam1] += iParam2;
    if (g_U10981[uParam0]._fU40[iParam1] < 0)
    {
        g_U10981[uParam0]._fU40[iParam1] = 0;
    }
    if (g_U10981[uParam0]._fU40[iParam1] > 100)
    {
        g_U10981[uParam0]._fU40[iParam1] = 100;
    }
    if (iParam1 == 1)
    {
        sub_11378( uParam0 );
    }
    return;
}

void sub_32943()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_33083(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

void sub_33270(unknown uParam0)
{
    unknown Result;
    int iVar4;

    Result = g_U22274[uParam0]._fU500._fU156;
    iVar4 = Result;
    iVar4++;
    if (iVar4 >= g_U22274[uParam0]._fU500._fU152)
    {
        iVar4 = g_U22274[uParam0]._fU500._fU148;
    }
    g_U22274[uParam0]._fU500._fU156 = iVar4;
    return Result;
}

void sub_33445(unknown uParam0, unknown uParam1)
{
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    uVar4 = g_U22274[uParam1]._fU104;
    uVar5 = g_U22274[uParam1]._fU136;
    sub_29325( uVar4 );
    sub_29434( uVar4, uParam1, uVar5, 0 );
    uVar6 = sub_10678( uParam1 );
    sub_33518( uVar6 );
    return;
}

void sub_33518(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 0:
        case 7:
        iVar3 = -10;
        break;
        case 3:
        iVar3 = -10;
        break;
        case 8:
        case 13:
        iVar3 = -10;
        break;
        default:
        sub_6045( "Flow_Friend_Left_Behind_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_11221( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_11221( uParam0, 0, iVar4 );
    return;
}

void sub_33774(boolean bParam0)
{
    switch (l_U708)
    {
        case 0:
        case 1:
        case 2:
        if (bParam0)
        {
            PRINT_NOW( "FAFUKIL", 7000, 1 );
        }
        else
        {
            PRINT_NOW( "FAFDEAD", 7000, 1 );
        }
        break;
        case 3: break;
        case 4:
        case 5:
        if (bParam0)
        {
            PRINT_NOW( "FAFVKIL", 7000, 1 );
        }
        else
        {
            PRINT_NOW( "FAFVDED", 7000, 1 );
        }
        break;
        case 6:
        PRINT_NOW( "FAFABAN", 7000, 1 );
        break;
        case 9: break;
        case 10: break;
        case 7:
        PRINT_NOW( "FAFLEFT", 7000, 1 );
        break;
        case 8: break;
        case 11:
        PRINT_NOW( "FAFFORC", 7000, 1 );
        break;
        case 12:
        PRINT_NOW( "FAFNONE", 7000, 1 );
        break;
    }
    return;
}

void sub_34149()
{
    sub_8862( ref l_U751 );
    sub_8584();
    REMOVE_BLIP( l_U788 );
    sub_8103( l_U780 );
    REMOVE_DECISION_MAKER( l_U506 );
    l_U487 = 0;
    if ((NOT (l_U781 == nil)) AND (NOT (IS_CHAR_DEAD( l_U781 ))))
    {
        if (IS_GROUP_MEMBER( l_U781, sub_13518() ))
        {
            REMOVE_CHAR_FROM_GROUP( l_U781 );
        }
        if (IS_CHAR_INJURED( l_U781 ))
        {
            SET_PED_DIES_WHEN_INJURED( l_U781, 1 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U781 );
        }
        else
        {
            DELETE_CHAR( ref l_U781 );
        }
    }
    if (IS_HINT_RUNNING())
    {
        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
    }
    sub_34372();
    CLEAR_HELP();
    if (g_U22274[l_U780]._fU500._fU176)
    {
        g_U26753 = 0;
    }
    if (l_U709)
    {
        g_U10978 = 0;
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_34372()
{
    int iVar2;

    if (l_U718)
    {
        DELETE_WIDGET_GROUP( l_U719 );
    }
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U715 );
    if (l_U714)
    {
        SET_CAM_ACTIVE( l_U710[1], 0 );
        SET_CAM_PROPAGATE( l_U710[1], 0 );
        sub_18738();
    }
    if (IS_PLAYER_PLAYING( sub_4140() ))
    {
        SET_PLAYER_CONTROL( sub_4140(), 1 );
    }
    CLEAR_HELP();
    sub_34498();
    iVar2 = 0;
    sub_17614( iVar2 );
    return;
}

void sub_34498()
{
    int I;

    g_U32898._fU0 = 54;
    g_U32898._fU4 = 9;
    g_U32898._fU8 = 9;
    g_U32898._fU12 = 9;
    g_U32898._fU16 = 8;
    g_U32898._fU20 = 8;
    g_U32898._fU24 = 0;
    g_U32898._fU28 = 0;
    g_U32898._fU32 = 0;
    g_U32898._fU72 = 0;
    I = 0;
    for ( I = 0; I < 8; I++ )
    {
        g_U32898._fU36[I] = 0;
    }
    return;
}

void sub_34769(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    boolean bVar5;
    unknown uVar6;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    sub_34791( uParam0 );
    sub_35430();
    if (l_U723._fU0)
    {
        if (sub_18351( l_U520 ))
        {
            return;
        }
        if (IS_PLAYER_PLAYING( sub_4140() ))
        {
            if (IS_AMBIENT_SPEECH_PLAYING( sub_2893() ))
            {
                return;
            }
            STOP_PED_SPEAKING( sub_2893(), 1 );
        }
        l_U723._fU0 = 0;
        l_U723._fU4 = 1;
        l_U723._fU12 = 0;
        l_U723._fU20 = 0;
        l_U723._fU24 = 0;
        l_U723._fU28 = 0;
        return;
    }
    sub_35952( uParam0 );
    if (l_U723._fU4)
    {
        if (sub_36667( uParam0 ))
        {
            l_U723._fU4 = 0;
            if (l_U723._fU8)
            {
                l_U723._fU20 = iVar3 + 10000;
            }
            else if (g_U15654[6])
            {
                l_U723._fU20 = iVar3 + 15000;
            }
            else
            {
                l_U723._fU20 = iVar3 + 5000;
            }
            return;
        }
    }
    if (NOT (l_U723._fU20 == 0))
    {
        if (NOT (sub_36667( uParam0 )))
        {
            l_U723._fU4 = 1;
            l_U723._fU20 = 0;
            return;
        }
        if (iVar3 > l_U723._fU20)
        {
            bVar4 = false;
            if (NOT l_U723._fU8)
            {
                sub_37047( l_U537 );
                sub_2942( 0, sub_2893(), "NIKO", 0 );
                sub_2942( l_U536, uParam0, ref l_U532, 0 );
                if (NOT (sub_37488( l_U537, ref l_U526, l_U723._fU16 )))
                {
                    bVar4 = true;
                }
            }
            else
            {
                sub_42208( l_U537 );
                sub_2942( 0, sub_2893(), "NIKO", 0 );
                sub_2942( l_U536, uParam0, ref l_U532, 0 );
                sub_42610( l_U537, ref l_U526 );
            }
            if (bVar4)
            {
                ;
            }
            l_U723._fU20 = 0;
            l_U723._fU12 = 1;
            g_U22274[l_U537]._fU688._fU28 = -1;
        }
        return;
    }
    if (sub_46034( uParam0 ))
    {
        return;
    }
    if (l_U723._fU12)
    {
        if (g_U22274[l_U537]._fU688._fU24 >= 0)
        {
            bVar5 = false;
            if (NOT l_U723._fU24)
            {
                if ((sub_34825( ref l_U526 )) || ((sub_35555( l_U526 )) > 5))
                {
                    bVar5 = true;
                }
            }
            if (bVar5)
            {
                if (g_U15654[6])
                {
                    return;
                }
                l_U723._fU12 = 0;
                uVar6 = g_U22274[l_U537]._fU688._fU24;
                SET_BIT( ref g_U22274[l_U537]._fU688._fU4, uVar6 );
                if (IS_PLAYER_PLAYING( sub_4140() ))
                {
                    STOP_PED_SPEAKING( sub_2893(), 0 );
                }
            }
            return;
        }
    }
    return;
}

void sub_34791(unknown uParam0)
{
    unknown uVar3;

    if (l_U723._fU24)
    {
        l_U776 = 0;
        return;
    }
    if (NOT (sub_34825( ref l_U526 )))
    {
        l_U776 = 0;
        return;
    }
    if (IS_CHAR_DEAD( sub_2893() ))
    {
        l_U776 = 0;
        return;
    }
    if (IS_CHAR_DEAD( uParam0 ))
    {
        l_U776 = 0;
        return;
    }
    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2893() )))
    {
        l_U776 = 0;
        return;
    }
    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2893(), ref uVar3 );
    if (NOT (IS_CHAR_SITTING_IN_CAR( uParam0, uVar3 )))
    {
        l_U776 = 0;
        return;
    }
    if (l_U776)
    {
        if (NOT sub_35015())
        {
            SAY_AMBIENT_SPEECH( sub_2893(), "MESSING_WITH_PHONE", 0, 0, 0 );
            l_U776 = 0;
        }
        return;
    }
    if (sub_35106( l_U537, 1 ))
    {
        l_U776 = 1;
        return;
    }
    return;
}

int sub_34825(int iParam0)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8393)
        {
            return 0;
        }
    }
    return 1;
}

int sub_35015()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_35106(int iParam0, boolean bParam1)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        sub_9486( "\n IS_PLAYER_CALLING_CONTACT - Scripted Conversation ongoing" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_9486( "\n IS_PLAYER_CALLING_CONTACT - speech control is streaming" );
        return 0;
        break;
    }
    if ((g_U91._fU0 == 1005) AND (g_U91._fU60 == iParam0))
    {
        if (bParam1)
        {
            if ((g_U91._fU508 >= 4) AND (NOT g_U91._fU372))
            {
                return 1;
            }
        }
        else if (NOT g_U91._fU368)
        {
            return 1;
        }
    }
    return 0;
}

void sub_35430()
{
    if (l_U779)
    {
        if (sub_34825( ref l_U520 ))
        {
            l_U723._fU48 = 0;
            l_U779 = 0;
            l_U778 = 0;
        }
        return;
    }
    if (NOT l_U778)
    {
        return;
    }
    if (NOT l_U723._fU24)
    {
        l_U723._fU48 = 1;
        sub_35525();
        return;
    }
    if (NOT (sub_34825( ref l_U526 )))
    {
        return;
    }
    if (IS_CHAR_DEAD( sub_2893() ))
    {
        return;
    }
    if ((IS_CHAR_SITTING_IN_ANY_CAR( sub_2893() )) AND (NOT (sub_8180( sub_2893() ))))
    {
        sub_2779( "MF10AUD" );
        sub_2942( 0, sub_2893(), "NIKO", 0 );
        sub_9310( "MF5_DRUNK", ref l_U520, 7, 1 );
        l_U778 = 0;
        l_U779 = 1;
        return;
    }
    l_U779 = 0;
    l_U778 = 0;
    return;
}

void sub_35525()
{
    unknown uVar2;

    if (l_U723._fU24)
    {
        return;
    }
    uVar2 = sub_35555( l_U526 );
    g_U22274[l_U537]._fU688._fU28 = uVar2;
    return;
}

void sub_35555(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_18351( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

void sub_35952(unknown uParam0)
{
    sub_35963( uParam0 );
    sub_36138( uParam0 );
    sub_36460( uParam0 );
    return;
}

void sub_35963(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    float fVar9;

    if ((IS_CHAR_DEAD( sub_2893() )) || (IS_CHAR_DEAD( uParam0 )))
    {
        return;
    }
    GET_CHAR_COORDINATES( sub_2893(), ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
    GET_CHAR_COORDINATES( uParam0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
    fVar9 = sub_26168( uVar3, uVar6 );
    if (l_U723._fU36)
    {
        if (fVar9 < 6.00000000)
        {
            l_U723._fU36 = 0;
        }
        return;
    }
    if (fVar9 < 12.00000000)
    {
        return;
    }
    l_U723._fU36 = 1;
    sub_35525();
    return;
}

void sub_36138(unknown uParam0)
{
    boolean bVar3;
    int iVar4;
    int iVar5;

    if ((IS_CHAR_DEAD( sub_2893() )) || (IS_CHAR_DEAD( uParam0 )))
    {
        return;
    }
    bVar3 = false;
    if (IS_CHAR_INJURED( sub_2893() ))
    {
        bVar3 = true;
    }
    if (IS_CHAR_INJURED( uParam0 ))
    {
        bVar3 = true;
    }
    if (NOT bVar3)
    {
        iVar4 = 0;
        iVar5 = 0;
        GET_CHAR_HEALTH( sub_2893(), ref iVar4 );
        GET_CHAR_HEALTH( uParam0, ref iVar5 );
        if (l_U723._fU52 == 64537)
        {
            l_U723._fU52 = iVar4;
        }
        if (l_U723._fU56 == 64537)
        {
            l_U723._fU56 = iVar5;
        }
        if (iVar4 < l_U723._fU52)
        {
            bVar3 = true;
        }
        if (iVar5 < l_U723._fU56)
        {
            bVar3 = true;
        }
        l_U723._fU52 = iVar4;
        l_U723._fU56 = iVar5;
    }
    if (l_U723._fU40)
    {
        if (NOT bVar3)
        {
            l_U723._fU40 = 0;
        }
        return;
    }
    if (NOT bVar3)
    {
        return;
    }
    if (l_U723._fU8)
    {
        return;
    }
    l_U723._fU40 = 1;
    sub_35525();
    return;
}

void sub_36460(unknown uParam0)
{
    boolean bVar3;

    if ((IS_CHAR_DEAD( sub_2893() )) || (IS_CHAR_DEAD( uParam0 )))
    {
        return;
    }
    bVar3 = false;
    if (IS_CHAR_SHOOTING( sub_2893() ))
    {
        bVar3 = true;
    }
    if (IS_CHAR_IN_MELEE_COMBAT( sub_2893() ))
    {
        bVar3 = true;
    }
    if (IS_CHAR_SHOOTING( uParam0 ))
    {
        bVar3 = true;
    }
    if (IS_CHAR_IN_MELEE_COMBAT( uParam0 ))
    {
        bVar3 = true;
    }
    if (l_U723._fU44)
    {
        if (NOT bVar3)
        {
            l_U723._fU44 = 0;
        }
        return;
    }
    if (NOT bVar3)
    {
        return;
    }
    l_U723._fU44 = 1;
    sub_35525();
    return;
}

int sub_36667(unknown uParam0)
{
    unknown uVar3;

    if ((sub_36676()) || (l_U723._fU24))
    {
        return 0;
    }
    if (NOT l_U723._fU8)
    {
        if ((NOT (IS_CHAR_DEAD( sub_2893() ))) AND (NOT (IS_CHAR_DEAD( uParam0 ))))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_2893() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2893(), ref uVar3 );
                if (IS_CHAR_IN_CAR( uParam0, uVar3 ))
                {
                    return 1;
                }
            }
        }
        return 0;
    }
    return 1;
}

int sub_36676()
{
    if (((((l_U723._fU32) || (l_U723._fU36)) || (l_U723._fU40)) || (l_U723._fU44)) || (l_U723._fU48))
    {
        return 1;
    }
    return 0;
}

void sub_37047(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        if (g_U15654[6])
        {
            sub_2779( "MF5AUD" );
        }
        else
        {
            sub_2779( "FCRC1AU" );
        }
        return;
        case 3:
        sub_2779( "FCJC1AU" );
        return;
        case 7:
        sub_2779( "FCD3AU" );
        return;
        case 8:
        sub_2779( "FCB3AU" );
        return;
        case 13:
        sub_2779( "FCPC1AU" );
        return;
    }
    sub_6045( "FriendDistribute_GTA4: Friend_Distribute_Generic_Conversation_Speech_Group: Not a friend" );
    sub_6045( "FriendDistribute_GTA4: Friend_Distribute_Generic_Conversation_Speech_Group: Should never reach here" );
    return;
}

int sub_37488(int iParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    int I;
    int iVar11;
    boolean bVar12;
    int iVar13;

    if ((iParam0 == 0) AND (g_U15654[6]))
    {
        iVar5 = 0;
        sub_9310( "MF3_DRIVE", uParam1, 5, iVar5 );
        return 1;
    }
    switch (iParam0)
    {
        case 0:
        case 3:
        case 7:
        case 8:
        case 13: break;
        default:
        SCRIPT_ASSERT( "FA_Friend_Speech_Generic_Conversations: Unrecognised friend ID" );
        return 0;
    }
    g_U22274[iParam0]._fU688._fU24 = -1;
    PRINTSTRING( "Friend Conversations: Current states (bits triggered/bits completed) Normal and Drunken\n" );
    PRINTSTRING( "BEFORE\n" );
    sub_37810( iParam0 );
    iVar6 = 0;
    iVar7 = 0;
    iVar8 = 0;
    iVar9 = 0;
    I = 0;
    if ((NOT g_U22274[iParam0]._fU688._fU12) AND (uParam2))
    {
        iVar7 = g_U22274[iParam0]._fU688._fU0;
        iVar8 = g_U22274[iParam0]._fU688._fU4;
        iVar9 = g_U22274[iParam0]._fU688._fU8;
        I = 0;
        for ( I = 0; I < iVar9; I++ )
        {
            if ((IS_BIT_SET( iVar7, I )) AND (NOT (IS_BIT_SET( iVar8, I ))))
            {
                CLEAR_BIT( ref g_U22274[iParam0]._fU688._fU0, I );
            }
        }
    }
    sub_38302( iParam0 );
    iVar6 = 0;
    iVar7 = g_U22274[iParam0]._fU688._fU0;
    iVar9 = g_U22274[iParam0]._fU688._fU8;
    I = 0;
    for ( I = 0; I < iVar9; I++ )
    {
        if (NOT (IS_BIT_SET( iVar7, I )))
        {
            iVar6++;
        }
    }
    if ((iVar6 == 0) AND (uParam2))
    {
        iVar8 = g_U22274[iParam0]._fU688._fU4;
        for ( I = 0; I < iVar9; I++ )
        {
            if (NOT (IS_BIT_SET( iVar8, I )))
            {
                CLEAR_BIT( ref g_U22274[iParam0]._fU688._fU0, I );
                iVar6++;
            }
        }
    }
    if (iVar6 == 0)
    {
        return 0;
    }
    iVar11 = 0;
    if (g_U22274[iParam0]._fU688._fU12)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, iVar6, ref iVar11 );
    }
    iVar7 = g_U22274[iParam0]._fU688._fU0;
    bVar12 = false;
    for ( I = 0; I < iVar9; I++ )
    {
        if (NOT bVar12)
        {
            if (NOT (IS_BIT_SET( iVar7, I )))
            {
                if (iVar11 == 0)
                {
                    g_U22274[iParam0]._fU688._fU24 = I;
                    SET_BIT( ref g_U22274[iParam0]._fU688._fU0, I );
                    bVar12 = true;
                }
                else
                {
                    iVar11--;
                }
            }
        }
    }
    if (NOT bVar12)
    {
        sub_6045( "FA_Friend_Speech_Generic_Conversations: Tell Keith: something fundamentally wrong with algorithm" );
        return 0;
    }
    PRINTSTRING( "AFTER\n" );
    sub_37810( iParam0 );
    iVar13 = 0;
    switch (iParam0)
    {
        case 0:
        sub_39113( uParam1, iVar13 );
        return 1;
        case 3:
        sub_39853( uParam1, iVar13 );
        return 1;
        case 7:
        sub_40419( uParam1, iVar13 );
        return 1;
        case 8:
        sub_40931( uParam1, iVar13 );
        return 1;
        case 13:
        sub_41490( uParam1, iVar13 );
        return 1;
    }
    SCRIPT_ASSERT( "FA_Friend_Speech_Generic_Conversations: must have forgotten to update friend ID when added speech" );
    return 0;
}

void sub_37810(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    int iVar5;
    int iVar6;
    int I;

    uVar3 = g_U22274[uParam0]._fU688._fU0;
    uVar4 = g_U22274[uParam0]._fU688._fU4;
    iVar5 = g_U22274[uParam0]._fU688._fU8;
    iVar6 = iVar5 + g_U22274[uParam0]._fU688._fU16;
    I = 0;
    for ( I = 0; I < iVar6; I++ )
    {
        if (I == iVar5)
        {
            PRINTSTRING( " " );
        }
        if (IS_BIT_SET( uVar3, I ))
        {
            PRINTSTRING( "1" );
        }
        else
        {
            PRINTSTRING( "0" );
        }
    }
    PRINTNL();
    for ( I = 0; I < iVar6; I++ )
    {
        if (I == iVar5)
        {
            PRINTSTRING( " " );
        }
        if (IS_BIT_SET( uVar4, I ))
        {
            PRINTSTRING( "1" );
        }
        else
        {
            PRINTSTRING( "0" );
        }
    }
    PRINTNL();
    PRINTNL();
    return;
}

void sub_38302(unknown uParam0)
{
    int iVar3;

    iVar3 = 0;
    switch (uParam0)
    {
        case 3:
        if (g_U15654[11])
        {
            iVar3 = 1;
            SET_BIT( ref g_U22274[uParam0]._fU688._fU0, iVar3 );
            SET_BIT( ref g_U22274[uParam0]._fU688._fU4, iVar3 );
        }
        break;
        case 13:
        if ((g_U15654[52]) AND (NOT g_U15654[12]))
        {
            iVar3 = 9;
            SET_BIT( ref g_U22274[uParam0]._fU688._fU0, iVar3 );
            SET_BIT( ref g_U22274[uParam0]._fU688._fU4, iVar3 );
        }
        break;
    }
    return;
}

void sub_39113(unknown uParam0, boolean bParam1)
{
    char[60] cVar4;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    int iVar61;
    int iVar62;
    int iVar63;
    int iVar64;

    if (NOT (14 == g_U22274[0]._fU688._fU8))
    {
        sub_6045( "FA_Roman_Speech_Generic_Conversations: inconsistent number of Roman conversations - see Roman Flow" );
        return;
    }
    array(ref cVar4, 14);
    StrCopy( ref cVar4[0], "FCR3_REV", 16 );
    StrCopy( ref cVar4[1], "FCR3_CONV2", 16 );
    StrCopy( ref cVar4[2], "FCR3_OPTIM", 16 );
    StrCopy( ref cVar4[3], "FCR3_CONV4", 16 );
    StrCopy( ref cVar4[4], "FCR3_USA", 16 );
    StrCopy( ref cVar4[5], "FCR3_CONV6", 16 );
    StrCopy( ref cVar4[6], "FCR3_RELA", 16 );
    StrCopy( ref cVar4[7], "FCR3_CONV8", 16 );
    StrCopy( ref cVar4[8], "FCR3_GAMBLE", 16 );
    StrCopy( ref cVar4[9], "FCR3_CONV10", 16 );
    StrCopy( ref cVar4[10], "FCR3_MUM", 16 );
    StrCopy( ref cVar4[11], "FCR3_CONV12", 16 );
    StrCopy( ref cVar4[12], "FCR3_MAKE", 16 );
    StrCopy( ref cVar4[13], "FCR3_CONV14", 16 );
    iVar61 = 0;
    iVar62 = g_U22274[0]._fU688._fU24;
    iVar63 = g_U22274[0]._fU688._fU28;
    if (iVar62 >= 8)
    {
        sub_39591( "FCRC2AU" );
    }
    if (iVar62 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar63 == -1))
        {
            iVar64 = 0;
            sub_39704( ref cVar4[iVar62], iVar63, iVar64, uParam0, 5, iVar61 );
        }
        return;
    }
    sub_9310( ref cVar4[iVar62], uParam0, 5, iVar61 );
    return;
}

int sub_39591(unknown uParam0)
{
    if (NOT IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        StrCopy( ref l_U181._fU0, uParam0, 16 );
        return 1;
    }
    return 0;
}

void sub_39704(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_39731( uParam0, ref l_U181._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_39731(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
{
    char[16] cVar9;
    char[12] cVar13;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;

    StrCopy( ref cVar9, uParam1, 16 );
    array(ref cVar13, 2);
    StrCopy( ref cVar13[0], uParam0, 16 );
    StrCopy( ref cVar13[1], "END", 16 );
    return sub_9387( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

void sub_39853(unknown uParam0, boolean bParam1)
{
    char[60] cVar4;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    unknown uVar57;
    unknown uVar58;
    unknown uVar59;
    unknown uVar60;
    int iVar61;
    int iVar62;
    int iVar63;
    int iVar64;

    if (NOT (14 == g_U22274[3]._fU688._fU8))
    {
        sub_6045( "FA_Jacob_Speech_Generic_Conversations: inconsistent number of Jacob conversations - see Jacob Flow" );
        return;
    }
    array(ref cVar4, 14);
    StrCopy( ref cVar4[0], "FCJ_JC1", 16 );
    StrCopy( ref cVar4[1], "FCJ_JC2", 16 );
    StrCopy( ref cVar4[2], "FCJ_JC3", 16 );
    StrCopy( ref cVar4[3], "FCJ_JC4", 16 );
    StrCopy( ref cVar4[4], "FCJ_JC5", 16 );
    StrCopy( ref cVar4[5], "FCJ_JC6", 16 );
    StrCopy( ref cVar4[6], "FCJ_JC7", 16 );
    StrCopy( ref cVar4[7], "FCJ_JC8", 16 );
    StrCopy( ref cVar4[8], "FCJ_JC9", 16 );
    StrCopy( ref cVar4[9], "FCJ_JC10", 16 );
    StrCopy( ref cVar4[10], "FCJ_JC11", 16 );
    StrCopy( ref cVar4[11], "FCJ_JC12", 16 );
    StrCopy( ref cVar4[12], "FCJ_JC13", 16 );
    StrCopy( ref cVar4[13], "FCJ_JC14", 16 );
    iVar61 = 0;
    iVar62 = g_U22274[3]._fU688._fU24;
    iVar63 = g_U22274[3]._fU688._fU28;
    if (iVar62 >= 8)
    {
        sub_39591( "FCJC2AU" );
    }
    if (iVar62 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar63 == -1))
        {
            iVar64 = 0;
            sub_39704( ref cVar4[iVar62], iVar63, iVar64, uParam0, 5, iVar61 );
        }
        return;
    }
    sub_9310( ref cVar4[iVar62], uParam0, 5, iVar61 );
    return;
}

void sub_40419(unknown uParam0, boolean bParam1)
{
    char[48] cVar4;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    int iVar49;
    int iVar50;
    int iVar51;
    int iVar52;

    if (NOT (11 == g_U22274[7]._fU688._fU8))
    {
        sub_6045( "FA_Dwayne_Speech_Generic_Conversations: inconsistent number of Dwayne conversations - see Dwayne Flow" );
        return;
    }
    array(ref cVar4, 11);
    StrCopy( ref cVar4[0], "FCD3_GEN1", 16 );
    StrCopy( ref cVar4[1], "FCD3_GEN2", 16 );
    StrCopy( ref cVar4[2], "FCD3_GEN3", 16 );
    StrCopy( ref cVar4[3], "FCD3_GEN4", 16 );
    StrCopy( ref cVar4[4], "FCD3_GEN5", 16 );
    StrCopy( ref cVar4[5], "FCD3_GEN6", 16 );
    StrCopy( ref cVar4[6], "FCD3_GEN7", 16 );
    StrCopy( ref cVar4[7], "FCD3_GEN8", 16 );
    StrCopy( ref cVar4[8], "FCD3_GEN9", 16 );
    StrCopy( ref cVar4[9], "FCD3_GEN10", 16 );
    StrCopy( ref cVar4[10], "FCD3_GEN11", 16 );
    iVar49 = 0;
    iVar50 = g_U22274[7]._fU688._fU24;
    iVar51 = g_U22274[7]._fU688._fU28;
    if (iVar50 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar51 == -1))
        {
            iVar52 = 0;
            sub_39704( ref cVar4[iVar50], iVar51, iVar52, uParam0, 5, iVar49 );
        }
        return;
    }
    sub_9310( ref cVar4[iVar50], uParam0, 5, iVar49 );
    return;
}

void sub_40931(unknown uParam0, boolean bParam1)
{
    char[52] cVar4;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    int iVar53;
    int iVar54;
    int iVar55;
    int iVar56;

    if (NOT (12 == g_U22274[8]._fU688._fU8))
    {
        sub_6045( "FA_Brucie_Speech_Generic_Conversations: inconsistent number of Brucie conversations - see Brucie Flow" );
        return;
    }
    array(ref cVar4, 12);
    StrCopy( ref cVar4[0], "FCB3_GEN1", 16 );
    StrCopy( ref cVar4[1], "FCB3_GEN2", 16 );
    StrCopy( ref cVar4[2], "FCB3_GEN3", 16 );
    StrCopy( ref cVar4[3], "FCB3_GEN4", 16 );
    StrCopy( ref cVar4[4], "FCB3_GEN5", 16 );
    StrCopy( ref cVar4[5], "FCB3_GEN6", 16 );
    StrCopy( ref cVar4[6], "FCB3_GEN7", 16 );
    StrCopy( ref cVar4[7], "FCB3_GEN8", 16 );
    StrCopy( ref cVar4[8], "FCB3_GEN9", 16 );
    StrCopy( ref cVar4[9], "FCB3_GEN10", 16 );
    StrCopy( ref cVar4[10], "FCB3_GEN11", 16 );
    StrCopy( ref cVar4[11], "FCB3_GEN12", 16 );
    iVar53 = 0;
    iVar54 = g_U22274[8]._fU688._fU24;
    iVar55 = g_U22274[8]._fU688._fU28;
    if (iVar54 >= 10)
    {
        sub_39591( "FCB4AUD" );
    }
    if (iVar54 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar55 == -1))
        {
            iVar56 = 0;
            sub_39704( ref cVar4[iVar54], iVar55, iVar56, uParam0, 5, iVar53 );
        }
        return;
    }
    sub_9310( ref cVar4[iVar54], uParam0, 5, iVar53 );
    return;
}

void sub_41490(unknown uParam0, boolean bParam1)
{
    char[56] cVar4;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    unknown uVar29;
    unknown uVar30;
    unknown uVar31;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    unknown uVar39;
    unknown uVar40;
    unknown uVar41;
    unknown uVar42;
    unknown uVar43;
    unknown uVar44;
    unknown uVar45;
    unknown uVar46;
    unknown uVar47;
    unknown uVar48;
    unknown uVar49;
    unknown uVar50;
    unknown uVar51;
    unknown uVar52;
    unknown uVar53;
    unknown uVar54;
    unknown uVar55;
    unknown uVar56;
    int iVar57;
    int iVar58;
    int iVar59;
    int iVar60;

    if (NOT (13 == g_U22274[13]._fU688._fU8))
    {
        sub_6045( "FA_Packie_Speech_Generic_Conversations: inconsistent number of Packie conversations - see Packie Flow" );
        return;
    }
    array(ref cVar4, 13);
    StrCopy( ref cVar4[0], "FCPC1_SEX", 16 );
    StrCopy( ref cVar4[1], "FCPC1_FAM", 16 );
    StrCopy( ref cVar4[2], "FCPC1_MOM", 16 );
    StrCopy( ref cVar4[3], "FCPC1_PRST", 16 );
    StrCopy( ref cVar4[4], "FCPC1_DERRK", 16 );
    StrCopy( ref cVar4[5], "FCPC1_GRASS", 16 );
    StrCopy( ref cVar4[6], "FCPC1_GERRY", 16 );
    StrCopy( ref cVar4[7], "FCPC1_BLOOD", 16 );
    StrCopy( ref cVar4[8], "FCPC2_NIKO", 16 );
    StrCopy( ref cVar4[9], "FCPC2_KATE", 16 );
    StrCopy( ref cVar4[10], "FCPC2_SHAME", 16 );
    StrCopy( ref cVar4[11], "FCPC2_SCHOL", 16 );
    StrCopy( ref cVar4[12], "FCPC2_PA", 16 );
    iVar57 = 0;
    iVar58 = g_U22274[13]._fU688._fU24;
    iVar59 = g_U22274[13]._fU688._fU28;
    if (iVar58 >= 8)
    {
        sub_39591( "FCPC2AU" );
    }
    if (iVar58 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar59 == -1))
        {
            iVar60 = 0;
            sub_39704( ref cVar4[iVar58], iVar59, iVar60, uParam0, 5, iVar57 );
        }
        return;
    }
    sub_9310( ref cVar4[iVar58], uParam0, 5, iVar57 );
    return;
}

void sub_42208(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        sub_2779( "FCRDCAU" );
        return;
        case 3:
        sub_2779( "FCJDCAU" );
        return;
        case 7:
        sub_2779( "FCDDAU" );
        return;
        case 8:
        sub_2779( "FCBDAU" );
        return;
        case 13:
        sub_2779( "FCPDCAU" );
        return;
    }
    sub_6045( "FriendDistribute_GTA4: Friend_Distribute_Drunken_Conversation_Speech_Group: Not a friend" );
    sub_6045( "FriendDistribute_GTA4: Friend_Distribute_Drunken_Conversation_Speech_Group: Should never reach here" );
    return;
}

void sub_42610(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int I;
    int iVar10;
    boolean bVar11;
    int iVar12;

    PRINTSTRING( "DRUNK TALK..........................FA_Friend_Speech_Drunken_Conversations\n" );
    switch (uParam0)
    {
        case 0:
        case 3:
        case 7:
        case 8:
        case 13: break;
        default:
        SCRIPT_ASSERT( "FA_Friend_Speech_Drunken_Conversations: Unrecognised friend ID" );
        return;
    }
    g_U22274[uParam0]._fU688._fU24 = -1;
    PRINTSTRING( "Friend Conversations: Current states (bits triggered/bits completed) Normal and Drunken\n" );
    PRINTSTRING( "BEFORE\n" );
    sub_37810( uParam0 );
    iVar4 = 0;
    iVar5 = 0;
    iVar6 = 0;
    iVar7 = 0;
    iVar8 = 0;
    I = 0;
    if (NOT g_U22274[uParam0]._fU688._fU20)
    {
        iVar5 = g_U22274[uParam0]._fU688._fU0;
        iVar6 = g_U22274[uParam0]._fU688._fU4;
        iVar7 = g_U22274[uParam0]._fU688._fU8;
        iVar8 = (g_U22274[uParam0]._fU688._fU16 + iVar7) - 1;
        I = 0;
        for ( I = iVar7; I <= iVar8; I++ )
        {
            if ((IS_BIT_SET( iVar5, I )) AND (NOT (IS_BIT_SET( iVar6, I ))))
            {
                CLEAR_BIT( ref g_U22274[uParam0]._fU688._fU0, I );
            }
        }
    }
    iVar4 = 0;
    iVar5 = g_U22274[uParam0]._fU688._fU0;
    iVar7 = g_U22274[uParam0]._fU688._fU8;
    iVar8 = (g_U22274[uParam0]._fU688._fU16 + iVar7) - 1;
    I = 0;
    for ( I = iVar7; I <= iVar8; I++ )
    {
        if (NOT (IS_BIT_SET( iVar5, I )))
        {
            iVar4++;
        }
    }
    if (iVar4 == 0)
    {
        iVar6 = g_U22274[uParam0]._fU688._fU4;
        for ( I = iVar7; I <= iVar8; I++ )
        {
            if (NOT (IS_BIT_SET( iVar6, I )))
            {
                CLEAR_BIT( ref g_U22274[uParam0]._fU688._fU0, I );
                iVar4++;
            }
        }
    }
    if (iVar4 == 0)
    {
        return;
    }
    iVar10 = 0;
    if (g_U22274[uParam0]._fU688._fU20)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, iVar4, ref iVar10 );
    }
    iVar5 = g_U22274[uParam0]._fU688._fU0;
    bVar11 = false;
    for ( I = iVar7; I <= iVar8; I++ )
    {
        if (NOT bVar11)
        {
            if (NOT (IS_BIT_SET( iVar5, I )))
            {
                if (iVar10 == 0)
                {
                    g_U22274[uParam0]._fU688._fU24 = I;
                    SET_BIT( ref g_U22274[uParam0]._fU688._fU0, I );
                    bVar11 = true;
                }
                else
                {
                    iVar10--;
                }
            }
        }
    }
    if (NOT bVar11)
    {
        sub_6045( "FA_Friend_Speech_Drunken_Conversations: Tell Keith: something fundamentally wrong with algorithm" );
        return;
    }
    PRINTSTRING( "AFTER\n" );
    sub_37810( uParam0 );
    iVar12 = 0;
    switch (uParam0)
    {
        case 0:
        sub_43821( uParam1, iVar12 );
        return;
        case 3:
        sub_44231( uParam1, iVar12 );
        return;
        case 7:
        sub_44610( uParam1, iVar12 );
        return;
        case 8:
        sub_45040( uParam1, iVar12 );
        return;
        case 13:
        sub_45433( uParam1, iVar12 );
        return;
    }
    SCRIPT_ASSERT( "FA_Friend_Speech_Drunken_Conversations: must have forgotten to update friend ID when added speech" );
    return;
}

void sub_43821(unknown uParam0, boolean bParam1)
{
    char[24] cVar4;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    int iVar25;
    int iVar26;
    int iVar27;
    int iVar28;

    if (NOT (5 == g_U22274[0]._fU688._fU16))
    {
        sub_6045( "FA_Roman_Speech_Drunken_Conversations: inconsistent number of Roman drunken conversations - see Roman Flow" );
        return;
    }
    array(ref cVar4, 5);
    StrCopy( ref cVar4[0], "FCR3_DRNK1", 16 );
    StrCopy( ref cVar4[1], "FCR3_DRNK2", 16 );
    StrCopy( ref cVar4[2], "FCR3_DRNK3", 16 );
    StrCopy( ref cVar4[3], "FCR3_DRNK4", 16 );
    StrCopy( ref cVar4[4], "FCR3_DRNK5", 16 );
    iVar25 = g_U22274[0]._fU688._fU24;
    iVar25 -= g_U22274[0]._fU688._fU8;
    if (iVar25 == -1)
    {
        return;
    }
    iVar26 = 0;
    iVar27 = g_U22274[0]._fU688._fU28;
    if (bParam1)
    {
        if (NOT (iVar27 == -1))
        {
            iVar28 = 0;
            sub_39704( ref cVar4[iVar25], iVar27, iVar28, uParam0, 5, iVar26 );
        }
        return;
    }
    sub_9310( ref cVar4[iVar25], uParam0, 5, iVar26 );
    return;
}

void sub_44231(unknown uParam0, boolean bParam1)
{
    char[20] cVar4;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    int iVar21;
    int iVar22;
    int iVar23;
    int iVar24;

    if (NOT (4 == g_U22274[3]._fU688._fU16))
    {
        sub_6045( "FA_Jacob_Speech_Drunken_Conversations: inconsistent number of Jacob drunken conversations - see Jacob Flow" );
        return;
    }
    array(ref cVar4, 4);
    StrCopy( ref cVar4[0], "FCJ_DC1", 16 );
    StrCopy( ref cVar4[1], "FCJ_DC2", 16 );
    StrCopy( ref cVar4[2], "FCJ_DC3", 16 );
    StrCopy( ref cVar4[3], "FCJ_DC4", 16 );
    iVar21 = g_U22274[3]._fU688._fU24;
    iVar21 -= g_U22274[3]._fU688._fU8;
    if (iVar21 == -1)
    {
        return;
    }
    iVar22 = 0;
    iVar23 = g_U22274[3]._fU688._fU28;
    if (bParam1)
    {
        if (NOT (iVar23 == -1))
        {
            iVar24 = 0;
            sub_39704( ref cVar4[iVar21], iVar23, iVar24, uParam0, 5, iVar22 );
        }
        return;
    }
    sub_9310( ref cVar4[iVar21], uParam0, 5, iVar22 );
    return;
}

void sub_44610(unknown uParam0, boolean bParam1)
{
    char[28] cVar4;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    int iVar29;
    int iVar30;
    int iVar31;
    int iVar32;

    if (NOT (6 == g_U22274[7]._fU688._fU16))
    {
        sub_6045( "FA_Dwayne_Speech_Drunken_Conversations: inconsistent number of Dwayne drunken conversations - see Dwayne Flow" );
        return;
    }
    array(ref cVar4, 6);
    StrCopy( ref cVar4[0], "FCDD_LDG1", 16 );
    StrCopy( ref cVar4[1], "FCDD_LDG2", 16 );
    StrCopy( ref cVar4[2], "FCDD_LDG3", 16 );
    StrCopy( ref cVar4[3], "FCDD_LDG4", 16 );
    StrCopy( ref cVar4[4], "FCDD_LDG5", 16 );
    StrCopy( ref cVar4[5], "FCDD_LGD6", 16 );
    iVar29 = g_U22274[7]._fU688._fU24;
    iVar29 -= g_U22274[7]._fU688._fU8;
    if (iVar29 == -1)
    {
        return;
    }
    iVar30 = 0;
    iVar31 = g_U22274[7]._fU688._fU28;
    if (bParam1)
    {
        if (NOT (iVar31 == -1))
        {
            iVar32 = 0;
            sub_39704( ref cVar4[iVar29], iVar31, iVar32, uParam0, 5, iVar30 );
        }
        return;
    }
    sub_9310( ref cVar4[iVar29], uParam0, 5, iVar30 );
    return;
}

void sub_45040(unknown uParam0, boolean bParam1)
{
    char[20] cVar4;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    int iVar21;
    int iVar22;
    int iVar23;
    int iVar24;

    if (NOT (4 == g_U22274[8]._fU688._fU16))
    {
        sub_6045( "FA_Brucie_Speech_Drunken_Conversations: inconsistent number of Brucie drunken conversations - see Brucie Flow" );
        return;
    }
    array(ref cVar4, 4);
    StrCopy( ref cVar4[0], "FCBD_FUN", 16 );
    StrCopy( ref cVar4[1], "FCBD_CHAMP", 16 );
    StrCopy( ref cVar4[2], "FCBD_CARDIO", 16 );
    StrCopy( ref cVar4[3], "FCBD_WOMEN", 16 );
    iVar21 = g_U22274[8]._fU688._fU24;
    iVar21 -= g_U22274[8]._fU688._fU8;
    if (iVar21 == -1)
    {
        return;
    }
    iVar22 = 0;
    iVar23 = g_U22274[8]._fU688._fU28;
    if (bParam1)
    {
        if (NOT (iVar23 == -1))
        {
            iVar24 = 0;
            sub_39704( ref cVar4[iVar21], iVar23, iVar24, uParam0, 5, iVar22 );
        }
        return;
    }
    sub_9310( ref cVar4[iVar21], uParam0, 5, iVar22 );
    return;
}

void sub_45433(unknown uParam0, boolean bParam1)
{
    char[28] cVar4;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;
    unknown uVar23;
    unknown uVar24;
    unknown uVar25;
    unknown uVar26;
    unknown uVar27;
    unknown uVar28;
    int iVar29;
    int iVar30;
    int iVar31;
    int iVar32;

    if (NOT (6 == g_U22274[13]._fU688._fU16))
    {
        sub_6045( "FA_Packie_Speech_Drunken_Conversations: inconsistent number of Packie drunken conversations - see Packie Flow" );
        return;
    }
    array(ref cVar4, 6);
    StrCopy( ref cVar4[0], "FCP2_DRUNK1", 16 );
    StrCopy( ref cVar4[1], "FCP2_DRUNK2", 16 );
    StrCopy( ref cVar4[2], "FCP2_DRUNK3", 16 );
    StrCopy( ref cVar4[3], "FCP2_DRUNK4", 16 );
    StrCopy( ref cVar4[4], "FCP2_DRUNK5", 16 );
    StrCopy( ref cVar4[5], "FCP2_DRUNK6", 16 );
    iVar29 = g_U22274[13]._fU688._fU24;
    iVar29 -= g_U22274[13]._fU688._fU8;
    if (iVar29 == -1)
    {
        return;
    }
    iVar30 = 0;
    iVar31 = g_U22274[13]._fU688._fU28;
    if (bParam1)
    {
        if (NOT (iVar31 == -1))
        {
            iVar32 = 0;
            sub_39704( ref cVar4[iVar29], iVar31, iVar32, uParam0, 5, iVar30 );
        }
        return;
    }
    sub_9310( ref cVar4[iVar29], uParam0, 5, iVar30 );
    return;
}

int sub_46034(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if ((IS_CHAR_DEAD( uParam0 )) || (IS_CHAR_DEAD( sub_2893() )))
    {
        return l_U723._fU24;
    }
    if (l_U723._fU24)
    {
        if (NOT sub_36676())
        {
            if (g_U22274[l_U537]._fU688._fU28 == -1)
            {
                l_U723._fU24 = 0;
                return 0;
            }
            iVar3 = 0;
            GET_GAME_TIMER( ref iVar3 );
            if (l_U723._fU28 == 0)
            {
                l_U723._fU28 = iVar3 + 3000;
            }
            if (sub_46180())
            {
                l_U723._fU28 = 0;
            }
            if ((NOT (l_U723._fU28 == 0)) AND (iVar3 > l_U723._fU28))
            {
                l_U723._fU28 = 0;
                if (l_U723._fU8)
                {
                    sub_42208( l_U537 );
                    sub_2942( 0, sub_2893(), "NIKO", 0 );
                    sub_2942( l_U536, uParam0, ref l_U532, 0 );
                    sub_46318( l_U537, ref l_U526 );
                }
                else
                {
                    sub_37047( l_U537 );
                    sub_2942( 0, sub_2893(), "NIKO", 0 );
                    sub_2942( l_U536, uParam0, ref l_U532, 0 );
                    sub_46517( l_U537, ref l_U526 );
                }
                l_U723._fU24 = 0;
                return 0;
            }
            return 1;
        }
        l_U723._fU28 = 0;
        return 1;
    }
    if (sub_36676())
    {
        if (sub_18351( l_U526 ))
        {
            iVar4 = 0;
            sub_28287( ref l_U526, iVar4 );
        }
        l_U723._fU24 = 1;
        l_U723._fU28 = 0;
        return 1;
    }
    return 0;
}

void sub_46180()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

void sub_46318(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 1;
    switch (uParam0)
    {
        case 0:
        sub_43821( uParam1, iVar4 );
        break;
        case 3:
        sub_44231( uParam1, iVar4 );
        break;
        case 7:
        sub_44610( uParam1, iVar4 );
        break;
        case 8:
        sub_45040( uParam1, iVar4 );
        break;
        case 13:
        sub_45433( uParam1, iVar4 );
        break;
    }
    return;
}

void sub_46517(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 1;
    switch (uParam0)
    {
        case 0:
        sub_39113( uParam1, iVar4 );
        break;
        case 3:
        sub_39853( uParam1, iVar4 );
        break;
        case 7:
        sub_40419( uParam1, iVar4 );
        break;
        case 8:
        sub_40931( uParam1, iVar4 );
        break;
        case 13:
        sub_41490( uParam1, iVar4 );
        break;
    }
    return;
}

void sub_46979()
{
    CLEAR_WANTED_LEVEL( sub_4140() );
    if (NOT g_U0)
    {
        sub_47009();
    }
    sub_34149();
    return;
}

void sub_47009()
{
    g_U9914._fU0 = 1;
    g_U9914._fU4 = 0;
    g_U9914._fU8 = 0;
    g_U9914._fU12 = 0;
    g_U9914._fU16 = 0;
    g_U9914._fU20 = 0;
    g_U9914._fU24 = 7;
    return;
}

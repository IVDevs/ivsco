void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U6 = 0;
    l_U7 = 1;
    l_U8 = 3;
    l_U10 = 0;
    l_U11 = -1;
    l_U12 = 0;
    l_U13 = 0;
    l_U18 = 1;
    l_U272 = 0;
    l_U276 = 0.00000000;
    l_U278 = 0;
    l_U279 = 0;
    l_U280 = 0;
    l_U281 = 0;
    l_U282 = 0;
    l_U283 = 1;
    l_U284 = 0;
    l_U285 = 0;
    l_U286 = 0;
    l_U288 = 0;
    l_U289 = 0;
    l_U290 = 0;
    l_U291 = 0;
    l_U292 = 1;
    l_U293 = 0;
    l_U320 = 0;
    l_U324 = 0;
    l_U325 = -1;
    l_U326 = 1;
    l_U327 = "NONE";
    l_U354 = 0;
    l_U355 = 0;
    l_U356 = {0.00000000, 0.00000000, 0.00000000};
    l_U359 = 0.00000000;
    l_U360 = nil;
    l_U361 = 0;
    l_U362 = nil;
    l_U363 = 34;
    l_U364 = 0;
    l_U365 = 0;
    l_U366 = 0;
    l_U367 = 0;
    l_U368 = 0;
    l_U369 = 0;
    l_U370 = 0;
    l_U371 = 0;
    l_U372 = 1;
    l_U373 = 3;
    l_U380 = 0;
    l_U381 = 0;
    l_U393 = 1;
    l_U394 = g_U24;
    l_U395 = 0;
    l_U396 = 0;
    l_U397 = 0;
    l_U398 = 0;
    l_U399 = 0;
    l_U400 = 12;
    l_U401 = 0;
    l_U402 = 0;
    l_U403 = 0;
    l_U408 = 0;
    l_U410 = -1;
    l_U411 = 4;
    l_U433 = 0;
    l_U440 = 0;
    l_U445 = 0;
    l_U446 = "";
    l_U459 = 0;
    l_U463 = 0;
    l_U464 = 1;
    l_U465 = 0;
    l_U466 = 0;
    l_U467 = 0;
    l_U468 = 0;
    l_U469 = "LUIS";
    l_U470 = 0;
    l_U471 = 0;
    l_U472 = l_U486;
    if (g_U20825[l_U472]._fU712._fU176)
    {
        if (g_U22955)
        {
            sub_620( "HospitalPickUp: g_doingHospitalPickup already TRUE" );
        }
        g_U22955 = 1;
    }
    sub_789();
    while (NOT l_U401)
    {
        if (NOT sub_3070())
        {
            sub_620( "HospitalPickup: Perform_Mission_Loop() returned FALSE unexpectedly" );
        }
        WAIT( 0 );
    }
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_31424();
    }
    WAIT( 0 );
    while (sub_3070())
    {
        WAIT( 0 );
    }
    sub_31424();
    sub_620( "HOSPITAL PICKUP: should never reach ENDSCRIPT" );
    return;
}

void sub_620(unknown uParam0)
{
    sub_658( "ERROR: HOSPITAL PICKUP: ", uParam0 );
    return;
}

void sub_658(unknown uParam0, unknown uParam1)
{
    SCRIPT_ASSERT( "ERROR: Press IGNORE button and look at console window for details" );
    PRINTSTRING( uParam0 );
    PRINTSTRING( uParam1 );
    PRINTNL();
    return;
}

void sub_789()
{
    unknown uVar2;
    unknown uVar3;
    int iVar4;

    # -sub_C1FFC0-0xc214c8( 0, ref l_U294 );
    sub_810();
    sub_1077();
    sub_1101();
    l_U395 = 1;
    l_U396 = 0;
    if (NOT g_U20825[l_U472]._fU712._fU176)
    {
        l_U395 = 7;
        return;
    }
    uVar2 = g_U20825[l_U472]._fU712._fU28;
    uVar3 = g_U11300[uVar2]._fU16;
    sub_1380( l_U474._fU0, l_U474._fU4, l_U474._fU8, uVar3 );
    sub_1428( g_U22722[l_U472] );
    sub_1459( 1 );
    sub_1642();
    sub_1720( 0, ref g_U20825[l_U472]._fU712._fU36 );
    sub_1720( 1, ref g_U20825[l_U472]._fU712._fU68 );
    sub_1720( 2, ref g_U20825[l_U472]._fU712._fU52 );
    iVar4 = 1;
    sub_1826( ref l_U481, 2, 0, iVar4 );
    l_U369 = 1;
    sub_2454( ref g_U20825[l_U472]._fU712._fU84 );
    sub_2609( 0, sub_2560(), "LUIS", 0 );
    l_U314 = {g_U20825[l_U472]._fU712._fU116};
    l_U318 = g_U20825[l_U472]._fU712._fU132;
    l_U319 = l_U472;
    sub_2840( l_U327, l_U327, l_U327, l_U327 );
    return;
}

void sub_810()
{
    l_U395 = 0;
    l_U396 = 0;
    l_U398 = 0;
    l_U399 = 0;
    l_U400 = 12;
    l_U401 = 0;
    l_U470 = 0;
    sub_861();
    return;
}

void sub_861()
{
    l_U417._fU0 = 1;
    l_U417._fU4 = 0;
    l_U417._fU8 = 0;
    l_U417._fU12 = 0;
    l_U417._fU16 = 1;
    l_U417._fU20 = 0;
    l_U417._fU24 = 0;
    l_U417._fU28 = 0;
    l_U417._fU32 = 0;
    l_U417._fU36 = 0;
    l_U417._fU40 = 0;
    l_U417._fU44 = 0;
    l_U417._fU48 = 0;
    l_U417._fU52 = 64537;
    l_U417._fU56 = 64537;
    l_U417._fU60 = 64537;
    sub_1020();
    l_U433 = 0;
    return;
}

void sub_1020()
{
    g_U43135 = nil;
    g_U43136 = nil;
    return;
}

void sub_1077()
{
    l_U409 = nil;
    return;
}

void sub_1101()
{
    l_U473 = nil;
    l_U441 = nil;
    sub_1124();
    l_U480 = nil;
    sub_1188();
    return;
}

void sub_1124()
{
    unknown uVar2;

    uVar2 = g_U20825[l_U472]._fU712._fU28;
    l_U474 = {g_U11300[uVar2]._fU4};
    return;
}

void sub_1188()
{
    unknown uVar2;

    uVar2 = g_U20825[l_U472]._fU712._fU32;
    l_U477 = {g_U10827[uVar2]._fU4};
    l_U442 = {g_U10827[uVar2]._fU16};
    return;
}

void sub_1380(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U273 = {uParam0, uParam1, uParam2};
    l_U276 = uParam3;
    return;
}

void sub_1428(unknown uParam0)
{
    l_U288 = 1;
    l_U287 = uParam0;
    return;
}

void sub_1459(boolean bParam0)
{
    int iVar3;

    if (NOT (DOES_BLIP_EXIST( l_U277 )))
    {
        ADD_BLIP_FOR_CONTACT( l_U273._fU0, l_U273._fU4, l_U273._fU8, ref l_U277 );
        CHANGE_BLIP_DISPLAY( l_U277, 2 );
        CHANGE_BLIP_PRIORITY( l_U277, 1 );
        if (l_U288)
        {
            CHANGE_BLIP_SPRITE( l_U277, l_U287 );
            if (bParam0)
            {
                iVar3 = 0;
                GET_GAME_TIMER( ref iVar3 );
                CHANGE_BLIP_PRIORITY( l_U277, l_U8 );
                FLASH_BLIP( l_U277, 1 );
                l_U289 = iVar3 + 10000;
                l_U290 = 1;
            }
        }
    }
    return;
}

void sub_1642()
{
    int I;

    I = 0;
    for ( I = 0; I < 3; I++ )
    {
        StrCopy( ref l_U295[I], "", 16 );
    }
    return;
}

void sub_1720(int iParam0, unknown uParam1)
{
    if (iParam0 >= 3)
    {
        return;
    }
    StrCopy( ref l_U295[iParam0], uParam1, 16 );
    return;
}

void sub_1826(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_1879( iParam0, uParam1, uParam2 );
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
        sub_2011( iParam0 + 0 );
    }
    return;
}

void sub_1879(int iParam0, int iParam1, int iParam2)
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
        sub_2011( iParam0 + 0 );
    }
    return;
}

void sub_2011(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_2042( iParam0->_fU4 )))
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

int sub_2042(unknown uParam0)
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

void sub_2454(unknown uParam0)
{
    StrCopy( ref l_U19._fU0, uParam0, 16 );
    sub_2471();
    return;
}

void sub_2471()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U19._fU16[I]._fU0 = nil;
        StrCopy( ref l_U19._fU16[I]._fU4, "", 32 );
        l_U19._fU344[I] = 0;
    }
    return;
}

void sub_2560()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_2609(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U19._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U19._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_2689( "\n PED NUMBER ", uParam0 );
    sub_2729( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_2689(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_2729(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_2840(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    StrCopy( ref l_U328._fU0, uParam0, 32 );
    StrCopy( ref l_U328._fU32, uParam1, 16 );
    StrCopy( ref l_U328._fU48, uParam2, 16 );
    StrCopy( ref l_U328._fU64, uParam3, 16 );
    l_U328._fU80 = 0;
    l_U328._fU84 = 0;
    l_U328._fU88 = 0;
    l_U328._fU92 = 0;
    l_U328._fU100 = 1;
    l_U328._fU96 = 1;
    if (COMPARE_STRING( uParam0, l_U327 ))
    {
        l_U328._fU96 = 0;
    }
    sub_2984();
    return;
}

void sub_2984()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = 0;
    GENERATE_RANDOM_INT_IN_RANGE( 10000, 20000, ref iVar3 );
    l_U328._fU84 = iVar2 + iVar3;
    return;
}

int sub_3070()
{
    boolean bVar2;

    l_U398 = 0;
    l_U399 = 0;
    l_U400 = 12;
    switch (l_U395)
    {
        case 0:
        sub_620( "Mission Loop: Stage should never be 'Initialise'" );
        break;
        case 1:
        sub_3210();
        break;
        case 5:
        sub_14599();
        break;
        case 6:
        l_U398 = 1;
        break;
        case 7:
        sub_25028();
        break;
        default:
        sub_620( "Mission_Loop: Unknown Stage ID" );
        return 0;
    }
    bVar2 = sub_28258( l_U473, 0 );
    if (bVar2)
    {
        l_U399 = 1;
        l_U400 = 7;
        sub_29530();
        return 0;
    }
    sub_32093( l_U473 );
    if (l_U398)
    {
        sub_40317();
        return 0;
    }
    if (l_U399)
    {
        sub_29530();
        return 0;
    }
    return 1;
}

void sub_3210()
{
    l_U416 = 0;
    if (NOT (l_U473 == nil))
    {
        if (IS_CHAR_INJURED( l_U473 ))
        {
            l_U399 = 1;
            l_U400 = 0;
            return;
        }
    }
    if (sub_3277( l_U481 ))
    {
        if (NOT sub_3527())
        {
            l_U399 = 1;
            l_U400 = 9;
            return;
        }
    }
    if (sub_3706())
    {
        if (sub_3527())
        {
            l_U399 = 1;
            l_U400 = 9;
            return;
        }
    }
    if (NOT (sub_3794( l_U472, ref l_U473, ref l_U441 )))
    {
        return;
    }
    if (NOT l_U399)
    {
        sub_14478();
        if (NOT (IS_CHAR_DEAD( sub_2560() )))
        {
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2560(), 0 );
        }
        l_U440 = 1;
        l_U395 = 5;
    }
    return;
}

int sub_3277(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    if (sub_3446( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_3446(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

boolean sub_3527()
{
    float fVar2;

    fVar2 = sub_3536();
    return fVar2 <= 100.00000000;
}

void sub_3536()
{
    vector vVar2;
    float Result;

    if (IS_CHAR_DEAD( sub_2560() ))
    {
        return 9999.90000000;
    }
    vVar2 = {0.00000000, 0.00000000, 0.00000000};
    Result = 0.00000000;
    GET_CHAR_COORDINATES( sub_2560(), ref vVar2.x, ref vVar2.y, ref vVar2.z );
    GET_DISTANCE_BETWEEN_COORDS_3D( vVar2.x, vVar2.y, vVar2.z, l_U273._fU0, l_U273._fU4, l_U273._fU8, ref Result );
    return Result;
}

boolean sub_3706()
{
    int iVar2;

    iVar2 = GET_TIME_SINCE_LAST_DEATH();
    if (iVar2 < 0)
    {
        return 0;
    }
    return iVar2 < 10000;
}

int sub_3794(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_PLAYER_PLAYING( sub_3803() )))
    {
        return 0;
    }
    sub_3853( uParam0 );
    sub_3888();
    sub_4092( (uParam1^) );
    sub_4872();
    if (l_U272 == 0)
    {
        sub_4987( uParam0, uParam1 );
        return 0;
    }
    if (l_U272 == 1)
    {
        sub_7316( uParam0, uParam1, uParam2 );
        return 0;
    }
    if (l_U272 == 2)
    {
        sub_8382( uParam2, (uParam1^) );
        return 0;
    }
    if (l_U272 == 3)
    {
        sub_11878();
        return 0;
    }
    if (l_U272 == 4)
    {
        if (sub_12237( uParam1, uParam2 ))
        {
            return 0;
        }
    }
    CLEAR_HELP();
    SET_PLAYER_CONTROL( sub_3803(), 1 );
    g_U20825[uParam0]._fU20 = 1;
    return 1;
}

void sub_3803()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_3853(unknown uParam0)
{
    l_U279 = g_U20825[uParam0]._fU28;
    return;
}

void sub_3888()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;

    if (NOT (IS_KEYBOARD_KEY_JUST_PRESSED( 36 )))
    {
        return;
    }
    if (NOT (IS_PLAYER_PLAYING( sub_3803() )))
    {
        return;
    }
    if (g_U12379)
    {
        return;
    }
    if (IS_BIT_SET( g_U10938._fU0, 4 ))
    {
        return;
    }
    if (sub_3536() < 20.00000000)
    {
        return;
    }
    if (NOT (GET_CLOSEST_CAR_NODE( l_U273._fU0, l_U273._fU4, l_U273._fU8, ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 )))
    {
        return;
    }
    LOAD_SCENE( uVar2._fU0, uVar2._fU4, uVar2._fU8 );
    SET_CHAR_COORDINATES( sub_2560(), uVar2._fU0, uVar2._fU4, uVar2._fU8 );
    return;
}

void sub_4092(unknown uParam0)
{
    if (COMPARE_STRING( ref l_U328._fU0, l_U327 ))
    {
        return;
    }
    if (NOT l_U328._fU96)
    {
        return;
    }
    sub_4147( uParam0 );
    l_U328._fU80 = l_U272;
    return;
}

void sub_4147(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    boolean bVar8;
    boolean bVar9;

    if (l_U272 == 0)
    {
        return;
    }
    if (NOT (HAVE_ANIMS_LOADED( ref l_U328._fU0 )))
    {
        REQUEST_ANIMS( ref l_U328._fU0 );
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
        TASK_PLAY_ANIM( uParam0, ref l_U328._fU32, ref l_U328._fU0, 8.00000000, 1, 0, 0, 0, -2 );
        l_U328._fU88 = 0;
        l_U328._fU92 = 0;
        return;
    }
    iVar6 = 0;
    GET_GAME_TIMER( ref iVar6 );
    iVar7 = 0;
    if ((((l_U328._fU80 == 1) AND (l_U272 == 2)) AND (NOT (COMPARE_STRING( ref l_U328._fU48, l_U327 )))) AND (NOT l_U328._fU88))
    {
        iVar7 = 1;
    }
    bVar8 = false;
    if (l_U328._fU100)
    {
        bVar9 = sub_4446();
        if (NOT bVar9)
        {
            bVar9 = IS_CHAR_ON_FOOT( sub_2560() );
        }
        if (((((l_U328._fU80 == 1) AND (l_U272 == 2)) AND (bVar9)) AND (NOT (COMPARE_STRING( ref l_U328._fU64, l_U327 )))) AND (NOT l_U328._fU92))
        {
            iVar7 = 1;
            bVar8 = true;
        }
    }
    else if (l_U272 == 1)
    {
        l_U328._fU100 = 1;
    }
    if ((iVar6 > l_U328._fU84) || (iVar7))
    {
        CLEAR_CHAR_TASKS( uParam0 );
        if (bVar8)
        {
            TASK_PLAY_ANIM( uParam0, ref l_U328._fU64, ref l_U328._fU0, 8.00000000, 0, 0, 0, 0, -2 );
            l_U328._fU100 = 0;
            l_U328._fU92 = 1;
        }
        else if (NOT (COMPARE_STRING( ref l_U328._fU48, l_U327 )))
        {
            TASK_PLAY_ANIM( uParam0, ref l_U328._fU48, ref l_U328._fU0, 8.00000000, 0, 0, 0, 0, -2 );
        }
        l_U328._fU88 = 1;
        sub_2984();
        return;
    }
    return;
}

boolean sub_4446()
{
    unknown uVar2;
    float fVar3;

    if (IS_CHAR_DEAD( sub_2560() ))
    {
        return 0;
    }
    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2560() )))
    {
        return 0;
    }
    uVar2 = nil;
    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2560(), ref uVar2 );
    fVar3 = 0.00000000;
    GET_CAR_SPEED( uVar2, ref fVar3 );
    return fVar3 > 0.02000000;
}

void sub_4872()
{
    int iVar2;

    if (NOT l_U290)
    {
        return;
    }
    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (NOT (iVar2 > l_U289))
    {
        return;
    }
    CHANGE_BLIP_PRIORITY( l_U277, l_U7 );
    FLASH_BLIP( l_U277, 0 );
    l_U289 = 0;
    l_U290 = 0;
    return;
}

void sub_4987(unknown uParam0, unknown uParam1)
{
    float fVar4;

    fVar4 = sub_3536();
    if (fVar4 > 98.00000000)
    {
        return;
    }
    if ((g_U12379) || (IS_BIT_SET( g_U10938._fU0, 4 )))
    {
        return;
    }
    sub_5050( uParam0 );
    if (l_U361)
    {
        sub_5050( l_U363 );
    }
    if (NOT (sub_5553( uParam0 )))
    {
        return;
    }
    if (l_U361)
    {
        if (NOT (sub_5553( l_U363 )))
        {
            return;
        }
    }
    if (NOT sub_5622())
    {
        return;
    }
    sub_5728( uParam0, uParam1, l_U273._fU0, l_U273._fU4, l_U273._fU8, l_U276 );
    SET_CHAR_DECISION_MAKER( (uParam1^), l_U294 );
    SET_CHAR_RELATIONSHIP( (uParam1^), 1, 0 );
    g_U20825[uParam0]._fU24 = 1;
    if (l_U361)
    {
        sub_5728( l_U363, ref l_U362, l_U273._fU0 + 1.00000000, l_U273._fU4 + 0.70000000, l_U273._fU8, l_U276 );
        SET_CHAR_DECISION_MAKER( l_U362, l_U294 );
        SET_CHAR_RELATIONSHIP( l_U362, 1, 0 );
    }
    sub_2609( 1, (uParam1^), "ARMANDO", 0 );
    sub_2609( 2, l_U362, "HENRIQUE", 0 );
    sub_6987( uParam0, (uParam1^) );
    sub_7101();
    l_U272 = 1;
    l_U281 = 0;
    return;
}

void sub_5050(unknown uParam0)
{
    REQUEST_MODEL( sub_5061( uParam0 ) );
    return;
}

int sub_5061(unknown uParam0)
{
    switch (uParam0)
    {
        case 0: return -274568867;
        case 1: return 1662225612;
        case 2: return -448171135;
        case 3: return 1370299619;
        case 4: return -773750838;
        case 5: return 243666427;
        case 6: return -913924918;
        case 7: return 1905515841;
        case 9:
        SCRIPT_ASSERT( "Attempt to Return the model for the Reserve Strand 1 Character" );
        return 0;
        case 30: return -1949352469;
        case 31: return -401698464;
        case 32: return -487173849;
        case 33: return -407067034;
        case 13: return 714517099;
        case 14: return 653404222;
        case 15: return 1798610950;
    }
    sub_5476( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_5476(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_5553(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_5061( uParam0 ) );
}

int sub_5622()
{
    if (NOT l_U354)
    {
        return 1;
    }
    REQUEST_MODEL( l_U355 );
    if (NOT (HAS_MODEL_LOADED( l_U355 )))
    {
        return 0;
    }
    return 1;
}

void sub_5728(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( sub_5739( uParam0 ), sub_5061( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    sub_5785( uParam0, (uParam1^) );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_5819( uParam0, (uParam1^) );
    return;
}

int sub_5739(unknown uParam0)
{
    return 25;
}

void sub_5785(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5819(unknown uParam0, unknown uParam1)
{
    sub_5831( ref uParam1, uParam0 );
    return;
}

void sub_5831(unknown uParam0, int iParam1)
{
    sub_5842( uParam0 );
    if (iParam1 == 37)
    {
        sub_5944( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_6528( (uParam0^), iParam1, g_U42825[iParam1] );
    }
    return;
}

void sub_5842(unknown uParam0)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    return;
}

void sub_5944(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
    int iVar12;
    int iVar13;

    if (NOT (IS_CHAR_DEAD( (uParam0^) )))
    {
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 0 )) == iParam1)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 0 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 0, iParam1, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 1 )) == iParam2)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 1 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 1, iParam2, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 2 )) == iParam3)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 2 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 2, iParam3, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 5 )) == iParam4)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 5 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 5, iParam4, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 4 )) == iParam5)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 4 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 4, iParam5, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 3 )) == iParam6)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 3 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 3, iParam6, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 7 )) == iParam7)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 7 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 7, iParam7, 0 );
        }
        if ((NOT ((GET_CHAR_DRAWABLE_VARIATION( (uParam0^), 8 )) == 0)) || (NOT ((GET_CHAR_TEXTURE_VARIATION( (uParam0^), 8 )) == 0)))
        {
            SET_CHAR_COMPONENT_VARIATION( (uParam0^), 8, 0, 0 );
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
        GET_CHAR_PROP_INDEX( (uParam0^), 1, ref iVar13 );
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

void sub_6528(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        sub_5944( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
        case 1:
        sub_5944( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, 0 );
        return;
        case 31:
        sub_5944( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
        return;
        case 7:
        sub_5944( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_5944( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_6987(unknown uParam0, unknown uParam1)
{
    int iVar4;

    sub_6528( uParam1, uParam0, l_U324 );
    CLEAR_CHAR_PROP( uParam1, 0 );
    iVar4 = -1;
    if (NOT (iVar4 == l_U325))
    {
        if (l_U325 == -1)
        {
            CLEAR_CHAR_PROP( uParam1, 1 );
        }
        else
        {
            SET_CHAR_PROP_INDEX( uParam1, 1, l_U325 );
        }
    }
    ENABLE_PED_HELMET( uParam1, l_U326 );
    return;
}

void sub_7101()
{
    if (NOT l_U354)
    {
        return;
    }
    if (DOES_VEHICLE_EXIST( l_U360 ))
    {
        return;
    }
    CLEAR_AREA( l_U356._fU0, l_U356._fU4, l_U356._fU8, 5.00000000, 0 );
    CREATE_CAR( l_U355, l_U356._fU0, l_U356._fU4, l_U356._fU8, ref l_U360, 1 );
    SET_CAR_HEADING( l_U360, l_U359 );
    SET_CAR_ON_GROUND_PROPERLY( l_U360 );
    if (g_U1)
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U355 );
    }
    return;
}

void sub_7316(unknown uParam0, unknown uParam1, unknown uParam2)
{
    float fVar5;

    fVar5 = sub_3536();
    if (((fVar5 > 100.00000000) || (g_U12379)) || (IS_BIT_SET( g_U10938._fU0, 4 )))
    {
        sub_7369( uParam1 );
        sub_7402( uParam0 );
        g_U20825[uParam0]._fU24 = 0;
        if (l_U361)
        {
            sub_7369( ref l_U362 );
            sub_7402( l_U363 );
        }
        sub_7488();
        l_U272 = 0;
        return;
    }
    if (NOT (IS_CHAR_DEAD( sub_2560() )))
    {
        if (sub_7738( sub_2560() ))
        {
            return;
        }
    }
    if (fVar5 < 18.00000000)
    {
        l_U272 = 2;
        if (NOT IS_HINT_RUNNING())
        {
            if (IS_CHAR_IN_ANY_CAR( sub_2560() ))
            {
                GET_CHAR_COORDINATES( (uParam1^), ref l_U321._fU0, ref l_U321._fU4, ref l_U321._fU8 );
                l_U321._fU8 += 1.50000000;
                HINT_CAM( l_U321._fU0, l_U321._fU4, l_U321._fU8, 0, 0, 0, 30000 );
            }
        }
        l_U280 = 0;
        sub_8142();
        sub_8187( (uParam1^), uParam2 );
        TASK_LOOK_AT_CHAR( (uParam1^), sub_2560(), -2, 0 );
        if (l_U361)
        {
            TASK_LOOK_AT_CHAR( l_U362, sub_2560(), -2, 0 );
        }
        return;
    }
    return;
}

void sub_7369(unknown uParam0)
{
    DELETE_CHAR( uParam0 );
    (uParam0^) = nil;
    return;
}

void sub_7402(unknown uParam0)
{
    if (NOT g_U1)
    {
        return;
    }
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_5061( uParam0 ) );
    return;
}

void sub_7488()
{
    float fVar2;

    if (NOT (DOES_VEHICLE_EXIST( l_U360 )))
    {
        return;
    }
    if (IS_CHAR_INJURED( sub_2560() ))
    {
        return;
    }
    if (IS_CAR_DEAD( l_U360 ))
    {
        return;
    }
    fVar2 = 98.00000000 - 5.00000000;
    if ((IS_CHAR_IN_CAR( sub_2560(), l_U360 )) || (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_2560(), l_U360, fVar2, fVar2, 30.00000000, 0 )))
    {
        sub_7621();
        return;
    }
    DELETE_CAR( ref l_U360 );
    l_U360 = nil;
    return;
}

void sub_7621()
{
    if (NOT (DOES_VEHICLE_EXIST( l_U360 )))
    {
        return;
    }
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U360 );
    l_U360 = nil;
    return;
}

int sub_7738(int iParam0)
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
                if (sub_7802( uVar3 ))
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

int sub_7802(int iParam0)
{
    if ((((IS_CAR_MODEL( iParam0, -956048545 )) || (IS_CAR_MODEL( iParam0, 1884962369 ))) || (IS_CAR_MODEL( iParam0, 1208856469 ))) || (iParam0 == g_U2687))
    {
        return 1;
    }
    return 0;
}

void sub_8142()
{
    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U277 );
    l_U289 = 0;
    l_U290 = 0;
    return;
}

void sub_8187(unknown uParam0, unknown uParam1)
{
    if (DOES_BLIP_EXIST( (uParam1^) ))
    {
        return;
    }
    if (IS_CHAR_INJURED( uParam0 ))
    {
        return;
    }
    ADD_BLIP_FOR_CHAR( uParam0, uParam1 );
    SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
    sub_8256( (uParam1^) );
    return;
}

void sub_8256(int iParam0)
{
    if (iParam0 == nil)
    {
        return;
    }
    CHANGE_BLIP_DISPLAY( iParam0, 2 );
    return;
}

void sub_8382(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    uVar4 = sub_3536();
    if (sub_8404( uVar4, uParam0, uParam1 ))
    {
        return;
    }
    if (sub_8651( uVar4 ))
    {
        return;
    }
    sub_11099();
    if ((sub_11193()) || (sub_11631()))
    {
        return;
    }
    return;
}

int sub_8404(float fParam0, unknown uParam1, unknown uParam2)
{
    boolean bVar5;

    bVar5 = false;
    if (NOT (IS_CHAR_DEAD( sub_2560() )))
    {
        if (sub_7738( sub_2560() ))
        {
            bVar5 = true;
        }
    }
    if (((NOT g_U12379) AND (NOT (IS_BIT_SET( g_U10938._fU0, 4 )))) AND (NOT bVar5))
    {
        if (fParam0 <= 20.00000000)
        {
            return 0;
        }
    }
    l_U272 = 1;
    CLEAR_HELP();
    sub_8516( uParam1 );
    sub_1459( 0 );
    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
    TASK_CLEAR_LOOK_AT( uParam2 );
    if (l_U361)
    {
        TASK_CLEAR_LOOK_AT( l_U362 );
    }
    return 1;
}

void sub_8516(unknown uParam0)
{
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        return;
    }
    REMOVE_BLIP_AND_CLEAR_INDEX( uParam0 );
    (uParam0^) = nil;
    return;
}

int sub_8651(float fParam0)
{
    int iVar3;

    if (fParam0 > 7.00000000)
    {
        return 0;
    }
    l_U272 = 3;
    if (NOT l_U281)
    {
        sub_8694();
    }
    iVar3 = 0;
    if (l_U280)
    {
        if (l_U282)
        {
            PRINT_HELP_FOREVER( ref l_U295[2] );
        }
        else
        {
            PRINT_HELP_FOREVER( ref l_U295[1] );
        }
    }
    else if (l_U279)
    {
        sub_8876( l_U319, ref l_U308 );
        iVar3 = sub_10378( l_U319 );
        sub_10583( iVar3 );
    }
    else
    {
        sub_10902( l_U319, ref l_U308 );
    }
    return 1;
}

int sub_8694()
{
    int iVar2;

    l_U281 = 1;
    iVar2 = IS_CHAR_IN_ANY_CAR( sub_2560() );
    if (l_U280 == iVar2)
    {
        return 0;
    }
    l_U280 = iVar2;
    l_U282 = 0;
    if (l_U280)
    {
        if (IS_CHAR_IN_ANY_HELI( sub_2560() ))
        {
            l_U282 = 1;
        }
    }
    return 1;
}

void sub_8876(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_8940( ref l_U251, "E2FA_LATE1", "E2FA_LATE2" );
        sub_9294( ref l_U251, "E2FAHA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Arrive_On_Foot_Late\n\n" );
        return;
    }
    sub_10268( "PHOLDER_E2", uParam1, 8, 1 );
    return;
}

void sub_8940(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_8991( uParam0, uParam1, uParam2, "END", "END", "END", "END", "END", "END" );
    return;
}

void sub_8991(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
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

void sub_9294(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    char[16] cVar7;

    StrCopy( ref cVar7, uParam1, 16 );
    return sub_9321( uParam0, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_9321(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_9343( iParam1 )))
    {
        return 0;
    }
    l_U19._fU384 = 0;
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
    for ( I = 0; I <= (g_U8972 - 1); I++ )
    {
        StrCopy( ref g_U8972[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam0^) - 1); I++ )
    {
        g_U8972[I] = {(uParam0^)[I]};
    }
    g_U8966 = {(iParam1^)};
    sub_10031( ref g_U8868, ref l_U19 );
    StrCopy( ref g_U8868._fU0, uParam7, 16 );
    g_U8868._fU388 = uParam8;
    g_U8867 = 1;
    return 1;
}

int sub_9343(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_9420( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
        return 0;
    }
    if (IS_THREAD_ACTIVE( g_U561[1] ))
    {
        switch (g_U95._fU0)
        {
            case 1010:
            case 1001:
            case 1000: break;
            default:
            sub_9420( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
            return 0;
            break;
        }
    }
    switch (g_U8867)
    {
        case 4:
        case 1:
        case 2:
        return 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8865 > iParam0->_fU0)
        {
            sub_9420( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
            return 0;
        }
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    g_U8865 = iParam0->_fU0;
    g_U8866++;
    if (g_U8866 > 100000)
    {
        g_U8866 = 1;
    }
    iParam0->_fU4 = g_U8866;
    return 1;
}

void sub_9420(unknown uParam0)
{
    return;
}

void sub_10031(int iParam0, int iParam1)
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

void sub_10268(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_10289( uParam0, ref l_U19._fU0, uParam1, uParam2, uParam3 );
}

void sub_10289(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_9321( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_10378(unknown uParam0)
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
        case 9: return 8;
    }
    sub_5476( "Flow_public: Return_Strand_From_Contact(): Unknown Contact" );
    return 11;
}

void sub_10583(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 3:
        case 7:
        iVar3 = 0;
        break;
        default:
        sub_5476( "Flow_Friend_Late_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_10710( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_10710( uParam0, 0, iVar4 );
    return;
}

void sub_10710(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U12382[uParam0]._fU44[uParam1] += iParam2;
    if (g_U12382[uParam0]._fU44[uParam1] < 0)
    {
        g_U12382[uParam0]._fU44[uParam1] = 0;
    }
    if (g_U12382[uParam0]._fU44[uParam1] > 100)
    {
        g_U12382[uParam0]._fU44[uParam1] = 100;
    }
    return;
}

void sub_10902(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_8940( ref l_U251, "E2FA_FOOT1", "E2FA_FOOT2" );
        sub_9294( ref l_U251, "E2FAHA", uParam1, 8, 1 );
        PRINTSTRING( "\n\nFA_Friend_Speech_Arrive_On_Foot_Not_Late\n\n" );
        return;
    }
    sub_10268( "PHOLDER_E2", uParam1, 8, 1 );
    return;
}

void sub_11099()
{
    if (NOT sub_8694())
    {
        return;
    }
    if (l_U280)
    {
        if (l_U282)
        {
            PRINT_HELP_FOREVER( ref l_U295[2] );
        }
        else
        {
            PRINT_HELP_FOREVER( ref l_U295[0] );
        }
        return;
    }
    CLEAR_HELP();
    return;
}

int sub_11193()
{
    unknown uVar2;
    float fVar3;
    int iVar4;

    if (NOT (IS_CHAR_IN_ANY_CAR( sub_2560() )))
    {
        return 0;
    }
    uVar2 = nil;
    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2560(), ref uVar2 );
    fVar3 = 0.00000000;
    GET_CAR_SPEED( uVar2, ref fVar3 );
    if ((fVar3 < 0.01000000) AND (sub_11268( 1, 1 )))
    {
        if (NOT l_U282)
        {
            SET_PLAYER_CONTROL( sub_3803(), 0 );
        }
        l_U272 = 4;
        CLEAR_HELP();
        iVar4 = 0;
        GET_GAME_TIMER( ref iVar4 );
        l_U320 = iVar4 + 20000;
        return 1;
    }
    return 0;
}

int sub_11268(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_2560() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2560(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_2560() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2560(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2560()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2560() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2560() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_3803() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_3803() )))
    {
        return 0;
    }
    return 1;
}

int sub_11631()
{
    int iVar2;
    boolean bVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    bVar3 = false;
    if (((IS_CHAR_IN_ANY_CAR( sub_2560() )) AND (sub_11268( 1, 1 ))) AND (IS_PLAYER_PRESSING_HORN( sub_3803() )))
    {
        if (l_U282)
        {
            return 0;
        }
        if (l_U291 == 0)
        {
            l_U291 = iVar2 + 400;
            return 0;
        }
        if (l_U291 > iVar2)
        {
            return 0;
        }
        l_U291 = 0;
        bVar3 = true;
    }
    if (NOT bVar3)
    {
        if (l_U291 > 0)
        {
            l_U291 = 0;
            bVar3 = true;
        }
    }
    if (bVar3)
    {
        SET_PLAYER_CONTROL( sub_3803(), 0 );
        l_U272 = 4;
        CLEAR_HELP();
        l_U320 = iVar2 + 20000;
        return 1;
    }
    return 0;
}

void sub_11878()
{
    unknown uVar2;

    uVar2 = sub_3536();
    if (sub_11896( uVar2 ))
    {
        if (l_U280)
        {
            if (l_U282)
            {
                PRINT_HELP_FOREVER( ref l_U295[2] );
            }
            else
            {
                PRINT_HELP_FOREVER( ref l_U295[0] );
            }
        }
        return;
    }
    if (NOT (IS_CHAR_IN_ANY_CAR( sub_2560() )))
    {
        return;
    }
    if ((sub_11193()) || (sub_11631()))
    {
        return;
    }
    sub_12115();
    return;
}

int sub_11896(float fParam0)
{
    boolean bVar3;

    bVar3 = false;
    if (NOT (IS_CHAR_DEAD( sub_2560() )))
    {
        if (sub_7738( sub_2560() ))
        {
            bVar3 = true;
        }
    }
    if (((NOT g_U12379) AND (NOT (IS_BIT_SET( g_U10938._fU0, 4 )))) AND (NOT bVar3))
    {
        if (fParam0 <= 9.00000000)
        {
            return 0;
        }
    }
    l_U272 = 2;
    l_U280 = 0;
    return 1;
}

void sub_12115()
{
    if (NOT sub_8694())
    {
        return;
    }
    if (l_U280)
    {
        if (l_U282)
        {
            PRINT_HELP_FOREVER( ref l_U295[2] );
        }
        else
        {
            PRINT_HELP_FOREVER( ref l_U295[1] );
        }
        return;
    }
    CLEAR_HELP();
    return;
}

int sub_12237(unknown uParam0, unknown uParam1)
{
    boolean bVar4;
    unknown uVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    int iVar9;
    boolean bVar10;
    int iVar11;

    bVar4 = g_U12379;
    if (NOT bVar4)
    {
        if (IS_BIT_SET( g_U10938._fU0, 4 ))
        {
            bVar4 = true;
        }
    }
    if ((NOT l_U278) AND (bVar4))
    {
        l_U272 = 3;
        return 1;
    }
    uVar5 = nil;
    iVar6 = 0;
    iVar7 = 1;
    if (l_U361)
    {
        iVar7 = 2;
    }
    if (NOT l_U278)
    {
        if (NOT l_U283)
        {
            iVar7 = 3;
        }
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2560() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2560(), ref uVar5 );
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( uVar5, ref iVar6 );
            if (((iVar6 < iVar7) || (l_U284)) || (NOT (IS_VEH_DRIVEABLE( uVar5 ))))
            {
                TASK_LEAVE_CAR( sub_2560(), uVar5 );
                l_U285 = 1;
            }
        }
        GET_SCRIPT_TASK_STATUS( (uParam0^), 80, ref iVar8 );
        if ((NOT (iVar8 == 1)) AND (NOT (iVar8 == 7)))
        {
            return 1;
        }
        if (NOT (COMPARE_STRING( ref l_U328._fU0, l_U327 )))
        {
            CLEAR_CHAR_TASKS( (uParam0^) );
            REMOVE_ANIMS( ref l_U328._fU0 );
            l_U328._fU96 = 0;
        }
        SET_NEXT_DESIRED_MOVE_STATE( 2 );
        SET_GROUP_MEMBER( sub_12545(), (uParam0^) );
        if (l_U361)
        {
            SET_NEXT_DESIRED_MOVE_STATE( 2 );
            SET_GROUP_MEMBER( sub_12545(), l_U362 );
        }
        l_U278 = 1;
        TASK_CLEAR_LOOK_AT( (uParam0^) );
        if (l_U361)
        {
            TASK_CLEAR_LOOK_AT( l_U362 );
        }
        sub_12669();
        g_U12379 = 1;
    }
    iVar9 = 0;
    bVar10 = false;
    if ((IS_CHAR_IN_ANY_CAR( sub_2560() )) AND (NOT l_U285))
    {
        MODIFY_CHAR_MOVE_STATE( (uParam0^), 2 );
        if (l_U361)
        {
            MODIFY_CHAR_MOVE_STATE( l_U362, 2 );
        }
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2560(), ref uVar5 );
        bVar10 = true;
        if (l_U361)
        {
            if (NOT (IS_CHAR_IN_CAR( l_U362, uVar5 )))
            {
                bVar10 = false;
            }
        }
        if ((NOT (IS_CHAR_IN_CAR( (uParam0^), uVar5 ))) || (NOT bVar10))
        {
            if (NOT (l_U320 == 0))
            {
                iVar11 = 0;
                GET_GAME_TIMER( ref iVar11 );
                if ((l_U320 < iVar11) || (NOT (IS_VEH_DRIVEABLE( uVar5 ))))
                {
                    SET_PLAYER_CONTROL( sub_3803(), 1 );
                    HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
                    SET_GAME_CAM_HEADING( 0.00000000 );
                    l_U320 = 0;
                }
                else if (NOT (IS_GROUP_MEMBER( (uParam0^), sub_12545() )))
                {
                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                    SET_GROUP_MEMBER( sub_12545(), (uParam0^) );
                }
                if (l_U361)
                {
                    if (NOT (IS_GROUP_MEMBER( l_U362, sub_12545() )))
                    {
                        SET_NEXT_DESIRED_MOVE_STATE( 2 );
                        SET_GROUP_MEMBER( sub_12545(), l_U362 );
                    }
                }
            }
            else if (sub_3536() > 20.00000000)
            {
                return 0;
            }
            return 1;
        }
        if (l_U279)
        {
            sub_13904( l_U319, ref l_U308 );
            iVar9 = sub_10378( l_U319 );
            sub_10583( iVar9 );
        }
        else
        {
            sub_13965( l_U319, ref l_U308 );
        }
        sub_8516( uParam1 );
        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
        return 0;
    }
    if (l_U279)
    {
        if (l_U286)
        {
            sub_14234( l_U319, ref l_U308 );
        }
        else
        {
            sub_8876( l_U319, ref l_U308 );
        }
        iVar9 = sub_10378( l_U319 );
        sub_10583( iVar9 );
    }
    else if (l_U286)
    {
        sub_14315( l_U319, ref l_U308 );
    }
    else
    {
        sub_10902( l_U319, ref l_U308 );
    }
    if (IS_HINT_RUNNING())
    {
        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
    }
    sub_7621();
    return 0;
}

void sub_12545()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_12669()
{
    sub_12678();
    sub_12823( ref g_U10938._fU32 );
    g_U10938._fU48 = {0.00000000, 0.00000000, 0.00000000};
    sub_12897();
    return;
}

void sub_12678()
{
    CLEAR_BIT( ref g_U10938._fU0, 2 );
    CLEAR_BIT( ref g_U10938._fU0, 3 );
    CLEAR_BIT( ref g_U10938._fU0, 4 );
    CLEAR_BIT( ref g_U10938._fU0, 5 );
    CLEAR_BIT( ref g_U10938._fU0, 6 );
    CLEAR_BIT( ref g_U10938._fU0, 8 );
    CLEAR_BIT( ref g_U10938._fU0, 9 );
    CLEAR_BIT( ref g_U10938._fU0, 10 );
    g_U10938._fU12 = 0;
    return;
}

void sub_12823(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_12897()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_12935( 1, g_U575[I] )) == 0)
        {
            sub_13186( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_13364())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U95._fU404 = 1000;
    }
    g_U95._fU404 = 1000;
    return;
}

int sub_12935(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_13186(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_13271( g_U575 - 1 );
    return;
}

void sub_13271(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

int sub_13364()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_12935( 4, g_U575[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_13904(unknown uParam0, unknown uParam1)
{
    sub_8876( uParam0, uParam1 );
    return;
}

void sub_13965(unknown uParam0, unknown uParam1)
{
    if (IS_CHAR_DEAD( sub_2560() ))
    {
        return;
    }
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_8940( ref l_U251, "E2FA_VEH1", "E2FA_VEH2" );
        sub_9294( ref l_U251, "E2FAHA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Arrive_In_Vehicle_Not_Late\n\n" );
        return;
    }
    sub_10268( "PHOLDER_E2", uParam1, 8, 1 );
    return;
}

void sub_14234(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_14315(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_14478()
{
    SET_MISSION_FLAG( 1 );
    g_U12379 = 1;
    l_U401 = 1;
    sub_12823( ref l_U481 );
    g_U20825[l_U472]._fU144 = 24;
    return;
}

void sub_14599()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    l_U416 = 0;
    l_U368 = 1;
    uVar2 = {g_U20825[l_U472]._fU712._fU84};
    if (NOT (sub_14663( l_U472, l_U473, l_U477, ref uVar2 )))
    {
        return;
    }
    sub_24780();
    l_U395 = 6;
    l_U396 = 0;
    return;
}

void sub_14663(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int iVar8;

    iVar8 = 0;
    return sub_14692( uParam0, uParam1, uParam2, iVar8, uParam5, 34, 0 );
}

int sub_14692(unknown uParam0, int iParam1, unknown uParam2, unknown uParam3, unknown uParam4, boolean bParam5, unknown uParam6, int iParam7, int iParam8)
{
    boolean bVar11;
    int iVar12;
    float fVar13;
    boolean bVar14;
    unknown uVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    vector vVar19;
    vector vVar22;
    vector vVar25;
    vector vVar28;
    float fVar31;
    int iVar32;
    unknown uVar33;
    unknown uVar34;
    unknown uVar35;
    unknown uVar36;
    unknown uVar37;
    unknown uVar38;
    float fVar39;
    float fVar40;
    float fVar41;
    boolean bVar42;
    int iVar43;
    int iVar44;

    bVar11 = false;
    if (NOT (iParam7 == 34))
    {
        bVar11 = true;
    }
    if (NOT l_U466)
    {
        if (IS_CHAR_INJURED( iParam1 ))
        {
            l_U399 = 1;
            l_U400 = 0;
            return 1;
        }
        if (bVar11)
        {
            if (IS_CHAR_INJURED( iParam8 ))
            {
                l_U399 = 1;
                l_U400 = 0;
                return 1;
            }
        }
    }
    if (l_U396 == 0)
    {
        if (bParam5)
        {
            sub_14822( uParam0 );
        }
        else
        {
            sub_15135( uParam0, uParam2 );
        }
        l_U456 = {0.00000000, 0.00000000, 0.00000000};
        l_U459 = 0;
        l_U466 = 0;
        l_U396++;
    }
    if (l_U396 == 1)
    {
        if (NOT (sub_15501( l_U308 )))
        {
            sub_2454( uParam6 );
            sub_2609( 0, sub_2560(), l_U469, 0 );
            sub_2609( 1, iParam1, "ARMANDO", 0 );
            sub_2609( 2, iParam8, "HENRIQUE", 0 );
            if (l_U445)
            {
                sub_15757( l_U319, ref l_U308, l_U446 );
            }
            else
            {
                sub_15880( l_U319, ref l_U308 );
            }
            sub_16259( uParam0, bParam5 );
            l_U396++;
        }
        sub_16661( uParam0, bParam5, uParam2 );
    }
    iVar12 = 0;
    if (l_U396 == 2)
    {
        fVar13 = uParam2._fU8 + 0.00000000;
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2560(), uParam2._fU0, uParam2._fU4, fVar13, 2.50000000, 2.50000000, 2.50000000, 1 ))
        {
            if (bVar11)
            {
                if ((sub_17065( iParam1 )) AND (sub_17065( iParam8 )))
                {
                    l_U396++;
                }
            }
            else if (sub_17065( iParam1 ))
            {
                l_U396++;
            }
        }
        else if (NOT l_U402)
        {
            if (g_U28807._fU56 <= 0)
            {
                GET_GAME_TIMER( ref iVar12 );
                if (NOT IS_MINIGAME_IN_PROGRESS())
                {
                    if (iVar12 > l_U403)
                    {
                        if (NOT (sub_15501( l_U308 )))
                        {
                            sub_17422( l_U319, ref l_U308 );
                            l_U402 = 1;
                        }
                    }
                }
                else
                {
                    l_U403 = iVar12 + 2000;
                }
            }
        }
        l_U416 = 1;
        if (l_U369)
        {
            sub_17823( iParam1, ref l_U441, 0 );
        }
        else
        {
            sub_17873( uParam0 );
        }
        sub_16661( uParam0, bParam5, uParam2 );
    }
    if (IS_CHAR_DEAD( sub_2560() ))
    {
        return 0;
    }
    bVar14 = IS_CHAR_SITTING_IN_ANY_CAR( sub_2560() );
    if (bVar14)
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2560(), ref uVar15 );
        if (IS_CAR_DEAD( uVar15 ))
        {
            if (NOT (IS_CHAR_DEAD( sub_2560() )))
            {
                TASK_LEAVE_ANY_CAR( sub_2560() );
            }
            if (NOT (IS_CHAR_DEAD( iParam1 )))
            {
                TASK_LEAVE_ANY_CAR( iParam1 );
            }
            if (bVar11)
            {
                if (NOT (IS_CHAR_DEAD( iParam8 )))
                {
                    TASK_LEAVE_ANY_CAR( iParam8 );
                }
            }
            return 0;
        }
    }
    if (l_U396 == 3)
    {
        if (bVar14)
        {
            if (sub_7738( sub_2560() ))
            {
                return 0;
            }
            GET_CHAR_COORDINATES( sub_2560(), ref vVar19.x, ref vVar19.y, ref vVar19.z );
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2560(), 2.00000000, 8.00000000, 3.00000000, ref uVar16._fU0, ref uVar16._fU4, ref uVar16._fU8 );
        }
        else
        {
            GET_CHAR_COORDINATES( sub_2560(), ref vVar22.x, ref vVar22.y, ref vVar22.z );
            GET_CHAR_COORDINATES( iParam1, ref vVar25.x, ref vVar25.y, ref vVar25.z );
            vVar28 = {vVar22 - vVar25};
            vVar28.x *= 1.00000000;
            vVar28.y *= 1.00000000;
            vVar28.z *= 1.00000000;
            vVar28.z += 2.00000000;
            uVar16 = {vVar22 + vVar28};
            vVar19 = {vVar25};
            vVar19 = {vVar19 + 0.50000000};
        }
        sub_18589();
        CREATE_CAM( 14, ref l_U404[1] );
        SET_CAM_POS( l_U404[1], uVar16._fU0, uVar16._fU4, uVar16._fU8 );
        POINT_CAM_AT_COORD( l_U404[1], vVar19.x, vVar19.y, vVar19.z );
        SET_CAM_FOV( l_U404[1], 50.00000000 );
        SET_CAM_ACTIVE( l_U404[1], 1 );
        SET_CAM_PROPAGATE( l_U404[1], 1 );
        ACTIVATE_SCRIPTED_CAMS( 1, 1 );
        SETTIMERA( 0 );
        l_U396++;
    }
    if (l_U396 == 4)
    {
        if (sub_18833())
        {
            sub_19082( uParam0 );
            sub_16727( uParam0 );
            SET_PLAYER_CONTROL( sub_3803(), 0 );
            l_U396++;
        }
    }
    if (l_U396 == 5)
    {
        if ((NOT (IS_CHAR_DEAD( sub_2560() ))) AND (NOT (IS_CHAR_DEAD( iParam1 ))))
        {
            if (bVar14)
            {
                TASK_LOOK_AT_CHAR( sub_2560(), iParam1, -2, 0 );
                TASK_LOOK_AT_CHAR( iParam1, sub_2560(), -2, 0 );
                if (bVar11)
                {
                    if (NOT (IS_CHAR_DEAD( iParam8 )))
                    {
                        TASK_LOOK_AT_CHAR( iParam8, sub_2560(), -2, 0 );
                    }
                }
            }
            else
            {
                TASK_TURN_CHAR_TO_FACE_CHAR( sub_2560(), iParam1 );
                TASK_TURN_CHAR_TO_FACE_CHAR( iParam1, sub_2560() );
                if (bVar11)
                {
                    if (NOT (IS_CHAR_DEAD( iParam8 )))
                    {
                        TASK_TURN_CHAR_TO_FACE_CHAR( iParam8, sub_2560() );
                    }
                }
            }
        }
        l_U396++;
    }
    if (l_U396 == 6)
    {
        if (TIMERA() > 2000)
        {
            SETTIMERA( 0 );
            l_U396++;
        }
    }
    fVar31 = 0.00000000;
    if (l_U396 == 7)
    {
        if (bVar14)
        {
            l_U396++;
        }
        else if ((IS_CHAR_DEAD( sub_2560() )) || (IS_CHAR_DEAD( iParam1 )))
        {
            l_U396++;
        }
        else
        {
            GET_CHAR_COORDINATES( sub_2560(), ref vVar22.x, ref vVar22.y, ref vVar22.z );
            GET_CHAR_COORDINATES( iParam1, ref vVar25.x, ref vVar25.y, ref vVar25.z );
            fVar31 = sub_19760( vVar22, vVar25 );
            if ((fVar31 < 5.00000000) || (TIMERA() > 7000))
            {
                l_U396++;
            }
        }
    }
    if (l_U396 == 8)
    {
        iVar32 = 0;
        sub_19885( iVar32 );
        sub_2454( uParam6 );
        sub_2609( 0, sub_2560(), l_U469, 0 );
        sub_2609( 1, iParam1, "ARMANDO", 0 );
        sub_2609( 2, iParam8, "HENRIQUE", 0 );
        if (l_U445)
        {
            sub_20108( l_U319, ref l_U308 );
        }
        else
        {
            sub_20196( l_U319, ref l_U308 );
        }
        sub_20645( sub_2560() );
        sub_20645( iParam1 );
        sub_20645( iParam8 );
        l_U396++;
    }
    fVar39 = 0.00000000;
    fVar40 = 0.00000000;
    fVar41 = 0.00000000;
    if (l_U396 == 9)
    {
        if (WAS_PED_SKELETON_UPDATED( sub_2560() ))
        {
            GET_PED_BONE_POSITION( sub_2560(), 1205, 0.00000000, 0.00000000, 0.00000000, ref uVar33 );
        }
        else
        {
            GET_CHAR_COORDINATES( sub_2560(), ref uVar33._fU0, ref uVar33._fU4, ref uVar33._fU8 );
            uVar33._fU8 += 0.70000000;
        }
        if (bVar14)
        {
            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar15, 0.00000000, 0.00000000, 0.00000000, ref uVar36._fU0, ref uVar36._fU4, ref uVar36._fU8 );
            fVar31 = sub_19760( uVar33, uVar36 );
            fVar39 = fVar31 + 1.30000000;
            if (fVar31 > 4.00000000)
            {
                fVar39 += 0.70000000;
            }
            fVar40 = (uVar33._fU8 - uVar36._fU8) + 0.40000000;
            uVar16 = {0.00000000, fVar39, fVar40};
            fVar41 = uVar33._fU8 - uVar36._fU8;
            vVar19 = {0.00000000, 0.00000000, fVar41};
            l_U396++;
        }
        else
        {
            l_U396++;
        }
    }
    if (l_U396 == 10)
    {
        if (bVar14)
        {
            if (IS_CAR_DEAD( uVar15 ))
            {
                bVar14 = false;
            }
        }
        if (bVar14)
        {
            ATTACH_CAM_TO_VEHICLE( l_U404[1], uVar15 );
            SET_CAM_ATTACH_OFFSET( l_U404[1], uVar16._fU0, uVar16._fU4, uVar16._fU8 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U404[1], 1 );
            POINT_CAM_AT_VEHICLE( l_U404[1], uVar15 );
            SET_CAM_POINT_OFFSET( l_U404[1], vVar19.x, vVar19.y, vVar19.z );
            SET_CAM_POINT_OFFSET_IS_RELATIVE( l_U404[1], 1 );
            SET_CAM_FOV( l_U404[1], 40.00000000 );
        }
        else
        {
            ATTACH_CAM_TO_PED( l_U404[1], sub_2560() );
            SET_CAM_ATTACH_OFFSET( l_U404[1], 0.70000000, -1.40000000, 0.70000000 );
            SET_CAM_ATTACH_OFFSET_IS_RELATIVE( l_U404[1], 1 );
            GET_CHAR_COORDINATES( iParam1, ref vVar19.x, ref vVar19.y, ref vVar19.z );
            vVar19.z += 0.50000000;
            POINT_CAM_AT_COORD( l_U404[1], vVar19.x, vVar19.y, vVar19.z );
            SET_CAM_FOV( l_U404[1], 50.00000000 );
        }
        l_U396++;
    }
    if (l_U396 == 11)
    {
        if (sub_22555())
        {
            l_U396 = 50;
            return 0;
        }
        if (NOT (sub_15501( l_U308 )))
        {
            if (bVar14)
            {
                bVar42 = false;
                iVar43 = nil;
                GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar15, 0, ref iVar43 );
                if (iVar43 == iParam1)
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar15, 6.00000000, 0.00000000, 0.00000000, ref l_U434._fU0, ref l_U434._fU4, ref l_U434._fU8 );
                    bVar42 = true;
                }
                if (NOT bVar42)
                {
                    GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar15, 1, ref iVar43 );
                    if (iVar43 == iParam1)
                    {
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar15, -6.00000000, 0.00000000, 0.00000000, ref l_U434._fU0, ref l_U434._fU4, ref l_U434._fU8 );
                        bVar42 = true;
                    }
                }
                if (NOT bVar42)
                {
                    GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar15, 6.00000000, 0.00000000, 0.00000000, ref l_U434._fU0, ref l_U434._fU4, ref l_U434._fU8 );
                }
                fVar13 = l_U434._fU8 + 1.50000000;
                GET_GROUND_Z_FOR_3D_COORD( l_U434._fU0, l_U434._fU4, fVar13, ref l_U434._fU8 );
                if (bVar11)
                {
                    bVar42 = false;
                    iVar43 = nil;
                    GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar15, 0, ref iVar43 );
                    if (iVar43 == iParam8)
                    {
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar15, 6.00000000, 0.00000000, 0.00000000, ref l_U437._fU0, ref l_U437._fU4, ref l_U437._fU8 );
                        bVar42 = true;
                    }
                    if (NOT bVar42)
                    {
                        GET_CHAR_IN_CAR_PASSENGER_SEAT( uVar15, 1, ref iVar43 );
                        if (iVar43 == iParam8)
                        {
                            GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar15, -6.00000000, 0.00000000, 0.00000000, ref l_U437._fU0, ref l_U437._fU4, ref l_U437._fU8 );
                            bVar42 = true;
                        }
                    }
                    if (NOT bVar42)
                    {
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( uVar15, 6.00000000, 0.00000000, 0.00000000, ref l_U437._fU0, ref l_U437._fU4, ref l_U437._fU8 );
                    }
                    fVar13 = l_U437._fU8 + 1.50000000;
                    GET_GROUND_Z_FOR_3D_COORD( l_U437._fU0, l_U437._fU4, fVar13, ref l_U437._fU8 );
                }
            }
            else
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2560(), -1.50000000, -5.00000000, 10.00000000, ref l_U434._fU0, ref l_U434._fU4, ref l_U434._fU8 );
                fVar13 = l_U434._fU8;
                GET_GROUND_Z_FOR_3D_COORD( l_U434._fU0, l_U434._fU4, fVar13, ref l_U434._fU8 );
                if (bVar11)
                {
                    GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2560(), --1.50000000, -5.00000000, 10.00000000, ref l_U437._fU0, ref l_U437._fU4, ref l_U437._fU8 );
                    fVar13 = l_U437._fU8;
                    GET_GROUND_Z_FOR_3D_COORD( l_U437._fU0, l_U437._fU4, fVar13, ref l_U437._fU8 );
                }
            }
            l_U278 = 0;
            if ((NOT (iParam1 == nil)) AND (NOT (IS_CHAR_DEAD( iParam1 ))))
            {
                if (IS_GROUP_MEMBER( iParam1, sub_12545() ))
                {
                    REMOVE_CHAR_FROM_GROUP( iParam1 );
                }
            }
            if (bVar11)
            {
                if ((NOT (iParam8 == nil)) AND (NOT (IS_CHAR_DEAD( iParam8 ))))
                {
                    if (IS_GROUP_MEMBER( iParam8, sub_12545() ))
                    {
                        REMOVE_CHAR_FROM_GROUP( iParam8 );
                    }
                }
            }
            SETTIMERA( 0 );
            l_U396++;
        }
        else
        {
            BLOCK_CHAR_AMBIENT_ANIMS( sub_2560(), 1 );
            BLOCK_CHAR_AMBIENT_ANIMS( iParam1, 1 );
            if (bVar11)
            {
                BLOCK_CHAR_AMBIENT_ANIMS( iParam8, 1 );
            }
        }
    }
    if (l_U396 == 12)
    {
        if (NOT (IS_CHAR_DEAD( sub_2560() )))
        {
            TASK_CLEAR_LOOK_AT( sub_2560() );
        }
        if ((sub_23694( iParam1, l_U434, iParam8, l_U437 )) || (TIMERA() > 7000))
        {
            l_U396++;
        }
    }
    if (l_U396 == 13)
    {
        sub_7402( uParam0 );
        DELETE_CHAR( ref iParam1 );
        if (bVar11)
        {
            sub_7402( iParam7 );
            DELETE_CHAR( ref iParam8 );
        }
        sub_24125();
        SET_GAME_CAM_HEADING( 0.00000000 );
        l_U396 = 99;
    }
    if (l_U396 == 99)
    {
        l_U395 = 6;
        l_U396 = 0;
        return 1;
    }
    if (l_U396 == 50)
    {
        DO_SCREEN_FADE_OUT( 500 );
        SETTIMERA( 0 );
        l_U466 = 1;
        l_U396++;
    }
    if (l_U396 == 51)
    {
        if ((IS_SCREEN_FADED_OUT()) || (TIMERA() > 3000))
        {
            l_U396++;
        }
    }
    iVar44 = 0;
    if (l_U396 == 52)
    {
        sub_24362( ref l_U308, iVar44 );
        l_U278 = 0;
        if ((NOT (iParam1 == nil)) AND (NOT (IS_CHAR_DEAD( iParam1 ))))
        {
            if (IS_GROUP_MEMBER( iParam1, sub_12545() ))
            {
                REMOVE_CHAR_FROM_GROUP( iParam1 );
            }
        }
        sub_7402( uParam0 );
        DELETE_CHAR( ref iParam1 );
        if (bVar11)
        {
            if ((NOT (iParam8 == nil)) AND (NOT (IS_CHAR_DEAD( iParam8 ))))
            {
                if (IS_GROUP_MEMBER( iParam8, sub_12545() ))
                {
                    REMOVE_CHAR_FROM_GROUP( iParam8 );
                }
            }
            sub_7402( iParam7 );
            DELETE_CHAR( ref iParam8 );
        }
        sub_24125();
        SET_GAME_CAM_HEADING( 0.00000000 );
        l_U396++;
    }
    if (l_U396 == 53)
    {
        DO_SCREEN_FADE_IN( 500 );
        SETTIMERA( 0 );
        l_U396++;
    }
    if (l_U396 == 54)
    {
        if ((IS_SCREEN_FADED_IN()) || (TIMERA() > 3000))
        {
            l_U396 = 99;
        }
    }
    return 0;
}

void sub_14822(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        sub_14848();
        return;
    }
    sub_5476( "FriendDistribute_GTA4: Friend_Distribute_Add_Blip_For_Home: Not a friend" );
    sub_5476( "FriendDistribute_GTA4: Friend_Distribute_Add_Blip_For_Home: Should never reach here" );
    return;
}

void sub_14848()
{
    if (NOT (DOES_BLIP_EXIST( l_U392 )))
    {
        ADD_BLIP_FOR_COORD( l_U386._fU0, l_U386._fU4, l_U386._fU8, ref l_U392 );
        if (l_U368)
        {
            SET_ROUTE( l_U392, 1 );
        }
    }
    return;
}

void sub_15135(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    switch (uParam0)
    {
        case 3:
        sub_15164( uParam1 );
        return;
    }
    sub_5476( "FriendDistribute_GTA4: Friend_Distribute_Add_Blip_For_Dropoff: Not a friend" );
    sub_5476( "FriendDistribute_GTA4: Friend_Distribute_Add_Blip_For_Dropoff: Should never reach here" );
    return;
}

void sub_15164(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (DOES_BLIP_EXIST( l_U392 )))
    {
        ADD_BLIP_FOR_COORD( uParam0._fU0, uParam0._fU4, uParam0._fU8, ref l_U392 );
        if (l_U368)
        {
            SET_ROUTE( l_U392, 1 );
        }
    }
    return;
}

int sub_15501(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8867 == 1)) || (g_U8867 == 2))
    {
        if (uParam0._fU4 == g_U8866)
        {
            return 1;
        }
        else
        {
            sub_9420( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_9420( "\n speech is not playing" );
    }
    return 0;
}

void sub_15757(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (g_U20825[uParam0]._fU712._fU4)
    {
        sub_15792( uParam0, uParam1 );
        return;
    }
    sub_10268( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_15792(unknown uParam0, unknown uParam1)
{
    sub_10268( "PHOLDER_E2", uParam1, 8, 1 );
    return;
}

void sub_15880(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_15903( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_8940( ref l_U251, "E2FA_HOME1", "E2FA_HOME2" );
        sub_9294( ref l_U251, "FAHBA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Optional_Take_Me_Home\n\n" );
        return;
    }
    sub_10268( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_15903(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_8940( ref l_U251, "E2FA_HOME3", "E2FA_HOME4" );
        sub_9294( ref l_U251, "FAHBA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Optional_Take_Me_Home_Drunk\n\n" );
        return;
    }
    sub_10268( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_16259(unknown uParam0, boolean bParam1)
{
    boolean bVar4;
    boolean bVar5;

    if ((g_U10556) AND (g_U10557))
    {
        return;
    }
    if (g_U20825[uParam0]._fU712._fU4)
    {
        return;
    }
    bVar4 = false;
    if (NOT g_U10556)
    {
        if (bParam1)
        {
            bVar4 = true;
        }
    }
    bVar5 = false;
    if (NOT g_U10557)
    {
        if (g_U20825[uParam0]._fU144 == 12)
        {
            bVar5 = true;
        }
    }
    if (bVar5)
    {
        if (bVar4)
        {
            sub_16391( uParam0 );
            g_U10557 = 1;
            return;
        }
        PRINT_HELP( "FRDRUNK" );
        g_U10557 = 1;
        return;
    }
    if (bVar4)
    {
        if (g_U28807._fU56 == 0)
        {
            sub_16508( uParam0 );
        }
        else
        {
            sub_16572( uParam0 );
        }
        g_U10556 = 1;
    }
    return;
}

void sub_16391(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        PRINT_HELP( "FRDRHMdf" );
        break;
        default:
    }
    return;
}

void sub_16508(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        PRINT_HELP( "FRALTdfH" );
        break;
        default:
    }
    return;
}

void sub_16572(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        PRINT_HELP( "FRALTdf" );
        break;
        default:
    }
    return;
}

void sub_16661(unknown uParam0, boolean bParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    boolean bVar7;

    bVar7 = true;
    if (l_U293)
    {
        bVar7 = false;
    }
    if (bVar7)
    {
        if (bParam1)
        {
            sub_14822( uParam0 );
        }
        else
        {
            sub_15135( uParam0, uParam2 );
        }
        return;
    }
    sub_16727( uParam0 );
    return;
}

void sub_16727(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        sub_16753();
        return;
    }
    sub_5476( "FriendDistribute_GTA4: Friend_Distribute_Remove_Blip_For_Home: Not a friend" );
    sub_5476( "FriendDistribute_GTA4: Friend_Distribute_Remove_Blip_For_Home: Should never reach here" );
    return;
}

void sub_16753()
{
    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U392 );
    return;
}

int sub_17065(unknown uParam0)
{
    unknown uVar3;
    vector vVar4;

    if (IS_CHAR_DEAD( uParam0 ))
    {
        return 0;
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2560() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2560(), ref uVar3 );
        if (NOT (IS_CHAR_SITTING_IN_CAR( sub_2560(), uVar3 )))
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
    if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2560(), vVar4.x, vVar4.y, vVar4.z, 4.00000000, 4.00000000, 4.00000000, 0 )))
    {
        return 0;
    }
    return 1;
}

void sub_17422(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_17445( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_8940( ref l_U251, "E2FA_END1", "E2FA_END2" );
        sub_9294( ref l_U251, "FAHBA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Take_Me_Home\n\n" );
        return;
    }
    sub_10268( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_17445(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_8940( ref l_U251, "E2FA_ENDD1", "E2FA_ENDD2" );
        sub_9294( ref l_U251, "FAHBA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Take_Me_Home_Drunk\n\n" );
        return;
    }
    sub_10268( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_17823(unknown uParam0, unknown uParam1, boolean bParam2)
{
    if (bParam2)
    {
        sub_8187( uParam0, uParam1 );
        return;
    }
    sub_8516( uParam1 );
    return;
}

void sub_17873(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        sub_17899();
        return;
    }
    sub_5476( "FriendDistribute_GTA4: Friend_Distribute_Maintain_Friend_Blip: Not a friend" );
    sub_5476( "FriendDistribute_GTA4: Friend_Distribute_Maintain_Friend_Blip: Should never reach here" );
    return;
}

void sub_17899()
{
    sub_17823( l_U382, ref l_U384, l_U364 );
    sub_17823( l_U383, ref l_U385, l_U365 );
    return;
}

void sub_18589()
{
    int iVar2;

    l_U408 = 1;
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

int sub_18833()
{
    int iVar2;
    unknown uVar3;
    float fVar4;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (l_U380 == 0)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_2560() )))
        {
            return 1;
        }
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2560() )))
        {
            return 0;
        }
        SET_PLAYER_CONTROL( sub_3803(), 0 );
        l_U370 = iVar2 + 4000;
        l_U380 = 1;
    }
    if (l_U380 == 1)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_2560() )))
        {
            l_U380 = 0;
            return 1;
        }
        if (sub_7738( sub_2560() ))
        {
            return 0;
        }
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2560(), ref uVar3 );
        GET_CAR_SPEED( uVar3, ref fVar4 );
        if ((fVar4 < 0.04000000) || (l_U370 < iVar2))
        {
            SET_PLAYER_CONTROL( sub_3803(), 1 );
            l_U380 = 0;
            return 1;
        }
    }
    return 0;
}

void sub_19082(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        sub_19108();
        return;
    }
    sub_5476( "FriendDistribute_GTA4: Friend_Distribute_Remove_Friend_Blip: Not a friend" );
    sub_5476( "FriendDistribute_GTA4: Friend_Distribute_Remove_Friend_Blip: Should never reach here" );
    return;
}

void sub_19108()
{
    sub_8516( ref l_U384 );
    sub_8516( ref l_U385 );
    return;
}

void sub_19760(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    float Result;

    Result = 9999.90000000;
    GET_DISTANCE_BETWEEN_COORDS_3D( uParam0._fU0, uParam0._fU4, uParam0._fU8, uParam3._fU0, uParam3._fU4, uParam3._fU8, ref Result );
    return Result;
}

void sub_19885(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_MISSION_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8865 >= 4) AND (g_U8865 <= 8))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_20108(unknown uParam0, unknown uParam1)
{
    if (g_U20825[uParam0]._fU712._fU4)
    {
        sub_15792( uParam0, uParam1 );
        return;
    }
    sub_10268( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_20196(unknown uParam0, unknown uParam1)
{
    if (g_U9200)
    {
        sub_20219( uParam0, uParam1 );
        return;
    }
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_20296( ref l_U251, "E2FA_DROP1", "E2FA_DROP2", "E2FA_DROP3" );
        sub_9294( ref l_U251, "FAHBA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Dropoff_At_Home\n\n" );
        return;
    }
    sub_10268( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_20219(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        case 7:
        sub_20296( ref l_U251, "E2FA_DROP4", "E2FA_DROP5", "E2FA_DROP6" );
        sub_9294( ref l_U251, "FAHBA", uParam1, 8, 1 );
        PRINTSTRING( "\n\A_Friend_Speech_Dropoff_At_Home_Drunk\n\n" );
        return;
    }
    sub_10268( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_20296(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    sub_8991( uParam0, uParam1, uParam2, uParam3, "END", "END", "END", "END", "END" );
    return;
}

void sub_20645(int iParam0)
{
    int iVar3;
    unknown uVar4;
    int iVar5;

    if (iParam0 == nil)
    {
        return;
    }
    if (NOT (DOES_CHAR_EXIST( iParam0 )))
    {
        return;
    }
    iVar3 = sub_20687( iParam0 );
    if (NOT (iVar3 == -1))
    {
        uVar4 = g_U9105[iVar3]._fU0;
        sub_20817( 1, uVar4, 1 );
        return;
    }
    iVar5 = sub_21466( iParam0 );
    if (iVar5 == -1)
    {
        return;
    }
    sub_21550( iVar5 );
    return;
}

int sub_20687(int iParam0)
{
    int Result;

    if (iParam0 == nil)
    {
        return -1;
    }
    Result = 0;
    for ( Result = 0; Result < 5; Result++ )
    {
        if (NOT (g_U9105[Result]._fU0 == -1))
        {
            if (iParam0 == g_U9105[Result]._fU4)
            {
                return Result;
            }
        }
    }
    return -1;
}

void sub_20817(unknown uParam0, unknown uParam1, unknown uParam2)
{
    sub_20834( uParam0, uParam1, uParam2, 0, 0 );
    return;
}

void sub_20834(int iParam0, int iParam1, int iParam2, unknown uParam3, unknown uParam4)
{
    int iVar7;

    if (iParam0 == -1)
    {
        SCRIPT_ASSERT( "Post_Notice: Unique Drunk Ped ID for poster is unknown" );
        return;
    }
    if (iParam1 == -1)
    {
        SCRIPT_ASSERT( "Post_Notice: Unique Drunk Ped ID for reader is unknown" );
        return;
    }
    if (iParam2 == 5)
    {
        SCRIPT_ASSERT( "Post_Notice: Notice ID is unknown" );
        return;
    }
    if (sub_21056( iParam0, iParam1, iParam2 ))
    {
        return;
    }
    iVar7 = sub_21205();
    if (iVar7 == -1)
    {
        SCRIPT_ASSERT( "All drunk notice slots are full - Tell Keith to increase MAX_NUMBER_OF_DRUNK_NOTICES" );
        return;
    }
    g_U9116[iVar7]._fU0 = iParam0;
    g_U9116[iVar7]._fU4 = iParam1;
    g_U9116[iVar7]._fU8 = iParam2;
    g_U9116[iVar7]._fU12 = uParam3;
    g_U9116[iVar7]._fU16 = uParam4;
    return;
}

int sub_21056(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if ((sub_21071( uParam0, uParam1, uParam2 )) == -1)
    {
        return 0;
    }
    return 1;
}

int sub_21071(int iParam0, int iParam1, int iParam2)
{
    int Result;

    Result = 0;
    for ( Result = 0; Result < 16; Result++ )
    {
        if (iParam2 == g_U9116[Result]._fU8)
        {
            if (iParam0 == g_U9116[Result]._fU0)
            {
                if (iParam1 == g_U9116[Result]._fU4)
                {
                    return Result;
                }
            }
        }
    }
    return -1;
}

int sub_21205()
{
    int Result;

    Result = 0;
    for ( Result = 0; Result < 16; Result++ )
    {
        if (g_U9116[Result]._fU8 == 5)
        {
            return Result;
        }
    }
    return -1;
}

int sub_21466(int iParam0)
{
    int Result;

    Result = 0;
    for ( Result = 0; Result < 5; Result++ )
    {
        if (g_U9074[Result]._fU4 == iParam0)
        {
            return Result;
        }
    }
    return -1;
}

void sub_21550(int iParam0)
{
    if ((iParam0 < 0) || (iParam0 >= 5))
    {
        SCRIPT_ASSERT( "Clear_One_Drunk_Request: array index out of bounds" );
        return;
    }
    if (NOT (g_U9074[iParam0]._fU4 == nil))
    {
        if (g_U9074[iParam0]._fU4 == sub_2560())
        {
            g_U9199 = 0;
        }
    }
    g_U9074[iParam0]._fU0 = 16;
    g_U9074[iParam0]._fU4 = nil;
    g_U9074[iParam0]._fU8 = 0;
    g_U9074[iParam0]._fU12 = 0;
    g_U9074[iParam0]._fU16 = nil;
    g_U9074[iParam0]._fU20 = nil;
    return;
}

int sub_22555()
{
    if ((((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

int sub_23694(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    if (l_U381 == 0)
    {
        if (IS_GROUP_MEMBER( uParam0, sub_12545() ))
        {
            REMOVE_CHAR_FROM_GROUP( uParam0 );
        }
        if (IS_GROUP_MEMBER( uParam4, sub_12545() ))
        {
            REMOVE_CHAR_FROM_GROUP( uParam4 );
        }
        if (IS_CHAR_IN_ANY_CAR( uParam4 ))
        {
            TASK_LEAVE_ANY_CAR( uParam4 );
        }
        if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
        {
            l_U381 = 1;
            return 0;
        }
        SET_PLAYER_CONTROL( sub_3803(), 0 );
        TASK_LEAVE_ANY_CAR( uParam0 );
        l_U381 = 1;
    }
    if (l_U381 == 1)
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( uParam0 )))
        {
            TASK_FOLLOW_NAV_MESH_TO_COORD( uParam0, uParam1._fU0, uParam1._fU4, uParam1._fU8, 2, -2, 0.10000000 );
            SETTIMERA( 0 );
        }
        if (NOT (IS_CHAR_IN_ANY_CAR( uParam4 )))
        {
            TASK_FOLLOW_NAV_MESH_TO_COORD( uParam4, uParam5._fU0, uParam5._fU4, uParam5._fU8, 2, -2, 0.10000000 );
        }
        if ((NOT (IS_CHAR_IN_ANY_CAR( uParam0 ))) AND (NOT (IS_CHAR_IN_ANY_CAR( uParam4 ))))
        {
            l_U381 = 2;
        }
    }
    if (l_U381 == 2)
    {
        if (TIMERA() > 3000)
        {
            SET_PLAYER_CONTROL( sub_3803(), 1 );
            l_U381 = 0;
            return 1;
        }
    }
    return 0;
}

void sub_24125()
{
    int iVar2;

    DESTROY_ALL_CAMS();
    SET_USE_HIGHDOF( 0 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    iVar2 = 0;
    END_CAM_COMMANDS( ref iVar2 );
    l_U408 = 0;
    return;
}

void sub_24362(int iParam0, unknown uParam1)
{
    PRINTSTRING( "\n KILL SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8866)
        {
            ABORT_SCRIPTED_CONVERSATION( uParam1 );
        }
    }
    return;
}

void sub_24780()
{
    unknown uVar2;

    uVar2 = sub_10378( l_U472 );
    if (l_U472 < 8)
    {
        uVar2 = sub_10378( l_U472 );
        sub_24829( uVar2, 0, 17 );
        sub_24907( uVar2, l_U477, 50.00000000 );
    }
    return;
}

void sub_24829(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    g_U12382[uParam0]._fU872._fU4 = 1;
    iVar5 = 0;
    sub_1826( ref g_U12382[uParam0]._fU872._fU8, uParam1, uParam2, iVar5 );
    return;
}

void sub_24907(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    g_U12382[uParam0]._fU872._fU24 = 1;
    g_U12382[uParam0]._fU872._fU28 = {uParam1};
    g_U12382[uParam0]._fU872._fU40 = uParam4;
    return;
}

void sub_25028()
{
    int iVar2;
    int iVar3;
    int iVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (l_U396 == 0)
    {
        iVar2 = 0;
        iVar3 = 15;
        iVar4 = 0;
        sub_1826( ref l_U481, iVar2, iVar3, iVar4 );
        uVar5 = sub_10378( l_U472 );
        sub_25087( uVar5 );
        l_U396++;
    }
    if (l_U396 == 1)
    {
        if (sub_3277( l_U481 ))
        {
            uVar6 = g_U20825[l_U472]._fU104;
            uVar7 = sub_25315( l_U472 );
            sub_25438( uVar6 );
            sub_25547( uVar6, l_U472, uVar7, 0 );
            l_U399 = 1;
            l_U400 = 10;
            return;
        }
    }
    return;
}

void sub_25087(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 3:
        case 7:
        iVar3 = -5;
        break;
        default:
        sub_5476( "Flow_Hospital_No_Pickup_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_10710( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_10710( uParam0, 0, iVar4 );
    return;
}

void sub_25315(unknown uParam0)
{
    unknown Result;
    int iVar4;

    Result = g_U20825[uParam0]._fU712._fU144;
    iVar4 = Result;
    iVar4++;
    if (iVar4 >= g_U20825[uParam0]._fU712._fU140)
    {
        iVar4 = g_U20825[uParam0]._fU712._fU136;
    }
    g_U20825[uParam0]._fU712._fU144 = iVar4;
    return Result;
}

void sub_25438(unknown uParam0)
{
    g_U42731._fU12[uParam0]._fU0 = 0;
    g_U42731._fU12[uParam0]._fU4 = 0;
    g_U42731._fU12[uParam0]._fU12 = 37;
    g_U42731._fU12[uParam0]._fU16 = 0;
    g_U42731._fU12[uParam0]._fU20 = 0;
    return;
}

void sub_25547(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    int iVar6;

    iVar6 = 5;
    sub_25572( uParam0, uParam1, uParam2, uParam3, iVar6, 64537 );
    return;
}

void sub_25572(int iParam0, unknown uParam1, unknown uParam2, int iParam3, unknown uParam4, unknown uParam5)
{
    int iVar8;
    int iVar9;

    iVar8 = 10;
    if (iParam0 >= iVar8)
    {
        SCRIPT_ASSERT( "Text_Player: Unknown Txt ID. Tell Keith. Needs added to g_eAmbientTxtmsgs." );
        sub_25684( uParam1, uParam2 );
        return;
    }
    if (g_U42731._fU12[iParam0]._fU0)
    {
        SCRIPT_ASSERT( "Text_Player: Txt has already been setup." );
    }
    iVar9 = 0;
    GET_GAME_TIMER( ref iVar9 );
    g_U42731._fU12[iParam0]._fU0 = 1;
    g_U42731._fU12[iParam0]._fU4 = 0;
    g_U42731._fU12[iParam0]._fU8 = 0;
    g_U42731._fU12[iParam0]._fU12 = uParam1;
    g_U42731._fU12[iParam0]._fU16 = uParam2;
    g_U42731._fU12[iParam0]._fU20 = iVar9 + iParam3;
    g_U42731._fU12[iParam0]._fU28 = uParam4;
    g_U42731._fU12[iParam0]._fU32 = uParam5;
    sub_27966( iParam0, iParam3 );
    return;
}

void sub_25684(unknown uParam0, unknown uParam1)
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
    uVar11 = sub_25707( uParam0 );
    sub_26086( uVar11, uParam1, 16383, 16383, ref uVar4 );
    sub_26430( ref uVar4, 1 );
    sub_26458( ref uVar4, 0 );
    sub_26486( ref uVar4, 2 );
    sub_26517( ref uVar4, 0 );
    return;
}

int sub_25707(unknown uParam0)
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
        case 16: return 16;
        case 17: return 17;
        case 18: return 18;
        case 19: return 19;
        case 20: return 20;
        case 21: return 21;
        case 22: return 22;
        case 23: return 23;
        case 24: return 24;
        case 25: return 25;
        case 26: return 26;
        case 27: return 27;
    }
    sub_5476( "Flow_public: Return_Text_Message_From_Contact(): Contact Text Message ID not set up yet" );
    return 99;
}

void sub_26086(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_26108( uParam0, 0, iParam4 + 0 );
    sub_26108( uParam1, 1, iParam4 + 0 );
    sub_26108( uParam2, 2, iParam4 + 0 );
    sub_26108( uParam3, 3, iParam4 + 0 );
    sub_26108( 0, 4, iParam4 + 0 );
    sub_26108( 1, 5, iParam4 + 0 );
    sub_26108( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_26108(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_26430(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_26458(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

void sub_26486(int iParam0, unknown uParam1)
{
    sub_26108( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_26517(int iParam0, boolean bParam1)
{
    int I;
    int iVar5;
    char[16] cVar6;
    int iVar10;

    iVar5 = 0;
    StrCopy( ref cVar6, "T1_NAME_", 16 );
    if (g_U95._fU540)
    {
        return 0;
    }
    if ((g_U575[g_U575 - 1]._fU0[0]) != -1)
    {
        if (NOT sub_26587())
        {
            sub_13186( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar10 = sub_26714( iParam0->_fU0 );
    if (iVar10 != -1)
    {
        sub_13186( iVar10 );
    }
    if (bParam1)
    {
        if (NOT (g_U560 == 9))
        {
            PRINTSTRING( "KGM MP CELLPHONE: Attempt to force cellphone on screen with txtmsg but other cellphone script is already active\n" );
            return 0;
        }
        if (NOT (g_U95._fU0 == 1000))
        {
            PRINTSTRING( "KGM MP CELLPHONE: Attempt to force cellphone on screen with txtmsg but cellphone screen is not OFF\n" );
            return 0;
        }
        if (NOT (g_U95._fU404 == 1000))
        {
            PRINTSTRING( "KGM MP CELLPHONE: Attempt to force cellphone on screen with txtmsg but cellphone quickscreen is not OFF\n" );
            return 0;
        }
    }
    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if (g_U575[I]._fU0[0] == -1)
        {
            g_U575[I] = {iParam0->_fU0};
            iParam0->_fU24 = I;
            I = g_U575;
            iVar5++;
            if (iVar5 > 1)
            {
                SET_PHONE_HUD_ITEM( 1, "UNREAD_MESSAGES", iVar5 );
            }
            else
            {
                ConcatString(ref cVar6, sub_12935( 0, iParam0->_fU0 ), 16);
                SET_PHONE_HUD_ITEM( 1, ref cVar6, iVar5 );
            }
            g_U95._fU520 = 1;
            PLAY_AUDIO_EVENT( "MOBILE_PHONE_SMS_RECIEVE" );
            if (g_U560 == 9)
            {
                g_U95._fU404 = 1017;
            }
            else if (g_U95._fU0 == 1016)
            {
                g_U95._fU92 = 1;
            }
            INCREMENT_INT_STAT_NO_MESSAGE( 300, 1 );
            g_U15811[2] = 1;
        }
        else if ((sub_12935( 4, g_U575[I] )) == 0)
        {
            iVar5++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    g_U95._fU408 = 0;
    if (bParam1)
    {
        g_U95._fU408 = 1;
    }
    return 1;
}

int sub_26587()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if (((sub_12935( 1, g_U575[I] )) != 0) AND (g_U575[I]._fU20))
        {
            sub_13186( I );
            return 1;
        }
    }
    return 0;
}

int sub_26714(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U575 - 1); Result++ )
    {
        if (g_U575[Result]._fU0[0] != -1)
        {
            if (sub_26779( uParam0, g_U575[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = g_U575;
        }
    }
    return -1;
}

int sub_26779(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[0] == uParam6._fU0[0]) AND (uParam0._fU0[2] == uParam6._fU0[2]))
    {
        iVar14 = sub_12935( 0, uParam0 );
        if (iVar14 == (sub_12935( 0, uParam6 )))
        {
            iVar15 = sub_12935( 3, uParam0 );
            if (iVar15 == (sub_12935( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_27966(unknown uParam0, int iParam1)
{
    g_U42731._fU12[uParam0]._fU24 = 0;
    if (iParam1 == 0)
    {
        return;
    }
    if (sub_28005( iParam1 ))
    {
        g_U42731._fU12[uParam0]._fU24 = iParam1;
        return;
    }
    return;
}

int sub_28005(int iParam0)
{
    int iVar3;

    iVar3 = sub_28014();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    iVar3 = sub_28069();
    if (iParam0 < iVar3)
    {
        return 1;
    }
    return 0;
}

int sub_28014()
{
    if (g_U15811[0])
    {
        return 27000;
    }
    return 15000;
}

int sub_28069()
{
    if (g_U15811[0])
    {
        return 27000;
    }
    return 15000;
}

int sub_28258(unknown uParam0, int iParam1)
{
    boolean bVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    boolean bVar11;
    float fVar12;
    unknown uVar13;

    if (IS_CHAR_DEAD( sub_2560() ))
    {
        l_U373 = 3;
        return 0;
    }
    bVar4 = false;
    if (NOT (iParam1 == nil))
    {
        bVar4 = true;
    }
    l_U293 = 0;
    g_U28807._fU128 = 0;
    if (NOT l_U278)
    {
        l_U373 = 3;
        return 0;
    }
    if (IS_CHAR_INJURED( uParam0 ))
    {
        l_U373 = 3;
        return 0;
    }
    if (bVar4)
    {
        if (IS_CHAR_INJURED( iParam1 ))
        {
            l_U373 = 3;
            return 0;
        }
    }
    if (IS_MINIGAME_IN_PROGRESS())
    {
        l_U373 = 3;
        return 0;
    }
    if (NOT l_U292)
    {
        l_U373 = 3;
        return 0;
    }
    GET_CHAR_COORDINATES( sub_2560(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
    GET_CHAR_COORDINATES( uParam0, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
    bVar11 = false;
    if (NOT (IS_GROUP_MEMBER( uParam0, sub_12545() )))
    {
        bVar11 = true;
    }
    fVar12 = 0.00000000;
    if (bVar11)
    {
        fVar12 = sub_19760( uVar5, uVar8 );
        if (fVar12 > 200.00000000)
        {
            TASK_CLEAR_LOOK_AT( uParam0 );
            l_U364 = 0;
            l_U366 = 1;
            if (l_U365)
            {
                TASK_CLEAR_LOOK_AT( iParam1 );
                l_U365 = 0;
                l_U367 = 1;
            }
            return 1;
        }
        if (NOT l_U364)
        {
            TASK_LOOK_AT_CHAR( uParam0, sub_2560(), -2, 0 );
            l_U364 = 1;
        }
        if (fVar12 < 12.00000000)
        {
            SET_GROUP_MEMBER( sub_12545(), uParam0 );
            TASK_CLEAR_LOOK_AT( uParam0 );
            l_U364 = 0;
        }
    }
    if (bVar4)
    {
        GET_CHAR_COORDINATES( iParam1, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
        bVar11 = false;
        if (NOT (IS_GROUP_MEMBER( iParam1, sub_12545() )))
        {
            bVar11 = true;
        }
        if (bVar11)
        {
            fVar12 = sub_19760( uVar5, uVar8 );
            if (fVar12 > 200.00000000)
            {
                TASK_CLEAR_LOOK_AT( iParam1 );
                l_U365 = 0;
                l_U367 = 1;
                if (l_U364)
                {
                    TASK_CLEAR_LOOK_AT( uParam0 );
                    l_U364 = 0;
                    l_U366 = 1;
                }
                return 1;
            }
            if (NOT l_U365)
            {
                TASK_LOOK_AT_CHAR( iParam1, sub_2560(), -2, 0 );
                l_U365 = 1;
            }
            if (fVar12 < 12.00000000)
            {
                SET_GROUP_MEMBER( sub_12545(), iParam1 );
                TASK_CLEAR_LOOK_AT( iParam1 );
                l_U365 = 0;
            }
        }
    }
    uVar13 = nil;
    if (NOT l_U372)
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2560() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2560(), ref uVar13 );
            if (IS_CHAR_SITTING_IN_CAR( uParam0, uVar13 ))
            {
                if (IS_CHAR_SITTING_IN_CAR( iParam1, uVar13 ))
                {
                    l_U372 = 1;
                }
            }
        }
    }
    if ((l_U364) || (l_U365))
    {
        l_U293 = 1;
        g_U28807._fU128 = 1;
    }
    if (NOT l_U293)
    {
        l_U373 = 3;
        return 0;
    }
    if ((l_U372) AND (l_U373 == 3))
    {
        if (l_U364)
        {
            if (sub_17065( iParam1 ))
            {
                sub_29103( 7, ref l_U308 );
                l_U372 = 0;
                return 0;
            }
        }
        else if (l_U365)
        {
            if (sub_17065( uParam0 ))
            {
                sub_29103( 3, ref l_U308 );
                l_U372 = 0;
                return 0;
            }
        }
    }
    if (sub_15501( l_U308 ))
    {
        return 0;
    }
    if (l_U364)
    {
        if (l_U365)
        {
            if (NOT (l_U373 == 0))
            {
                PRINT_NOW( "FA_LEFT_BOTH", 7500, 1 );
                l_U373 = 0;
            }
        }
        else if (NOT (l_U373 == 1))
        {
            PRINT_NOW( "FA_LEFT_FIRST", 7500, 1 );
            l_U373 = 1;
        }
    }
    else if (l_U365)
    {
        if (NOT (l_U373 == 2))
        {
            PRINT_NOW( "FA_LEFT_SECOND", 7500, 1 );
            l_U373 = 2;
        }
    }
    else
    {
        l_U373 = 3;
    }
    return 0;
}

void sub_29103(unknown uParam0, unknown uParam1)
{
    switch (uParam0)
    {
        case 3:
        sub_10289( "E2FA_LVB", "E2FAAU", uParam1, 8, 1 );
        return;
        case 7:
        sub_10289( "E2FH_LVB", "E2FHAU", uParam1, 8, 1 );
        return;
    }
    sub_10268( "PHOLDER_E2", uParam1, 7, 1 );
    return;
}

void sub_29530()
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
    uVar3 = sub_10378( l_U472 );
    array(ref uVar4._fU0._fU0, 3);
    ref uVar4._fU0;
    ref uVar4;
    iVar12 = -1;
    iVar13 = -1;
    switch (l_U400)
    {
        case 0:
        g_U20825[l_U472]._fU712._fU184 = l_U473;
        g_U20825[l_U472]._fU712._fU8 = 1;
        bVar2 = sub_29687( l_U473 );
        if (bVar2)
        {
            sub_29770( uVar3 );
        }
        sub_12823( ref l_U481 );
        break;
        case 9:
        iVar12 = g_U20825[l_U472]._fU104;
        iVar13 = sub_30572( l_U472 );
        sub_25438( iVar12 );
        sub_25572( iVar12, l_U472, iVar13, 5000, 4, 64537 );
        sub_24780();
        break;
        case 10: break;
        case 7:
        sub_30751( l_U473, l_U472, 1 );
        break;
        case 11: break;
        case 12: break;
        default: sub_620( "Unrecognised Fail ID" );
    }
    sub_31047( bVar2 );
    sub_31424();
    return;
}

void sub_29687(unknown uParam0)
{
    int Result;

    Result = 0;
    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        if (NOT (IS_CHAR_DEAD( sub_2560() )))
        {
            Result = HAS_CHAR_BEEN_DAMAGED_BY_CHAR( uParam0, sub_2560(), 0 );
        }
    }
    return Result;
}

void sub_29770(unknown uParam0)
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
        sub_29867( uParam0, 0, -10, -10, 0, 0 );
        break;
        default: sub_30385( "Flow_Killed_By_Player_Stats_Update: Need to add stat details for strand" );
    }
    return;
}

void sub_29867(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_29878( uParam1 );
    sub_30052( uParam0, 0, uParam2 );
    sub_30052( uParam0, 1, uParam3 );
    sub_30052( uParam0, 2, uParam4 );
    ProtectedSet(g_U22949[4], ProtectedGet(g_U22949[4]) + iParam5);
    sub_30245();
    return;
}

void sub_29878(unknown uParam0)
{
    ADD_SCORE( sub_3803(), uParam0 );
    sub_29903( uParam0 );
    return;
}

void sub_29903(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_5476( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_30052(unknown uParam0, unknown uParam1, int iParam2)
{
    g_U12382[uParam0]._fU44[uParam1] += iParam2;
    if (g_U12382[uParam0]._fU44[uParam1] < 0)
    {
        g_U12382[uParam0]._fU44[uParam1] = 0;
    }
    if (g_U12382[uParam0]._fU44[uParam1] > 100)
    {
        g_U12382[uParam0]._fU44[uParam1] = 100;
    }
    return;
}

void sub_30245()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U196[I] = 4;
    }
    return;
}

void sub_30385(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

void sub_30572(unknown uParam0)
{
    unknown Result;
    int iVar4;

    Result = g_U20825[uParam0]._fU712._fU156;
    iVar4 = Result;
    iVar4++;
    if (iVar4 >= g_U20825[uParam0]._fU712._fU152)
    {
        iVar4 = g_U20825[uParam0]._fU712._fU148;
    }
    g_U20825[uParam0]._fU712._fU156 = iVar4;
    return Result;
}

void sub_30751(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (bParam2)
    {
        uVar5 = g_U20825[uParam1]._fU104;
        uVar6 = g_U20825[uParam1]._fU136;
        sub_25438( uVar5 );
        sub_25547( uVar5, uParam1, uVar6, 0 );
    }
    uVar7 = sub_10378( uParam1 );
    sub_30831( uVar7 );
    return;
}

void sub_30831(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = 0;
    switch (uParam0)
    {
        case 3:
        case 7:
        iVar3 = -5;
        break;
        default:
        sub_5476( "Flow_Friend_Left_Behind_Stats_Update: Need to add stat details for strand" );
        return;
    }
    sub_10710( uParam0, 1, iVar3 );
    iVar4 = iVar3 / 2;
    sub_10710( uParam0, 0, iVar4 );
    return;
}

void sub_31047(boolean bParam0)
{
    switch (l_U400)
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
        PRINT_NOW( "BUDDYLEFT", 7000, 1 );
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

void sub_31424()
{
    sub_8516( ref l_U441 );
    sub_8142();
    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U480 );
    sub_7402( l_U472 );
    REMOVE_DECISION_MAKER( l_U294 );
    l_U278 = 0;
    if ((NOT (l_U473 == nil)) AND (NOT (IS_CHAR_DEAD( l_U473 ))))
    {
        if (IS_GROUP_MEMBER( l_U473, sub_12545() ))
        {
            REMOVE_CHAR_FROM_GROUP( l_U473 );
        }
        if (IS_CHAR_INJURED( l_U473 ))
        {
            SET_PED_DIES_WHEN_INJURED( l_U473, 1 );
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U473 );
        }
        else
        {
            DELETE_CHAR( ref l_U473 );
        }
    }
    if (IS_HINT_RUNNING())
    {
        HINT_CAM( -1.00000000, -1.00000000, -1.00000000, 0, 0, 0, 0 );
    }
    sub_31646();
    CLEAR_HELP();
    if (g_U20825[l_U472]._fU712._fU176)
    {
        g_U22955 = 0;
    }
    if (l_U401)
    {
        g_U12379 = 0;
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_31646()
{
    int iVar2;

    if (l_U412)
    {
        DELETE_WIDGET_GROUP( l_U413 );
    }
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U409 );
    if (l_U408)
    {
        SET_CAM_ACTIVE( l_U404[1], 0 );
        SET_CAM_PROPAGATE( l_U404[1], 0 );
        sub_24125();
    }
    if (IS_PLAYER_PLAYING( sub_3803() ))
    {
        SET_PLAYER_CONTROL( sub_3803(), 1 );
    }
    CLEAR_HELP();
    sub_31772();
    iVar2 = 0;
    sub_19885( iVar2 );
    return;
}

void sub_31772()
{
    int I;

    I = 0;
    for ( I = 0; I < 2; I++ )
    {
        g_U28807._fU0[I] = 34;
        g_U28807._fU12[I] = nil;
    }
    g_U28807._fU24 = 16;
    g_U28807._fU28 = 16;
    g_U28807._fU32 = 16;
    g_U28807._fU36 = 8;
    g_U28807._fU40 = 8;
    g_U28807._fU44 = 34;
    g_U28807._fU48 = 0;
    g_U28807._fU52 = 0;
    g_U28807._fU56 = 0;
    g_U28807._fU124 = 0;
    g_U28807._fU128 = 0;
    for ( I = 0; I < 15; I++ )
    {
        g_U28807._fU60[I] = 0;
    }
    return;
}

void sub_32093(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    boolean bVar5;
    unknown uVar6;

    iVar3 = 0;
    GET_GAME_TIMER( ref iVar3 );
    if (l_U417._fU0)
    {
        l_U433 = 0;
        if (sub_15501( l_U308 ))
        {
            return;
        }
        if (IS_PLAYER_PLAYING( sub_3803() ))
        {
            if (IS_AMBIENT_SPEECH_PLAYING( sub_2560() ))
            {
                return;
            }
            STOP_PED_SPEAKING( sub_2560(), 1 );
        }
        l_U417._fU0 = 0;
        l_U417._fU4 = 1;
        l_U417._fU12 = 0;
        l_U417._fU20 = 0;
        l_U417._fU24 = 0;
        l_U417._fU28 = 0;
        return;
    }
    sub_32253( uParam0 );
    if (l_U417._fU4)
    {
        if (sub_33336())
        {
            l_U417._fU4 = 0;
            if (l_U417._fU8)
            {
                l_U417._fU20 = iVar3 + 10000;
            }
            else
            {
                l_U417._fU20 = iVar3 + 15000;
            }
            return;
        }
    }
    if (NOT (l_U417._fU20 == 0))
    {
        if (NOT sub_33336())
        {
            l_U417._fU4 = 1;
            l_U417._fU20 = 0;
            return;
        }
        if (iVar3 > l_U417._fU20)
        {
            REQUEST_ANIMS( "Gestures@Niko" );
            if (NOT (HAVE_ANIMS_LOADED( "Gestures@Niko" )))
            {
                return;
            }
            bVar4 = false;
            if (NOT l_U417._fU8)
            {
                sub_2454( "E2FCAUD" );
                sub_33807();
                if (NOT (sub_33864( l_U319, ref l_U374, l_U417._fU16 )))
                {
                    bVar4 = true;
                }
            }
            else
            {
                sub_2454( "E2FC2AU" );
                sub_33807();
                sub_36913( l_U319, ref l_U374 );
            }
            if (bVar4)
            {
                ;
            }
            l_U417._fU20 = 0;
            l_U417._fU12 = 1;
            g_U20825[l_U319]._fU900._fU44 = -1;
        }
        return;
    }
    if (sub_38930())
    {
        return;
    }
    if (l_U417._fU12)
    {
        if (g_U20825[l_U319]._fU900._fU40 >= 0)
        {
            bVar5 = false;
            if (NOT l_U417._fU24)
            {
                if ((sub_40056( ref l_U374 )) || ((sub_32561( l_U374 )) > 5))
                {
                    bVar5 = true;
                }
            }
            if (bVar5)
            {
                l_U417._fU12 = 0;
                uVar6 = g_U20825[l_U319]._fU900._fU40;
                sub_34348( l_U319, uVar6 );
                if (IS_PLAYER_PLAYING( sub_3803() ))
                {
                    STOP_PED_SPEAKING( sub_2560(), 0 );
                }
                l_U433 = 1;
            }
            return;
        }
    }
    if (l_U433)
    {
        if (sub_40056( ref l_U374 ))
        {
            if (HAVE_ANIMS_LOADED( "Gestures@Niko" ))
            {
                REMOVE_ANIMS( "Gestures@Niko" );
            }
            l_U433 = 0;
        }
    }
    return;
}

void sub_32253(unknown uParam0)
{
    sub_32262();
    sub_32671();
    sub_33049();
    return;
}

void sub_32262()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    float fVar11;
    float fVar12;
    float fVar13;

    if ((IS_CHAR_DEAD( sub_2560() )) || (sub_32283()))
    {
        return;
    }
    GET_CHAR_COORDINATES( sub_2560(), ref uVar2._fU0, ref uVar2._fU4, ref uVar2._fU8 );
    GET_CHAR_COORDINATES( l_U382, ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
    GET_CHAR_COORDINATES( l_U383, ref uVar8._fU0, ref uVar8._fU4, ref uVar8._fU8 );
    fVar11 = sub_19760( uVar2, uVar5 );
    fVar12 = sub_19760( uVar2, uVar8 );
    fVar13 = fVar11;
    if (fVar11 < fVar12)
    {
        fVar13 = fVar12;
    }
    if (l_U417._fU36)
    {
        if (fVar13 < 6.00000000)
        {
            l_U417._fU36 = 0;
        }
        return;
    }
    if (fVar13 < 12.00000000)
    {
        return;
    }
    l_U417._fU36 = 1;
    sub_32531();
    return;
}

int sub_32283()
{
    if ((IS_CHAR_INJURED( l_U382 )) || (IS_CHAR_INJURED( l_U383 )))
    {
        return 1;
    }
    return 0;
}

void sub_32531()
{
    unknown uVar2;

    if (l_U417._fU24)
    {
        return;
    }
    uVar2 = sub_32561( l_U374 );
    g_U20825[l_U319]._fU900._fU44 = uVar2;
    return;
}

void sub_32561(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    Result = -1;
    if (sub_15501( uParam0 ))
    {
        Result = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
        if (Result != -1)
        {
            Result += uParam0._fU8;
        }
    }
    return Result;
}

void sub_32671()
{
    boolean bVar2;
    int iVar3;
    int iVar4;
    int iVar5;

    if ((IS_CHAR_DEAD( sub_2560() )) || (sub_32283()))
    {
        return;
    }
    bVar2 = false;
    if (IS_CHAR_INJURED( sub_2560() ))
    {
        bVar2 = true;
    }
    if (NOT bVar2)
    {
        iVar3 = 0;
        iVar4 = 0;
        iVar5 = 0;
        GET_CHAR_HEALTH( sub_2560(), ref iVar3 );
        GET_CHAR_HEALTH( l_U382, ref iVar4 );
        GET_CHAR_HEALTH( l_U383, ref iVar5 );
        if (l_U417._fU52 == 64537)
        {
            l_U417._fU52 = iVar3;
        }
        if (l_U417._fU56 == 64537)
        {
            l_U417._fU56 = iVar4;
        }
        if (l_U417._fU60 == 64537)
        {
            l_U417._fU60 = iVar5;
        }
        if (iVar3 < l_U417._fU52)
        {
            bVar2 = true;
        }
        if (iVar4 < l_U417._fU56)
        {
            bVar2 = true;
        }
        if (iVar5 < l_U417._fU60)
        {
            bVar2 = true;
        }
        l_U417._fU52 = iVar3;
        l_U417._fU56 = iVar4;
        l_U417._fU60 = iVar5;
    }
    if (l_U417._fU40)
    {
        if (NOT bVar2)
        {
            l_U417._fU40 = 0;
        }
        return;
    }
    if (NOT bVar2)
    {
        return;
    }
    if (l_U417._fU8)
    {
        return;
    }
    l_U417._fU40 = 1;
    sub_32531();
    return;
}

void sub_33049()
{
    boolean bVar2;

    if ((IS_CHAR_DEAD( sub_2560() )) || (sub_32283()))
    {
        return;
    }
    bVar2 = false;
    if (IS_CHAR_SHOOTING( sub_2560() ))
    {
        bVar2 = true;
    }
    if (IS_CHAR_IN_MELEE_COMBAT( sub_2560() ))
    {
        bVar2 = true;
    }
    if (sub_33127())
    {
        bVar2 = true;
    }
    if (sub_33187())
    {
        bVar2 = true;
    }
    if (l_U417._fU44)
    {
        if (NOT bVar2)
        {
            l_U417._fU44 = 0;
        }
        return;
    }
    if (NOT bVar2)
    {
        return;
    }
    l_U417._fU44 = 1;
    sub_32531();
    return;
}

int sub_33127()
{
    if ((IS_CHAR_SHOOTING( l_U382 )) || (IS_CHAR_SHOOTING( l_U383 )))
    {
        return 1;
    }
    return 0;
}

int sub_33187()
{
    if ((IS_CHAR_IN_MELEE_COMBAT( l_U382 )) || (IS_CHAR_IN_MELEE_COMBAT( l_U383 )))
    {
        return 1;
    }
    return 0;
}

int sub_33336()
{
    unknown uVar2;

    if ((sub_33345()) || (l_U417._fU24))
    {
        return 0;
    }
    if ((l_U395 == 0) || (l_U395 == 1))
    {
        return 0;
    }
    if (NOT l_U417._fU8)
    {
        if (((NOT (IS_CHAR_DEAD( sub_2560() ))) AND (NOT (IS_CHAR_DEAD( l_U382 )))) AND (NOT (IS_CHAR_DEAD( l_U383 ))))
        {
            if (IS_CHAR_IN_ANY_CAR( sub_2560() ))
            {
                STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2560(), ref uVar2 );
                if ((IS_CHAR_IN_CAR( l_U382, uVar2 )) AND (IS_CHAR_IN_CAR( l_U383, uVar2 )))
                {
                    return 1;
                }
            }
        }
        return 0;
    }
    return 1;
}

int sub_33345()
{
    if (((((l_U417._fU32) || (l_U417._fU36)) || (l_U417._fU40)) || (l_U417._fU44)) || (l_U417._fU48))
    {
        return 1;
    }
    return 0;
}

void sub_33807()
{
    g_U43135 = l_U382;
    g_U43136 = l_U383;
    return;
}

int sub_33864(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    int iVar6;
    int I;
    int iVar8;
    boolean bVar9;
    int iVar10;

    switch (uParam0)
    {
        case 3:
        case 7: break;
        default:
        SCRIPT_ASSERT( "FA_Friend_Speech_Generic_Conversations: Unrecognised friend ID" );
        return 0;
    }
    sub_33979();
    g_U20825[uParam0]._fU900._fU40 = -1;
    iVar5 = 0;
    iVar6 = 0;
    I = 0;
    if ((NOT g_U20825[uParam0]._fU900._fU28) AND (uParam2))
    {
        iVar6 = g_U20825[uParam0]._fU900._fU24;
        I = 0;
        for ( I = 0; I < iVar6; I++ )
        {
            if ((sub_34025( uParam0, I )) AND (NOT (sub_34265( uParam0, I ))))
            {
                sub_34189( uParam0, I );
            }
        }
    }
    sub_34847( uParam0 );
    iVar5 = 0;
    iVar6 = g_U20825[uParam0]._fU900._fU24;
    I = 0;
    for ( I = 0; I < iVar6; I++ )
    {
        if (NOT (sub_34025( uParam0, I )))
        {
            iVar5++;
        }
    }
    if ((iVar5 == 0) AND (uParam2))
    {
        for ( I = 0; I < iVar6; I++ )
        {
            if (NOT (sub_34265( uParam0, I )))
            {
                sub_34189( uParam0, I );
                iVar5++;
            }
        }
    }
    if (iVar5 == 0)
    {
        return 0;
    }
    iVar8 = 0;
    if (g_U20825[uParam0]._fU900._fU28)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, iVar5, ref iVar8 );
    }
    bVar9 = false;
    for ( I = 0; I < iVar6; I++ )
    {
        if (NOT bVar9)
        {
            if (NOT (sub_34025( uParam0, I )))
            {
                if (iVar8 == 0)
                {
                    if (sub_35104( I ))
                    {
                        g_U20825[uParam0]._fU900._fU40 = I;
                        sub_34108( uParam0, I );
                        bVar9 = true;
                    }
                }
                else
                {
                    iVar8--;
                }
            }
        }
    }
    if (NOT bVar9)
    {
        return 0;
    }
    iVar10 = 0;
    switch (uParam0)
    {
        case 3:
        sub_35553( uParam1, iVar10 );
        return 1;
        case 7:
        sub_36342( uParam1, iVar10 );
        return 1;
    }
    SCRIPT_ASSERT( "FA_Friend_Speech_Generic_Conversations: must have forgotten to update friend ID when added speech" );
    return 0;
}

void sub_33979()
{
    int iVar2;
    int I;
    int iVar4;
    int iVar5;

    iVar2 = g_U20825[3]._fU900._fU24;
    I = 0;
    for ( I = 0; I < iVar2; I++ )
    {
        if ((sub_34025( 3, I )) || (sub_34025( 7, I )))
        {
            sub_34108( 3, I );
            sub_34108( 7, I );
        }
        else
        {
            sub_34189( 3, I );
            sub_34189( 7, I );
        }
        if ((sub_34265( 3, I )) || (sub_34265( 7, I )))
        {
            sub_34348( 3, I );
            sub_34348( 7, I );
        }
        else
        {
            sub_34429( 3, I );
            sub_34429( 7, I );
        }
    }
    iVar4 = g_U20825[3]._fU900._fU24;
    iVar5 = (g_U20825[3]._fU900._fU32 + iVar4) - 1;
    I = 0;
    for ( I = iVar4; I <= iVar5; I++ )
    {
        if ((sub_34025( 3, I )) || (sub_34025( 7, I )))
        {
            sub_34108( 3, I );
            sub_34108( 7, I );
        }
        else
        {
            sub_34189( 3, I );
            sub_34189( 7, I );
        }
        if ((sub_34265( 3, I )) || (sub_34265( 7, I )))
        {
            sub_34348( 3, I );
            sub_34348( 7, I );
        }
        else
        {
            sub_34429( 3, I );
            sub_34429( 7, I );
        }
    }
    return;
}

void sub_34025(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = iParam1 / 32;
    iVar5 = iParam1 - (32 * iVar4);
    return IS_BIT_SET( g_U20825[uParam0]._fU900._fU0[iVar4], iVar5 );
}

void sub_34108(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = iParam1 / 32;
    iVar5 = iParam1 - (32 * iVar4);
    SET_BIT( ref g_U20825[uParam0]._fU900._fU0[iVar4], iVar5 );
    return;
}

void sub_34189(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = iParam1 / 32;
    iVar5 = iParam1 - (32 * iVar4);
    CLEAR_BIT( ref g_U20825[uParam0]._fU900._fU0[iVar4], iVar5 );
    return;
}

void sub_34265(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = iParam1 / 32;
    iVar5 = iParam1 - (32 * iVar4);
    return IS_BIT_SET( g_U20825[uParam0]._fU900._fU12[iVar4], iVar5 );
}

void sub_34348(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = iParam1 / 32;
    iVar5 = iParam1 - (32 * iVar4);
    SET_BIT( ref g_U20825[uParam0]._fU900._fU12[iVar4], iVar5 );
    return;
}

void sub_34429(unknown uParam0, int iParam1)
{
    int iVar4;
    int iVar5;

    iVar4 = iParam1 / 32;
    iVar5 = iParam1 - (32 * iVar4);
    CLEAR_BIT( ref g_U20825[uParam0]._fU900._fU12[iVar4], iVar5 );
    return;
}

void sub_34847(unknown uParam0)
{
    return;
}

int sub_35104(unknown uParam0)
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
        sub_35228( "E2FCAUD" );
        sub_2609( 0, sub_2560(), "LUIS", 0 );
        sub_2609( 1, g_U43135, "ARMANDO", 0 );
        sub_2609( 2, g_U43136, "HENRIQUE", 0 );
        break;
        case 10:
        case 11:
        sub_35228( "E2FC2AU" );
        sub_2609( 0, sub_2560(), "LUIS", 0 );
        sub_2609( 1, g_U43135, "ARMANDO", 0 );
        sub_2609( 2, g_U43136, "HENRIQUE", 0 );
        break;
    }
    return 1;
}

int sub_35228(unknown uParam0)
{
    if (NOT IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        StrCopy( ref l_U19._fU0, uParam0, 16 );
        return 1;
    }
    return 0;
}

void sub_35553(unknown uParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    iVar4 = 3;
    if (NOT (12 == g_U20825[iVar4]._fU900._fU24))
    {
        sub_5476( "FA_Armando_Speech_Generic_Conversations: inconsistent number of conversations - see Armando Flow" );
        return;
    }
    sub_35697();
    iVar5 = 0;
    iVar6 = g_U20825[iVar4]._fU900._fU40;
    iVar7 = g_U20825[iVar4]._fU900._fU44;
    if (iVar6 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar7 == -1))
        {
            if (NOT (sub_35104( iVar6 )))
            {
                SCRIPT_ASSERT( "FA_Armando_Speech_Generic_Conversations: Failed to set up the required voices to resume paused speech" );
            }
            iVar8 = 0;
            sub_36198( ref l_U202[iVar6], iVar7, iVar8, uParam0, 5, iVar5 );
        }
        return;
    }
    sub_10268( ref l_U202[iVar6], uParam0, 5, iVar5 );
    return;
}

void sub_35697()
{
    StrCopy( ref l_U202[0], "E2FC_CONV1", 16 );
    StrCopy( ref l_U202[1], "E2FC_CONV2", 16 );
    StrCopy( ref l_U202[2], "E2FC_CONV3", 16 );
    StrCopy( ref l_U202[3], "E2FC_CONV4", 16 );
    StrCopy( ref l_U202[4], "E2FC_CONV5", 16 );
    StrCopy( ref l_U202[5], "E2FC_CONV6", 16 );
    StrCopy( ref l_U202[6], "E2FC_CONV7", 16 );
    StrCopy( ref l_U202[7], "E2FC_CONV8", 16 );
    StrCopy( ref l_U202[8], "E2FC_CONV9", 16 );
    StrCopy( ref l_U202[9], "E2FC_CON10", 16 );
    StrCopy( ref l_U202[10], "E2FC_CON11", 16 );
    StrCopy( ref l_U202[11], "E2FC_CON12", 16 );
    return;
}

void sub_36198(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return sub_36223( uParam0, ref l_U19._fU0, uParam1, uParam2, uParam3, uParam4, uParam5 );
}

void sub_36223(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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
    return sub_9321( ref cVar13, uParam4, uParam5, 0, 1, uParam3, uParam2, ref cVar9, uParam6 );
}

void sub_36342(unknown uParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    iVar4 = 7;
    if (NOT (12 == g_U20825[iVar4]._fU900._fU24))
    {
        sub_5476( "FA_Henrique_Speech_Generic_Conversations: inconsistent number of conversations - see Henrique Flow" );
        return;
    }
    sub_35697();
    iVar5 = 0;
    iVar6 = g_U20825[iVar4]._fU900._fU40;
    iVar7 = g_U20825[iVar4]._fU900._fU44;
    if (iVar6 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar7 == -1))
        {
            if (NOT (sub_35104( iVar6 )))
            {
                SCRIPT_ASSERT( "FA_Henrique_Speech_Generic_Conversations: Failed to set up the required voices to resume paused speech" );
            }
            iVar8 = 0;
            sub_36198( ref l_U202[iVar6], iVar7, iVar8, uParam0, 5, iVar5 );
        }
        return;
    }
    sub_10268( ref l_U202[iVar6], uParam0, 5, iVar5 );
    return;
}

void sub_36913(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int I;
    int iVar8;
    boolean bVar9;
    int iVar10;
    int iVar11;

    switch (uParam0)
    {
        case 3:
        case 7: break;
        default:
        SCRIPT_ASSERT( "FA_Friend_Speech_Drunk_Conversations: Unrecognised friend ID" );
        return;
    }
    g_U20825[uParam0]._fU900._fU40 = -1;
    iVar4 = 0;
    iVar5 = 0;
    iVar6 = 0;
    I = 0;
    if (NOT g_U20825[uParam0]._fU900._fU36)
    {
        iVar5 = g_U20825[uParam0]._fU900._fU24;
        iVar6 = (g_U20825[uParam0]._fU900._fU32 + iVar5) - 1;
        I = 0;
        for ( I = iVar5; I <= iVar6; I++ )
        {
            if ((sub_34025( uParam0, I )) AND (NOT (sub_34265( uParam0, I ))))
            {
                sub_34189( uParam0, I );
            }
        }
    }
    iVar4 = 0;
    iVar5 = g_U20825[uParam0]._fU900._fU24;
    iVar6 = (g_U20825[uParam0]._fU900._fU32 + iVar5) - 1;
    I = 0;
    for ( I = iVar5; I <= iVar6; I++ )
    {
        if (NOT (sub_34025( uParam0, I )))
        {
            iVar4++;
        }
    }
    if (iVar4 == 0)
    {
        for ( I = iVar5; I <= iVar6; I++ )
        {
            if (NOT (sub_34265( uParam0, I )))
            {
                sub_34189( uParam0, I );
                iVar4++;
            }
        }
    }
    if (iVar4 == 0)
    {
        return;
    }
    iVar8 = 0;
    if (g_U20825[uParam0]._fU900._fU36)
    {
        GENERATE_RANDOM_INT_IN_RANGE( 0, iVar4, ref iVar8 );
    }
    bVar9 = false;
    iVar10 = 0;
    for ( I = iVar5; I <= iVar6; I++ )
    {
        if (NOT bVar9)
        {
            if (NOT (sub_34025( uParam0, I )))
            {
                if (iVar8 == 0)
                {
                    iVar10 = I - iVar5;
                    if (sub_37469( iVar10 ))
                    {
                        g_U20825[uParam0]._fU900._fU40 = I;
                        sub_34108( uParam0, I );
                        bVar9 = true;
                    }
                }
                else
                {
                    iVar8--;
                }
            }
        }
    }
    if (NOT bVar9)
    {
        return;
    }
    iVar11 = 0;
    switch (uParam0)
    {
        case 3:
        sub_37742( uParam1, iVar11 );
        return;
        case 7:
        sub_38331( uParam1, iVar11 );
        return;
    }
    SCRIPT_ASSERT( "FA_Friend_Speech_Drunk_Conversations: must have forgotten to update friend ID when added speech" );
    return;
}

int sub_37469(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        sub_35228( "E2FC2AU" );
        sub_2609( 0, sub_2560(), "LUIS", 0 );
        sub_2609( 1, g_U43135, "ARMANDO", 0 );
        sub_2609( 2, g_U43136, "HENRIQUE", 0 );
        break;
    }
    return 1;
}

void sub_37742(unknown uParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    iVar4 = 3;
    if (NOT (6 == g_U20825[iVar4]._fU900._fU32))
    {
        sub_5476( "FA_Armando_Speech_Drunk_Conversations: inconsistent number of drunk conversations - see Armando Flow" );
        return;
    }
    sub_37892();
    iVar5 = 0;
    iVar6 = g_U20825[iVar4]._fU900._fU40;
    iVar6 -= g_U20825[iVar4]._fU900._fU24;
    iVar7 = g_U20825[iVar4]._fU900._fU44;
    if (iVar6 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar7 == -1))
        {
            if (NOT (sub_37469( iVar6 )))
            {
                SCRIPT_ASSERT( "FA_Armando_Speech_Drunk_Conversations: Failed to set up the required voices to resume paused speech" );
            }
            iVar8 = 0;
            sub_36198( ref l_U202[iVar6], iVar7, iVar8, uParam0, 5, iVar5 );
        }
        return;
    }
    sub_10268( ref l_U202[iVar6], uParam0, 5, iVar5 );
    return;
}

void sub_37892()
{
    StrCopy( ref l_U202[0], "E2FC2_DRUN1", 16 );
    StrCopy( ref l_U202[1], "E2FC2_DRUN2", 16 );
    StrCopy( ref l_U202[2], "E2FC2_DRUN3", 16 );
    StrCopy( ref l_U202[3], "E2FC2_DRUN4", 16 );
    StrCopy( ref l_U202[4], "E2FC2_DRUN5", 16 );
    StrCopy( ref l_U202[5], "E2FC2_DRUN6", 16 );
    return;
}

void sub_38331(unknown uParam0, boolean bParam1)
{
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;

    iVar4 = 7;
    if (NOT (6 == g_U20825[iVar4]._fU900._fU32))
    {
        sub_5476( "FA_Henrique_Speech_Drunk_Conversations: inconsistent number of drunk conversations - see Henrique Flow" );
        return;
    }
    sub_37892();
    iVar5 = 0;
    iVar6 = g_U20825[iVar4]._fU900._fU40;
    iVar6 -= g_U20825[iVar4]._fU900._fU24;
    iVar7 = g_U20825[iVar4]._fU900._fU44;
    if (iVar6 == -1)
    {
        return;
    }
    if (bParam1)
    {
        if (NOT (iVar7 == -1))
        {
            if (NOT (sub_37469( iVar6 )))
            {
                SCRIPT_ASSERT( "FA_Henrique_Speech_Drunk_Conversations: Failed to set up the required voices to resume paused speech" );
            }
            iVar8 = 0;
            sub_36198( ref l_U202[iVar6], iVar7, iVar8, uParam0, 5, iVar5 );
        }
        return;
    }
    sub_10268( ref l_U202[iVar6], uParam0, 5, iVar5 );
    return;
}

int sub_38930()
{
    int iVar2;
    int iVar3;

    if ((sub_32283()) || (IS_CHAR_DEAD( sub_2560() )))
    {
        return l_U417._fU24;
    }
    if (l_U417._fU24)
    {
        if (NOT sub_33345())
        {
            if (g_U20825[l_U319]._fU900._fU44 == -1)
            {
                l_U417._fU24 = 0;
                return 0;
            }
            iVar2 = 0;
            GET_GAME_TIMER( ref iVar2 );
            if (l_U417._fU28 == 0)
            {
                l_U417._fU28 = iVar2 + 3000;
            }
            if (sub_39074())
            {
                l_U417._fU28 = 0;
            }
            if ((NOT (l_U417._fU28 == 0)) AND (iVar2 > l_U417._fU28))
            {
                l_U417._fU28 = 0;
                if (l_U417._fU8)
                {
                    sub_39162( l_U319 );
                    sub_2609( 0, sub_2560(), l_U469, 0 );
                    sub_39448( l_U319, ref l_U374 );
                }
                else
                {
                    sub_39531( l_U319 );
                    sub_2609( 0, sub_2560(), l_U469, 0 );
                    sub_39817( l_U319, ref l_U374 );
                }
                l_U417._fU24 = 0;
                return 0;
            }
            return 1;
        }
        l_U417._fU28 = 0;
        return 1;
    }
    if (sub_33345())
    {
        if (sub_15501( l_U374 ))
        {
            iVar3 = 0;
            sub_24362( ref l_U374, iVar3 );
        }
        l_U417._fU24 = 1;
        l_U417._fU28 = 0;
        return 1;
    }
    return 0;
}

void sub_39074()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

void sub_39162(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        sub_2454( "E2FC2AU" );
        return;
    }
    sub_5476( "FriendDistribute_GTA4: Friend_Distribute_Drunken_Conversation_Speech_Group: Not a friend" );
    sub_5476( "FriendDistribute_GTA4: Friend_Distribute_Drunken_Conversation_Speech_Group: Should never reach here" );
    return;
}

void sub_39448(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 1;
    switch (uParam0)
    {
        case 3:
        sub_37742( uParam1, iVar4 );
        break;
        case 7:
        sub_38331( uParam1, iVar4 );
        break;
    }
    return;
}

void sub_39531(unknown uParam0)
{
    switch (uParam0)
    {
        case 3:
        sub_2454( "E2FCAUD" );
        return;
    }
    sub_5476( "FriendDistribute_GTA4: Friend_Distribute_Generic_Conversation_Speech_Group: Not a friend" );
    sub_5476( "FriendDistribute_GTA4: Friend_Distribute_Generic_Conversation_Speech_Group: Should never reach here" );
    return;
}

void sub_39817(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 1;
    switch (uParam0)
    {
        case 3:
        sub_35553( uParam1, iVar4 );
        break;
        case 7:
        sub_36342( uParam1, iVar4 );
        break;
    }
    return;
}

int sub_40056(int iParam0)
{
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (iParam0->_fU4 == g_U8866)
        {
            return 0;
        }
    }
    return 1;
}

void sub_40317()
{
    CLEAR_WANTED_LEVEL( sub_3803() );
    if (NOT g_U0)
    {
        sub_40347();
    }
    sub_31424();
    return;
}

void sub_40347()
{
    if (g_U0)
    {
        return;
    }
    g_U10953._fU0 = 1;
    g_U10953._fU4 = 0;
    g_U10953._fU8 = 0;
    g_U10953._fU12 = 0;
    g_U10953._fU16 = 0;
    g_U10953._fU20 = 0;
    g_U10953._fU28 = 5;
    return;
}

void main()
{
    boolean bVar2;
    boolean bVar3;

    l_U113 = {0.00000000, 0.00000000, 0.00000000};
    l_U231 = {1.00000000, 1.00000000, 1.00000000};
    l_U234 = {0.00000000, 1.00000000, 0.00000000};
    l_U237 = {0.00000000, -1.00000000, 0.00000000};
    l_U250 = 0;
    l_U251 = 0;
    l_U262 = 100.00000000;
    l_U263 = 10.50000000;
    l_U264 = 0.50000000;
    l_U265 = 2.85000000;
    l_U270 = 1;
    l_U271 = 0;
    l_U437 = -1;
    l_U443 = 0;
    l_U444 = 1;
    l_U445 = 3;
    l_U447 = 0;
    l_U464 = -1;
    l_U468 = 0;
    l_U469 = 1;
    l_U470 = 1;
    l_U478 = 150.00000000;
    l_U568 = 0;
    l_U569 = 150.00000000;
    l_U619 = 0;
    l_U822 = 12;
    l_U823 = 12;
    l_U845 = 0;
    l_U852 = 1543404628;
    l_U853 = 1724587620;
    l_U886 = {1168.78600000, 566.23720000, 32.40280000};
    l_U923 = 0;
    l_U924 = 0;
    l_U925 = 0;
    l_U926 = 0;
    l_U927 = 0;
    l_U928 = 0;
    l_U929 = 0;
    l_U930 = 1;
    l_U931 = 0;
    l_U944 = 0;
    l_U945 = 0;
    l_U946 = 0;
    l_U947 = 0;
    l_U948 = 0;
    l_U949 = 0;
    l_U950 = 0;
    l_U951 = 0;
    l_U952 = 0;
    l_U953 = 0;
    l_U954 = 0;
    l_U955 = 0;
    l_U956 = 0;
    l_U957 = 0;
    l_U958 = 0;
    l_U959 = 1;
    l_U960 = 0;
    l_U961 = 0;
    l_U962 = 0;
    l_U963 = 0;
    l_U964 = 0;
    l_U965 = 15000;
    l_U967 = 7;
    l_U969 = -1;
    l_U971 = 172.93280000;
    l_U972 = 0.00000000;
    l_U973 = 8.00000000;
    SET_MISSION_FLAG( 1 );
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_553();
        sub_2664( 0 );
    }
    bVar2 = false;
    bVar3 = false;
    sub_3696();
    while (true)
    {
        WAIT( 0 );
        sub_5505();
        sub_34416();
        if (NOT l_U925)
        {
            if (sub_34650( l_U834._fU4, l_U834._fU8 ))
            {
                sub_34731();
            }
        }
        switch (l_U833)
        {
            case 0:
            if (TIMERB() > l_U965)
            {
                sub_35009( ref l_U826, 0 );
                sub_35040( ref l_U826, 0 );
                sub_35075( ref l_U826, 100009 );
                while (NOT (sub_35108( ref l_U826 )))
                {
                    WAIT( 0 );
                }
                SETTIMERB( 0 );
                l_U833 = 1;
            }
            break;
            case 1:
            if ((sub_35808( ref l_U826 )) == 3)
            {
                if (TIMERA() > 1500)
                {
                    l_U833 = 2;
                    SETTIMERB( 0 );
                }
            }
            else
            {
                SETTIMERA( 0 );
            }
            if (l_U957)
            {
                l_U833 = 5;
                l_U958 = 1;
                PRINT_NOW( "CIA2_KILLMAR", 7500, 0 );
            }
            break;
            case 2:
            if ((IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_5191() )) AND (NOT sub_19307()))
            {
                if (NOT l_U923)
                {
                    l_U923 = 1;
                }
                if (NOT (IS_WANTED_LEVEL_GREATER( sub_5444(), 0 )))
                {
                    if (NOT l_U949)
                    {
                        CLEAR_PRINTS();
                        l_U949 = 1;
                        l_U951 = 0;
                    }
                    l_U833 = 3;
                    sub_3256( "PD_ADAM", "PD_DIMAYEV", 0 );
                    sub_4951( "PD_ADAM", "PD_DIMAYEV" );
                    g_U64947 = 1;
                    SETTIMERA( 0 );
                    if (bVar2 == 1)
                    {
                        bVar2 = false;
                    }
                }
                else if (NOT l_U951)
                {
                    PRINT_NOW( "CIA2_LOSECOPS", 7500, 1 );
                    l_U951 = 1;
                }
            }
            else if (l_U923)
            {
                l_U923 = 0;
                bVar2 = false;
            }
            if (((NOT bVar2) AND (NOT IS_MESSAGE_BEING_DISPLAYED())) AND (NOT sub_9910()))
            {
                bVar2 = true;
                l_U951 = 0;
                PRINT_NOW( "CIA2_GETCOP2", 7500, 1 );
                SETTIMERB( 0 );
            }
            else if (TIMERB() >= 45000)
            {
                bVar2 = false;
            };;;
            if (l_U957)
            {
                l_U833 = 5;
                l_U958 = 1;
                PRINT_NOW( "CIA2_KILLMAR", 7500, 0 );
            }
            break;
            case 3:
            if (NOT (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_5191() )))
            {
                l_U833 = 2;
                bVar3 = false;
            }
            else if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "policetest" )) > 0)
            {
                CLEAR_PRINTS();
                if (NOT l_U952)
                {
                    l_U952 = 1;
                }
                l_U833 = 4;
                l_U950 = 0;
                SETTIMERA( 0 );
                SETTIMERB( 0 );
            }
            else if (NOT bVar3)
            {
                PRINT_NOW( "CIA2_USECOMP2", 7500, 0 );
                bVar3 = true;
            };;;
            if (l_U957)
            {
                l_U833 = 5;
                l_U958 = 1;
                PRINT_NOW( "CIA2_KILLMAR", 7500, 0 );
            }
            break;
            case 4:
            if (NOT (IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_5191() )))
            {
                l_U833 = 2;
                bVar3 = false;
                CLEAR_HELP();
            }
            else if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "policetest" )) == 0)
            {
                CLEAR_PRINTS();
                l_U833 = 3;
                SETTIMERA( 0 );
            }
            else if (NOT l_U950)
            {
                PRINT_NOW( "CIA2_D_M2", 7500, 1 );
                l_U950 = 1;
            };;;
            if (l_U957)
            {
                l_U833 = 5;
                l_U958 = 1;
                PRINT_NOW( "CIA2_KILLMAR", 7500, 0 );
            }
            break;
            case 5: break;
        }
    }
    return;
}

void sub_553()
{
    sub_562();
    return;
}

void sub_562()
{
    int iVar2;

    iVar2 = 12;
    sub_576( iVar2 );
    sub_1752( iVar2 );
    return;
}

void sub_576(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_620();
        sub_781();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_889();
            sub_928();
        }
    }
    sub_1004();
    sub_1105();
    uVar5 = sub_1218( uParam0 );
    sub_1659( uVar5, 0 );
    return;
}

void sub_620()
{
    sub_634( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_734();
    }
    return;
}

void sub_634(int iParam0)
{
    int iVar3;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    iVar3 = g_U26758[iParam0]._fU100;
    iVar3--;
    g_U26758[iParam0]._fU100 = iVar3;
    DECREMENT_INT_STAT( 255, 1 );
    return;
}

void sub_734()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_781()
{
    sub_790();
    return;
}

void sub_790()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_889()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_928()
{
    sub_937();
    return;
}

void sub_937()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_1004()
{
    int I;

    I = 0;
    for ( I = 0; I < 28; I++ )
    {
        if (g_U10981[I]._fU144._fU36)
        {
            g_U10981[I]._fU28 = 1;
        }
        g_U10981[I]._fU144._fU36 = 0;
    }
    return;
}

void sub_1105()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_1127();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_1127()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1218(unknown uParam0)
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
        case 20: return 22;
        case 21: return 20;
        case 22: return 21;
    }
    PRINTSTRING( "UNKNOWN STRAND ID: " );
    PRINTINT( uParam0 );
    PRINTNL();
    sub_1617( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1617(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1659(int iParam0, boolean bParam1)
{
    int iVar4;

    if (NOT (iParam0 < 57))
    {
        return;
    }
    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U26671[iParam0] = iVar4;
    if (bParam1)
    {
        g_U26671[iParam0] += 30000;
    }
    return;
}

void sub_1752(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1761();
    if (g_U0)
    {
        return;
    }
    if (g_U91._fU40 == 0)
    {
        return;
    }
    if (NOT g_U10978)
    {
        return;
    }
    iVar3 = g_U13391[iParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (bVar4)
    {
        return;
    }
    if (g_U10981[iParam0]._fU12)
    {
        return;
    }
    if (g_U9893._fU40 == -1)
    {
        return;
    }
    if (NOT (g_U9893._fU40 == iParam0))
    {
        return;
    }
    if (NOT g_U813)
    {
        sub_2536();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1761()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_1799( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_1799( 1, g_U569[I] )) != 0)
            {
                sub_2085( I );
            }
        }
    }
    if (NOT sub_2251())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U91._fU404 = 1000;
    }
    if (g_U91._fU0 == 1014)
    {
        g_U91._fU92 = 1;
    }
    return;
}

int sub_1799(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_2085(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2170( g_U569 - 1 );
    return;
}

void sub_2170(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2251()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1799( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2536()
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

void sub_2664(boolean bParam0)
{
    sub_2673();
    sub_3100( ref l_U846, 1 );
    if (NOT bParam0)
    {
        sub_3256( "PD_ADAM", "PD_DIMAYEV", 1 );
    }
    g_U8083 = 0;
    sub_3008();
    sub_2917();
    sub_3408( ref l_U826, 1 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SET_PARKED_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    ALLOW_EMERGENCY_SERVICES( 1 );
    SET_CREATE_RANDOM_COPS( 1 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2673()
{
    int I;

    if (NOT (l_U844 == 0))
    {
        for ( I = 0; I < l_U854; I++ )
        {
            if (DOES_CHAR_EXIST( l_U854[I] ))
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U854[I] );
                if (DOES_BLIP_EXIST( l_U873[I] ))
                {
                    REMOVE_BLIP( l_U873[I] );
                }
            }
        }
        if (DOES_CHAR_EXIST( l_U866 ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U866 );
            if (DOES_BLIP_EXIST( l_U885 ))
            {
                REMOVE_BLIP( l_U885 );
            }
        }
        if (DOES_BLIP_EXIST( l_U872 ))
        {
            REMOVE_BLIP( l_U872 );
        }
        if (sub_2881())
        {
            sub_2917();
        }
        if (sub_2972())
        {
            sub_3008();
        }
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U852 );
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U853 );
    }
    return;
}

void sub_2881()
{
    return DOES_BLIP_EXIST( g_U8074._fU0 );
}

void sub_2917()
{
    SET_ROUTE( g_U8074._fU0, 0 );
    REMOVE_BLIP( g_U8074._fU0 );
    g_U8074._fU0 = nil;
    return;
}

void sub_2972()
{
    return DOES_BLIP_EXIST( g_U8078._fU0 );
}

void sub_3008()
{
    SET_ROUTE( g_U8078._fU0, 0 );
    REMOVE_BLIP( g_U8078._fU0 );
    g_U8078._fU0 = nil;
    return;
}

void sub_3100(int iParam0, unknown uParam1)
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

void sub_3256(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int I;

    if ((DOES_TEXT_LABEL_EXIST( uParam0 )) AND (DOES_TEXT_LABEL_EXIST( uParam1 )))
    {
        for ( I = 0; I <= 99; I++ )
        {
            if ((COMPARE_STRING( ref g_U2273[I]._fU16, uParam0 )) AND (COMPARE_STRING( ref g_U2273[I]._fU0, uParam1 )))
            {
                g_U2273[I]._fU208 = uParam2;
            }
        }
    }
    return;
}

void sub_3408(int iParam0, unknown uParam1)
{
    int I;

    if (iParam0->_fU24 >= 0)
    {
        for ( I = iParam0->_fU24; I >= 0; I += -1 )
        {
            if (sub_3461( iParam0->_fU0, g_U569[I] ))
            {
                g_U569[I]._fU20 = uParam1;
                iParam0->_fU24 = I;
            }
        }
    }
    return;
}

int sub_3461(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    int iVar14;
    int iVar15;

    if ((uParam0._fU0[0] == uParam6._fU0[0]) AND (uParam0._fU0[2] == uParam6._fU0[2]))
    {
        iVar14 = sub_1799( 0, uParam0 );
        if (iVar14 == (sub_1799( 0, uParam6 )))
        {
            iVar15 = sub_1799( 3, uParam0 );
            if (iVar15 == (sub_1799( 3, uParam6 )))
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_3696()
{
    unknown uVar2;

    CLEAR_PRINTS();
    LOAD_ADDITIONAL_TEXT( "C2AUD", 6 );
    if (g_U9893._fU24)
    {
        START_CUTSCENE_NOW( "N2" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "N2" );
    }
    SET_GAME_CAM_HEADING( 0.00000000 );
    LOAD_ADDITIONAL_TEXT( "CIA2", 0 );
    sub_3851( "C2AUD" );
    sub_3983( ref l_U834, "PD_ADAM", "PD_DIMAYEV" );
    g_U64947 = 0;
    g_U64948 = 0;
    REQUEST_MODEL( -276900515 );
    REQUEST_MODEL( l_U852 );
    REQUEST_MODEL( l_U853 );
    REQUEST_MODEL( -268530289 );
    LOAD_ALL_OBJECTS_NOW();
    while ((((NOT (HAS_MODEL_LOADED( -276900515 ))) || (NOT (HAS_MODEL_LOADED( l_U852 )))) || (NOT (HAS_MODEL_LOADED( l_U853 )))) || (NOT (HAS_MODEL_LOADED( -268530289 ))))
    {
        WAIT( 0 );
    }
    REQUEST_ANIMS( "misscia2" );
    while (NOT (HAVE_ANIMS_LOADED( "misscia2" )))
    {
        WAIT( 0 );
    }
    # -sub_C1FFC0-0xc214c8( 2, ref l_U838 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U837 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U840 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U841 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U842 );
    LOAD_COMBAT_DECISION_MAKER( 8, ref l_U843 );
    LOAD_COMBAT_DECISION_MAKER( 3, ref l_U839 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U840, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U839, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U841, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U842, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U843, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U840, 75 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U841, 60 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U843, 65 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U842, 60 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U839, 60 );
    sub_4586( l_U823, 1, 16383, 16383, ref l_U826 );
    sub_4951( "PD_ADAM", "PD_DIMAYEV" );
    LOAD_SCENE( -64.73370000, 54.27560000, 13.76190000 );
    WAIT( 2000 );
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar2 );
    if (IS_VEH_DRIVEABLE( uVar2 ))
    {
        SET_CAR_AS_MISSION_CAR( uVar2 );
        if (LOCATE_CAR_2D( uVar2, -66.21970000, 52.32570000, 3.00000000, 3.00000000, 0 ))
        {
            CLEAR_AREA( -58.32620000, 58.65050000, 14.47300000, 7.00000000, 1 );
            SET_CAR_COORDINATES( uVar2, -58.32620000, 58.65050000, 14.47300000 );
            SET_CAR_HEADING( uVar2, 180 );
            SET_CAR_ON_GROUND_PROPERLY( uVar2 );
            WAIT( 1000 );
        }
    }
    if (NOT (IS_CHAR_DEAD( sub_5191() )))
    {
        LOAD_SCENE( -66.21970000, 52.32570000, 13.76250000 );
        CLEAR_AREA( -66.21970000, 52.32570000, 13.76250000, 3.00000000, 1 );
        SET_CHAR_COORDINATES( sub_5191(), -66.21970000, 52.32570000, 13.76250000 );
        SET_CHAR_HEADING( sub_5191(), 270 );
        SET_GAME_CAM_HEADING( 0.00000000 );
        WAIT( 1000 );
    }
    if (IS_VEH_DRIVEABLE( uVar2 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar2 );
    }
    PRINT_NOW( "CIA2_WAIT", 7500, 0 );
    SETTIMERB( 0 );
    DO_SCREEN_FADE_IN( 500 );
    if (NOT (IS_CHAR_DEAD( sub_5191() )))
    {
        SET_PLAYER_CONTROL( sub_5444(), 1 );
    }
    return;
}

void sub_3851(unknown uParam0)
{
    StrCopy( ref l_U0._fU0, uParam0, 16 );
    sub_3868();
    return;
}

void sub_3868()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U0._fU16[I]._fU0 = nil;
        StrCopy( ref l_U0._fU16[I]._fU4, "", 32 );
        l_U0._fU344[I] = 0;
    }
    return;
}

void sub_3983(int iParam0, unknown uParam1, unknown uParam2)
{
    iParam0->_fU0 = sub_3996( uParam1, uParam2 );
    iParam0->_fU4 = uParam1;
    iParam0->_fU8 = uParam2;
    return;
}

int sub_3996(unknown uParam0, unknown uParam1)
{
    int Result;

    if ((DOES_TEXT_LABEL_EXIST( uParam0 )) AND (DOES_TEXT_LABEL_EXIST( uParam1 )))
    {
        for ( Result = 0; Result <= 99; Result++ )
        {
            if (COMPARE_STRING( ref g_U2273[Result]._fU16, uParam0 ))
            {
                if (COMPARE_STRING( ref g_U2273[Result]._fU0, uParam1 ))
                {
                    return Result;
                }
            }
        }
    }
    return -1;
}

void sub_4586(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    iParam4->_fU24 = -1;
    sub_4608( uParam0, 0, iParam4 + 0 );
    sub_4608( uParam1, 1, iParam4 + 0 );
    sub_4608( uParam2, 2, iParam4 + 0 );
    sub_4608( uParam3, 3, iParam4 + 0 );
    sub_4608( 0, 4, iParam4 + 0 );
    sub_4608( 1, 5, iParam4 + 0 );
    sub_4608( -1, 6, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 1;
    return;
}

void sub_4608(unknown uParam0, unknown uParam1, int iParam2)
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

void sub_4951(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = sub_3996( uParam0, uParam1 );
    if (iVar4 != -1)
    {
        g_U2273[iVar4]._fU180 = 0;
    }
    return;
}

void sub_5191()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_5444()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_5505()
{
    float fVar2;
    int I;
    boolean bVar4;
    unknown uVar5;
    unknown uVar6;

    bVar4 = false;
    sub_5517();
    switch (l_U844)
    {
        case 0:
        sub_7890();
        l_U844 = 1;
        break;
        case 1:
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_5191(), 1148.05800000, 558.10720000, 32.95150000, 180.00000000, 180.00000000, 180.00000000, 0 ))
        {
            ALLOW_EMERGENCY_SERVICES( 0 );
            SET_CREATE_RANDOM_COPS( 0 );
            l_U844 = 2;
        }
        break;
        case 2:
        sub_9818();
        if (NOT l_U962)
        {
            sub_11258();
        }
        if (NOT l_U924)
        {
            WAIT( 300 );
            sub_11459();
        }
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_5191(), 1148.05800000, 558.10720000, 32.95150000, 90.00000000, 90.00000000, 90.00000000, 0 ))
        {
            if (NOT l_U957)
            {
                if (l_U925)
                {
                    sub_12022( 1 );
                }
                else if (NOT l_U956)
                {
                    l_U956 = 1;
                }
            }
        }
        else if (NOT l_U957)
        {
            if (l_U956)
            {
                l_U956 = 0;
            }
        }
        if (NOT l_U927)
        {
            sub_16303();
            sub_16525();
            l_U948 = 0;
            GET_CHAR_COORDINATES( sub_5191(), ref l_U974, ref l_U975, ref l_U976 );
            if (IS_CHAR_DUCKING( sub_5191() ))
            {
                if (l_U976 >= 31.90000000)
                {
                    l_U948 = 1;
                }
            }
            else if (l_U976 >= 31.44000000)
            {
                l_U948 = 1;
            }
            fVar2 = 8.00000000;
            if (l_U928)
            {
                if (l_U930)
                {
                    if (TIMERB() >= 2000)
                    {
                        sub_16886();
                    }
                }
                else
                {
                    sub_16886();
                }
            }
            else if (NOT (IS_CHAR_INJURED( l_U866 )))
            {
                if (((l_U948) AND (HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U866, sub_5191() ))) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_5191(), l_U866, 11.00000000, 11.00000000, 11.00000000, 0 )))
                {
                    l_U931 = 1;
                    if (NOT l_U928)
                    {
                        l_U928 = 1;
                        SETTIMERB( 0 );
                    }
                }
                else if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U866, sub_5191(), 0 ))
                {
                    if (NOT l_U928)
                    {
                        l_U928 = 1;
                        l_U930 = 0;
                        SETTIMERB( 0 );
                    }
                }
            }
            else if (NOT l_U928)
            {
                l_U928 = 1;
                l_U930 = 0;
                SETTIMERB( 0 );
            }
            for ( I = 0; I < l_U854; I++ )
            {
                if (I == 6)
                {
                    fVar2 = 13.00000000;
                }
                else
                {
                    fVar2 = 8.00000000;
                }
                if (NOT l_U932[I])
                {
                    if (NOT (IS_CHAR_INJURED( l_U854[I] )))
                    {
                        if ((l_U948) AND ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_5191(), l_U854[I], fVar2, fVar2, fVar2, 0 )) AND (HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U854[I], sub_5191() ))))
                        {
                            ALLOW_REACTION_ANIMS( l_U854[I], 0 );
                            TASK_AIM_GUN_AT_CHAR( l_U854[I], sub_5191(), 2000 );
                            if (NOT l_U928)
                            {
                                l_U928 = 1;
                                SETTIMERB( 0 );
                            }
                            l_U932[I] = 1;
                        }
                        else if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U854[I], sub_5191(), 0 ))
                        {
                            if (NOT l_U928)
                            {
                                l_U928 = 1;
                                l_U930 = 0;
                                SETTIMERB( 0 );
                            }
                            l_U932[I] = 1;
                        }
                        else if ((l_U928) AND (l_U930))
                        {
                            if (I == 0)
                            {
                                TASK_TURN_CHAR_TO_FACE_CHAR( l_U854[0], sub_5191() );
                            }
                            else if (I == 1)
                            {
                                TASK_TURN_CHAR_TO_FACE_CHAR( l_U854[1], sub_5191() );
                            }
                        };;;
                    }
                    else if (NOT l_U928)
                    {
                        l_U928 = 1;
                        l_U930 = 0;
                        SETTIMERB( 0 );
                    }
                    l_U932[I] = 1;;
                }
            }
            if (((IS_CHAR_SHOOTING_IN_AREA( sub_5191(), 1130, 537, 1189, 589, 0 )) || (IS_EXPLOSION_IN_AREA( -1, 1130, 556, -10, 1189, 589, 70 ))) || (IS_PROJECTILE_IN_AREA( 1129, 556, -10, 1181, 582, 44 )))
            {
                if (NOT l_U928)
                {
                    l_U928 = 1;
                    l_U930 = 0;
                    SETTIMERB( 0 );
                }
                if (IS_PROJECTILE_IN_AREA( 1129, 556, -10, 1181, 582, 44 ))
                {
                    GET_CHAR_COORDINATES( sub_5191(), ref l_U974, ref l_U975, ref l_U976 );
                    GET_CLOSEST_CHAR( l_U974, l_U975, l_U976, 100, 0, 1, ref uVar5 );
                    if (NOT (IS_CHAR_INJURED( uVar5 )))
                    {
                        SAY_AMBIENT_SPEECH( uVar5, "TAKE_COVER", 1, 0, 0 );
                    }
                }
            }
            if (IS_CHAR_IN_AREA_2D( sub_5191(), 1146.08000000, 552.73000000, 1171.19000000, 560.84000000, 0 ))
            {
                if ((IS_CHAR_IN_ANY_POLICE_VEHICLE( sub_5191() )) AND (NOT sub_19307()))
                {
                    GET_CAR_CHAR_IS_USING( sub_5191(), ref uVar6 );
                    if (NOT (IS_CAR_DEAD( uVar6 )))
                    {
                        if (IS_CAR_SIREN_ON( uVar6 ))
                        {
                            if (NOT l_U928)
                            {
                                l_U928 = 1;
                                l_U930 = 0;
                                SETTIMERB( 0 );
                            }
                        }
                    }
                    MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar6 );
                }
            }
        }
        if (l_U945)
        {
            GET_CHAR_COORDINATES( sub_5191(), ref l_U974, ref l_U975, ref l_U976 );
            if (l_U976 < 36)
            {
                if (NOT l_U946)
                {
                    sub_18013();
                    l_U946 = 1;
                }
            }
            else if (l_U946)
            {
                sub_17606();
                l_U946 = 0;
            }
        }
        if ((l_U945) AND (l_U946))
        {
            sub_19611();
        }
        if (((NOT l_U953) AND (l_U946)) AND ((l_U845 >= 8) || (IS_CHAR_DEAD( l_U866 ))))
        {
            sub_19906();
        }
        if ((l_U953) AND (NOT l_U954))
        {
            if (NOT (IS_CHAR_INJURED( l_U854[3] )))
            {
                GET_SCRIPT_TASK_STATUS( l_U854[3], 29, ref l_U825 );
                if ((l_U825 == 7) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U854[3], sub_5191(), 0 )))
                {
                    sub_16935( 3 );
                    SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U854[3], 1142.78900000, 564.93130000, 32.38560000, 9.00000000 );
                    SET_PED_PATH_MAY_USE_LADDERS( l_U854[3], 0 );
                    l_U954 = 1;
                }
            }
        }
        bVar4 = true;
        l_U967 = 0;
        for ( I = 0; I < l_U854; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U854[I] )))
            {
                l_U967++;
                bVar4 = false;
            }
            else if (DOES_BLIP_EXIST( l_U873[I] ))
            {
                REMOVE_BLIP( l_U873[I] );
            }
        }
        if (((l_U967 == 1) AND (NOT l_U944)) AND (IS_CHAR_DEAD( l_U866 )))
        {
            for ( I = 0; I < l_U854; I++ )
            {
                if (NOT (IS_CHAR_INJURED( l_U854[I] )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_5191(), l_U854[I], 12.00000000, 12.00000000, 12.00000000, 0 ))
                    {
                        SET_CHAR_DECISION_MAKER( l_U854[I], l_U837 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U854[I], 1 );
                        CLEAR_CHAR_TASKS( l_U854[I] );
                        FORCE_CHAR_TO_DROP_WEAPON( l_U854[I] );
                        if (NOT (IS_CHAR_INJURED( l_U854[I] )))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U824 );
                            TASK_SWAP_WEAPON( 0, 0 );
                            TASK_PLAY_ANIM( 0, "plead", "MISScia2", 4.00000000, 1, 0, 0, 0, -1 );
                            CLOSE_SEQUENCE_TASK( l_U824 );
                            TASK_PERFORM_SEQUENCE( l_U854[I], l_U824 );
                            CLEAR_SEQUENCE_TASK( l_U824 );
                        }
                        l_U944 = 1;
                        l_U969 = I;
                    }
                }
            }
        }
        if ((l_U944) AND (NOT (l_U969 == -1)))
        {
            if (NOT (IS_CHAR_INJURED( l_U854[l_U969] )))
            {
                if (DOES_BLIP_EXIST( l_U873[l_U969] ))
                {
                    sub_20777( ref l_U873[l_U969], ref l_U966 );
                }
                if (NOT l_U960)
                {
                    if (NOT l_U961)
                    {
                        if (HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U854[l_U969], sub_5191() ))
                        {
                            sub_20979( l_U854[l_U969], "plead", "MISScia2" );
                        }
                        else
                        {
                            TASK_TURN_CHAR_TO_FACE_CHAR( l_U854[l_U969], sub_5191() );
                            l_U961 = 1;
                        }
                    }
                    else
                    {
                        GET_SCRIPT_TASK_STATUS( l_U854[l_U969], 34, ref l_U825 );
                        if (l_U825 == 7)
                        {
                            l_U961 = 0;
                        }
                    }
                    if (NOT (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_5191(), l_U854[l_U969], 14.00000000, 14.00000000, 14.00000000, 0 )))
                    {
                        TASK_SMART_FLEE_CHAR( l_U854[l_U969], sub_5191(), 100000.00000000, 100000 );
                        bVar4 = true;
                        if (DOES_BLIP_EXIST( l_U873[l_U969] ))
                        {
                            REMOVE_BLIP( l_U873[l_U969] );
                        }
                        l_U960 = 1;
                    }
                }
                else
                {
                    GET_SCRIPT_TASK_STATUS( l_U854[l_U969], 25, ref l_U825 );
                    if (l_U825 == 7)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U854[l_U969] )))
                        {
                            TASK_SMART_FLEE_CHAR( l_U854[l_U969], sub_5191(), 100000.00000000, 100000 );
                        }
                    }
                }
            }
        }
        if (NOT (IS_CHAR_FATALLY_INJURED( l_U866 )))
        {
            bVar4 = false;
        }
        else if (NOT l_U929)
        {
            REMOVE_BLIP( l_U885 );
            sub_3100( ref l_U846, 0 );
            l_U929 = 1;
        }
        if (bVar4)
        {
            sub_2673();
            l_U844 = 3;
        }
        if ((((l_U956) AND (l_U925)) AND (NOT bVar4)) AND (NOT l_U957))
        {
            sub_12022( 0 );
            l_U956 = 0;
        }
        if ((((NOT l_U926) AND (sub_21632( 0 ))) AND (NOT bVar4)) AND (l_U958))
        {
            WAIT( 800 );
            PRINT_NOW( "CIA2_KILLMAR", 7500, 0 );
            l_U926 = 1;
        }
        break;
        case 3:
        WAIT( 5000 );
        sub_21966();
        break;
    }
    if (l_U957)
    {
        if (sub_2881())
        {
            sub_2917();
        }
        if (sub_2972())
        {
            sub_3008();
        }
    }
    return;
}

void sub_5517()
{
    switch (l_U845)
    {
        case 0:
        CREATE_CHAR( 26, l_U852, l_U886._fU0, l_U886._fU4, l_U886._fU8, ref l_U866, 1 );
        SET_CHAR_COMPONENT_VARIATION( l_U866, 0, 1, 2 );
        SET_CHAR_COMPONENT_VARIATION( l_U866, 1, 1, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U866, 2, 0, 0 );
        SET_CHAR_HEADING( l_U866, l_U971 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U866, 1 );
        GIVE_WEAPON_TO_CHAR( l_U866, 12, 30000, 0 );
        SET_CURRENT_CHAR_WEAPON( l_U866, 12, 0 );
        SET_CHAR_DECISION_MAKER( l_U866, l_U838 );
        SET_COMBAT_DECISION_MAKER( l_U866, l_U840 );
        SET_PED_PATH_MAY_DROP_FROM_HEIGHT( l_U866, 0 );
        SET_CHAR_RELATIONSHIP_GROUP( l_U866, 24 );
        SET_CHAR_RELATIONSHIP( l_U866, 5, 0 );
        SET_CHAR_MAX_HEALTH( l_U866, 450 );
        SET_CHAR_HEALTH( l_U866, 450 );
        SET_PED_DIES_WHEN_INJURED( l_U866, 1 );
        CREATE_OBJECT( -268530289, l_U886._fU0, l_U886._fU4, l_U886._fU8 + 3, ref l_U869, 1 );
        ATTACH_OBJECT_TO_PED( l_U869, l_U866, 1232, 0, 0, 0, 0, 0, 0, 0 );
        l_U845 = 1;
        sub_5976( 2, l_U866, "TARGET", 0 );
        SET_AMBIENT_VOICE_NAME( l_U866, "TARGET" );
        break;
        case 1:
        if (l_U928)
        {
            if (NOT (IS_CHAR_INJURED( l_U866 )))
            {
                if (NOT sub_6175())
                {
                    l_U845 = 3;
                }
                else
                {
                    l_U845 = 2;
                }
                if (DOES_OBJECT_EXIST( l_U869 ))
                {
                    DETACH_OBJECT( l_U869, 1 );
                    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U869 );
                }
            }
        }
        break;
        case 2:
        if (NOT (IS_CHAR_INJURED( l_U866 )))
        {
            if (NOT l_U955)
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U866, 0 );
                TASK_COMBAT( l_U866, sub_5191() );
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U866, 1153.54200000, 565.59960000, 32.38560000, 4.00000000 );
                SETTIMERB( 0 );
                l_U955 = 1;
            }
            else if (NOT sub_6175())
            {
                l_U845 = 3;
            }
        }
        break;
        case 3:
        if (NOT (IS_CHAR_INJURED( l_U866 )))
        {
            l_U845 = 4;
            SETTIMERB( 0 );
        }
        break;
        case 4:
        if (NOT (IS_CHAR_INJURED( l_U866 )))
        {
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U866, 1 );
            OPEN_SEQUENCE_TASK( ref l_U824 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1136.67200000, 568.96370000, 32.38560000, 3, -2, 1.00000000 );
            TASK_ACHIEVE_HEADING( 0, 0.00000000 );
            TASK_CLIMB_LADDER( 0, 1 );
            TASK_PAUSE( 0, 200 );
            CLOSE_SEQUENCE_TASK( l_U824 );
            TASK_PERFORM_SEQUENCE( l_U866, l_U824 );
            CLEAR_SEQUENCE_TASK( l_U824 );
            CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U866 );
            l_U845 = 7;
        }
        break;
        case 7:
        if (NOT (IS_CHAR_INJURED( l_U866 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U866, 29, ref l_U825 );
            if (l_U825 == 7)
            {
                OPEN_SEQUENCE_TASK( ref l_U824 );
                TASK_FLUSH_ROUTE();
                TASK_EXTEND_ROUTE( 1156.82100000, 574.19290000, 38.60200000 );
                TASK_EXTEND_ROUTE( 1180.14700000, 579.85940000, 38.60200000 );
                TASK_EXTEND_ROUTE( 1179.66300000, 583.43170000, 38.60200000 );
                TASK_FOLLOW_POINT_ROUTE( 0, 3, 0 );
                TASK_ACHIEVE_HEADING( 0, 90 );
                CLOSE_SEQUENCE_TASK( l_U824 );
                TASK_PERFORM_SEQUENCE( l_U866, l_U824 );
                CLEAR_SEQUENCE_TASK( l_U824 );
                CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U866 );
                l_U845 = 8;
            }
            GET_CHAR_COORDINATES( l_U866, ref l_U974, ref l_U975, ref l_U976 );
            if (((LOCATE_CHAR_ANY_MEANS_3D( sub_5191(), 1136.67200000, 568.96370000, 32.38560000, 3.00000000, 3.00000000, 3.00000000, 0 )) AND (l_U976 < 34)) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U866, sub_5191(), 0 )))
            {
                TASK_COMBAT( l_U866, sub_5191() );
                l_U845 = 12;
            }
        }
        break;
        case 8:
        if (NOT (IS_CHAR_INJURED( l_U866 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U866, 29, ref l_U825 );
            if (l_U825 == 7)
            {
                OPEN_SEQUENCE_TASK( ref l_U824 );
                TASK_CLIMB( 0, 1 );
                TASK_GO_STRAIGHT_TO_COORD( 0, 1173.08800000, 583.31690000, 41.11460000, 3, -2 );
                TASK_CLIMB( 0, 1 );
                TASK_GO_STRAIGHT_TO_COORD( 0, 1171.66000000, 587.19000000, 43.27680000, 3, -2 );
                TASK_ACHIEVE_HEADING( 0, 0.00000000 );
                TASK_JUMP( 0, 1 );
                CLOSE_SEQUENCE_TASK( l_U824 );
                TASK_PERFORM_SEQUENCE( l_U866, l_U824 );
                CLEAR_SEQUENCE_TASK( l_U824 );
                CLEAR_CHAR_LAST_DAMAGE_ENTITY( l_U866 );
                l_U845 = 9;
            }
            GET_CHAR_COORDINATES( l_U866, ref l_U974, ref l_U975, ref l_U976 );
            if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U866, sub_5191(), 3.00000000, 3.00000000, 3.00000000, 0 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U866, sub_5191(), 0 )))
            {
                TASK_COMBAT( l_U866, sub_5191() );
                l_U845 = 12;
            }
        }
        break;
        case 9:
        if (NOT (IS_CHAR_INJURED( l_U866 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U866, 29, ref l_U825 );
            if (l_U825 == 7)
            {
                OPEN_SEQUENCE_TASK( ref l_U824 );
                TASK_SEEK_COVER_TO_COORDS( 0, 1182.12600000, 602.35540000, 42.55340000, 1172.22600000, 587.64280000, 43.27680000, 0 );
                CLOSE_SEQUENCE_TASK( l_U824 );
                TASK_PERFORM_SEQUENCE( l_U866, l_U824 );
                CLEAR_SEQUENCE_TASK( l_U824 );
                l_U845 = 10;
            }
            GET_CHAR_COORDINATES( l_U866, ref l_U974, ref l_U975, ref l_U976 );
            if ((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U866, sub_5191(), 0 )) || (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U866, sub_5191(), 3.00000000, 3.00000000, 3.00000000, 0 )))
            {
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U866, 0 );
                TASK_COMBAT( l_U866, sub_5191() );
                l_U845 = 12;
            }
        }
        break;
        case 10:
        if (NOT (IS_CHAR_INJURED( l_U866 )))
        {
            GET_CHAR_COORDINATES( sub_5191(), ref l_U974, ref l_U975, ref l_U976 );
            if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_5191(), l_U866, 15.00000000, 15.00000000, 3.00000000, 0 )) || (HAS_CHAR_SPOTTED_CHAR_IN_FRONT( l_U866, sub_5191() )))
            {
                SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U866, 1182.12600000, 602.35540000, 42.55340000, 6.00000000 );
                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U866, 0 );
                TASK_COMBAT( l_U866, sub_5191() );
                l_U845 = 12;
            }
        }
        break;
        case 12: break;
    }
    return;
}

void sub_5976(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U0._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U0._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_6056( "\n PED NUMBER ", uParam0 );
    sub_6096( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_6056(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_6096(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_6175()
{
    GET_CHAR_COORDINATES( sub_5191(), ref l_U974, ref l_U975, ref l_U976 );
    if (IS_CHAR_IN_AREA_2D( sub_5191(), 1127, 550, 1249, 613, 0 ))
    {
        if (l_U976 > 34.00000000)
        {
            return 1;
        }
        else if (IS_CHAR_IN_AREA_2D( sub_5191(), 1130.37000000, 558.29000000, 1157.43000000, 570, 0 ))
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
    }
    return 0;
}

void sub_7890()
{
    int I;

    l_U889[0] = {1158.64000000, 566.24540000, 31.45150000};
    l_U889[1] = {1161.58000000, 564.05000000, 31.41710000};
    l_U889[2] = {1162.90000000, 559.35770000, 31.41710000};
    l_U889[3] = {1131.40200000, 571.52470000, 37.63070000};
    l_U889[4] = {1144.85000000, 573.74000000, 37.63070000};
    l_U889[5] = {1146.57600000, 573.88580000, 37.63070000};
    l_U889[6] = {1171.37700000, 577.47440000, 37.66600000};
    l_U889[7] = {1144.04500000, 577.23410000, 37.66700000};
    l_U889[8] = {1173.47900000, 577.51220000, 37.66700000};
    l_U889[9] = {1137.46900000, 579.13000000, 37.66700000};
    l_U889[10] = {1160.84000000, 574.43000000, 37.66700000};
    CREATE_CAR( -276900515, 1159.59500000, 563.00870000, 31.71710000, ref l_U868, 1 );
    SET_LOAD_COLLISION_FOR_CAR_FLAG( l_U868, 1 );
    SET_CAR_HEADING( l_U868, 229.27350000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U868 );
    CREATE_CHAR_INSIDE_CAR( l_U868, 26, l_U853, ref l_U854[0] );
    WAIT( 0 );
    CREATE_CHAR( 26, l_U853, l_U889[1]._fU0, l_U889[1]._fU4, l_U889[1]._fU8, ref l_U854[1], 1 );
    SET_CHAR_HEADING( l_U854[1], 105.82430000 );
    CREATE_CHAR( 26, l_U853, l_U889[2]._fU0, l_U889[2]._fU4, l_U889[2]._fU8, ref l_U854[2], 1 );
    SET_CHAR_HEADING( l_U854[2], 85.54800000 );
    ALLOW_REACTION_ANIMS( l_U854[2], 1 );
    CREATE_CHAR( 26, l_U853, l_U889[3]._fU0, l_U889[3]._fU4, l_U889[3]._fU8, ref l_U854[3], 1 );
    SET_CHAR_HEADING( l_U854[3], 279.62010000 );
    CREATE_CHAR( 26, l_U853, l_U889[4]._fU0, l_U889[4]._fU4, l_U889[4]._fU8, ref l_U854[4], 1 );
    SET_CHAR_HEADING( l_U854[4], 272.23340000 );
    CREATE_CHAR( 26, l_U853, l_U889[5]._fU0, l_U889[5]._fU4, l_U889[5]._fU8, ref l_U854[5], 1 );
    SET_CHAR_HEADING( l_U854[5], 101.56280000 );
    ALLOW_REACTION_ANIMS( l_U854[5], 1 );
    CREATE_CHAR( 26, l_U853, l_U889[6]._fU0, l_U889[6]._fU4, l_U889[6]._fU8, ref l_U854[6], 1 );
    SET_CHAR_HEADING( l_U854[6], -73.36922000 );
    CREATE_CHAR( 26, l_U853, l_U889[7]._fU0, l_U889[7]._fU4, l_U889[7]._fU8, ref l_U854[7], 1 );
    SET_CHAR_HEADING( l_U854[7], 186.62210000 );
    CREATE_OBJECT( -268530289, l_U889[7]._fU0, l_U889[7]._fU4, l_U889[7]._fU8 + 3, ref l_U870, 1 );
    ATTACH_OBJECT_TO_PED( l_U870, l_U854[7], 1232, 0, 0, 0, 0, 0, 0, 0 );
    CREATE_CHAR( 26, l_U853, l_U889[8]._fU0, l_U889[8]._fU4, l_U889[8]._fU8, ref l_U854[8], 1 );
    SET_CHAR_HEADING( l_U854[8], 90.17380000 );
    ALLOW_REACTION_ANIMS( l_U854[8], 1 );
    CREATE_CHAR( 26, l_U853, l_U889[9]._fU0, l_U889[9]._fU4, l_U889[9]._fU8, ref l_U854[9], 1 );
    SET_CHAR_HEADING( l_U854[9], 180.17380000 );
    CREATE_CHAR( 26, l_U853, l_U889[10]._fU0, l_U889[10]._fU4, l_U889[10]._fU8, ref l_U854[10], 1 );
    SET_CHAR_HEADING( l_U854[10], 0 );
    CREATE_OBJECT( -268530289, l_U889[10]._fU0, l_U889[10]._fU4, l_U889[10]._fU8 + 3, ref l_U871, 1 );
    ATTACH_OBJECT_TO_PED( l_U871, l_U854[10], 1232, 0, 0, 0, 0, 0, 0, 0 );
    for ( I = 0; I < l_U854; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U854[I] )))
        {
            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U854[I], 1 );
            SET_CHAR_WILL_MOVE_WHEN_INJURED( l_U854[I], 0 );
            SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U854[I] );
            SET_PED_PATH_MAY_DROP_FROM_HEIGHT( l_U854[I], 0 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U854[I], 1 );
            SET_CHAR_DECISION_MAKER( l_U854[I], l_U838 );
            SET_SENSE_RANGE( l_U854[I], 60.00000000 );
            SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U854[I], 1 );
            SET_PED_DIES_WHEN_INJURED( l_U854[I], 1 );
            SET_CHAR_AS_ENEMY( l_U854[I], 1 );
            l_U932[I] = 0;
            if ((I == 6) || (I == 2))
            {
                GIVE_WEAPON_TO_CHAR( l_U854[I], 11, 30000, 0 );
                if (I == 2)
                {
                    SET_CURRENT_CHAR_WEAPON( l_U854[I], 11, 1 );
                }
                SET_COMBAT_DECISION_MAKER( l_U854[I], l_U842 );
            }
            else if (((I == 0) || (I == 9)) || (I == 10))
            {
                GIVE_WEAPON_TO_CHAR( l_U854[I], 12, 30000, 0 );
                SET_COMBAT_DECISION_MAKER( l_U854[I], l_U841 );
            }
            else if (((I == 5) || (I == 3)) || (I == 1))
            {
                GIVE_WEAPON_TO_CHAR( l_U854[I], 14, 30000, 0 );
                SET_COMBAT_DECISION_MAKER( l_U854[I], l_U843 );
                if (I == 3)
                {
                    SET_CURRENT_CHAR_WEAPON( l_U854[I], 14, 1 );
                }
            }
            else
            {
                GIVE_WEAPON_TO_CHAR( l_U854[I], 7, 30000, 0 );
                SET_COMBAT_DECISION_MAKER( l_U854[I], l_U840 );
            };;;
        }
    }
    return;
}

void sub_9818()
{
    if ((NOT (IS_CHAR_DEAD( sub_5191() ))) AND (NOT (IS_CHAR_DEAD( l_U866 ))))
    {
        if (((((((HAS_CHAR_SPOTTED_CHAR_IN_FRONT( sub_5191(), l_U866 )) AND (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U866, sub_5191(), 14.00000000, 14.00000000, 14.00000000, 0 ))) AND (NOT sub_9910())) AND (NOT IS_MESSAGE_BEING_DISPLAYED())) AND (NOT (sub_9977( l_U846 )))) AND (l_U957)) AND (l_U928))
        {
            if (l_U959)
            {
                l_U972 = l_U973;
                l_U959 = 0;
            }
            if (l_U972 >= l_U973)
            {
                sub_10230( "C2_TARGET", ref l_U846, 6, 1 );
                l_U972 = 0.00000000;
                GENERATE_RANDOM_FLOAT_IN_RANGE( 9.00000000, 11.00000000, ref l_U973 );
            }
            else
            {
                l_U972 += 1.00000000 * TIMESTEP();
            }
        }
    }
    return;
}

int sub_9910()
{
    if ((g_U91._fU0 == 1007) || (g_U91._fU0 == 1008))
    {
        return 1;
    }
    return 0;
}

int sub_9977(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_10089( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_10089( "\n speech is not playing" );
    }
    return 0;
}

void sub_10089(unknown uParam0)
{
    return;
}

void sub_10230(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_10251( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3 );
}

void sub_10251(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_10305( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_10305(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_10327( iParam1 )))
    {
        return 0;
    }
    l_U0._fU384 = 0;
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
    sub_11003( ref g_U8395, ref l_U0 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_10327(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_10089( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_10089( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_10089( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_11003(int iParam0, int iParam1)
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

void sub_11258()
{
    int I;

    if ((IS_SNIPER_BULLET_IN_AREA( 1130, 556, -10, 1189, 589, 70 )) AND (NOT (IS_CHAR_IN_AREA_3D( sub_5191(), 1130, 556, -10, 1189, 589, 70, 0 ))))
    {
        for ( I = 0; I < l_U854; I++ )
        {
            if (NOT (IS_CHAR_INJURED( l_U854[I] )))
            {
                SET_SENSE_RANGE( l_U854[I], 150 );
                TASK_SET_IGNORE_WEAPON_RANGE_FLAG( l_U854[I], 1 );
            }
        }
        l_U962 = 1;
    }
    return;
}

void sub_11459()
{
    if (((((((((NOT (IS_CHAR_INJURED( l_U854[4] ))) AND (NOT (IS_CHAR_INJURED( l_U854[5] )))) AND (NOT (IS_CHAR_INJURED( l_U854[0] )))) AND (NOT (IS_CHAR_INJURED( l_U854[1] )))) AND (NOT (IS_CHAR_INJURED( l_U854[6] )))) AND (NOT (IS_CHAR_INJURED( l_U854[7] )))) AND (NOT (IS_CHAR_INJURED( l_U854[8] )))) AND (NOT (IS_CHAR_INJURED( l_U854[10] )))) AND (NOT (IS_CHAR_INJURED( l_U866 ))))
    {
        TASK_CHAT_WITH_CHAR( l_U854[4], l_U854[5], 1, 1 );
        TASK_CHAT_WITH_CHAR( l_U854[5], l_U854[4], 0, 1 );
        TASK_PLAY_ANIM_UPPER_BODY( l_U854[0], "car_chat", "MISScia2", 4.00000000, 1, 0, 0, 0, -1 );
        TASK_CHAT_WITH_CHAR( l_U854[1], l_U854[0], 1, 1 );
        TASK_CHAT_WITH_CHAR( l_U854[6], l_U854[8], 1, 1 );
        TASK_CHAT_WITH_CHAR( l_U854[8], l_U854[6], 0, 1 );
        TASK_PLAY_ANIM( l_U854[7], "GBGE_SMOKE", "MISScia2", 4.00000000, 1, 0, 0, 0, -1 );
        TASK_PLAY_ANIM( l_U854[10], "GBGE_SMOKE", "MISScia2", 4.00000000, 1, 0, 0, 0, -1 );
        TASK_PLAY_ANIM( l_U866, "GBGE_SMOKE", "MISScia2", 4.00000000, 1, 0, 0, 0, -1 );
    }
    l_U924 = 1;
    return;
}

void sub_12022(boolean bParam0)
{
    int I;

    if (NOT (IS_CHAR_INJURED( l_U866 )))
    {
        ADD_BLIP_FOR_CHAR( l_U866, ref l_U885 );
    }
    if (sub_2881())
    {
        sub_2917();
    }
    if (sub_2972())
    {
        sub_3008();
    }
    for ( I = 0; I < l_U854; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U854[I] )))
        {
            ADD_BLIP_FOR_CHAR( l_U854[I], ref l_U873[I] );
        }
    }
    sub_3256( "PD_ADAM", "PD_DIMAYEV", 0 );
    g_U64947 = 0;
    if (bParam0)
    {
        sub_12212();
        while (NOT (sub_12355( l_U822, "C2_CALL1", "C2AUD" )))
        {
            WAIT( 0 );
        }
        l_U958 = 1;
    }
    l_U957 = 1;
    return;
}

void sub_12212()
{
    if ((g_U555 == 1) || (g_U8394 == 4))
    {
        if (g_U91._fU60 != -1)
        {
            g_U15946[g_U91._fU60]._fU132._fU24 = 6;
        }
        if (IS_MOBILE_PHONE_CALL_ONGOING())
        {
            ABORT_SCRIPTED_CONVERSATION( 0 );
        }
        g_U91._fU376 = 0;
        g_U91._fU100 = 1;
    }
    return;
}

void sub_12355(unknown uParam0, unknown uParam1, unknown uParam2)
{
    char[12] cVar5;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown[2] uVar14;
    unknown uVar17;
    unknown uVar18;
    unknown uVar19;
    unknown uVar20;
    unknown uVar21;
    unknown uVar22;

    array(ref cVar5, 2);
    StrCopy( ref cVar5[0], uParam1, 16 );
    StrCopy( ref cVar5[1], "END", 16 );
    array(ref uVar14, 2);
    return sub_12413( uParam0, ref cVar5, uParam2, 0, ref uVar14, ref uVar14, "", 0, 1, 2, 1, 0, 0, 0 );
}

int sub_12413(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, unknown uParam9, unknown uParam10, boolean bParam11, unknown uParam12, unknown uParam13)
{
    int I;

    if (g_U91._fU540)
    {
        return 0;
    }
    sub_10089( "\n SETUP_AUDIO_PHONE_CALL has been called" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if (g_U8392 >= 6)
        {
            sub_10089( "\n scripted conversation is ongoing and priority is high" );
            return 0;
        }
    }
    if (NOT (IS_PLAYER_PLAYING( sub_5444() )))
    {
        sub_10089( "\n player is not playing" );
        return 0;
    }
    if ((IS_CHAR_IN_ANY_CAR( sub_5191() )) AND (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_5191() ))))
    {
        sub_10089( "\n player is in middle of getting in/out of a car" );
        return 0;
    }
    switch (g_U8394)
    {
        case 4:
        case 1:
        case 2:
        sub_10089( "\n speechControlStatus = SPEECH_CONTROL_STREAMING_MOBILE OR speechControlStatus = SPEECH_CONTROL_STREAMING_CONVERSATION" );
        return 0;
        break;
    }
    switch (uParam9)
    {
        case 0:
        if ((NOT sub_12928()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U91._fU60 = uParam0;
        g_U91._fU48 = 1;
        g_U15946[g_U91._fU60]._fU132._fU24 = 0;
        break;
        case 1:
        if (g_U91._fU368)
        {
            if ((g_U91._fU372) || (NOT bParam8))
            {
                sub_10089( "\n cellphone3Dstructure.missionAnsweredPhone OR (NOT missionCall)" );
                return 0;
            }
        }
        if (g_U91._fU60 != -1)
        {
            if ((g_U15946[g_U91._fU60]._fU132._fU24 != 5) AND (g_U15946[g_U91._fU60]._fU132._fU24 != 4))
            {
                g_U15946[g_U91._fU60]._fU132._fU24 = 0;
            }
        }
        g_U91._fU368 = 1;
        g_U91._fU372 = bParam8;
        uParam0 = g_U91._fU60;
        break;
        case 2:
        if ((NOT sub_12928()) AND (NOT bParam11))
        {
            return 0;
        }
        g_U91._fU60 = uParam0;
        g_U91._fU52 = 1;
        g_U91._fU56 = 1;
        g_U91._fU372 = 1;
        g_U91._fU368 = 1;
        g_U15946[g_U91._fU60]._fU132._fU24 = 0;
        break;
    }
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        ABORT_SCRIPTED_CONVERSATION( 0 );
    }
    sub_14300( uParam0, ref g_U91._fU176 );
    sub_15681( ref g_U91._fU160 );
    g_U91._fU380 = uParam10;
    g_U91._fU376 = bParam11;
    g_U91._fU420 = uParam12;
    g_U91._fU424 = -1;
    g_U91._fU364 = uParam3;
    StrCopy( ref g_U91._fU144, uParam2, 16 );
    for ( I = 0; I <= (g_U8499 - 1); I++ )
    {
        StrCopy( ref g_U8499[I], "END", 16 );
    }
    for ( I = 0; I <= ((uParam1^) - 1); I++ )
    {
        g_U8499[I] = {(uParam1^)[I]};
        sub_6096( "\n Telling phone we want to play these labels ", ref (uParam1^)[I] );
    }
    for ( I = 0; I <= (g_U91._fU260 - 1); I++ )
    {
        if (I < (uParam4^))
        {
            g_U91._fU260[I] = {(uParam4^)[I]};
        }
        else
        {
            StrCopy( ref g_U91._fU260[I], "", 16 );
        }
    }
    for ( I = 0; I <= (g_U91._fU312 - 1); I++ )
    {
        if (I < (uParam5^))
        {
            g_U91._fU312[I] = {(uParam5^)[I]};
        }
        else
        {
            StrCopy( ref g_U91._fU312[I], "", 16 );
        }
    }
    StrCopy( ref g_U91._fU208, uParam6, 16 );
    g_U91._fU80 = uParam7;
    g_U91._fU384 = 0;
    g_U91._fU532 = uParam13;
    g_U8394 = 4;
    return 1;
}

int sub_12928()
{
    if ((g_U91._fU48) || (g_U91._fU52))
    {
        return 0;
    }
    if (g_U91._fU40 == 0)
    {
        return 0;
    }
    if (NOT sub_12985())
    {
        return 0;
    }
    if (g_U555 == 1)
    {
        return 0;
    }
    return 1;
}

int sub_12985()
{
    boolean bVar2;
    unknown uVar3;

    bVar2 = false;
    if (NOT (IS_PLAYER_PLAYING( sub_5444() )))
    {
        sub_10089( "\n PHONE SCREEN CHECK - player is not playing." );
        return 0;
    }
    if (NETWORK_HAVE_SUMMONS())
    {
        sub_10089( "\n PHONE SCREEN CHECK - player has been summoned into another session." );
        return 0;
    }
    if (g_U91._fU376)
    {
        sub_10089( "\n PHONE CHECK - .cellphone3Dstructure.overrideCellphoneChecks is returning TRUE" );
        return 1;
    }
    if ((g_U91._fU100) || (g_U91._fU104))
    {
        sub_10089( "\n PHONE CHECK - .hideCellphone OR .disableCellphone are returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_5444() )))
    {
        if (NOT (IS_CHAR_IN_ANY_CAR( sub_5191() )))
        {
            GET_SCRIPT_TASK_STATUS( sub_5191(), 53, ref uVar3 );
            switch (uVar3)
            {
                case 7:
                case 2:
                sub_10089( "\n PHONE CHECK - player is not free for an ambient task and is not in a car)" );
                return 0;
                break;
                default:
                if (NOT (IS_CHAR_IN_WATER( sub_5191() )))
                {
                    bVar2 = true;
                }
                else
                {
                    sub_10089( "\n PHONE CHECK - player is in water" );
                    return 0;
                }
                break;
            }
        }
    }
    if ((CODE_WANTS_MOBILE_PHONE_REMOVED()) AND (NOT bVar2))
    {
        sub_10089( "\n PHONE CHECK - CODE_WANTS_MOBILE_PHONE_REMOVED() is returning TRUE." );
        return 0;
    }
    if (NOT (IS_PLAYER_SCRIPT_CONTROL_ON( sub_5444() )))
    {
        sub_10089( "\n PHONE CHECK - IS_PLAYER_SCRIPT_CONTROL_ON is returning FALSE." );
        return 0;
    }
    return 1;
}

void sub_14300(int iParam0, unknown uParam1)
{
    switch (iParam0)
    {
        case 0:
        StrCopy( (uParam1^), "ROMAN", 32 );
        break;
        case 1:
        StrCopy( (uParam1^), "VLAD", 32 );
        break;
        case 2:
        StrCopy( (uParam1^), "MICHELLE", 32 );
        break;
        case 3:
        StrCopy( (uParam1^), "JACOB", 32 );
        break;
        case 4:
        StrCopy( (uParam1^), "FAUSTIN", 32 );
        break;
        case 5:
        StrCopy( (uParam1^), "MANNY", 32 );
        break;
        case 6:
        StrCopy( (uParam1^), "ELIZABETA", 32 );
        break;
        case 7:
        StrCopy( (uParam1^), "DWAYNE", 32 );
        break;
        case 8:
        StrCopy( (uParam1^), "BRUCIE", 32 );
        break;
        case 9:
        StrCopy( (uParam1^), "PLAYBOY", 32 );
        break;
        case 10:
        StrCopy( (uParam1^), "KATE_MCREARY", 32 );
        break;
        case 11:
        StrCopy( (uParam1^), "FRANCIS_MCREARY", 32 );
        break;
        case 12:
        StrCopy( (uParam1^), "CIA_CHARACTER", 32 );
        break;
        case 13:
        StrCopy( (uParam1^), "PACKIE_MCREARY", 32 );
        break;
        case 14:
        StrCopy( (uParam1^), "RAY_BOCCINO", 32 );
        break;
        case 15:
        StrCopy( (uParam1^), "GERRY_MCREARY", 32 );
        break;
        case 16:
        StrCopy( (uParam1^), "DERRICK_MCREARY", 32 );
        break;
        case 18:
        StrCopy( (uParam1^), "BERNIE", 32 );
        break;
        case 19:
        StrCopy( (uParam1^), "BELL", 32 );
        break;
        case 22:
        StrCopy( (uParam1^), "JIMMY_PEGORINO", 32 );
        break;
        case 20:
        StrCopy( (uParam1^), "GRAVELLI", 32 );
        break;
        case 25:
        StrCopy( (uParam1^), "DIMITRI", 32 );
        break;
        case 26:
        StrCopy( (uParam1^), "MALLORIE", 32 );
        break;
        case 27:
        case 42:
        StrCopy( (uParam1^), "GRACIE", 32 );
        break;
        case 28:
        StrCopy( (uParam1^), "ALEX", 32 );
        break;
        case 29:
        StrCopy( (uParam1^), "KIKI", 32 );
        break;
        case 30:
        StrCopy( (uParam1^), "CARMEN", 32 );
        break;
        case 35:
        StrCopy( (uParam1^), "RECEPTIONIST_F", 32 );
        break;
        case 36:
        StrCopy( (uParam1^), "BLACKMAILER_M", 32 );
        break;
        case 37:
        StrCopy( (uParam1^), "TOM", 32 );
        break;
        case 38:
        StrCopy( (uParam1^), "REAL_BADMAN", 32 );
        break;
        case 39:
        StrCopy( (uParam1^), "BRIAN", 32 );
        break;
        case 40:
        StrCopy( (uParam1^), "PI_CHERISE", 32 );
        break;
        case 41:
        StrCopy( (uParam1^), "PI_ED_LOW", 32 );
        break;
        case 43:
        StrCopy( (uParam1^), "HOSSAN", 32 );
        break;
        case 44:
        StrCopy( (uParam1^), "PI_ILYENA", 32 );
        break;
        case 45:
        StrCopy( (uParam1^), "IVAN", 32 );
        break;
        case 46:
        StrCopy( (uParam1^), "PI_JEFF", 32 );
        break;
        case 47:
        StrCopy( (uParam1^), "PI_MARLENE", 32 );
        break;
        case 48:
        StrCopy( (uParam1^), "CLARENCE", 32 );
        break;
        case 49:
        StrCopy( (uParam1^), "PI_MEL", 32 );
        break;
        case 50:
        StrCopy( (uParam1^), "PATHOS", 32 );
        break;
        case 51:
        StrCopy( (uParam1^), "SARA", 32 );
        break;
        case 52:
        StrCopy( (uParam1^), "GORDON", 32 );
        break;
        case 53:
        StrCopy( (uParam1^), "DARKO_BREVIC", 32 );
        break;
        case 21:
        StrCopy( (uParam1^), "LAZLOW", 32 );
        break;
        case 17:
        StrCopy( (uParam1^), "FIXER", 32 );
        break;
        default:
        StrCopy( (uParam1^), "", 32 );
        if (iParam0 != 56)
        {
            ;
        }
        break;
    }
    return;
}

void sub_15681(unknown uParam0)
{
    StrCopy( (uParam0^), "NIKO", 16 );
    return;
}

void sub_16303()
{
    if (NOT (IS_CHAR_INJURED( l_U854[3] )))
    {
        GET_SCRIPT_TASK_STATUS( l_U854[3], 29, ref l_U825 );
        if (NOT (l_U825 == 1))
        {
            OPEN_SEQUENCE_TASK( ref l_U824 );
            TASK_PAUSE( 0, 3500 );
            TASK_GO_STRAIGHT_TO_COORD( 0, 1155.65100000, 571.49240000, 38.63570000, 2, -2 );
            TASK_ACHIEVE_HEADING( 0, 180 );
            TASK_PAUSE( 0, 5000 );
            TASK_GO_STRAIGHT_TO_COORD( 0, 1131.40200000, 571.52470000, 37.63070000, 2, -2 );
            TASK_ACHIEVE_HEADING( 0, 180 );
            CLOSE_SEQUENCE_TASK( l_U824 );
            TASK_PERFORM_SEQUENCE( l_U854[3], l_U824 );
            CLEAR_SEQUENCE_TASK( l_U824 );
        }
    }
    return;
}

void sub_16525()
{
    if (NOT (IS_CHAR_INJURED( l_U854[2] )))
    {
        GET_SCRIPT_TASK_STATUS( l_U854[2], 29, ref l_U825 );
        if (NOT (l_U825 == 1))
        {
            OPEN_SEQUENCE_TASK( ref l_U824 );
            TASK_GO_STRAIGHT_TO_COORD( 0, 1139.18200000, 559.85570000, 31.41670000, 2, -2 );
            TASK_ACHIEVE_HEADING( 0, 180 );
            TASK_PAUSE( 0, 5000 );
            TASK_GO_STRAIGHT_TO_COORD( 0, 1153.60100000, 559.36210000, 32.38670000, 2, -2 );
            TASK_ACHIEVE_HEADING( 0, 180 );
            TASK_PAUSE( 0, 4000 );
            CLOSE_SEQUENCE_TASK( l_U824 );
            TASK_PERFORM_SEQUENCE( l_U854[2], l_U824 );
            CLEAR_SEQUENCE_TASK( l_U824 );
        }
    }
    return;
}

void sub_16886()
{
    int I;

    for ( I = 0; I < l_U854; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U854[I] )))
        {
            sub_16935( I );
        }
    }
    GET_CHAR_COORDINATES( sub_5191(), ref l_U974, ref l_U975, ref l_U976 );
    sub_17236();
    if (l_U976 > 37.00000000)
    {
        sub_17606();
    }
    else
    {
        sub_18013();
    }
    l_U945 = 1;
    if (NOT l_U957)
    {
        sub_12022( 0 );
    }
    if (NOT (IS_CHAR_DEAD( sub_5191() )))
    {
        SET_PED_IS_BLIND_RAGING( sub_5191(), 1 );
    }
    l_U927 = 1;
    SETTIMERA( 0 );
    return;
}

void sub_16935(int iParam0)
{
    SET_CHAR_RELATIONSHIP_GROUP( l_U854[iParam0], 24 );
    SET_CHAR_RELATIONSHIP( l_U854[iParam0], 5, 0 );
    SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U854[iParam0], 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 1000, ref l_U968 );
    OPEN_SEQUENCE_TASK( ref l_U824 );
    TASK_PAUSE( 0, l_U968 );
    TASK_COMBAT( 0, sub_5191() );
    CLOSE_SEQUENCE_TASK( l_U824 );
    TASK_PERFORM_SEQUENCE( l_U854[iParam0], l_U824 );
    CLEAR_SEQUENCE_TASK( l_U824 );
    if (iParam0 == 7)
    {
        if (DOES_OBJECT_EXIST( l_U870 ))
        {
            DETACH_OBJECT( l_U870, 1 );
            MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U870 );
        }
    }
    if (iParam0 == 10)
    {
        if (DOES_OBJECT_EXIST( l_U871 ))
        {
            DETACH_OBJECT( l_U871, 1 );
            MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U871 );
        }
    }
    return;
}

void sub_17236()
{
    if (NOT (IS_CHAR_DEAD( l_U854[0] )))
    {
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U854[0], 1153.54200000, 565.59960000, 32.38560000, 9.00000000 );
    }
    if (NOT (IS_CHAR_DEAD( l_U854[1] )))
    {
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U854[1], 1160.22800000, 562.29610000, 32.38560000, 9.00000000 );
    }
    if (NOT (IS_CHAR_DEAD( l_U854[7] )))
    {
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U854[7], l_U889[7], 3.00000000 );
    }
    if (NOT (IS_CHAR_DEAD( l_U854[8] )))
    {
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U854[8], 1167.57000000, 580.59000000, 38.63570000, 3.00000000 );
    }
    if (NOT (IS_CHAR_DEAD( l_U854[9] )))
    {
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U854[9], 1136.46000000, 578.26000000, 38.63570000, 2.00000000 );
    }
    if ((NOT (IS_CHAR_DEAD( l_U854[3] ))) AND (NOT l_U953))
    {
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U854[3], 1136.19300000, 574.12220000, 38.63570000, 9.00000000 );
    }
    return;
}

void sub_17606()
{
    if (NOT (IS_CHAR_DEAD( l_U854[2] )))
    {
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U854[2], 1138.79400000, 565.23610000, 32.38560000, 9.00000000 );
    }
    if (NOT (IS_CHAR_DEAD( l_U854[4] )))
    {
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U854[4], 1146.81400000, 574.63420000, 38.63570000, 9.00000000 );
    }
    if (NOT (IS_CHAR_DEAD( l_U854[5] )))
    {
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U854[5], 1152.94300000, 578.50670000, 38.63570000, 9.00000000 );
    }
    if (NOT (IS_CHAR_DEAD( l_U854[10] )))
    {
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U854[10], 1160.81000000, 576.62000000, 38.63570000, 9.00000000 );
    }
    if (NOT (IS_CHAR_DEAD( l_U854[6] )))
    {
        SET_COMBAT_DECISION_MAKER( l_U854[6], l_U839 );
    }
    if (((((NOT (IS_CHAR_DEAD( l_U854[8] ))) AND (IS_CHAR_DEAD( l_U854[0] ))) AND (IS_CHAR_DEAD( l_U854[1] ))) AND (IS_CHAR_DEAD( l_U854[2] ))) AND (IS_CHAR_DEAD( l_U854[3] )))
    {
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U854[8], 1167.57000000, 580.59000000, 38.63570000, 10.00000000 );
    }
    return;
}

void sub_18013()
{
    if (NOT (IS_CHAR_DEAD( l_U854[4] )))
    {
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U854[4], 1144.25800000, 571.14220000, 38.63570000, 0.00000000 );
    }
    if (NOT (IS_CHAR_DEAD( l_U854[5] )))
    {
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U854[5], 1155.56800000, 571.11070000, 38.63570000, 0.00000000 );
    }
    if (NOT (IS_CHAR_DEAD( l_U854[6] )))
    {
        SET_COMBAT_DECISION_MAKER( l_U854[6], l_U840 );
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U854[6], 1169.33300000, 571.14220000, 38.63570000, 0.00000000 );
    }
    if (NOT (IS_CHAR_DEAD( l_U854[10] )))
    {
        SET_CHAR_SPHERE_DEFENSIVE_AREA( l_U854[10], 1160.97000000, 574.56000000, 38.63570000, 2.00000000 );
    }
    return;
}

int sub_19307()
{
    if ((((IS_CHAR_IN_MODEL( sub_5191(), 1911513875 )) || (IS_CHAR_IN_MODEL( sub_5191(), -488123221 ))) || (IS_CHAR_IN_MODEL( sub_5191(), 353883353 ))) || (IS_CHAR_IN_MODEL( sub_5191(), 837858166 )))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_19611()
{
    if (NOT (IS_CHAR_INJURED( l_U854[4] )))
    {
        if (NOT l_U963)
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U854[4], sub_5191(), 1 ))
            {
                SWITCH_PED_TO_RAGDOLL_WITH_FALL( l_U854[4], 1000, 2500, 0, 0.00000000, -1.00000000, 0.00000000, 31.58000000, 0, 0, 0, 0, 0, 0 );
                l_U963 = 1;
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U854[6] )))
    {
        if (NOT l_U964)
        {
            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U854[6], sub_5191(), 1 ))
            {
                SWITCH_PED_TO_RAGDOLL_WITH_FALL( l_U854[6], 1000, 2500, 0, 0.00000000, -1.00000000, 0.00000000, 35.20000000, 0, 0, 0, 0, 0, 0 );
                l_U964 = 1;
            }
        }
    }
    return;
}

void sub_19906()
{
    if (NOT (IS_CHAR_INJURED( l_U854[3] )))
    {
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U854[3], 1 );
        OPEN_SEQUENCE_TASK( ref l_U824 );
        TASK_PAUSE( 0, 1000 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1136.52900000, 570.63560000, 38.63570000, 3, -2, 1.00000000 );
        TASK_PAUSE( 0, 700 );
        TASK_ACHIEVE_HEADING( 0, 180 );
        TASK_CLIMB_LADDER( 0, 0 );
        CLOSE_SEQUENCE_TASK( l_U824 );
        TASK_PERFORM_SEQUENCE( l_U854[3], l_U824 );
        CLEAR_SEQUENCE_TASK( l_U824 );
    }
    l_U953 = 1;
    return;
}

int sub_20777(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    GET_GAME_TIMER( ref iVar4 );
    if ((iVar4 - (uParam1^)) > 500)
    {
        GET_BLIP_COLOUR( (uParam0^), ref iVar5 );
        if (iVar5 == 4)
        {
            CHANGE_BLIP_COLOUR( (uParam0^), 3 );
            GET_GAME_TIMER( uParam1 );
            return 1;
        }
        else
        {
            CHANGE_BLIP_COLOUR( (uParam0^), 1 );
            GET_GAME_TIMER( uParam1 );
            return 1;
        }
        break;
    }
    return 0;
}

void sub_20979(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;
    unknown uVar6;

    if (DOES_CHAR_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_DEAD( uParam0 )))
        {
            if (NOT (IS_CHAR_INJURED( uParam0 )))
            {
                if (NOT (IS_CHAR_INJURED( sub_5191() )))
                {
                    GET_SCRIPT_TASK_STATUS( uParam0, 29, ref iVar5 );
                    if (NOT (IS_CHAR_PLAYING_ANIM( uParam0, uParam2, uParam1 )))
                    {
                        if (NOT (iVar5 == 1))
                        {
                            if (NOT (IS_PED_RAGDOLL( uParam0 )))
                            {
                                OPEN_SEQUENCE_TASK( ref uVar6 );
                                TASK_LOOK_AT_CHAR( 0, sub_5191(), -2, 0 );
                                TASK_PLAY_ANIM( 0, uParam1, uParam2, 2.00000000, 1, 0, 0, 0, 0 );
                                CLOSE_SEQUENCE_TASK( uVar6 );
                                TASK_PERFORM_SEQUENCE( uParam0, uVar6 );
                                CLEAR_SEQUENCE_TASK( uVar6 );
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}

int sub_21632(boolean bParam0)
{
    unknown uVar3;

    if (g_U91._fU60 != -1)
    {
        switch (g_U15946[g_U91._fU60]._fU132._fU24)
        {
            case 0:
            case 3:
            case 4:
            case 5:
            return 0;
            break;
            default:
            if (g_U91._fU0 != 1000)
            {
                return 0;
            }
            break;
        }
    }
    if (bParam0)
    {
        GET_SCRIPT_TASK_STATUS( sub_5191(), 53, ref uVar3 );
        switch (uVar3)
        {
            case 7:
            case 2:
            return 1;
            break;
            default:
            sub_10089( "\n HAS_PHONE_CALL_ENDED - player is still using the phone" );
            return 0;
            break;
        }
    }
    return 1;
}

void sub_21966()
{
    sub_21975();
    TRIGGER_MISSION_COMPLETE_AUDIO( 60 );
    CLEAR_WANTED_LEVEL( sub_5444() );
    sub_33609( "PD_ADAM", "PD_DIMAYEV" );
    sub_33680( 11, 3 );
    sub_33763( l_U822, "C2_CALL2", "C2AUD", 0 );
    sub_2664( 1 );
    return;
}

void sub_21975()
{
    sub_21984();
    return;
}

void sub_21984()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_22002();
    sub_22061( iVar2, iVar3, iVar4 );
    return;
}

void sub_22002()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U816[I] = 4;
    }
    return;
}

void sub_22061(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 12;
    sub_22094( iVar5, uParam0, uParam1, uParam2, "Contact_13" );
    return;
}

void sub_22094(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
{
    int iVar7;
    int iVar8;
    char[64] cVar9;
    int iVar25;
    int iVar26;
    boolean bVar27;
    unknown uVar28;
    unknown uVar29;
    int iVar30;
    boolean bVar31;

    iVar7 = -1;
    iVar8 = -1;
    StrCopy( ref cVar9, "", 64 );
    if (bParam3)
    {
        if (g_U13391[iParam0]._fU80._fU0 == 0)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend mission", 64);
            sub_22190( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_22190( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU80._fU4;
    }
    else if (bParam2)
    {
        if (NOT g_U13391[iParam0]._fU160._fU80)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc mission", 64);
            sub_22190( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_22190( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_22190( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_22190( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_22767( iParam0, iVar7 );;;
    iVar25 = 0;
    if (bParam1)
    {
        g_U10981[iParam0]._fU24 = iVar7;
    }
    if (bParam2)
    {
        iVar25 = g_U13391[iParam0]._fU160._fU84;
    }
    if (bParam3)
    {
        g_U10981[iParam0]._fU144._fU8++;
        if ((NOT g_U10981[iParam0]._fU144._fU12) AND (g_U10981[iParam0]._fU144._fU8 >= g_U10981[iParam0]._fU144._fU4))
        {
            iVar26 = 0;
            GET_GAME_TIMER( ref iVar26 );
            g_U10981[iParam0]._fU144._fU16 = iVar26 + 60000;
        }
        if (g_U10981[iParam0]._fU144._fU8 == 1)
        {
            if (iParam0 == 3)
            {
                sub_23164( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_23164( 0, 4 );
            }
        }
    }
    if (NOT (sub_23253( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_5444(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_5444() );
    }
    sub_1761();
    bVar27 = true;
    uVar28 = sub_22767( iParam0, iVar7 );
    uVar29 = sub_1218( iParam0 );
    if (bParam1)
    {
        iVar30 = g_U13391[iParam0]._fU0._fU56;
        if ((iVar30 == 5) || (iVar30 == 6))
        {
            bVar27 = false;
        }
        if (NOT g_U0)
        {
            bVar31 = true;
            if (IS_BIT_SET( g_U26758[uVar28]._fU108, 2 ))
            {
                REGISTER_MISSION_PASSED( ref g_U9921 );
                sub_32629( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_33059();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_33144( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_33201( iParam0 );
                sub_33240( 0 );
                sub_1659( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_33348();
        }
    }
    if (bParam2)
    {
        sub_33059();
        sub_33436();
        sub_33240( 0 );
    }
    if (bParam3)
    {
        sub_33059();
        sub_33476();
        sub_33240( 0 );
        sub_1659( uVar29, 0 );
    }
    sub_1105();
    return;
}

void sub_22190(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_22767(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_1617( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
    }
    uVar4 = g_U32640[iParam0]._fU0;
    iVar5 = g_U32640[iParam0]._fU4;
    for ( Result = uVar4; Result <= iVar5; Result++ )
    {
        if (g_U26758[Result]._fU4 == iParam1)
        {
            return Result;
        }
    }
    return -1;
}

void sub_23164(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_23253(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_23461( uParam1 );
        break;
        case 1:
        bVar8 = sub_25539( uParam1 );
        break;
        case 2:
        bVar8 = sub_25765( uParam1 );
        break;
        case 3:
        bVar8 = sub_25915( uParam1 );
        break;
        case 4:
        bVar8 = sub_26193( uParam1 );
        break;
        case 5:
        bVar8 = sub_26496( uParam1 );
        break;
        case 6:
        bVar8 = sub_26695( uParam1 );
        break;
        case 7:
        bVar8 = sub_26921( uParam1 );
        break;
        case 8:
        bVar8 = sub_27156( uParam1 );
        break;
        case 9:
        bVar8 = sub_27531( uParam1 );
        break;
        case 10:
        bVar8 = sub_27778( uParam1 );
        break;
        case 11:
        bVar8 = sub_27917( uParam1 );
        break;
        case 12:
        bVar8 = sub_28216( uParam1 );
        break;
        case 13:
        bVar8 = sub_28444( uParam1 );
        break;
        case 14:
        bVar8 = sub_28731( uParam1 );
        break;
        case 15:
        bVar8 = sub_29013( uParam1 );
        break;
        case 16:
        bVar8 = sub_29295( uParam1 );
        break;
        case 17:
        bVar8 = sub_29496( uParam1 );
        break;
        case 18:
        bVar8 = sub_29569( uParam1 );
        break;
        case 19:
        bVar8 = sub_29783( uParam1 );
        break;
        case 20:
        bVar8 = sub_30036( uParam1 );
        break;
        case 21:
        bVar8 = sub_30283( uParam1 );
        break;
        case 22:
        bVar8 = sub_30484( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_25144( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_22767( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_30807( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_23461(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_23740( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_23740( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_23740( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_23740( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_23740( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_23740( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_23740( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_23740( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_23740( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_23740( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_23740( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_23740( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_23740( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_23740( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_23740( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_23740( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_23740( iVar3, 0, 3, 1, 0, 0 );
        break;
        case 3:
        case 30:
        case 14:
        case 37:
        case 18:
        case 19:
        case 17:
        case 21: break;
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 28:
        sub_23740( iVar3, 0, sub_25022(), sub_25288(), 0, 0 );
        break;
        default:
        sub_25447( "Friend 1", 1 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25447( "Friend 1", 0 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_23740(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_23751( uParam1 );
    sub_23925( uParam0, 0, uParam2 );
    sub_23925( uParam0, 1, uParam3 );
    sub_23925( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_22002();
    return;
}

void sub_23751(unknown uParam0)
{
    ADD_SCORE( sub_5444(), uParam0 );
    sub_23776( uParam0 );
    return;
}

void sub_23776(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1617( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_23925(unknown uParam0, int iParam1, int iParam2)
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
        sub_24082( uParam0 );
    }
    return;
}

void sub_24082(unknown uParam0)
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

int sub_25022()
{
    switch (l_U816[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_25144( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_25144(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_25288()
{
    switch (l_U816[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_25144( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_25447(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_25539(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_23740( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_23740( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_23740( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_23740( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_25447( "Contact 2", 1 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25447( "Contact 2", 0 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_25765(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_23740( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_25447( "Girl 3", 1 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25447( "Girl 3", 0 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_25915(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_23740( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_23740( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_23740( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_23740( iVar3, 0, sub_25022(), sub_25288(), 0, 0 );
        break;
        default:
        sub_25447( "Friend 4", 1 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25447( "Friend 4", 0 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_26193(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_23740( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_23740( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_23740( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_23740( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_23740( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_23740( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_23740( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_25447( "Contact 5", 1 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25447( "Contact 5", 0 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_26496(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_23740( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_23740( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_23740( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_25447( "Contact 7", 1 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25447( "Contact 7", 0 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_26695(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_23740( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_23740( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_23740( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_23740( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_25447( "Contact 7b", 1 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25447( "Contact 7b", 0 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_26921(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_23740( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_23740( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_23740( iVar3, 0, sub_25022(), sub_25288(), 0, 0 );
        break;
        default:
        sub_25447( "Friend 8", 1 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25447( "Friend 8", 0 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_27156(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    int iVar5;

    iVar3 = 8;
    bVar4 = false;
    iVar5 = 500;
    switch (uParam0)
    {
        case 0:
        sub_23740( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_23740( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_23740( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_23740( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_23740( iVar3, iVar5, 3, 1, 0, 0 );
        INCREMENT_INT_STAT_NO_MESSAGE( 109, iVar5 );
        break;
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        sub_23740( iVar3, 0, sub_25022(), sub_25288(), 0, 0 );
        break;
        default:
        sub_25447( "Friend 9", 1 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25447( "Friend 9", 0 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_27531(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 9;
    iVar4 = 7;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_23740( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_23740( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_23740( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_23740( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_25447( "Contact 10", 1 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_25447( "Contact 10", 0 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_27778(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_23740( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_25447( "Girl 11", 1 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25447( "Girl 11", 0 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_27917(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_23740( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_23740( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_23740( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_23740( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_23740( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_23740( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_25447( "Contact 12", 1 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25447( "Contact 12", 0 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_28216(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_23740( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_23740( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_23740( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_23740( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_25447( "Contact 13", 1 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25447( "Contact 13", 0 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_28444(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_23740( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_23740( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_23740( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_23740( iVar3, 0, sub_25022(), sub_25288(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_25447( "Friend 15", 1 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25447( "Friend 15", 0 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_28731(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_23740( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_23740( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_23740( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_23740( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_23740( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_23740( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_25447( "Contact 16", 1 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25447( "Contact 16", 0 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_29013(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_23740( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_23740( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_23740( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_23740( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_23740( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_25447( "Contact 18", 1 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25447( "Contact 18", 0 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_29295(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_23740( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_23740( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_23740( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_25447( "Contact 19", 1 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25447( "Contact 19", 0 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_29496(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_25447( "Girl 20", 0 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_29569(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_23740( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_23740( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_23740( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_25447( "Contact 21", 1 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25447( "Contact 21", 0 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_29783(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_23740( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_23740( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_23740( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_23740( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_23740( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_25447( "Contact 22", 1 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25447( "Contact 22", 0 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_30036(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_23740( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_23740( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_23740( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_23740( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_25447( "Contact 24", 1 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25447( "Contact 24", 0 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_30283(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_23740( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_23740( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_23740( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_25447( "Contact 25", 1 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_25447( "Contact 25", 0 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_30484(unknown uParam0)
{
    int iVar3;
    int iVar4;
    boolean bVar5;

    iVar3 = 22;
    iVar4 = 8;
    bVar5 = false;
    switch (uParam0)
    {
        case 0:
        sub_23740( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_25447( "Girl 26", 1 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_25447( "Girl 26", 0 );
        sub_23740( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_30807(int iParam0, int iParam1)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (iParam1 == -1)
    {
        return;
    }
    if (sub_30855( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_31586( iParam1 );
    }
    return;
}

int sub_30855(int iParam0, int iParam1)
{
    int iVar4;
    boolean bVar5;
    int iVar6;

    if (g_U0)
    {
        return 0;
    }
    if (iParam0 == -1)
    {
        return 0;
    }
    if (iParam1 == -1)
    {
        return 0;
    }
    iVar4 = g_U13391[iParam1]._fU0._fU56;
    bVar5 = iVar4 == 6;
    if (bVar5)
    {
        return 0;
    }
    iVar6 = 0;
    if (NOT (IS_BIT_SET( g_U26758[iParam0]._fU108, 3 )))
    {
        iVar6 = g_U26758[iParam0]._fU104;
        if (iVar6 > 0)
        {
            sub_30995( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_30995(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_31177( 0 );
    return;
}

void sub_31177(boolean bParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;
    float fVar6;
    boolean bVar7;
    int I;

    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    fVar6 = 0.00000000;
    bVar7 = true;
    I = 0;
    for ( I = 0; I < 8; I++ )
    {
        if (g_U32871[I]._fU4 == g_U32871[I]._fU0)
        {
            fVar4 = g_U32871[I]._fU8;
        }
        else
        {
            bVar7 = false;
            fVar5 = TO_FLOAT( g_U32871[I]._fU0 );
            fVar6 = TO_FLOAT( g_U32871[I]._fU4 );
            fVar4 = (fVar6 / fVar5) * g_U32871[I]._fU8;
        }
        fVar3 += fVar4;
    }
    if (fVar3 > 100.00000000)
    {
        fVar3 = 99.99000000;
    }
    if (bVar7)
    {
        fVar3 = 100.00000000;
    }
    SET_FLOAT_STAT( 0, fVar3 );
    if (bVar7)
    {
        sub_31432();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_31432()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_31586(int iParam0)
{
    float fVar3;
    float fVar4;
    float fVar5;

    if (g_U0)
    {
        return;
    }
    if (iParam0 == -1)
    {
        return;
    }
    if (g_U13334[iParam0]._fU0 == 0)
    {
        return;
    }
    fVar3 = 0.00000000;
    fVar4 = 0.00000000;
    fVar5 = 0.00000000;
    if (g_U13334[iParam0]._fU4 == g_U13334[iParam0]._fU0)
    {
        fVar3 = 100.00000000;
    }
    else
    {
        fVar4 = TO_FLOAT( g_U13334[iParam0]._fU0 );
        fVar5 = TO_FLOAT( g_U13334[iParam0]._fU4 );
        fVar3 = fVar5 / fVar4;
        fVar3 *= 100.00000000;
    }
    switch (iParam0)
    {
        case 0:
        sub_31919( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_31919( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_31919( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_31919( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_31919( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_31919( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_31919( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_31919( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_31919( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_31919( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_31919( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_31919( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_31919( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_31919( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_31919( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_31919( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_31919( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_31919( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_31919( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_31919(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_32629(unknown uParam0, unknown uParam1)
{
    sub_32648( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_32648(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
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
    unknown uVar21;

    switch (uParam0)
    {
        case 0:
        PLAYSTATS_INT( "SPRUNK_BOUGHT", uParam1 );
        break;
        case 1:
        PLAYSTATS_INT( "HOTDOG_BOUGHT", uParam1 );
        break;
        case 2:
        PLAYSTATS_INT( "NUTS_BOUGHT", uParam1 );
        break;
        case 3:
        PLAYSTATS_INT( "BURGERS_BOUGHT", uParam1 );
        break;
        case 7:
        PLAYSTATS_INT( "DONATE_BEGGAR", uParam1 );
        break;
        case 8:
        PLAYSTATS_INT( "DONATE_BUSKER", uParam1 );
        break;
        case 4:
        PLAYSTATS_INT( "BSHOT_BOUGHT", uParam1 );
        break;
        case 5:
        PLAYSTATS_INT( "CBELL_BOUGHT", uParam1 );
        break;
        case 6:
        PLAYSTATS_INT( "CAFE_BOUGHT", uParam1 );
        break;
        case 9: break;
    }
    return;
}

void sub_33059()
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

int sub_33144(int iParam0, int iParam1)
{
    if (iParam0 == 0)
    {
        if (iParam1 == 20)
        {
            return 1;
        }
    }
    return 0;
}

void sub_33201(unknown uParam0)
{
    sub_1004();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_33240(unknown uParam0)
{
    if (g_U9385)
    {
        g_U9385 = 0;
        return;
    }
    g_U9380._fU0 = 1;
    g_U9380._fU4 = uParam0;
    g_U9380._fU8 = 0;
    g_U9380._fU12 = 0;
    g_U9380._fU16 = 0;
    return;
}

void sub_33348()
{
    sub_33357();
    return;
}

void sub_33357()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_33436()
{
    sub_33357();
    return;
}

void sub_33476()
{
    sub_33357();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

void sub_33609(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = sub_3996( uParam0, uParam1 );
    if (iVar4 != -1)
    {
        g_U2273[iVar4]._fU180 = 1;
        g_U2273[iVar4]._fU212 = 1;
    }
    return;
}

void sub_33680(int iParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = iParam0 mod 1000;
    SET_BITS_IN_RANGE( ref g_U1502[iVar4 / 16], (iVar4 mod 16) * 2, ((iVar4 mod 16) * 2) + 1, uParam1 );
    return;
}

void sub_33763(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    char[12] cVar6;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    array(ref cVar6, 2);
    StrCopy( ref cVar6[0], uParam1, 16 );
    StrCopy( ref cVar6[1], "END", 16 );
    sub_33807( uParam0, ref cVar6, uParam2, 10000, uParam3, 0 );
    return;
}

void sub_33807(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    unknown uVar8;
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
    int I;
    int iVar38;

    array(ref uVar8._fU32, 5);
    ref uVar8;
    iVar38 = uVar8._fU32;
    if (NOT (IS_THREAD_ACTIVE( g_U812 )))
    {
        uVar8._fU12 = uParam0;
        if ((uParam1^) > iVar38)
        {
            SCRIPT_ASSERT( "TELL SIMON END CALL ARRAY SIZE NEEDS INCREASING" );
            return;
        }
        for ( I = 0; I <= ((uParam1^) - 1); I++ )
        {
            uVar8._fU32[I] = {(uParam1^)[I]};
        }
        if ((uParam1^) < iVar38)
        {
            StrCopy( ref uVar8._fU32[(uParam1^)], "END", 16 );
        }
        StrCopy( ref uVar8._fU16, uParam2, 16 );
        uVar8._fU0 = uParam3;
        uVar8._fU4 = uParam4;
        uVar8._fU8 = uParam5;
        REQUEST_SCRIPT( "SPcellphoneEndCall" );
        while (NOT (HAS_SCRIPT_LOADED( "SPcellphoneEndCall" )))
        {
            REQUEST_SCRIPT( "SPcellphoneEndCall" );
            WAIT( 0 );
        }
        g_U811 = 1;
        g_U812 = START_NEW_SCRIPT_WITH_ARGS( "SPcellphoneEndCall", ref uVar8, 29, 1024 );
        MARK_SCRIPT_AS_NO_LONGER_NEEDED( "SPcellphoneEndCall" );
    }
    else
    {
        SCRIPT_ASSERT( "MAKE_END_OF_MISSION_CALL() has been called more than once, might be in a loop" );
    }
    return;
}

void sub_34416()
{
    if (l_U947)
    {
        if (NOT (IS_CHAR_IN_AREA_2D( sub_5191(), 1103, 480, 1231, 613, 0 )))
        {
            SET_WANTED_MULTIPLIER( 1.00000000 );
            SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
            SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
            SET_PARKED_CAR_DENSITY_MULTIPLIER( 1.00000000 );
            l_U947 = 0;
        }
    }
    else if (IS_CHAR_IN_AREA_2D( sub_5191(), 1103, 480, 1231, 613, 0 ))
    {
        SET_WANTED_MULTIPLIER( 0.00000000 );
        SET_PED_DENSITY_MULTIPLIER( 0.10000000 );
        SET_CAR_DENSITY_MULTIPLIER( 0.10000000 );
        SET_PARKED_CAR_DENSITY_MULTIPLIER( 0.10000000 );
        l_U947 = 1;
    }
    return;
}

int sub_34650(unknown uParam0, unknown uParam1)
{
    if ((COMPARE_STRING( ref g_U2273[g_U8085]._fU16, uParam0 )) AND (COMPARE_STRING( ref g_U2273[g_U8085]._fU0, uParam1 )))
    {
        return 1;
    }
    return 0;
}

void sub_34731()
{
    if (sub_2972())
    {
        l_U925 = 1;
        g_U64948 = 1;
        WAIT( 0 );
        while ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "policetest" )) > 0)
        {
            WAIT( 0 );
        }
        CLEAR_HELP();
        g_U64947 = 0;
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_5191(), 1148.05800000, 558.10720000, 32.95150000, 90.00000000, 90.00000000, 90.00000000, 0 )))
        {
            PRINT_NOW( "CIA2_SEARCH4", 7500, 0 );
        }
        sub_3408( ref l_U826, 1 );
        l_U833 = 5;
    }
    return;
}

void sub_35009(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU20 = uParam1;
    return;
}

void sub_35040(int iParam0, unknown uParam1)
{
    ref iParam0->_fU0->_fU16 = uParam1;
    return;
}

void sub_35075(int iParam0, unknown uParam1)
{
    sub_4608( uParam1, 6, iParam0 + 0 );
    return;
}

int sub_35108(int iParam0)
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
        if (NOT sub_35178())
        {
            sub_2085( 0 );
        }
    }
    if (iParam0->_fU24 != -1)
    {
        return 0;
    }
    iVar9 = sub_35305( iParam0->_fU0 );
    if (iVar9 != -1)
    {
        sub_2085( iVar9 );
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
                ConcatString(ref cVar5, sub_1799( 0, iParam0->_fU0 ), 16);
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
        else if ((sub_1799( 4, g_U569[I] )) == 0)
        {
            iVar4++;
        }
    }
    SET_MESSAGES_WAITING( 1 );
    return 1;
}

int sub_35178()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_1799( 1, g_U569[I] )) != 0) AND (g_U569[I]._fU20))
        {
            sub_2085( I );
            return 1;
        }
    }
    return 0;
}

int sub_35305(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    int Result;

    for ( Result = 0; Result <= (g_U569 - 1); Result++ )
    {
        if (g_U569[Result]._fU0[0] != -1)
        {
            if (sub_3461( uParam0, g_U569[Result] ))
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

int sub_35808(int iParam0)
{
    int I;

    if (iParam0->_fU24 >= 0)
    {
        for ( I = iParam0->_fU24; I >= 0; I += -1 )
        {
            if (sub_3461( iParam0->_fU0, g_U569[I] ))
            {
                iParam0->_fU24 = I;
                return sub_1799( 4, g_U569[I] );
            }
        }
        iParam0->_fU24 = -2;
    }
    return 6;
}

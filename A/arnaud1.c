void main()
{
    l_U0 = 86.00000000;
    l_U1 = 274.00000000;
    l_U2 = 0;
    l_U3 = 1;
    l_U4 = 3;
    l_U105 = 0;
    l_U106 = 0;
    l_U107 = 0;
    l_U108 = 0;
    l_U109 = 0;
    l_U110 = 0;
    l_U138 = 10.00000000;
    l_U139 = 15.00000000;
    l_U159 = 0;
    l_U160 = 0;
    l_U161 = 0;
    l_U162 = 0;
    l_U163 = 0;
    l_U164 = 0;
    l_U165 = 0;
    l_U166 = 0;
    l_U167 = 0;
    l_U168 = 0;
    l_U169 = 0;
    l_U170 = 0;
    l_U171 = 0;
    l_U172 = 0;
    l_U173 = 0;
    l_U174 = 0;
    l_U175 = 0;
    l_U176 = 0;
    l_U177 = 0;
    l_U178 = {-65.59000000, -74.01000000, 13.76000000};
    l_U181 = 274.96990000;
    l_U182 = 3.33800000;
    l_U189 = {15.71170000, -448.27150000, 16.91800000};
    l_U192 = {15.00000000, -453.00000000, 20.00000000};
    l_U195 = 1;
    l_U198 = 10000;
    l_U203 = 0;
    l_U218 = 13;
    l_U219 = 1;
    l_U220 = 0;
    l_U222 = 0;
    l_U225 = 0;
    l_U226 = 0;
    l_U227 = 0;
    l_U228 = 0;
    l_U229 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_381();
    }
    if (sub_1408( l_U218, l_U195 ))
    {
        if (IS_PLAYER_PLAYING( sub_2084() ))
        {
            if (NOT (IS_WANTED_LEVEL_GREATER( sub_2084(), 0 )))
            {
                while (true)
                {
                    WAIT( 0 );
                    if (NOT l_U167)
                    {
                        if (IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
                        {
                            if (IS_SCORE_GREATER( sub_2084(), 1 ))
                            {
                                if (sub_2201())
                                {
                                    WAIT( 0 );
                                }
                                else if (g_U12379)
                                {
                                    sub_381();
                                }
                                sub_2389( ref l_U156 );
                                if (NOT sub_2470())
                                {
                                    sub_381();
                                }
                                switch (l_U226)
                                {
                                    case 0:
                                    sub_2555();
                                    break;
                                    case 1:
                                    sub_5070();
                                    break;
                                }
                            }
                            else
                            {
                                sub_381();
                            }
                        }
                        else
                        {
                            sub_381();
                        }
                        sub_10244();
                    }
                    if (l_U167)
                    {
                        switch (l_U227)
                        {
                            case 0:
                            sub_10360();
                            break;
                            default:
                        }
                    }
                }
            }
            else if (NOT (IS_CHAR_IN_ANY_CAR( sub_2210() )))
            {
                if (sub_5318() < 25)
                {
                    PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                }
            }
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U154, 0, 0, 0 );
            }
            sub_381();;
        }
        else
        {
            TERMINATE_THIS_SCRIPT();
        }
    }
    else
    {
        TERMINATE_THIS_SCRIPT();
    }
    return;
}

void sub_381()
{
    if (sub_400( l_U218, l_U195 ))
    {
        sub_490( l_U218, l_U195 );
        SWITCH_ROADS_BACK_TO_ORIGINAL( l_U192._fU0 - 10.00000000, l_U192._fU4 - 38.00000000, l_U192._fU8 - 30.00000000, l_U192._fU0 + 10.00000000, l_U192._fU4 + 38.00000000, l_U192._fU8 + 30.00000000 );
        if (sub_1047( l_U212 ))
        {
            sub_1231( ref l_U212, 1 );
        }
        if (DOES_OBJECT_EXIST( l_U224 ))
        {
            DELETE_OBJECT( ref l_U224 );
        }
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

int sub_400(int iParam0, int iParam1)
{
    if (NOT g_U30318._fU4)
    {
        return 0;
    }
    if (NOT (g_U30318._fU8 == iParam0))
    {
        return 0;
    }
    if (NOT (g_U30318._fU12 == iParam1))
    {
        return 0;
    }
    return 1;
}

void sub_490(unknown uParam0, unknown uParam1)
{
    if (NOT (sub_400( uParam0, uParam1 )))
    {
        sub_578( "Interactions_Ended: Interaction for this character not active" );
        return;
    }
    sub_607();
    if (g_U819)
    {
        sub_689();
    }
    else
    {
        sub_818();
    }
    g_U12379 = 0;
    return;
}

void sub_578(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_607()
{
    if (g_U0)
    {
        g_U30318._fU0 = 0;
    }
    else
    {
        g_U30318._fU0 = 1;
    }
    g_U30318._fU4 = 0;
    g_U30318._fU8 = 34;
    g_U30318._fU12 = 0;
    return;
}

void sub_689()
{
    if (COMPARE_STRING( ref g_U10966, "RIPASS" ))
    {
        StrCopy( ref g_U10966, "", 16 );
        return;
    }
    sub_735();
    return;
}

void sub_735()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_818()
{
    if (COMPARE_STRING( ref g_U10966, "RIPASS" ))
    {
        StrCopy( ref g_U10966, "", 16 );
        return;
    }
    sub_864();
    return;
}

void sub_864()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

int sub_1047(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8867 == 1)) || (g_U8867 == 2))
    {
        if (uParam0._fU4 == g_U8866)
        {
            return 1;
        }
        else
        {
            sub_1159( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_1159( "\n speech is not playing" );
    }
    return 0;
}

void sub_1159(unknown uParam0)
{
    return;
}

void sub_1231(int iParam0, unknown uParam1)
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

void sub_1408(unknown uParam0, unknown uParam1)
{
    if (sub_1417())
    {
        return 0;
    }
    return sub_1464( uParam0, uParam1 );
}

int sub_1417()
{
    if (g_U560 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_1464(unknown uParam0, int iParam1)
{
    unknown uVar4;

    uVar4 = sub_1475( uParam0 );
    if (NOT g_U30318._fU0)
    {
        return 0;
    }
    if (g_U12379)
    {
        return 0;
    }
    if (g_U0)
    {
        return 1;
    }
    if (NOT g_U30257[uVar4]._fU0)
    {
        return 0;
    }
    if (NOT g_U30257[uVar4]._fU4)
    {
        return 0;
    }
    if (IS_BIT_SET( g_U10938._fU0, 2 ))
    {
        return 0;
    }
    if (NOT g_U30257[uVar4]._fU24)
    {
        if (sub_1756( g_U30257[uVar4]._fU8 ))
        {
            g_U30257[uVar4]._fU24 = 1;
        }
    }
    if (NOT g_U30257[uVar4]._fU24)
    {
        return 0;
    }
    if (g_U30257[uVar4]._fU28 == iParam1)
    {
        return 1;
    }
    return 0;
}

int sub_1475(unknown uParam0)
{
    int iVar3;

    if (NOT (sub_1486( uParam0 )))
    {
        sub_578( "Not a genuine RI Character ID - Tell Keith" );
        return 0;
    }
    iVar3 = uParam0;
    return iVar3 - 13;
}

int sub_1486(unknown uParam0)
{
    int iVar3;
    int iVar4;

    iVar3 = uParam0;
    if (NOT (iVar3 >= 13))
    {
        return 0;
    }
    iVar4 = 16;
    if (NOT (iVar3 < iVar4))
    {
        return 0;
    }
    return 1;
}

int sub_1756(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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
    if (sub_1925( iVar6, iVar7, uParam0._fU0._fU0, uParam0._fU0._fU4, 180 ))
    {
        return 1;
    }
    return 0;
}

int sub_1925(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
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

void sub_2084()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

int sub_2201()
{
    if (IS_CHAR_IN_ANY_CAR( sub_2210() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2210(), ref l_U155 );
        if (NOT (l_U155 == nil))
        {
            if (IS_VEH_DRIVEABLE( l_U155 ))
            {
                GET_CAR_SPEED( l_U155, ref l_U204 );
                if (l_U204 > 15)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

void sub_2210()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

int sub_2389(unknown uParam0)
{
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2210() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2210(), uParam0 );
        if (NOT ((uParam0^) == nil))
        {
            if (IS_VEH_DRIVEABLE( (uParam0^) ))
            {
                return 1;
            }
        }
    }
    return 0;
}

int sub_2470()
{
    int iVar2;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    if (iVar2 < g_U22959)
    {
        return 0;
    }
    return 1;
}

void sub_2555()
{
    switch (l_U225)
    {
        case 0:
        REQUEST_MODEL( sub_2593( 13 ) );
        while (NOT (HAS_MODEL_LOADED( sub_2593( 13 ) )))
        {
            WAIT( 0 );
        }
        REQUEST_MODEL( -268530289 );
        while (NOT (HAS_MODEL_LOADED( -268530289 )))
        {
            WAIT( 0 );
        }
        REQUEST_ANIMS( "MISSRAND_PEDSARNAUD" );
        while (NOT (HAVE_ANIMS_LOADED( "MISSRAND_PEDSARNAUD" )))
        {
            WAIT( 0 );
        }
        l_U225 = 1;
        break;
        case 1:
        if (NOT l_U159)
        {
            CLEAR_AREA( l_U178._fU0, l_U178._fU4, l_U178._fU8, 2.50000000, 1 );
            sub_3273( 13, ref l_U154, l_U178._fU0, l_U178._fU4, l_U178._fU8, l_U181 );
            SET_CHAR_NEVER_TARGETTED( l_U154, 1 );
            SET_CHAR_CANT_BE_DRAGGED_OUT( l_U154, 1 );
            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U154, 1 );
            SET_PED_DONT_DO_EVASIVE_DIVES( l_U154, 1 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( sub_2593( 13 ) );
            l_U159 = 1;
            l_U172 = 1;
            CREATE_OBJECT( -268530289, l_U178._fU0, l_U178._fU4, l_U178._fU8, ref l_U224, 1 );
            ATTACH_OBJECT_TO_PED( l_U224, l_U154, 1232, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0.00000000, 0 );
            MARK_MODEL_AS_NO_LONGER_NEEDED( -268530289 );
            GET_GAME_TIMER( ref l_U202 );
        }
        if (NOT (DOES_BLIP_EXIST( l_U205 )))
        {
            ADD_BLIP_FOR_CHAR( l_U154, ref l_U205 );
            CHANGE_BLIP_SPRITE( l_U205, 63 );
            SET_BLIP_AS_FRIENDLY( l_U205, 1 );
            CHANGE_BLIP_SCALE( l_U205, 1.00000000 );
            CHANGE_BLIP_DISPLAY( l_U205, 2 );
        }
        if (NOT (IS_CHAR_INJURED( l_U154 )))
        {
            TASK_PLAY_ANIM( l_U154, "Stand_Idle", "MISSRAND_PEDSARNAUD", 8.00000000, 1, 0, 0, 0, 0 );
        }
        sub_4717( "ROM1AUD", 9 );
        sub_4717( "ARN01", 10 );
        sub_4890( 1, l_U154, "ARNAUD", 0 );
        GET_GAME_TIMER( ref l_U201 );
        l_U226 = 1;
        break;
    }
    return;
}

int sub_2593(unknown uParam0)
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
    sub_578( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_3273(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( sub_3284( uParam0 ), sub_2593( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    sub_3330( uParam0, (uParam1^) );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_3364( uParam0, (uParam1^) );
    return;
}

int sub_3284(unknown uParam0)
{
    return 25;
}

void sub_3330(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_3364(unknown uParam0, unknown uParam1)
{
    sub_3376( ref uParam1, uParam0 );
    return;
}

void sub_3376(unknown uParam0, int iParam1)
{
    sub_3387( uParam0 );
    if (iParam1 == 37)
    {
        sub_3489( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_4073( (uParam0^), iParam1, g_U42825[iParam1] );
    }
    return;
}

void sub_3387(unknown uParam0)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    return;
}

void sub_3489(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_4073(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        sub_3489( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
        case 1:
        sub_3489( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, 0 );
        return;
        case 31:
        sub_3489( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
        return;
        case 7:
        sub_3489( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_3489( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_4717(unknown uParam0, unknown uParam1)
{
    boolean bVar4;

    bVar4 = true;
    while (bVar4)
    {
        if (NOT (HAS_THIS_ADDITIONAL_TEXT_LOADED( uParam0, uParam1 )))
        {
            if (NOT sub_4753())
            {
                REQUEST_ADDITIONAL_TEXT( uParam0, uParam1 );
            }
            WAIT( 0 );
        }
        else
        {
            bVar4 = false;
        }
    }
    return;
}

int sub_4753()
{
    int I;

    for ( I = 0; I <= (14 - 1); I++ )
    {
        if (IS_STREAMING_ADDITIONAL_TEXT( I ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_4890(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U6._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U6._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_4970( "\n PED NUMBER ", uParam0 );
    sub_5010( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_4970(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5010(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_5070()
{
    if ((IS_CHAR_INJURED( l_U154 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U154, sub_2210(), 0 )))
    {
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U154, 0, 0, 0 );
        }
        sub_381();
    }
    switch (l_U228)
    {
        case 0:
        if (((((IS_CHAR_INJURED( l_U154 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U154, sub_2210(), 0 ))) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_2084(), l_U154 ))) || (IS_CHAR_ON_FIRE( l_U154 ))) || (IS_WANTED_LEVEL_GREATER( sub_2084(), 0 )))
        {
            if (IS_WANTED_LEVEL_GREATER( sub_2084(), 0 ))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_2210() )))
                {
                    if (sub_5318() < 25)
                    {
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
            }
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U154, 0, 0, 0 );
            }
            sub_381();
        }
        if (NOT (IS_CHAR_INJURED( l_U154 )))
        {
            if ((sub_5318() < 18) AND (IS_CHAR_ON_FOOT( sub_2210() )))
            {
                if ((NOT IS_HINT_RUNNING()) AND (NOT l_U166))
                {
                    HINT_CAM( l_U178._fU0, l_U178._fU4, l_U178._fU8 + 1.25000000, 0, 0, 0, 6000 );
                    l_U166 = 1;
                }
                l_U228 = 1;
            }
        }
        break;
        case 1:
        if (((((IS_CHAR_INJURED( l_U154 )) || (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U154, sub_2210(), 0 ))) || (IS_PLAYER_FREE_AIMING_AT_CHAR( sub_2084(), l_U154 ))) || (IS_CHAR_ON_FIRE( l_U154 ))) || (IS_WANTED_LEVEL_GREATER( sub_2084(), 0 )))
        {
            if (IS_WANTED_LEVEL_GREATER( sub_2084(), 0 ))
            {
                if (NOT (IS_CHAR_IN_ANY_CAR( sub_2210() )))
                {
                    if (sub_5318() < 25)
                    {
                        PRINT( "BRIAN1_PROMPT_6", 5000, 1 );
                    }
                }
            }
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U154, 0, 0, 0 );
            }
            sub_381();
        }
        if (sub_5318() < 5.50000000)
        {
            if (TIMERA() > 1750)
            {
                if (IS_CHAR_ON_FOOT( sub_2210() ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U154 )))
                    {
                        if (sub_5965( 1, 1 ))
                        {
                            if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U154, sub_2210(), 0 )))
                            {
                                if (NOT (IS_CHAR_ON_FIRE( l_U154 )))
                                {
                                    if (NOT (IS_WANTED_LEVEL_GREATER( sub_2084(), 0 )))
                                    {
                                        if (sub_2470())
                                        {
                                            SET_MISSION_FLAG( 1 );
                                            if (NOT (IS_CHAR_INJURED( sub_2210() )))
                                            {
                                                GET_CHAR_COORDINATES( sub_2210(), ref l_U183._fU0, ref l_U183._fU4, ref l_U183._fU8 );
                                            }
                                            DO_SCREEN_FADE_OUT( 100 );
                                            if (NOT (IS_CHAR_INJURED( l_U154 )))
                                            {
                                                SET_CHAR_PROOFS( l_U154, 1, 1, 1, 1, 1 );
                                                SET_CHAR_PROOFS( sub_2210(), 1, 1, 1, 1, 1 );
                                            }
                                            while (NOT IS_SCREEN_FADED_OUT())
                                            {
                                                WAIT( 0 );
                                            }
                                            SET_PLAYER_CONTROL( sub_2084(), 0 );
                                            g_U2792 = 1;
                                            if (NOT (IS_CHAR_INJURED( l_U154 )))
                                            {
                                                SET_CHAR_PROOFS( l_U154, 0, 0, 0, 0, 0 );
                                                SET_CHAR_PROOFS( sub_2210(), 0, 0, 0, 0, 0 );
                                            }
                                            SWITCH_PED_PATHS_OFF( l_U178._fU0 - 10.00000000, l_U178._fU4 - 10.00000000, l_U178._fU8 - 10.00000000, l_U178._fU0 + 10.00000000, l_U178._fU4 + 10.00000000, l_U178._fU8 + 10.00000000 );
                                            l_U228 = 2;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (NOT (IS_CHAR_INJURED( l_U154 )))
        {
            GET_GAME_TIMER( ref l_U200 );
            if ((ARE_ANY_CHARS_NEAR_CHAR( l_U154, 2.50000000 )) AND ((l_U200 - l_U201) > 10000))
            {
                OPEN_SEQUENCE_TASK( ref l_U211 );
                TASK_PLAY_ANIM( 0, "ask_light_r", "MISSRAND_PEDSARNAUD", 8.00000000, 0, 0, 0, 0, 4000 );
                TASK_PLAY_ANIM( 0, "stand_idle", "MISSRAND_PEDSARNAUD", 8.00000000, 1, 0, 0, 0, 0 );
                CLOSE_SEQUENCE_TASK( l_U211 );
                TASK_PERFORM_SEQUENCE( l_U154, l_U211 );
                CLEAR_SEQUENCE_TASK( l_U211 );
                GET_GAME_TIMER( ref l_U201 );
            }
            else if (l_U172)
            {
                sub_6905( "ROM1_TRAK1", ref l_U212, 6, 1 );
                l_U172 = 0;
            }
            else if ((l_U200 - l_U202) > 10000)
            {
                GET_GAME_TIMER( ref l_U202 );
                l_U172 = 1;
            };;;
        }
        if (sub_5318() > 18)
        {
            if (IS_HINT_RUNNING())
            {
                HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U154, 0, 0, 0 );
            }
            l_U228 = 0;
        }
        break;
        case 2:
        CLEAR_WANTED_LEVEL( sub_2084() );
        if (IS_HINT_RUNNING())
        {
            HINT_CAM( -1.00000000, -1.00000000, -1.00000000, l_U154, 0, 0, 0 );
        }
        sub_8028();
        sub_8169( l_U218, l_U195 );
        l_U167 = 1;
        break;
    }
    return;
}

void sub_5318()
{
    if (NOT (IS_CHAR_DEAD( l_U154 )))
    {
        GET_CHAR_COORDINATES( sub_2210(), ref l_U183._fU0, ref l_U183._fU4, ref l_U183._fU8 );
        GET_CHAR_COORDINATES( l_U154, ref l_U186._fU0, ref l_U186._fU4, ref l_U186._fU8 );
        GET_DISTANCE_BETWEEN_COORDS_3D( l_U183._fU0, l_U183._fU4, l_U183._fU8, l_U186._fU0, l_U186._fU4, l_U186._fU8, ref l_U203 );
        return l_U203;
    }
    return l_U203;
}

int sub_5965(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_2210() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2210(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_2210() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2210(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_2210()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_2210() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_2210() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_2084() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_2084() )))
    {
        return 0;
    }
    return 1;
}

void sub_6905(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_6926( uParam0, ref l_U6._fU0, uParam1, uParam2, uParam3 );
}

void sub_6926(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_6980( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_6980(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_7002( iParam1 )))
    {
        return 0;
    }
    l_U6._fU384 = 0;
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
    sub_7678( ref g_U8868, ref l_U6 );
    StrCopy( ref g_U8868._fU0, uParam7, 16 );
    g_U8868._fU388 = uParam8;
    g_U8867 = 1;
    return 1;
}

int sub_7002(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_1159( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_1159( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_1159( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_7678(int iParam0, int iParam1)
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

void sub_8028()
{
    g_U42871._fU0 = 37;
    g_U42871._fU8 = 11;
    g_U42871._fU12 = 0;
    if (g_U42871._fU4 == nil)
    {
        return;
    }
    if (NOT (DOES_CHAR_EXIST( g_U42871._fU4 )))
    {
        g_U42871._fU4 = nil;
        return;
    }
    DELETE_CHAR( ref g_U42871._fU4 );
    g_U42871._fU4 = nil;
    return;
}

void sub_8169(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (g_U12379)
    {
        sub_578( "Interactions_Started: Already on a mission" );
        return;
    }
    uVar4 = sub_1475( uParam0 );
    if (g_U30318._fU4)
    {
        sub_578( "Interactions_Started: Another interaction is already taking place" );
        return;
    }
    if (g_U0)
    {
        g_U30257[uVar4]._fU0 = 1;
        g_U30257[uVar4]._fU4 = 1;
        g_U30257[uVar4]._fU28 = uParam1;
    }
    if (NOT g_U30257[uVar4]._fU0)
    {
        sub_578( "Interactions_Started: This Random Character has been set to NOT allowToActivate" );
        return;
    }
    g_U30318._fU4 = 1;
    g_U30318._fU8 = uParam0;
    g_U30318._fU12 = uParam1;
    sub_8516();
    sub_9352( g_U30257[uVar4]._fU32 );
    g_U30257[uVar4]._fU32 = 0;
    sub_9475( uParam0, uParam1 );
    g_U12379 = 1;
    return;
}

void sub_8516()
{
    sub_8525();
    sub_8670( ref g_U10938._fU32 );
    g_U10938._fU48 = {0.00000000, 0.00000000, 0.00000000};
    sub_8744();
    return;
}

void sub_8525()
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

void sub_8670(int iParam0)
{
    ref iParam0->_fU0->_fU4 = -1;
    ref iParam0->_fU0->_fU0 = -1;
    ref iParam0->_fU8->_fU0 = -1;
    ref iParam0->_fU8->_fU4 = -1;
    return;
}

void sub_8744()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_8782( 1, g_U575[I] )) == 0)
        {
            sub_9033( I );
            SET_PHONE_HUD_ITEM( 0, "", -1 );
        }
    }
    if (NOT sub_9211())
    {
        SET_MESSAGES_WAITING( 0 );
        g_U95._fU404 = 1000;
    }
    g_U95._fU404 = 1000;
    return;
}

int sub_8782(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_9033(int iParam0)
{
    int I;

    if (iParam0 < (g_U575 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U575 - 1); I++ )
        {
            g_U575[I - 1] = {g_U575[I]};
        }
    }
    sub_9118( g_U575 - 1 );
    return;
}

void sub_9118(unknown uParam0)
{
    g_U575[uParam0]._fU0[0] = -1;
    g_U575[uParam0]._fU0[1] = -1;
    g_U575[uParam0]._fU0[2] = -1;
    return;
}

int sub_9211()
{
    int I;

    for ( I = 0; I <= (g_U575 - 1); I++ )
    {
        if ((sub_8782( 4, g_U575[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_9352(int iParam0)
{
    g_U30318._fU16._fU4 += iParam0;
    sub_9382();
    INCREMENT_INT_STAT( 286, iParam0 );
    return;
}

void sub_9382()
{
    if (g_U0)
    {
        return;
    }
    if (g_U30318._fU16._fU4 < g_U30318._fU16._fU0)
    {
        return;
    }
    return;
}

void sub_9475(unknown uParam0, int iParam1)
{
    char[16] cVar4;
    int iVar8;

    StrCopy( ref cVar4, "", 16 );
    iVar8 = -1;
    switch (uParam0)
    {
        case 13:
        StrCopy( ref cVar4, "ARNAUD", 16 );
        iVar8 = 2;
        break;
        case 14:
        StrCopy( ref cVar4, "DAISY", 16 );
        iVar8 = 1;
        break;
        case 15:
        StrCopy( ref cVar4, "MARGOT", 16 );
        iVar8 = 2;
        break;
        default:
        SCRIPT_ASSERT( "Flow_Player_Stats_Random_Character_Started: Unknown Random Character ID" );
        return;
    }
    ConcatString(ref cVar4, "_", 16);
    if (iParam1 <= 0)
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Random_Character_Started: sequence < 0" );
        return;
    }
    if (iParam1 > iVar8)
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Random_Character_Started: sequence > max sequence" );
        return;
    }
    switch (iParam1)
    {
        case 1:
        ConcatString(ref cVar4, "1", 16);
        break;
        case 2:
        ConcatString(ref cVar4, "2", 16);
        break;
        case 3:
        ConcatString(ref cVar4, "3", 16);
        break;
        default: SCRIPT_ASSERT( "Flow_Player_Stats_Random_Character_Started: unknown problem with paramSequence" );
    }
    sub_10009( cVar4 );
    return;
}

void sub_10009(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    if (g_U0)
    {
        return;
    }
    if (NOT (COMPARE_STRING( ref g_U10966, "" )))
    {
        SCRIPT_ASSERT( "Flow_Player_Stats_Started: g_labelPlayerStatMissionName is already set up (see console log)" );
    }
    g_U10966 = {uParam0};
    PLAYSTATS_MISSION_STARTED( ref g_U10966 );
    return;
}

int sub_10244()
{
    if (IS_HINT_RUNNING())
    {
        if ((sub_5318() > 30) || (sub_2201()))
        {
            HINT_CAM( l_U178._fU0, l_U178._fU4, l_U178._fU8, 0, 0, 0, 0 );
            return 1;
        }
    }
    return 0;
}

void sub_10360()
{
    int iVar2;

    switch (l_U229)
    {
        case 0:
        SET_PED_DENSITY_MULTIPLIER( 0.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 0.00000000 );
        if (DOES_BLIP_EXIST( l_U205 ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U205 );
        }
        if (DOES_OBJECT_EXIST( l_U224 ))
        {
            DELETE_OBJECT( ref l_U224 );
        }
        DELETE_CHAR( ref l_U154 );
        REMOVE_ANIMS( "MISSRAND_PEDSARNAUD" );
        LOAD_SCENE( l_U178._fU0, l_U178._fU4, l_U178._fU8 );
        sub_10587( -60.13780000, -73.75820000, 14.16780000, 0.00000000, ref l_U157 );
        CLEAR_AREA( l_U178._fU0, l_U178._fU4, l_U178._fU8, 25, 1 );
        sub_10855( ref l_U156 );
        if (IS_CHAR_DUCKING( sub_2210() ))
        {
            SET_CHAR_DUCKING( sub_2210(), 0 );
        }
        sub_4717( "ROM1AUD", 6 );
        sub_4717( "ARN01", 0 );
        sub_11005( "ROM1AUD" );
        sub_4890( 0, sub_2210(), "LUIS", 0 );
        sub_4890( 1, l_U154, "ARNAUD", 0 );
        START_CUTSCENE_NOW( "RP1_ARN" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "RP1_ARN" );
        l_U229 = 1;
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( sub_2210() )))
        {
            SET_CHAR_COORDINATES( sub_2210(), -66.66670000, -74.06590000, 12.78400000 );
            SET_CHAR_HEADING( sub_2210(), 301.91630000 );
        }
        SET_CAM_BEHIND_PED( sub_2210() );
        SET_GAME_CAM_HEADING( 0.00000000 );
        SET_PLAYER_CONTROL_ADVANCED( sub_2084(), 1, 1, 1 );
        SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
        SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
        SWITCH_PED_PATHS_ON( l_U178._fU0 - 10.00000000, l_U178._fU4 - 10.00000000, l_U178._fU8 - 10.00000000, l_U178._fU0 + 10.00000000, l_U178._fU4 + 10.00000000, l_U178._fU8 + 10.00000000 );
        REQUEST_MODEL( sub_2593( 13 ) );
        while (NOT (HAS_MODEL_LOADED( sub_2593( 13 ) )))
        {
            WAIT( 0 );
        }
        LOAD_SCENE( l_U178._fU0, l_U178._fU4, l_U178._fU8 );
        CLEAR_AREA_OF_CARS( l_U178._fU0, l_U178._fU4, l_U178._fU8, 500 );
        CLEAR_AREA( l_U178._fU0, l_U178._fU4, l_U178._fU8, 25.00000000, 1 );
        if (l_U165)
        {
            MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U156 );
            l_U165 = 0;
        }
        sub_3273( 13, ref l_U154, l_U178._fU0, l_U178._fU4, l_U178._fU8, 95.80790000 );
        SET_CHAR_NEVER_TARGETTED( l_U154, 1 );
        SET_CHAR_CANT_BE_DRAGGED_OUT( l_U154, 1 );
        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U154, 1 );
        SET_CHAR_HEALTH( l_U154, 200 );
        SET_CHAR_MAX_HEALTH( l_U154, 200 );
        SET_CHAR_COMPONENT_VARIATION( l_U154, 1, 1, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U154, 2, 0, 0 );
        SET_CHAR_COMPONENT_VARIATION( l_U154, 5, 0, 0 );
        ENABLE_PED_HELMET( l_U154, 0 );
        SET_CHAR_CAN_BE_KNOCKED_OFF_BIKE( l_U154, 3 );
        if (NOT (IS_PED_IN_GROUP( l_U154 )))
        {
            SET_GROUP_MEMBER( sub_11819(), l_U154 );
        }
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2210(), 0 );
        SWITCH_ROADS_OFF( l_U192._fU0 - 10.00000000, l_U192._fU4 - 38.00000000, l_U192._fU8 - 30.00000000, l_U192._fU0 + 10.00000000, l_U192._fU4 + 38.00000000, l_U192._fU8 + 30.00000000 );
        CLEAR_AREA_OF_CARS( l_U192._fU0, l_U192._fU4, l_U192._fU8, 50.00000000 );
        DO_SCREEN_FADE_IN( 500 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
        sub_4890( 0, sub_2210(), "LUIS", 0 );
        sub_4890( 1, l_U154, "ARNAUD", 0 );
        WAIT( 800 );
        sub_6905( "ROM1_WHER1", ref l_U212, 6, 1 );
        SETTIMERA( 0 );
        l_U229 = 3;
        break;
        case 3:
        sub_12133();
        sub_12457();
        GET_GAME_TIMER( ref l_U200 );
        if (((((IS_PED_JACKING( sub_2210() )) || (IS_CHAR_TRYING_TO_ENTER_A_LOCKED_CAR( sub_2210() ))) AND (NOT l_U171)) AND (NOT l_U174)) AND (NOT l_U176))
        {
            sub_6905( "ROM1_STEAL", ref l_U212, 6, 1 );
            l_U171 = 1;
            GET_GAME_TIMER( ref l_U201 );
        }
        if (IS_WANTED_LEVEL_GREATER( sub_2084(), 0 ))
        {
            if ((NOT l_U173) AND (NOT l_U176))
            {
                sub_6905( "ROM1_WANT1", ref l_U212, 6, 1 );
                l_U173 = 1;
                GET_GAME_TIMER( ref l_U201 );
            }
            if (((l_U173) AND (NOT l_U177)) AND (NOT (sub_1047( l_U212 ))))
            {
                CLEAR_PRINTS();
                PRINT( "ARN1_03", 7500, 0 );
                l_U177 = 1;
            }
        }
        else
        {
            l_U173 = 0;
        }
        if ((NOT l_U174) AND (NOT (IS_CHAR_INJURED( l_U154 ))))
        {
            if ((((((TIMERA() > 20000) AND (NOT (sub_1047( l_U212 )))) AND ((l_U200 - l_U201) > 4000)) AND (IS_CHAR_IN_ANY_CAR( sub_2210() ))) AND (IS_CHAR_IN_ANY_CAR( l_U154 ))) AND (NOT l_U176))
            {
                if (g_U43696 == 0)
                {
                    sub_6905( "ROM1_B1AV1", ref l_U212, 6, 1 );
                    g_U43696++;
                    l_U174 = 1;
                }
                else if (g_U43696 == 1)
                {
                    sub_6905( "ROM1_B1AV2", ref l_U212, 6, 1 );
                    g_U43696++;
                    l_U174 = 1;
                }
                else if (g_U43696 > 1)
                {
                    GENERATE_RANDOM_INT_IN_RANGE( 0, 2, ref iVar2 );
                    if (iVar2 == 0)
                    {
                        sub_6905( "ROM1_B1AV1", ref l_U212, 6, 1 );
                        l_U174 = 1;
                    }
                    else if (iVar2 == 1)
                    {
                        sub_6905( "ROM1_B1AV2", ref l_U212, 6, 1 );
                        l_U174 = 1;
                    }
                };;;
            }
        }
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2210(), 13.87000000, -481.03000000, 12.75000000, 20.00000000, 20.00000000, 50.00000000, 0 ))
        {
            l_U220 = 0;
        }
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_2210(), 13.87000000, -423.03000000, 12.75000000, 20.00000000, 20.00000000, 50.00000000, 0 ))
        {
            l_U220 = 1;
        }
        if (sub_13358( l_U189._fU0, l_U189._fU4, l_U189._fU8, 1.60000000, 1.60000000, l_U182, 1, l_U154, "ARN1_04", "ARN1_02", 1, 1, "ARN1_03" ))
        {
            SET_PLAYER_CONTROL( sub_2084(), 0 );
            sub_1231( ref l_U212, 0 );
            l_U229 = 4;
            if (NOT (IS_CHAR_INJURED( l_U154 )))
            {
                if (IS_CHAR_IN_ANY_CAR( l_U154 ))
                {
                    l_U169 = 0;
                }
                else
                {
                    l_U169 = 1;
                }
            }
            SET_CHAR_CURRENT_WEAPON_VISIBLE( sub_2210(), 0 );
        }
        break;
        case 4:
        sub_26659();
        sub_29318();
        break;
    }
    return;
}

void sub_10587(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;

    GET_PLAYERS_LAST_CAR_NO_SAVE( uParam4 );
    if ((IS_VEH_DRIVEABLE( (uParam4^) )) AND (NOT (IS_CHAR_INJURED( sub_2210() ))))
    {
        if (NOT (IS_CHAR_IN_CAR( sub_2210(), (uParam4^) )))
        {
            if (LOCATE_CAR_3D( (uParam4^), uParam0._fU0, uParam0._fU4, uParam0._fU8, 100, 100, 100, 0 ))
            {
                if (NOT (IS_CAR_A_MISSION_CAR( (uParam4^) )))
                {
                    SET_CAR_AS_MISSION_CAR( (uParam4^) );
                }
                SET_LOAD_COLLISION_FOR_CAR_FLAG( (uParam4^), 0 );
                GET_CAR_MODEL( (uParam4^), ref uVar7 );
                if (IS_THIS_MODEL_A_CAR( uVar7 ))
                {
                    CLOSE_ALL_CAR_DOORS( (uParam4^) );
                }
                SET_CAR_COORDINATES( (uParam4^), uParam0._fU0, uParam0._fU4, uParam0._fU8 );
                SET_CAR_HEADING( (uParam4^), uParam3 );
                SET_CAR_ON_GROUND_PROPERLY( (uParam4^) );
            }
        }
    }
    return;
}

void sub_10855(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            if (NOT (IS_CAR_A_MISSION_CAR( (uParam0^) )))
            {
                SET_CAR_AS_MISSION_CAR( (uParam0^) );
                l_U165 = 1;
            }
        }
    }
    return;
}

void sub_11005(unknown uParam0)
{
    StrCopy( ref l_U6._fU0, uParam0, 16 );
    sub_11022();
    return;
}

void sub_11022()
{
    int I;

    for ( I = 0; I <= 8; I++ )
    {
        l_U6._fU16[I]._fU0 = nil;
        StrCopy( ref l_U6._fU16[I]._fU4, "", 32 );
        l_U6._fU344[I] = 0;
    }
    return;
}

void sub_11819()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_12133()
{
    if (DOES_CHAR_EXIST( l_U154 ))
    {
        if (IS_CHAR_INJURED( l_U154 ))
        {
            CLEAR_PRINTS();
            sub_12183();
            PRINT( "ARN1_05", 7500, 0 );
            sub_12221();
        }
        if (NOT (IS_CHAR_DEAD( l_U154 )))
        {
            if ((sub_12272( sub_2210(), l_U154, 1 )) > 250)
            {
                CLEAR_PRINTS();
                sub_12183();
                PRINT( "ARN1_01", 7500, 0 );
                sub_12221();
            }
        }
    }
    return;
}

void sub_12183()
{
    return;
}

void sub_12221()
{
    sub_381();
    return;
}

void sub_12272(unknown uParam0, unknown uParam1, unknown uParam2)
{
    return VDIST( sub_12285( uParam0, uParam2 ), sub_12285( uParam1, uParam2 ) );
}

void sub_12285(unknown uParam0, boolean bParam1)
{
    unknown Result;
    unknown uVar5;
    unknown uVar6;

    if (IS_CHAR_DEAD( uParam0 ))
    {
        N_1363505769( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    else
    {
        GET_CHAR_COORDINATES( uParam0, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
    }
    if (NOT bParam1)
    {
        Result._fU8 = 0.00000000;
    }
    return Result;
}

void sub_12457()
{
    if ((l_U176) AND (sub_1047( l_U212 )))
    {
        sub_1231( ref l_U212, 1 );
    }
    if (NOT (IS_CHAR_INJURED( l_U154 )))
    {
        if (((sub_12272( l_U154, sub_2210(), 1 )) > 30.00000000) AND (sub_1047( l_U212 )))
        {
            sub_1231( ref l_U212, 1 );
        }
    }
    return;
}

void sub_13358(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12)
{
    return sub_13409( uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6, uParam7, 0, 0, uParam8, uParam9, uParam9, uParam9, uParam9, uParam10, uParam11, uParam12 );
}

int sub_13409(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17)
{
    int iVar20;
    int I;
    unknown uVar22;

    l_U145[0] = uParam7;
    l_U145[1] = uParam8;
    l_U145[2] = uParam9;
    l_U144 = uParam7;
    sub_13457();
    sub_13789();
    sub_14669();
    if (sub_14850( l_U145[0], l_U145[1], l_U145[2], uParam11, uParam12, uParam13, uParam14, l_U139, uParam15, 0, 0, 0 ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((uParam16) AND (IS_WANTED_LEVEL_GREATER( sub_2084(), 0 )))
            {
                if (DOES_BLIP_EXIST( l_U136 ))
                {
                    REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U136 );
                    sub_15398( uParam10 );
                }
                if (((NOT (sub_19516( 0 ))) AND (NOT sub_20776())) AND (NOT l_U105))
                {
                    sub_15278( uParam17, 0 );
                    l_U149 = uParam17;
                    l_U105 = 1;
                    l_U106 = 0;
                    if (NOT (IS_CHAR_INJURED( l_U145[0] )))
                    {
                        SAY_AMBIENT_SPEECH( l_U145[0], "CAR_POLICE_PURSUIT", 1, 1, 0 );
                    }
                }
            }
            else if (l_U105)
            {
                sub_15398( uParam17 );
                l_U105 = 0;
                l_U106 = 1;
            }
            if (l_U106)
            {
                if (NOT (sub_19516( 0 )))
                {
                    if (NOT (IS_CHAR_INJURED( l_U145[0] )))
                    {
                        SAY_AMBIENT_SPEECH( l_U145[0], "LOSE_WANTED_LEVEL", 1, 1, 0 );
                    }
                    l_U106 = 0;
                }
            }
            if (NOT (DOES_BLIP_EXIST( l_U136 )))
            {
                ADD_BLIP_FOR_COORD( uParam0, uParam1, uParam2 - 1.00000000, ref l_U136 );
                sub_17349( l_U136 );
                if (l_U124)
                {
                    SHOW_BLIP_ON_ALTIMETER( l_U136, 1 );
                }
            }
            if (NOT (sub_19516( 0 )))
            {
                if (NOT l_U107)
                {
                    sub_15278( uParam10, 0 );
                    l_U107 = 1;
                }
            }
            if (LOCATE_CHAR_ANY_MEANS_3D( sub_2210(), uParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6 ))
            {
                iVar20 = 1;
                for ( I = 0; I < 3; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U145[I] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U145[I] )))
                        {
                            if ((NOT (IS_GROUP_MEMBER( l_U145[I], sub_11819() ))) || (NOT (sub_17468( l_U145[I] ))))
                            {
                                iVar20 = 0;
                            }
                        }
                    }
                }
                if ((iVar20) AND (sub_21329()))
                {
                    sub_15398( uParam10 );
                    sub_15398( uParam11 );
                    sub_15398( uParam12 );
                    sub_15398( uParam13 );
                    sub_15398( uParam14 );
                    sub_15398( uParam17 );
                    sub_15398( "MORE_SEATS" );
                    sub_21548();
                    return 1;
                }
            }
        }
    }
    else if (DOES_BLIP_EXIST( l_U136 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U136 );
        sub_15398( uParam10 );
    }
    sub_22043( uParam0, uParam1, uParam2, 0, 0 );
    sub_26200( uParam0, uParam1, uParam2 );
    return 0;
}

void sub_13457()
{
    int I;

    for ( I = 0; I < l_U145; I++ )
    {
        if (DOES_CHAR_EXIST( l_U145[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U145[I] )))
            {
                if (((IS_CHAR_SITTING_IN_ANY_CAR( l_U145[I] )) AND (sub_13550( l_U145[I] ))) AND (sub_13615()))
                {
                    BLOCK_CHAR_AMBIENT_ANIMS( l_U145[I], 1 );
                }
            }
        }
    }
    if (IS_PLAYER_PLAYING( sub_2084() ))
    {
        if (NOT (IS_CHAR_INJURED( sub_2210() )))
        {
            if (((IS_CHAR_SITTING_IN_ANY_CAR( sub_2210() )) AND (sub_13550( sub_2210() ))) AND (sub_13615()))
            {
                BLOCK_CHAR_AMBIENT_ANIMS( sub_2210(), 1 );
            }
        }
    }
    return;
}

int sub_13550(int iParam0)
{
    int I;

    for ( I = 0; I < 9; I++ )
    {
        if (l_U6._fU16[I]._fU0 == iParam0)
        {
            return 1;
        }
    }
    return 0;
}

int sub_13615()
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8867 == 1)) || (g_U8867 == 2))
    {
        return 1;
    }
    return 0;
}

void sub_13789()
{
    if (NOT l_U118)
    {
        l_U153 = CREATE_WIDGET_GROUP( "Locates Header" );
        ADD_WIDGET_TOGGLE( "bPrintedLoseWantedLevel", ref l_U105 );
        ADD_WIDGET_TOGGLE( "bPlayLostCopsSpeech", ref l_U106 );
        ADD_WIDGET_TOGGLE( "bInitialGodTextPrinted", ref l_U107 );
        ADD_WIDGET_TOGGLE( "bPrintedGetACar", ref l_U108 );
        ADD_WIDGET_TOGGLE( "bPrintedGetBackInCar", ref l_U110 );
        ADD_WIDGET_TOGGLE( "bPrintedGetInCar", ref l_U109 );
        ADD_WIDGET_TOGGLE( "bPrintedPickupAllBuddysText", ref l_U111 );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[0]", ref l_U112[0] );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[1]", ref l_U112[1] );
        ADD_WIDGET_TOGGLE( "bPrintedPickupBuddyText[2]", ref l_U112[2] );
        ADD_WIDGET_TOGGLE( "bUseSpecificJSkipCoords", ref l_U116 );
        ADD_WIDGET_TOGGLE( "bDontDoSafeForCutsceneCheck", ref l_U117 );
        ADD_WIDGET_FLOAT_SLIDER( "fClearCarDistance", ref l_U138, 0.00000000, 100.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "fBuddyJoinDistance", ref l_U139, 0.00000000, 100.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "fSkipHeading", ref l_U140, 0.00000000, 360.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.x", ref l_U150._fU0, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.y", ref l_U150._fU4, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_FLOAT_SLIDER( "vSkipCoords.z", ref l_U150._fU8, -9999.00000000, 9999.00000000, 0.10000000 );
        ADD_WIDGET_TOGGLE( "bToldPlayerToFindCarWithMoreSeats", ref l_U119 );
        ADD_WIDGET_TOGGLE( "bHasBeenInCar", ref l_U120 );
        END_WIDGET_GROUP();
        l_U118 = 1;
    }
    return;
}

void sub_14669()
{
    int I;

    if (IS_PLAYER_PLAYING( sub_2084() ))
    {
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2210(), 0 );
    }
    for ( I = 0; I < l_U145; I++ )
    {
        if (DOES_CHAR_EXIST( l_U145[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U145[I] )))
            {
                SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U145[I], 0 );
            }
        }
    }
    return;
}

int sub_14850(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, boolean bParam8, int iParam9, unknown uParam10, unknown uParam11)
{
    int I;
    int iVar15;
    int iVar16;
    int iVar17;
    int iVar18;
    int iVar19;
    int[3] iVar20;
    boolean bVar24;
    boolean bVar25;
    int iVar26;
    int iVar27;
    unknown[3] uVar28;
    unknown uVar32;
    unknown uVar33;
    unknown uVar34;

    array(ref iVar20, 3);
    l_U145[0] = uParam0;
    l_U145[1] = uParam1;
    l_U145[2] = uParam2;
    l_U144 = uParam0;
    array(ref uVar28, 3);
    uVar28[0] = uParam3;
    uVar28[1] = uParam4;
    uVar28[2] = uParam5;
    iVar18 = 1;
    iVar15 = 0;
    iVar16 = 0;
    iVar20[0] = 0;
    iVar20[1] = 0;
    iVar20[2] = 0;
    for ( I = 0; I < 3; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U145[I] )))
        {
            iVar16++;
        }
    }
    if (((NOT sub_15021()) AND (IS_CHAR_SITTING_IN_ANY_CAR( sub_2210() ))) AND (NOT (DOES_VEHICLE_EXIST( iParam9 ))))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2210(), ref iVar26 );
        if (IS_VEH_DRIVEABLE( iVar26 ))
        {
            if (NOT l_U125)
            {
                sub_15278( "MORE_SEATS", 0 );
                l_U125 = 1;
            }
            bVar25 = true;
        }
    }
    else
    {
        bVar25 = false;
        l_U125 = 0;
        sub_15398( "MORE_SEATS" );
    }
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_CHAR_EXIST( l_U145[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U145[I] )))
            {
                if (NOT (IS_GROUP_MEMBER( l_U145[I], sub_11819() )))
                {
                    SET_CHAR_DROWNS_IN_WATER( l_U145[I], 1 );
                }
                else
                {
                    SET_CHAR_DROWNS_IN_WATER( l_U145[I], 0 );
                }
                if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2210() ))
                {
                    STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2210(), ref iVar26 );
                    if (IS_VEH_DRIVEABLE( iVar26 ))
                    {
                        if (IS_GROUP_MEMBER( l_U145[I], sub_11819() ))
                        {
                            if ((NOT sub_15021()) AND (IS_CHAR_SITTING_IN_ANY_CAR( sub_2210() )))
                            {
                                if (NOT (sub_15674( l_U145[I] )))
                                {
                                    REMOVE_CHAR_FROM_GROUP( l_U145[I] );
                                    PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 1" );
                                    PRINTNL();
                                }
                            }
                        }
                    }
                }
                bVar24 = true;
                if (NOT (IS_GROUP_MEMBER( l_U145[I], sub_11819() )))
                {
                    if (IS_CHAR_SITTING_IN_ANY_CAR( l_U145[I] ))
                    {
                        STORE_CAR_CHAR_IS_IN_NO_SAVE( l_U145[I], ref iVar26 );
                        if (IS_VEH_DRIVEABLE( iParam9 ))
                        {
                            if (NOT (iVar26 == iParam9))
                            {
                                if (NOT (IS_CAR_DEAD( iVar26 )))
                                {
                                    if (NOT (IS_CHAR_SITTING_IN_CAR( sub_2210(), iVar26 )))
                                    {
                                        TASK_LEAVE_CAR_IMMEDIATELY( l_U145[I], iVar26 );
                                        PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - Buddy told to leave car" );
                                        PRINTNL();
                                        bVar24 = false;
                                    }
                                }
                            }
                        }
                    }
                }
                if (IS_GROUP_MEMBER( l_U145[I], sub_11819() ))
                {
                    if (sub_16235())
                    {
                        if (l_U127[I])
                        {
                            SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U145[I], -1 );
                            l_U127[I] = 0;
                        }
                    }
                    else if (NOT l_U127[I])
                    {
                        SET_SPECIFIC_PASSENGER_INDEX_TO_USE_IN_GROUPS( l_U145[I], 2 );
                        l_U127[I] = 1;
                    }
                }
                if (((NOT (IS_GROUP_MEMBER( l_U145[I], sub_11819() ))) AND (NOT (sub_16417( l_U145[I], iParam9 )))) AND (NOT (sub_16513( l_U145[I], iParam9 ))))
                {
                    if (sub_16626( l_U145[I], uParam7, uParam10 ))
                    {
                        if (NOT (IS_GROUP_MEMBER( l_U145[I], sub_11819() )))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U145[I], 11, ref iVar27 );
                            if (iVar27 == 7)
                            {
                                CLEAR_CHAR_TASKS( l_U145[I] );
                                PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - CLEAR_CHAR_TASKS - 1" );
                                PRINTNL();
                            }
                            SET_GROUP_MEMBER( sub_11819(), l_U145[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 1" );
                            PRINTNL();
                            bVar24 = false;
                        }
                    }
                    if (bVar24)
                    {
                        if (NOT (DOES_BLIP_EXIST( l_U132[I] )))
                        {
                            GET_GAME_TIMER( ref l_U142 );
                            ADD_BLIP_FOR_CHAR( l_U145[I], ref l_U132[I] );
                            CHANGE_BLIP_DISPLAY( l_U132[I], 2 );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - add blip for char - 1" );
                            PRINTNL();
                            SET_BLIP_AS_FRIENDLY( l_U132[I], 1 );
                            if (bParam8)
                            {
                                sub_17349( l_U132[I] );
                            }
                        }
                    }
                    iVar18 = 0;
                }
                else if (DOES_BLIP_EXIST( l_U132[I] ))
                {
                    if (((sub_17468( l_U145[I] )) || (sub_16417( l_U145[I], iParam9 ))) || (uParam11))
                    {
                        if (DOES_BLIP_EXIST( l_U132[I] ))
                        {
                            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U132[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 1" );
                            PRINTNL();
                            sub_15398( uVar28[I] );
                            iVar19 = 1;
                        }
                    }
                    else if (bParam8)
                    {
                        sub_17349( l_U132[I] );
                    }
                    iVar18 = 0;;
                }
                else if (IS_VEH_DRIVEABLE( iParam9 ))
                {
                    if (NOT (IS_CHAR_SITTING_IN_CAR( l_U145[I], iParam9 )))
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_CAR_3D( l_U145[I], iParam9, 20.00000000, 20.00000000, 5.00000000, 0 )) AND (NOT l_U122))
                        {
                            if (IS_CHAR_SITTING_IN_ANY_CAR( l_U145[I] ))
                            {
                                if (NOT (IS_CHAR_IN_CAR( l_U145[I], iParam9 )))
                                {
                                    if (NOT (sub_17468( l_U145[I] )))
                                    {
                                        if (sub_18076( l_U145[I] ))
                                        {
                                            GET_SCRIPT_TASK_STATUS( l_U145[I], 31, ref iVar27 );
                                            if (iVar27 == 7)
                                            {
                                                TASK_LEAVE_ANY_CAR( l_U145[I] );
                                            }
                                        }
                                    }
                                }
                            }
                            else if (NOT (IS_CHAR_SITTING_IN_CAR( sub_2210(), iParam9 )))
                            {
                                SET_FORCE_PLAYER_TO_ENTER_THROUGH_DIRECT_DOOR( sub_2210(), 1 );
                            }
                            if (IS_GROUP_MEMBER( l_U145[I], sub_11819() ))
                            {
                                REMOVE_CHAR_FROM_GROUP( l_U145[I] );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 2" );
                                PRINTNL();
                            }
                            GET_SCRIPT_TASK_STATUS( l_U145[I], 11, ref iVar27 );
                            if (iVar27 == 7)
                            {
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U145[I], 1 );
                                if (l_U121)
                                {
                                    SET_NEXT_DESIRED_MOVE_STATE( 2 );
                                }
                                TASK_ENTER_CAR_AS_PASSENGER( l_U145[I], iParam9, -1, I );
                                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U145[I], 0 );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - told to enter car as passenger" );
                                PRINTNL();
                            }
                            else if (IS_CHAR_IN_CAR( sub_2210(), iParam9 ))
                            {
                                ADD_BLIP_FOR_CHAR( l_U145[I], ref l_U132[I] );
                                CHANGE_BLIP_DISPLAY( l_U132[I], 2 );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - add blip for char - 2" );
                                PRINTNL();
                                SET_BLIP_AS_FRIENDLY( l_U132[I], 1 );
                                iVar18 = 0;
                            };;;
                        }
                        else if (NOT (IS_GROUP_MEMBER( l_U145[I], sub_11819() )))
                        {
                            if (sub_16626( l_U145[I], uParam7, uParam10 ))
                            {
                                GET_SCRIPT_TASK_STATUS( l_U145[I], 11, ref iVar27 );
                                if (iVar27 == 7)
                                {
                                    CLEAR_CHAR_TASKS( l_U145[I] );
                                    PRINTSTRING( "locates_heder - HAVE_BUDDIES_JOINED_PLAYERS_GROUP - CLEAR_CHAR_TASKS - 2" );
                                    PRINTNL();
                                }
                                SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U145[I], 0 );
                                SET_GROUP_MEMBER( sub_11819(), l_U145[I] );
                                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 2" );
                                PRINTNL();
                            }
                        }
                    }
                    else if (IS_CHAR_SITTING_IN_CAR( sub_2210(), iParam9 ))
                    {
                        if (NOT (IS_GROUP_MEMBER( l_U145[I], sub_11819() )))
                        {
                            SET_GROUP_MEMBER( sub_11819(), l_U145[I] );
                            PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - SET_GROUP_MEMBER - 3" );
                            PRINTNL();
                        }
                    }
                    else if (IS_GROUP_MEMBER( l_U145[I], sub_11819() ))
                    {
                        REMOVE_CHAR_FROM_GROUP( l_U145[I] );
                        PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - REMOVE_CHAR_FROM_GROUP - 3" );
                        PRINTNL();
                    };;;
                };;;
            }
            else if (DOES_BLIP_EXIST( l_U132[I] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U132[I] );
                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 2" );
                PRINTNL();
                sub_15398( uVar28[I] );
                iVar19 = 1;
            }
        }
    }
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_BLIP_EXIST( l_U132[I] ))
        {
            iVar20[I] = 1;
            iVar15++;
        }
    }
    if (NOT (sub_19516( 0 )))
    {
        if (iVar15 > 0)
        {
            for ( I = 0; I < 3; I++ )
            {
                if (iVar20[I])
                {
                    if (NOT (IS_CHAR_INJURED( l_U145[I] )))
                    {
                        if ((sub_15674( l_U145[I] )) || (LOCATE_CHAR_ANY_MEANS_CHAR_3D( l_U145[I], sub_2210(), 40.00000000, 40.00000000, 40.00000000, 0 )))
                        {
                            iVar15--;
                            iVar20[I] = 0;
                        }
                    }
                }
            }
        }
        GET_GAME_TIMER( ref iVar17 );
        if (((iVar17 - l_U142) > 1500) || (iVar16 == 1))
        {
            if (iVar15 > 0)
            {
                if (l_U143 < iVar15)
                {
                    PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - printing 'pickup' text" );
                    PRINTNL();
                    PRINTSTRING( "iPrintedMissingBuddiesNumber = " );
                    PRINTINT( l_U143 );
                    PRINTNL();
                    PRINTSTRING( "iBuddiesMissing = " );
                    PRINTINT( iVar15 );
                    PRINTNL();
                    PRINTSTRING( "iTotalBuddies = " );
                    PRINTINT( iVar16 );
                    PRINTNL();
                    if ((iVar15 == iVar16) AND (iVar16 > 1))
                    {
                        if ((NOT l_U111) AND (NOT (l_U143 == iVar15)))
                        {
                            sub_15278( uParam6, 0 );
                            l_U111 = 1;
                            l_U143 = iVar15;
                        }
                    }
                    else
                    {
                        for ( I = 0; I < 3; I++ )
                        {
                            if (iVar20[I])
                            {
                                if ((NOT l_U112[I]) AND (NOT (l_U143 == iVar15)))
                                {
                                    sub_15278( uVar28[I], 0 );
                                    l_U112[I] = 1;
                                    l_U143 = iVar15;
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                l_U143 = 0;
            }
        }
    }
    l_U121 = 0;
    if ((iVar18) AND (NOT bVar25))
    {
        for ( I = 0; I < 3; I++ )
        {
            if (DOES_BLIP_EXIST( l_U132[I] ))
            {
                REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U132[I] );
                PRINTSTRING( "HAVE_BUDDIES_JOINED_PLAYERS_GROUP - remove blip for char - 3" );
                PRINTNL();
                sub_15398( uVar28[I] );
            }
        }
        sub_15398( "MORE_SEATS" );
        return 1;
    }
    if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
    {
        for ( I = 0; I < 3; I++ )
        {
            if (NOT (IS_CHAR_INJURED( sub_2210() )))
            {
                GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2210(), 0.00000000, 1.00000000 + (TO_FLOAT( I )), 0.00000000, ref uVar32._fU0, ref uVar32._fU4, ref uVar32._fU8 );
                if (NOT (IS_CHAR_INJURED( l_U145[I] )))
                {
                    SET_CHAR_COORDINATES( l_U145[I], uVar32._fU0, uVar32._fU4, uVar32._fU8 );
                }
            }
        }
    }
    return 0;
}

int sub_15021()
{
    unknown uVar2;

    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2210() ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2210(), ref uVar2 );
        if (sub_15062( uVar2 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_15062(unknown uParam0)
{
    int iVar3;
    int iVar4;
    int I;

    if (IS_VEH_DRIVEABLE( uParam0 ))
    {
        iVar3 = 0;
        for ( I = 0; I < l_U145; I++ )
        {
            if (DOES_CHAR_EXIST( l_U145[I] ))
            {
                iVar3++;
            }
        }
        GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar4 );
        if (iVar4 >= iVar3)
        {
            return 1;
        }
    }
    return 0;
}

void sub_15278(unknown uParam0, boolean bParam1)
{
    if (NOT bParam1)
    {
        if (NOT (IS_STRING_NULL( uParam0 )))
        {
            if (NOT (COMPARE_STRING( uParam0, "" )))
            {
                PRINT_NOW( uParam0, 7500, 1 );
            }
        }
    }
    GET_GAME_TIMER( ref l_U141 );
    return;
}

void sub_15398(unknown uParam0)
{
    if (NOT (IS_STRING_NULL( uParam0 )))
    {
        CLEAR_THIS_PRINT( uParam0 );
    }
    return;
}

int sub_15674(unknown uParam0)
{
    int iVar3;
    int iVar4;

    if (IS_PLAYER_PLAYING( sub_2084() ))
    {
        GET_CAR_CHAR_IS_USING( sub_2210(), ref iVar3 );
        if (IS_VEH_DRIVEABLE( iVar3 ))
        {
            if (NOT (IS_CHAR_INJURED( uParam0 )))
            {
                GET_CAR_CHAR_IS_USING( uParam0, ref iVar4 );
                if (IS_VEH_DRIVEABLE( iVar4 ))
                {
                    if (iVar3 == iVar4)
                    {
                        if ((LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2210(), uParam0, 20.00000000, 20.00000000, 20.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_CAR_3D( uParam0, iVar4, 20.00000000, 20.00000000, 20.00000000, 0 )))
                        {
                            return 1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}

int sub_16235()
{
    unknown uVar2;

    GET_CAR_CHAR_IS_USING( sub_2210(), ref uVar2 );
    if (sub_15062( uVar2 ))
    {
        return 1;
    }
    return 0;
}

int sub_16417(unknown uParam0, unknown uParam1)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (DOES_VEHICLE_EXIST( uParam1 ))
        {
            if (IS_VEH_DRIVEABLE( uParam1 ))
            {
                if (IS_CHAR_SITTING_IN_CAR( uParam0, uParam1 ))
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_16513(unknown uParam0, int iParam1)
{
    int iVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (NOT (IS_GROUP_MEMBER( uParam0, sub_11819() )))
        {
            GET_CAR_CHAR_IS_USING( uParam0, ref iVar4 );
            if (IS_VEH_DRIVEABLE( iParam1 ))
            {
                if (iVar4 == iParam1)
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int sub_16626(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar5 );
            if (NOT (IS_CAR_DEAD( uVar5 )))
            {
                if (IS_VEH_DRIVEABLE( uVar5 ))
                {
                    if (IS_CHAR_SITTING_IN_CAR( sub_2210(), uVar5 ))
                    {
                        if (sub_15021())
                        {
                            return 1;
                        }
                    }
                }
                else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2210(), uParam0, uParam1, uParam1, 3.00000000, 0 ))
                {
                    return 1;
                }
            }
        }
        else if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_2210(), uParam0, uParam1, uParam1, 3.00000000, 0 ))
        {
            if (NOT bParam2)
            {
                if (sub_16235())
                {
                    return 1;
                }
                else
                {
                    GET_CAR_CHAR_IS_USING( sub_2210(), ref uVar5 );
                    if (NOT (DOES_VEHICLE_EXIST( uVar5 )))
                    {
                        return 1;
                    }
                }
            }
            else
            {
                return 1;
            }
        }
    }
    return 0;
}

void sub_17349(unknown uParam0)
{
    if (DOES_BLIP_EXIST( uParam0 ))
    {
        if (DOES_BLIP_EXIST( l_U137 ))
        {
            SET_ROUTE( l_U137, 0 );
        }
        l_U137 = uParam0;
        SET_ROUTE( uParam0, 1 );
    }
    return;
}

int sub_17468(unknown uParam0)
{
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2210() ))
        {
            if (sub_17516( sub_2210(), uParam0 ))
            {
                SET_GROUP_SEPARATION_RANGE( sub_11819(), 40.00000000 );
                return 1;
            }
        }
        else if (IS_GROUP_MEMBER( uParam0, sub_11819() ))
        {
            SET_GROUP_SEPARATION_RANGE( sub_11819(), 40.00000000 );
            return 1;
        }
    }
    else
    {
        return 1;
    }
    return 0;
}

int sub_17516(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam0, ref uVar4 );
            if (IS_VEH_DRIVEABLE( uVar4 ))
            {
                if (NOT (IS_CHAR_INJURED( uParam1 )))
                {
                    if (IS_CHAR_SITTING_IN_CAR( uParam1, uVar4 ))
                    {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

int sub_18076(unknown uParam0)
{
    float fVar3;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_SPEED( uParam0, ref fVar3 );
        if ((fVar3 > -0.50000000) AND (fVar3 < 0.50000000))
        {
            return 1;
        }
    }
    return 0;
}

int sub_19516(boolean bParam0)
{
    if (((((IS_MESSAGE_BEING_DISPLAYED()) || (((sub_13615()) AND (NOT bParam0)) || ((sub_19541()) AND (bParam0)))) || (sub_19570())) || (IS_SCRIPTED_CONVERSATION_ONGOING())) || (sub_19629()))
    {
        return 1;
    }
    return 0;
}

void sub_19541()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

int sub_19570()
{
    if ((g_U95._fU0 == 1007) || (g_U95._fU0 == 1008))
    {
        return 1;
    }
    return 0;
}

int sub_19629()
{
    int iVar2;
    int iVar3;

    GET_GAME_TIMER( ref iVar3 );
    iVar2 = iVar3 - l_U141;
    if (iVar2 < 35)
    {
        return 1;
    }
    return 0;
}

int sub_20776()
{
    if (NOT (IS_CHAR_INJURED( l_U144 )))
    {
        if (IS_AMBIENT_SPEECH_PLAYING( l_U144 ))
        {
            return 1;
        }
    }
    return 0;
}

int sub_21329()
{
    int iVar2;

    iVar2 = 1;
    if (IS_CHAR_SITTING_IN_ANY_CAR( sub_2210() ))
    {
        if ((IS_CHAR_ON_ANY_BIKE( sub_2210() )) || (IS_CHAR_IN_ANY_HELI( sub_2210() )))
        {
            iVar2 = 0;
        }
    }
    if (l_U123)
    {
        if (sub_18076( sub_2210() ))
        {
            if ((sub_5965( 1, iVar2 )) || (l_U117))
            {
                return 1;
            }
        }
    }
    else if ((sub_5965( 1, iVar2 )) || (l_U117))
    {
        return 1;
    }
    return 0;
}

void sub_21548()
{
    int I;

    sub_21557();
    for ( I = 0; I < 3; I++ )
    {
        if (DOES_BLIP_EXIST( l_U132[I] ))
        {
            REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U132[I] );
        }
    }
    if (DOES_BLIP_EXIST( l_U131 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U131 );
    }
    l_U137 = nil;
    l_U111 = 0;
    for ( I = 0; I < l_U112; I++ )
    {
        l_U112[I] = 0;
        l_U127[I] = 0;
    }
    l_U107 = 0;
    l_U105 = 0;
    l_U106 = 0;
    l_U108 = 0;
    l_U110 = 0;
    l_U109 = 0;
    l_U116 = 0;
    l_U117 = 0;
    l_U119 = 0;
    l_U120 = 0;
    l_U143 = 0;
    for ( I = 0; I < l_U145; I++ )
    {
        if (NOT (IS_CHAR_INJURED( l_U145[I] )))
        {
            BLOCK_CHAR_AMBIENT_ANIMS( l_U145[I], 0 );
            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( l_U145[I], 1 );
        }
    }
    if (IS_PLAYER_PLAYING( sub_2084() ))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( sub_2210(), 0 );
    }
    if (IS_PLAYER_PLAYING( sub_2084() ))
    {
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_2210(), 1 );
    }
    l_U121 = 0;
    l_U122 = 0;
    l_U123 = 0;
    l_U124 = 0;
    return;
}

void sub_21557()
{
    if (DOES_BLIP_EXIST( l_U136 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref l_U136 );
    }
    return;
}

void sub_22043(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4)
{
    int I;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    sub_13789();
    if (l_U116)
    {
        uParam0 = l_U150._fU0;
        uParam1 = l_U150._fU4;
        uParam2 = l_U150._fU8;
        uVar12 = l_U140;
        l_U116 = 0;
    }
    else if (NOT (IS_CHAR_INJURED( sub_2210() )))
    {
        GET_CHAR_HEADING( sub_2210(), ref uVar12 );
    }
    if (IS_SCREEN_FADED_IN())
    {
        if (IS_KEYBOARD_KEY_JUST_PRESSED( 36 ))
        {
            PRINTSTRING( "J_SKIP - called" );
            PRINTNL();
            DO_SCREEN_FADE_OUT( 500 );
            while (NOT IS_SCREEN_FADED_OUT())
            {
                WAIT( 0 );
            }
            CLEAR_WANTED_LEVEL( sub_2084() );
            sub_22254( ref uVar8 );
            if (bParam3)
            {
                PRINTSTRING( "J_SKIP - onFoot = TRUE" );
                PRINTNL();
                sub_22675( uParam0, uParam1, uParam2, 0 );
                for ( I = 0; I < l_U145; I++ )
                {
                    if (NOT (IS_CHAR_INJURED( l_U145[I] )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U145[I] );
                        if (NOT (IS_CHAR_INJURED( sub_2210() )))
                        {
                            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_2210(), 0.00000000, 1.00000000 + (TO_FLOAT( I )), 0.00000000, ref uVar9._fU0, ref uVar9._fU4, ref uVar9._fU8 );
                            SET_CHAR_COORDINATES( l_U145[I], uVar9._fU0, uVar9._fU4, uVar9._fU8 );
                            SET_CHAR_HEADING( l_U145[I], uVar12 );
                        }
                    }
                }
            }
            else if (DOES_VEHICLE_EXIST( uParam4 ))
            {
                PRINTSTRING( "J_SKIP - SpecificCarID exists" );
                PRINTNL();
                if (IS_VEH_DRIVEABLE( uParam4 ))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2210() );
                    WARP_CHAR_INTO_CAR( sub_2210(), uParam4 );
                    for ( I = 0; I < l_U145; I++ )
                    {
                        if (DOES_CHAR_EXIST( l_U145[I] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U145[I] )))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U145[I] );
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U145[I], uParam4, I );
                                SET_CHAR_GET_OUT_UPSIDE_DOWN_CAR( l_U145[I], 0 );
                            }
                        }
                    }
                }
                sub_22675( uParam0, uParam1, uParam2, uVar12 );
                if (IS_VEH_DRIVEABLE( uParam4 ))
                {
                    SET_CAR_COORDINATES( uParam4, uParam0, uParam1, uParam2 );
                }
            }
            else
            {
                PRINTSTRING( "J_SKIP - searching for temp_car" );
                PRINTNL();
                if (DOES_VEHICLE_EXIST( uVar8 ))
                {
                    if (NOT (IS_VEH_DRIVEABLE( uVar8 )))
                    {
                        PRINTSTRING( "J_SKIP - temp_car existed but not driveable" );
                        PRINTNL();
                        uVar8 = nil;
                    }
                }
                if (NOT (DOES_VEHICLE_EXIST( uVar8 )))
                {
                    PRINTSTRING( "J_SKIP - creating new temp_car" );
                    PRINTNL();
                    REQUEST_MODEL( 1264341792 );
                    while (NOT (HAS_MODEL_LOADED( 1264341792 )))
                    {
                        WAIT( 0 );
                    }
                    CREATE_CAR( 1264341792, uParam0, uParam1, uParam2, ref uVar8, 1 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( 1264341792 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2210() );
                    WARP_CHAR_INTO_CAR( sub_2210(), uVar8 );
                    sub_23582( uVar8 );
                }
                else
                {
                    PRINTSTRING( "J_SKIP - temp_car exists" );
                    PRINTNL();
                    if (IS_VEH_DRIVEABLE( uVar8 ))
                    {
                        PRINTSTRING( "J_SKIP - temp_car is driveable" );
                        PRINTNL();
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2210() );
                        WARP_CHAR_INTO_CAR( sub_2210(), uVar8 );
                    }
                }
                for ( I = 0; I < l_U145; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U145[I] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U145[I] )))
                        {
                            PRINTSTRING( "J_SKIP - buddy exists, clearing tasks." );
                            PRINTNL();
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U145[I] );
                            if (IS_VEH_DRIVEABLE( uVar8 ))
                            {
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U145[I], uVar8, I );
                            }
                            else
                            {
                                PRINTSTRING( "J_SKIP - buddy exists, clearing tasks." );
                                PRINTNL();
                            }
                        }
                    }
                }
                for ( I = 0; I < l_U145; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U145[I] ))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U145[I] )))
                        {
                            if (IS_VEH_DRIVEABLE( uVar8 ))
                            {
                                PRINTSTRING( "J_SKIP - warping buddy into car" );
                                PRINTNL();
                                WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U145[I], uVar8, I );
                            }
                        }
                    }
                }
                if (IS_VEH_DRIVEABLE( uVar8 ))
                {
                    SET_CAR_COORDINATES( uVar8, uParam0, uParam1, uParam2 );
                    SET_CAR_HEADING( uVar8, uVar12 );
                }
            }
            LOAD_SCENE( uParam0, uParam1, uParam2 );
            WAIT( 500 );
            sub_24202( 0, 0 );
            DO_SCREEN_FADE_IN( 500 );
        }
    }
    return;
}

void sub_22254(unknown uParam0)
{
    if (IS_PLAYER_PLAYING( sub_2084() ))
    {
        if (IS_CHAR_IN_ANY_CAR( sub_2210() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_2210(), uParam0 );
        }
    }
    if (NOT (DOES_VEHICLE_EXIST( (uParam0^) )))
    {
        GET_CAR_CHAR_IS_USING( sub_2210(), uParam0 );
    }
    if (DOES_VEHICLE_EXIST( (uParam0^) ))
    {
        if (IS_VEH_DRIVEABLE( (uParam0^) ))
        {
            sub_22374( (uParam0^) );
        }
        else
        {
            (uParam0^) = nil;
        }
    }
    else
    {
        (uParam0^) = nil;
    }
    return;
}

void sub_22374(unknown uParam0)
{
    unknown uVar3;
    int I;
    int iVar5;

    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (IS_VEH_DRIVEABLE( uParam0 ))
        {
            GET_DRIVER_OF_CAR( uParam0, ref uVar3 );
            if (DOES_CHAR_EXIST( uVar3 ))
            {
                if (NOT (IS_CHAR_INJURED( uVar3 )))
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( uVar3 );
                }
                else
                {
                    DELETE_CHAR( ref uVar3 );
                }
            }
            GET_MAXIMUM_NUMBER_OF_PASSENGERS( uParam0, ref iVar5 );
            for ( I = 0; I < iVar5; I++ )
            {
                if (NOT (IS_CAR_PASSENGER_SEAT_FREE( uParam0, I )))
                {
                    GET_CHAR_IN_CAR_PASSENGER_SEAT( uParam0, I, ref uVar3 );
                    if (DOES_CHAR_EXIST( uVar3 ))
                    {
                        if (NOT (IS_CHAR_INJURED( uVar3 )))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( uVar3 );
                        }
                        else
                        {
                            DELETE_CHAR( ref uVar3 );
                        }
                    }
                }
            }
        }
    }
    return;
}

void sub_22675(unknown uParam0, unknown uParam1, float fParam2, unknown uParam3)
{
    fParam2 += 1.00000000;
    SET_CHAR_COORDINATES( sub_2210(), uParam0, uParam1, fParam2 );
    SET_GAME_CAM_HEADING( 0 );
    REQUEST_COLLISION_AT_POSN( uParam0, uParam1, fParam2 );
    LOAD_ALL_OBJECTS_NOW();
    GET_CHAR_COORDINATES( sub_2210(), ref uParam0, ref uParam1, ref fParam2 );
    GET_GROUND_Z_FOR_3D_COORD( uParam0, uParam1, fParam2, ref fParam2 );
    SET_CHAR_COORDINATES( sub_2210(), uParam0, uParam1, fParam2 );
    SET_CHAR_HEADING( sub_2210(), uParam3 );
    return;
}

void sub_23582(unknown uParam0)
{
    MARK_CAR_AS_NO_LONGER_NEEDED( ref uParam0 );
    return;
}

void sub_24202(boolean bParam0, unknown uParam1)
{
    boolean bVar4;
    int iVar5;
    int iVar6;

    PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - called for " );
    PRINTNL();
    if (NOT bParam0)
    {
        if (NOT IS_SCREEN_FADED_OUT())
        {
            SCRIPT_ASSERT( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN() - should only be called when screen is faded out." );
        }
        else
        {
            WAIT( 0 );
        }
    }
    if ((NOT (IS_CHAR_INJURED( sub_2210() ))) AND ((IS_SCREEN_FADED_OUT()) || (bParam0)))
    {
        PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - checking if player is near a club..." );
        PRINTNL();
        g_U30093[0] = 0;
        g_U30093[1] = 0;
        g_U30093[2] = 0;
        g_U30176 = uParam1;
        if (sub_24582( sub_2210(), 0, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - bahama mamas" );
            PRINTNL();
            g_U30110[0] = 1;
        }
        if (sub_24582( sub_2210(), 1, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - maisonette 9" );
            PRINTNL();
            g_U30110[1] = 1;
        }
        if (sub_24582( sub_2210(), 2, 25.00000000 ))
        {
            PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - hercules" );
            PRINTNL();
            g_U30110[2] = 1;
        }
        sub_25859( 0 );
        sub_25859( 1 );
        sub_25859( 2 );
        bVar4 = false;
        GET_GAME_TIMER( ref l_U104 );
        while (NOT bVar4)
        {
            GET_GAME_TIMER( ref iVar5 );
            iVar6 = iVar5 - l_U104;
            if ((iVar6 > 15000) || (((g_U30110[0] == 0) AND (g_U30110[1] == 0)) AND (g_U30110[2] == 0)))
            {
                if (iVar6 > 15000)
                {
                    ;
                }
                bVar4 = true;
            }
            else
            {
                PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN  - loading stuff" );
                PRINTNL();
                WAIT( 0 );
            }
        }
        if (NOT bParam0)
        {
            WAIT( 0 );
        }
        PRINTSTRING( "WAIT_FOR_ANY_NEARBY_CLUBS_TO_STREAM_IN - finished" );
        PRINTNL();
    }
    return;
}

int sub_24582(unknown uParam0, unknown uParam1, unknown uParam2)
{
    vector vVar5;
    vector vVar8;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;

    vVar5 = {sub_24593( uParam1 )};
    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_24753( uParam0, uParam1, 0 ))
        {
            return 1;
        }
        else
        {
            GET_CHAR_COORDINATES( uParam0, ref vVar8.x, ref vVar8.y, ref vVar8.z );
            uVar11 = {vVar5 - vVar8};
            uVar11._fU8 = 0.00000000;
            if ((VMAG2( uVar11 )) < (uParam2 * uParam2))
            {
                return 1;
            }
        }
    }
    return 0;
}

vector sub_24593(unknown uParam0)
{
    switch (uParam0)
    {
        case 0:
        return vector( 14.17720000, 397.67000000, -399.10690000);
        break;
        case 1:
        return vector( 9.80000000, 153.41000000, -468.03000000);
        break;
        case 2:
        return vector( 11.54000000, 356.98000000, -440.28000000);
        break;
    }
    return vector( 0.00000000, 0.00000000, 0.00000000);
}

int sub_24753(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown uVar5;
    unknown uVar6;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        if (sub_24781( uParam0, uParam1 ))
        {
            return 1;
        }
        switch (uParam1)
        {
            case 0:
            if (bParam2)
            {
                if ((LOCATE_CHAR_ON_FOOT_3D( uParam0, -399.10690000, 397.39960000, 14.17720000, 1.60000000, 1.60000000, 1.60000000, 0 )) || ((IS_CHAR_ON_ANY_BIKE( uParam0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -399.10690000, 397.39960000, 14.17720000, 1.60000000, 1.60000000, 1.60000000, 0 ))))
                {
                    return 1;
                }
            }
            break;
            case 1:
            if (bParam2)
            {
                if ((LOCATE_CHAR_ON_FOOT_3D( uParam0, -466.92400000, 153.19500000, 9.87400000, 1.60000000, 1.60000000, 1.60000000, 0 )) || ((IS_CHAR_ON_ANY_BIKE( uParam0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -466.92400000, 153.19500000, 9.87400000, 1.60000000, 1.60000000, 1.60000000, 0 ))))
                {
                    return 1;
                }
            }
            break;
            case 2:
            if (bParam2)
            {
                if ((LOCATE_CHAR_ON_FOOT_3D( uParam0, -440.46400000, 356.91300000, 11.71800000, 1.60000000, 1.60000000, 1.60000000, 0 )) || ((IS_CHAR_ON_ANY_BIKE( uParam0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( uParam0, -440.46400000, 356.91300000, 11.71800000, 1.60000000, 1.60000000, 1.60000000, 0 ))))
                {
                    return 1;
                }
            }
            break;
        }
    }
    return 0;
}

int sub_24781(unknown uParam0, unknown uParam1)
{
    int iVar4;
    int iVar5;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        switch (uParam1)
        {
            case 0:
            GET_INTERIOR_AT_COORDS( -395.22000000, 400.50000000, 14.40000000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            break;
            case 1:
            GET_INTERIOR_AT_COORDS( -483.90180000, 149.43310000, 7.56070000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            break;
            case 2:
            GET_INTERIOR_AT_COORDS( -431.82560000, 351.76230000, 11.71660000, ref iVar4 );
            GET_INTERIOR_FROM_CHAR( uParam0, ref iVar5 );
            if (NOT (iVar4 == nil))
            {
                if (iVar4 == iVar5)
                {
                    return 1;
                }
            }
            if (IS_CHAR_IN_AREA_3D( sub_2210(), -438.84750000, 349.78630000, 9.59170000, -436.09750000, 353.78630000, 14.46670000, 0 ))
            {
                return 1;
            }
            break;
        }
    }
    return 0;
}

void sub_25859(unknown uParam0)
{
    g_U30114[uParam0] = 1;
    return;
}

void sub_26200(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;

    if (NOT (sub_26225( uParam0, uParam1, uParam2, l_U138, 1120403456 )))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_2210(), uParam0, uParam1, uParam2, 50.00000000, 50.00000000, 50.00000000, 0 )))
        {
            GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar5 );
            if (DOES_VEHICLE_EXIST( uVar5 ))
            {
                if (NOT (IS_CAR_DEAD( uVar5 )))
                {
                    if (NOT (LOCATE_CAR_3D( uVar5, uParam0, uParam1, uParam2, l_U138, l_U138, l_U138, 0 )))
                    {
                        CLEAR_AREA_OF_CARS( uParam0, uParam1, uParam2, l_U138 );
                    }
                }
            }
            else
            {
                CLEAR_AREA_OF_CARS( uParam0, uParam1, uParam2, l_U138 );
            }
        }
    }
    return;
}

int sub_26225(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (sub_26242( uParam0, uParam1, uParam2, uParam3 ))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_2D( sub_2210(), uParam0, uParam1, uParam4, uParam4, 0 )))
        {
            return 0;
        }
        else if (IS_SCREEN_FADED_OUT())
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    return 0;
}

int sub_26242(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;

    GET_GAME_VIEWPORT_ID( ref uVar6 );
    if (CAM_IS_SPHERE_VISIBLE( uVar6, uParam0, uParam1, uParam2, uParam3 ))
    {
        return 1;
    }
    return 0;
}

void sub_26659()
{
    sub_26669( 0 );
    CLEAR_WANTED_LEVEL( sub_2084() );
    g_U2792 = 1;
    ENABLE_SCENE_STREAMING( 0 );
    BEGIN_CAM_COMMANDS( ref l_U196 );
    if (NOT (IS_CHAR_DEAD( l_U154 )))
    {
        if (IS_PED_IN_GROUP( l_U154 ))
        {
            REMOVE_CHAR_FROM_GROUP( l_U154 );
        }
    }
    if (NOT l_U222)
    {
        sub_26904();
    }
    SET_USE_HIGHDOF( 1 );
    SET_WIDESCREEN_BORDERS( 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    SET_CAM_POS( l_U209, 11.16428000, -439.19850000, 21.79594000 );
    SET_CAM_ROT( l_U209, -34.27626000, -0.00000000, -153.55170000 );
    SET_CAM_FOV( l_U209, 45.00000000 );
    SET_CAM_POS( l_U208, 11.53232000, -439.93860000, 21.23276000 );
    SET_CAM_ROT( l_U208, -34.27626000, -0.00000000, -153.55170000 );
    SET_CAM_FOV( l_U208, 45.00000000 );
    SET_CAM_FAR_DOF( l_U209, 30.00000000 );
    SET_CAM_NEAR_DOF( l_U209, 2.00000000 );
    SET_CAM_FAR_DOF( l_U208, 30.00000000 );
    SET_CAM_NEAR_DOF( l_U208, 2.00000000 );
    SET_CAM_POS( l_U207, 17.17599000, -438.18670000, 14.26696000 );
    SET_CAM_ROT( l_U207, 3.28728200, -0.00000000, 168.96240000 );
    SET_CAM_FOV( l_U207, 36.30002000 );
    SET_CAM_FAR_DOF( l_U207, 30.00000000 );
    SET_CAM_NEAR_DOF( l_U207, 2.00000000 );
    SETTIMERA( 0 );
    while (l_U219 == 1)
    {
        switch (l_U221)
        {
            case 0:
            if (NOT (IS_CHAR_INJURED( l_U154 )))
            {
                if (NOT l_U169)
                {
                    OPEN_SEQUENCE_TASK( ref l_U211 );
                    TASK_LEAVE_ANY_CAR( 0 );
                    TASK_LOOK_AT_CHAR( 0, sub_2210(), -2, 4 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 21.22660000, -444.47020000, 12.55200000, 2, 30000, 1 );
                    CLOSE_SEQUENCE_TASK( l_U211 );
                    TASK_PERFORM_SEQUENCE( l_U154, l_U211 );
                    CLEAR_SEQUENCE_TASK( l_U211 );
                    TASK_LOOK_AT_CHAR( sub_2210(), l_U154, -2, 0 );
                }
                else
                {
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U154 );
                    SET_CHAR_COORDINATES( l_U154, 16.63250000, -444.97680000, -101.00000000 );
                    SET_CHAR_HEADING( l_U154, 193.53620000 );
                    if (NOT (IS_CHAR_INJURED( sub_2210() )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_2210() );
                        SET_CHAR_COORDINATES( sub_2210(), 16.71370000, -447.41250000, -101.00000000 );
                        SET_CHAR_HEADING( sub_2210(), 358.80360000 );
                        TASK_LOOK_AT_CHAR( sub_2210(), l_U154, -1, 0 );
                        TASK_LOOK_AT_CHAR( l_U154, sub_2210(), -1, 0 );
                    }
                }
            }
            SET_CAM_ACTIVE( l_U210, 1 );
            SET_CAM_PROPAGATE( l_U210, 1 );
            SET_CAM_INTERP_STYLE_CORE( l_U210, l_U209, l_U208, 6500, 0 );
            sub_6905( "ROM1_ARR1", ref l_U212, 6, 1 );
            GET_GAME_TIMER( ref l_U201 );
            l_U221++;
            break;
            case 1:
            if (IS_SCREEN_FADED_OUT())
            {
                DO_SCREEN_FADE_IN( 500 );
                while (NOT IS_SCREEN_FADED_IN())
                {
                    WAIT( 0 );
                }
                GET_GAME_TIMER( ref l_U201 );
            }
            if (NOT (IS_CHAR_INJURED( l_U154 )))
            {
                if (((NOT (IS_CHAR_IN_ANY_CAR( l_U154 ))) AND (NOT (IS_CAM_PROPAGATING( l_U207 )))) AND (NOT l_U169))
                {
                    sub_2389( ref l_U156 );
                    if (IS_VEH_DRIVEABLE( l_U156 ))
                    {
                        GET_OFFSET_FROM_CAR_IN_WORLD_COORDS( l_U156, 1.70000000, 0.00000000, 0.00000000, ref l_U186._fU0, ref l_U186._fU4, ref l_U186._fU8 );
                        SET_CHAR_COORDINATES( l_U154, l_U186._fU0, l_U186._fU4, -101.00000000 );
                        SET_CHAR_HEADING( l_U154, 0.00000000 );
                    }
                    if (DOES_CAM_EXIST( l_U210 ))
                    {
                        SET_CAM_ACTIVE( l_U210, 0 );
                        SET_CAM_PROPAGATE( l_U210, 0 );
                    }
                    if (DOES_CAM_EXIST( l_U207 ))
                    {
                        SET_CAM_ACTIVE( l_U207, 1 );
                        SET_CAM_PROPAGATE( l_U207, 1 );
                    }
                }
                else if (((NOT (IS_CHAR_IN_ANY_CAR( l_U154 ))) AND (NOT (IS_CAM_PROPAGATING( l_U207 )))) AND (l_U169))
                {
                    if ((NOT (sub_1047( l_U212 ))) AND (NOT l_U170))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U154 );
                        OPEN_SEQUENCE_TASK( ref l_U211 );
                        TASK_LOOK_AT_CHAR( 0, sub_2210(), -2, 4 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 21.22660000, -444.47020000, 12.55200000, 2, 30000, 1 );
                        CLOSE_SEQUENCE_TASK( l_U211 );
                        TASK_PERFORM_SEQUENCE( l_U154, l_U211 );
                        CLEAR_SEQUENCE_TASK( l_U211 );
                        SET_CHAR_HEADING( l_U154, 295.46360000 );
                        TASK_LOOK_AT_CHAR( sub_2210(), l_U154, -2, 0 );
                        if (DOES_CAM_EXIST( l_U210 ))
                        {
                            SET_CAM_ACTIVE( l_U210, 0 );
                            SET_CAM_PROPAGATE( l_U210, 0 );
                        }
                        if (DOES_CAM_EXIST( l_U207 ))
                        {
                            SET_CAM_ACTIVE( l_U207, 1 );
                            SET_CAM_PROPAGATE( l_U207, 1 );
                        }
                        l_U170 = 1;
                    }
                }
                GET_SCRIPT_TASK_STATUS( l_U154, 29, ref l_U158 );
                if (((l_U158 == 7) || (l_U158 == 2)) AND (NOT (sub_1047( l_U212 ))))
                {
                    l_U221++;
                }
                if (LOCATE_CHAR_ANY_MEANS_3D( l_U154, 18.89000000, -444.41000000, 13.26000000, 1.50000000, 1.50000000, 1.50000000, 0 ))
                {
                    l_U221++;
                }
                GET_GAME_TIMER( ref l_U200 );
                if ((l_U200 - l_U201) > 15000)
                {
                    l_U221++;
                }
            }
            else
            {
                l_U221++;
            }
            break;
            case 2:
            l_U219 = 0;
            break;
        }
        if (sub_28743())
        {
            l_U219 = 0;
            if (IS_SCREEN_FADED_IN())
            {
                DO_SCREEN_FADE_OUT( 500 );
                while (NOT IS_SCREEN_FADED_OUT())
                {
                    WAIT( 0 );
                }
            }
            INCREMENT_INT_STAT( 372, 1 );
            sub_1231( ref l_U212, 0 );
            if (DOES_CAM_EXIST( l_U210 ))
            {
                SET_CAM_ACTIVE( l_U210, 0 );
                SET_CAM_PROPAGATE( l_U210, 0 );
            }
            SET_USE_HIGHDOF( 0 );
            SET_WIDESCREEN_BORDERS( 0 );
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
        }
        WAIT( 0 );
    }
    if (DOES_CAM_EXIST( l_U210 ))
    {
        SET_CAM_ACTIVE( l_U210, 0 );
        SET_CAM_PROPAGATE( l_U210, 0 );
    }
    if (DOES_CAM_EXIST( l_U207 ))
    {
        SET_CAM_ACTIVE( l_U207, 0 );
        SET_CAM_PROPAGATE( l_U210, 0 );
    }
    SET_USE_HIGHDOF( 0 );
    SET_WIDESCREEN_BORDERS( 0 );
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    END_CAM_COMMANDS( ref l_U196 );
    ENABLE_SCENE_STREAMING( 1 );
    TASK_CLEAR_LOOK_AT( sub_2210() );
    SET_CAM_BEHIND_PED( sub_2210() );
    SET_GAME_CAM_HEADING( 0.00000000 );
    if (NOT (IS_CHAR_INJURED( l_U154 )))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U154 );
        SET_CHAR_COORDINATES( l_U154, 36.25000000, -404.44000000, 14.81000000 );
    }
    DELETE_CHAR( ref l_U154 );
    if (IS_SCREEN_FADED_OUT())
    {
        DO_SCREEN_FADE_IN( 500 );
        while (NOT IS_SCREEN_FADED_IN())
        {
            WAIT( 0 );
        }
    }
    SET_CHAR_CURRENT_WEAPON_VISIBLE( sub_2210(), 1 );
    SET_PLAYER_CONTROL( sub_2084(), 1 );
    return;
}

void sub_26669(unknown uParam0)
{
    PRINTSTRING( "\n KILL_ANY_AMBIENT_SPEECH CALLED***************************************" );
    if (IS_SCRIPTED_CONVERSATION_ONGOING())
    {
        if ((g_U8865 >= 1) AND (g_U8865 <= 3))
        {
            ABORT_SCRIPTED_CONVERSATION( uParam0 );
        }
    }
    return;
}

void sub_26904()
{
    if (NOT (DOES_CAM_EXIST( l_U206 )))
    {
        CREATE_CAM( 14, ref l_U206 );
    }
    if (NOT (DOES_CAM_EXIST( l_U207 )))
    {
        CREATE_CAM( 14, ref l_U207 );
    }
    if (NOT (DOES_CAM_EXIST( l_U208 )))
    {
        CREATE_CAM( 14, ref l_U208 );
    }
    if (NOT (DOES_CAM_EXIST( l_U209 )))
    {
        CREATE_CAM( 14, ref l_U209 );
    }
    if (NOT (DOES_CAM_EXIST( l_U210 )))
    {
        CREATE_CAM( 3, ref l_U210 );
    }
    l_U222 = 1;
    return;
}

int sub_28743()
{
    if ((((IS_CONTROL_JUST_PRESSED( 0, 77 )) || (IS_CONTROL_JUST_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_JUST_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_29318()
{
    g_U25 = 81;
    sub_29338( l_U218 );
    sub_381();
    return;
}

void sub_29338(unknown uParam0)
{
    unknown uVar3;

    uVar3 = sub_1475( uParam0 );
    if (NOT g_U30257[uVar3]._fU4)
    {
        sub_578( "Interactions_Move_On_To_Next_Sequence: Character not active - Tell Keith" );
        return;
    }
    sub_29458( uParam0 );
    g_U30257[uVar3]._fU28++;
    sub_31137( uParam0, uVar3 );
    return;
}

void sub_29458(unknown uParam0)
{
    switch (uParam0)
    {
        case 13:
        sub_29500();
        break;
        case 14:
        sub_30473();
        break;
        case 15:
        sub_30646();
        break;
        default: sub_578( "Interactions_Pass: Unknown Random Interaction Character ID - tell Keith" );
    }
    sub_30915();
    sub_30999();
    return;
}

void sub_29500()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 13;
    uVar3 = sub_1475( iVar2 );
    sub_29536( ref g_U30257[uVar3]._fU8, 48, 0, 0 );
    g_U30257[uVar3]._fU24 = 0;
    switch (g_U30257[uVar3]._fU28)
    {
        case 1:
        sub_30184( 0 );
        break;
        case 2:
        sub_30184( 500 );
        break;
        default: sub_578( "Interactions_Arnaud_Pass: Unknown Arnaud Sequence - tell Keith" );
    }
    return;
}

void sub_29536(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_29589( iParam0, uParam1, uParam2 );
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
        sub_29721( iParam0 + 0 );
    }
    return;
}

void sub_29589(int iParam0, int iParam1, int iParam2)
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
        sub_29721( iParam0 + 0 );
    }
    return;
}

void sub_29721(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_29752( iParam0->_fU4 )))
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

int sub_29752(unknown uParam0)
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

void sub_30184(unknown uParam0)
{
    sub_30195( uParam0 );
    return;
}

void sub_30195(unknown uParam0)
{
    ADD_SCORE( sub_2084(), uParam0 );
    sub_30220( uParam0 );
    return;
}

void sub_30220(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_578( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_30473()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 14;
    uVar3 = sub_1475( iVar2 );
    sub_29536( ref g_U30257[uVar3]._fU8, 48, 0, 0 );
    g_U30257[uVar3]._fU24 = 0;
    switch (g_U30257[uVar3]._fU28)
    {
        case 1:
        sub_30184( 500 );
        break;
        default: sub_578( "Interactions_Daisy_Pass: Unknown Daisy Sequence - tell Keith" );
    }
    return;
}

void sub_30646()
{
    int iVar2;
    unknown uVar3;

    iVar2 = 15;
    uVar3 = sub_1475( iVar2 );
    sub_29536( ref g_U30257[uVar3]._fU8, 24, 0, 0 );
    g_U30257[uVar3]._fU24 = 0;
    switch (g_U30257[uVar3]._fU28)
    {
        case 1:
        sub_30184( 0 );
        break;
        case 2:
        sub_30184( 0 );
        break;
        default: sub_578( "Interactions_Margot_Pass: Unknown Margot Sequence - tell Keith" );
    }
    return;
}

void sub_30915()
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

void sub_30999()
{
    sub_31008();
    StrCopy( ref g_U10966, "RIPASS", 16 );
    return;
}

void sub_31008()
{
    if (g_U0)
    {
        return;
    }
    if (COMPARE_STRING( ref g_U10966, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U10966 );
    StrCopy( ref g_U10966, "", 16 );
    return;
}

void sub_31137(unknown uParam0, unknown uParam1)
{
    sub_31148( uParam1 );
    switch (uParam0)
    {
        case 13:
        if (g_U30257[uParam1]._fU28 == 1)
        {
            g_U30257[uParam1]._fU36 = 1;
            g_U30257[uParam1]._fU40 = {-65.59000000, -74.01000000, 13.76000000};
            g_U30257[uParam1]._fU52 = 1;
            StrCopy( ref g_U30257[uParam1]._fU60, "Arnaud1", 16 );
        }
        else if (g_U30257[uParam1]._fU28 == 2)
        {
            g_U30257[uParam1]._fU36 = 1;
            g_U30257[uParam1]._fU40 = {595.69100000, 1645.17300000, 29.30500000};
            g_U30257[uParam1]._fU52 = 1;
            StrCopy( ref g_U30257[uParam1]._fU60, "Arnaud2", 16 );
        }
        break;
        case 14:
        if (g_U30257[uParam1]._fU28 == 1)
        {
            g_U30257[uParam1]._fU36 = 1;
            g_U30257[uParam1]._fU40 = {-483.47000000, 157.61000000, 6.62300000};
            g_U30257[uParam1]._fU52 = 0;
            StrCopy( ref g_U30257[uParam1]._fU60, "Daisy1", 16 );
        }
        break;
        case 15:
        if (g_U30257[uParam1]._fU28 == 1)
        {
            g_U30257[uParam1]._fU36 = 1;
            g_U30257[uParam1]._fU40 = {-442.27420000, 365.23310000, 9.25290000};
            g_U30257[uParam1]._fU52 = 0;
            StrCopy( ref g_U30257[uParam1]._fU60, "Margot1", 16 );
        }
        else if (g_U30257[uParam1]._fU28 == 2)
        {
            g_U30257[uParam1]._fU36 = 1;
            g_U30257[uParam1]._fU40 = {456.33360000, -506.40220000, 16.68020000};
            g_U30257[uParam1]._fU52 = 0;
            StrCopy( ref g_U30257[uParam1]._fU60, "Margot2", 16 );
        }
        break;
    }
    return;
}

void sub_31148(unknown uParam0)
{
    g_U30257[uParam0]._fU36 = 0;
    g_U30257[uParam0]._fU40 = {0.00000000, 0.00000000, 0.00000000};
    g_U30257[uParam0]._fU52 = 1;
    StrCopy( ref g_U30257[uParam0]._fU60, "", 16 );
    sub_31233( uParam0 );
    return;
}

void sub_31233(unknown uParam0)
{
    sub_31244( uParam0 );
    sub_31322( uParam0 );
    return;
}

void sub_31244(unknown uParam0)
{
    if (DOES_BLIP_EXIST( g_U30257[uParam0]._fU56 ))
    {
        REMOVE_BLIP_AND_CLEAR_INDEX( ref g_U30257[uParam0]._fU56 );
    }
    g_U30257[uParam0]._fU56 = nil;
    return;
}

void sub_31322(unknown uParam0)
{
    g_U30257[uParam0]._fU76 = 0;
    return;
}

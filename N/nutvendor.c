void main()
{
    l_U4 = 0.40000000;
    l_U5 = 0;
    l_U9 = 0;
    l_U11 = 0;
    l_U12 = 0;
    l_U57 = 0;
    l_U58 = 0;
    l_U59 = 0;
    l_U60 = 0;
    l_U65 = "ObjScpt_07";
    l_U66 = 0;
    l_U67 = 0;
    l_U68 = 1;
    l_U69 = 0;
    l_U70 = 0;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_117();
    }
    while (true)
    {
        WAIT( 0 );
        if (g_U9890 != 1)
        {
            if (IS_PLAYER_PLAYING( sub_475() ))
            {
                if (DOES_OBJECT_EXIST( l_U94 ))
                {
                    if (IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE( l_U94 ))
                    {
                        switch (l_U11)
                        {
                            case 0:
                            sub_1134( l_U94 );
                            l_U11 = 1;
                            break;
                            case 1:
                            sub_2166( l_U94 );
                            sub_2543( l_U94 );
                            break;
                            case 2:
                            sub_2554( l_U94 );
                            break;
                            case 3:
                            sub_7393();
                            sub_2543( l_U94 );
                            sub_7623();
                            break;
                            case 4:
                            sub_2543( l_U94 );
                            sub_8082();
                            l_U57 = 0;
                            break;
                            case 6:
                            if (NOT (IS_CHAR_INJURED( l_U89 )))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U89 );
                                SET_CHAR_KEEP_TASK( l_U89, 1 );
                                TASK_WANDER_STANDARD( l_U89 );
                                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U89 );
                                l_U89 = nil;
                            }
                            if (NOT (IS_CHAR_INJURED( l_U88 )))
                            {
                                CLEAR_CHAR_TASKS( l_U88 );
                            }
                            if (DOES_OBJECT_EXIST( l_U90 ))
                            {
                                if (IS_OBJECT_ATTACHED( l_U90 ))
                                {
                                    DETACH_OBJECT( l_U90, 1 );
                                }
                                DELETE_OBJECT( ref l_U90 );
                                MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U90 );
                            }
                            if (l_U60 == 0)
                            {
                                if (NOT (IS_CHAR_INJURED( l_U88 )))
                                {
                                    TASK_ACHIEVE_HEADING( l_U88, l_U49 );
                                }
                            }
                            if (l_U12 != 19)
                            {
                                if (DOES_OBJECT_EXIST( l_U91 ))
                                {
                                    if (IS_OBJECT_ATTACHED( l_U91 ))
                                    {
                                        DETACH_OBJECT( l_U91, 1 );
                                    }
                                    DELETE_OBJECT( ref l_U91 );
                                    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U91 );
                                }
                            }
                            l_U71[1] = 0;
                            l_U71[0] = 0;
                            l_U74 = 0;
                            CREATE_OBJECT( 1432278665, l_U22._fU0, l_U22._fU4, l_U22._fU8, ref l_U90, 1 );
                            SET_OBJECT_VISIBLE( l_U90, 0 );
                            SET_OBJECT_COLLISION( l_U90, 0 );
                            if (IS_PLAYER_PLAYING( sub_475() ))
                            {
                                sub_652( 0 );
                                SET_PLAYER_CONTROL_ADVANCED( sub_475(), 0, 0, 1 );
                            }
                            l_U12 = 0;
                            l_U11 = 7;
                            break;
                            case 7:
                            sub_2543( l_U94 );
                            sub_10281();
                            break;
                        }
                    }
                    else
                    {
                        sub_117();
                    }
                }
                else
                {
                    sub_117();
                }
            }
            else
            {
                sub_117();
            }
        }
        else
        {
            sub_117();
        }
    }
    return;
}

void sub_117()
{
    sub_139( "ObjScpt_07" );
    sub_205( 2, "ObjScpt_07" );
    sub_205( 2, "ClaScpt_07" );
    sub_205( 2, "NULL" );
    if (l_U11 == 7)
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_603() );
        sub_652( 1 );
    }
    if (DOES_OBJECT_EXIST( l_U90 ))
    {
        if (IS_OBJECT_ATTACHED( l_U90 ))
        {
            DETACH_OBJECT( l_U90, 1 );
        }
        DELETE_OBJECT( ref l_U90 );
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U90 );
    }
    if (DOES_OBJECT_EXIST( l_U91 ))
    {
        if (IS_OBJECT_ATTACHED( l_U91 ))
        {
            DETACH_OBJECT( l_U91, 1 );
        }
        DELETE_OBJECT( ref l_U91 );
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U91 );
    }
    if (l_U59 != 0)
    {
        STOP_PTFX( l_U59 );
    }
    if (NOT (IS_CHAR_INJURED( l_U88 )))
    {
        if (l_U70 == 1)
        {
            CLEAR_CHAR_TASKS( l_U88 );
            SET_CHAR_KEEP_TASK( l_U88, 1 );
            TASK_COMBAT( l_U88, sub_603() );
        }
        else
        {
            CLEAR_CHAR_TASKS( l_U88 );
        }
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U88 );
    }
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_139(unknown uParam0)
{
    if (DOES_TEXT_LABEL_EXIST( uParam0 ))
    {
        if (IS_THIS_HELP_MESSAGE_BEING_DISPLAYED( uParam0 ))
        {
            CLEAR_HELP();
        }
    }
    return;
}

void sub_205(int iParam0, string sParam1)
{
    string sVar4;

    if (USING_STANDARD_CONTROLS())
    {
        sVar4 = "CNTBUT1";
    }
    else
    {
        sVar4 = "CNTBUT2";
    }
    if (IS_STRING_NULL( sParam1 ))
    {
        sParam1 = "NULL";
    }
    else if (DOES_TEXT_LABEL_EXIST( sParam1 ))
    {
        if ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( sParam1 )) == 0)
        {
            sParam1 = "NULL";
        }
    }
    else
    {
        sParam1 = "NULL";
    }
    if (NOT (IS_STRING_NULL( sParam1 )))
    {
        if (COMPARE_STRING( sParam1, ref g_U9174 ))
        {
            if ((g_U9172 == iParam0) AND (l_U3))
            {
                StrCopy( ref g_U9174, "", 16 );
                g_U9172 = 0;
                g_U9173 = 0;
                g_U9178 = nil;
                l_U3 = 0;
                if (l_U1)
                {
                    sub_426();
                    l_U1 = 0;
                }
            }
            if (l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_475(), 1 );
                l_U2 = 0;
            }
            if (l_U0)
            {
                if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar4 ))
                {
                    CLEAR_HELP();
                }
                l_U0 = 0;
            }
        }
    }
    return;
}

void sub_426()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_475()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_603()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_652(int iParam0)
{
    if (iParam0 == 0)
    {
        SET_PLAYER_CONTROL( sub_475(), 0 );
    }
    else
    {
        SET_PLAYER_CONTROL( sub_475(), 1 );
    }
    return;
}

void sub_1134(unknown uParam0)
{
    l_U87 = sub_1143();
    REQUEST_ANIMS( "amb@nutcart" );
    REQUEST_MODEL( l_U87 );
    REQUEST_MODEL( 1432278665 );
    sub_1843();
    l_U40._fU0 = 0.00000000;
    l_U40._fU4 = 0.00000000;
    l_U40._fU8 = 0.00000000;
    l_U40._fU0 = 0.00000000;
    l_U40._fU4 = 0.00000000;
    l_U40._fU8 = 0.00000000;
    sub_1932();
    sub_1969( uParam0 );
    return;
}

void sub_1143()
{
    int iVar2;
    unknown uVar3;
    int Result;
    int iVar5;
    int iVar6;
    int iVar7;

    Result = -186113957;
    iVar5 = 142730876;
    iVar6 = 768442188;
    iVar7 = 420915580;
    FIND_PRIMARY_POPULATION_ZONE_GROUP( ref iVar2, ref uVar3 );
    if (iVar2 == 0)
    {
        return Result;
    }
    if (iVar2 == 1)
    {
        return iVar7;
    }
    if (iVar2 == 2)
    {
        return Result;
    }
    if (iVar2 == 3)
    {
        return Result;
    }
    if (iVar2 == 4)
    {
        return iVar7;
    }
    if (iVar2 == 5)
    {
        return iVar7;
    }
    if (iVar2 == 6)
    {
        return Result;
    }
    if (iVar2 == 7)
    {
        return Result;
    }
    if (iVar2 == 8)
    {
        return Result;
    }
    if (iVar2 == 9)
    {
        return Result;
    }
    if (iVar2 == 10)
    {
        return Result;
    }
    if (iVar2 == 11)
    {
        return iVar5;
    }
    if (iVar2 == 13)
    {
        return iVar5;
    }
    if (iVar2 == 14)
    {
        return Result;
    }
    if (iVar2 == 15)
    {
        return iVar6;
    }
    if (iVar2 == 16)
    {
        return iVar7;
    }
    if (iVar2 == 17)
    {
        return iVar7;
    }
    if (iVar2 == 18)
    {
        return iVar6;
    }
    if (iVar2 == 19)
    {
        return Result;
    }
    if (iVar2 == 20)
    {
        return Result;
    }
    if (iVar2 == 21)
    {
        return iVar6;
    }
    if (iVar2 == 22)
    {
        return Result;
    }
    if (iVar2 == 23)
    {
        return Result;
    }
    if (iVar2 == 24)
    {
        return iVar6;
    }
    if (iVar2 == 25)
    {
        return iVar5;
    }
    if (iVar2 == 26)
    {
        return iVar5;
    }
    if (iVar2 == 27)
    {
        return iVar5;
    }
    if (iVar2 == 28)
    {
        return iVar5;
    }
    if (iVar2 == 29)
    {
        return iVar5;
    }
    if (iVar2 == 30)
    {
        return iVar7;
    }
    if (iVar2 == 31)
    {
        return iVar7;
    }
    if (iVar2 == 32)
    {
        return iVar7;
    }
    if (iVar2 == 33)
    {
        return Result;
    }
    if (iVar2 == 34)
    {
        return iVar5;
    }
    if (iVar2 == 35)
    {
        return iVar5;
    }
    if (iVar2 == 36)
    {
        return iVar5;
    }
    if (iVar2 == 37)
    {
        return Result;
    }
    if (iVar2 == 38)
    {
        return Result;
    }
    if (iVar2 == 39)
    {
        return iVar6;
    }
    if (iVar2 == 40)
    {
        return iVar6;
    }
    if (iVar2 == 41)
    {
        return iVar7;
    }
    return Result;
}

void sub_1843()
{
    return;
}

void sub_1932()
{
    l_U65 = "ObjScpt_07";
    return;
}

void sub_1969(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        GET_OBJECT_COORDINATES( uParam0, ref l_U13._fU0, ref l_U13._fU4, ref l_U13._fU8 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -0.20000000, 0.70000000, -0.50000000, ref l_U16._fU0, ref l_U16._fU4, ref l_U16._fU8 );
        GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, -1.30000000, 0.20000000, 0.00000000, ref l_U19._fU0, ref l_U19._fU4, ref l_U19._fU8 );
        GET_HEADING_FROM_VECTOR_2D( l_U19._fU0 - l_U16._fU0, l_U19._fU4 - l_U16._fU4, ref l_U49 );
        l_U53 = l_U49 - 180;
    }
    return;
}

void sub_2166(unknown uParam0)
{
    if ((HAS_MODEL_LOADED( 1432278665 )) AND (HAS_MODEL_LOADED( l_U87 )))
    {
        if (NOT (IS_OBJECT_ON_SCREEN( uParam0 )))
        {
            l_U59 = START_PTFX_ON_OBJ( "ambient_hotdogstand", uParam0, 0.00000000, 0.00000000, 0.80000000, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
            GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS( uParam0, 0.00000000, 0.50000000, -0.50000000, ref l_U22._fU0, ref l_U22._fU4, ref l_U22._fU8 );
            CREATE_OBJECT( 1432278665, l_U22._fU0, l_U22._fU4, l_U22._fU8, ref l_U90, 1 );
            SET_OBJECT_VISIBLE( l_U90, 0 );
            SET_OBJECT_COLLISION( l_U90, 0 );
            SET_OBJECT_LIGHTS( uParam0, 1 );
            CREATE_CHAR( 4, l_U87, l_U16._fU0, l_U16._fU4, l_U16._fU8, ref l_U88, 1 );
            if (NOT (IS_CHAR_INJURED( l_U88 )))
            {
                SET_CHAR_RANDOM_COMPONENT_VARIATION( l_U88 );
                SET_CHAR_HEADING( l_U88, l_U49 );
                SET_CHAR_IN_CUTSCENE( l_U88, 1 );
                TASK_START_SCENARIO_IN_PLACE( l_U88, "scenario_standing", -1082130432 );
                l_U11 = 3;
            }
        }
    }
    return;
}

void sub_2543(unknown uParam0)
{
    unknown uVar3;

    sub_2554( uParam0 );
    if (DOES_CHAR_EXIST( l_U88 ))
    {
        if (IS_CHAR_DEAD( l_U88 ))
        {
            sub_117();
        }
        if (IS_CHAR_FATALLY_INJURED( l_U88 ))
        {
            sub_117();
        }
        if (IS_CHAR_INJURED( l_U88 ))
        {
            sub_117();
        }
        if (IS_PED_FLEEING( l_U88 ))
        {
            sub_117();
        }
        if (NOT (IS_CHAR_INJURED( l_U88 )))
        {
            GET_CURRENT_CHAR_WEAPON( sub_603(), ref uVar3 );
            if (IS_PLAYER_TARGETTING_CHAR( sub_475(), l_U88 ))
            {
                if (NOT sub_3190())
                {
                    SAY_AMBIENT_SPEECH( l_U88, "GUN_RUN", 0, 1, 0 );
                    sub_117();
                }
            }
        }
        if (IS_CHAR_SHOOTING_IN_AREA( sub_603(), l_U13._fU0 - 15, l_U13._fU4 - 15, l_U13._fU0 + 15, l_U13._fU4 + 15, 0 ))
        {
            sub_117();
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U89 )))
    {
        if (((HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U89, sub_603(), 0 )) || (IS_PLAYER_TARGETTING_CHAR( sub_475(), l_U89 ))) || (sub_3425( l_U19 )))
        {
            if (NOT (IS_CHAR_INJURED( l_U88 )))
            {
                CLEAR_CHAR_TASKS( l_U88 );
            }
            sub_3546();
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U89 );
            l_U57 = 0;
            l_U89 = nil;
            l_U71[1] = 0;
            l_U71[0] = 0;
            l_U74 = 0;
            l_U11 = 3;
            l_U12 = 0;
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U89 )))
    {
        if (IS_CHAR_TOUCHING_CHAR( sub_603(), l_U89 ))
        {
            if (NOT (IS_CHAR_INJURED( l_U89 )))
            {
                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U89 );
                TASK_WANDER_STANDARD( l_U89 );
            }
            if (NOT (IS_CHAR_INJURED( l_U88 )))
            {
                CLEAR_CHAR_TASKS( l_U88 );
            }
            sub_3546();
            l_U57 = 0;
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U89 );
            l_U89 = nil;
            l_U71[1] = 0;
            l_U71[0] = 0;
            l_U74 = 0;
            l_U11 = 3;
            l_U12 = 0;
        }
    }
    if (IS_CHAR_IN_MELEE_COMBAT( sub_603() ))
    {
        sub_3546();
    }
    if (NOT (IS_CHAR_INJURED( l_U88 )))
    {
        if (IS_CHAR_IN_MELEE_COMBAT( l_U88 ))
        {
            if (LOCATE_CHAR_ANY_MEANS_CHAR_3D( sub_603(), l_U88, 10.00000000, 10.00000000, 10.00000000, 0 ))
            {
                l_U69 = 1;
            }
        }
    }
    if (sub_4031())
    {
        sub_3546();
    }
    if (IS_CHAR_SHOOTING_IN_AREA( sub_603(), l_U13._fU0 - 30, l_U13._fU4 - 30, l_U13._fU0 + 30, l_U13._fU4 + 30, 0 ))
    {
        sub_117();
    }
    if (l_U11 == 7)
    {
        if ((((l_U12 == 15) || (l_U12 == 17)) || (l_U12 == 18)) || (l_U12 == 19))
        {
            if (sub_4296())
            {
                if (DOES_OBJECT_EXIST( l_U91 ))
                {
                    if (IS_OBJECT_ATTACHED( l_U91 ))
                    {
                        DETACH_OBJECT( l_U91, 1 );
                    }
                    DELETE_OBJECT( ref l_U91 );
                    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U91 );
                    if (NOT (IS_CONTROL_PRESSED( 2, 2 )))
                    {
                        CLEAR_CHAR_TASKS( sub_603() );
                    }
                    sub_652( 1 );
                    l_U12 = 19;
                }
            }
        }
    }
    if (NOT (IS_CHAR_DEAD( l_U89 )))
    {
        if (HAS_CHAR_BEEN_DAMAGED_BY_CAR( l_U89, 0 ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U89 );
            sub_3546();
            l_U89 = nil;
            l_U71[1] = 0;
            l_U71[0] = 0;
            l_U74 = 0;
            l_U11 = 3;
            l_U12 = 0;
        }
    }
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (NOT (IS_OBJECT_UPRIGHT( uParam0, 20 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_OBJECT_3D( sub_603(), uParam0, 4.00000000, 4.00000000, 4.00000000, 0 ))
            {
                l_U70 = 1;
            }
            sub_117();
        }
        if ((GET_OBJECT_FRAGMENT_DAMAGE_HEALTH( uParam0, 0 )) < l_U4)
        {
            sub_4710( uParam0 );
            sub_117();
        }
    }
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (NOT (LOCATE_OBJECT_3D( uParam0, l_U13._fU0, l_U13._fU4, l_U13._fU8, 2.00000000, 2.00000000, 2.00000000, 0 )))
        {
            sub_1969( uParam0 );
        }
    }
    if (IS_PLAYER_PLAYING( sub_475() ))
    {
        if (IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_475() ))
        {
            GET_INTERIOR_FROM_CHAR( sub_603(), ref l_U92 );
            if (l_U92 == nil)
            {
                if (HAVE_ANIMS_LOADED( "amb@nutcart" ))
                {
                    if (NOT (IS_CHAR_INJURED( l_U88 )))
                    {
                        if ((l_U11 != 1) AND (NOT (IS_CHAR_IN_ANY_CAR( sub_603() ))))
                        {
                            if (LOCATE_CHAR_ANY_MEANS_3D( sub_603(), l_U19._fU0, l_U19._fU4, l_U19._fU8, 2.00000000, 2.00000000, 1.00000000, 0 ))
                            {
                                if (l_U11 != 7)
                                {
                                    if (l_U69 == 0)
                                    {
                                        if (NOT (IS_PED_RAGDOLL( l_U88 )))
                                        {
                                            if (NOT (IS_CHAR_GETTING_UP( l_U88 )))
                                            {
                                                if (NOT (IS_CHAR_IN_MELEE_COMBAT( l_U88 )))
                                                {
                                                    if (l_U60 == 0)
                                                    {
                                                        if (l_U11 != 2)
                                                        {
                                                            sub_1932();
                                                            if (sub_5234( 2, 0 ))
                                                            {
                                                                if (sub_5495( 2, l_U65, 0 ))
                                                                {
                                                                    if (IS_SCORE_GREATER( sub_475(), 5 ))
                                                                    {
                                                                        sub_139( l_U65 );
                                                                        REMOVE_PED_HELMET( sub_603(), 1 );
                                                                        g_U9060++;
                                                                        if (g_U9060 < g_U9057)
                                                                        {
                                                                            if (USING_STANDARD_CONTROLS())
                                                                            {
                                                                                l_U65 = "ObjScpt_07";
                                                                            }
                                                                            else
                                                                            {
                                                                                l_U65 = "ClaScpt_07";
                                                                            }
                                                                        }
                                                                        else
                                                                        {
                                                                            l_U65 = "NULL";
                                                                        }
                                                                        l_U11 = 6;
                                                                    }
                                                                    else
                                                                    {
                                                                        sub_6268( "FAIL_TRAN", 3000, 0 );
                                                                    }
                                                                }
                                                            }
                                                            else
                                                            {
                                                                sub_205( 2, "ObjScpt_07" );
                                                                sub_205( 2, "ClaScpt_07" );
                                                                sub_205( 2, "NULL" );
                                                            }
                                                        }
                                                        else
                                                        {
                                                            sub_205( 2, "ObjScpt_07" );
                                                            sub_205( 2, "ClaScpt_07" );
                                                            sub_205( 2, "NULL" );
                                                        }
                                                    }
                                                    else
                                                    {
                                                        sub_205( 2, "ObjScpt_07" );
                                                        sub_205( 2, "ClaScpt_07" );
                                                        sub_205( 2, "NULL" );
                                                    }
                                                }
                                                else
                                                {
                                                    sub_205( 2, "ObjScpt_07" );
                                                    sub_205( 2, "ClaScpt_07" );
                                                    sub_205( 2, "NULL" );
                                                }
                                            }
                                            else
                                            {
                                                sub_205( 2, "ObjScpt_07" );
                                                sub_205( 2, "ClaScpt_07" );
                                                sub_205( 2, "NULL" );
                                            }
                                        }
                                        else
                                        {
                                            sub_205( 2, "ObjScpt_07" );
                                            sub_205( 2, "ClaScpt_07" );
                                            sub_205( 2, "NULL" );
                                        }
                                    }
                                    else if (l_U68 == 0)
                                    {
                                        CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH( l_U88 );
                                        sub_6690();
                                        SAY_AMBIENT_SPEECH( l_U88, "Generic_Fuck_Off", 1, 0, 0 );
                                        l_U68 = 1;
                                    }
                                    sub_205( 2, "ObjScpt_07" );
                                    sub_205( 2, "ClaScpt_07" );
                                    sub_205( 2, "NULL" );;
                                }
                            }
                            else
                            {
                                l_U68 = 0;
                                sub_205( 2, "ObjScpt_07" );
                                sub_205( 2, "ClaScpt_07" );
                                sub_205( 2, "NULL" );
                            }
                        }
                        else
                        {
                            sub_205( 2, "ObjScpt_07" );
                            sub_205( 2, "ClaScpt_07" );
                            sub_205( 2, "NULL" );
                        }
                    }
                    else
                    {
                        sub_205( 2, "ObjScpt_07" );
                        sub_205( 2, "ClaScpt_07" );
                        sub_205( 2, "NULL" );
                    }
                }
            }
        }
        else
        {
            sub_205( 2, "ObjScpt_07" );
            sub_205( 2, "ClaScpt_07" );
            sub_205( 2, "NULL" );
        }
    }
    return;
}

void sub_2554(unknown uParam0)
{
    switch (l_U60)
    {
        case 0:
        if (NOT (IS_CHAR_INJURED( l_U88 )))
        {
            if (NOT (LOCATE_CHAR_ON_FOOT_3D( l_U88, l_U16._fU0, l_U16._fU4, l_U16._fU8, 1.00000000, 1.00000000, 2.00000000, 0 )))
            {
                OPEN_SEQUENCE_TASK( ref l_U93 );
                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U16._fU0, l_U16._fU4, l_U16._fU8, 2, -1, 1.00000000 );
                TASK_CHAR_SLIDE_TO_COORD( 0, l_U16._fU0, l_U16._fU4, l_U16._fU8, l_U49, 2.00000000 );
                CLOSE_SEQUENCE_TASK( l_U93 );
                l_U85 = 0;
                if (l_U89 != nil)
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U89 );
                    l_U89 = nil;
                }
                if (l_U11 == 7)
                {
                    sub_652( 1 );
                    CLEAR_CHAR_TASKS( sub_603() );
                    l_U12 = 0;
                }
                sub_1969( uParam0 );
                l_U11 = 2;
                l_U60++;
            }
        }
        break;
        case 1:
        if (NOT (IS_CHAR_INJURED( l_U88 )))
        {
            TASK_PERFORM_SEQUENCE( l_U88, l_U93 );
            GET_GAME_TIMER( ref l_U62 );
            CLEAR_SEQUENCE_TASK( l_U93 );
            l_U60++;
        }
        break;
        case 2:
        GET_GAME_TIMER( ref l_U63 );
        l_U64 = l_U63 - l_U62;
        if (NOT (IS_CHAR_INJURED( l_U88 )))
        {
            GET_SCRIPT_TASK_STATUS( l_U88, 29, ref l_U85 );
            if ((l_U85 == 7) || (l_U64 > 8000))
            {
                l_U11 = 3;
                l_U60 = 0;
            }
        }
        break;
    }
    return;
}

int sub_3190()
{
    int iVar2;

    GET_CURRENT_CHAR_WEAPON( sub_603(), ref iVar2 );
    if (iVar2 == 0)
    {
        return 1;
    }
    if (iVar2 == 3)
    {
        return 1;
    }
    if (iVar2 == 1)
    {
        return 1;
    }
    if (iVar2 == 46)
    {
        return 1;
    }
    return 0;
}

int sub_3425(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT (IS_CHAR_DEAD( sub_603() )))
    {
        if (LOCATE_CHAR_ANY_MEANS_3D( sub_603(), uParam0._fU0, uParam0._fU4, uParam0._fU8, 1.00000000, 1.00000000, 3.00000000, 0 ))
        {
            return 1;
        }
    }
    return 0;
}

void sub_3546()
{
    if (DOES_OBJECT_EXIST( l_U91 ))
    {
        if (IS_OBJECT_ATTACHED( l_U91 ))
        {
            DETACH_OBJECT( l_U91, 1 );
        }
        DELETE_OBJECT( ref l_U91 );
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U91 );
    }
    if (DOES_OBJECT_EXIST( l_U90 ))
    {
        if (IS_OBJECT_ATTACHED( l_U90 ))
        {
            DETACH_OBJECT( l_U90, 1 );
        }
        DELETE_OBJECT( ref l_U90 );
        MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U90 );
    }
    return;
}

int sub_4031()
{
    if (sub_4040())
    {
        if (sub_4079())
        {
            return 1;
        }
    }
    return 0;
}

int sub_4040()
{
    if (g_U555 == 9)
    {
        return 0;
    }
    return 1;
}

int sub_4079()
{
    if (g_U91._fU60 != -1)
    {
        if ((g_U15946[g_U91._fU60]._fU132._fU24 == 0) || (g_U15946[g_U91._fU60]._fU132._fU24 == 3))
        {
            return 1;
        }
    }
    return 0;
}

int sub_4296()
{
    if ((((IS_BUTTON_PRESSED( 0, 17 )) || (IS_BUTTON_PRESSED( 0, 14 ))) || (IS_BUTTON_PRESSED( 0, 15 ))) || (IS_BUTTON_PRESSED( 0, 16 )))
    {
        return 1;
    }
    if ((((IS_BUTTON_JUST_PRESSED( 0, 17 )) || (IS_BUTTON_JUST_PRESSED( 0, 14 ))) || (IS_BUTTON_JUST_PRESSED( 0, 15 ))) || (IS_BUTTON_JUST_PRESSED( 0, 16 )))
    {
        return 1;
    }
    return 0;
}

void sub_4710(unknown uParam0)
{
    if (DOES_OBJECT_EXIST( uParam0 ))
    {
        if (NOT (IS_CHAR_DEAD( l_U88 )))
        {
            if (LOCATE_CHAR_ANY_MEANS_OBJECT_2D( l_U88, uParam0, 5.00000000, 5.00000000, 0 ))
            {
                TRIGGER_PTFX_ON_OBJ( "fire_hotdog_blaze", uParam0, 0.00000000, 0.00000000, 0.80000000, 0.00000000, 0.00000000, 0.00000000, 1065353216 );
                START_CHAR_FIRE( l_U88 );
                INCREMENT_INT_STAT_NO_MESSAGE( 272, 1 );
            }
        }
    }
    return;
}

int sub_5234(int iParam0, unknown uParam1)
{
    if (IS_PLAYER_PLAYING( sub_475() ))
    {
        if (IS_SCREEN_FADED_IN())
        {
            if ((IS_PLAYER_CONTROL_ON( sub_475() )) || (iParam0 == 5))
            {
                if ((((IS_PLAYER_FREE_FOR_AMBIENT_TASK( sub_475() )) || (iParam0 == 5)) || (iParam0 == 4)) || ((uParam1) AND (g_U9202)))
                {
                    if (NOT sub_4040())
                    {
                        if ((GET_OBJECT_PED_IS_HOLDING( sub_603() )) == nil)
                        {
                            if (g_U9172 <= iParam0)
                            {
                                if (g_U9173 == 0)
                                {
                                    if (sub_5386())
                                    {
                                        return 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

void sub_5386()
{
    return sub_5397( 0, 0 );
}

int sub_5397(boolean bParam0, unknown uParam1)
{
    if (bParam0)
    {
        g_U91._fU104 = 1;
    }
    if ((uParam1) AND (g_U555 != 9))
    {
        g_U91._fU100 = 1;
    }
    return 1;
}

int sub_5495(unknown uParam0, string sParam1, unknown uParam2)
{
    string sVar5;
    string sVar6;

    if (USING_STANDARD_CONTROLS())
    {
        sVar5 = "CNTBUT1";
        sVar6 = "CNTBUT2";
    }
    else
    {
        sVar5 = "CNTBUT2";
        sVar6 = "CNTBUT1";
    }
    if (IS_STRING_NULL( sParam1 ))
    {
        sParam1 = "NULL";
    }
    else if (DOES_TEXT_LABEL_EXIST( sParam1 ))
    {
        if ((GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL( sParam1 )) == 0)
        {
            sParam1 = "NULL";
        }
    }
    else
    {
        sParam1 = "NULL";
    }
    if (sub_5234( uParam0, uParam2 ))
    {
        if (((NOT IS_HELP_MESSAGE_BEING_DISPLAYED()) || (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))) || (IS_CONTROL_PRESSED( 2, 23 )))
        {
            if (NOT l_U2)
            {
                ALLOW_PLAYER_TO_CARRY_NON_MISSION_OBJECTS( sub_475(), 0 );
                l_U2 = 1;
            }
            g_U9172 = uParam0;
            l_U3 = 1;
            StrCopy( ref g_U9174, sParam1, 16 );
            g_U9178 = GET_ID_OF_THIS_THREAD();
            if (IS_CONTROL_PRESSED( 2, 23 ))
            {
                sub_5770();
                l_U1 = 1;
                g_U9173 = 6;
                if (NOT (IS_STRING_NULL( sParam1 )))
                {
                    if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 ))
                    {
                        CLEAR_HELP();
                    }
                }
                return 1;
            }
            else
            {
                g_U9173 = 0;
                if (NOT (COMPARE_STRING( sParam1, "NULL" )))
                {
                    if (NOT (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar5 )))
                    {
                        if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
                        {
                            PRINT_HELP_FOREVER_WITH_STRING( sParam1, sVar5 );
                            l_U0 = 1;
                        }
                    }
                }
            }
        }
        else if (l_U0)
        {
            if (IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED( sParam1, sVar6 ))
            {
                CLEAR_HELP();
                l_U0 = 0;
            }
        }
    }
    else
    {
        SCRIPT_ASSERT( "SCRIPT ASSERT: You have called IS_CONTEXT_BUTTON_PRESSED without checking if you CAN_USE_CONTEXT_BUTTON first\n" );
    }
    return 0;
}

void sub_5770()
{
    return sub_5397( 1, 1 );
}

int sub_6268(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (NOT IS_MESSAGE_BEING_DISPLAYED())
    {
        ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS( uParam2 );
        PRINT_NOW( uParam0, uParam1, 1 );
        return 1;
    }
    return 0;
}

void sub_6690()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 9, ref iVar2 );
    if (iVar2 == 0)
    {
        PRINT( "upsetVend", 5000, 1 );
    }
    else if (iVar2 == 1)
    {
        PRINT( "upsetVend1", 5000, 1 );
    }
    else if (iVar2 == 2)
    {
        PRINT( "upsetVend2", 5000, 1 );
    }
    else if (iVar2 == 3)
    {
        PRINT( "upsetVend3", 5000, 1 );
    }
    else if (iVar2 == 4)
    {
        PRINT( "upsetVend4", 5000, 1 );
    }
    else if (iVar2 == 5)
    {
        PRINT( "upsetVend5", 5000, 1 );
    }
    else if (iVar2 == 6)
    {
        PRINT( "upsetVend6", 5000, 1 );
    }
    else if (iVar2 == 7)
    {
        PRINT( "upsetVend7", 5000, 1 );
    }
    else
    {
        PRINT( "upsetVend8", 5000, 1 );
    };;;;;;;;
    return;
}

void sub_7393()
{
    switch (l_U61)
    {
        case 0:
        if (NOT (IS_CHAR_INJURED( l_U88 )))
        {
            if (NOT (IS_CHAR_IN_MELEE_COMBAT( l_U88 )))
            {
                SAY_AMBIENT_SPEECH( l_U88, "ATTRACT_NUTS", 0, 1, 0 );
                GET_GAME_TIMER( ref l_U62 );
                GENERATE_RANDOM_INT_IN_RANGE( 4000, 13000, ref l_U55 );
                l_U61++;
            }
        }
        break;
        case 1:
        GET_GAME_TIMER( ref l_U63 );
        l_U64 = l_U63 - l_U62;
        if (l_U64 > (6000 + l_U55))
        {
            l_U61--;
        }
        break;
    }
    return;
}

void sub_7623()
{
    if (l_U11 != 6)
    {
        if (l_U89 == nil)
        {
            if (HAVE_ANIMS_LOADED( "amb@nutcart" ))
            {
                BEGIN_CHAR_SEARCH_CRITERIA();
                SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE( 36 );
                END_CHAR_SEARCH_CRITERIA();
                GET_RANDOM_CHAR_IN_AREA_OFFSET_NO_SAVE( l_U13._fU0, l_U13._fU4, l_U13._fU8, 10.00000000, 10.00000000, 10.00000000, ref l_U89 );
            }
        }
        if (l_U89 != nil)
        {
            if (NOT (IS_CHAR_INJURED( l_U89 )))
            {
                if (NOT (IS_PED_HOLDING_AN_OBJECT( l_U89 )))
                {
                    if (NOT (IS_PED_A_MISSION_PED( l_U89 )))
                    {
                        if (NOT (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U89, sub_603(), 0 )))
                        {
                            if (NOT (IS_PLAYER_TARGETTING_CHAR( sub_475(), l_U89 )))
                            {
                                if (NOT (sub_3425( l_U19 )))
                                {
                                    SET_CHAR_AS_MISSION_CHAR( l_U89 );
                                    SET_LOAD_COLLISION_FOR_CHAR_FLAG( l_U89, 0 );
                                    SET_CHAR_IN_CUTSCENE( l_U89, 1 );
                                    l_U12 = 0;
                                    l_U11 = 4;
                                }
                                else
                                {
                                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U89 );
                                    l_U89 = nil;
                                }
                            }
                            else
                            {
                                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U89 );
                                l_U89 = nil;
                            }
                        }
                        else
                        {
                            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U89 );
                            l_U89 = nil;
                        }
                    }
                    else
                    {
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U89 );
                        l_U89 = nil;
                    }
                }
                else
                {
                    MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U89 );
                    l_U89 = nil;
                }
            }
            else
            {
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U89 );
                l_U89 = nil;
            }
        }
    }
    return;
}

void sub_8082()
{
    sub_8091();
    if (NOT (IS_CHAR_INJURED( l_U88 )))
    {
        switch (l_U12)
        {
            case 0:
            if (NOT (IS_CHAR_INJURED( l_U89 )))
            {
                TASK_FOLLOW_NAV_MESH_TO_COORD( l_U89, l_U19._fU0, l_U19._fU4, l_U19._fU8, 2, -2, 1.00000000 );
                if (sub_8350( l_U88, l_U16 ))
                {
                    TASK_CHAR_SLIDE_TO_COORD( l_U88, l_U16._fU0, l_U16._fU4, l_U16._fU8, l_U49, 2.00000000 );
                }
                l_U12 = 1;
            }
            break;
            case 1:
            if (NOT (IS_CHAR_INJURED( l_U89 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U89, 27, ref l_U83 );
                if ((l_U83 == 7) || (l_U83 == 2))
                {
                    l_U12 = 2;
                }
            }
            break;
            case 2:
            if (NOT (IS_CHAR_INJURED( l_U89 )))
            {
                if (sub_8350( l_U89, l_U19 ))
                {
                    TASK_GO_STRAIGHT_TO_COORD( l_U89, l_U19._fU0, l_U19._fU4, l_U19._fU8, 2, -2 );
                    l_U83 = 0;
                    l_U12 = 3;
                }
                else
                {
                    l_U12 = 0;
                }
            }
            break;
            case 3:
            if (NOT (IS_CHAR_INJURED( l_U89 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U89, 17, ref l_U83 );
                if ((l_U83 == 7) || (l_U83 == 2))
                {
                    l_U12 = 4;
                }
            }
            break;
            case 4:
            if (NOT (IS_CHAR_INJURED( l_U89 )))
            {
                l_U83 = 0;
                TASK_TURN_CHAR_TO_FACE_CHAR( l_U89, l_U88 );
                l_U12 = 5;
            }
            break;
            case 5:
            if (NOT (IS_CHAR_INJURED( l_U89 )))
            {
                GET_SCRIPT_TASK_STATUS( l_U89, 34, ref l_U83 );
                if ((l_U83 == 7) || (l_U83 == 2))
                {
                    l_U12 = 6;
                }
            }
            break;
            case 6:
            if (NOT (IS_CHAR_INJURED( l_U89 )))
            {
                TASK_PLAY_ANIM( l_U88, "SELL_NUTS", "amb@nutcart", 8.00000000, 0, 0, 0, 0, -2 );
                TASK_PLAY_ANIM( l_U89, "BUY_NUTS", "amb@nutcart", 8.00000000, 0, 0, 0, 0, -2 );
                SAY_AMBIENT_SPEECH( l_U89, "Order_Food", 1, 0, 0 );
                l_U83 = 0;
                l_U12 = 8;
            }
            break;
            case 8:
            if (NOT (IS_CHAR_INJURED( l_U89 )))
            {
                if (IS_CHAR_PLAYING_ANIM( l_U89, "amb@nutcart", "BUY_NUTS" ))
                {
                    GET_CHAR_ANIM_CURRENT_TIME( l_U89, "amb@nutcart", "BUY_NUTS", ref l_U51 );
                }
                else
                {
                    l_U12 = 19;
                }
            }
            if (IS_CHAR_PLAYING_ANIM( l_U88, "amb@nutcart", "BUY_NUTS" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U88, "amb@nutcart", "BUY_NUTS", ref l_U50 );
            }
            if (l_U71[0] == 0)
            {
                if (l_U50 > 0.21900000)
                {
                    if (NOT (DOES_OBJECT_EXIST( l_U90 )))
                    {
                        CREATE_OBJECT( 1432278665, l_U22._fU0, l_U22._fU4, l_U22._fU8, ref l_U90, 1 );
                    }
                    if (DOES_OBJECT_EXIST( l_U90 ))
                    {
                        if (NOT (IS_OBJECT_ATTACHED( l_U90 )))
                        {
                            ATTACH_OBJECT_TO_PED( l_U90, l_U88, 1219, 0, 0, 0, 0.00000000, 0.00000000, 0.00000000, 0 );
                        }
                        SET_OBJECT_VISIBLE( l_U90, 1 );
                        l_U71[0] = 1;
                    }
                }
            }
            if (l_U71[1] == 0)
            {
                if (l_U50 > 0.72500000)
                {
                    if (DOES_OBJECT_EXIST( l_U90 ))
                    {
                        if (IS_OBJECT_ATTACHED( l_U90 ))
                        {
                            DETACH_OBJECT( l_U90, 1 );
                        }
                        DELETE_OBJECT( ref l_U90 );
                        SAY_AMBIENT_SPEECH( l_U88, "SELL_GOODS", 0, 1, 0 );
                        l_U71[1] = 1;
                    }
                }
            }
            if (l_U74 == 0)
            {
                if (l_U51 > 0.91800000)
                {
                    if (NOT (IS_CHAR_INJURED( l_U89 )))
                    {
                        SAY_AMBIENT_SPEECH( l_U89, "Thanks", 1, 0, 0 );
                        GIVE_PED_AMBIENT_OBJECT( l_U89, 1432278665 );
                        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U89 );
                        l_U89 = nil;
                        l_U12 = 19;
                        l_U74 = 1;
                    }
                }
            }
            break;
            case 19:
            if (DOES_OBJECT_EXIST( l_U90 ))
            {
                if (IS_OBJECT_ATTACHED( l_U90 ))
                {
                    DETACH_OBJECT( l_U90, 1 );
                }
                DELETE_OBJECT( ref l_U90 );
            }
            sub_205( 2, "ObjScpt_07" );
            sub_205( 2, "ClaScpt_07" );
            sub_205( 2, "NULL" );
            CREATE_OBJECT( 1432278665, l_U22._fU0, l_U22._fU4, l_U22._fU8, ref l_U90, 1 );
            SET_OBJECT_VISIBLE( l_U90, 0 );
            SET_OBJECT_COLLISION( l_U90, 0 );
            l_U50 = 0.00000000;
            l_U74 = 0;
            l_U71[0] = 0;
            l_U71[1] = 0;
            l_U66 = 0;
            l_U67 = 0;
            l_U11 = 3;
            l_U58 = 0;
            l_U12 = 0;
            break;
        }
    }
    return;
}

void sub_8091()
{
    if (NOT (IS_CHAR_INJURED( l_U89 )))
    {
        if (l_U12 > 4)
        {
            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( l_U89, l_U19._fU0, l_U19._fU4, l_U19._fU8, 1.00000000, 1.00000000, 2.00000000, 0 )))
            {
                l_U12 = 19;
            }
        }
    }
    return;
}

int sub_8350(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;

    if (NOT (IS_CHAR_INJURED( uParam0 )))
    {
        GET_CHAR_COORDINATES( uParam0, ref uVar6._fU0, ref uVar6._fU4, ref uVar6._fU8 );
        if ((VDIST( uVar6, uParam1 )) < 10.00000000)
        {
            return 1;
        }
    }
    return 0;
}

void sub_10281()
{
    if (NOT (IS_CHAR_INJURED( l_U88 )))
    {
        switch (l_U12)
        {
            case 0:
            if (sub_10390())
            {
                l_U12 = 19;
            }
            GET_CHAR_COORDINATES( sub_603(), ref l_U46._fU0, ref l_U46._fU4, ref l_U46._fU8 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( sub_603(), l_U19._fU0, l_U19._fU4, l_U19._fU8, 3, -2, 0.20000000 );
            TASK_TURN_CHAR_TO_FACE_COORD( l_U88, l_U19._fU0, l_U19._fU4, l_U19._fU8 );
            l_U83 = 0;
            l_U12 = 1;
            break;
            case 1:
            if (sub_10390())
            {
                l_U12 = 19;
            }
            GET_SCRIPT_TASK_STATUS( sub_603(), 27, ref l_U83 );
            if (l_U83 == 7)
            {
                if (sub_10718( l_U19 ))
                {
                    sub_10808();
                    TASK_CHAR_SLIDE_TO_COORD_HDG_RATE( sub_603(), l_U19._fU0, l_U19._fU4, l_U19._fU8, l_U53, 2.00000000, 270.00000000 );
                    l_U12 = 3;
                }
                else
                {
                    l_U12 = 0;
                }
            }
            break;
            case 3:
            if (sub_10390())
            {
                l_U12 = 19;
                break;
            }
            else
            {
                GET_SCRIPT_TASK_STATUS( sub_603(), 68, ref l_U83 );
                if (l_U83 == 7)
                {
                    GET_GAME_TIMER( ref l_U62 );
                    l_U83 = 0;
                    l_U12 = 4;
                }
            }
            break;
            case 4:
            TASK_TURN_CHAR_TO_FACE_CHAR( sub_603(), l_U88 );
            l_U12 = 5;
            break;
            case 5:
            GET_SCRIPT_TASK_STATUS( sub_603(), 34, ref l_U83 );
            if (l_U83 == 7)
            {
                TASK_LOOK_AT_CHAR( l_U88, sub_603(), 7000, 0 );
                TASK_PLAY_ANIM( sub_603(), "BUY_NUTS_PLYR", "amb@nutcart", 8.00000000, 0, 0, 0, 0, -2 );
                TASK_PLAY_ANIM( l_U88, "SELL_NUTS_PLYR", "amb@nutcart", 8.00000000, 0, 0, 0, 0, -2 );
                SAY_AMBIENT_SPEECH( sub_603(), "GENERIC_BUY", 1, 1, 0 );
                l_U12 = 12;
            }
            break;
            case 12:
            if (IS_CHAR_PLAYING_ANIM( sub_603(), "amb@nutcart", "BUY_NUTS_PLYR" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_603(), "amb@nutcart", "BUY_NUTS_PLYR", ref l_U51 );
            }
            if (IS_CHAR_PLAYING_ANIM( l_U88, "amb@nutcart", "SELL_NUTS_PLYR" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( l_U88, "amb@nutcart", "SELL_NUTS_PLYR", ref l_U50 );
            }
            if (l_U71[0] == 0)
            {
                if (l_U50 > 0.30200000)
                {
                    if (NOT (DOES_OBJECT_EXIST( l_U90 )))
                    {
                        CREATE_OBJECT( 1432278665, l_U22._fU0, l_U22._fU4, l_U22._fU8, ref l_U90, 1 );
                    }
                    if (DOES_OBJECT_EXIST( l_U90 ))
                    {
                        if (NOT (IS_OBJECT_ATTACHED( l_U90 )))
                        {
                            ATTACH_OBJECT_TO_PED( l_U90, l_U88, 1219, -0.01000000, -0.02000000, 0, 2.96000000, -0.04000000, 0.56000000, 0 );
                        }
                        SET_OBJECT_VISIBLE( l_U90, 1 );
                        l_U71[0] = 1;
                    }
                }
            }
            if (l_U74 == 0)
            {
                if (l_U51 > 0.87000000)
                {
                    if (NOT (DOES_OBJECT_EXIST( l_U91 )))
                    {
                        CREATE_OBJECT( 1432278665, l_U19._fU0, l_U19._fU4, l_U19._fU8, ref l_U91, 1 );
                    }
                    if (DOES_OBJECT_EXIST( l_U91 ))
                    {
                        SET_OBJECT_VISIBLE( l_U91, 1 );
                        SET_OBJECT_COLLISION( l_U91, 0 );
                        if (NOT (IS_OBJECT_ATTACHED( l_U91 )))
                        {
                            ATTACH_OBJECT_TO_PED( l_U91, sub_603(), 1232, 0, 0, 0, 0.00000000, 0.00000000, 0.00000000, 0 );
                        }
                    }
                    sub_11843();
                    if (DOES_OBJECT_EXIST( l_U90 ))
                    {
                        if (IS_OBJECT_ATTACHED( l_U90 ))
                        {
                            DETACH_OBJECT( l_U90, 1 );
                        }
                        DELETE_OBJECT( ref l_U90 );
                    }
                    SAY_AMBIENT_SPEECH( l_U88, "SELL_GOODS", 1, 1, 0 );
                    l_U50 = 0.00000000;
                    l_U12 = 17;
                }
            }
            break;
            case 17:
            if (NOT (IS_CHAR_PLAYING_ANIM( sub_603(), "amb@nutcart", "BUY_NUTS_PLYR" )))
            {
                SAY_AMBIENT_SPEECH( sub_603(), "THANKS", 1, 1, 0 );
                TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( sub_603(), "EAT_NUTS_PLYR", "amb@nutcart", 8.00000000, 0, 0, 0, 0, -2 );
                l_U50 = 0.00000000;
                if (IS_PLAYER_PLAYING( sub_475() ))
                {
                    sub_652( 1 );
                }
                l_U12 = 18;
            }
            break;
            case 18:
            if (IS_CHAR_PLAYING_ANIM( sub_603(), "amb@nutcart", "EAT_NUTS_PLYR" ))
            {
                GET_CHAR_ANIM_CURRENT_TIME( sub_603(), "amb@nutcart", "EAT_NUTS_PLYR", ref l_U50 );
            }
            if (NOT (IS_CHAR_PLAYING_ANIM( sub_603(), "amb@nutcart", "EAT_NUTS_PLYR" )))
            {
                if (DOES_OBJECT_EXIST( l_U91 ))
                {
                    if (IS_OBJECT_ATTACHED( l_U91 ))
                    {
                        DETACH_OBJECT( l_U91, 1 );
                    }
                    DELETE_OBJECT( ref l_U91 );
                    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U91 );
                }
                l_U12 = 19;
            }
            break;
            case 19:
            sub_205( 2, "ObjScpt_07" );
            sub_205( 2, "ClaScpt_07" );
            sub_205( 2, "NULL" );
            if (DOES_OBJECT_EXIST( l_U90 ))
            {
                if (IS_OBJECT_ATTACHED( l_U90 ))
                {
                    DETACH_OBJECT( l_U90, 1 );
                }
                DELETE_OBJECT( ref l_U90 );
            }
            sub_13115();
            CREATE_OBJECT( 1432278665, l_U22._fU0, l_U22._fU4, l_U22._fU8, ref l_U90, 1 );
            SET_OBJECT_VISIBLE( l_U90, 0 );
            SET_OBJECT_COLLISION( l_U90, 0 );
            if (NOT (IS_CHAR_INJURED( l_U88 )))
            {
                TASK_ACHIEVE_HEADING( l_U88, l_U49 );
            }
            l_U50 = 0.00000000;
            l_U66 = 0;
            l_U67 = 0;
            l_U11 = 3;
            l_U12 = 0;
            break;
        }
    }
    return;
}

int sub_10390()
{
    if (((((IS_BUTTON_PRESSED( 0, 17 )) || (IS_BUTTON_PRESSED( 0, 14 ))) || (IS_BUTTON_PRESSED( 0, 15 ))) || (IS_BUTTON_PRESSED( 0, 16 ))) || (sub_10438()))
    {
        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_603() );
        SET_PLAYER_CONTROL( sub_475(), 1 );
        return 1;
    }
    return 0;
}

int sub_10438()
{
    int iVar2;
    int iVar3;
    unknown uVar4;
    unknown uVar5;

    GET_POSITION_OF_ANALOGUE_STICKS( 0, ref iVar2, ref iVar3, ref uVar4, ref uVar5 );
    if ((iVar2 > 100) || (iVar2 < 65436))
    {
        return 1;
    }
    if ((iVar3 > 100) || (iVar3 < 65436))
    {
        return 1;
    }
    return 0;
}

int sub_10718(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;

    if (NOT (IS_CHAR_DEAD( sub_603() )))
    {
        GET_CHAR_COORDINATES( sub_603(), ref uVar5._fU0, ref uVar5._fU4, ref uVar5._fU8 );
        if ((VDIST( uVar5, uParam0 )) < 10.00000000)
        {
            return 1;
        }
    }
    return 0;
}

void sub_10808()
{
    if (NOT (IS_CHAR_DEAD( sub_603() )))
    {
        GET_CURRENT_CHAR_WEAPON( sub_603(), ref l_U9 );
        if (l_U9 == 46)
        {
            REMOVE_WEAPON_FROM_CHAR( sub_603(), 46 );
            SET_CURRENT_CHAR_WEAPON( sub_603(), 0, 1 );
        }
        if (l_U9 != 0)
        {
            SET_CURRENT_CHAR_WEAPON( sub_603(), 0, 1 );
        }
    }
    return;
}

void sub_11843()
{
    ADD_SCORE( sub_475(), -5 );
    sub_11865();
    SET_CHAR_HEALTH( sub_603(), sub_11982() );
    sub_12070( 2, 1 );
    INCREMENT_INT_STAT_NO_MESSAGE( 97, 5 );
    INCREMENT_INT_STAT_NO_MESSAGE( 104, 5 );
    INCREMENT_INT_STAT_NO_MESSAGE( 309, 1 );
    return;
}

void sub_11865()
{
    int iVar2;

    GENERATE_RANDOM_INT_IN_RANGE( 0, 4, ref iVar2 );
    if (iVar2 == 0)
    {
        if (IS_PLAYER_PLAYING( sub_475() ))
        {
            SET_PLAYER_MOOD_NORMAL( sub_475() );
        }
    }
    sub_11922();
    return;
}

void sub_11922()
{
    if (NOT (IS_CHAR_DEAD( sub_603() )))
    {
        RESET_VISIBLE_PED_DAMAGE( sub_603() );
    }
    return;
}

void sub_11982()
{
    int Result;

    if (NOT (IS_CHAR_DEAD( sub_603() )))
    {
        GET_CHAR_HEALTH( sub_603(), ref Result );
        if (Result <= 100)
        {
            Result += 100;
        }
        else
        {
            Result = 200;
        }
    }
    return Result;
}

void sub_12070(unknown uParam0, unknown uParam1)
{
    sub_12091( uParam0, uParam1, 0.00000000, "" );
    return;
}

void sub_12091(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_13115()
{
    if (NOT (IS_CHAR_DEAD( sub_603() )))
    {
        if (l_U9 != 0)
        {
            if (l_U9 != 46)
            {
                SET_CURRENT_CHAR_WEAPON( sub_603(), l_U9, 0 );
            }
            else
            {
                REMOVE_WEAPON_FROM_CHAR( sub_603(), 46 );
            }
        }
    }
    return;
}

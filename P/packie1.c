void main()
{
    int J;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    vector vVar13;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;
    vector[3] vVar19;
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
    float fVar36;
    int iVar37;
    unknown uVar38;
    unknown uVar39;
    float fVar40;
    float fVar41;
    float fVar42;
    float fVar43;
    float fVar44;
    float fVar45;
    float fVar46;
    float fVar47;
    float fVar48;
    float fVar49;
    float fVar50;
    float fVar51;
    unknown uVar52;
    unknown uVar53;
    vector vVar54;
    vector vVar57;
    unknown uVar60;
    int iVar61;
    float fVar62;
    unknown uVar63;
    unknown uVar64;
    unknown uVar65;
    unknown uVar66;
    int iVar67;
    int iVar68;
    unknown uVar69;
    unknown uVar70;
    unknown uVar71;
    unknown uVar72;
    unknown uVar73;
    unknown uVar74;
    unknown uVar75;
    vector vVar76;
    vector vVar79;
    vector vVar82;
    unknown uVar85;
    unknown uVar86;
    unknown uVar87;
    unknown uVar88;
    unknown uVar89;
    int I;
    unknown uVar91;
    float fVar92;
    unknown uVar93;
    unknown uVar94;
    unknown uVar95;
    int iVar96;
    unknown uVar97;
    unknown uVar98;
    unknown uVar99;
    unknown uVar100;
    unknown uVar101;
    boolean bVar102;
    boolean bVar103;
    unknown uVar104;
    unknown uVar105;
    unknown uVar106;

    l_U102 = 0;
    l_U103 = 1;
    l_U104 = 3;
    l_U106 = 0;
    l_U123 = -1;
    l_U127 = 0;
    l_U128 = 1;
    l_U129 = 1;
    l_U137 = 150.00000000;
    l_U227 = 0;
    l_U228 = 150.00000000;
    l_U278 = 0;
    l_U549 = 0;
    l_U569 = 0;
    l_U570 = 0;
    l_U587 = 0;
    l_U590 = 0;
    l_U591 = 0;
    l_U595 = 0;
    l_U596 = 0;
    l_U597 = 0;
    l_U598 = 0;
    l_U601 = 3600;
    l_U728 = 0;
    l_U730 = 6000;
    l_U753 = 0;
    l_U755 = 0;
    l_U756 = 0;
    l_U757 = 0;
    l_U761 = 1;
    l_U912 = 0.34000000;
    l_U914 = "PaulMH3";
    l_U915 = 90.00000000;
    array(ref vVar19, 3);
    fVar36 = 7000.00000000;
    iVar37 = 2000;
    fVar40 = 387.75380000;
    fVar41 = -246.63400000;
    fVar42 = 0.60000000;
    fVar43 = 383.12860000;
    fVar44 = -246.63400000;
    fVar45 = 0.60000000;
    fVar46 = 387.80000000;
    fVar47 = -246.65000000;
    fVar48 = 0.25000000;
    fVar49 = -0.90000000;
    fVar50 = 180.00000000;
    fVar51 = 270.00000000;
    if (HAS_DEATHARREST_EXECUTED())
    {
        sub_395();
        sub_2505();
    }
    SET_MISSION_FLAG( 1 );
    PROCESS_MISSION_DELETION_LIST();
    LOAD_ADDITIONAL_TEXT( "PACK1", 0 );
    LOAD_ADDITIONAL_TEXT( "PM1AUD", 6 );
    sub_4572( "PM1AUD" );
    sub_4691( 0, sub_3362(), "Niko", 0 );
    # -sub_C1FFC0-0xc214c8( 2, ref l_U604 );
    # -sub_C1FFC0-0xc214c8( 0, ref l_U606 );
    # -sub_C1FFC0-0xc214c8( 1, ref l_U605 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U608 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U609 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U610 );
    LOAD_COMBAT_DECISION_MAKER( 2, ref l_U611 );
    LOAD_COMBAT_DECISION_MAKER( 3, ref l_U607 );
    SET_DECISION_MAKER_ATTRIBUTE_NAVIGATION_STYLE( l_U611, 1 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U610, 70 );
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U609, 20 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_INJURED_REACTION( l_U608, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_INJURED_REACTION( l_U610, 0 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U608, 2 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U609, 2 );
    SET_DECISION_MAKER_ATTRIBUTE_TARGET_LOSS_RESPONSE( l_U607, 2 );
    l_U716[0] = -164935626;
    l_U716[1] = -1084007777;
    vVar19[0] = {348.63500000, -227.26210000, 4.51390000};
    vVar19[1] = {348.79680000, -228.38740000, 4.51130000};
    vVar19[2] = {354.81420000, -214.49530000, 5.72950000};
    l_U652[0] = {355.48950000, -240.77790000, 4.48010000};
    l_U652[1] = {354.06570000, -240.36630000, 4.47670000};
    l_U652[2] = {362.62970000, -216.79560000, 4.72950000};
    l_U652[3] = {363.01460000, -220.59010000, 4.72950000};
    l_U652[4] = {344.07230000, -216.46430000, 5.72950000};
    l_U652[5] = {373.56330000, -237.85050000, 4.49660000};
    l_U652[6] = {346.07590000, -230.37820000, 4.50660000};
    l_U652[7] = {361.26020000, -230.32730000, 4.50670000};
    l_U652[8] = {390.09810000, -209.92980000, 4.48150000};
    l_U652[9] = {382.12860000, -246.63400000, 1.00000000};
    l_U652[10] = {340.07810000, -289.03530000, 3.44710000};
    l_U652[11] = {350.47140000, -228.02090000, 4.51210000};
    l_U652[12] = {335.28250000, -254.44740000, 5.87450000};
    l_U652[13] = {349.87240000, -221.10340000, 3.52370000};
    l_U652[14] = {350.18180000, -225.45480000, 3.51590000};
    l_U652[15] = {343.72240000, -218.24880000, 5.72940000};
    l_U701 = {311.18800000, -314.44190000, 6.35300000};
    l_U704 = {365.80950000, -268.83650000, 14.50700000};
    l_U707 = {378.86970000, -290.26910000, 4.46660000};
    l_U710 = {309.45180000, -285.25840000, 4.79720000};
    l_U713 = {-513.50000000, 332.00000000, 7.00000000};
    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar53 );
    WAIT( 0 );
    if (DOES_VEHICLE_EXIST( uVar53 ))
    {
        if (IS_VEH_DRIVEABLE( uVar53 ))
        {
            if ((LOCATE_CAR_2D( uVar53, 1386.54300000, 616.77090000, 50.00000000, 20.00000000, 0 )) || (LOCATE_CAR_2D( uVar53, 1392.95500000, 623.19520000, 20.00000000, 20.00000000, 0 )))
            {
                if (IS_VEH_DRIVEABLE( uVar53 ))
                {
                    SET_CAR_COORDINATES( uVar53, 1411.27900000, 570.85960000, 31.59770000 );
                    CLEAR_AREA( 1411.27900000, 610.85960000, 31.59770000, 2.00000000, 0 );
                    if (DOES_VEHICLE_EXIST( uVar53 ))
                    {
                        SET_CAR_COORDINATES( uVar53, 1411.27900000, 610.85960000, 31.59770000 );
                        SET_CAR_HEADING( uVar53, 0.00000000 );
                        SET_CAR_ON_GROUND_PROPERLY( uVar53 );
                    }
                }
            }
        }
    }
    CLEAR_AREA( 1386.54300000, 616.77090000, 34.81610000, 10.00000000, 1 );
    CLEAR_AREA( 1392.95500000, 623.19520000, 33.70190000, 10.00000000, 1 );
    if (g_U9893._fU24)
    {
        ENABLE_SCENE_STREAMING( 0 );
        START_CUTSCENE_NOW( "PM_1" );
        while (NOT HAS_CUTSCENE_LOADED())
        {
            WAIT( 0 );
        }
        while (NOT HAS_CUTSCENE_FINISHED())
        {
            WAIT( 0 );
        }
        CLEAR_NAMED_CUTSCENE( "PM_1" );
        ENABLE_SCENE_STREAMING( 1 );
    }
    REQUEST_MODEL( 1708842493 );
    REQUEST_MODEL( 1348744438 );
    REQUEST_MODEL( 467469635 );
    while (((NOT (HAS_MODEL_LOADED( 1708842493 ))) || (NOT (HAS_MODEL_LOADED( 1348744438 )))) || (NOT (HAS_MODEL_LOADED( 467469635 ))))
    {
        WAIT( 0 );
    }
    LOAD_ALL_OBJECTS_NOW();
    REQUEST_ANIMS( "misspackie2" );
    while (NOT (HAVE_ANIMS_LOADED( "misspackie2" )))
    {
        WAIT( 0 );
    }
    if (NOT (IS_CHAR_INJURED( sub_3362() )))
    {
        CLEAR_AREA( 1396.18700000, 622.25290000, 32.89250000, 2.00000000, 1 );
        SET_CHAR_COORDINATES( sub_3362(), 1396.18700000, 622.25290000, 32.89250000 );
        SET_CHAR_HEADING( sub_3362(), 207.30000000 );
        SET_CAM_BEHIND_PED( sub_3362() );
    }
    while (NOT (sub_6368( 13, ref l_U623, 1396.97600000, 620.26200000, 32.68580000, 272.00000000 )))
    {
        WAIT( 0 );
    }
    sub_4691( 1, l_U623, "PACKIE_MCREARY", 0 );
    SET_PED_DIES_WHEN_INJURED( l_U623, 1 );
    SET_CHAR_COMPONENT_VARIATION( l_U623, 0, 0, 0 );
    SET_CHAR_RELATIONSHIP( l_U623, 1, 0 );
    SET_GROUP_MEMBER( sub_8213(), l_U623 );
    SET_CHAR_SUFFERS_CRITICAL_HITS( l_U623, 0 );
    SET_CHAR_DROWNS_IN_WATER( l_U623, 1 );
    SET_COMBAT_DECISION_MAKER( l_U623, l_U608 );
    GIVE_WEAPON_TO_CHAR( l_U623, 14, 30000, 0 );
    SET_CURRENT_CHAR_WEAPON( l_U623, 0, 1 );
    TASK_SWAP_WEAPON( l_U623, 0 );
    SET_PED_DONT_DO_EVASIVE_DIVES( l_U623, 1 );
    ADD_PED_TO_MISSION_DELETION_LIST( l_U623, 1 );
    if ((NOT (IS_CHAR_INJURED( sub_3362() ))) AND (NOT (IS_CHAR_INJURED( l_U623 ))))
    {
        SET_CHAR_DUCKING( sub_3362(), 0 );
        TASK_LOOK_AT_CHAR( sub_3362(), l_U623, 5000, 0 );
        TASK_LOOK_AT_CHAR( l_U623, sub_3362(), 9000, 0 );
    }
    CLEAR_AREA( 1402.10800000, 621.45870000, 33.36990000, 5.00000000, 1 );
    CREATE_CAR( 1348744438, 1402.10800000, 621.45870000, 33.36990000, ref l_U647, 1 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1348744438 );
    SET_CAR_HEADING( l_U647, 177.00000000 );
    SET_CAR_ON_GROUND_PROPERLY( l_U647 );
    MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U647 );
    ADD_BLIP_FOR_COORD( l_U701._fU0, l_U701._fU4, l_U701._fU8, ref l_U763 );
    SET_ROUTE( l_U763, 1 );
    sub_8650( ref l_U763, 302.51610000, -310.39210000, 3.84250000, 0.00000000 );
    ADD_SCENARIO_BLOCKING_AREA( 313.28130000, -318.73380000, -5.27289900, 395.89790000, -163.00730000, 17.74421000 );
    l_U586 = 2;
    SWITCH_PED_PATHS_OFF( 395.89790000, -163.00730000, 17.74421000, 313.28130000, -318.73380000, -5.27289900 );
    LOAD_SCENE( 1396.18700000, 622.25290000, 32.89250000 );
    if (NOT (IS_CHAR_DEAD( sub_3362() )))
    {
        SET_PLAYER_CONTROL( sub_8832(), 1 );
    }
    sub_8871();
    sub_8916( 1000 );
    while (true)
    {
        if (NOT l_U744)
        {
            if (NOT (IS_CHAR_INJURED( sub_3362() )))
            {
                if (IS_CHAR_IN_ANY_CAR( sub_3362() ))
                {
                    sub_9091( 1 );
                    l_U744 = 1;
                }
            }
        }
        if ((NOT l_U731) AND (NOT l_U731))
        {
            switch (l_U586)
            {
                case 2:
                if ((NOT (IS_CHAR_INJURED( l_U623 ))) AND (NOT (IS_CHAR_INJURED( sub_3362() ))))
                {
                    sub_10229();
                    if (DOES_BLIP_EXIST( l_U763 ))
                    {
                        LOCATE_CHAR_ANY_MEANS_3D( sub_3362(), l_U701._fU0, l_U701._fU4, l_U701._fU8, 2.50000000, 2.50000000, 2.50000000, 1 );
                    }
                    if (sub_12475( ref l_U765, ref l_U763, l_U623, l_U701, "GOAL1", "BUDDY1", "CONT_DEST" ))
                    {
                        if ((IS_CHAR_SITTING_IN_ANY_CAR( l_U623 )) AND (IS_CHAR_SITTING_IN_ANY_CAR( sub_3362() )))
                        {
                            if (((LOCATE_CHAR_ANY_MEANS_3D( sub_3362(), l_U701._fU0, l_U701._fU4, l_U701._fU8, 4.00000000, 4.00000000, 2.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U623, l_U701._fU0, l_U701._fU4, l_U701._fU8, 4.00000000, 4.00000000, 2.00000000, 0 ))) AND (sub_13174( 1, 1 )))
                            {
                                if (sub_4020( l_U826 ))
                                {
                                    sub_4202( ref l_U826, 0 );
                                }
                                if (NOT (IS_CHAR_INJURED( l_U623 )))
                                {
                                    REMOVE_CHAR_FROM_GROUP( l_U623 );
                                }
                                sub_13525( ref l_U763 );
                                l_U586 = 4;
                            }
                        }
                        else if ((LOCATE_CHAR_ON_FOOT_3D( sub_3362(), l_U701._fU0, l_U701._fU4, l_U701._fU8, 4.00000000, 4.00000000, 2.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U623, l_U701._fU0, l_U701._fU4, l_U701._fU8, 4.00000000, 4.00000000, 2.00000000, 0 )))
                        {
                            if (sub_4020( l_U826 ))
                            {
                                sub_4202( ref l_U826, 0 );
                            }
                            if (NOT (IS_CHAR_INJURED( l_U623 )))
                            {
                                REMOVE_CHAR_FROM_GROUP( l_U623 );
                            }
                            sub_13525( ref l_U763 );
                            l_U586 = 3;
                        }
                    }
                }
                break;
                case 3:
                switch (l_U596)
                {
                    case 0:
                    SET_PLAYER_CONTROL( sub_8832(), 0 );
                    sub_13810( 500 );
                    GET_PLAYERS_LAST_CAR_NO_SAVE( ref uVar53 );
                    WAIT( 0 );
                    if (DOES_VEHICLE_EXIST( uVar53 ))
                    {
                        if (IS_VEH_DRIVEABLE( uVar53 ))
                        {
                            if (LOCATE_CAR_2D( uVar53, 319.57930000, -307.70310000, 5.00000000, 5.00000000, 0 ))
                            {
                                if (IS_VEH_DRIVEABLE( uVar53 ))
                                {
                                    CLEAR_AREA( 302.64590000, -308.99540000, 3.83570000, 2.00000000, 0 );
                                    SET_CAR_COORDINATES( uVar53, 302.64590000, -308.99540000, 3.83570000 );
                                    SET_CAR_HEADING( uVar53, 0.00000000 );
                                    SET_CAR_ON_GROUND_PROPERLY( uVar53 );
                                }
                            }
                        }
                    }
                    sub_14083();
                    sub_14170( ref l_U598, 0 );
                    vVar54 = {318.09590000, -307.05670000, 3.67450000};
                    vVar57 = {318.98010000, -308.88190000, 3.57730000};
                    CREATE_CAM( 14, ref l_U719 );
                    SET_CAM_POS( l_U719, 315.75940000, -307.06020000, 4.58219900 );
                    SET_CAM_ROT( l_U719, 9.97973500, 3.04724600, -101.66500000 );
                    SET_CAM_FOV( l_U719, 29.40004000 );
                    if (NOT (IS_CHAR_INJURED( l_U623 )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U623 );
                        if (NOT (IS_CHAR_IN_ANY_CAR( l_U623 )))
                        {
                            SET_CHAR_COORDINATES( l_U623, vVar54.x, vVar54.y, vVar54.z );
                        }
                        else
                        {
                            WARP_CHAR_FROM_CAR_TO_COORD( l_U623, vVar54.x, vVar54.y, vVar54.z );
                        }
                        SET_CHAR_HEADING( l_U623, 250.00000000 );
                        if (NOT (IS_CHAR_INJURED( sub_3362() )))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U623 );
                            TASK_LOOK_AT_CHAR( l_U623, sub_3362(), 25000, 0 );
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( sub_3362() )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3362() );
                        SET_CHAR_DUCKING( sub_3362(), 0 );
                        SET_CHAR_COORDINATES( sub_3362(), vVar57.x, vVar57.y, vVar57.z );
                        SET_CHAR_HEADING( sub_3362(), 72.00000000 );
                        TASK_LOOK_AT_CHAR( sub_3362(), l_U623, 25000, 0 );
                    }
                    SET_CAM_ACTIVE( l_U719, 1 );
                    SET_CAM_PROPAGATE( l_U719, 1 );
                    CLEAR_AREA( 380.14360000, -271.32300000, 5.44051400, 20.00000000, 1 );
                    CLEAR_AREA( 319.20860000, -307.36370000, 3.54880000, 5.00000000, 1 );
                    sub_8916( 500 );
                    sub_10272( "PM1_ARR", ref l_U820, 7, 1 );
                    l_U596 = 1;
                    GET_GAME_TIMER( ref l_U729 );
                    l_U729 += 2000;
                    break;
                    case 1:
                    if (NOT (sub_4020( l_U820 )))
                    {
                        INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                        l_U596 = 2;
                    }
                    break;
                    case 2:
                    sub_14947( ref l_U719, ref l_U720, ref l_U721 );
                    sub_15112( ref l_U598, 0, 1, 1 );
                    sub_15246();
                    if (DOES_BLIP_EXIST( l_U763 ))
                    {
                        REMOVE_BLIP( l_U763 );
                    }
                    if ((NOT (IS_CHAR_INJURED( l_U623 ))) AND (NOT (IS_CHAR_INJURED( sub_3362() ))))
                    {
                        TASK_LOOK_AT_CHAR( l_U623, sub_3362(), 0, 0 );
                        TASK_LOOK_AT_CHAR( sub_3362(), l_U623, 0, 0 );
                        ADD_BLIP_FOR_CHAR( l_U623, ref l_U765 );
                        SET_BLIP_AS_FRIENDLY( l_U765, 1 );
                        CHANGE_BLIP_DISPLAY( l_U765, 2 );
                        REMOVE_CHAR_FROM_GROUP( l_U623 );
                        OPEN_SEQUENCE_TASK( ref uVar12 );
                        TASK_SET_CHAR_DECISION_MAKER( 0, l_U606 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 317.72640000, -307.84550000, 4.72630000, 3, -2, 0.20000000 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 321.82110000, -308.90790000, 4.44660000, 3, -2, 0.20000000 );
                        CLOSE_SEQUENCE_TASK( uVar12 );
                        UNLOCK_RAGDOLL( l_U623, 0 );
                        TASK_PERFORM_SEQUENCE( l_U623, uVar12 );
                        CLEAR_SEQUENCE_TASK( uVar12 );
                    }
                    l_U586 = 5;
                    break;
                }
                GET_GAME_TIMER( ref iVar3 );
                if ((sub_15618()) AND (iVar3 > l_U729))
                {
                    sub_4007( ref l_U820 );
                    l_U596 = 2;
                }
                break;
                case 4:
                switch (l_U595)
                {
                    case 0:
                    SET_PLAYER_CONTROL( sub_8832(), 0 );
                    sub_14170( ref l_U598, 0 );
                    CREATE_CAM( 14, ref l_U719 );
                    if (NOT (IS_CHAR_INJURED( sub_3362() )))
                    {
                        if (IS_CHAR_IN_ANY_CAR( sub_3362() ))
                        {
                            GET_CAR_CHAR_IS_USING( sub_3362(), ref uVar60 );
                            GET_CAR_MODEL( uVar60, ref iVar61 );
                            if (IS_CHAR_IN_FLYING_VEHICLE( sub_3362() ))
                            {
                                sub_13810( 500 );
                                if (NOT (IS_CHAR_INJURED( sub_3362() )))
                                {
                                    WARP_CHAR_FROM_CAR_TO_COORD( sub_3362(), 308.26710000, -313.18270000, 3.95160000 );
                                }
                                if (NOT (IS_CHAR_INJURED( l_U623 )))
                                {
                                    WARP_CHAR_FROM_CAR_TO_COORD( l_U623, 308.17160000, -314.88410000, 3.95160000 );
                                }
                                if ((NOT (IS_CHAR_INJURED( sub_3362() ))) AND (NOT (IS_CHAR_INJURED( l_U623 ))))
                                {
                                    TASK_TURN_CHAR_TO_FACE_CHAR( l_U623, sub_3362() );
                                    TASK_TURN_CHAR_TO_FACE_CHAR( sub_3362(), l_U623 );
                                }
                                SET_CAM_POS( l_U719, 313.51810000, -312.02620000, 5.56214900 );
                                SET_CAM_ROT( l_U719, -7.08912000, -12.05657000, 112.65140000 );
                                SET_CAM_FOV( l_U719, 27.30005000 );
                                if (iVar61 == 837858166)
                                {
                                    DELETE_CAR( ref uVar60 );
                                }
                                else if (IS_VEH_DRIVEABLE( uVar60 ))
                                {
                                    CLEAR_AREA( 298.19670000, -305.61960000, 3.99190000, 10.00000000, 1 );
                                    SET_CAR_COORDINATES( uVar60, 298.19670000, -305.61960000, 3.99190000 );
                                    SET_CAR_HEADING( uVar60, 180.00000000 );
                                    SET_CAR_ON_GROUND_PROPERLY( uVar60 );
                                }
                                DELETE_CAR( ref uVar60 );
                                sub_8916( 500 );
                            }
                            else
                            {
                                GET_CAR_HEADING( uVar60, ref fVar62 );
                                if ((fVar62 < 315) AND (fVar62 >= 225))
                                {
                                    SET_CAM_POS( l_U719, 318.52580000, -304.81890000, 6.03654100 );
                                    SET_CAM_ROT( l_U719, -5.31219800, -11.06882000, 138.19830000 );
                                    SET_CAM_FOV( l_U719, 20.20007000 );
                                }
                                else if ((fVar62 < 135) AND (fVar62 >= 45))
                                {
                                    SET_CAM_POS( l_U719, 294.68850000, -321.49870000, 8.12849000 );
                                    SET_CAM_ROT( l_U719, -12.10609000, 0.00000000, -60.90878000 );
                                    SET_CAM_FOV( l_U719, 17.10007000 );
                                }
                                else if ((fVar62 < 225) AND (fVar62 >= 135))
                                {
                                    SET_CAM_POS( l_U719, 310.17790000, -326.91230000, 6.96342500 );
                                    SET_CAM_ROT( l_U719, -9.66422900, 0.00000000, -7.60470200 );
                                    SET_CAM_FOV( l_U719, 15.90007000 );
                                }
                                else
                                {
                                    SET_CAM_POS( l_U719, 310.23470000, -302.76130000, 6.95740400 );
                                    SET_CAM_ROT( l_U719, -10.23344000, -0.00000000, -174.92360000 );
                                    SET_CAM_FOV( l_U719, 16.80007000 );
                                };;;
                                POINT_CAM_AT_VEHICLE( l_U719, uVar60 );
                            }
                        }
                    }
                    SET_CAM_ACTIVE( l_U719, 1 );
                    SET_CAM_PROPAGATE( l_U719, 1 );
                    REMOVE_BLIP( l_U763 );
                    CLEAR_AREA( 380.14360000, -271.32300000, 5.44051400, 20.00000000, 1 );
                    CLEAR_AREA( 319.20860000, -307.36370000, 3.54880000, 5.00000000, 1 );
                    sub_10272( "PM1_ARR", ref l_U820, 7, 1 );
                    GET_GAME_TIMER( ref l_U729 );
                    l_U729 += 2000;
                    l_U595 = 1;
                    break;
                    case 1:
                    if (NOT (sub_4020( l_U820 )))
                    {
                        INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                        l_U595 = 2;
                    }
                    break;
                    case 2:
                    if (NOT (IS_CHAR_INJURED( sub_3362() )))
                    {
                        sub_14947( ref l_U719, ref l_U720, ref l_U721 );
                        sub_15112( ref l_U598, 0, 1, 1 );
                        if (NOT (IS_CHAR_INJURED( l_U623 )))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar12 );
                            TASK_SET_CHAR_DECISION_MAKER( 0, l_U606 );
                            TASK_LEAVE_ANY_CAR( 0 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 317.72640000, -307.84550000, 4.72630000, 3, -2, 0.20000000 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 321.82110000, -308.90790000, 4.44660000, 3, -2, 0.20000000 );
                            CLOSE_SEQUENCE_TASK( uVar12 );
                            UNLOCK_RAGDOLL( l_U623, 0 );
                            TASK_PERFORM_SEQUENCE( l_U623, uVar12 );
                            CLEAR_SEQUENCE_TASK( uVar12 );
                            ADD_BLIP_FOR_CHAR( l_U623, ref l_U765 );
                            SET_BLIP_AS_FRIENDLY( l_U765, 1 );
                            CHANGE_BLIP_DISPLAY( l_U765, 2 );
                        }
                        if (NOT (IS_CAR_DEAD( l_U650 )))
                        {
                            MARK_CAR_AS_NO_LONGER_NEEDED( ref uVar60 );
                        }
                    }
                    l_U586 = 5;
                    break;
                }
                GET_GAME_TIMER( ref iVar3 );
                if ((sub_15618()) AND (iVar3 > l_U729))
                {
                    sub_4007( ref l_U820 );
                    l_U595 = 2;
                }
                break;
                case 5:
                if ((NOT (sub_4020( l_U820 ))) AND (NOT l_U743))
                {
                    BLOCK_CHAR_GESTURE_ANIMS( l_U623, 0 );
                    sub_10272( "PM1_FOLL", ref l_U820, 7, 1 );
                    l_U743 = 1;
                }
                if (((NOT (sub_4020( l_U820 ))) AND (NOT l_U908)) AND (l_U743))
                {
                    PRINT_NOW( "GOAL4", 7500, 3 );
                    l_U908 = 1;
                }
                if (((NOT l_U748) AND (l_U908)) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
                {
                    l_U748 = 1;
                    sub_17407();
                }
                if ((NOT (IS_CHAR_INJURED( l_U623 ))) AND (NOT l_U740))
                {
                    GET_SCRIPT_TASK_STATUS( l_U623, 29, ref iVar6 );
                    if (iVar6 == 7)
                    {
                        OPEN_SEQUENCE_TASK( ref uVar63 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 350.12080000, -307.94010000, 3.44680000, 3, -2, 0.40000000 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 368.03510000, -306.03200000, 3.44680000, 3, -2, 0.40000000 );
                        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U707._fU0, l_U707._fU4, l_U707._fU8, 3, -2, 0.20000000 );
                        TASK_ACHIEVE_HEADING( 0, 204.00000000 );
                        CLOSE_SEQUENCE_TASK( uVar63 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U623, 1 );
                        TASK_PERFORM_SEQUENCE( l_U623, uVar63 );
                        CLEAR_SEQUENCE_TASK( uVar63 );
                        l_U740 = 1;
                    }
                }
                if ((NOT (IS_CHAR_INJURED( l_U623 ))) AND (NOT (IS_CHAR_INJURED( sub_3362() ))))
                {
                    if ((IS_CHAR_IN_AREA_3D( sub_3362(), 372.04800000, -283.28350000, 3.45984500, 383.54310000, -294.87000000, 8.70751000, 0 )) AND (IS_CHAR_IN_AREA_3D( l_U623, 382.47910000, -281.37700000, 11.94022000, 369.75920000, -300.15240000, 3.12569000, 0 )))
                    {
                        GET_CHAR_COORDINATES( sub_3362(), ref uVar64._fU0, ref uVar64._fU4, ref uVar64._fU8 );
                        if (uVar64._fU8 < 5.00000000)
                        {
                            PRINT_HELP( "SHHELP4" );
                        }
                        OPEN_SEQUENCE_TASK( ref uVar7 );
                        TASK_SWAP_WEAPON( 0, 0 );
                        TASK_FLUSH_ROUTE();
                        TASK_EXTEND_ROUTE( l_U707._fU0, l_U707._fU4, l_U707._fU8 );
                        TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                        TASK_ACHIEVE_HEADING( 0, 90.00000000 );
                        TASK_CLIMB( 0, 0 );
                        CLOSE_SEQUENCE_TASK( uVar7 );
                        SET_CURRENT_CHAR_WEAPON( l_U623, 0, 1 );
                        TASK_PERFORM_SEQUENCE( l_U623, uVar7 );
                        CLEAR_SEQUENCE_TASK( uVar7 );
                        SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U608, 1 );
                        sub_10272( "PM1_FOLL", ref l_U886, 8, 1 );
                        GET_GAME_TIMER( ref l_U602 );
                        l_U602 += 8000;
                        l_U586 = 6;
                        l_U588 = 0;
                    }
                }
                break;
                case 6:
                GET_GAME_TIMER( ref iVar67 );
                if ((NOT (IS_CHAR_INJURED( l_U623 ))) AND (NOT (IS_CHAR_INJURED( sub_3362() ))))
                {
                    switch (l_U588)
                    {
                        case 0:
                        GET_SCRIPT_TASK_STATUS( l_U623, 29, ref iVar6 );
                        if ((iVar6 == 7) || (iVar67 > l_U602))
                        {
                            GET_CHAR_COORDINATES( l_U623, ref uVar16._fU0, ref uVar16._fU4, ref uVar16._fU8 );
                            if (uVar16._fU8 > 5.00000000)
                            {
                                OPEN_SEQUENCE_TASK( ref uVar8 );
                                TASK_FLUSH_ROUTE();
                                TASK_EXTEND_ROUTE( 376.23950000, -289.44130000, 6.35540000 );
                                TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                                TASK_ACHIEVE_HEADING( 0, 90.00000000 );
                                TASK_CLIMB( 0, 1 );
                                CLOSE_SEQUENCE_TASK( uVar8 );
                                TASK_PERFORM_SEQUENCE( l_U623, uVar8 );
                                CLEAR_SEQUENCE_TASK( uVar8 );
                                l_U588 = 1;
                                l_U602 = iVar67 + 8000;
                                SET_CHAR_PROOFS( l_U623, 0, 1, 1, 1, 1 );
                            }
                            else
                            {
                                OPEN_SEQUENCE_TASK( ref uVar7 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U707._fU0, l_U707._fU4, l_U707._fU8, 2, -2, 0.10000000 );
                                TASK_ACHIEVE_HEADING( 0, 90.00000000 );
                                TASK_CLIMB( 0, 0 );
                                CLOSE_SEQUENCE_TASK( uVar7 );
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U623 );
                                TASK_PERFORM_SEQUENCE( l_U623, uVar7 );
                                CLEAR_SEQUENCE_TASK( uVar7 );
                                l_U602 = iVar67 + 8000;
                            }
                        }
                        break;
                        case 1:
                        GET_SCRIPT_TASK_STATUS( l_U623, 29, ref iVar6 );
                        if (l_U734)
                        {
                            if (uVar16._fU8 > 6.50000000)
                            {
                                OPEN_SEQUENCE_TASK( ref uVar9 );
                                TASK_FLUSH_ROUTE();
                                TASK_EXTEND_ROUTE( 373.67650000, -284.96320000, 7.91410000 );
                                TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                                TASK_ACHIEVE_HEADING( 0, 90.00000000 );
                                CLOSE_SEQUENCE_TASK( uVar9 );
                                TASK_PERFORM_SEQUENCE( l_U623, uVar9 );
                                CLEAR_SEQUENCE_TASK( uVar9 );
                                l_U588 = 2;
                                l_U602 = iVar67 + 8000;
                            }
                            else
                            {
                                l_U588 = 0;
                                l_U602 = iVar67 + 8000;
                            }
                            l_U734 = 0;
                        }
                        else if ((iVar6 == 7) || (iVar67 > l_U602))
                        {
                            GET_CHAR_COORDINATES( l_U623, ref uVar16._fU0, ref uVar16._fU4, ref uVar16._fU8 );
                            if (uVar16._fU8 > 6.50000000)
                            {
                                OPEN_SEQUENCE_TASK( ref uVar9 );
                                TASK_CHAR_SLIDE_TO_COORD( 0, 373.67650000, -284.96320000, 7.91410000, 90.00000000, 0.75000000 );
                                CLOSE_SEQUENCE_TASK( uVar9 );
                                TASK_PERFORM_SEQUENCE( l_U623, uVar9 );
                                CLEAR_SEQUENCE_TASK( uVar9 );
                                l_U602 = iVar67 + 8000;
                                l_U588 = 2;
                            }
                            else
                            {
                                l_U602 = iVar67 + 8000;
                                l_U588 = 0;
                            }
                        }
                        break;
                        case 2:
                        GET_CHAR_COORDINATES( l_U623, ref uVar16._fU0, ref uVar16._fU4, ref uVar16._fU8 );
                        GET_SCRIPT_TASK_STATUS( l_U623, 29, ref iVar6 );
                        if ((iVar6 == 7) || (iVar67 > l_U602))
                        {
                            GET_GAME_TIMER( ref l_U724 );
                            if (NOT (IS_CHAR_INJURED( l_U623 )))
                            {
                                if (uVar16._fU8 > 6.50000000)
                                {
                                    if (NOT (IS_CHAR_IN_AREA_3D( sub_3362(), 372.55700000, -285.38360000, 9.52092900, 373.99040000, -283.51560000, 7.34028600, 0 )))
                                    {
                                        TASK_SHIMMY( l_U623, 1 );
                                        l_U588 = 3;
                                    }
                                }
                                else
                                {
                                    l_U602 = iVar67 + 8000;
                                    l_U588 = 0;
                                }
                            }
                        }
                        break;
                        case 3:
                        GET_GAME_TIMER( ref iVar68 );
                        if ((l_U724 + 11000) < iVar68)
                        {
                            if (NOT l_U738)
                            {
                                iVar4 = GET_PED_CLIMB_STATE( l_U623 );
                                GET_CHAR_COORDINATES( l_U623, ref uVar16._fU0, ref uVar16._fU4, ref uVar16._fU8 );
                                if (((uVar16._fU8 > 6.50000000) AND (iVar4 != 4)) AND (iVar4 != 2))
                                {
                                    OPEN_SEQUENCE_TASK( ref uVar9 );
                                    TASK_FLUSH_ROUTE();
                                    TASK_EXTEND_ROUTE( 373.41230000, -285.04520000, 7.91400000 );
                                    TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                                    TASK_ACHIEVE_HEADING( 0, 90.00000000 );
                                    CLOSE_SEQUENCE_TASK( uVar9 );
                                    TASK_PERFORM_SEQUENCE( l_U623, uVar9 );
                                    CLEAR_SEQUENCE_TASK( uVar9 );
                                    l_U588 = 2;
                                }
                            }
                        }
                        if (NOT l_U738)
                        {
                            if (LOCATE_CHAR_ANY_MEANS_3D( l_U623, 372.42210000, -281.46450000, 8.97280400, 2.00000000, 1.00000000, 2.00000000, 0 ))
                            {
                                l_U738 = 1;
                            }
                        }
                        if ((NOT (IS_CHAR_INJURED( l_U623 ))) AND (NOT (IS_CHAR_INJURED( sub_3362() ))))
                        {
                            iVar4 = GET_PED_CLIMB_STATE( l_U623 );
                            GET_CHAR_COORDINATES( l_U623, ref uVar69._fU0, ref uVar69._fU4, ref uVar69._fU8 );
                            if (iVar4 == 2)
                            {
                                if (LOCATE_CHAR_ANY_MEANS_3D( l_U623, 372.42210000, -275.16460000, 8.97280400, 2.00000000, 1.00000000, 2.00000000, 0 ))
                                {
                                    TASK_SHIMMY_LET_GO( l_U623 );
                                    l_U588 = 4;
                                }
                                else if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3362(), uVar69._fU0, uVar69._fU4 + 1.20000000, uVar69._fU8, 1.00000000, 1.20000000, 1.00000000, 0 )))
                                {
                                    TASK_SHIMMY_IN_DIRECTION( l_U623, 1 );
                                }
                            }
                        }
                        if (NOT l_U749)
                        {
                            if ((NOT (IS_CHAR_INJURED( l_U623 ))) AND (NOT (IS_CHAR_INJURED( sub_3362() ))))
                            {
                                iVar5 = GET_PED_CLIMB_STATE( sub_3362() );
                                iVar4 = GET_PED_CLIMB_STATE( l_U623 );
                                if (((iVar4 == 2) || (iVar4 == 3)) || (iVar4 == 4))
                                {
                                    if (((iVar5 == 2) || (iVar5 == 3)) || (iVar5 == 4))
                                    {
                                        sub_10272( "PM1_SHIMM", ref l_U892, 7, 1 );
                                        l_U749 = 1;
                                    }
                                }
                            }
                        }
                        break;
                        case 4:
                        if (NOT (IS_CHAR_INJURED( sub_3362() )))
                        {
                            if (l_U734)
                            {
                                OPEN_SEQUENCE_TASK( ref uVar10 );
                                TASK_CHAR_SLIDE_TO_COORD( 0, 373.72320000, -270.65210000, 7.91400000, 90.00000000, 0.10000000 );
                                TASK_CLIMB( 0, 1 );
                                CLOSE_SEQUENCE_TASK( uVar10 );
                                TASK_PERFORM_SEQUENCE( l_U623, uVar10 );
                                CLEAR_SEQUENCE_TASK( uVar10 );
                                l_U734 = 0;
                                l_U588 = 5;
                            }
                            else if (LOCATE_CHAR_ANY_MEANS_3D( sub_3362(), 372.19890000, -277.86400000, 8.65723700, 2.00000000, 2.00000000, 4.00000000, 0 ))
                            {
                                OPEN_SEQUENCE_TASK( ref uVar10 );
                                TASK_LOOK_AT_CHAR( 0, sub_3362(), 0, 0 );
                                TASK_FLUSH_ROUTE();
                                TASK_EXTEND_ROUTE( 373.84470000, -271.47750000, 7.91400000 );
                                TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                                TASK_ACHIEVE_HEADING( 0, 90.00000000 );
                                TASK_CLIMB( 0, 1 );
                                CLOSE_SEQUENCE_TASK( uVar10 );
                                TASK_PERFORM_SEQUENCE( l_U623, uVar10 );
                                CLEAR_SEQUENCE_TASK( uVar10 );
                                l_U588 = 5;
                            }
                            if ((IS_CHAR_IN_AREA_3D( sub_3362(), 371.86790000, -276.36520000, 6.99961800, 375.13320000, -267.48950000, 16.48098000, 0 )) || (IS_CHAR_IN_AREA_3D( sub_3362(), 371.79610000, -254.77460000, 12.02427000, 347.29000000, -302.05870000, 20.67249000, 0 )))
                            {
                                OPEN_SEQUENCE_TASK( ref uVar10 );
                                TASK_LOOK_AT_CHAR( 0, sub_3362(), 0, 0 );
                                TASK_FLUSH_ROUTE();
                                TASK_EXTEND_ROUTE( 373.84470000, -271.47750000, 7.91400000 );
                                TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                                TASK_ACHIEVE_HEADING( 0, 90.00000000 );
                                TASK_CLIMB( 0, 1 );
                                CLOSE_SEQUENCE_TASK( uVar10 );
                                TASK_PERFORM_SEQUENCE( l_U623, uVar10 );
                                CLEAR_SEQUENCE_TASK( uVar10 );
                                l_U588 = 5;
                            }
                            if (NOT l_U756)
                            {
                                if ((NOT (IS_CHAR_INJURED( l_U623 ))) AND (NOT (IS_CHAR_INJURED( sub_3362() ))))
                                {
                                    if (l_U588 == 4)
                                    {
                                        OPEN_SEQUENCE_TASK( ref uVar72 );
                                        TASK_LOOK_AT_CHAR( 0, sub_3362(), 30000, 0 );
                                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, sub_3362() );
                                        CLOSE_SEQUENCE_TASK( uVar72 );
                                        TASK_PERFORM_SEQUENCE( l_U623, uVar72 );
                                        CLEAR_SEQUENCE_TASK( uVar72 );
                                        GET_GAME_TIMER( ref l_U725 );
                                        l_U725 += 6000;
                                        l_U756 = 1;
                                    }
                                }
                            }
                            if ((NOT l_U739) AND (l_U756))
                            {
                                GET_GAME_TIMER( ref J );
                                if ((J > l_U725) AND (NOT (sub_4020( l_U892 ))))
                                {
                                    CLEAR_PRINTS();
                                    sub_10272( "PM1_SLOW", ref l_U820, 8, 1 );
                                    l_U739 = 1;
                                }
                            }
                            sub_20607();;
                        }
                        break;
                        case 5:
                        if ((NOT (IS_CHAR_INJURED( sub_3362() ))) AND (NOT (IS_CHAR_INJURED( l_U623 ))))
                        {
                            GET_SCRIPT_TASK_STATUS( l_U623, 29, ref iVar6 );
                            if (iVar6 == 7)
                            {
                                GET_CHAR_COORDINATES( l_U623, ref uVar16._fU0, ref uVar16._fU4, ref uVar16._fU8 );
                                if (uVar16._fU8 > 10.20000000)
                                {
                                    OPEN_SEQUENCE_TASK( ref uVar11 );
                                    TASK_ACHIEVE_HEADING( 0, 90.00000000 );
                                    TASK_CLIMB( 0, 1 );
                                    CLOSE_SEQUENCE_TASK( uVar11 );
                                    TASK_PERFORM_SEQUENCE( l_U623, uVar11 );
                                    CLEAR_SEQUENCE_TASK( uVar11 );
                                    l_U588 = 6;
                                }
                                else
                                {
                                    l_U734 = 1;
                                    l_U588 = 4;
                                }
                            }
                        }
                        sub_20607();
                        break;
                        case 6:
                        GET_SCRIPT_TASK_STATUS( l_U623, 29, ref iVar6 );
                        if (iVar6 == 7)
                        {
                            OPEN_SEQUENCE_TASK( ref uVar73 );
                            TASK_TOGGLE_DUCK( 0, 1 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U704._fU0, l_U704._fU4, l_U704._fU8, 3, -2, 0.01000000 );
                            CLOSE_SEQUENCE_TASK( uVar73 );
                            TASK_PERFORM_SEQUENCE( l_U623, uVar73 );
                            CLEAR_SEQUENCE_TASK( uVar73 );
                            GET_GAME_TIMER( ref l_U725 );
                            l_U725 += 10000;
                            l_U586 = 7;
                        }
                        sub_20607();
                        break;
                    }
                    if ((NOT (sub_4020( l_U886 ))) AND (NOT l_U760))
                    {
                        PRINT( "GOAL2", 7500, 3 );
                        l_U760 = 1;
                    }
                    if (NOT l_U735)
                    {
                        if (NOT (IS_CHAR_INJURED( sub_3362() )))
                        {
                            if (IS_CHAR_IN_AREA_3D( sub_3362(), 375.30930000, -283.82410000, 6.92726900, 371.96020000, -287.95520000, 10.01256000, 0 ))
                            {
                                PRINT_HELP( "SHHELP1" );
                                l_U735 = 1;
                            }
                        }
                    }
                    if (NOT l_U736)
                    {
                        if (NOT (IS_CHAR_INJURED( sub_3362() )))
                        {
                            iVar5 = GET_PED_CLIMB_STATE( sub_3362() );
                            if (iVar5 == 2)
                            {
                                PRINT_HELP( "SHHELP2" );
                                l_U736 = 1;
                            }
                        }
                    }
                    if (NOT l_U737)
                    {
                        if (IS_CHAR_IN_AREA_3D( sub_3362(), 373.03000000, -276.10680000, 10.89575000, 371.86190000, -275.17200000, 7.20961800, 0 ))
                        {
                            PRINT_HELP( "SHHELP3" );
                            l_U737 = 1;
                        }
                    }
                }
                break;
                case 7:
                if (NOT l_U739)
                {
                    GET_GAME_TIMER( ref J );
                    if (J > l_U725)
                    {
                        CLEAR_PRINTS();
                        sub_10272( "PM1_SLOW", ref l_U820, 8, 1 );
                        l_U739 = 1;
                    }
                }
                if ((NOT (IS_CHAR_INJURED( l_U623 ))) AND (NOT (IS_CHAR_INJURED( sub_3362() ))))
                {
                    if (((LOCATE_CHAR_ANY_MEANS_3D( sub_3362(), l_U704._fU0, l_U704._fU4, l_U704._fU8, 3.50000000, 3.50000000, 2.00000000, 0 )) AND (LOCATE_CHAR_ANY_MEANS_3D( l_U623, l_U704._fU0, l_U704._fU4, l_U704._fU8, 3.50000000, 3.50000000, 2.00000000, 0 ))) AND (NOT l_U907))
                    {
                        if ((l_U739) AND (NOT (sub_4020( l_U820 ))))
                        {
                            sub_10272( "PM1_NSLOW", ref l_U850, 8, 1 );
                        }
                        l_U907 = 1;
                    }
                }
                sub_20607();
                if (((l_U907) AND (NOT (sub_4020( l_U850 )))) AND (sub_13174( 1, 1 )))
                {
                    if (NOT (IS_CHAR_INJURED( sub_3362() )))
                    {
                        if (((NOT (IS_CHAR_IN_ANY_CAR( sub_3362() ))) AND (NOT (IS_CHAR_IN_ANY_BOAT( sub_3362() )))) AND (NOT (IS_CHAR_IN_ANY_HELI( sub_3362() ))))
                        {
                            l_U586 = 8;
                        }
                    }
                }
                if ((NOT (IS_CHAR_INJURED( l_U623 ))) AND (NOT (IS_CHAR_INJURED( sub_3362() ))))
                {
                    if ((IS_CHAR_IN_AREA_3D( sub_3362(), 347.37300000, -254.69400000, 11.84629000, 371.91880000, -260.05510000, 18.03516000, 0 )) AND (sub_13174( 1, 1 )))
                    {
                        if (NOT (IS_CHAR_INJURED( sub_3362() )))
                        {
                            if (((NOT (IS_CHAR_IN_ANY_CAR( sub_3362() ))) AND (NOT (IS_CHAR_IN_ANY_BOAT( sub_3362() )))) AND (NOT (IS_CHAR_IN_ANY_HELI( sub_3362() ))))
                            {
                                l_U586 = 8;
                            }
                        }
                    }
                }
                break;
                case 8:
                switch (l_U587)
                {
                    case 0:
                    if (sub_4020( l_U820 ))
                    {
                        sub_4202( ref l_U820, 0 );
                    }
                    if (sub_4020( l_U850 ))
                    {
                        sub_4202( ref l_U850, 0 );
                    }
                    CLEAR_PRINTS();
                    if ((NOT (IS_CHAR_INJURED( l_U623 ))) AND (NOT (IS_CHAR_INJURED( sub_3362() ))))
                    {
                        ALLOW_EMERGENCY_SERVICES( 0 );
                        SET_PLAYER_CONTROL( sub_8832(), 0 );
                        CHANGE_BLIP_DISPLAY( l_U765, 0 );
                        CLEAR_AREA( -1270.36500000, 1049.79800000, 13.65160000, 10.00000000, 1 );
                        CLEAR_AREA( 362.09590000, -256.01840000, 14.41920000, 30.00000000, 1 );
                        sub_14170( ref l_U598, 1 );
                        SET_CHAR_COORDINATES( l_U623, 364.50000000, -261.61220000, 13.98000000 );
                        SET_CHAR_COORDINATES( sub_3362(), 366.39290000, -263.61220000, 13.98000000 );
                        CREATE_CAM( 14, ref l_U719 );
                        CREATE_CAM( 14, ref l_U720 );
                        SET_CAM_POS( l_U719, 358.69050000, -253.20600000, 13.73568000 );
                        SET_CAM_ROT( l_U719, 7.55403400, -0.00000000, -103.51210000 );
                        SET_CAM_FOV( l_U719, 45.00000000 );
                        SET_CAM_POS( l_U720, 364.06110000, -253.22680000, 14.14444000 );
                        SET_CAM_ROT( l_U720, 5.16012100, -0.00000000, -154.84920000 );
                        SET_CAM_FOV( l_U720, 45.00000000 );
                        SET_CAM_ACTIVE( l_U719, 1 );
                        SET_CAM_PROPAGATE( l_U719, 1 );
                        sub_22577();
                        CREATE_CAM( 3, ref l_U721 );
                        SET_CAM_INTERP_STYLE_CORE( l_U721, l_U719, l_U720, 6000, 0 );
                        SET_CAM_ACTIVE( l_U721, 1 );
                        SET_CAM_PROPAGATE( l_U721, 1 );
                        ADD_COVER_POINT( 357.54530000, -254.84250000, 14.51810000, 2, 0.00000000, 0, 0, ref l_U800[0] );
                        ADD_COVER_POINT( 360.36500000, -254.84230000, 14.84360000, 2, 0.00000000, 0, 0, ref l_U800[1] );
                        SET_ZONE_NO_COPS( "ZFISN", 1 );
                        CLEAR_AREA_OF_COPS( -1270.36500000, 1049.79800000, 13.65160000, 300.00000000 );
                        SET_CREATE_RANDOM_COPS( 0 );
                        CLEAR_WANTED_LEVEL( sub_8832() );
                        SWITCH_ROADS_OFF( 368.90790000, -230.16690000, -10.55448000, 321.64640000, -294.79170000, 9.68405400 );
                        if (NOT (IS_CHAR_INJURED( sub_3362() )))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar74 );
                            TASK_TOGGLE_DUCK( 0, 1 );
                            TASK_FLUSH_ROUTE();
                            TASK_EXTEND_ROUTE( 366.00510000, -255.43950000, 14.45900000 );
                            TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                            CLOSE_SEQUENCE_TASK( uVar74 );
                            TASK_PERFORM_SEQUENCE( sub_3362(), uVar74 );
                            CLEAR_SEQUENCE_TASK( uVar74 );
                            HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3362(), 1 );
                        }
                        WAIT( 400 );
                        if (NOT (IS_CHAR_INJURED( l_U623 )))
                        {
                            SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U623, 1 );
                            SET_CHAR_PROOFS( l_U623, 0, 0, 0, 0, 0 );
                            OPEN_SEQUENCE_TASK( ref uVar75 );
                            TASK_TOGGLE_DUCK( 0, 1 );
                            TASK_FLUSH_ROUTE();
                            TASK_EXTEND_ROUTE( 364.83000000, -255.43950000, 14.74750000 );
                            TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                            CLOSE_SEQUENCE_TASK( uVar75 );
                            TASK_PERFORM_SEQUENCE( l_U623, uVar75 );
                            CLEAR_SEQUENCE_TASK( uVar75 );
                        }
                        GET_GAME_TIMER( ref l_U722 );
                        l_U599 = l_U722 + 2000;
                        l_U722 += 6000;
                        vVar13 = {354.23390000, -217.07870000, 3.52980000};
                        vVar76 = {362.35640000, -235.72430000, 3.67889400};
                        vVar79 = {373.95680000, -234.83430000, 4.25207800};
                        ADD_COVER_BLOCKING_AREA( vVar76, vVar79, 0, 0, 1 );
                        FORCE_WIND( 0.00000000 );
                        l_U587 = 1;
                    }
                    else
                    {
                        sub_8916( 1000 );
                        l_U731 = 1;
                    }
                    break;
                    case 1:
                    GET_GAME_TIMER( ref l_U723 );
                    if (l_U723 > l_U722)
                    {
                        sub_14947( ref l_U719, ref l_U720, ref l_U721 );
                        CREATE_CAM( 14, ref l_U719 );
                        CREATE_CAM( 14, ref l_U720 );
                        SET_CAM_POS( l_U719, 331.95230000, -253.97330000, 4.68414400 );
                        SET_CAM_ROT( l_U719, 0.79815300, -0.00000000, -56.09371000 );
                        SET_CAM_FOV( l_U719, 43.50000000 );
                        SET_CAM_POS( l_U720, 332.51670000, -253.59400000, 4.69361800 );
                        SET_CAM_ROT( l_U720, 0.79815300, -0.00000000, -56.09371000 );
                        SET_CAM_FOV( l_U720, 40.20001000 );
                        WAIT( 500 );
                        CREATE_CAM( 3, ref l_U721 );
                        SET_CAM_INTERP_STYLE_CORE( l_U721, l_U719, l_U720, 5000, 0 );
                        SET_CAM_ACTIVE( l_U721, 1 );
                        SET_CAM_PROPAGATE( l_U721, 1 );
                        sub_10272( "PM1_PLAN1", ref l_U820, 6, 1 );
                        l_U587 = 2;
                        GET_GAME_TIMER( ref l_U722 );
                        l_U722 += 6000;
                    }
                    break;
                    case 2:
                    GET_GAME_TIMER( ref l_U723 );
                    if (l_U723 > l_U722)
                    {
                        if ((IS_VEH_DRIVEABLE( l_U651 )) AND (NOT (IS_CHAR_INJURED( l_U645 ))))
                        {
                            if (IS_VEH_DRIVEABLE( l_U651 ))
                            {
                                ATTACH_OBJECT_TO_CAR( l_U612[0], l_U651, -1, -0.30000000, -5.10000000, 0.30000000, 0, 0, 0 );
                                ATTACH_OBJECT_TO_CAR( l_U612[1], l_U651, -1, -0.60000000, -4.70000000, 0.30000000, 0, 0, 0 );
                                ATTACH_OBJECT_TO_CAR( l_U612[2], l_U651, -1, -0.30000000, -4.30000000, 0.30000000, 0, 0, 0 );
                                ATTACH_OBJECT_TO_CAR( l_U612[3], l_U651, -1, -0.00000000, -4.70000000, 0.30000000, 0, 0, 0 );
                                ATTACH_OBJECT_TO_CAR( l_U612[4], l_U651, -1, 0.40000000, -5.00000000, 0.30000000, 0, 0, 0 );
                                ATTACH_OBJECT_TO_CAR( l_U612[5], l_U651, -1, 0.40000000, -4.20000000, 0.30000000, 0, 0, 0 );
                                ATTACH_OBJECT_TO_CAR( l_U612[6], l_U651, -1, 0.80000000, -4.30000000, 0.30000000, 0, 0, 0 );
                                ATTACH_OBJECT_TO_CAR( l_U612[7], l_U651, -1, 0.40000000, -4.60000000, 0.70000000, 0, 0, 0 );
                                ATTACH_OBJECT_TO_CAR( l_U612[8], l_U651, -1, -0.10000000, -5.10000000, 0.70000000, 0, 0, 0 );
                                ATTACH_OBJECT_TO_CAR( l_U612[9], l_U651, -1, -0.10000000, -4.30000000, 0.70000000, 0, 0, 0 );
                            }
                            SET_CHAR_VISIBLE( l_U645, 1 );
                            SET_CAR_VISIBLE( l_U651, 1 );
                            FREEZE_CAR_POSITION( l_U651, 0 );
                            START_PLAYBACK_RECORDED_CAR( l_U651, 922 );
                            SKIP_TIME_IN_PLAYBACK_RECORDED_CAR( l_U651, fVar36 );
                            SET_VEHICLE_ALPHA( l_U651, 255 );
                        }
                        WAIT( 10 );
                        sub_10272( "PM1_PLAN2", ref l_U820, 6, 1 );
                        sub_14947( ref l_U719, ref l_U720, ref l_U721 );
                        CREATE_CAM( 14, ref l_U719 );
                        CREATE_CAM( 14, ref l_U720 );
                        SET_CAM_POS( l_U719, 385.97090000, -263.02810000, 7.73423600 );
                        SET_CAM_ROT( l_U719, -32.30665000, -0.00000000, -93.63045000 );
                        SET_CAM_NEAR_DOF( l_U719, 0.10000000 );
                        SET_CAM_FAR_DOF( l_U719, 40.00000000 );
                        SET_CAM_POS( l_U720, 380.74810000, -250.57740000, 4.85047100 );
                        SET_CAM_ROT( l_U720, -24.27369000, -0.00000100, -51.85517000 );
                        SET_CAM_NEAR_DOF( l_U720, 0.10000000 );
                        SET_CAM_FAR_DOF( l_U720, 40.00000000 );
                        CREATE_CAM( 3, ref l_U721 );
                        SET_CAM_INTERP_STYLE_CORE( l_U721, l_U719, l_U720, l_U730, 0 );
                        SET_CAM_ACTIVE( l_U721, 1 );
                        SET_CAM_PROPAGATE( l_U721, 1 );
                        l_U587 = 4;
                        GET_GAME_TIMER( ref l_U722 );
                        l_U722 += 6000;
                    }
                    break;
                    case 4:
                    GET_GAME_TIMER( ref l_U723 );
                    if (l_U723 > l_U722)
                    {
                        if (NOT (IS_CHAR_INJURED( sub_3362() )))
                        {
                            TASK_PLAY_ANIM( sub_3362(), "roof_chat_b", "misspackie2", 1000.00000000, 1, 0, 0, 0, -2 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U623 )))
                        {
                            TASK_PLAY_ANIM( l_U623, "roof_chat_a", "misspackie2", 1000.00000000, 1, 0, 0, 0, -2 );
                        }
                        l_U587 = 5;
                        GET_GAME_TIMER( ref l_U722 );
                        l_U722 += 100;
                    }
                    break;
                    case 5:
                    GET_GAME_TIMER( ref l_U723 );
                    if (l_U723 > l_U722)
                    {
                        sub_10272( "PM1_PLAN3", ref l_U820, 6, 1 );
                        sub_14947( ref l_U719, ref l_U720, ref l_U721 );
                        CREATE_CAM( 14, ref l_U719 );
                        SET_CAM_POS( l_U719, 364.06730000, -254.82810000, 14.62199000 );
                        SET_CAM_ROT( l_U719, -21.00854000, -20.66644000, -78.99006000 );
                        SET_CAM_FOV( l_U719, 56.99997000 );
                        SET_CAM_NEAR_DOF( l_U719, 1.00000000 );
                        SET_CAM_FAR_DOF( l_U719, 70.00000000 );
                        SET_CAM_ACTIVE( l_U719, 1 );
                        SET_CAM_PROPAGATE( l_U719, 1 );
                        l_U587 = 3;
                        GET_GAME_TIMER( ref l_U722 );
                        l_U722 += 5000;
                    }
                    break;
                    case 3:
                    GET_GAME_TIMER( ref l_U723 );
                    if (l_U723 > l_U722)
                    {
                        vVar13 = {354.88900000, -217.15460000, 3.52930000};
                        vVar82 = {369.44490000, -246.36570000, 1.96690000};
                        if (NOT (IS_CHAR_INJURED( l_U624[15] )))
                        {
                            SET_CHAR_COORDINATES( l_U624[15], 373.02940000, -245.08450000, 2.02230000 );
                            GET_OBJECT_COORDINATES( l_U786[l_U728], ref uVar85._fU0, ref uVar85._fU4, ref uVar85._fU8 );
                            l_U728++;
                            OPEN_SEQUENCE_TASK( ref uVar88 );
                            TASK_FLUSH_ROUTE();
                            TASK_EXTEND_ROUTE( uVar85._fU0 - 0.70000000, uVar85._fU4, uVar85._fU8 );
                            TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                            TASK_CHAR_SLIDE_TO_COORD( 0, uVar85._fU0 - 0.70000000, uVar85._fU4, uVar85._fU8, 270, 1061158912 );
                            TASK_ACHIEVE_HEADING( 0, 270.00000000 );
                            TASK_PLAY_ANIM( 0, "liftup", "misspackie2", 8.00000000, 0, 0, 0, 0, -2 );
                            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "crry_prtial", "misspackie2", 3.00000000, 1, 0, 0, 0, -2 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, vVar82.x, vVar82.y, vVar82.z, 2, -1, 0 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, vVar13.x, vVar13.y, vVar13.z, 2, -1, 0 );
                            CLOSE_SEQUENCE_TASK( uVar88 );
                            TASK_PERFORM_SEQUENCE( l_U624[15], uVar88 );
                            CLEAR_SEQUENCE_TASK( uVar88 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U624[4] )))
                        {
                            SET_CHAR_COORDINATES( l_U624[4], 374.98080000, -246.73220000, 2.02230000 );
                            GET_OBJECT_COORDINATES( l_U786[l_U728], ref uVar85._fU0, ref uVar85._fU4, ref uVar85._fU8 );
                            l_U728++;
                            OPEN_SEQUENCE_TASK( ref uVar89 );
                            TASK_FLUSH_ROUTE();
                            TASK_EXTEND_ROUTE( uVar85._fU0 - 0.70000000, uVar85._fU4, uVar85._fU8 );
                            TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                            TASK_CHAR_SLIDE_TO_COORD( 0, uVar85._fU0 - 0.70000000, uVar85._fU4, uVar85._fU8, 270, 1061158912 );
                            TASK_ACHIEVE_HEADING( 0, 270.00000000 );
                            TASK_PLAY_ANIM( 0, "liftup", "misspackie2", 8.00000000, 0, 0, 0, 0, -2 );
                            TASK_PLAY_ANIM_SECONDARY_UPPER_BODY( 0, "crry_prtial_b", "misspackie2", 3.00000000, 1, 0, 0, 0, -2 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, vVar82.x, vVar82.y, vVar82.z, 2, -1, 0 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, vVar13.x, vVar13.y, vVar13.z, 2, -1, 0 );
                            CLOSE_SEQUENCE_TASK( uVar89 );
                            TASK_PERFORM_SEQUENCE( l_U624[4], uVar89 );
                            CLEAR_SEQUENCE_TASK( uVar89 );
                        }
                        sub_14947( ref l_U719, ref l_U720, ref l_U721 );
                        if (((NOT (IS_CAR_DEAD( l_U651 ))) AND (NOT (IS_CHAR_INJURED( l_U645 )))) AND (NOT (IS_CAR_DEAD( l_U649 ))))
                        {
                            if (IS_PLAYBACK_GOING_ON_FOR_CAR( l_U651 ))
                            {
                                STOP_PLAYBACK_RECORDED_CAR( l_U651 );
                                WARP_CHAR_FROM_CAR_TO_CAR( l_U645, l_U649, -1 );
                                DELETE_CAR( ref l_U651 );
                                SET_CAR_VISIBLE( l_U649, 1 );
                                SET_CAR_COLLISION( l_U649, 1 );
                                SET_VEHICLE_ALPHA( l_U649, 255 );
                            }
                            for ( I = 0; I <= 9; I++ )
                            {
                                if (DOES_OBJECT_EXIST( l_U612[I] ))
                                {
                                    DETACH_OBJECT( l_U612[I], 0 );
                                }
                            }
                            ATTACH_OBJECT_TO_CAR( l_U612[0], l_U649, -1, -0.30000000, -5.10000000, 0.30000000, 0, 0, 0 );
                            ATTACH_OBJECT_TO_CAR( l_U612[1], l_U649, -1, -0.60000000, -4.70000000, 0.30000000, 0, 0, 0 );
                            ATTACH_OBJECT_TO_CAR( l_U612[2], l_U649, -1, -0.30000000, -4.30000000, 0.30000000, 0, 0, 0 );
                            ATTACH_OBJECT_TO_CAR( l_U612[3], l_U649, -1, -0.00000000, -4.70000000, 0.30000000, 0, 0, 0 );
                            ATTACH_OBJECT_TO_CAR( l_U612[4], l_U649, -1, 0.40000000, -5.00000000, 0.30000000, 0, 0, 0 );
                            ATTACH_OBJECT_TO_CAR( l_U612[5], l_U649, -1, 0.40000000, -4.20000000, 0.30000000, 0, 0, 0 );
                            ATTACH_OBJECT_TO_CAR( l_U612[6], l_U649, -1, 0.80000000, -4.30000000, 0.30000000, 0, 0, 0 );
                            ATTACH_OBJECT_TO_CAR( l_U612[7], l_U649, -1, 0.40000000, -4.60000000, 0.70000000, 0, 0, 0 );
                            ATTACH_OBJECT_TO_CAR( l_U612[8], l_U649, -1, -0.10000000, -5.10000000, 0.70000000, 0, 0, 0 );
                            ATTACH_OBJECT_TO_CAR( l_U612[9], l_U649, -1, -0.10000000, -4.30000000, 0.70000000, 0, 0, 0 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U624[10] )))
                        {
                            SET_CHAR_COORDINATES( l_U624[10], fVar40, fVar41, fVar42 );
                            FREEZE_CHAR_POSITION( l_U624[10], 1 );
                            SET_CHAR_HEADING( l_U624[10], 180.00000000 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U624[9] )))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U624[9] );
                            SET_CHAR_COORDINATES( l_U624[9], fVar43, fVar44, fVar45 );
                            FREEZE_CHAR_POSITION( l_U624[9], 1 );
                            SET_CHAR_HEADING( l_U624[9], 270.00000000 );
                        }
                        CREATE_CAM( 14, ref l_U719 );
                        CREATE_CAM( 14, ref l_U720 );
                        SET_CAM_POS( l_U719, 379.46740000, -241.23970000, 1.46642500 );
                        SET_CAM_ROT( l_U719, 1.82449000, 0.00000000, -128.37370000 );
                        SET_CAM_FOV( l_U719, 41.40001000 );
                        SET_CAM_POS( l_U720, 379.46740000, -241.23970000, 1.46642500 );
                        SET_CAM_ROT( l_U720, 6.86651900, 0.00000000, 141.90120000 );
                        SET_CAM_FOV( l_U720, 41.40001000 );
                        CREATE_CAM( 3, ref l_U721 );
                        SET_CAM_INTERP_STYLE_CORE( l_U721, l_U719, l_U720, 10500, 0 );
                        SET_CAM_ACTIVE( l_U721, 1 );
                        SET_CAM_PROPAGATE( l_U721, 1 );
                        if ((NOT (IS_CHAR_INJURED( l_U624[10] ))) AND (NOT (IS_CHAR_INJURED( l_U624[9] ))))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar91 );
                            TASK_PLAY_ANIM( 0, "Box_Throw", "misspackie2", 8.00000000, 0, 0, 0, 0, -2 );
                            TASK_STAND_STILL( 0, 1000 );
                            TASK_PLAY_ANIM( 0, "Box_Throw", "misspackie2", 8.00000000, 0, 0, 0, 0, -2 );
                            TASK_PLAY_ANIM( 0, "smoke_stand_b", "misspackie2", 1.00000000, 1, 0, 0, 0, -2 );
                            CLOSE_SEQUENCE_TASK( uVar91 );
                            TASK_PERFORM_SEQUENCE( l_U624[10], uVar91 );
                            CLEAR_SEQUENCE_TASK( uVar91 );
                        }
                        sub_10272( "PM1_PLAN4", ref l_U820, 6, 1 );
                        l_U587 = 6;
                        GET_GAME_TIMER( ref l_U722 );
                        l_U600 = l_U722 + 2000;
                        l_U913 = (l_U722 + 2000) + l_U601;
                        l_U722 += 10500;
                    }
                    break;
                    case 6:
                    GET_GAME_TIMER( ref l_U723 );
                    if (NOT l_U745)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U624[15] )))
                        {
                            if (IS_CHAR_PLAYING_ANIM( l_U624[15], "misspackie2", "liftup" ))
                            {
                                GET_CHAR_ANIM_CURRENT_TIME( l_U624[15], "misspackie2", "liftup", ref fVar92 );
                                if (fVar92 > 0.55000000)
                                {
                                    ATTACH_OBJECT_TO_PED( l_U786[0], l_U624[15], 1219, 0.10000000, 0.29000000, 0, 0.20000000, 2.30000000, 0, 0 );
                                    l_U745 = 1;
                                }
                            }
                        }
                    }
                    if (NOT l_U746)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U624[4] )))
                        {
                            if (IS_CHAR_PLAYING_ANIM( l_U624[4], "misspackie2", "liftup" ))
                            {
                                GET_CHAR_ANIM_CURRENT_TIME( l_U624[4], "misspackie2", "liftup", ref fVar92 );
                                if (fVar92 > 0.55000000)
                                {
                                    ATTACH_OBJECT_TO_PED( l_U786[1], l_U624[4], 1219, 0.10000000, 0.29000000, 0, 0.20000000, 0.70000000, 0, 0 );
                                    l_U746 = 1;
                                }
                            }
                        }
                    }
                    if ((l_U723 > l_U600) AND (NOT l_U733))
                    {
                        if (NOT (IS_CHAR_INJURED( l_U624[9] )))
                        {
                            OPEN_SEQUENCE_TASK( ref uVar93 );
                            TASK_PLAY_ANIM( 0, "Box_Catch", "misspackie2", 1.00000000, 0, 0, 0, 0, -2 );
                            TASK_PLAY_ANIM( 0, "smoke_stand_b", "misspackie2", 1.00000000, 1, 0, 0, 0, -2 );
                            CLOSE_SEQUENCE_TASK( uVar93 );
                            TASK_PERFORM_SEQUENCE( l_U624[9], uVar93 );
                            CLEAR_SEQUENCE_TASK( uVar93 );
                            l_U733 = 1;
                        }
                    }
                    if (NOT l_U747)
                    {
                        if ((HAVE_ANIMS_LOADED( "misspackie2" )) AND (NOT (IS_CHAR_INJURED( l_U624[10] ))))
                        {
                            if (IS_CHAR_PLAYING_ANIM( l_U624[10], "misspackie2", "Box_Throw" ))
                            {
                                GET_CHAR_ANIM_CURRENT_TIME( l_U624[10], "misspackie2", "Box_Throw", ref l_U603 );
                                if (l_U603 > l_U912)
                                {
                                    if (DOES_OBJECT_EXIST( l_U797 ))
                                    {
                                        DELETE_OBJECT( ref l_U797 );
                                    }
                                    CREATE_OBJECT( -459749237, fVar46, fVar47, fVar48, ref l_U797, 1 );
                                    SET_OBJECT_HEADING( l_U797, 180.00000000 );
                                    SET_OBJECT_COLLISION( l_U797, 0 );
                                    PLAY_OBJECT_ANIM( l_U797, "box_obj", "misspackie2", 1000.00000000, 0, 1 );
                                    l_U747 = 1;
                                }
                            }
                        }
                    }
                    if (l_U723 > l_U722)
                    {
                        sub_14947( ref l_U719, ref l_U720, ref l_U721 );
                        if ((NOT (IS_CHAR_INJURED( l_U623 ))) AND (NOT (IS_CHAR_INJURED( sub_3362() ))))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( l_U623 );
                            OPEN_SEQUENCE_TASK( ref uVar94 );
                            TASK_LOOK_AT_CHAR( 0, sub_3362(), 20000, 0 );
                            TASK_TOGGLE_DUCK( 0, 1 );
                            CLOSE_SEQUENCE_TASK( uVar94 );
                            TASK_PERFORM_SEQUENCE( l_U623, uVar94 );
                            CLEAR_SEQUENCE_TASK( uVar94 );
                        }
                        if ((NOT (IS_CHAR_INJURED( sub_3362() ))) AND (NOT (IS_CHAR_INJURED( l_U623 ))))
                        {
                            CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3362() );
                            OPEN_SEQUENCE_TASK( ref uVar94 );
                            TASK_LOOK_AT_CHAR( 0, l_U623, 20000, 0 );
                            TASK_TOGGLE_DUCK( 0, 1 );
                            CLOSE_SEQUENCE_TASK( uVar94 );
                            TASK_PERFORM_SEQUENCE( sub_3362(), uVar94 );
                            CLEAR_SEQUENCE_TASK( uVar94 );
                        }
                        CREATE_CAM( 14, ref l_U719 );
                        CREATE_CAM( 14, ref l_U720 );
                        SET_CAM_POS( l_U719, 359.59640000, -232.40060000, 4.50193200 );
                        SET_CAM_ROT( l_U719, 2.49781100, 0.00000000, 25.67049000 );
                        SET_CAM_FOV( l_U719, 41.40001000 );
                        SET_CAM_POS( l_U720, 356.26070000, -233.14000000, 4.65098000 );
                        SET_CAM_ROT( l_U720, 0.09138800, -0.00000000, 9.74224100 );
                        SET_CAM_FOV( l_U720, 41.40001000 );
                        CREATE_CAM( 3, ref l_U721 );
                        SET_CAM_INTERP_STYLE_CORE( l_U721, l_U719, l_U720, 5000, 0 );
                        SET_CAM_ACTIVE( l_U721, 1 );
                        SET_CAM_PROPAGATE( l_U721, 1 );
                        sub_10272( "PM1_PLAN5", ref l_U820, 6, 1 );
                        l_U587 = 8;
                        GET_GAME_TIMER( ref l_U722 );
                        l_U722 += 7000;
                    }
                    break;
                    case 8:
                    GET_GAME_TIMER( ref l_U723 );
                    if (l_U723 > l_U722)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U623 )))
                        {
                            TASK_PLAY_ANIM( l_U623, "roof_chat2_b", "misspackie2", 1000.00000000, 0, 0, 0, 0, -2 );
                        }
                        if ((NOT (IS_CHAR_INJURED( sub_3362() ))) AND (NOT (IS_CHAR_INJURED( l_U623 ))))
                        {
                            TASK_LOOK_AT_CHAR( sub_3362(), l_U623, 0, 0 );
                            TASK_PLAY_ANIM( sub_3362(), "roof_chat2_a", "misspackie2", 1000.00000000, 0, 0, 0, 0, -2 );
                        }
                        l_U587 = 7;
                        GET_GAME_TIMER( ref l_U722 );
                        l_U722 += 100;
                    }
                    break;
                    case 7:
                    GET_GAME_TIMER( ref l_U723 );
                    if (l_U723 > l_U722)
                    {
                        sub_14947( ref l_U719, ref l_U720, ref l_U721 );
                        CREATE_CAM( 14, ref l_U719 );
                        SET_CAM_POS( l_U719, 366.16850000, -253.38170000, 13.07713000 );
                        SET_CAM_ROT( l_U719, 30.98342000, -7.77815100, 158.26540000 );
                        SET_CAM_FOV( l_U719, 35.10003000 );
                        SET_CAM_NEAR_DOF( l_U719, 1.00000000 );
                        SET_CAM_FAR_DOF( l_U719, 10.00000000 );
                        SET_CAM_ACTIVE( l_U719, 1 );
                        SET_CAM_PROPAGATE( l_U719, 1 );
                        sub_10272( "PM1_PLAN6", ref l_U820, 6, 1 );
                        l_U587 = 9;
                    }
                    break;
                    case 9:
                    if (NOT (sub_4020( l_U820 )))
                    {
                        sub_14947( ref l_U719, ref l_U720, ref l_U721 );
                        CREATE_CAM( 14, ref l_U719 );
                        SET_CAM_POS( l_U719, 395.11710000, -259.68090000, 7.77340000 );
                        SET_CAM_ROT( l_U719, -5.33983300, -5.59077400, 65.63989000 );
                        SET_CAM_FOV( l_U719, 74.40005000 );
                        SET_CAM_NEAR_DOF( l_U719, 3.00000000 );
                        SET_CAM_FAR_DOF( l_U719, 150.00000000 );
                        SET_CAM_ACTIVE( l_U719, 1 );
                        SET_CAM_PROPAGATE( l_U719, 1 );
                        CLEAR_PRINTS();
                        PRINT( "PGETDWN", 7500, 3 );
                        l_U587 = 11;
                        GET_GAME_TIMER( ref l_U722 );
                        l_U722 += 7500;
                    }
                    break;
                    case 11:
                    GET_GAME_TIMER( ref l_U723 );
                    if (l_U723 > l_U722)
                    {
                        INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                        l_U587 = 12;
                    }
                    break;
                    case 12:
                    sub_13810( 1000 );
                    sub_14947( ref l_U719, ref l_U720, ref l_U721 );
                    sub_15112( ref l_U598, 1, 0, 1 );
                    for ( I = 0; I <= 9; I++ )
                    {
                        if (DOES_OBJECT_EXIST( l_U612[I] ))
                        {
                            DELETE_OBJECT( ref l_U612[I] );
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U623 )))
                    {
                        CLEAR_CHAR_TASKS_IMMEDIATELY( l_U623 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U623, 0 );
                        SET_CHAR_COORDINATES( l_U623, 364.50000000, -256.98540000, 13.82850000 );
                        SET_CHAR_HEADING( l_U623, 0.00000000 );
                        SET_CHAR_DUCKING( l_U623, 1 );
                        if (NOT (IS_CHAR_INJURED( l_U623 )))
                        {
                            SET_CHAR_ANGLED_DEFENSIVE_AREA( l_U623, 359.72640000, -254.40000000, 18.23133000, 359.81620000, -260.90180000, 11.96351000, 3.00000000 );
                            TASK_GUARD_ASSIGNED_DEFENSIVE_AREA( l_U623, 362.14120000, -255.79550000, 14.40760000, 0.00000000, 0.00000000, 1000000 );
                        }
                    }
                    REMOVE_BLIP( l_U766[10] );
                    DELETE_CHAR( ref l_U624[10] );
                    if (NOT (IS_CHAR_INJURED( l_U624[9] )))
                    {
                        FREEZE_CHAR_POSITION( l_U624[9], 0 );
                    }
                    if ((NOT (IS_CHAR_INJURED( l_U624[8] ))) AND (NOT (IS_CHAR_INJURED( l_U624[0] ))))
                    {
                        OPEN_SEQUENCE_TASK( ref uVar95 );
                        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U624[0] );
                        TASK_PLAY_ANIM( 0, "smoke_stand_a", "misspackie2", 8.00000000, 1, 0, 0, 0, -2 );
                        CLOSE_SEQUENCE_TASK( uVar95 );
                        SET_CHAR_COORDINATES( l_U624[8], 355.24680000, -238.89740000, 3.48010000 );
                        TASK_PERFORM_SEQUENCE( l_U624[8], uVar95 );
                        CLEAR_SEQUENCE_TASK( uVar95 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U645 )))
                    {
                        DELETE_CHAR( ref l_U645 );
                    }
                    if (DOES_VEHICLE_EXIST( l_U651 ))
                    {
                        DELETE_CAR( ref l_U651 );
                    }
                    if (NOT (IS_CHAR_INJURED( l_U623 )))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U623, 14, 1 );
                    }
                    if (NOT (IS_CAR_DEAD( l_U649 )))
                    {
                        SET_CAR_VISIBLE( l_U649, 1 );
                        SET_CAR_COLLISION( l_U649, 1 );
                        FREEZE_CAR_POSITION( l_U649, 0 );
                        ANCHOR_BOAT( l_U649, 1 );
                    }
                    MARK_MODEL_AS_NO_LONGER_NEEDED( 1759673526 );
                    MARK_MODEL_AS_NO_LONGER_NEEDED( -1099960214 );
                    if (NOT (IS_CHAR_INJURED( sub_3362() )))
                    {
                        HIDE_CHAR_WEAPON_FOR_SCRIPTED_CUTSCENE( sub_3362(), 0 );
                        CLEAR_CHAR_TASKS_IMMEDIATELY( sub_3362() );
                        SET_CHAR_COORDINATES( sub_3362(), 366.39290000, -256.98540000, 13.54000000 );
                        SET_CHAR_HEADING( sub_3362(), 0.00000000 );
                        SET_CHAR_DUCKING( sub_3362(), 1 );
                    }
                    if (DOES_OBJECT_EXIST( l_U797 ))
                    {
                        DELETE_OBJECT( ref l_U797 );
                    }
                    if (DOES_OBJECT_EXIST( l_U798 ))
                    {
                        DELETE_OBJECT( ref l_U798 );
                    }
                    SET_WANTED_MULTIPLIER( 0.00000000 );
                    WAIT( 500 );
                    sub_8916( 1000 );
                    SET_PLAYER_CONTROL( sub_8832(), 1 );
                    CLEAR_PRINTS();
                    PRINT( "GOAL3", 7500, 3 );
                    l_U586 = 9;
                    break;
                }
                GET_GAME_TIMER( ref l_U723 );
                if ((sub_15618()) AND (l_U723 > l_U599))
                {
                    sub_4007( ref l_U820 );
                    if (NOT l_U755)
                    {
                        if ((NOT (IS_CHAR_INJURED( l_U624[13] ))) AND (NOT (IS_CHAR_INJURED( l_U624[14] ))))
                        {
                            OPEN_SEQUENCE_TASK( ref l_U799 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 344.46670000, -237.44050000, 3.47810000, 2, -2, 0.20000000 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U624[14] );
                            TASK_PLAY_ANIM( 0, "smoke_stand_a", "misspackie2", 8.00000000, 1, 0, 0, 0, -2 );
                            CLOSE_SEQUENCE_TASK( l_U799 );
                            TASK_PERFORM_SEQUENCE( l_U624[13], l_U799 );
                            CLEAR_SEQUENCE_TASK( l_U799 );
                            OPEN_SEQUENCE_TASK( ref l_U799 );
                            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 343.59120000, -239.33870000, 3.48030000, 2, -2, 0.20000000 );
                            TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U624[13] );
                            CLOSE_SEQUENCE_TASK( l_U799 );
                            TASK_PERFORM_SEQUENCE( l_U624[14], l_U799 );
                            CLEAR_SEQUENCE_TASK( l_U799 );
                        }
                    }
                    l_U587 = 12;
                }
                break;
                case 9:
                if ((NOT (IS_CHAR_INJURED( sub_3362() ))) AND (NOT (IS_CHAR_INJURED( l_U623 ))))
                {
                    for ( J = 0; J <= 15; J++ )
                    {
                        if (DOES_CHAR_EXIST( l_U624[J] ))
                        {
                            if (HAS_CHAR_BEEN_DAMAGED_BY_CHAR( l_U624[J], sub_3362(), 0 ))
                            {
                                l_U753 = 1;
                            }
                        }
                    }
                    if (((IS_CHAR_IN_AREA_3D( sub_3362(), 376.86500000, -179.61050000, 24.02446000, 322.34820000, -250.00000000, -1.08112800, 0 )) || (IS_CHAR_IN_AREA_3D( sub_3362(), 393.11000000, -250.19800000, 5.66912300, 363.03760000, -237.07480000, 0.14922900, 0 ))) AND (NOT l_U753))
                    {
                        if (sub_4020( l_U838 ))
                        {
                            sub_4202( ref l_U838, 0 );
                        }
                        if ((NOT (IS_CHAR_INJURED( l_U624[5] ))) AND (NOT (IS_CHAR_INJURED( sub_3362() ))))
                        {
                            CLEAR_CHAR_TASKS( l_U624[5] );
                            TASK_LOOK_AT_CHAR( l_U624[5], sub_3362(), -2, 0 );
                            sub_4691( 3, l_U624[5], "PM1_TRIAD", 0 );
                        }
                        sub_10272( "PM1_SPOT", ref l_U856, 7, 1 );
                        l_U753 = 1;
                    }
                    if ((IS_CHAR_IN_AREA_3D( sub_3362(), 355.75250000, -254.91310000, 3.43044400, 350.81480000, -228.96140000, 8.64031300, 0 )) AND (NOT l_U753))
                    {
                        if (sub_4020( l_U838 ))
                        {
                            sub_4202( ref l_U838, 0 );
                        }
                        if ((NOT (IS_CHAR_INJURED( l_U624[8] ))) AND (NOT (IS_CHAR_INJURED( sub_3362() ))))
                        {
                            CLEAR_CHAR_TASKS( l_U624[8] );
                            TASK_LOOK_AT_CHAR( l_U624[8], sub_3362(), -2, 0 );
                        }
                        sub_4691( 3, l_U624[8], "PM1_TRIAD", 0 );
                        sub_10272( "PM1_SPOT", ref l_U856, 7, 1 );
                        l_U753 = 1;
                    }
                    if ((IS_CHAR_IN_AREA_3D( sub_3362(), 339.51890000, -252.15680000, 3.33742600, 320.46360000, -265.65160000, 6.42068200, 0 )) AND (NOT l_U753))
                    {
                        if (sub_4020( l_U838 ))
                        {
                            sub_4202( ref l_U838, 0 );
                        }
                        if ((NOT (IS_CHAR_INJURED( l_U624[12] ))) AND (NOT (IS_CHAR_INJURED( sub_3362() ))))
                        {
                            CLEAR_CHAR_TASKS( l_U624[12] );
                            TASK_LOOK_AT_CHAR( l_U624[12], sub_3362(), -2, 0 );
                        }
                        sub_4691( 3, l_U624[12], "PM1_TRIAD", 0 );
                        sub_10272( "PM1_SPOT", ref l_U856, 7, 1 );
                        l_U753 = 1;
                    }
                    if (IS_SNIPER_BULLET_IN_AREA( 321.06390000, -251.51770000, 3.88955900, 400.61380000, -176.86650000, 18.69912000 ))
                    {
                        l_U753 = 1;
                        l_U909 = 1;
                    }
                    if ((IS_CHAR_SHOOTING_IN_AREA( sub_3362(), 315.16180000, -277.95220000, 396.43490000, -148.10370000, 0 )) || (IS_CHAR_SHOOTING_IN_AREA( l_U623, 315.16180000, -277.95220000, 396.43490000, -148.10370000, 0 )))
                    {
                        l_U753 = 1;
                        l_U909 = 1;
                    }
                }
                if ((l_U753) AND ((NOT (sub_4020( l_U856 ))) || (l_U909)))
                {
                    for ( J = 0; J <= 9; J++ )
                    {
                        iVar96 = nil;
                        iVar96 = GET_PED_OBJECT_IS_ATTACHED_TO( l_U786[J] );
                        if (iVar96 != nil)
                        {
                            if (NOT (IS_CHAR_INJURED( iVar96 )))
                            {
                                DETACH_OBJECT( l_U786[J], 1 );
                                TASK_COMBAT_HATED_TARGETS_AROUND_CHAR( iVar96, 50.00000000 );
                            }
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( l_U623 )))
                    {
                        SET_CURRENT_CHAR_WEAPON( l_U623, 14, 0 );
                        SET_CHAR_DECISION_MAKER( l_U623, l_U605 );
                        TASK_SWAP_WEAPON( l_U623, 1 );
                        SET_CHAR_RELATIONSHIP( l_U623, 5, 24 );
                        REGISTER_HATED_TARGETS_IN_AREA( l_U623, 353.69770000, -237.77610000, 3.48340000, 10.00000000 );
                    }
                    for ( J = 0; J <= 15; J++ )
                    {
                        if (((NOT (IS_CHAR_INJURED( sub_3362() ))) AND (NOT (IS_CHAR_INJURED( l_U624[J] )))) AND (NOT (IS_CHAR_INJURED( l_U623 ))))
                        {
                            SET_CHAR_DECISION_MAKER( l_U624[J], l_U605 );
                            SET_CHAR_RELATIONSHIP_GROUP( l_U624[J], 24 );
                            SET_CHAR_RELATIONSHIP( l_U624[J], 5, 0 );
                            WAIT( 20 );
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( sub_3362() )))
                    {
                        for ( J = 7; J <= 15; J++ )
                        {
                            if (NOT (IS_CHAR_INJURED( l_U624[J] )))
                            {
                                TASK_SEEK_COVER_FROM_PED( l_U624[J], sub_3362(), 9000 );
                            }
                        }
                    }
                    if ((NOT (IS_CHAR_INJURED( l_U624[12] ))) AND (NOT (IS_CHAR_INJURED( sub_3362() ))))
                    {
                        GET_CHAR_COORDINATES( l_U624[12], ref uVar97._fU0, ref uVar97._fU4, ref uVar97._fU8 );
                        if (NOT (IS_CHAR_INJURED( sub_3362() )))
                        {
                            if (NOT (LOCATE_CHAR_ANY_MEANS_3D( sub_3362(), uVar97._fU0, uVar97._fU4, uVar97._fU8, 8.00000000, 8.00000000, 3.00000000, 0 )))
                            {
                                CLEAR_CHAR_TASKS_IMMEDIATELY( l_U624[12] );
                                OPEN_SEQUENCE_TASK( ref uVar100 );
                                TASK_FLUSH_ROUTE();
                                TASK_EXTEND_ROUTE( 332.33060000, -254.31560000, 4.44850000 );
                                TASK_FOLLOW_POINT_ROUTE( 0, 2, 0 );
                                TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 346.74610000, -238.94270000, 4.48010000, 4, -2, 0.01000000 );
                                TASK_SET_CHAR_DECISION_MAKER( 0, l_U605 );
                                TASK_COMBAT( 0, sub_3362() );
                                CLOSE_SEQUENCE_TASK( uVar100 );
                                SET_CHAR_DECISION_MAKER( l_U624[12], l_U606 );
                                TASK_PERFORM_SEQUENCE( l_U624[12], uVar100 );
                                CLEAR_SEQUENCE_TASK( uVar100 );
                            }
                        }
                    }
                    if (NOT (IS_CHAR_INJURED( sub_3362() )))
                    {
                        SET_PED_IS_BLIND_RAGING( sub_3362(), 1 );
                    }
                    l_U586 = 10;
                }
                if (((NOT l_U901) AND (NOT IS_MESSAGE_BEING_DISPLAYED())) AND (NOT sub_35902()))
                {
                    sub_10272( "PM1_DOWN", ref l_U838, 7, 1 );
                    l_U901 = 1;
                }
                sub_35962();
                sub_36125();
                break;
                case 10:
                if (NOT l_U741)
                {
                    if ((NOT (IS_CHAR_INJURED( sub_3362() ))) AND (NOT (IS_CHAR_INJURED( l_U623 ))))
                    {
                        if (IS_CHAR_IN_AREA_3D( sub_3362(), 347.95890000, -228.61700000, 8.04822200, 359.11930000, -225.76680000, 3.63888700, 0 ))
                        {
                            SET_COMBAT_DECISION_MAKER( l_U623, l_U610 );
                            l_U741 = 1;
                        }
                    }
                }
                if ((NOT (IS_CHAR_INJURED( sub_3362() ))) AND (NOT l_U742))
                {
                    if (IS_CHAR_IN_AREA_3D( sub_3362(), 361.01860000, -228.12790000, 7.80395600, 348.44470000, -217.83810000, 3.55960700, 0 ))
                    {
                        if ((NOT (IS_CHAR_INJURED( l_U624[2] ))) AND (NOT (IS_CHAR_INJURED( sub_3362() ))))
                        {
                            TASK_COMBAT( l_U624[2], sub_3362() );
                        }
                        if ((NOT (IS_CHAR_INJURED( l_U624[3] ))) AND (NOT (IS_CHAR_INJURED( sub_3362() ))))
                        {
                            TASK_COMBAT( l_U624[3], sub_3362() );
                        }
                        if ((NOT (IS_CHAR_INJURED( l_U624[4] ))) AND (NOT (IS_CHAR_INJURED( sub_3362() ))))
                        {
                            SET_COMBAT_DECISION_MAKER( l_U624[4], l_U609 );
                            TASK_COMBAT( l_U624[4], sub_3362() );
                        }
                        if ((NOT (IS_CHAR_INJURED( l_U624[15] ))) AND (NOT (IS_CHAR_INJURED( sub_3362() ))))
                        {
                            SET_COMBAT_DECISION_MAKER( l_U624[15], l_U609 );
                            TASK_COMBAT( l_U624[15], sub_3362() );
                        }
                        l_U742 = 1;
                    }
                }
                if (NOT (IS_CHAR_INJURED( sub_3362() )))
                {
                    if ((NOT l_U758) AND (LOCATE_CHAR_ANY_MEANS_3D( sub_3362(), 346.00000000, -249.00000000, 4.49130000, 26.00000000, 5.00000000, 10.00000000, 0 )))
                    {
                        for ( J = 0; J <= 2; J++ )
                        {
                            sub_23403( ref l_U641[J], vVar19[J]._fU0, vVar19[J]._fU4, vVar19[J]._fU8, 0.00000000, l_U716[1], l_U604, l_U608 );
                            SET_CHAR_RELATIONSHIP_GROUP( l_U641[J], 24 );
                            SET_CHAR_RELATIONSHIP( l_U641[J], 5, 0 );
                            if (NOT (IS_CHAR_INJURED( sub_3362() )))
                            {
                                TASK_COMBAT( l_U641[J], sub_3362() );
                            }
                        }
                        if (NOT (IS_CHAR_INJURED( l_U641[2] )))
                        {
                            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U641[2], 354.47650000, -234.38160000, 4.49410000, 4, -2, 0.20000000 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U641[1] )))
                        {
                            TASK_FOLLOW_NAV_MESH_TO_COORD( l_U641[1], 354.47650000, -234.38160000, 4.49410000, 4, -2, 0.20000000 );
                        }
                        l_U758 = 1;
                    }
                }
                if ((NOT (IS_CHAR_INJURED( sub_3362() ))) AND (IS_VEH_DRIVEABLE( l_U646 )))
                {
                    if (IS_CHAR_IN_CAR( sub_3362(), l_U646 ))
                    {
                        if (DOES_BLIP_EXIST( l_U764 ))
                        {
                            REMOVE_BLIP( l_U764 );
                        }
                        if (NOT (IS_CHAR_INJURED( l_U623 )))
                        {
                            if (NOT (IS_CHAR_IN_AREA_3D( l_U623, 346.83200000, -217.73620000, 2.22601900, 376.48030000, -253.23570000, 8.93464300, 0 )))
                            {
                                SET_CHAR_COORDINATES( l_U623, 357.93220000, -251.36590000, 3.45950000 );
                            }
                            SET_CHAR_DECISION_MAKER( l_U623, l_U606 );
                            SET_CHAR_DUCKING( l_U623, 0 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U623, 1 );
                            ADD_BLIP_FOR_CHAR( l_U623, ref l_U785 );
                            SET_BLIP_AS_FRIENDLY( l_U785, 1 );
                            OPEN_SEQUENCE_TASK( ref uVar101 );
                            TASK_ENTER_CAR_AS_PASSENGER( 0, l_U646, -2, 0 );
                            CLOSE_SEQUENCE_TASK( uVar101 );
                            TASK_PERFORM_SEQUENCE( l_U623, uVar101 );
                            CLEAR_SEQUENCE_TASK( uVar101 );
                            CLEAR_PRINTS();
                            PRINT( "WAIT_PA", 7500, 3 );
                        }
                        l_U586 = 15;
                    }
                }
                sub_36125();
                sub_37946();
                sub_38133();
                sub_35962();
                break;
                case 15:
                if (((NOT (IS_CHAR_INJURED( sub_3362() ))) AND (NOT (IS_CHAR_INJURED( l_U623 )))) AND (IS_VEH_DRIVEABLE( l_U646 )))
                {
                    if (sub_38492( ref l_U765, ref l_U764, ref l_U783, l_U623, l_U646, l_U710, "DRIVE_LOCKUP", "BUDDY1", "RETURN_TRUCK", "CONT_LOCK" ))
                    {
                        if (NOT (IS_CHAR_INJURED( sub_3362() )))
                        {
                            SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3362(), 0 );
                        }
                        if (DOES_BLIP_EXIST( l_U785 ))
                        {
                            REMOVE_BLIP( l_U785 );
                        }
                        SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U646, 0 );
                        VEHICLE_DOES_PROVIDE_COVER( l_U646, 1 );
                        UNLOCK_RAGDOLL( l_U623, 1 );
                        SET_CHAR_DECISION_MAKER( l_U623, l_U605 );
                        SET_COMBAT_DECISION_MAKER( l_U623, l_U608 );
                        SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U623, 0 );
                        SET_ZONE_NO_COPS( "ZFISN", 0 );
                        SET_CREATE_RANDOM_COPS( 1 );
                        CLEAR_PRINTS();
                        sub_10272( "PM1_DONE", ref l_U832, 7, 1 );
                        l_U586 = 16;
                    }
                }
                sub_35962();
                sub_36125();
                sub_37946();
                sub_38133();
                break;
                case 16:
                if (NOT (IS_CHAR_INJURED( sub_3362() )))
                {
                    if (LOCATE_CHAR_ANY_MEANS_3D( sub_3362(), 329.50000000, -256.00000000, 5.00000000, 11.00000000, 3.00000000, 2.00000000, 0 ))
                    {
                        l_U586 = 17;
                    }
                }
                if ((NOT (IS_CHAR_INJURED( sub_3362() ))) AND (IS_VEH_DRIVEABLE( l_U646 )))
                {
                    if ((NOT (IS_CHAR_IN_AREA_3D( sub_3362(), 321.50620000, -251.16970000, 1.71408700, 397.77310000, -178.26980000, 15.30561000, 0 ))) AND (IS_CHAR_IN_CAR( sub_3362(), l_U646 )))
                    {
                        l_U586 = 17;
                    }
                }
                if (((NOT (IS_CHAR_INJURED( sub_3362() ))) AND (NOT (IS_CHAR_INJURED( l_U623 )))) AND (IS_VEH_DRIVEABLE( l_U646 )))
                {
                    sub_38492( ref l_U765, ref l_U764, ref l_U783, l_U623, l_U646, l_U710, "DRIVE_LOCKUP", "BUDDY1", "RETURN_TRUCK", "CONT_LOCK" );
                }
                sub_38133();
                sub_36125();
                break;
                case 17:
                if (((NOT (IS_CHAR_INJURED( sub_3362() ))) AND (NOT (IS_CHAR_INJURED( l_U623 )))) AND (IS_VEH_DRIVEABLE( l_U646 )))
                {
                    sub_38492( ref l_U765, ref l_U764, ref l_U783, l_U623, l_U646, l_U710, "DRIVE_OUTSIDE", "BUDDY1", "RETURN_TRUCK", "CONT_OUT" );
                    if ((LOCATE_CHAR_IN_CAR_3D( sub_3362(), l_U710._fU0, l_U710._fU4, l_U710._fU8, 10.00000000, 10.00000000, 3.00000000, 0 )) || (NOT (IS_CHAR_IN_AREA_3D( sub_3362(), 319.69320000, -311.16420000, 3.19766600, 410.92780000, -176.08800000, 19.76229000, 0 ))))
                    {
                        if (IS_CHAR_IN_CAR( sub_3362(), l_U646 ))
                        {
                            SET_WANTED_MULTIPLIER( 0.30000000 );
                            ALLOW_EMERGENCY_SERVICES( 1 );
                            REMOVE_BLIP( l_U783 );
                            if (DOES_VEHICLE_EXIST( l_U649 ))
                            {
                                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U649 );
                            }
                            for ( J = 0; J <= 9; J++ )
                            {
                                if (DOES_OBJECT_EXIST( l_U786[J] ))
                                {
                                    MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U786[J] );
                                }
                            }
                            MARK_MODEL_AS_NO_LONGER_NEEDED( l_U716[1] );
                            GET_GAME_TIMER( ref l_U726 );
                            l_U726 += 10000;
                            l_U586 = 18;
                        }
                    }
                }
                sub_36125();
                break;
                case 18:
                if (IS_VEH_DRIVEABLE( l_U646 ))
                {
                    if (LOCATE_CAR_3D( l_U646, l_U713._fU0, l_U713._fU4, l_U713._fU8, 35.00000000, 35.00000000, 10.00000000, 0 ))
                    {
                        if (IS_GARAGE_CLOSED( l_U914 ))
                        {
                            OPEN_GARAGE( l_U914 );
                            l_U761 = 0;
                        }
                    }
                    else if (IS_GARAGE_OPEN( l_U914 ))
                    {
                        CLOSE_GARAGE( l_U914 );
                        l_U761 = 1;
                    }
                }
                if (((NOT (IS_CHAR_INJURED( sub_3362() ))) AND (NOT (IS_CHAR_INJURED( l_U623 )))) AND (IS_VEH_DRIVEABLE( l_U646 )))
                {
                    if (sub_38492( ref l_U765, ref l_U764, ref l_U783, l_U623, l_U646, l_U713, "DRIVE_LOCKUP", "BUDDY1", "RETURN_TRUCK", "CONT_LOCK" ))
                    {
                        if ((IS_CHAR_SITTING_IN_CAR( l_U623, l_U646 )) AND (IS_CHAR_SITTING_IN_CAR( sub_3362(), l_U646 )))
                        {
                            if (IS_CAR_IN_GARAGE_AREA( "PaulMH3", l_U646 ))
                            {
                                REMOVE_BLIP( l_U764 );
                                REMOVE_BLIP( l_U784 );
                                REMOVE_BLIP( l_U783 );
                                CLOSE_GARAGE( "PaulMH3" );
                                l_U586 = 19;
                            }
                        }
                    }
                }
                if (NOT l_U817[1])
                {
                    GET_GAME_TIMER( ref iVar67 );
                    if (iVar67 > l_U726)
                    {
                        bVar102 = false;
                        J = 0;
                        while ((NOT bVar102) || (J != 2))
                        {
                            if (NOT l_U817[J])
                            {
                                CLEAR_AREA( 1244.86800000, -340.96240000, 89.03920000, 1.00000000, 1 );
                                CREATE_CAR( 886934177, 1244.86800000, -340.96240000, 95.03920000, ref l_U805[J], 1 );
                                TURN_OFF_VEHICLE_EXTRA( l_U805[J], 1, 1 );
                                TURN_OFF_VEHICLE_EXTRA( l_U805[J], 2, 1 );
                                TURN_OFF_VEHICLE_EXTRA( l_U805[J], 3, 1 );
                                TURN_OFF_VEHICLE_EXTRA( l_U805[J], 4, 1 );
                                TURN_OFF_VEHICLE_EXTRA( l_U805[J], 5, 0 );
                                TURN_OFF_VEHICLE_EXTRA( l_U805[J], 6, 0 );
                                TURN_OFF_VEHICLE_EXTRA( l_U805[J], 7, 0 );
                                TURN_OFF_VEHICLE_EXTRA( l_U805[J], 8, 0 );
                                TURN_OFF_VEHICLE_EXTRA( l_U805[J], 9, 1 );
                                CREATE_CHAR_INSIDE_CAR( l_U805[J], 8, l_U716[0], ref l_U808[J] );
                                if (NOT (IS_CHAR_INJURED( l_U808[J] )))
                                {
                                    SET_CHAR_DECISION_MAKER( l_U808[J], l_U606 );
                                    SET_CHAR_RELATIONSHIP_GROUP( l_U808[J], 5 );
                                    SET_CHAR_RELATIONSHIP( l_U808[J], 5, 0 );
                                    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U808[J], 0 );
                                }
                                CREATE_CHAR_AS_PASSENGER( l_U805[J], 8, l_U716[0], 0, ref l_U811[J] );
                                if (NOT (IS_CHAR_INJURED( l_U811[J] )))
                                {
                                    SET_COMBAT_DECISION_MAKER( l_U811[J], l_U607 );
                                    SET_CHAR_RELATIONSHIP_GROUP( l_U811[J], 5 );
                                    SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U811[J], 0 );
                                    GIVE_WEAPON_TO_CHAR( l_U811[J], 13, 30000, 1 );
                                    SET_CURRENT_CHAR_WEAPON( l_U811[J], 13, 1 );
                                    SET_CHAR_DECISION_MAKER( l_U811[J], l_U605 );
                                    SET_CHAR_RELATIONSHIP( l_U811[J], 5, 0 );
                                }
                                l_U726 = iVar67 + 25000;
                                l_U817[J] = 1;
                                bVar102 = true;
                            }
                            J++;
                            WAIT( 0 );
                        }
                    }
                }
                if ((NOT (IS_CHAR_INJURED( sub_3362() ))) AND (IS_VEH_DRIVEABLE( l_U646 )))
                {
                    if (NOT (LOCATE_CAR_3D( l_U646, l_U713._fU0, l_U713._fU4, l_U713._fU8, 100.00000000, 100.00000000, 40.00000000, 0 )))
                    {
                        sub_41429();
                    }
                }
                if (IS_PAY_N_SPRAY_ACTIVE())
                {
                    if (NOT l_U750)
                    {
                        for ( J = 0; J <= 1; J++ )
                        {
                            if (IS_VEH_DRIVEABLE( l_U805[J] ))
                            {
                                if (NOT (IS_CHAR_INJURED( l_U808[J] )))
                                {
                                    TASK_CAR_MISSION( l_U808[J], l_U805[J], l_U646, 5, 60, 2, 4, 20 );
                                    l_U750 = 1;
                                }
                            }
                        }
                    }
                }
                else if (l_U750)
                {
                    for ( J = 0; J <= 1; J++ )
                    {
                        if (IS_VEH_DRIVEABLE( l_U805[J] ))
                        {
                            if (NOT (IS_CHAR_INJURED( l_U808[J] )))
                            {
                                TASK_CAR_MISSION( l_U808[J], l_U805[J], l_U646, 7, 60, 2, 4, 20 );
                                l_U750 = 0;
                            }
                        }
                    }
                }
                if (NOT l_U759)
                {
                    bVar103 = false;
                    if (IS_VEH_DRIVEABLE( l_U646 ))
                    {
                        GET_CAR_COORDINATES( l_U646, ref uVar104._fU0, ref uVar104._fU4, ref uVar104._fU8 );
                    }
                    for ( J = 0; J <= 1; J++ )
                    {
                        if (IS_VEH_DRIVEABLE( l_U805[J] ))
                        {
                            if (LOCATE_CAR_3D( l_U805[J], uVar104._fU0, uVar104._fU4, uVar104._fU8, 10.00000000, 6.00000000, 5.00000000, 0 ))
                            {
                                bVar103 = true;
                            }
                        }
                    }
                    if (bVar103)
                    {
                        if (NOT (IS_CHAR_INJURED( l_U623 )))
                        {
                            GIVE_WEAPON_TO_CHAR( l_U623, 13, 30000, 1 );
                            SET_CURRENT_CHAR_WEAPON( l_U623, 13, 1 );
                            SET_CHAR_DECISION_MAKER( l_U623, l_U605 );
                            SET_CHAR_RELATIONSHIP( l_U623, 5, 5 );
                            SET_BLOCKING_OF_NON_TEMPORARY_EVENTS( l_U623, 0 );
                            SET_CHAR_WILL_LEAVE_CAR_IN_COMBAT( l_U623, 0 );
                        }
                        l_U759 = 1;
                    }
                }
                else
                {
                    sub_44010();
                }
                sub_36125();
                break;
                case 19:
                if (NOT (IS_CHAR_INJURED( sub_3362() )))
                {
                    SET_PLAYER_CONTROL( sub_8832(), 0 );
                }
                sub_13810( 1000 );
                if (NOT (IS_CHAR_INJURED( sub_3362() )))
                {
                    WARP_CHAR_FROM_CAR_TO_COORD( sub_3362(), -531.60990000, 333.92620000, 5.70890000 );
                    SET_CHAR_HEADING( sub_3362(), 90.00000000 );
                    SET_CAM_BEHIND_PED( sub_3362() );
                }
                for ( J = 0; J <= 1; J++ )
                {
                    if (DOES_CHAR_EXIST( l_U808[J] ))
                    {
                        DELETE_CHAR( ref l_U808[J] );
                    }
                    if (DOES_CHAR_EXIST( l_U811[J] ))
                    {
                        DELETE_CHAR( ref l_U811[J] );
                    }
                    if (DOES_VEHICLE_EXIST( l_U805[J] ))
                    {
                        DELETE_CAR( ref l_U805[J] );
                    }
                }
                if (IS_VEH_DRIVEABLE( l_U646 ))
                {
                    SET_CAR_ENGINE_ON( l_U646, 0, 1 );
                }
                if (sub_4020( l_U820 ))
                {
                    sub_4202( ref l_U820, 0 );
                }
                if (sub_4020( l_U826 ))
                {
                    sub_4202( ref l_U826, 0 );
                }
                if (sub_4020( l_U832 ))
                {
                    sub_4202( ref l_U832, 0 );
                }
                LOAD_ADDITIONAL_TEXT( "PM1AUD", 6 );
                START_CUTSCENE_NOW( "impm1" );
                while (NOT HAS_CUTSCENE_LOADED())
                {
                    WAIT( 0 );
                }
                while (NOT HAS_CUTSCENE_FINISHED())
                {
                    WAIT( 0 );
                }
                CLEAR_NAMED_CUTSCENE( "impm1" );
                if (NOT (IS_CHAR_INJURED( l_U623 )))
                {
                    DELETE_CHAR( ref l_U623 );
                }
                LOAD_SCENE( -531.60990000, 333.92620000, 5.70890000 );
                if (DOES_VEHICLE_EXIST( l_U646 ))
                {
                    DELETE_CAR( ref l_U646 );
                }
                if (NOT (IS_CHAR_INJURED( sub_3362() )))
                {
                    SET_CAM_BEHIND_PED( sub_3362() );
                }
                WAIT( 100 );
                l_U732 = 1;
                l_U586 = 22;
                sub_8916( 1000 );
                if (NOT (IS_CHAR_DEAD( sub_3362() )))
                {
                    SET_PLAYER_CONTROL( sub_8832(), 1 );
                }
                break;
            }
        }
        if (NOT (IS_CHAR_INJURED( sub_3362() )))
        {
            if (l_U586 != 2)
            {
                if (l_U762)
                {
                    if (NOT (IS_CHAR_IN_AREA_3D( sub_3362(), 336.56930000, -311.38560000, -1.45921800, 386.84580000, -215.06580000, 27.56898000, 0 )))
                    {
                        SET_CAR_DENSITY_MULTIPLIER( 0.50000000 );
                        SET_PED_DENSITY_MULTIPLIER( 0.50000000 );
                        l_U762 = 0;
                    }
                }
                else if (IS_CHAR_IN_AREA_3D( sub_3362(), 336.56930000, -311.38560000, -1.45921800, 386.84580000, -215.06580000, 27.56898000, 0 ))
                {
                    SET_CAR_DENSITY_MULTIPLIER( 0.30000000 );
                    SET_PED_DENSITY_MULTIPLIER( 0.10000000 );
                    l_U762 = 1;
                }
            }
        }
        sub_45714();
        if (l_U731)
        {
            sub_45784();
        }
        if (l_U732)
        {
            sub_48400();
        }
        WAIT( 0 );
    }
    return;
}

void sub_395()
{
    sub_404();
    return;
}

void sub_404()
{
    int iVar2;

    iVar2 = 13;
    sub_418( iVar2 );
    sub_1594( iVar2 );
    return;
}

void sub_418(unknown uParam0)
{
    int iVar3;
    boolean bVar4;
    unknown uVar5;

    iVar3 = g_U13391[uParam0]._fU0._fU56;
    bVar4 = iVar3 == 6;
    if (g_U813)
    {
        sub_462();
        sub_623();
    }
    else if (NOT g_U10981[uParam0]._fU12)
    {
        if (NOT bVar4)
        {
            sub_731();
            sub_770();
        }
    }
    sub_846();
    sub_947();
    uVar5 = sub_1060( uParam0 );
    sub_1501( uVar5, 0 );
    return;
}

void sub_462()
{
    sub_476( g_U9931 );
    if (NOT g_U9893._fU24)
    {
        sub_576();
    }
    return;
}

void sub_476(int iParam0)
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

void sub_576()
{
    if (g_U0)
    {
        return;
    }
    DECREMENT_INT_STAT( 256, 1 );
    return;
}

void sub_623()
{
    sub_632();
    return;
}

void sub_632()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_CANCELLED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_731()
{
    if (g_U0)
    {
        return;
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 254, 1 );
    return;
}

void sub_770()
{
    sub_779();
    return;
}

void sub_779()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_FAILED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_846()
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

void sub_947()
{
    int iVar2;
    int iVar3;

    iVar2 = 0;
    GET_GAME_TIMER( ref iVar2 );
    iVar3 = iVar2 + sub_969();
    if (iVar3 > g_U63988._fU4)
    {
        g_U63988._fU4 = iVar3;
        g_U63988._fU8 = iVar2;
    }
    return;
}

int sub_969()
{
    if (g_U15654[8])
    {
        return 27000;
    }
    return 15000;
}

int sub_1060(unknown uParam0)
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
    sub_1459( "Flow_public: Return_Contact_From_Strand(): Unknown strand" );
    return 57;
}

void sub_1459(unknown uParam0)
{
    SCRIPT_ASSERT( uParam0 );
    return;
}

void sub_1501(int iParam0, boolean bParam1)
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

void sub_1594(int iParam0)
{
    int iVar3;
    boolean bVar4;

    sub_1603();
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
        sub_2378();
        g_U9893._fU4 = 1;
    }
    return;
}

void sub_1603()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if (((sub_1641( 5, g_U569[I] )) == 1) AND (g_U569[I]._fU20))
        {
            if ((sub_1641( 1, g_U569[I] )) != 0)
            {
                sub_1927( I );
            }
        }
    }
    if (NOT sub_2093())
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

int sub_1641(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6)
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

void sub_1927(int iParam0)
{
    int I;

    if (iParam0 < (g_U569 - 1))
    {
        for ( I = iParam0 + 1; I <= (g_U569 - 1); I++ )
        {
            g_U569[I - 1] = {g_U569[I]};
        }
    }
    sub_2012( g_U569 - 1 );
    return;
}

void sub_2012(unknown uParam0)
{
    g_U569[uParam0]._fU0[0] = -1;
    g_U569[uParam0]._fU0[1] = -1;
    g_U569[uParam0]._fU0[2] = -1;
    return;
}

int sub_2093()
{
    int I;

    for ( I = 0; I <= (g_U569 - 1); I++ )
    {
        if ((sub_1641( 4, g_U569[I] )) == 0)
        {
            return 1;
        }
    }
    return 0;
}

void sub_2378()
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

void sub_2505()
{
    int I;

    SWITCH_PED_PATHS_ON( 395.89790000, -163.00730000, 17.74421000, 313.28130000, -318.73380000, -5.27289900 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( -1099960214 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 1708842493 );
    MARK_MODEL_AS_NO_LONGER_NEEDED( 886934177 );
    for ( I = 0; I <= 1; I++ )
    {
        MARK_MODEL_AS_NO_LONGER_NEEDED( l_U716[I] );
    }
    if (DOES_BLIP_EXIST( l_U765 ))
    {
        REMOVE_BLIP( l_U765 );
    }
    sub_2659( 13 );
    if (NOT (IS_CHAR_INJURED( sub_3362() )))
    {
        BLOCK_CHAR_VISEME_ANIMS( sub_3362(), 0 );
        SET_CHAR_WILL_FLY_THROUGH_WINDSCREEN( sub_3362(), 1 );
    }
    REMOVE_ANIMS( "misspackie2" );
    for ( I = 0; I <= 9; I++ )
    {
        if (DOES_OBJECT_EXIST( l_U786[I] ))
        {
            MARK_OBJECT_AS_NO_LONGER_NEEDED( ref l_U786[I] );
        }
    }
    for ( I = 0; I <= 1; I++ )
    {
        REMOVE_COVER_POINT( l_U800[I] );
    }
    if (DOES_CHAR_EXIST( l_U623 ))
    {
        MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U623 );
    }
    for ( I = 0; I <= 15; I++ )
    {
        if (DOES_CHAR_EXIST( l_U624[I] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U624[I] );
        }
    }
    for ( I = 0; I <= 2; I++ )
    {
        if (DOES_CHAR_EXIST( l_U641[I] ))
        {
            MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U641[I] );
        }
    }
    for ( I = 0; I <= 1; I++ )
    {
        if (DOES_CHAR_EXIST( l_U808[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U808[I] )))
            {
                SET_CHAR_KEEP_TASK( l_U808[I], 0 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U808[I] );
            }
        }
        if (DOES_CHAR_EXIST( l_U811[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U811[I] )))
            {
                SET_CHAR_KEEP_TASK( l_U811[I], 0 );
                MARK_CHAR_AS_NO_LONGER_NEEDED( ref l_U811[I] );
            }
        }
    }
    if (DOES_VEHICLE_EXIST( l_U646 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U646 );
    }
    if (DOES_VEHICLE_EXIST( l_U647 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U647 );
    }
    if (DOES_VEHICLE_EXIST( l_U649 ))
    {
        MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U649 );
    }
    if (NOT (IS_CHAR_INJURED( sub_3362() )))
    {
        SET_PED_IS_BLIND_RAGING( sub_3362(), 0 );
    }
    SET_CREATE_RANDOM_COPS( 1 );
    sub_4007( ref l_U820 );
    sub_4007( ref l_U826 );
    sub_4007( ref l_U832 );
    sub_4007( ref l_U838 );
    sub_4007( ref l_U844 );
    sub_4007( ref l_U850 );
    sub_4007( ref l_U856 );
    SWITCH_ROADS_ON( 368.90790000, -230.16690000, -10.55448000, 321.64640000, -294.79170000, 9.68405400 );
    SET_ZONE_NO_COPS( "ZFISN", 0 );
    FLUSH_SCENARIO_BLOCKING_AREAS();
    FORCE_WIND( -1.00000000 );
    SET_CAR_DENSITY_MULTIPLIER( 1.00000000 );
    SET_PED_DENSITY_MULTIPLIER( 1.00000000 );
    SET_WANTED_MULTIPLIER( 1.00000000 );
    TERMINATE_THIS_SCRIPT();
    return;
}

void sub_2659(unknown uParam0)
{
    MARK_MODEL_AS_NO_LONGER_NEEDED( sub_2670( uParam0 ) );
    return;
}

int sub_2670(unknown uParam0)
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
    sub_1459( "Contacts.sch: Get_Model_For_Contact(): Unknown Contact ID. Tell Keith." );
    return 0;
}

void sub_3362()
{
    unknown Result;

    GET_PLAYER_CHAR( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_4007(unknown uParam0)
{
    if (sub_4020( (uParam0^) ))
    {
        sub_4202( uParam0, 0 );
    }
    return;
}

int sub_4020(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (uParam0._fU4 == g_U8393)
        {
            return 1;
        }
        else
        {
            sub_4132( "\n speech is playing, but not from this structure" );
        }
    }
    else
    {
        sub_4132( "\n speech is not playing" );
    }
    return 0;
}

void sub_4132(unknown uParam0)
{
    return;
}

void sub_4202(int iParam0, unknown uParam1)
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

void sub_4572(unknown uParam0)
{
    StrCopy( ref l_U0._fU0, uParam0, 16 );
    sub_4589();
    return;
}

void sub_4589()
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

void sub_4691(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    l_U0._fU16[uParam0]._fU0 = uParam1;
    StrCopy( ref l_U0._fU16[uParam0]._fU4, uParam2, 32 );
    if (NOT (IS_CHAR_INJURED( uParam1 )))
    {
        BLOCK_CHAR_AMBIENT_ANIMS( uParam1, uParam3 );
    }
    sub_4771( "\n PED NUMBER ", uParam0 );
    sub_4811( " ADDED WITH VOICE ", uParam2 );
    return;
}

void sub_4771(unknown uParam0, unknown uParam1)
{
    return;
}

void sub_4811(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_6368(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    if (sub_6379( uParam0 ))
    {
        sub_6427( uParam0, uParam1, uParam2, uParam3, uParam4, uParam5 );
        return 1;
    }
    sub_8083( uParam0 );
    return 0;
}

void sub_6379(unknown uParam0)
{
    return HAS_MODEL_LOADED( sub_2670( uParam0 ) );
}

void sub_6427(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    CREATE_CHAR( 25, sub_2670( uParam0 ), uParam2, uParam3, uParam4, uParam1, 1 );
    SET_CHAR_HEADING( (uParam1^), uParam5 );
    sub_6477( uParam0, (uParam1^) );
    return;
}

void sub_6477(unknown uParam0, unknown uParam1)
{
    sub_6489( ref uParam1, uParam0 );
    g_U26440[uParam0]._fU0 = 1;
    g_U26440[uParam0]._fU4 = uParam1;
    return;
}

void sub_6489(unknown uParam0, int iParam1)
{
    SET_CHAR_SUFFERS_CRITICAL_HITS( (uParam0^), 0 );
    SET_CHAR_CANT_BE_DRAGGED_OUT( (uParam0^), 1 );
    SET_CHAR_NEVER_TARGETTED( (uParam0^), 1 );
    SET_CHAR_MAX_TIME_IN_WATER( (uParam0^), 10.00000000 );
    SET_CHAR_MAX_TIME_UNDERWATER( (uParam0^), 10.00000000 );
    if (iParam1 == 57)
    {
        sub_6583( uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    }
    else
    {
        sub_7127( (uParam0^), iParam1, g_U64464[iParam1] );
    }
    return;
}

void sub_6583(unknown uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
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

void sub_7127(unknown uParam0, unknown uParam1, int iParam2)
{
    switch (uParam1)
    {
        case 0:
        switch (iParam2)
        {
            case 0:
            sub_6583( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_6583( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_6583( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Roman" );
        }
        return;
        case 3:
        switch (iParam2)
        {
            case 0:
            sub_6583( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, 0 );
            break;
            case 1:
            sub_6583( ref uParam0, 0, 1, 0, 2, 0, 0, 0, -1, 0 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Little Jacob" );
        }
        return;
        case 8:
        switch (iParam2)
        {
            case 0:
            sub_6583( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_6583( ref uParam0, 0, 1, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 2:
            sub_6583( ref uParam0, 0, 2, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Brucie" );
        }
        return;
        case 13:
        switch (iParam2)
        {
            case 0:
            sub_6583( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_6583( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Packie" );
        }
        return;
        case 16:
        switch (iParam2)
        {
            case 0:
            sub_6583( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
            break;
            case 1:
            sub_6583( ref uParam0, 0, 1, 1, 1, 0, 0, 0, -1, -1 );
            break;
            default: SCRIPT_ASSERT( "Set_Contacts_Clothes: Unknown Clothes set for Derrick" );
        }
        return;
    }
    if (NOT (iParam2 == 0))
    {
        SCRIPT_ASSERT( "Set_Contacts_Clothes: A contact without a change of clothes attempting to change clothes" );
    }
    sub_6583( ref uParam0, 0, 0, 0, 0, 0, 0, 0, -1, -1 );
    return;
}

void sub_8083(unknown uParam0)
{
    REQUEST_MODEL( sub_2670( uParam0 ) );
    return;
}

void sub_8213()
{
    unknown Result;

    GET_PLAYER_GROUP( CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() ), ref Result );
    return Result;
}

void sub_8650(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        g_U2220 = (uParam0^);
        g_U2235 = {uParam1};
        g_U2233 = uParam4;
    }
    return;
}

void sub_8832()
{
    return CONVERT_INT_TO_PLAYERINDEX( GET_PLAYER_ID() );
}

void sub_8871()
{
    while (IS_SCREEN_FADING_OUT())
    {
        WAIT( 0 );
    }
    return;
}

void sub_8916(unknown uParam0)
{
    DISABLE_PAUSE_MENU( 1 );
    sub_8933();
    sub_8871();
    DO_SCREEN_FADE_IN( uParam0 );
    while (IS_SCREEN_FADING_IN())
    {
        DISABLE_PAUSE_MENU( 1 );
        WAIT( 0 );
    }
    DISABLE_PAUSE_MENU( 0 );
    return;
}

void sub_8933()
{
    while (IS_SCREEN_FADING_IN())
    {
        WAIT( 0 );
    }
    return;
}

void sub_9091(unknown uParam0)
{
    if (NOT (IS_CHAR_DEAD( sub_3362() )))
    {
        GET_CAR_CHAR_IS_USING( sub_3362(), ref g_U33853[uParam0]._fU0 );
        if (NOT (IS_CAR_DEAD( g_U33853[uParam0]._fU0 )))
        {
            GET_CAR_MODEL( g_U33853[uParam0]._fU0, ref g_U33853[uParam0]._fU4 );
            if (IS_THIS_MODEL_A_BOAT( g_U33853[uParam0]._fU4 ))
            {
                g_U33853[uParam0]._fU8[0] = -1;
                g_U33853[uParam0]._fU8[1] = -1;
                g_U33853[uParam0]._fU8[2] = -1;
                g_U33853[uParam0]._fU8[3] = -1;
            }
            else
            {
                GET_CAR_COLOURS( g_U33853[uParam0]._fU0, ref g_U33853[uParam0]._fU8[0], ref g_U33853[uParam0]._fU8[1] );
                GET_EXTRA_CAR_COLOURS( g_U33853[uParam0]._fU0, ref g_U33853[uParam0]._fU8[2], ref g_U33853[uParam0]._fU8[3] );
            }
        }
        else
        {
            g_U33853[uParam0]._fU8[0] = -1;
            g_U33853[uParam0]._fU8[1] = -1;
            g_U33853[uParam0]._fU8[2] = -1;
            g_U33853[uParam0]._fU8[3] = -1;
            g_U33853[uParam0]._fU4 = 0;
        }
        sub_9501( sub_3362(), ref g_U33889[uParam0], 1 );
    }
    return;
}

void sub_9501(unknown uParam0, int iParam1, boolean bParam2)
{
    int iVar5;
    int iVar6;

    if (NOT (IS_CHAR_DEAD( uParam0 )))
    {
        GET_CHAR_PROP_INDEX( uParam0, 0, iParam1 + 0 );
        if (iParam1->_fU0 == -1)
        {
            iVar5 = GET_CHAR_DRAWABLE_VARIATION( sub_3362(), 8 );
            iVar6 = GET_CHAR_TEXTURE_VARIATION( sub_3362(), 8 );
            if ((iVar5 == 1) AND (iVar6 == 0))
            {
                iParam1->_fU0 = 10;
            }
        }
        GET_CHAR_PROP_INDEX( uParam0, 1, iParam1 + 4 );
        iParam1->_fU8 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 0 );
        iParam1->_fU12 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 1 );
        iParam1->_fU16 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 2 );
        iParam1->_fU20 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 3 );
        iParam1->_fU24 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 4 );
        iParam1->_fU28 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 5 );
        iParam1->_fU32 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 6 );
        iParam1->_fU36 = GET_CHAR_DRAWABLE_VARIATION( uParam0, 7 );
        iParam1->_fU40 = GET_CHAR_TEXTURE_VARIATION( uParam0, 0 );
        iParam1->_fU44 = GET_CHAR_TEXTURE_VARIATION( uParam0, 1 );
        iParam1->_fU48 = GET_CHAR_TEXTURE_VARIATION( uParam0, 2 );
        iParam1->_fU52 = GET_CHAR_TEXTURE_VARIATION( uParam0, 3 );
        iParam1->_fU56 = GET_CHAR_TEXTURE_VARIATION( uParam0, 4 );
        iParam1->_fU60 = GET_CHAR_TEXTURE_VARIATION( uParam0, 5 );
        iParam1->_fU64 = GET_CHAR_TEXTURE_VARIATION( uParam0, 6 );
        iParam1->_fU68 = GET_CHAR_TEXTURE_VARIATION( uParam0, 7 );
    }
    else
    {
        iParam1->_fU0 = -1;
        iParam1->_fU4 = -1;
        iParam1->_fU8 = -1;
        iParam1->_fU12 = -1;
        iParam1->_fU16 = -1;
        iParam1->_fU20 = -1;
        iParam1->_fU24 = -1;
        iParam1->_fU28 = -1;
        iParam1->_fU32 = -1;
        iParam1->_fU36 = -1;
        iParam1->_fU40 = -1;
        iParam1->_fU44 = -1;
        iParam1->_fU48 = -1;
        iParam1->_fU52 = -1;
        iParam1->_fU56 = -1;
        iParam1->_fU60 = -1;
        iParam1->_fU64 = -1;
        iParam1->_fU68 = -1;
    }
    if (bParam2)
    {
        if (iParam1->_fU0 == 2)
        {
            iParam1->_fU0 = -1;
        }
    }
    return;
}

void sub_10229()
{
    int iVar2;

    if ((NOT l_U898) AND (NOT l_U904))
    {
        sub_10272( "PM1_2GO", ref l_U874, 7, 1 );
        l_U898 = 1;
    }
    if ((((l_U898) AND (NOT l_U899)) AND (NOT (sub_4020( l_U874 )))) AND (NOT l_U904))
    {
        sub_10272( "PM1_GETCAR", ref l_U880, 7, 1 );
        l_U899 = 1;
    }
    if ((((l_U898) AND (NOT (sub_4020( l_U874 )))) AND (NOT (sub_4020( l_U880 )))) AND (NOT l_U900))
    {
        PRINT( "GOAL1", 7500, 3 );
        l_U900 = 1;
    }
    if ((NOT (IS_CHAR_INJURED( sub_3362() ))) AND (NOT (IS_CHAR_INJURED( l_U623 ))))
    {
        if ((IS_CHAR_SITTING_IN_ANY_CAR( sub_3362() )) AND (IS_CHAR_SITTING_IN_ANY_CAR( l_U623 )))
        {
            if (sub_4020( l_U880 ))
            {
                sub_4007( ref l_U880 );
            }
            if (((NOT l_U904) AND (l_U898)) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
            {
                if (g_U64940)
                {
                    sub_10272( "PM1_B1AV1", ref l_U826, 7, 1 );
                    l_U903 = 1;
                    g_U64940 = 0;
                }
                else
                {
                    sub_10272( "PM1_B1AV2", ref l_U826, 7, 1 );
                    g_U64940 = 1;
                }
                l_U904 = 1;
            }
            if (IS_CHAR_SITTING_IN_ANY_CAR( l_U623 ))
            {
                GET_CAR_CHAR_IS_USING( l_U623, ref iVar2 );
                if (IS_VEH_DRIVEABLE( iVar2 ))
                {
                    if (IS_CAR_UPSIDEDOWN( iVar2 ))
                    {
                        if ((sub_4020( l_U826 )) AND (NOT l_U902))
                        {
                            sub_11654( ref l_U826 );
                            l_U902 = 1;
                        }
                    }
                }
            }
            if ((l_U902) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
            {
                if (iVar2 != nil)
                {
                    if (NOT (IS_CAR_UPSIDEDOWN( iVar2 )))
                    {
                        if (l_U903)
                        {
                            sub_12162( "PM1_B1AV1", ref l_U826, 7, 1 );
                        }
                        else
                        {
                            sub_12162( "PM1_B1AV2", ref l_U826, 7, 1 );
                        }
                        l_U902 = 0;
                    }
                }
            }
        }
        else if ((sub_4020( l_U826 )) AND (NOT l_U902))
        {
            sub_11654( ref l_U826 );
            l_U902 = 1;
        }
    }
    return;
}

void sub_10272(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_10293( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3 );
}

void sub_10293(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
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
    return sub_10347( ref cVar11, uParam2, uParam3, 0, 0, 0, 0, ref cVar7, uParam4 );
}

int sub_10347(unknown uParam0, int iParam1, unknown uParam2, boolean bParam3, boolean bParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    int I;
    int iVar12;

    iVar12 = 0;
    iParam1->_fU0 = uParam2;
    if (NOT (sub_10369( iParam1 )))
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
    sub_11045( ref g_U8395, ref l_U0 );
    StrCopy( ref g_U8395._fU0, uParam7, 16 );
    g_U8395._fU388 = uParam8;
    g_U8394 = 1;
    return 1;
}

int sub_10369(int iParam0)
{
    if (IS_MOBILE_PHONE_CALL_ONGOING())
    {
        sub_4132( "\n !!!!! CANT PLAY SPEECH MOBILE PHONE CALL IS PLAYING" );
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
            sub_4132( "\n !!!!! CANT PLAY SPEECH CALLING SCRIPT IS STILL ACTIVE" );
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
            sub_4132( "\n !!!!! CANT PLAY SPEECH CURRENT SPEECH HAS HIGHER PRIORITY" );
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

void sub_11045(int iParam0, int iParam1)
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

int sub_11654(int iParam0)
{
    if (iParam0->_fU12)
    {
        sub_4132( "\n already paused" );
    }
    else if (((IS_SCRIPTED_CONVERSATION_ONGOING()) || (g_U8394 == 1)) || (g_U8394 == 2))
    {
        if (iParam0->_fU4 == g_U8393)
        {
            iParam0->_fU8 += (ABORT_SCRIPTED_CONVERSATION( 0 )) + 1;
            sub_4132( "\n CONVERSATION PAUSED AT LINE " );
            sub_11810( iParam0->_fU8 );
            iParam0->_fU12 = 1;
            iParam0->_fU16 = 0;
            return 1;
        }
        else
        {
            sub_4132( "\n NOT pausing the line as scripted and global speech id dont match or the speech is already paused" );
        }
    }
    else
    {
        sub_4132( "\n NOT pausing the line as conversation is not playing" );
    }
    if (NOT iParam0->_fU12)
    {
        iParam0->_fU8 = -1;
        sub_4132( "\n reseting paused struct line" );
    }
    return 0;
}

void sub_11810(unknown uParam0)
{
    return;
}

void sub_12162(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
{
    return sub_12183( uParam0, ref l_U0._fU0, uParam1, uParam2, uParam3 );
}

int sub_12183(unknown uParam0, unknown uParam1, int iParam2, unknown uParam3, unknown uParam4)
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
    if (iParam2->_fU12)
    {
        StrCopy( ref cVar11[0], uParam0, 16 );
        StrCopy( ref cVar11[1], "END", 16 );
        return sub_10347( ref cVar11, iParam2, uParam3, 1, 0, 0, 0, ref cVar7, uParam4 );
    }
    return 0;
}

int sub_12475(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8)
{
    if (IS_GROUP_MEMBER( uParam2, sub_8213() ))
    {
        if (sub_12510( uParam2, sub_3362() ))
        {
            if (NOT (DOES_BLIP_EXIST( (uParam1^) )))
            {
                if (DOES_BLIP_EXIST( (uParam0^) ))
                {
                    REMOVE_BLIP( (uParam0^) );
                }
                if ((uParam1^) == nil)
                {
                    PRINT_NOW( uParam6, 7500, 1 );
                    PRINTSTRING( "Go to your vDestination. (DO_BLIPS_PED)\n" );
                }
                else
                {
                    PRINT_NOW( uParam8, 7500, 1 );
                    PRINTSTRING( "Keep going to your vDestination. (DO_BLIPS_PED)\n" );
                }
                (uParam1^) = sub_12795( uParam3 );
            }
            return 1;
        }
        return 1;
    }
    else if (DOES_BLIP_EXIST( (uParam1^) ))
    {
        REMOVE_BLIP( (uParam1^) );
    }
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        ADD_BLIP_FOR_CHAR( uParam2, uParam0 );
        SET_BLIP_AS_FRIENDLY( (uParam0^), 1 );
        PRINT_NOW( uParam7, 7500, 1 );
        PRINTSTRING( "Left your buddy behind. (DO_BLIPS_PED)\n" );
    }
    if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3362(), uParam2, 20.00000000, 20.00000000, 0 ))
    {
        SET_GROUP_MEMBER( sub_8213(), uParam2 );
    }
    return 0;
}

int sub_12510(unknown uParam0, unknown uParam1)
{
    unknown uVar4;

    if (IS_CHAR_SITTING_IN_ANY_CAR( uParam1 ))
    {
        STORE_CAR_CHAR_IS_IN_NO_SAVE( uParam1, ref uVar4 );
        if (IS_CHAR_SITTING_IN_CAR( uParam0, uVar4 ))
        {
            return 1;
        }
        return 0;
    }
    if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( uParam0 )))
    {
        return 1;
    }
    return 0;
}

void sub_12795(unknown uParam0, unknown uParam1, unknown uParam2)
{
    unknown Result;

    ADD_BLIP_FOR_COORD( uParam0._fU0, uParam0._fU4, uParam0._fU8, ref Result );
    SET_ROUTE( Result, 1 );
    return Result;
}

int sub_13174(boolean bParam0, boolean bParam1)
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
        if (IS_CHAR_IN_ANY_CAR( sub_3362() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3362(), ref uVar4 );
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
        if (IS_CHAR_IN_ANY_CAR( sub_3362() ))
        {
            STORE_CAR_CHAR_IS_IN_NO_SAVE( sub_3362(), ref uVar4 );
            if (NOT (IS_CAR_DEAD( uVar4 )))
            {
                GET_DRIVER_OF_CAR( uVar4, ref iVar5 );
                if (NOT (iVar5 == sub_3362()))
                {
                    return 0;
                }
            }
        }
    }
    if (IS_CHAR_IN_ANY_CAR( sub_3362() ))
    {
        if (NOT (IS_CHAR_SITTING_IN_ANY_CAR( sub_3362() )))
        {
            return 0;
        }
    }
    if (NOT (IS_PLAYER_READY_FOR_CUTSCENE( sub_8832() )))
    {
        return 0;
    }
    if (NOT (CAN_PLAYER_START_MISSION( sub_8832() )))
    {
        return 0;
    }
    return 1;
}

void sub_13525(unknown uParam0)
{
    if (DOES_BLIP_EXIST( (uParam0^) ))
    {
        REMOVE_BLIP( (uParam0^) );
    }
    return;
}

void sub_13810(unknown uParam0)
{
    DISABLE_PAUSE_MENU( 1 );
    sub_8933();
    sub_8871();
    DO_SCREEN_FADE_OUT( uParam0 );
    while (IS_SCREEN_FADING_OUT())
    {
        WAIT( 0 );
    }
    DISABLE_PAUSE_MENU( 0 );
    return;
}

void sub_14083()
{
    REQUEST_ANIMS( "gestures@niko" );
    while (NOT (HAVE_ANIMS_LOADED( "gestures@niko" )))
    {
        WAIT( 0 );
    }
    return;
}

void sub_14170(unknown uParam0, boolean bParam1)
{
    BEGIN_CAM_COMMANDS( uParam0 );
    SET_WIDESCREEN_BORDERS( 1 );
    ACTIVATE_SCRIPTED_CAMS( 1, 1 );
    if (bParam1)
    {
        SET_USE_HIGHDOF( 1 );
    }
    sub_14220();
    CLEAR_PRINTS();
    return;
}

void sub_14220()
{
    return sub_14231( 1, 1 );
}

int sub_14231(boolean bParam0, unknown uParam1)
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

void sub_14947(unknown uParam0, unknown uParam1, unknown uParam2)
{
    if (DOES_CAM_EXIST( (uParam2^) ))
    {
        SET_CAM_PROPAGATE( (uParam2^), 0 );
        SET_CAM_ACTIVE( (uParam2^), 0 );
        DESTROY_CAM( (uParam2^) );
    }
    if (DOES_CAM_EXIST( (uParam0^) ))
    {
        SET_CAM_PROPAGATE( (uParam0^), 0 );
        SET_CAM_ACTIVE( (uParam0^), 0 );
        DESTROY_CAM( (uParam0^) );
    }
    if (DOES_CAM_EXIST( (uParam1^) ))
    {
        SET_CAM_PROPAGATE( (uParam1^), 0 );
        SET_CAM_ACTIVE( (uParam1^), 0 );
        DESTROY_CAM( (uParam1^) );
    }
    return;
}

void sub_15112(unknown uParam0, boolean bParam1, boolean bParam2, boolean bParam3)
{
    ACTIVATE_SCRIPTED_CAMS( 0, 0 );
    if (bParam2)
    {
        SET_PLAYER_CONTROL( sub_8832(), 1 );
    }
    if (bParam1)
    {
        SET_USE_HIGHDOF( 0 );
    }
    if (bParam3)
    {
        SET_CAM_BEHIND_PED( sub_3362() );
    }
    sub_15184();
    SET_WIDESCREEN_BORDERS( 0 );
    END_CAM_COMMANDS( uParam0 );
    return;
}

void sub_15184()
{
    g_U91._fU100 = 0;
    g_U91._fU104 = 0;
    return;
}

void sub_15246()
{
    if (HAVE_ANIMS_LOADED( "gestures@niko" ))
    {
        REMOVE_ANIMS( "gestures@niko" );
    }
    return;
}

int sub_15618()
{
    if ((((IS_CONTROL_PRESSED( 0, 77 )) || (IS_CONTROL_PRESSED( 2, 77 ))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 137 )))) || ((NOT IS_USING_CONTROLLER()) AND (IS_CONTROL_PRESSED( 2, 98 ))))
    {
        return 1;
        break;
    }
    return 0;
}

void sub_17407()
{
    if (sub_17416())
    {
        g_U64921 = 1;
    }
    return;
}

int sub_17416()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "dwayne_backup" )) >= 1)
    {
        return 1;
    }
    return 0;
}

void sub_20607()
{
    unknown uVar2;
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;

    if (NOT (IS_CHAR_INJURED( l_U623 )))
    {
        GET_CHAR_COORDINATES( l_U623, ref uVar3._fU0, ref uVar3._fU4, ref uVar3._fU8 );
        if (uVar3._fU8 < 6.00000000)
        {
            OPEN_SEQUENCE_TASK( ref uVar2 );
            TASK_TOGGLE_DUCK( 0, 0 );
            TASK_SWAP_WEAPON( 0, 0 );
            TASK_FOLLOW_NAV_MESH_TO_COORD( 0, l_U707._fU0, l_U707._fU4, l_U707._fU8, 3, -2, 0.01000000 );
            TASK_ACHIEVE_HEADING( 0, 90.00000000 );
            TASK_CLIMB( 0, 0 );
            CLOSE_SEQUENCE_TASK( uVar2 );
            TASK_PERFORM_SEQUENCE( l_U623, uVar2 );
            CLEAR_SEQUENCE_TASK( uVar2 );
            l_U738 = 0;
            l_U586 = 6;
            l_U588 = 0;
        }
    }
    return;
}

void sub_22577()
{
    int I;
    int J;
    boolean bVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;

    REQUEST_CAR_RECORDING( 922 );
    while (NOT (HAS_CAR_RECORDING_BEEN_LOADED( 922 )))
    {
        WAIT( 0 );
    }
    REQUEST_MODEL( l_U716[0] );
    REQUEST_MODEL( l_U716[1] );
    REQUEST_MODEL( 1759673526 );
    REQUEST_MODEL( -459749237 );
    REQUEST_MODEL( -1099960214 );
    REQUEST_MODEL( 886934177 );
    while ((((((NOT (HAS_MODEL_LOADED( l_U716[0] ))) || (NOT (HAS_MODEL_LOADED( l_U716[1] )))) || (NOT (HAS_MODEL_LOADED( 1759673526 )))) || (NOT (HAS_MODEL_LOADED( -459749237 )))) || (NOT (HAS_MODEL_LOADED( -1099960214 )))) || (NOT (HAS_MODEL_LOADED( 886934177 ))))
    {
        WAIT( 0 );
    }
    CREATE_OBJECT_NO_OFFSET( -459749237, 378.35230000, -245.98270000, 1.13560000, ref l_U786[0], 1 );
    SET_OBJECT_ROTATION( l_U786[0], 0.00000000, 90.00000000, 0.00000000 );
    CREATE_OBJECT_NO_OFFSET( -459749237, 378.35230000, -247.13320000, 1.13560000, ref l_U786[1], 1 );
    CREATE_OBJECT_NO_OFFSET( -459749237, 378.97290000, -245.37300000, 1.13560000, ref l_U786[2], 1 );
    CREATE_OBJECT_NO_OFFSET( -459749237, 378.97290000, -247.05270000, 1.13560000, ref l_U786[3], 1 );
    CREATE_OBJECT_NO_OFFSET( -459749237, 380.50200000, -244.89960000, 1.05260000, ref l_U786[4], 1 );
    CREATE_OBJECT_NO_OFFSET( -459749237, 380.50200000, -245.51930000, 1.05260000, ref l_U786[5], 1 );
    CREATE_OBJECT_NO_OFFSET( -459749237, 380.50200000, -246.05900000, 1.05260000, ref l_U786[6], 1 );
    CREATE_OBJECT_NO_OFFSET( -459749237, 381.47290000, -245.24940000, 0.95260000, ref l_U786[7], 1 );
    CREATE_OBJECT_NO_OFFSET( -459749237, 381.54300000, -245.76910000, 0.95260000, ref l_U786[8], 1 );
    CREATE_OBJECT_NO_OFFSET( -459749237, 382.04300000, -245.76910000, 0.95260000, ref l_U786[9], 1 );
    for ( I = 0; I <= 9; I++ )
    {
        SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN( l_U786[I], 1 );
    }
    for ( J = 0; J <= 9; J++ )
    {
        if (NOT (DOES_OBJECT_EXIST( l_U612[J] )))
        {
            CREATE_OBJECT( -459749237, 388.17090000, -242.47310000, -10.90000000 - J, ref l_U612[J], 1 );
        }
    }
    for ( I = 0; I <= 15; I++ )
    {
        sub_23403( ref l_U624[I], l_U652[I]._fU0, l_U652[I]._fU4, l_U652[I]._fU8, 0.00000000, l_U716[0], l_U606, l_U608 );
        if (NOT (IS_CHAR_INJURED( l_U624[I] )))
        {
            if (bVar4)
            {
                SET_COMBAT_DECISION_MAKER( l_U624[I], l_U609 );
                bVar4 = false;
            }
            else
            {
                bVar4 = true;
            }
        }
    }
    if (NOT (IS_CHAR_INJURED( l_U624[5] )))
    {
        SET_COMBAT_DECISION_MAKER( l_U624[5], l_U611 );
        SET_CHAR_ONLY_DAMAGED_BY_PLAYER( l_U624[5], 1 );
    }
    SET_DECISION_MAKER_ATTRIBUTE_WEAPON_ACCURACY( l_U608, 50 );
    CREATE_CAR( -1099960214, 354.74430000, -222.52730000, 3.52000000, ref l_U646, 1 );
    SET_CAR_ONLY_DAMAGED_BY_PLAYER( l_U646, 1 );
    SET_CAR_HEALTH( l_U646, 1400 );
    SET_CAR_HEADING( l_U646, 180.00000000 );
    VEHICLE_DOES_PROVIDE_COVER( l_U646, 0 );
    if (IS_VEH_DRIVEABLE( l_U646 ))
    {
        CHANGE_GARAGE_TYPE( l_U914, 3 );
        ADD_BLIP_FOR_CAR( l_U646, ref l_U764 );
        SET_CAR_ON_GROUND_PROPERLY( l_U646 );
        SET_BLIP_AS_FRIENDLY( l_U764, 1 );
    }
    CREATE_CAR( 1759673526, 388.17090000, -242.47310000, -0.90000000, ref l_U649, 1 );
    CLEAR_AREA( 388.17090000, -242.47310000, -0.90000000, 5.00000000, 1 );
    FREEZE_CAR_POSITION( l_U649, 1 );
    SET_CAR_COLLISION( l_U649, 0 );
    SET_CAR_VISIBLE( l_U649, 0 );
    SET_VEHICLE_CAN_BE_TARGETTED( l_U649, 0 );
    CLEAR_AREA( 454.17090000, -262.47310000, 2.90000000, 5.00000000, 1 );
    CREATE_CAR( 1759673526, 454.17090000, -262.47310000, 2.90000000, ref l_U651, 1 );
    FREEZE_CAR_POSITION( l_U651, 1 );
    SET_CAR_VISIBLE( l_U651, 0 );
    CREATE_CHAR_INSIDE_CAR( l_U651, 8, l_U716[0], ref l_U645 );
    SET_CHAR_VISIBLE( l_U645, 0 );
    if ((NOT (IS_CHAR_INJURED( l_U624[13] ))) AND (NOT (IS_CHAR_INJURED( l_U624[14] ))))
    {
        OPEN_SEQUENCE_TASK( ref l_U799 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 370.24670000, -239.92820000, 1.80170000, 2, -2, 0.20000000 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 344.46670000, -237.44050000, 3.47810000, 2, -2, 0.20000000 );
        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U624[14] );
        TASK_PLAY_ANIM( 0, "smoke_stand_a", "misspackie2", 8.00000000, 1, 0, 0, 0, -2 );
        CLOSE_SEQUENCE_TASK( l_U799 );
        TASK_PERFORM_SEQUENCE( l_U624[13], l_U799 );
        CLEAR_SEQUENCE_TASK( l_U799 );
        OPEN_SEQUENCE_TASK( ref l_U799 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 369.20850000, -239.06460000, 2.07250000, 2, -2, 0.20000000 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 343.59120000, -239.33870000, 3.48030000, 2, -2, 0.20000000 );
        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U624[13] );
        CLOSE_SEQUENCE_TASK( l_U799 );
        TASK_PERFORM_SEQUENCE( l_U624[14], l_U799 );
        CLEAR_SEQUENCE_TASK( l_U799 );
        l_U755 = 1;
    }
    if ((NOT (IS_CHAR_INJURED( l_U624[1] ))) AND (NOT (IS_CHAR_INJURED( l_U624[2] ))))
    {
        OPEN_SEQUENCE_TASK( ref uVar5 );
        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U624[2] );
        TASK_PLAY_ANIM( 0, "smoke_stand_a", "misspackie2", 8.00000000, 1, 0, 0, 0, -2 );
        CLOSE_SEQUENCE_TASK( uVar5 );
        TASK_PERFORM_SEQUENCE( l_U624[1], uVar5 );
        CLEAR_SEQUENCE_TASK( uVar5 );
        OPEN_SEQUENCE_TASK( ref uVar6 );
        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U624[1] );
        TASK_PLAY_ANIM( 0, "smoke_stand_b", "misspackie2", 8.00000000, 1, 0, 0, 0, -2 );
        CLOSE_SEQUENCE_TASK( uVar6 );
        TASK_PERFORM_SEQUENCE( l_U624[2], uVar6 );
        CLEAR_SEQUENCE_TASK( uVar6 );
    }
    if ((NOT (IS_CHAR_INJURED( l_U624[3] ))) AND (NOT (IS_CHAR_INJURED( l_U624[4] ))))
    {
        OPEN_SEQUENCE_TASK( ref uVar7 );
        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U624[4] );
        TASK_PLAY_ANIM( 0, "smoke_stand_a", "misspackie2", 8.00000000, 1, 0, 0, 0, -2 );
        CLOSE_SEQUENCE_TASK( uVar7 );
        TASK_PERFORM_SEQUENCE( l_U624[3], uVar7 );
        CLEAR_SEQUENCE_TASK( uVar7 );
        OPEN_SEQUENCE_TASK( ref uVar8 );
        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U624[3] );
        TASK_PLAY_ANIM( 0, "smoke_stand_b", "misspackie2", 8.00000000, 1, 0, 0, 0, -2 );
        CLOSE_SEQUENCE_TASK( uVar8 );
        TASK_PERFORM_SEQUENCE( l_U624[4], uVar8 );
        CLEAR_SEQUENCE_TASK( uVar8 );
    }
    if ((NOT (IS_CHAR_INJURED( l_U624[6] ))) AND (NOT (IS_CHAR_INJURED( l_U624[7] ))))
    {
        OPEN_SEQUENCE_TASK( ref uVar9 );
        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U624[7] );
        TASK_PLAY_ANIM( 0, "smoke_stand_a", "misspackie2", 8.00000000, 1, 0, 0, 0, -2 );
        CLOSE_SEQUENCE_TASK( uVar9 );
        TASK_PERFORM_SEQUENCE( l_U624[6], uVar9 );
        CLEAR_SEQUENCE_TASK( uVar9 );
        OPEN_SEQUENCE_TASK( ref uVar10 );
        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U624[6] );
        TASK_PLAY_ANIM( 0, "smoke_stand_b", "misspackie2", 8.00000000, 1, 0, 0, 0, -2 );
        CLOSE_SEQUENCE_TASK( uVar10 );
        TASK_PERFORM_SEQUENCE( l_U624[7], uVar10 );
        CLEAR_SEQUENCE_TASK( uVar10 );
    }
    if (NOT (IS_CHAR_INJURED( l_U624[5] )))
    {
        OPEN_SEQUENCE_TASK( ref uVar11 );
        TASK_ACHIEVE_HEADING( 0, 250.00000000 );
        TASK_PLAY_ANIM( 0, "smoke_stand_b", "misspackie2", 8.00000000, 1, 0, 0, 0, -2 );
        CLOSE_SEQUENCE_TASK( uVar11 );
        TASK_PERFORM_SEQUENCE( l_U624[5], uVar11 );
        CLEAR_SEQUENCE_TASK( uVar11 );
    }
    if ((NOT (IS_CHAR_INJURED( l_U624[8] ))) AND (NOT (IS_CHAR_INJURED( l_U624[0] ))))
    {
        OPEN_SEQUENCE_TASK( ref uVar12 );
        TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 355.24680000, -238.89740000, 4.48010000, 2, -2, 0.20000000 );
        TASK_TURN_CHAR_TO_FACE_CHAR( 0, l_U624[0] );
        TASK_PLAY_ANIM( 0, "smoke_stand_a", "misspackie2", 8.00000000, 1, 0, 0, 0, -2 );
        CLOSE_SEQUENCE_TASK( uVar12 );
        TASK_PERFORM_SEQUENCE( l_U624[8], uVar12 );
        CLEAR_SEQUENCE_TASK( uVar12 );
    }
    if (NOT (IS_CHAR_INJURED( l_U624[7] )))
    {
        SET_CHAR_HEADING( l_U624[7], 90.00000000 );
        TASK_STAND_STILL( l_U624[7], -2 );
    }
    if (NOT (IS_CHAR_INJURED( l_U624[9] )))
    {
        SET_CHAR_HEADING( l_U624[9], 270.00000000 );
        TASK_STAND_STILL( l_U624[9], -2 );
    }
    if (NOT (IS_CHAR_INJURED( l_U624[10] )))
    {
        SET_CHAR_HEADING( l_U624[10], 180.00000000 );
        TASK_STAND_STILL( l_U624[10], -2 );
    }
    if (NOT (IS_CHAR_INJURED( l_U624[12] )))
    {
        TASK_PLAY_ANIM( l_U624[12], "smoke_stand_a", "misspackie2", 8.00000000, 0, 0, 0, 0, -2 );
    }
    return;
}

void sub_23403(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7)
{
    CREATE_CHAR( 8, uParam5, uParam1, uParam2, uParam3, uParam0, 1 );
    SET_CHAR_HEADING( (uParam0^), uParam4 );
    SET_CHAR_RANDOM_COMPONENT_VARIATION( (uParam0^) );
    GIVE_WEAPON_TO_CHAR( (uParam0^), 13, 30000, 0 );
    SET_CHAR_RELATIONSHIP_GROUP( (uParam0^), 24 );
    SET_CHAR_DECISION_MAKER( (uParam0^), uParam6 );
    SET_COMBAT_DECISION_MAKER( (uParam0^), uParam7 );
    SET_CURRENT_CHAR_WEAPON( (uParam0^), 0, 0 );
    return;
}

void sub_35902()
{
    return IS_SCRIPTED_CONVERSATION_ONGOING();
}

void sub_35962()
{
    boolean bVar2;

    if (NOT l_U910)
    {
        if ((NOT (IS_CHAR_INJURED( sub_3362() ))) AND (NOT (IS_CHAR_INJURED( l_U623 ))))
        {
            if (IS_CHAR_IN_AREA_3D( sub_3362(), 347.12300000, -254.30020000, 15.63962000, 371.93700000, -252.03190000, 12.50000000, 0 ))
            {
                bVar2 = true;
            }
        }
        if (bVar2)
        {
            if (NOT sub_35902())
            {
                sub_10272( "PM1_ROOF", ref l_U862, 7, 1 );
                l_U910 = 1;
                bVar2 = true;
            }
        }
    }
    return;
}

void sub_36125()
{
    int iVar2;

    if (IS_CAR_DEAD( l_U646 ))
    {
        l_U589 = 1;
        l_U731 = 1;
    }
    if (NOT (IS_CAR_DEAD( l_U646 )))
    {
        if (sub_36186( l_U646 ))
        {
            l_U589 = 1;
            l_U731 = 1;
        }
    }
    if (IS_VEH_DRIVEABLE( l_U646 ))
    {
        if (IS_VEH_DRIVEABLE( l_U646 ))
        {
            if ((sub_36320( l_U646 )) AND (NOT l_U757))
            {
                GET_GAME_TIMER( ref l_U727 );
                l_U727 += 12000;
                SET_ENGINE_HEALTH( l_U646, -1 );
                l_U757 = 1;
            }
            if ((sub_36492( l_U646 )) AND (NOT l_U757))
            {
                GET_GAME_TIMER( ref l_U727 );
                l_U727 += 12000;
                SET_ENGINE_HEALTH( l_U646, -1 );
                l_U757 = 1;
            }
        }
    }
    else if ((NOT l_U757) AND (NOT (IS_CAR_DEAD( l_U646 ))))
    {
        SET_ENGINE_HEALTH( l_U646, -1 );
        GET_GAME_TIMER( ref l_U727 );
        l_U727 += 12000;
        l_U757 = 1;
    }
    if (l_U757)
    {
        GET_GAME_TIMER( ref iVar2 );
        if (iVar2 > l_U727)
        {
            if (NOT (IS_CAR_DEAD( l_U646 )))
            {
                EXPLODE_CAR( l_U646, 1, 0 );
            }
        }
    }
    return;
}

int sub_36186(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if ((IS_CAR_DEAD( uParam0 )) AND (IS_CAR_IN_WATER( uParam0 )))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 0;
    }
    return 0;
}

int sub_36320(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (NOT (CHECK_STUCK_TIMER( uParam0, 3, 60000 )))
        {
            if (NOT (CHECK_STUCK_TIMER( uParam0, 2, 30000 )))
            {
                if (NOT (CHECK_STUCK_TIMER( uParam0, 1, 40000 )))
                {
                    return 0;
                }
            }
        }
        return 1;
    }
    else
    {
        return 0;
    }
    return 0;
}

int sub_36492(unknown uParam0)
{
    if (DOES_VEHICLE_EXIST( uParam0 ))
    {
        if (NOT (CHECK_STUCK_TIMER( uParam0, 0, 5000 )))
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    else
    {
        return 0;
    }
    return 0;
}

void sub_37946()
{
    int I;
    int iVar3;

    for ( I = 0; I <= 15; I++ )
    {
        if (IS_CHAR_INJURED( l_U624[I] ))
        {
            iVar3++;
        }
    }
    if (((NOT (sub_4020( l_U844 ))) AND (iVar3 > 4)) AND (NOT l_U905))
    {
        sub_10272( "PM1_TRIADS", ref l_U844, 7, 1 );
        l_U905 = 1;
    }
    if (((NOT (sub_4020( l_U844 ))) AND (iVar3 > 8)) AND (NOT l_U906))
    {
        sub_10272( "PM1_TRIADS", ref l_U844, 7, 1 );
        l_U906 = 1;
    }
    return;
}

void sub_38133()
{
    int I;
    boolean bVar3;

    if ((NOT l_U754) AND (l_U742))
    {
        bVar3 = false;
        for ( I = 0; I <= 15; I++ )
        {
            if (DOES_CHAR_EXIST( l_U624[I] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U624[I] )))
                {
                    bVar3 = true;
                }
            }
        }
        for ( I = 0; I <= 2; I++ )
        {
            if (DOES_CHAR_EXIST( l_U641[I] ))
            {
                if (NOT (IS_CHAR_INJURED( l_U641[I] )))
                {
                    bVar3 = true;
                }
            }
            else
            {
                bVar3 = true;
            }
        }
        if (NOT bVar3)
        {
            SET_ZONE_NO_COPS( "ZFISN", 0 );
            SET_WANTED_MULTIPLIER( 0.10000000 );
            l_U754 = 1;
        }
    }
    return;
}

int sub_38492(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11)
{
    if (IS_GROUP_MEMBER( uParam3, sub_8213() ))
    {
        if (IS_CHAR_IN_CAR( sub_3362(), uParam4 ))
        {
            if (sub_12510( uParam3, sub_3362() ))
            {
                if (DOES_BLIP_EXIST( (uParam1^) ))
                {
                    REMOVE_BLIP( (uParam1^) );
                }
                if (DOES_BLIP_EXIST( (uParam0^) ))
                {
                    REMOVE_BLIP( (uParam0^) );
                }
                if (NOT (DOES_BLIP_EXIST( (uParam2^) )))
                {
                    if ((uParam2^) == nil)
                    {
                        PRINT_NOW( uParam8, 7500, 1 );
                        PRINTSTRING( "Go to your vDestination. (DO_BLIPS_PED_CAR)\n" );
                    }
                    else
                    {
                        PRINT_NOW( uParam11, 7500, 1 );
                        PRINTSTRING( "Keep going to your vDestination. (DO_BLIPS_PED_CAR)\n" );
                    }
                    (uParam2^) = sub_12795( uParam5 );
                }
                return 1;
            }
        }
        else if (DOES_BLIP_EXIST( (uParam2^) ))
        {
            REMOVE_BLIP( (uParam2^) );
        }
        if (DOES_BLIP_EXIST( (uParam0^) ))
        {
            REMOVE_BLIP( (uParam0^) );
        }
        if (NOT (DOES_BLIP_EXIST( (uParam1^) )))
        {
            ADD_BLIP_FOR_CAR( uParam4, uParam1 );
            SET_BLIP_AS_FRIENDLY( (uParam1^), 1 );
            if ((uParam2^) == nil)
            {
                (uParam2^) = sub_12795( uParam5 );
                REMOVE_BLIP( (uParam2^) );
                PRINT_NOW( uParam8, 7500, 1 );
                PRINTSTRING( "Go to your vDestination. (DO_BLIPS_PED_CAR)\n" );
            }
            else
            {
                PRINT_NOW( uParam10, 7500, 1 );
                PRINTSTRING( "Get in your car. (DO_BLIPS_PED)\n" );
            }
        }
    }
    else if (DOES_BLIP_EXIST( (uParam2^) ))
    {
        REMOVE_BLIP( (uParam2^) );
    }
    if (DOES_BLIP_EXIST( (uParam1^) ))
    {
        REMOVE_BLIP( (uParam1^) );
    }
    if (NOT (DOES_BLIP_EXIST( (uParam0^) )))
    {
        ADD_BLIP_FOR_CHAR( uParam3, uParam0 );
        SET_BLIP_AS_FRIENDLY( (uParam0^), 1 );
        PRINT_NOW( uParam9, 7500, 1 );
        PRINTSTRING( "Left your buddy behind. (DO_BLIPS_PED_CAR)\n" );
    }
    if (LOCATE_CHAR_ANY_MEANS_CHAR_2D( sub_3362(), uParam3, 20.00000000, 20.00000000, 0 ))
    {
        SET_GROUP_MEMBER( sub_8213(), uParam3 );
        REMOVE_BLIP( (uParam0^) );
    }
    return 0;
}

void sub_41429()
{
    unknown uVar2;
    int I;

    if (IS_VEH_DRIVEABLE( l_U646 ))
    {
        GET_CAR_SPEED( l_U646, ref uVar2 );
    }
    for ( I = 0; I <= 1; I++ )
    {
        if (IS_VEH_DRIVEABLE( l_U805[I] ))
        {
            if (NOT (IS_CHAR_INJURED( l_U808[I] )))
            {
                if ((sub_41547( ref l_U805[I], 15.00000000, 10.00000000, uVar2 + 15, 5 )) || (sub_41547( ref l_U805[I], 15.00000000, 10.00000000, uVar2 + 15, 1 )))
                {
                    TASK_CAR_MISSION( l_U808[I], l_U805[I], l_U646, 7, 60, 2, 4, 20 );
                    sub_43113( I );
                }
            }
        }
    }
    return;
}

int sub_41547(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;

    if (NOT (IS_CAR_DEAD( (uParam0^) )))
    {
        if (NOT (LOCATE_CHAR_ANY_MEANS_CAR_3D( sub_3362(), (uParam0^), uParam1, uParam1, uParam1, 0 )))
        {
            if (NOT (IS_CAR_ON_SCREEN( (uParam0^) )))
            {
                if (iParam4 == 8)
                {
                    uVar8 = {sub_41629( uParam0, uParam2 )};
                }
                else
                {
                    uVar8 = {sub_41744( iParam4, uParam2, 0 )};
                }
                return sub_42675( uParam0, uVar8, uParam3 );
            }
        }
    }
    return 0;
}

void sub_41629(unknown uParam0, unknown uParam1)
{
    vector Result;
    vector vVar7;

    GET_CAR_COORDINATES( (uParam0^), ref Result.x, ref Result.y, ref Result.z );
    GET_CHAR_COORDINATES( sub_3362(), ref vVar7.x, ref vVar7.y, ref vVar7.z );
    Result = {Result - vVar7};
    Result = {Result * (uParam1 / (VMAG( Result )))};
    Result = {Result + vVar7};
    return Result;
}

void sub_41744(unknown uParam0, unknown uParam1, boolean bParam2)
{
    unknown Result;
    unknown uVar6;
    unknown uVar7;

    switch (uParam0)
    {
        case 0:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3362(), (uParam1 * 0.80000000) * -1.00000000, uParam1 * 0.80000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3362(), uParam1 * -1.00000000, uParam1, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 1:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3362(), 0.00000000, uParam1, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3362(), 0.00000000, uParam1, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 2:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3362(), uParam1 * 0.80000000, uParam1 * 0.80000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3362(), uParam1 * 0.80000000, uParam1 * 0.80000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 3:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3362(), uParam1 * 0.80000000, 0.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3362(), uParam1, 0.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 4:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3362(), uParam1 * 0.65000000, (uParam1 * 0.65000000) * -1.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3362(), uParam1 * 0.80000000, (uParam1 * 0.80000000) * -1.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 5:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3362(), 0.00000000, (uParam1 * -1.00000000) * 0.65000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3362(), 0.00000000, uParam1 * -1.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 6:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3362(), (uParam1 * 0.65000000) * -1.00000000, (uParam1 * 0.65000000) * -1.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3362(), (uParam1 * 0.80000000) * -1.00000000, (uParam1 * 0.80000000) * -1.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
        case 7:
        if (bParam2)
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3362(), (uParam1 * -1.00000000) * 0.80000000, 0.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        else
        {
            GET_OFFSET_FROM_CHAR_IN_WORLD_COORDS( sub_3362(), uParam1 * -1.00000000, 0.00000000, 0.00000000, ref Result._fU0, ref Result._fU4, ref Result._fU8 );
        }
        break;
    }
    return Result;
}

int sub_42675(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;
    float fVar15;
    unknown uVar16;
    unknown uVar17;
    unknown uVar18;

    if (NOT (IS_CAR_DEAD( (uParam0^) )))
    {
        GET_CHAR_COORDINATES( sub_3362(), ref uVar7._fU0, ref uVar7._fU4, ref uVar7._fU8 );
        GET_NTH_CLOSEST_CAR_NODE_FAVOUR_DIRECTION( uParam1, uVar7, 1, ref uVar10, ref uVar13 );
        if (NOT (IS_POINT_OBSCURED_BY_A_MISSION_ENTITY( uVar10._fU0, uVar10._fU4, uVar10._fU8, 10.00000000, 10.00000000, 10.00000000 )))
        {
            GET_GAME_VIEWPORT_ID( ref uVar14 );
            if (NOT (CAM_IS_SPHERE_VISIBLE( uVar14, uVar10._fU0, uVar10._fU4, uVar10._fU8, 8.00000000 )))
            {
                CLEAR_AREA( uVar10._fU0, uVar10._fU4, uVar10._fU8, 6.00000000, 0 );
                SET_CAR_COORDINATES( (uParam0^), uVar10._fU0, uVar10._fU4, uVar10._fU8 );
                uVar16 = {-SIN( uVar13 ), COS( uVar13 ), 0.00000000};
                GET_ANGLE_BETWEEN_2D_VECTORS( uVar16._fU0, uVar16._fU4, uVar7._fU0 - uVar10._fU0, uVar7._fU4 - uVar10._fU4, ref fVar15 );
                if (fVar15 > 90.00000000)
                {
                    SET_CAR_HEADING( (uParam0^), uVar13 + 180.00000000 );
                }
                else
                {
                    SET_CAR_HEADING( (uParam0^), uVar13 );
                }
                SET_CAR_FORWARD_SPEED( (uParam0^), uParam4 );
                return 1;
            }
        }
    }
    return 0;
}

void sub_43113(int iParam0)
{
    int iVar3;

    if (NOT (IS_CHAR_INJURED( l_U808[iParam0] )))
    {
        if (IS_VEH_DRIVEABLE( l_U805[iParam0] ))
        {
            if (NOT (IS_CHAR_IN_CAR( l_U808[iParam0], l_U805[iParam0] )))
            {
                GET_DRIVER_OF_CAR( l_U805[iParam0], ref iVar3 );
                if (iVar3 == nil)
                {
                    WARP_CHAR_INTO_CAR( l_U808[iParam0], l_U805[iParam0] );
                    TASK_CAR_MISSION( l_U808[iParam0], l_U805[iParam0], l_U646, 7, 60, 2, 4, 20 );
                    if (iParam0 == 0)
                    {
                        l_U592[0] = 0;
                    }
                    else
                    {
                        l_U592[1] = 0;
                    }
                }
                else
                {
                    DELETE_CHAR( ref iVar3 );
                    WARP_CHAR_INTO_CAR( l_U808[iParam0], l_U805[iParam0] );
                    TASK_CAR_MISSION( l_U808[iParam0], l_U805[iParam0], l_U646, 7, 60, 2, 4, 20 );
                    if (iParam0 == 0)
                    {
                        l_U592[0] = 0;
                    }
                    else
                    {
                        l_U592[1] = 0;
                    }
                }
            }
        }
    }
    return;
}

void sub_44010()
{
    if (((NOT (IS_CHAR_INJURED( sub_3362() ))) AND (NOT (IS_CHAR_INJURED( l_U623 )))) AND (IS_VEH_DRIVEABLE( l_U646 )))
    {
        switch (l_U597)
        {
            case 0:
            if ((((NOT sub_35902()) AND (IS_CHAR_IN_CAR( sub_3362(), l_U646 ))) AND (IS_CHAR_IN_CAR( l_U623, l_U646 ))) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
            {
                if (g_U64940)
                {
                    sub_10272( "PM1_B2V2", ref l_U868, 7, 1 );
                }
                else
                {
                    sub_10272( "PM1_B2AV1", ref l_U868, 7, 1 );
                }
                l_U597 = 1;
            }
            break;
            case 1:
            if (sub_44259( ref l_U868 ))
            {
                l_U597 = 2;
            }
            if (NOT (IS_CHAR_IN_CAR( sub_3362(), l_U646 )))
            {
                if (sub_4020( l_U868 ))
                {
                    sub_11654( ref l_U868 );
                }
            }
            else if (((sub_44380( l_U868 )) AND (NOT IS_MESSAGE_BEING_DISPLAYED())) AND (IS_CHAR_IN_CAR( l_U623, l_U646 )))
            {
                if (g_U64940)
                {
                    sub_12162( "PM1_B2V2", ref l_U868, 8, 1 );
                }
                else
                {
                    sub_12162( "PM1_B2AV1", ref l_U868, 8, 1 );
                }
            }
            break;
            case 2:
            if ((((NOT sub_35902()) AND (IS_CHAR_IN_CAR( sub_3362(), l_U646 ))) AND (IS_CHAR_IN_CAR( l_U623, l_U646 ))) AND (NOT IS_MESSAGE_BEING_DISPLAYED()))
            {
                sub_10272( "PM1_GREN", ref l_U868, 8, 1 );
                l_U597 = 3;
            }
            break;
            case 3:
            if (sub_44259( ref l_U868 ))
            {
                GIVE_DELAYED_WEAPON_TO_CHAR( sub_3362(), 4, 5, 0 );
                l_U597 = 4;
            }
            if (NOT (IS_CHAR_IN_CAR( sub_3362(), l_U646 )))
            {
                if (sub_4020( l_U868 ))
                {
                    sub_11654( ref l_U868 );
                }
            }
            else if (((sub_44380( l_U868 )) AND (NOT IS_MESSAGE_BEING_DISPLAYED())) AND (IS_CHAR_IN_CAR( l_U623, l_U646 )))
            {
                sub_12162( "PM1_GREN", ref l_U868, 8, 1 );
            }
            break;
            case 4:
            if (USING_STANDARD_CONTROLS())
            {
                PRINT_HELP( "GRENHLP1" );
            }
            else
            {
                PRINT_HELP( "GRENHLP1B" );
            }
            l_U597 = 5;
            break;
            case 5:
            if (NOT IS_HELP_MESSAGE_BEING_DISPLAYED())
            {
                PRINT_HELP( "GRENHLP2" );
                l_U597 = 7;
            }
            break;
        }
    }
    return;
}

int sub_44259(int iParam0)
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

void sub_44380(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5)
{
    return uParam0._fU12;
}

void sub_45714()
{
    if (((IS_CHAR_INJURED( l_U623 )) AND (NOT l_U731)) AND (NOT l_U732))
    {
        l_U589 = 0;
        l_U731 = 1;
    }
    return;
}

void sub_45784()
{
    int I;
    boolean bVar3;
    unknown uVar4;

    switch (l_U590)
    {
        case 0:
        sub_13525( ref l_U764 );
        sub_13525( ref l_U785 );
        sub_13525( ref l_U783 );
        sub_13525( ref l_U784 );
        if (sub_4020( l_U820 ))
        {
            sub_4202( ref l_U820, 0 );
        }
        switch (l_U589)
        {
            case 0:
            CLEAR_PRINTS();
            sub_45941( 13, l_U623, 13 );
            PRINT( "BUD_DEAD", 7500, 3 );
            l_U590 = 3;
            break;
            case 1:
            CLEAR_PRINTS();
            PRINT( "TRUCK_DEAD", 7500, 3 );
            l_U590 = 1;
            break;
            default:
            l_U590 = 3;
            break;
        }
        l_U586 = 22;
        break;
        case 1:
        if ((NOT IS_MESSAGE_BEING_DISPLAYED()) AND (sub_13174( 1, 1 )))
        {
            sub_46109();
            l_U590 = 2;
        }
        if (IS_CHAR_INJURED( l_U623 ))
        {
            l_U590 = 3;
        }
        break;
        case 2:
        switch (l_U591)
        {
            case 0:
            REQUEST_MODEL( 1349725314 );
            while (NOT (HAS_MODEL_LOADED( 1349725314 )))
            {
                WAIT( 0 );
            }
            sub_13810( 1000 );
            SET_PLAYER_CONTROL( sub_8832(), 0 );
            if ((NOT (IS_CHAR_INJURED( l_U623 ))) AND (NOT (IS_CHAR_INJURED( sub_3362() ))))
            {
                for ( I = 0; I <= 1; I++ )
                {
                    if (DOES_CHAR_EXIST( l_U808[I] ))
                    {
                        DELETE_CHAR( ref l_U808[I] );
                        DELETE_CHAR( ref l_U811[I] );
                    }
                }
                if (sub_4020( l_U820 ))
                {
                    sub_4202( ref l_U820, 0 );
                }
                LOAD_SCENE( 1411.74900000, 609.69400000, 32.10040000 );
                CLEAR_AREA( 1411.74900000, 609.69400000, 32.10040000, 40.00000000, 1 );
                if (NOT (IS_CHAR_INJURED( l_U623 )))
                {
                    SET_CHAR_DECISION_MAKER( l_U623, l_U606 );
                    CLEAR_CHAR_TASKS_IMMEDIATELY( l_U623 );
                    if (NOT (IS_CHAR_IN_ANY_CAR( l_U623 )))
                    {
                        SET_CHAR_COORDINATES( l_U623, 1415.79000000, 606.56140000, 31.25730000 );
                    }
                    else
                    {
                        WARP_CHAR_FROM_CAR_TO_COORD( l_U623, 1415.79000000, 606.56140000, 31.25730000 );
                    }
                }
                if (NOT (IS_CHAR_INJURED( sub_3362() )))
                {
                    if (NOT (IS_CHAR_IN_ANY_CAR( sub_3362() )))
                    {
                        SET_CHAR_COORDINATES( sub_3362(), 1416.37200000, 610.60140000, 31.65590000 );
                    }
                    else
                    {
                        WARP_CHAR_FROM_CAR_TO_COORD( sub_3362(), 1416.37200000, 610.60140000, 31.65590000 );
                    }
                    BLOCK_CHAR_VISEME_ANIMS( sub_3362(), 1 );
                    BLOCK_CHAR_AMBIENT_ANIMS( sub_3362(), 1 );
                }
                CLEAR_AREA( 1411.74900000, 609.69400000, 32.10040000, 40.00000000, 1 );
                SWITCH_ROADS_OFF( 1414.40400000, 598.30740000, 29.54837000, 1401.28800000, 639.85240000, 36.06623000 );
                sub_14170( ref l_U598, 0 );
                CREATE_CAM( 14, ref l_U719 );
                SET_CAM_POS( l_U719, 1411.18800000, 610.02980000, 32.59519000 );
                SET_CAM_ROT( l_U719, -18.93185000, -2.60163600, -131.37570000 );
                SET_CAM_FOV( l_U719, 53.39998000 );
                SET_CAM_ACTIVE( l_U719, 1 );
                SET_CAM_PROPAGATE( l_U719, 1 );
                CLEAR_PRINTS();
                CLEAR_HELP();
                CLEAR_AREA( 1411.74900000, 609.69400000, 32.10040000, 20.00000000, 1 );
                CREATE_CAR( 1349725314, 1411.74900000, 609.69400000, 32.10040000, ref l_U648, 1 );
                bVar3 = false;
                while (NOT bVar3)
                {
                    if (IS_VEH_DRIVEABLE( l_U648 ))
                    {
                        if (NOT (IS_CAR_WAITING_FOR_WORLD_COLLISION( l_U648 )))
                        {
                            bVar3 = true;
                        }
                    }
                    else if (NOT (IS_CHAR_INJURED( l_U623 )))
                    {
                        DELETE_CHAR( ref l_U623 );
                    }
                    l_U590 = 3;
                    sub_8916( 1000 );
                    break;;
                    WAIT( 0 );
                }
                if (IS_VEH_DRIVEABLE( l_U648 ))
                {
                    SET_CAR_HEADING( l_U648, 0.00000000 );
                    SET_CAR_ON_GROUND_PROPERLY( l_U648 );
                }
                if ((NOT (IS_CHAR_INJURED( sub_3362() ))) AND (IS_VEH_DRIVEABLE( l_U648 )))
                {
                    if (NOT (IS_CHAR_IN_ANY_CAR( sub_3362() )))
                    {
                        WARP_CHAR_INTO_CAR( sub_3362(), l_U648 );
                    }
                    else
                    {
                        WARP_CHAR_FROM_CAR_TO_CAR( sub_3362(), l_U648, -1 );
                    }
                    TASK_PLAY_ANIM_WITH_FLAGS( sub_3362(), "niko_incar_partial", "misspackie2", 1000.00000000, -2, 144 );
                }
                if ((NOT (IS_CHAR_INJURED( l_U623 ))) AND (IS_VEH_DRIVEABLE( l_U648 )))
                {
                    if (NOT (IS_CHAR_IN_ANY_CAR( l_U623 )))
                    {
                        WARP_CHAR_INTO_CAR_AS_PASSENGER( l_U623, l_U648, 0 );
                    }
                    else
                    {
                        WARP_CHAR_FROM_CAR_TO_CAR( l_U623, l_U648, 0 );
                    }
                }
                WAIT( 2000 );
                SETTIMERA( 0 );
                sub_8916( 1000 );
                sub_10272( "PM1_DROPPK", ref l_U820, 8, 1 );
                l_U591 = 1;
                GET_GAME_TIMER( ref l_U722 );
                l_U722 += 4000;
            }
            else
            {
                l_U590 = 3;
                sub_8916( 1000 );
                SET_PLAYER_CONTROL( sub_8832(), 1 );
            }
            break;
            case 1:
            GET_GAME_TIMER( ref l_U723 );
            if (l_U723 > l_U722)
            {
                sub_14947( ref l_U719, ref l_U720, ref l_U721 );
                CREATE_CAM( 14, ref l_U719 );
                SET_CAM_POS( l_U719, 1413.84200000, 610.67290000, 32.49425000 );
                SET_CAM_ROT( l_U719, -5.96958100, -2.73530700, 132.15180000 );
                SET_CAM_FOV( l_U719, 53.39998000 );
                SET_CAM_ACTIVE( l_U719, 1 );
                SET_CAM_PROPAGATE( l_U719, 1 );
                if (NOT (IS_CHAR_INJURED( l_U623 )))
                {
                    OPEN_SEQUENCE_TASK( ref uVar4 );
                    TASK_LEAVE_ANY_CAR( 0 );
                    TASK_FOLLOW_NAV_MESH_TO_COORD( 0, 1414.03700000, 615.32180000, 33.17240000, 2, -2, 0.50000000 );
                    CLOSE_SEQUENCE_TASK( uVar4 );
                    TASK_PERFORM_SEQUENCE( l_U623, uVar4 );
                    CLEAR_SEQUENCE_TASK( uVar4 );
                }
                l_U722 += 2500;
                l_U591 = 2;
            }
            break;
            case 2:
            GET_GAME_TIMER( ref l_U723 );
            if (l_U723 > l_U722)
            {
                INCREMENT_INT_STAT_NO_MESSAGE( 373, 1 );
                l_U591 = 3;
            }
            break;
            case 3:
            sub_13810( 1000 );
            SWITCH_ROADS_BACK_TO_ORIGINAL( 1414.40400000, 598.30740000, 29.54837000, 1401.28800000, 639.85240000, 36.06623000 );
            sub_2659( 13 );
            if (NOT (IS_CHAR_INJURED( l_U623 )))
            {
                DELETE_CHAR( ref l_U623 );
            }
            if (NOT (IS_CHAR_INJURED( sub_3362() )))
            {
                CLEAR_CHAR_TASKS( sub_3362() );
                BLOCK_CHAR_VISEME_ANIMS( sub_3362(), 0 );
                BLOCK_CHAR_AMBIENT_ANIMS( sub_3362(), 0 );
            }
            MARK_MODEL_AS_NO_LONGER_NEEDED( 1349725314 );
            if (IS_VEH_DRIVEABLE( l_U648 ))
            {
                MARK_CAR_AS_NO_LONGER_NEEDED( ref l_U648 );
            }
            ACTIVATE_SCRIPTED_CAMS( 0, 0 );
            if (DOES_CAM_EXIST( l_U719 ))
            {
                SET_CAM_PROPAGATE( l_U719, 0 );
                SET_CAM_ACTIVE( l_U719, 0 );
                DESTROY_CAM( l_U719 );
            }
            sub_15112( ref l_U598, 0, 0, 1 );
            CLEAR_PRINTS();
            sub_8916( 1000 );
            SET_PLAYER_CONTROL( sub_8832(), 1 );
            l_U590 = 3;
            break;
        }
        if (((sub_15618()) AND (NOT (l_U591 == 0))) AND (TIMERA() > 3000))
        {
            sub_4007( ref l_U820 );
            l_U591 = 3;
        }
        break;
        case 3:
        if (g_U9930 > 1)
        {
            SET_PLAYER_MOOD_PISSED_OFF( sub_8832(), 150 );
            if (NOT (IS_CHAR_INJURED( sub_3362() )))
            {
                SAY_AMBIENT_SPEECH( sub_3362(), "MISSION_FAIL_RAGE", 0, 0, 0 );
            }
        }
        SET_PLAYER_CONTROL( sub_8832(), 1 );
        sub_48259();
        sub_2505();
        break;
    }
    return;
}

void sub_45941(unknown uParam0, unknown uParam1, unknown uParam2)
{
    g_U64542._fU0 = uParam0;
    g_U64542._fU4 = uParam1;
    g_U64542._fU8 = uParam2;
    return;
}

void sub_46109()
{
    if ((GET_NUMBER_OF_INSTANCES_OF_STREAMED_SCRIPT( "taxi" )) > 0)
    {
        g_U2229 = 1;
    }
    return;
}

void sub_48259()
{
    sub_48268();
    return;
}

void sub_48268()
{
    int iVar2;

    iVar2 = 13;
    sub_48282( iVar2 );
    sub_1594( iVar2 );
    return;
}

void sub_48282(unknown uParam0)
{
    if (g_U10981[uParam0]._fU12)
    {
        return;
    }
    SET_PLAYER_MOOD_PISSED_OFF( sub_8832(), 150 );
    CLEAR_HELP();
    sub_418( uParam0 );
    return;
}

void sub_48400()
{
    int I;

    for ( I = 0; I <= 1; I++ )
    {
        if (DOES_CHAR_EXIST( l_U808[I] ))
        {
            DELETE_CHAR( ref l_U808[I] );
        }
    }
    UNLOCK_MISSION_NEWS_STORY( 25 );
    sub_48477( 25 );
    CLEAR_WANTED_LEVEL( sub_8832() );
    sub_51679();
    TRIGGER_MISSION_COMPLETE_AUDIO( 60 );
    sub_2505();
    return;
}

void sub_48477(int iParam0)
{
    if (iParam0 >= g_U1452)
    {
        SCRIPT_ASSERT( "NEWS STORY ARRAY SIZE NEEDS INCREASING - see simon" );
        return;
    }
    if (sub_48564( iParam0 ))
    {
        sub_49614( iParam0 );
    }
    return;
}

int sub_48564(unknown uParam0)
{
    unknown uVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;

    if ((IS_BIT_SET( g_U1452[uParam0], 20 )) || (IS_BIT_SET( g_U1452[uParam0], 21 )))
    {
        return 0;
    }
    sub_48621( ref uVar3, 1, 0, 0 );
    sub_49233( uVar3, ref g_U1452[uParam0] );
    SET_BITS_IN_RANGE( ref g_U1452[uParam0], 22, 31, g_U1452[0] );
    g_U1452[0]++;
    SET_BIT( ref g_U1452[uParam0], 20 );
    sub_4132( "\n ----------------------------------------------------------------" );
    sub_4771( "\n  Following block of New Stories has been unlocked NEWS_BLOCK_", uParam0 );
    sub_4132( "\n ----------------------------------------------------------------" );
    return 1;
}

void sub_48621(int iParam0, unknown uParam1, unknown uParam2, boolean bParam3)
{
    GET_CURRENT_DATE( (iParam0 + 0) + 0, (iParam0 + 0) + 4 );
    GET_TIME_OF_DAY( (iParam0 + 8) + 0, (iParam0 + 8) + 4 );
    sub_48674( iParam0, uParam1, uParam2 );
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
        sub_48806( iParam0 + 0 );
    }
    return;
}

void sub_48674(int iParam0, int iParam1, int iParam2)
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
        sub_48806( iParam0 + 0 );
    }
    return;
}

void sub_48806(int iParam0)
{
    iParam0->_fU0++;
    if (iParam0->_fU0 > (sub_48837( iParam0->_fU4 )))
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

int sub_48837(unknown uParam0)
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

void sub_49233(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4)
{
    SET_BITS_IN_RANGE( uParam4, 0, 4, uParam0._fU0._fU0 );
    SET_BITS_IN_RANGE( uParam4, 5, 8, uParam0._fU0._fU4 );
    SET_BITS_IN_RANGE( uParam4, 9, 13, uParam0._fU8._fU0 );
    SET_BITS_IN_RANGE( uParam4, 14, 19, uParam0._fU8._fU4 );
    return;
}

void sub_49614(unknown uParam0)
{
    int iVar3;
    unknown uVar4;
    unknown uVar5;
    unknown uVar6;
    unknown uVar7;
    unknown uVar8;
    unknown uVar9;
    unknown uVar10;
    unknown uVar11;
    unknown uVar12;
    unknown uVar13;
    unknown uVar14;

    iVar3 = GET_BITS_IN_RANGE( g_U953, 12, 14 );
    array(ref uVar4._fU0._fU0, 3);
    ref uVar4._fU0;
    ref uVar4;
    switch (uParam0)
    {
        case 14:
        SET_BITS_IN_RANGE( ref g_U953, 0, 2, iVar3 );
        iVar3++;
        break;
        case 20:
        SET_BITS_IN_RANGE( ref g_U953, 3, 5, iVar3 );
        iVar3++;
        break;
        case 24:
        SET_BITS_IN_RANGE( ref g_U953, 6, 8, iVar3 );
        iVar3++;
        break;
        case 29:
        g_U963 = 1;
        sub_49825( 20, 6, 16383, 16383, ref uVar4 );
        sub_50501( ref uVar4, 7 );
        sub_50532( ref uVar4, 0 );
        break;
        case 36:
        g_U963 = 2;
        break;
        case 39:
        SET_BITS_IN_RANGE( ref g_U953, 9, 11, iVar3 );
        iVar3++;
        break;
        case 40:
        g_U963 = 3;
        sub_49825( 20, 7, 9, 16383, ref uVar4 );
        sub_50501( ref uVar4, 7 );
        sub_50532( ref uVar4, 0 );
        break;
        case 45:
        case 46:
        g_U963 = 4;
        break;
    }
    SET_BITS_IN_RANGE( ref g_U953, 12, 14, iVar3 );
    return;
}

void sub_49825(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, int iParam4)
{
    unknown uVar7;

    iParam4->_fU40 = -1;
    sub_49849( uParam0, 0, iParam4 + 0 );
    sub_49849( uParam1, 1, iParam4 + 0 );
    sub_49849( uParam2, 2, iParam4 + 0 );
    sub_49849( uParam3, 3, iParam4 + 0 );
    sub_49849( 0, 4, iParam4 + 0 );
    sub_49849( 1, 5, iParam4 + 0 );
    sub_49849( 65535, 6, iParam4 + 0 );
    sub_49849( 0, 12, iParam4 + 0 );
    sub_49849( 0, 11, iParam4 + 0 );
    sub_49849( 0, 14, iParam4 + 0 );
    sub_49849( 0, 13, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_49849( uVar7, 8, iParam4 + 0 );
    GENERATE_RANDOM_INT_IN_RANGE( 0, 8, ref uVar7 );
    sub_49849( uVar7, 9, iParam4 + 0 );
    ref iParam4->_fU0->_fU20 = 0;
    ref iParam4->_fU0->_fU24 = 0;
    ref iParam4->_fU0->_fU28 = 0;
    ref iParam4->_fU0->_fU32 = 0;
    ref iParam4->_fU0->_fU16 = 1;
    ref iParam4->_fU0->_fU36 = 1;
    return;
}

void sub_49849(unknown uParam0, unknown uParam1, int iParam2)
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
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 22, 25, uParam0 );
        break;
        case 5:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[0], 28, 31, uParam0 );
        break;
        case 6:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 0, 15, uParam0 );
        break;
        case 8:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 16, 18, uParam0 );
        break;
        case 9:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 19, 21, uParam0 );
        break;
        case 11:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 27, 31, uParam0 );
        break;
        case 12:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 29, 31, uParam0 );
        break;
        case 13:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[1], 24, 26, uParam0 );
        break;
        case 14:
        SET_BITS_IN_RANGE( ref iParam2->_fU0[2], 26, 28, uParam0 );
        break;
    }
    return;
}

void sub_50501(int iParam0, unknown uParam1)
{
    sub_49849( uParam1, 5, iParam0 + 0 );
    return;
}

int sub_50532(int iParam0, int iParam1)
{
    int I;
    int iVar5;

    if (iParam1 == 0)
    {
        ;
    }
    if (g_U968[39]._fU0[0] != -1)
    {
        if (NOT sub_50572())
        {
            return 0;
        }
    }
    if (iParam0->_fU40 != -1)
    {
        return 0;
    }
    iVar5 = sub_51259( iParam0->_fU0 );
    if (iVar5 != -1)
    {
        sub_51058( iVar5 );
    }
    for ( I = 0; I <= 39; I++ )
    {
        if (g_U968[I]._fU0[0] == -1)
        {
            g_U968[I] = {iParam0->_fU0};
            iParam0->_fU40 = I;
            I = 40;
            INCREMENT_INT_STAT_NO_MESSAGE( 368, 1 );
        }
    }
    g_U967 = 1;
    return 1;
}

int sub_50572()
{
    int I;

    for ( I = 0; I <= 39; I++ )
    {
        if ((sub_50606( 5, g_U968[I] )) == 7)
        {
            sub_51058( I );
            return 1;
        }
    }
    return 0;
}

int sub_50606(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10)
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
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 22, 25 );
        break;
        case 5:
        return GET_BITS_IN_RANGE( uParam1._fU0[0], 28, 31 );
        break;
        case 6:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 0, 15 );
        break;
        case 8:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 16, 18 );
        break;
        case 9:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 19, 21 );
        break;
        case 11:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 27, 31 );
        break;
        case 12:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 29, 31 );
        break;
        case 13:
        return GET_BITS_IN_RANGE( uParam1._fU0[1], 24, 26 );
        break;
        case 14:
        return GET_BITS_IN_RANGE( uParam1._fU0[2], 26, 28 );
        break;
    }
    return -1;
}

void sub_51058(int iParam0)
{
    int I;

    if (iParam0 < 39)
    {
        for ( I = iParam0 + 1; I <= 39; I++ )
        {
            g_U968[I - 1] = {g_U968[I]};
        }
    }
    sub_51131( 39 );
    return;
}

void sub_51131(unknown uParam0)
{
    g_U968[uParam0]._fU0[0] = -1;
    g_U968[uParam0]._fU0[1] = -1;
    g_U968[uParam0]._fU0[2] = -1;
    return;
}

int sub_51259(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9)
{
    int Result;

    for ( Result = 0; Result <= 39; Result++ )
    {
        if (g_U968[Result]._fU0[0] != -1)
        {
            if (sub_51320( uParam0, g_U968[Result] ))
            {
                return Result;
            }
        }
        else
        {
            Result = 40;
        }
    }
    return -1;
}

int sub_51320(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, unknown uParam5, unknown uParam6, unknown uParam7, unknown uParam8, unknown uParam9, unknown uParam10, unknown uParam11, unknown uParam12, unknown uParam13, unknown uParam14, unknown uParam15, unknown uParam16, unknown uParam17, unknown uParam18, unknown uParam19)
{
    if ((uParam0._fU0[0] == uParam10._fU0[0]) AND (uParam0._fU0[1] == uParam10._fU0[1]))
    {
        return 1;
    }
    return 0;
}

void sub_51679()
{
    sub_51688();
    return;
}

void sub_51688()
{
    int iVar2;
    int iVar3;
    int iVar4;

    iVar2 = 1;
    iVar3 = 0;
    iVar4 = 0;
    sub_51706();
    sub_51765( iVar2, iVar3, iVar4 );
    return;
}

void sub_51706()
{
    int I;

    I = 0;
    for ( I = 0; I < 5; I++ )
    {
        l_U475[I] = 4;
    }
    return;
}

void sub_51765(unknown uParam0, unknown uParam1, unknown uParam2)
{
    int iVar5;

    iVar5 = 13;
    sub_51797( iVar5, uParam0, uParam1, uParam2, "Friend_15" );
    return;
}

void sub_51797(int iParam0, boolean bParam1, boolean bParam2, boolean bParam3, unknown uParam4)
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
            sub_51893( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU80._fU4 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: friend missionID", 64);
            sub_51893( ref cVar9 );
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
            sub_51893( ref cVar9 );
            return;
        }
        if (g_U13391[iParam0]._fU160._fU76 == -1)
        {
            StrCopy( ref cVar9, uParam4, 64 );
            ConcatString(ref cVar9, " Pass_Stats: proc missionID", 64);
            sub_51893( ref cVar9 );
            return;
        }
        iVar7 = g_U13391[iParam0]._fU160._fU76;
    }
    else if (g_U13391[iParam0]._fU0._fU0 == 0)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: mission", 64);
        sub_51893( ref cVar9 );
        return;
    }
    if (g_U13391[iParam0]._fU0._fU4 == -1)
    {
        StrCopy( ref cVar9, uParam4, 64 );
        ConcatString(ref cVar9, " Pass_Stats: missionID", 64);
        sub_51893( ref cVar9 );
        return;
    }
    iVar7 = g_U13391[iParam0]._fU0._fU4;
    iVar8 = sub_52470( iParam0, iVar7 );;;
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
                sub_52867( 0, 3 );
            }
            if (iParam0 == 8)
            {
                sub_52867( 0, 4 );
            }
        }
    }
    if (NOT (sub_52956( iParam0, iVar7, iVar25, bParam1, bParam2, bParam3 )))
    {
        return;
    }
    if (bParam2)
    {
        g_U13391[iParam0]._fU160._fU84++;
    }
    if ((iParam0 == 0) AND (iVar7 == 12))
    {
        SET_PLAYER_MOOD_PISSED_OFF( sub_8832(), 150 );
    }
    else
    {
        SET_PLAYER_MOOD_NORMAL( sub_8832() );
    }
    sub_1603();
    bVar27 = true;
    uVar28 = sub_52470( iParam0, iVar7 );
    uVar29 = sub_1060( iParam0 );
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
                sub_62332( 9, ref g_U13391[iParam0]._fU0._fU24 );
                if ((NOT bVar27) AND (g_U10978))
                {
                    bVar31 = false;
                }
                if (bVar31)
                {
                    sub_62762();
                    g_U9914._fU8 = 1;
                    g_U9914._fU20 = sub_62847( iParam0, iVar7 );
                }
            }
            if (bVar27)
            {
                sub_62904( iParam0 );
                sub_62943( 0 );
                sub_1501( uVar29, 0 );
            }
            g_U10981[iParam0]._fU12 = 1;
        }
        if (bVar27)
        {
            sub_63051();
        }
    }
    if (bParam2)
    {
        sub_62762();
        sub_63139();
        sub_62943( 0 );
    }
    if (bParam3)
    {
        sub_62762();
        sub_63179();
        sub_62943( 0 );
        sub_1501( uVar29, 0 );
    }
    sub_947();
    return;
}

void sub_51893(unknown uParam0)
{
    PRINTSTRING( "FLOW WARNING: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW WARNING: Press IGNORE button and look at console window for details" );
    return;
}

int sub_52470(int iParam0, int iParam1)
{
    unknown uVar4;
    int iVar5;
    int Result;

    if ((iParam0 < 0) || (iParam0 >= 28))
    {
        sub_1459( "Main_Missions: Find_Trigger(): Illegal Strand ID" );
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

void sub_52867(unknown uParam0, unknown uParam1)
{
    int iVar4;

    iVar4 = 0;
    GET_GAME_TIMER( ref iVar4 );
    g_U15874[uParam0]._fU0 = uParam1;
    g_U15874[uParam0]._fU4 = iVar4 + 7200000;
    return;
}

int sub_52956(unknown uParam0, unknown uParam1, unknown uParam2, boolean bParam3, unknown uParam4, unknown uParam5)
{
    boolean bVar8;
    unknown uVar9;
    int iVar10;

    bVar8 = false;
    switch (uParam0)
    {
        case 0:
        bVar8 = sub_53164( uParam1 );
        break;
        case 1:
        bVar8 = sub_55242( uParam1 );
        break;
        case 2:
        bVar8 = sub_55468( uParam1 );
        break;
        case 3:
        bVar8 = sub_55618( uParam1 );
        break;
        case 4:
        bVar8 = sub_55896( uParam1 );
        break;
        case 5:
        bVar8 = sub_56199( uParam1 );
        break;
        case 6:
        bVar8 = sub_56398( uParam1 );
        break;
        case 7:
        bVar8 = sub_56624( uParam1 );
        break;
        case 8:
        bVar8 = sub_56859( uParam1 );
        break;
        case 9:
        bVar8 = sub_57234( uParam1 );
        break;
        case 10:
        bVar8 = sub_57481( uParam1 );
        break;
        case 11:
        bVar8 = sub_57620( uParam1 );
        break;
        case 12:
        bVar8 = sub_57919( uParam1 );
        break;
        case 13:
        bVar8 = sub_58147( uParam1 );
        break;
        case 14:
        bVar8 = sub_58434( uParam1 );
        break;
        case 15:
        bVar8 = sub_58716( uParam1 );
        break;
        case 16:
        bVar8 = sub_58998( uParam1 );
        break;
        case 17:
        bVar8 = sub_59199( uParam1 );
        break;
        case 18:
        bVar8 = sub_59272( uParam1 );
        break;
        case 19:
        bVar8 = sub_59486( uParam1 );
        break;
        case 20:
        bVar8 = sub_59739( uParam1 );
        break;
        case 21:
        bVar8 = sub_59986( uParam1 );
        break;
        case 22:
        bVar8 = sub_60187( uParam1 );
        break;
        default:
        PRINTSTRING( "Strand ID: " );
        PRINTINT( uParam0 );
        PRINTNL();
        sub_54847( "Flow_Pass_Stats: Flow_Pass_Strand_Mission(): Unknown strand ID." );
    }
    if (NOT bVar8)
    {
        return 0;
    }
    uVar9 = sub_52470( uParam0, uParam1 );
    if (bParam3)
    {
        iVar10 = g_U13391[uParam0]._fU0._fU56;
        if ((NOT (iVar10 == 5)) AND (NOT (iVar10 == 6)))
        {
            sub_60510( uVar9, uParam0 );
        }
    }
    return 1;
}

int sub_53164(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 0;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_53443( iVar3, 25, 5, 2, 0, 0 );
        break;
        case 1:
        sub_53443( iVar3, 30, 5, 2, 0, 0 );
        break;
        case 2:
        sub_53443( iVar3, 0, 5, 0, 0, 0 );
        break;
        case 4:
        sub_53443( iVar3, 50, 5, 2, 0, 0 );
        break;
        case 5:
        sub_53443( iVar3, 100, 5, 2, 0, 0 );
        break;
        case 6:
        sub_53443( iVar3, 150, 5, 2, 0, 0 );
        break;
        case 8:
        sub_53443( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 9:
        sub_53443( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 10:
        sub_53443( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 11:
        sub_53443( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 12:
        sub_53443( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 13:
        sub_53443( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 15:
        sub_53443( iVar3, 250000, 5, 2, 0, 0 );
        break;
        case 16:
        sub_53443( iVar3, 0, 0, 0, 0, 0 );
        break;
        case 20:
        if (g_U15654[12])
        {
            sub_53443( iVar3, 0, 5, 2, 0, 0 );
        }
        else
        {
            sub_53443( iVar3, 250000, 0, 0, 0, 0 );
        }
        break;
        case 7:
        sub_53443( iVar3, 0, 3, 1, 0, 0 );
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
        sub_53443( iVar3, 0, sub_54725(), sub_54991(), 0, 0 );
        break;
        default:
        sub_55150( "Friend 1", 1 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55150( "Friend 1", 0 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_53443(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3, unknown uParam4, int iParam5)
{
    sub_53454( uParam1 );
    sub_53628( uParam0, 0, uParam2 );
    sub_53628( uParam0, 1, uParam3 );
    sub_53628( uParam0, 2, uParam4 );
    ProtectedSet(g_U26747[4], ProtectedGet(g_U26747[4]) + iParam5);
    sub_51706();
    return;
}

void sub_53454(unknown uParam0)
{
    ADD_SCORE( sub_8832(), uParam0 );
    sub_53479( uParam0 );
    return;
}

void sub_53479(int iParam0)
{
    if (g_U0)
    {
        return;
    }
    if (iParam0 < 0)
    {
        sub_1459( "Flow_Achievements_Increase_Cash_From_Missions: negative cash given. Tell Keith." );
    }
    INCREMENT_INT_STAT_NO_MESSAGE( 93, iParam0 );
    return;
}

void sub_53628(unknown uParam0, int iParam1, int iParam2)
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
        sub_53785( uParam0 );
    }
    return;
}

void sub_53785(unknown uParam0)
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

int sub_54725()
{
    switch (l_U475[0])
    {
        case 0: return 14;
        case 1: return 8;
        case 2: return 6;
        case 3: return 1;
        case 4: return 0;
    }
    sub_54847( "Get_TRUST(): Unknown Friend Pass ID" );
    return 0;
}

void sub_54847(unknown uParam0)
{
    PRINTSTRING( "FLOW ERROR: " );
    PRINTSTRING( uParam0 );
    PRINTNL();
    SCRIPT_ASSERT( "FLOW ERROR: Press IGNORE button and look at console window for details" );
    return;
}

int sub_54991()
{
    switch (l_U475[1])
    {
        case 0: return 10;
        case 1: return 6;
        case 2: return 3;
        case 3: return 1;
        case 4: return 0;
    }
    sub_54847( "Get_LIKE(): Unknown Friend Pass ID" );
    return 0;
}

void sub_55150(unknown uParam0, unknown uParam1)
{
    return;
}

int sub_55242(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 1;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_53443( iVar3, 50, 5, 5, 0, 0 );
        break;
        case 1:
        sub_53443( iVar3, 100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_53443( iVar3, 150, 5, 5, 0, 0 );
        break;
        case 3:
        sub_53443( iVar3, 200, 5, 5, 0, 0 );
        break;
        default:
        sub_55150( "Contact 2", 1 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55150( "Contact 2", 0 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_55468(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 2;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_53443( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 0: break;
        default:
        sub_55150( "Girl 3", 1 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55150( "Girl 3", 0 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_55618(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 3;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_53443( iVar3, 200, 5, 2, 0, 0 );
        break;
        case 1:
        sub_53443( iVar3, 250, 5, 2, 0, 0 );
        break;
        case 2:
        sub_53443( iVar3, 250, 3, 1, 0, 0 );
        break;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_53443( iVar3, 0, sub_54725(), sub_54991(), 0, 0 );
        break;
        default:
        sub_55150( "Friend 4", 1 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55150( "Friend 4", 0 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_55896(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 4;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_53443( iVar3, 200, 5, 5, 0, 0 );
        break;
        case 1:
        sub_53443( iVar3, 400, 5, 5, 0, 0 );
        break;
        case 2:
        sub_53443( iVar3, 500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_53443( iVar3, 600, 5, 5, 0, 0 );
        break;
        case 4:
        sub_53443( iVar3, 700, 5, 5, 0, 0 );
        break;
        case 5:
        sub_53443( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 6:
        sub_53443( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_55150( "Contact 5", 1 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55150( "Contact 5", 0 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_56199(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 5;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_53443( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_53443( iVar3, 1100, 5, 5, 0, 0 );
        break;
        case 2:
        sub_53443( iVar3, 1500, 5, 5, 0, 0 );
        break;
        default:
        sub_55150( "Contact 7", 1 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55150( "Contact 7", 0 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_56398(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 6;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_53443( iVar3, 1500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_53443( iVar3, 2000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_53443( iVar3, 2500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_53443( iVar3, 0, 5, 5, 0, 0 );
        break;
        default:
        sub_55150( "Contact 7b", 1 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55150( "Contact 7b", 0 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_56624(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 7;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_53443( iVar3, 6000, 5, 2, 0, 0 );
        break;
        case 1:
        sub_53443( iVar3, 6250, 5, 2, 0, 0 );
        break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        sub_53443( iVar3, 0, sub_54725(), sub_54991(), 0, 0 );
        break;
        default:
        sub_55150( "Friend 8", 1 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55150( "Friend 8", 0 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_56859(unknown uParam0)
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
        sub_53443( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 1:
        sub_53443( iVar3, 3500, 5, 2, 0, 0 );
        break;
        case 4:
        sub_53443( iVar3, 6750, 5, 2, 0, 0 );
        break;
        case 5:
        sub_53443( iVar3, 0, 5, 2, 0, 0 );
        break;
        case 2:
        case 3: break;
        case 6:
        sub_53443( iVar3, iVar5, 3, 1, 0, 0 );
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
        sub_53443( iVar3, 0, sub_54725(), sub_54991(), 0, 0 );
        break;
        default:
        sub_55150( "Friend 9", 1 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55150( "Friend 9", 0 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_57234(unknown uParam0)
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
        sub_53443( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_53443( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 3:
        if (g_U15654[39])
        {
            sub_53443( iVar4, 0, 5, 10, 0, 0 );
        }
        else
        {
            sub_53443( iVar3, 0, 5, 5, 0, 0 );
        }
        break;
        case 2: break;
        default:
        sub_55150( "Contact 10", 1 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_55150( "Contact 10", 0 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_57481(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 10;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_53443( iVar3, 0, 1, 1, 0, 0 );
        break;
        default:
        sub_55150( "Girl 11", 1 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55150( "Girl 11", 0 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_57620(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 11;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_53443( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_53443( iVar3, 1000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_53443( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_53443( iVar3, 5000, 5, 5, 0, 0 );
        break;
        case 6:
        sub_53443( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 7:
        sub_53443( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 1:
        case 2: break;
        default:
        sub_55150( "Contact 12", 1 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55150( "Contact 12", 0 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_57919(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 12;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_53443( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_53443( iVar3, 6750, 5, 5, 0, 0 );
        break;
        case 2:
        sub_53443( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 3:
        sub_53443( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_55150( "Contact 13", 1 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55150( "Contact 13", 0 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_58147(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 13;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_53443( iVar3, 7500, 5, 2, 0, 5 );
        break;
        case 1:
        sub_53443( iVar3, 8000, 5, 2, 0, 5 );
        break;
        case 3:
        sub_53443( iVar3, 250000, 5, 2, 0, 5 );
        break;
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        sub_53443( iVar3, 0, sub_54725(), sub_54991(), 0, 0 );
        break;
        case 2: break;
        default:
        sub_55150( "Friend 15", 1 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55150( "Friend 15", 0 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_58434(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 14;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_53443( iVar3, 8500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_53443( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_53443( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_53443( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 4:
        sub_53443( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 5:
        sub_53443( iVar3, 11000, 5, 5, 0, 0 );
        break;
        default:
        sub_55150( "Contact 16", 1 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55150( "Contact 16", 0 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_58716(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 15;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_53443( iVar3, 9000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_53443( iVar3, 9250, 5, 5, 0, 0 );
        break;
        case 4:
        sub_53443( iVar3, 9500, 5, 5, 0, 0 );
        break;
        case 6:
        sub_53443( iVar3, 9750, 5, 5, 0, 0 );
        break;
        case 7:
        sub_53443( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 2:
        case 3:
        case 5: break;
        default:
        sub_55150( "Contact 18", 1 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55150( "Contact 18", 0 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_58998(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 16;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_53443( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 1:
        sub_53443( iVar3, 7000, 5, 5, 0, 0 );
        break;
        case 2:
        sub_53443( iVar3, 7500, 5, 5, 0, 0 );
        break;
        default:
        sub_55150( "Contact 19", 1 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55150( "Contact 19", 0 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_59199(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 17;
    bVar4 = false;
    if (bVar4)
    {
        sub_55150( "Girl 20", 0 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_59272(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 18;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_53443( iVar3, 6000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_53443( iVar3, 6250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_53443( iVar3, 6500, 5, 5, 0, 0 );
        break;
        case 3: break;
        default:
        sub_55150( "Contact 21", 1 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55150( "Contact 21", 0 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_59486(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 19;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_53443( iVar3, 7500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_53443( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 3:
        sub_53443( iVar3, 11000, 5, 5, 0, 0 );
        break;
        case 4:
        sub_53443( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_53443( iVar3, 0, 3, 3, 0, 0 );
        break;
        default:
        sub_55150( "Contact 22", 1 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55150( "Contact 22", 0 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_59739(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 20;
    bVar4 = false;
    switch (uParam0)
    {
        case 1:
        sub_53443( iVar3, 10500, 5, 5, 0, 0 );
        break;
        case 2:
        sub_53443( iVar3, 0, 5, 5, 0, 0 );
        break;
        case 3:
        sub_53443( iVar3, 13000, 5, 5, 0, 0 );
        break;
        case 5:
        sub_53443( iVar3, 14500, 5, 5, 0, 0 );
        break;
        case 4:
        case 0: break;
        default:
        sub_55150( "Contact 24", 1 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55150( "Contact 24", 0 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_59986(unknown uParam0)
{
    int iVar3;
    boolean bVar4;

    iVar3 = 21;
    bVar4 = false;
    switch (uParam0)
    {
        case 0:
        sub_53443( iVar3, 12000, 5, 5, 0, 0 );
        break;
        case 1:
        sub_53443( iVar3, 13250, 5, 5, 0, 0 );
        break;
        case 2:
        sub_53443( iVar3, 14500, 5, 5, 0, 0 );
        break;
        default:
        sub_55150( "Contact 25", 1 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar4)
    {
        sub_55150( "Contact 25", 0 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

int sub_60187(unknown uParam0)
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
        sub_53443( iVar4, 0, 3, 1, 0, 0 );
        break;
        default:
        sub_55150( "Girl 26", 1 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    if (bVar5)
    {
        sub_55150( "Girl 26", 0 );
        sub_53443( iVar3, 10, 0, 0, 0, 0 );
        return 0;
    }
    return 1;
}

void sub_60510(int iParam0, int iParam1)
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
    if (sub_60558( iParam0, iParam1 ))
    {
        INCREMENT_INT_STAT_NO_MESSAGE( 253, 1 );
        sub_61289( iParam1 );
    }
    return;
}

int sub_60558(int iParam0, int iParam1)
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
            sub_60698( 0, iVar6 );
            g_U13334[iParam1]._fU4 += iVar6;
        }
        SET_BIT( ref g_U26758[iParam0]._fU108, 3 );
        return 1;
    }
    return 0;
}

void sub_60698(unknown uParam0, int iParam1)
{
    g_U32871[uParam0]._fU4 += iParam1;
    if (g_U32871[uParam0]._fU4 > g_U32871[uParam0]._fU0)
    {
        SCRIPT_ASSERT( "Flow_Achievements_Game_Progress_Made: Current Category is over target value" );
        g_U32871[uParam0]._fU4 = g_U32871[uParam0]._fU0;
    }
    sub_60880( 0 );
    return;
}

void sub_60880(boolean bParam0)
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
        sub_61135();
    }
    if (((bVar7) AND (NOT bParam0)) AND (NOT (# -NULL-0xc27c84())))
    {
        PRINT_HELP( "GAME100" );
    }
    return;
}

void sub_61135()
{
    ENABLE_MAX_AMMO_CAP( 0 );
    return;
}

void sub_61289(int iParam0)
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
        sub_61622( 3 );
        SET_FLOAT_STAT( 3, fVar3 );
        break;
        case 1:
        sub_61622( 4 );
        SET_FLOAT_STAT( 4, fVar3 );
        break;
        case 3:
        sub_61622( 7 );
        SET_FLOAT_STAT( 7, fVar3 );
        break;
        case 4:
        sub_61622( 8 );
        SET_FLOAT_STAT( 8, fVar3 );
        break;
        case 5:
        sub_61622( 9 );
        SET_FLOAT_STAT( 9, fVar3 );
        break;
        case 6:
        sub_61622( 10 );
        SET_FLOAT_STAT( 10, fVar3 );
        break;
        case 7:
        sub_61622( 13 );
        SET_FLOAT_STAT( 13, fVar3 );
        break;
        case 8:
        sub_61622( 16 );
        SET_FLOAT_STAT( 16, fVar3 );
        break;
        case 9:
        sub_61622( 17 );
        SET_FLOAT_STAT( 17, fVar3 );
        break;
        case 11:
        sub_61622( 18 );
        SET_FLOAT_STAT( 18, fVar3 );
        break;
        case 12:
        sub_61622( 19 );
        SET_FLOAT_STAT( 19, fVar3 );
        break;
        case 13:
        sub_61622( 22 );
        SET_FLOAT_STAT( 22, fVar3 );
        break;
        case 14:
        sub_61622( 23 );
        SET_FLOAT_STAT( 23, fVar3 );
        break;
        case 15:
        sub_61622( 24 );
        SET_FLOAT_STAT( 24, fVar3 );
        break;
        case 16:
        sub_61622( 25 );
        SET_FLOAT_STAT( 25, fVar3 );
        break;
        case 18:
        sub_61622( 26 );
        SET_FLOAT_STAT( 26, fVar3 );
        break;
        case 19:
        sub_61622( 27 );
        SET_FLOAT_STAT( 27, fVar3 );
        break;
        case 20:
        sub_61622( 29 );
        SET_FLOAT_STAT( 29, fVar3 );
        break;
        case 21:
        sub_61622( 28 );
        SET_FLOAT_STAT( 28, fVar3 );
        break;
        default: return;
    }
    return;
}

void sub_61622(unknown uParam0)
{
    if ((GET_STAT_FRONTEND_VISIBILITY( uParam0 )) == 0)
    {
        SET_STAT_FRONTEND_VISIBILITY( uParam0, 1 );
    }
    return;
}

void sub_62332(unknown uParam0, unknown uParam1)
{
    sub_62351( uParam0, 0, 0.00000000, uParam1 );
    return;
}

void sub_62351(unknown uParam0, unknown uParam1, unknown uParam2, unknown uParam3)
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

void sub_62762()
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

int sub_62847(int iParam0, int iParam1)
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

void sub_62904(unknown uParam0)
{
    sub_846();
    g_U10981[uParam0]._fU116 = 0;
    return;
}

void sub_62943(unknown uParam0)
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

void sub_63051()
{
    sub_63060();
    return;
}

void sub_63060()
{
    if (COMPARE_STRING( ref g_U9926, "" ))
    {
        return;
    }
    PLAYSTATS_MISSION_PASSED( ref g_U9926 );
    StrCopy( ref g_U9926, "", 16 );
    return;
}

void sub_63139()
{
    sub_63060();
    return;
}

void sub_63179()
{
    sub_63060();
    StrCopy( ref g_U9926, "FPASS", 16 );
    return;
}

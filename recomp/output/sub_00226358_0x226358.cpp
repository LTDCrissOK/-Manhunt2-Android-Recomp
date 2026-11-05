#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00226358
// Address: 0x226358 - 0x2265b8
void sub_00226358_0x226358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226358_0x226358");
#endif

    switch (ctx->pc) {
        case 0x226358u: goto label_226358;
        case 0x22635cu: goto label_22635c;
        case 0x226360u: goto label_226360;
        case 0x226364u: goto label_226364;
        case 0x226368u: goto label_226368;
        case 0x22636cu: goto label_22636c;
        case 0x226370u: goto label_226370;
        case 0x226374u: goto label_226374;
        case 0x226378u: goto label_226378;
        case 0x22637cu: goto label_22637c;
        case 0x226380u: goto label_226380;
        case 0x226384u: goto label_226384;
        case 0x226388u: goto label_226388;
        case 0x22638cu: goto label_22638c;
        case 0x226390u: goto label_226390;
        case 0x226394u: goto label_226394;
        case 0x226398u: goto label_226398;
        case 0x22639cu: goto label_22639c;
        case 0x2263a0u: goto label_2263a0;
        case 0x2263a4u: goto label_2263a4;
        case 0x2263a8u: goto label_2263a8;
        case 0x2263acu: goto label_2263ac;
        case 0x2263b0u: goto label_2263b0;
        case 0x2263b4u: goto label_2263b4;
        case 0x2263b8u: goto label_2263b8;
        case 0x2263bcu: goto label_2263bc;
        case 0x2263c0u: goto label_2263c0;
        case 0x2263c4u: goto label_2263c4;
        case 0x2263c8u: goto label_2263c8;
        case 0x2263ccu: goto label_2263cc;
        case 0x2263d0u: goto label_2263d0;
        case 0x2263d4u: goto label_2263d4;
        case 0x2263d8u: goto label_2263d8;
        case 0x2263dcu: goto label_2263dc;
        case 0x2263e0u: goto label_2263e0;
        case 0x2263e4u: goto label_2263e4;
        case 0x2263e8u: goto label_2263e8;
        case 0x2263ecu: goto label_2263ec;
        case 0x2263f0u: goto label_2263f0;
        case 0x2263f4u: goto label_2263f4;
        case 0x2263f8u: goto label_2263f8;
        case 0x2263fcu: goto label_2263fc;
        case 0x226400u: goto label_226400;
        case 0x226404u: goto label_226404;
        case 0x226408u: goto label_226408;
        case 0x22640cu: goto label_22640c;
        case 0x226410u: goto label_226410;
        case 0x226414u: goto label_226414;
        case 0x226418u: goto label_226418;
        case 0x22641cu: goto label_22641c;
        case 0x226420u: goto label_226420;
        case 0x226424u: goto label_226424;
        case 0x226428u: goto label_226428;
        case 0x22642cu: goto label_22642c;
        case 0x226430u: goto label_226430;
        case 0x226434u: goto label_226434;
        case 0x226438u: goto label_226438;
        case 0x22643cu: goto label_22643c;
        case 0x226440u: goto label_226440;
        case 0x226444u: goto label_226444;
        case 0x226448u: goto label_226448;
        case 0x22644cu: goto label_22644c;
        case 0x226450u: goto label_226450;
        case 0x226454u: goto label_226454;
        case 0x226458u: goto label_226458;
        case 0x22645cu: goto label_22645c;
        case 0x226460u: goto label_226460;
        case 0x226464u: goto label_226464;
        case 0x226468u: goto label_226468;
        case 0x22646cu: goto label_22646c;
        case 0x226470u: goto label_226470;
        case 0x226474u: goto label_226474;
        case 0x226478u: goto label_226478;
        case 0x22647cu: goto label_22647c;
        case 0x226480u: goto label_226480;
        case 0x226484u: goto label_226484;
        case 0x226488u: goto label_226488;
        case 0x22648cu: goto label_22648c;
        case 0x226490u: goto label_226490;
        case 0x226494u: goto label_226494;
        case 0x226498u: goto label_226498;
        case 0x22649cu: goto label_22649c;
        case 0x2264a0u: goto label_2264a0;
        case 0x2264a4u: goto label_2264a4;
        case 0x2264a8u: goto label_2264a8;
        case 0x2264acu: goto label_2264ac;
        case 0x2264b0u: goto label_2264b0;
        case 0x2264b4u: goto label_2264b4;
        case 0x2264b8u: goto label_2264b8;
        case 0x2264bcu: goto label_2264bc;
        case 0x2264c0u: goto label_2264c0;
        case 0x2264c4u: goto label_2264c4;
        case 0x2264c8u: goto label_2264c8;
        case 0x2264ccu: goto label_2264cc;
        case 0x2264d0u: goto label_2264d0;
        case 0x2264d4u: goto label_2264d4;
        case 0x2264d8u: goto label_2264d8;
        case 0x2264dcu: goto label_2264dc;
        case 0x2264e0u: goto label_2264e0;
        case 0x2264e4u: goto label_2264e4;
        case 0x2264e8u: goto label_2264e8;
        case 0x2264ecu: goto label_2264ec;
        case 0x2264f0u: goto label_2264f0;
        case 0x2264f4u: goto label_2264f4;
        case 0x2264f8u: goto label_2264f8;
        case 0x2264fcu: goto label_2264fc;
        case 0x226500u: goto label_226500;
        case 0x226504u: goto label_226504;
        case 0x226508u: goto label_226508;
        case 0x22650cu: goto label_22650c;
        case 0x226510u: goto label_226510;
        case 0x226514u: goto label_226514;
        case 0x226518u: goto label_226518;
        case 0x22651cu: goto label_22651c;
        case 0x226520u: goto label_226520;
        case 0x226524u: goto label_226524;
        case 0x226528u: goto label_226528;
        case 0x22652cu: goto label_22652c;
        case 0x226530u: goto label_226530;
        case 0x226534u: goto label_226534;
        case 0x226538u: goto label_226538;
        case 0x22653cu: goto label_22653c;
        case 0x226540u: goto label_226540;
        case 0x226544u: goto label_226544;
        case 0x226548u: goto label_226548;
        case 0x22654cu: goto label_22654c;
        case 0x226550u: goto label_226550;
        case 0x226554u: goto label_226554;
        case 0x226558u: goto label_226558;
        case 0x22655cu: goto label_22655c;
        case 0x226560u: goto label_226560;
        case 0x226564u: goto label_226564;
        case 0x226568u: goto label_226568;
        case 0x22656cu: goto label_22656c;
        case 0x226570u: goto label_226570;
        case 0x226574u: goto label_226574;
        case 0x226578u: goto label_226578;
        case 0x22657cu: goto label_22657c;
        case 0x226580u: goto label_226580;
        case 0x226584u: goto label_226584;
        case 0x226588u: goto label_226588;
        case 0x22658cu: goto label_22658c;
        case 0x226590u: goto label_226590;
        case 0x226594u: goto label_226594;
        case 0x226598u: goto label_226598;
        case 0x22659cu: goto label_22659c;
        case 0x2265a0u: goto label_2265a0;
        case 0x2265a4u: goto label_2265a4;
        case 0x2265a8u: goto label_2265a8;
        case 0x2265acu: goto label_2265ac;
        case 0x2265b0u: goto label_2265b0;
        case 0x2265b4u: goto label_2265b4;
        default: break;
    }

    ctx->pc = 0x226358u;

label_226358:
    // 0x226358: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x226358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_22635c:
    // 0x22635c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22635cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_226360:
    // 0x226360: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x226360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_226364:
    // 0x226364: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x226364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_226368:
    // 0x226368: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x226368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_22636c:
    // 0x22636c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x22636cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_226370:
    // 0x226370: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x226370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_226374:
    // 0x226374: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x226374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_226378:
    // 0x226378: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x226378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_22637c:
    // 0x22637c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x22637cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_226380:
    // 0x226380: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x226380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_226384:
    // 0x226384: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x226384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_226388:
    // 0x226388: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x226388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_22638c:
    // 0x22638c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x22638cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_226390:
    // 0x226390: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_226394:
    if (ctx->pc == 0x226394u) {
        ctx->pc = 0x226394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226390u;
        // 0x226394: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226398u;
        goto label_226398;
    }
    ctx->pc = 0x226390u;
    {
        const bool branch_taken_0x226390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226390u;
        // 0x226394: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226390) {
            ctx->pc = 0x2263E4u;
            goto label_2263e4;
        }
    }
    ctx->pc = 0x226398u;
label_226398:
    // 0x226398: 0x8e2400c4  lw          $a0, 0xC4($s1)
    ctx->pc = 0x226398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_22639c:
    // 0x22639c: 0x90820032  lbu         $v0, 0x32($a0)
    ctx->pc = 0x22639cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 50)));
label_2263a0:
    // 0x2263a0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_2263a4:
    if (ctx->pc == 0x2263A4u) {
        ctx->pc = 0x2263A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2263A0u;
        // 0x2263a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2263A8u;
        goto label_2263a8;
    }
    ctx->pc = 0x2263A0u;
    {
        const bool branch_taken_0x2263a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2263A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2263A0u;
        // 0x2263a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2263a0) {
            ctx->pc = 0x2263E0u;
            goto label_2263e0;
        }
    }
    ctx->pc = 0x2263A8u;
label_2263a8:
    // 0x2263a8: 0xc076824  jal         func_1DA090
label_2263ac:
    if (ctx->pc == 0x2263ACu) {
        ctx->pc = 0x2263B0u;
        goto label_2263b0;
    }
    ctx->pc = 0x2263A8u;
    SET_GPR_U32(ctx, 31, 0x2263B0u);
    ctx->pc = 0x1DA090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA090u, 0x2263A8u, 0x2263B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2263B0u;
label_2263b0:
    // 0x2263b0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_2263b4:
    if (ctx->pc == 0x2263B4u) {
        ctx->pc = 0x2263B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2263B0u;
        // 0x2263b4: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2263B8u;
        goto label_2263b8;
    }
    ctx->pc = 0x2263B0u;
    {
        const bool branch_taken_0x2263b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2263B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2263B0u;
        // 0x2263b4: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2263b0) {
            ctx->pc = 0x2263E4u;
            goto label_2263e4;
        }
    }
    ctx->pc = 0x2263B8u;
label_2263b8:
    // 0x2263b8: 0xc0f75b6  jal         func_3DD6D8
label_2263bc:
    if (ctx->pc == 0x2263BCu) {
        ctx->pc = 0x2263BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2263B8u;
        // 0x2263bc: 0x8e2400c4  lw          $a0, 0xC4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2263C0u;
        goto label_2263c0;
    }
    ctx->pc = 0x2263B8u;
    SET_GPR_U32(ctx, 31, 0x2263C0u);
    ctx->pc = 0x2263BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2263B8u;
    // 0x2263bc: 0x8e2400c4  lw          $a0, 0xC4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD6D8u, 0x2263B8u, 0x2263C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2263C0u;
label_2263c0:
    // 0x2263c0: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2263c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2263c4:
    // 0x2263c4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2263c8:
    if (ctx->pc == 0x2263C8u) {
        ctx->pc = 0x2263C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2263C4u;
        // 0x2263c8: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2263CCu;
        goto label_2263cc;
    }
    ctx->pc = 0x2263C4u;
    {
        const bool branch_taken_0x2263c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2263C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2263C4u;
        // 0x2263c8: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2263c4) {
            ctx->pc = 0x2263E4u;
            goto label_2263e4;
        }
    }
    ctx->pc = 0x2263CCu;
label_2263cc:
    // 0x2263cc: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x2263ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_2263d0:
    // 0x2263d0: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x2263d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_2263d4:
    // 0x2263d4: 0x2442ffed  addiu       $v0, $v0, -0x13
    ctx->pc = 0x2263d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967277));
label_2263d8:
    // 0x2263d8: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2263d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_2263dc:
    // 0x2263dc: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x2263dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2263e0:
    // 0x2263e0: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x2263e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2263e4:
    // 0x2263e4: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x2263e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
label_2263e8:
    // 0x2263e8: 0x246203a0  addiu       $v0, $v1, 0x3A0
    ctx->pc = 0x2263e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 928));
label_2263ec:
    // 0x2263ec: 0x7c6003a0  sq          $zero, 0x3A0($v1)
    ctx->pc = 0x2263ecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 928), GPR_VEC(ctx, 0));
label_2263f0:
    // 0x2263f0: 0x7c400010  sq          $zero, 0x10($v0)
    ctx->pc = 0x2263f0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 0));
label_2263f4:
    // 0x2263f4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2263f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_2263f8:
    // 0x2263f8: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x2263f8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2263fc:
    // 0x2263fc: 0xc480404c  lwc1        $f0, 0x404C($a0)
    ctx->pc = 0x2263fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_226400:
    // 0x226400: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x226400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_226404:
    // 0x226404: 0xac430044  sw          $v1, 0x44($v0)
    ctx->pc = 0x226404u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
label_226408:
    // 0x226408: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x226408u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22640c:
    // 0x22640c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x22640cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_226410:
    // 0x226410: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x226410u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_226414:
    // 0x226414: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x226414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
label_226418:
    // 0x226418: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x226418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_22641c:
    // 0x22641c: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x22641cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_226420:
    // 0x226420: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x226420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_226424:
    // 0x226424: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x226424u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_226428:
    // 0x226428: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x226428u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_22642c:
    // 0x22642c: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x22642cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_226430:
    // 0x226430: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x226430u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
label_226434:
    // 0x226434: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x226434u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_226438:
    // 0x226438: 0xc079582  jal         func_1E5608
label_22643c:
    if (ctx->pc == 0x22643Cu) {
        ctx->pc = 0x22643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226438u;
        // 0x22643c: 0xac400050  sw          $zero, 0x50($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226440u;
        goto label_226440;
    }
    ctx->pc = 0x226438u;
    SET_GPR_U32(ctx, 31, 0x226440u);
    ctx->pc = 0x22643Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226438u;
    // 0x22643c: 0xac400050  sw          $zero, 0x50($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5608u, 0x226438u, 0x226440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226440u;
label_226440:
    // 0x226440: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_226444:
    if (ctx->pc == 0x226444u) {
        ctx->pc = 0x226444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226440u;
        // 0x226444: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226448u;
        goto label_226448;
    }
    ctx->pc = 0x226440u;
    {
        const bool branch_taken_0x226440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226440u;
        // 0x226444: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226440) {
            ctx->pc = 0x2264F8u;
            goto label_2264f8;
        }
    }
    ctx->pc = 0x226448u;
label_226448:
    // 0x226448: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x226448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22644c:
    // 0x22644c: 0x8e4291d4  lw          $v0, -0x6E2C($s2)
    ctx->pc = 0x22644cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939092)));
label_226450:
    // 0x226450: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x226450u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_226454:
    // 0x226454: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x226454u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_226458:
    // 0x226458: 0xc083c52  jal         func_20F148
label_22645c:
    if (ctx->pc == 0x22645Cu) {
        ctx->pc = 0x22645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226458u;
        // 0x22645c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226460u;
        goto label_226460;
    }
    ctx->pc = 0x226458u;
    SET_GPR_U32(ctx, 31, 0x226460u);
    ctx->pc = 0x22645Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226458u;
    // 0x22645c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F148u, 0x226458u, 0x226460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226460u;
label_226460:
    // 0x226460: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x226460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_226464:
    // 0x226464: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x226464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
label_226468:
    // 0x226468: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_22646c:
    if (ctx->pc == 0x22646Cu) {
        ctx->pc = 0x22646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226468u;
        // 0x22646c: 0x8e4291d4  lw          $v0, -0x6E2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939092)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226470u;
        goto label_226470;
    }
    ctx->pc = 0x226468u;
    {
        const bool branch_taken_0x226468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22646Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226468u;
        // 0x22646c: 0x8e4291d4  lw          $v0, -0x6E2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226468) {
            ctx->pc = 0x22647Cu;
            goto label_22647c;
        }
    }
    ctx->pc = 0x226470u;
label_226470:
    // 0x226470: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x226470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_226474:
    // 0x226474: 0x1000000a  b           . + 4 + (0xA << 2)
label_226478:
    if (ctx->pc == 0x226478u) {
        ctx->pc = 0x226478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226474u;
        // 0x226478: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22647Cu;
        goto label_22647c;
    }
    ctx->pc = 0x226474u;
    {
        const bool branch_taken_0x226474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226474u;
        // 0x226478: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226474) {
            ctx->pc = 0x2264A0u;
            goto label_2264a0;
        }
    }
    ctx->pc = 0x22647Cu;
label_22647c:
    // 0x22647c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x22647cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_226480:
    // 0x226480: 0x8c6291d8  lw          $v0, -0x6E28($v1)
    ctx->pc = 0x226480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939096)));
label_226484:
    // 0x226484: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x226484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_226488:
    // 0x226488: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_22648c:
    if (ctx->pc == 0x22648Cu) {
        ctx->pc = 0x22648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226488u;
        // 0x22648c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226490u;
        goto label_226490;
    }
    ctx->pc = 0x226488u;
    {
        const bool branch_taken_0x226488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x226488) {
            ctx->pc = 0x22648Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226488u;
            // 0x22648c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2264C4u;
            goto label_2264c4;
        }
    }
    ctx->pc = 0x226490u;
label_226490:
    // 0x226490: 0x8e4291d4  lw          $v0, -0x6E2C($s2)
    ctx->pc = 0x226490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939092)));
label_226494:
    // 0x226494: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x226494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_226498:
    // 0x226498: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x226498u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_22649c:
    // 0x22649c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22649cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2264a0:
    // 0x2264a0: 0xc0b826c  jal         func_2E09B0
label_2264a4:
    if (ctx->pc == 0x2264A4u) {
        ctx->pc = 0x2264A8u;
        goto label_2264a8;
    }
    ctx->pc = 0x2264A0u;
    SET_GPR_U32(ctx, 31, 0x2264A8u);
    ctx->pc = 0x2E09B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E09B0u, 0x2264A0u, 0x2264A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2264A8u;
label_2264a8:
    // 0x2264a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2264ac:
    if (ctx->pc == 0x2264ACu) {
        ctx->pc = 0x2264ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2264A8u;
        // 0x2264ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2264B0u;
        goto label_2264b0;
    }
    ctx->pc = 0x2264A8u;
    {
        const bool branch_taken_0x2264a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2264ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2264A8u;
        // 0x2264ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2264a8) {
            ctx->pc = 0x2264BCu;
            goto label_2264bc;
        }
    }
    ctx->pc = 0x2264B0u;
label_2264b0:
    // 0x2264b0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2264b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2264b4:
    // 0x2264b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2264b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2264b8:
    // 0x2264b8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2264b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2264bc:
    // 0x2264bc: 0xc0899d4  jal         func_226750
label_2264c0:
    if (ctx->pc == 0x2264C0u) {
        ctx->pc = 0x2264C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2264BCu;
        // 0x2264c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2264C4u;
        goto label_2264c4;
    }
    ctx->pc = 0x2264BCu;
    SET_GPR_U32(ctx, 31, 0x2264C4u);
    ctx->pc = 0x2264C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2264BCu;
    // 0x2264c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226750u, 0x2264BCu, 0x2264C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2264C4u;
label_2264c4:
    // 0x2264c4: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
label_2264c8:
    if (ctx->pc == 0x2264C8u) {
        ctx->pc = 0x2264CCu;
        goto label_2264cc;
    }
    ctx->pc = 0x2264C4u;
    {
        const bool branch_taken_0x2264c4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2264c4) {
            ctx->pc = 0x2264F0u;
            goto label_2264f0;
        }
    }
    ctx->pc = 0x2264CCu;
label_2264cc:
    // 0x2264cc: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x2264ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_2264d0:
    // 0x2264d0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2264d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_2264d4:
    // 0x2264d4: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2264d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_2264d8:
    // 0x2264d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2264dc:
    if (ctx->pc == 0x2264DCu) {
        ctx->pc = 0x2264E0u;
        goto label_2264e0;
    }
    ctx->pc = 0x2264D8u;
    {
        const bool branch_taken_0x2264d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2264d8) {
            ctx->pc = 0x2264F0u;
            goto label_2264f0;
        }
    }
    ctx->pc = 0x2264E0u;
label_2264e0:
    // 0x2264e0: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x2264e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_2264e4:
    // 0x2264e4: 0x8c6201dc  lw          $v0, 0x1DC($v1)
    ctx->pc = 0x2264e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 476)));
label_2264e8:
    // 0x2264e8: 0x40f809  jalr        $v0
label_2264ec:
    if (ctx->pc == 0x2264ECu) {
        ctx->pc = 0x2264ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2264E8u;
        // 0x2264ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2264F0u;
        goto label_2264f0;
    }
    ctx->pc = 0x2264E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2264F0u);
        ctx->pc = 0x2264ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2264E8u;
        // 0x2264ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2264E8u, 0x2264F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2264F0u;
label_2264f0:
    // 0x2264f0: 0xc07955a  jal         func_1E5568
label_2264f4:
    if (ctx->pc == 0x2264F4u) {
        ctx->pc = 0x2264F8u;
        goto label_2264f8;
    }
    ctx->pc = 0x2264F0u;
    SET_GPR_U32(ctx, 31, 0x2264F8u);
    ctx->pc = 0x1E5568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5568u, 0x2264F0u, 0x2264F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2264F8u;
label_2264f8:
    // 0x2264f8: 0x16800023  bnez        $s4, . + 4 + (0x23 << 2)
label_2264fc:
    if (ctx->pc == 0x2264FCu) {
        ctx->pc = 0x2264FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2264F8u;
        // 0x2264fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226500u;
        goto label_226500;
    }
    ctx->pc = 0x2264F8u;
    {
        const bool branch_taken_0x2264f8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2264FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2264F8u;
        // 0x2264fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2264f8) {
            ctx->pc = 0x226588u;
            goto label_226588;
        }
    }
    ctx->pc = 0x226500u;
label_226500:
    // 0x226500: 0x12a00015  beqz        $s5, . + 4 + (0x15 << 2)
label_226504:
    if (ctx->pc == 0x226504u) {
        ctx->pc = 0x226508u;
        goto label_226508;
    }
    ctx->pc = 0x226500u;
    {
        const bool branch_taken_0x226500 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x226500) {
            ctx->pc = 0x226558u;
            goto label_226558;
        }
    }
    ctx->pc = 0x226508u;
label_226508:
    // 0x226508: 0xc076a56  jal         func_1DA958
label_22650c:
    if (ctx->pc == 0x22650Cu) {
        ctx->pc = 0x22650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226508u;
        // 0x22650c: 0x8e2400c4  lw          $a0, 0xC4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226510u;
        goto label_226510;
    }
    ctx->pc = 0x226508u;
    SET_GPR_U32(ctx, 31, 0x226510u);
    ctx->pc = 0x22650Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226508u;
    // 0x22650c: 0x8e2400c4  lw          $a0, 0xC4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DA958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DA958u, 0x226508u, 0x226510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226510u;
label_226510:
    // 0x226510: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_226514:
    if (ctx->pc == 0x226514u) {
        ctx->pc = 0x226514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226510u;
        // 0x226514: 0x26f003a0  addiu       $s0, $s7, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 928));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226518u;
        goto label_226518;
    }
    ctx->pc = 0x226510u;
    {
        const bool branch_taken_0x226510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226510u;
        // 0x226514: 0x26f003a0  addiu       $s0, $s7, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226510) {
            ctx->pc = 0x226558u;
            goto label_226558;
        }
    }
    ctx->pc = 0x226518u;
label_226518:
    // 0x226518: 0x8e24010c  lw          $a0, 0x10C($s1)
    ctx->pc = 0x226518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_22651c:
    // 0x22651c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22651cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_226520:
    // 0x226520: 0xc0b826c  jal         func_2E09B0
label_226524:
    if (ctx->pc == 0x226524u) {
        ctx->pc = 0x226524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226520u;
        // 0x226524: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226528u;
        goto label_226528;
    }
    ctx->pc = 0x226520u;
    SET_GPR_U32(ctx, 31, 0x226528u);
    ctx->pc = 0x226524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226520u;
    // 0x226524: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E09B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E09B0u, 0x226520u, 0x226528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226528u;
label_226528:
    // 0x226528: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x226528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22652c:
    // 0x22652c: 0xc0899d4  jal         func_226750
label_226530:
    if (ctx->pc == 0x226530u) {
        ctx->pc = 0x226530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22652Cu;
        // 0x226530: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226534u;
        goto label_226534;
    }
    ctx->pc = 0x22652Cu;
    SET_GPR_U32(ctx, 31, 0x226534u);
    ctx->pc = 0x226530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22652Cu;
    // 0x226530: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226750u, 0x22652Cu, 0x226534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226534u;
label_226534:
    // 0x226534: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x226534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_226538:
    // 0x226538: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x226538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_22653c:
    // 0x22653c: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x22653cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_226540:
    // 0x226540: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_226544:
    if (ctx->pc == 0x226544u) {
        ctx->pc = 0x226548u;
        goto label_226548;
    }
    ctx->pc = 0x226540u;
    {
        const bool branch_taken_0x226540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x226540) {
            ctx->pc = 0x226558u;
            goto label_226558;
        }
    }
    ctx->pc = 0x226548u;
label_226548:
    // 0x226548: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x226548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_22654c:
    // 0x22654c: 0x8c6201dc  lw          $v0, 0x1DC($v1)
    ctx->pc = 0x22654cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 476)));
label_226550:
    // 0x226550: 0x40f809  jalr        $v0
label_226554:
    if (ctx->pc == 0x226554u) {
        ctx->pc = 0x226554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226550u;
        // 0x226554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226558u;
        goto label_226558;
    }
    ctx->pc = 0x226550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x226558u);
        ctx->pc = 0x226554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226550u;
        // 0x226554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226550u, 0x226558u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x226558u;
label_226558:
    // 0x226558: 0x1680000b  bnez        $s4, . + 4 + (0xB << 2)
label_22655c:
    if (ctx->pc == 0x22655Cu) {
        ctx->pc = 0x22655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226558u;
        // 0x22655c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226560u;
        goto label_226560;
    }
    ctx->pc = 0x226558u;
    {
        const bool branch_taken_0x226558 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x22655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226558u;
        // 0x22655c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226558) {
            ctx->pc = 0x226588u;
            goto label_226588;
        }
    }
    ctx->pc = 0x226560u;
label_226560:
    // 0x226560: 0x16c0000a  bnez        $s6, . + 4 + (0xA << 2)
label_226564:
    if (ctx->pc == 0x226564u) {
        ctx->pc = 0x226564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226560u;
        // 0x226564: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226568u;
        goto label_226568;
    }
    ctx->pc = 0x226560u;
    {
        const bool branch_taken_0x226560 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x226564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226560u;
        // 0x226564: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226560) {
            ctx->pc = 0x22658Cu;
            goto label_22658c;
        }
    }
    ctx->pc = 0x226568u;
label_226568:
    // 0x226568: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x226568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_22656c:
    // 0x22656c: 0x8c6201d8  lw          $v0, 0x1D8($v1)
    ctx->pc = 0x22656cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 472)));
label_226570:
    // 0x226570: 0x40f809  jalr        $v0
label_226574:
    if (ctx->pc == 0x226574u) {
        ctx->pc = 0x226574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226570u;
        // 0x226574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226578u;
        goto label_226578;
    }
    ctx->pc = 0x226570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x226578u);
        ctx->pc = 0x226574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226570u;
        // 0x226574: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226570u, 0x226578u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x226578u;
label_226578:
    // 0x226578: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x226578u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22657c:
    // 0x22657c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_226580:
    if (ctx->pc == 0x226580u) {
        ctx->pc = 0x226580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22657Cu;
        // 0x226580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226584u;
        goto label_226584;
    }
    ctx->pc = 0x22657Cu;
    {
        const bool branch_taken_0x22657c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x226580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22657Cu;
        // 0x226580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22657c) {
            ctx->pc = 0x226588u;
            goto label_226588;
        }
    }
    ctx->pc = 0x226584u;
label_226584:
    // 0x226584: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x226584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_226588:
    // 0x226588: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x226588u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22658c:
    // 0x22658c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22658cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_226590:
    // 0x226590: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x226590u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_226594:
    // 0x226594: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x226594u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_226598:
    // 0x226598: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x226598u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_22659c:
    // 0x22659c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x22659cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2265a0:
    // 0x2265a0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2265a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2265a4:
    // 0x2265a4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2265a4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2265a8:
    // 0x2265a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2265a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2265ac:
    // 0x2265ac: 0x3e00008  jr          $ra
label_2265b0:
    if (ctx->pc == 0x2265B0u) {
        ctx->pc = 0x2265B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2265ACu;
        // 0x2265b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2265B4u;
        goto label_2265b4;
    }
    ctx->pc = 0x2265ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2265B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2265ACu;
        // 0x2265b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2265ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2265B4u;
label_2265b4:
    // 0x2265b4: 0x0  nop
    ctx->pc = 0x2265b4u;
    // NOP
    ctx->pc = 0x2265b8u;
}

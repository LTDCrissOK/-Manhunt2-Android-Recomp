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

// Function: sub_0021D4F0
// Address: 0x21d4f0 - 0x21e288
void sub_0021D4F0_0x21d4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D4F0_0x21d4f0");
#endif

    switch (ctx->pc) {
        case 0x21d528u: goto label_21d528;
        case 0x21d53cu: goto label_21d53c;
        case 0x21d548u: goto label_21d548;
        case 0x21d550u: goto label_21d550;
        case 0x21d564u: goto label_21d564;
        case 0x21d57cu: goto label_21d57c;
        case 0x21d5a8u: goto label_21d5a8;
        case 0x21d5c0u: goto label_21d5c0;
        case 0x21d5ecu: goto label_21d5ec;
        case 0x21d600u: goto label_21d600;
        case 0x21d618u: goto label_21d618;
        case 0x21d62cu: goto label_21d62c;
        case 0x21d644u: goto label_21d644;
        case 0x21d658u: goto label_21d658;
        case 0x21d670u: goto label_21d670;
        case 0x21d68cu: goto label_21d68c;
        case 0x21d6a4u: goto label_21d6a4;
        case 0x21d6c0u: goto label_21d6c0;
        case 0x21d6d8u: goto label_21d6d8;
        case 0x21d700u: goto label_21d700;
        case 0x21d714u: goto label_21d714;
        case 0x21d72cu: goto label_21d72c;
        case 0x21d740u: goto label_21d740;
        case 0x21d74cu: goto label_21d74c;
        case 0x21d754u: goto label_21d754;
        case 0x21d778u: goto label_21d778;
        case 0x21d78cu: goto label_21d78c;
        case 0x21d798u: goto label_21d798;
        case 0x21d7a0u: goto label_21d7a0;
        case 0x21d7b4u: goto label_21d7b4;
        case 0x21d7c8u: goto label_21d7c8;
        case 0x21d7e4u: goto label_21d7e4;
        case 0x21d800u: goto label_21d800;
        case 0x21d82cu: goto label_21d82c;
        case 0x21d8a4u: goto label_21d8a4;
        case 0x21d8ccu: goto label_21d8cc;
        case 0x21d8f4u: goto label_21d8f4;
        case 0x21d91cu: goto label_21d91c;
        case 0x21d944u: goto label_21d944;
        case 0x21d96cu: goto label_21d96c;
        case 0x21d994u: goto label_21d994;
        case 0x21d9b8u: goto label_21d9b8;
        case 0x21d9dcu: goto label_21d9dc;
        case 0x21da04u: goto label_21da04;
        case 0x21da2cu: goto label_21da2c;
        case 0x21da54u: goto label_21da54;
        case 0x21da7cu: goto label_21da7c;
        case 0x21daa4u: goto label_21daa4;
        case 0x21dac8u: goto label_21dac8;
        case 0x21daecu: goto label_21daec;
        case 0x21db14u: goto label_21db14;
        case 0x21db38u: goto label_21db38;
        case 0x21db5cu: goto label_21db5c;
        case 0x21db80u: goto label_21db80;
        case 0x21dba4u: goto label_21dba4;
        case 0x21dbccu: goto label_21dbcc;
        case 0x21dbf0u: goto label_21dbf0;
        case 0x21dc04u: goto label_21dc04;
        case 0x21dc1cu: goto label_21dc1c;
        case 0x21dc30u: goto label_21dc30;
        case 0x21dc48u: goto label_21dc48;
        case 0x21dc70u: goto label_21dc70;
        case 0x21dc94u: goto label_21dc94;
        case 0x21dcbcu: goto label_21dcbc;
        case 0x21dce4u: goto label_21dce4;
        case 0x21dd04u: goto label_21dd04;
        case 0x21dd0cu: goto label_21dd0c;
        case 0x21dd20u: goto label_21dd20;
        case 0x21dd38u: goto label_21dd38;
        case 0x21dd54u: goto label_21dd54;
        case 0x21dd78u: goto label_21dd78;
        case 0x21dd8cu: goto label_21dd8c;
        case 0x21dda4u: goto label_21dda4;
        case 0x21ddc8u: goto label_21ddc8;
        case 0x21ddf4u: goto label_21ddf4;
        case 0x21de10u: goto label_21de10;
        case 0x21de28u: goto label_21de28;
        case 0x21de3cu: goto label_21de3c;
        case 0x21de54u: goto label_21de54;
        case 0x21de68u: goto label_21de68;
        case 0x21de84u: goto label_21de84;
        case 0x21de98u: goto label_21de98;
        case 0x21deb0u: goto label_21deb0;
        case 0x21dec4u: goto label_21dec4;
        case 0x21ded0u: goto label_21ded0;
        case 0x21dee0u: goto label_21dee0;
        case 0x21df00u: goto label_21df00;
        case 0x21df24u: goto label_21df24;
        case 0x21df48u: goto label_21df48;
        case 0x21df6cu: goto label_21df6c;
        case 0x21df98u: goto label_21df98;
        case 0x21dfacu: goto label_21dfac;
        case 0x21dfb8u: goto label_21dfb8;
        case 0x21dfc8u: goto label_21dfc8;
        case 0x21dff4u: goto label_21dff4;
        case 0x21e008u: goto label_21e008;
        case 0x21e014u: goto label_21e014;
        case 0x21e024u: goto label_21e024;
        case 0x21e040u: goto label_21e040;
        case 0x21e04cu: goto label_21e04c;
        case 0x21e060u: goto label_21e060;
        case 0x21e074u: goto label_21e074;
        case 0x21e08cu: goto label_21e08c;
        case 0x21e0a0u: goto label_21e0a0;
        case 0x21e0b8u: goto label_21e0b8;
        case 0x21e0ccu: goto label_21e0cc;
        case 0x21e0e4u: goto label_21e0e4;
        case 0x21e0f8u: goto label_21e0f8;
        case 0x21e110u: goto label_21e110;
        case 0x21e134u: goto label_21e134;
        case 0x21e148u: goto label_21e148;
        case 0x21e160u: goto label_21e160;
        case 0x21e174u: goto label_21e174;
        case 0x21e18cu: goto label_21e18c;
        case 0x21e1a8u: goto label_21e1a8;
        case 0x21e1c0u: goto label_21e1c0;
        case 0x21e1d4u: goto label_21e1d4;
        case 0x21e1ecu: goto label_21e1ec;
        case 0x21e200u: goto label_21e200;
        case 0x21e218u: goto label_21e218;
        case 0x21e234u: goto label_21e234;
        case 0x21e254u: goto label_21e254;
        case 0x21e264u: goto label_21e264;
        default: break;
    }

    ctx->pc = 0x21d4f0u;

    // 0x21d4f0: 0x27bdfb60  addiu       $sp, $sp, -0x4A0
    ctx->pc = 0x21d4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966112));
    // 0x21d4f4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x21d4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x21d4f8: 0xffb00470  sd          $s0, 0x470($sp)
    ctx->pc = 0x21d4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 16));
    // 0x21d4fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21d4fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d500: 0xffb10478  sd          $s1, 0x478($sp)
    ctx->pc = 0x21d500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1144), GPR_U64(ctx, 17));
    // 0x21d504: 0xffb20480  sd          $s2, 0x480($sp)
    ctx->pc = 0x21d504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1152), GPR_U64(ctx, 18));
    // 0x21d508: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21d508u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d50c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21d50cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21d510: 0xffb30488  sd          $s3, 0x488($sp)
    ctx->pc = 0x21d510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1160), GPR_U64(ctx, 19));
    // 0x21d514: 0xffbf0490  sd          $ra, 0x490($sp)
    ctx->pc = 0x21d514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1168), GPR_U64(ctx, 31));
    // 0x21d518: 0x2452fe40  addiu       $s2, $v0, -0x1C0
    ctx->pc = 0x21d518u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
    // 0x21d51c: 0x24a51850  addiu       $a1, $a1, 0x1850
    ctx->pc = 0x21d51cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6224));
    // 0x21d520: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21D520u;
    SET_GPR_U32(ctx, 31, 0x21D528u);
    ctx->pc = 0x21D524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D520u;
    // 0x21d524: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21D520u, 0x21D528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D528u;
label_21d528:
    // 0x21d528: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d52c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21D52Cu;
    {
        const bool branch_taken_0x21d52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D52Cu;
        // 0x21d530: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d52c) {
            ctx->pc = 0x21D558u;
            goto label_21d558;
        }
    }
    ctx->pc = 0x21D534u;
    // 0x21d534: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x21D534u;
    SET_GPR_U32(ctx, 31, 0x21D53Cu);
    ctx->pc = 0x21D538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D534u;
    // 0x21d538: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x21D534u, 0x21D53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D53Cu;
label_21d53c:
    // 0x21d53c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21d53cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d540: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x21D540u;
    SET_GPR_U32(ctx, 31, 0x21D548u);
    ctx->pc = 0x21D544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D540u;
    // 0x21d544: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x21D540u, 0x21D548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D548u;
label_21d548:
    // 0x21d548: 0xc08346e  jal         func_20D1B8
    ctx->pc = 0x21D548u;
    SET_GPR_U32(ctx, 31, 0x21D550u);
    ctx->pc = 0x21D54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D548u;
    // 0x21d54c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D1B8u, 0x21D548u, 0x21D550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D550u;
label_21d550:
    // 0x21d550: 0x100002bc  b           . + 4 + (0x2BC << 2)
    ctx->pc = 0x21D550u;
    {
        const bool branch_taken_0x21d550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D550u;
        // 0x21d554: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d550) {
            ctx->pc = 0x21E044u;
            goto label_21e044;
        }
    }
    ctx->pc = 0x21D558u;
label_21d558:
    // 0x21d558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d55c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21D55Cu;
    SET_GPR_U32(ctx, 31, 0x21D564u);
    ctx->pc = 0x21D560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D55Cu;
    // 0x21d560: 0x24a51858  addiu       $a1, $a1, 0x1858 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21D55Cu, 0x21D564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D564u;
label_21d564:
    // 0x21d564: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d568: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21D568u;
    {
        const bool branch_taken_0x21d568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D568u;
        // 0x21d56c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d568) {
            ctx->pc = 0x21D598u;
            goto label_21d598;
        }
    }
    ctx->pc = 0x21D570u;
    // 0x21d570: 0x26300014  addiu       $s0, $s1, 0x14
    ctx->pc = 0x21d570u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x21d574: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x21D574u;
    SET_GPR_U32(ctx, 31, 0x21D57Cu);
    ctx->pc = 0x21D578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D574u;
    // 0x21d578: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x21D574u, 0x21D57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D57Cu;
label_21d57c:
    // 0x21d57c: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x21d57cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21d580: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21D580u;
    {
        const bool branch_taken_0x21d580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D580u;
        // 0x21d584: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d580) {
            ctx->pc = 0x21D58Cu;
            goto label_21d58c;
        }
    }
    ctx->pc = 0x21D588u;
    // 0x21d588: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x21d588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_21d58c:
    // 0x21d58c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x21d58cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x21d590: 0x10000334  b           . + 4 + (0x334 << 2)
    ctx->pc = 0x21D590u;
    {
        const bool branch_taken_0x21d590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D590u;
        // 0x21d594: 0xa2220010  sb          $v0, 0x10($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d590) {
            ctx->pc = 0x21E264u;
            goto label_21e264;
        }
    }
    ctx->pc = 0x21D598u;
label_21d598:
    // 0x21d598: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21d598u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21d59c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d5a0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21D5A0u;
    SET_GPR_U32(ctx, 31, 0x21D5A8u);
    ctx->pc = 0x21D5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D5A0u;
    // 0x21d5a4: 0x24a51860  addiu       $a1, $a1, 0x1860 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21D5A0u, 0x21D5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D5A8u;
label_21d5a8:
    // 0x21d5a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d5ac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21D5ACu;
    {
        const bool branch_taken_0x21d5ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D5ACu;
        // 0x21d5b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d5ac) {
            ctx->pc = 0x21D5DCu;
            goto label_21d5dc;
        }
    }
    ctx->pc = 0x21D5B4u;
    // 0x21d5b4: 0x26300024  addiu       $s0, $s1, 0x24
    ctx->pc = 0x21d5b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x21d5b8: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x21D5B8u;
    SET_GPR_U32(ctx, 31, 0x21D5C0u);
    ctx->pc = 0x21D5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D5B8u;
    // 0x21d5bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x21D5B8u, 0x21D5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D5C0u;
label_21d5c0:
    // 0x21d5c0: 0x86020004  lh          $v0, 0x4($s0)
    ctx->pc = 0x21d5c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21d5c4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21D5C4u;
    {
        const bool branch_taken_0x21d5c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D5C4u;
        // 0x21d5c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d5c4) {
            ctx->pc = 0x21D5D0u;
            goto label_21d5d0;
        }
    }
    ctx->pc = 0x21D5CCu;
    // 0x21d5cc: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x21d5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_21d5d0:
    // 0x21d5d0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x21d5d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x21d5d4: 0x10000323  b           . + 4 + (0x323 << 2)
    ctx->pc = 0x21D5D4u;
    {
        const bool branch_taken_0x21d5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D5D4u;
        // 0x21d5d8: 0xa2220020  sb          $v0, 0x20($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 32), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d5d4) {
            ctx->pc = 0x21E264u;
            goto label_21e264;
        }
    }
    ctx->pc = 0x21D5DCu;
label_21d5dc:
    // 0x21d5dc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21d5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21d5e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d5e4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21D5E4u;
    SET_GPR_U32(ctx, 31, 0x21D5ECu);
    ctx->pc = 0x21D5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D5E4u;
    // 0x21d5e8: 0x24a51870  addiu       $a1, $a1, 0x1870 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21D5E4u, 0x21D5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D5ECu;
label_21d5ec:
    // 0x21d5ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d5f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21D5F0u;
    {
        const bool branch_taken_0x21d5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D5F0u;
        // 0x21d5f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d5f0) {
            ctx->pc = 0x21D608u;
            goto label_21d608;
        }
    }
    ctx->pc = 0x21D5F8u;
    // 0x21d5f8: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x21D5F8u;
    SET_GPR_U32(ctx, 31, 0x21D600u);
    ctx->pc = 0x21D5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D5F8u;
    // 0x21d5fc: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x21D5F8u, 0x21D600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D600u;
label_21d600:
    // 0x21d600: 0x10000319  b           . + 4 + (0x319 << 2)
    ctx->pc = 0x21D600u;
    {
        const bool branch_taken_0x21d600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D600u;
        // 0x21d604: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d600) {
            ctx->pc = 0x21E268u;
            goto label_21e268;
        }
    }
    ctx->pc = 0x21D608u;
label_21d608:
    // 0x21d608: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21d608u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21d60c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d610: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21D610u;
    SET_GPR_U32(ctx, 31, 0x21D618u);
    ctx->pc = 0x21D614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D610u;
    // 0x21d614: 0x24a51880  addiu       $a1, $a1, 0x1880 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21D610u, 0x21D618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D618u;
label_21d618:
    // 0x21d618: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d61c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21D61Cu;
    {
        const bool branch_taken_0x21d61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D61Cu;
        // 0x21d620: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d61c) {
            ctx->pc = 0x21D634u;
            goto label_21d634;
        }
    }
    ctx->pc = 0x21D624u;
    // 0x21d624: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x21D624u;
    SET_GPR_U32(ctx, 31, 0x21D62Cu);
    ctx->pc = 0x21D628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D624u;
    // 0x21d628: 0x262500d0  addiu       $a1, $s1, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x21D624u, 0x21D62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D62Cu;
label_21d62c:
    // 0x21d62c: 0x1000030e  b           . + 4 + (0x30E << 2)
    ctx->pc = 0x21D62Cu;
    {
        const bool branch_taken_0x21d62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D62Cu;
        // 0x21d630: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d62c) {
            ctx->pc = 0x21E268u;
            goto label_21e268;
        }
    }
    ctx->pc = 0x21D634u;
label_21d634:
    // 0x21d634: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21d634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21d638: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d63c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21D63Cu;
    SET_GPR_U32(ctx, 31, 0x21D644u);
    ctx->pc = 0x21D640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D63Cu;
    // 0x21d640: 0x24a51888  addiu       $a1, $a1, 0x1888 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21D63Cu, 0x21D644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D644u;
label_21d644:
    // 0x21d644: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d648: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21D648u;
    {
        const bool branch_taken_0x21d648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D648u;
        // 0x21d64c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d648) {
            ctx->pc = 0x21D660u;
            goto label_21d660;
        }
    }
    ctx->pc = 0x21D650u;
    // 0x21d650: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x21D650u;
    SET_GPR_U32(ctx, 31, 0x21D658u);
    ctx->pc = 0x21D654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D650u;
    // 0x21d654: 0x262500d8  addiu       $a1, $s1, 0xD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x21D650u, 0x21D658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D658u;
label_21d658:
    // 0x21d658: 0x10000303  b           . + 4 + (0x303 << 2)
    ctx->pc = 0x21D658u;
    {
        const bool branch_taken_0x21d658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D658u;
        // 0x21d65c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d658) {
            ctx->pc = 0x21E268u;
            goto label_21e268;
        }
    }
    ctx->pc = 0x21D660u;
label_21d660:
    // 0x21d660: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21d660u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21d664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d668: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21D668u;
    SET_GPR_U32(ctx, 31, 0x21D670u);
    ctx->pc = 0x21D66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D668u;
    // 0x21d66c: 0x24a51898  addiu       $a1, $a1, 0x1898 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21D668u, 0x21D670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D670u;
label_21d670:
    // 0x21d670: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d674: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21D674u;
    {
        const bool branch_taken_0x21d674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D674u;
        // 0x21d678: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d674) {
            ctx->pc = 0x21D694u;
            goto label_21d694;
        }
    }
    ctx->pc = 0x21D67Cu;
    // 0x21d67c: 0x262700e8  addiu       $a3, $s1, 0xE8
    ctx->pc = 0x21d67cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
    // 0x21d680: 0x262500e0  addiu       $a1, $s1, 0xE0
    ctx->pc = 0x21d680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x21d684: 0xc09df62  jal         func_277D88
    ctx->pc = 0x21D684u;
    SET_GPR_U32(ctx, 31, 0x21D68Cu);
    ctx->pc = 0x21D688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D684u;
    // 0x21d688: 0x262600e4  addiu       $a2, $s1, 0xE4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 228));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x21D684u, 0x21D68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D68Cu;
label_21d68c:
    // 0x21d68c: 0x100002f6  b           . + 4 + (0x2F6 << 2)
    ctx->pc = 0x21D68Cu;
    {
        const bool branch_taken_0x21d68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D68Cu;
        // 0x21d690: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d68c) {
            ctx->pc = 0x21E268u;
            goto label_21e268;
        }
    }
    ctx->pc = 0x21D694u;
label_21d694:
    // 0x21d694: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21d694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21d698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d69c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21D69Cu;
    SET_GPR_U32(ctx, 31, 0x21D6A4u);
    ctx->pc = 0x21D6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D69Cu;
    // 0x21d6a0: 0x24a518a8  addiu       $a1, $a1, 0x18A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21D69Cu, 0x21D6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D6A4u;
label_21d6a4:
    // 0x21d6a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d6a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21D6A8u;
    {
        const bool branch_taken_0x21d6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D6A8u;
        // 0x21d6ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d6a8) {
            ctx->pc = 0x21D6C8u;
            goto label_21d6c8;
        }
    }
    ctx->pc = 0x21D6B0u;
    // 0x21d6b0: 0x262700f8  addiu       $a3, $s1, 0xF8
    ctx->pc = 0x21d6b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 248));
    // 0x21d6b4: 0x262500f0  addiu       $a1, $s1, 0xF0
    ctx->pc = 0x21d6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x21d6b8: 0xc09df62  jal         func_277D88
    ctx->pc = 0x21D6B8u;
    SET_GPR_U32(ctx, 31, 0x21D6C0u);
    ctx->pc = 0x21D6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D6B8u;
    // 0x21d6bc: 0x262600f4  addiu       $a2, $s1, 0xF4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 244));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x21D6B8u, 0x21D6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D6C0u;
label_21d6c0:
    // 0x21d6c0: 0x100002e9  b           . + 4 + (0x2E9 << 2)
    ctx->pc = 0x21D6C0u;
    {
        const bool branch_taken_0x21d6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D6C0u;
        // 0x21d6c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d6c0) {
            ctx->pc = 0x21E268u;
            goto label_21e268;
        }
    }
    ctx->pc = 0x21D6C8u;
label_21d6c8:
    // 0x21d6c8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21d6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21d6cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d6d0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21D6D0u;
    SET_GPR_U32(ctx, 31, 0x21D6D8u);
    ctx->pc = 0x21D6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D6D0u;
    // 0x21d6d4: 0x24a518b8  addiu       $a1, $a1, 0x18B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21D6D0u, 0x21D6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D6D8u;
label_21d6d8:
    // 0x21d6d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d6dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21D6DCu;
    {
        const bool branch_taken_0x21d6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D6DCu;
        // 0x21d6e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d6dc) {
            ctx->pc = 0x21D6ECu;
            goto label_21d6ec;
        }
    }
    ctx->pc = 0x21D6E4u;
    // 0x21d6e4: 0x100002df  b           . + 4 + (0x2DF << 2)
    ctx->pc = 0x21D6E4u;
    {
        const bool branch_taken_0x21d6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D6E4u;
        // 0x21d6e8: 0xa2220134  sb          $v0, 0x134($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 308), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d6e4) {
            ctx->pc = 0x21E264u;
            goto label_21e264;
        }
    }
    ctx->pc = 0x21D6ECu;
label_21d6ec:
    // 0x21d6ec: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21d6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21d6f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d6f4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x21d6f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d6f8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21D6F8u;
    SET_GPR_U32(ctx, 31, 0x21D700u);
    ctx->pc = 0x21D6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D6F8u;
    // 0x21d6fc: 0x24a518d0  addiu       $a1, $a1, 0x18D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21D6F8u, 0x21D700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D700u;
label_21d700:
    // 0x21d700: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d704: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21D704u;
    {
        const bool branch_taken_0x21d704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D704u;
        // 0x21d708: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d704) {
            ctx->pc = 0x21D71Cu;
            goto label_21d71c;
        }
    }
    ctx->pc = 0x21D70Cu;
    // 0x21d70c: 0xc08752c  jal         func_21D4B0
    ctx->pc = 0x21D70Cu;
    SET_GPR_U32(ctx, 31, 0x21D714u);
    ctx->pc = 0x21D710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D70Cu;
    // 0x21d710: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D4B0u, 0x21D70Cu, 0x21D714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D714u;
label_21d714:
    // 0x21d714: 0x100002d4  b           . + 4 + (0x2D4 << 2)
    ctx->pc = 0x21D714u;
    {
        const bool branch_taken_0x21d714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D714u;
        // 0x21d718: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d714) {
            ctx->pc = 0x21E268u;
            goto label_21e268;
        }
    }
    ctx->pc = 0x21D71Cu;
label_21d71c:
    // 0x21d71c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21d71cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21d720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d724: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21D724u;
    SET_GPR_U32(ctx, 31, 0x21D72Cu);
    ctx->pc = 0x21D728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D724u;
    // 0x21d728: 0x24a518e0  addiu       $a1, $a1, 0x18E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21D724u, 0x21D72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D72Cu;
label_21d72c:
    // 0x21d72c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d730: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x21D730u;
    {
        const bool branch_taken_0x21d730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D730u;
        // 0x21d734: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d730) {
            ctx->pc = 0x21D76Cu;
            goto label_21d76c;
        }
    }
    ctx->pc = 0x21D738u;
    // 0x21d738: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x21D738u;
    SET_GPR_U32(ctx, 31, 0x21D740u);
    ctx->pc = 0x21D73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D738u;
    // 0x21d73c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x21D738u, 0x21D740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D740u;
label_21d740:
    // 0x21d740: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21d740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d744: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x21D744u;
    SET_GPR_U32(ctx, 31, 0x21D74Cu);
    ctx->pc = 0x21D748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D744u;
    // 0x21d748: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x21D744u, 0x21D74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D74Cu;
label_21d74c:
    // 0x21d74c: 0xc08665e  jal         func_219978
    ctx->pc = 0x21D74Cu;
    SET_GPR_U32(ctx, 31, 0x21D754u);
    ctx->pc = 0x21D750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D74Cu;
    // 0x21d750: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219978u, 0x21D74Cu, 0x21D754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D754u;
label_21d754:
    // 0x21d754: 0x1440023a  bnez        $v0, . + 4 + (0x23A << 2)
    ctx->pc = 0x21D754u;
    {
        const bool branch_taken_0x21d754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D754u;
        // 0x21d758: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d754) {
            ctx->pc = 0x21E040u;
            goto label_21e040;
        }
    }
    ctx->pc = 0x21D75Cu;
    // 0x21d75c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21d75cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21d760: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x21d760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d764: 0x10000234  b           . + 4 + (0x234 << 2)
    ctx->pc = 0x21D764u;
    {
        const bool branch_taken_0x21d764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D764u;
        // 0x21d768: 0x24a518e8  addiu       $a1, $a1, 0x18E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d764) {
            ctx->pc = 0x21E038u;
            goto label_21e038;
        }
    }
    ctx->pc = 0x21D76Cu;
label_21d76c:
    // 0x21d76c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d770: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21D770u;
    SET_GPR_U32(ctx, 31, 0x21D778u);
    ctx->pc = 0x21D774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D770u;
    // 0x21d774: 0x24a51908  addiu       $a1, $a1, 0x1908 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21D770u, 0x21D778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D778u;
label_21d778:
    // 0x21d778: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d77c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21D77Cu;
    {
        const bool branch_taken_0x21d77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D77Cu;
        // 0x21d780: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d77c) {
            ctx->pc = 0x21D7A8u;
            goto label_21d7a8;
        }
    }
    ctx->pc = 0x21D784u;
    // 0x21d784: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x21D784u;
    SET_GPR_U32(ctx, 31, 0x21D78Cu);
    ctx->pc = 0x21D788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D784u;
    // 0x21d788: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x21D784u, 0x21D78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D78Cu;
label_21d78c:
    // 0x21d78c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21d78cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d790: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x21D790u;
    SET_GPR_U32(ctx, 31, 0x21D798u);
    ctx->pc = 0x21D794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D790u;
    // 0x21d794: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x21D790u, 0x21D798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D798u;
label_21d798:
    // 0x21d798: 0xc0867d0  jal         func_219F40
    ctx->pc = 0x21D798u;
    SET_GPR_U32(ctx, 31, 0x21D7A0u);
    ctx->pc = 0x21D79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D798u;
    // 0x21d79c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219F40u, 0x21D798u, 0x21D7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D7A0u;
label_21d7a0:
    // 0x21d7a0: 0x10000227  b           . + 4 + (0x227 << 2)
    ctx->pc = 0x21D7A0u;
    {
        const bool branch_taken_0x21d7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D7A0u;
        // 0x21d7a4: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d7a0) {
            ctx->pc = 0x21E040u;
            goto label_21e040;
        }
    }
    ctx->pc = 0x21D7A8u;
label_21d7a8:
    // 0x21d7a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d7ac: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21D7ACu;
    SET_GPR_U32(ctx, 31, 0x21D7B4u);
    ctx->pc = 0x21D7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D7ACu;
    // 0x21d7b0: 0x24a51918  addiu       $a1, $a1, 0x1918 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21D7ACu, 0x21D7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D7B4u;
label_21d7b4:
    // 0x21d7b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d7b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d7b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21D7B8u;
    {
        const bool branch_taken_0x21d7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D7B8u;
        // 0x21d7bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d7b8) {
            ctx->pc = 0x21D7D4u;
            goto label_21d7d4;
        }
    }
    ctx->pc = 0x21D7C0u;
    // 0x21d7c0: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21D7C0u;
    SET_GPR_U32(ctx, 31, 0x21D7C8u);
    ctx->pc = 0x21D7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D7C0u;
    // 0x21d7c4: 0x27a50460  addiu       $a1, $sp, 0x460 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21D7C0u, 0x21D7C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D7C8u;
label_21d7c8:
    // 0x21d7c8: 0xc7a00460  lwc1        $f0, 0x460($sp)
    ctx->pc = 0x21d7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d7cc: 0x100002a5  b           . + 4 + (0x2A5 << 2)
    ctx->pc = 0x21D7CCu;
    {
        const bool branch_taken_0x21d7cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D7CCu;
        // 0x21d7d0: 0xe620005c  swc1        $f0, 0x5C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d7cc) {
            ctx->pc = 0x21E264u;
            goto label_21e264;
        }
    }
    ctx->pc = 0x21D7D4u;
label_21d7d4:
    // 0x21d7d4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21d7d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21d7d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d7dc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21D7DCu;
    SET_GPR_U32(ctx, 31, 0x21D7E4u);
    ctx->pc = 0x21D7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D7DCu;
    // 0x21d7e0: 0x24a51928  addiu       $a1, $a1, 0x1928 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21D7DCu, 0x21D7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D7E4u;
label_21d7e4:
    // 0x21d7e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d7e8: 0x1440029f  bnez        $v0, . + 4 + (0x29F << 2)
    ctx->pc = 0x21D7E8u;
    {
        const bool branch_taken_0x21d7e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D7E8u;
        // 0x21d7ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d7e8) {
            ctx->pc = 0x21E268u;
            goto label_21e268;
        }
    }
    ctx->pc = 0x21D7F0u;
    // 0x21d7f0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21d7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21d7f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d7f8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21D7F8u;
    SET_GPR_U32(ctx, 31, 0x21D800u);
    ctx->pc = 0x21D7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D7F8u;
    // 0x21d7fc: 0x24a51938  addiu       $a1, $a1, 0x1938 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21D7F8u, 0x21D800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D800u;
label_21d800:
    // 0x21d800: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d804: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x21D804u;
    {
        const bool branch_taken_0x21d804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D804u;
        // 0x21d808: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d804) {
            ctx->pc = 0x21D894u;
            goto label_21d894;
        }
    }
    ctx->pc = 0x21D80Cu;
    // 0x21d80c: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x21d80cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x21d810: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x21d810u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x21d814: 0x24a50064  addiu       $a1, $a1, 0x64
    ctx->pc = 0x21d814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 100));
    // 0x21d818: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x21d818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x21d81c: 0x24a60004  addiu       $a2, $a1, 0x4
    ctx->pc = 0x21d81cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x21d820: 0x24a70008  addiu       $a3, $a1, 0x8
    ctx->pc = 0x21d820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x21d824: 0xc09dfa0  jal         func_277E80
    ctx->pc = 0x21D824u;
    SET_GPR_U32(ctx, 31, 0x21D82Cu);
    ctx->pc = 0x21D828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D824u;
    // 0x21d828: 0x24a8000c  addiu       $t0, $a1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277E80u, 0x21D824u, 0x21D82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D82Cu;
label_21d82c:
    // 0x21d82c: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x21d82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x21d830: 0x26260070  addiu       $a2, $s1, 0x70
    ctx->pc = 0x21d830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x21d834: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x21d834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x21d838: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x21d838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x21d83c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x21d83cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x21d840: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x21d840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x21d844: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21d844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21d848: 0x50640001  beql        $v1, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x21D848u;
    {
        const bool branch_taken_0x21d848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x21d848) {
            ctx->pc = 0x21D84Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D848u;
            // 0x21d84c: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D850u;
            goto label_21d850;
        }
    }
    ctx->pc = 0x21D850u;
label_21d850:
    // 0x21d850: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x21d850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x21d854: 0x26250068  addiu       $a1, $s1, 0x68
    ctx->pc = 0x21d854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x21d858: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x21d858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x21d85c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x21d85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x21d860: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x21d860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21d864: 0x421018  mult        $v0, $v0, $v0
    ctx->pc = 0x21d864u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21d868: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x21d868u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x21d86c: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x21d86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x21d870: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x21d870u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x21d874: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x21d874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x21d878: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x21d878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21d87c: 0x421018  mult        $v0, $v0, $v0
    ctx->pc = 0x21d87cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x21d880: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x21d880u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x21d884: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x21d884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x21d888: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x21d888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x21d88c: 0x10000275  b           . + 4 + (0x275 << 2)
    ctx->pc = 0x21D88Cu;
    {
        const bool branch_taken_0x21d88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D88Cu;
        // 0x21d890: 0xae230060  sw          $v1, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d88c) {
            ctx->pc = 0x21E264u;
            goto label_21e264;
        }
    }
    ctx->pc = 0x21D894u;
label_21d894:
    // 0x21d894: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21d894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21d898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d89c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21D89Cu;
    SET_GPR_U32(ctx, 31, 0x21D8A4u);
    ctx->pc = 0x21D8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D89Cu;
    // 0x21d8a0: 0x24a51948  addiu       $a1, $a1, 0x1948 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21D89Cu, 0x21D8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D8A4u;
label_21d8a4:
    // 0x21d8a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d8a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d8a8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21D8A8u;
    {
        const bool branch_taken_0x21d8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d8a8) {
            ctx->pc = 0x21D8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D8A8u;
            // 0x21d8ac: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D8C0u;
            goto label_21d8c0;
        }
    }
    ctx->pc = 0x21D8B0u;
    // 0x21d8b0: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x21d8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x21d8b4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x21d8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x21d8b8: 0x1000026a  b           . + 4 + (0x26A << 2)
    ctx->pc = 0x21D8B8u;
    {
        const bool branch_taken_0x21d8b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D8B8u;
        // 0x21d8bc: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d8b8) {
            ctx->pc = 0x21E264u;
            goto label_21e264;
        }
    }
    ctx->pc = 0x21D8C0u;
label_21d8c0:
    // 0x21d8c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d8c4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21D8C4u;
    SET_GPR_U32(ctx, 31, 0x21D8CCu);
    ctx->pc = 0x21D8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D8C4u;
    // 0x21d8c8: 0x24a51950  addiu       $a1, $a1, 0x1950 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21D8C4u, 0x21D8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D8CCu;
label_21d8cc:
    // 0x21d8cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d8d0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21D8D0u;
    {
        const bool branch_taken_0x21d8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d8d0) {
            ctx->pc = 0x21D8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D8D0u;
            // 0x21d8d4: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D8E8u;
            goto label_21d8e8;
        }
    }
    ctx->pc = 0x21D8D8u;
    // 0x21d8d8: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x21d8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x21d8dc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x21d8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x21d8e0: 0x10000260  b           . + 4 + (0x260 << 2)
    ctx->pc = 0x21D8E0u;
    {
        const bool branch_taken_0x21d8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D8E0u;
        // 0x21d8e4: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d8e0) {
            ctx->pc = 0x21E264u;
            goto label_21e264;
        }
    }
    ctx->pc = 0x21D8E8u;
label_21d8e8:
    // 0x21d8e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d8ec: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21D8ECu;
    SET_GPR_U32(ctx, 31, 0x21D8F4u);
    ctx->pc = 0x21D8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D8ECu;
    // 0x21d8f0: 0x24a51960  addiu       $a1, $a1, 0x1960 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21D8ECu, 0x21D8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D8F4u;
label_21d8f4:
    // 0x21d8f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d8f8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21D8F8u;
    {
        const bool branch_taken_0x21d8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d8f8) {
            ctx->pc = 0x21D8FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D8F8u;
            // 0x21d8fc: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D910u;
            goto label_21d910;
        }
    }
    ctx->pc = 0x21D900u;
    // 0x21d900: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x21d900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x21d904: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x21d904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x21d908: 0x10000256  b           . + 4 + (0x256 << 2)
    ctx->pc = 0x21D908u;
    {
        const bool branch_taken_0x21d908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D908u;
        // 0x21d90c: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d908) {
            ctx->pc = 0x21E264u;
            goto label_21e264;
        }
    }
    ctx->pc = 0x21D910u;
label_21d910:
    // 0x21d910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d914: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21D914u;
    SET_GPR_U32(ctx, 31, 0x21D91Cu);
    ctx->pc = 0x21D918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D914u;
    // 0x21d918: 0x24a51968  addiu       $a1, $a1, 0x1968 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21D914u, 0x21D91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D91Cu;
label_21d91c:
    // 0x21d91c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d920: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21D920u;
    {
        const bool branch_taken_0x21d920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d920) {
            ctx->pc = 0x21D924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D920u;
            // 0x21d924: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D938u;
            goto label_21d938;
        }
    }
    ctx->pc = 0x21D928u;
    // 0x21d928: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x21d928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x21d92c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x21d92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x21d930: 0x1000024c  b           . + 4 + (0x24C << 2)
    ctx->pc = 0x21D930u;
    {
        const bool branch_taken_0x21d930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D930u;
        // 0x21d934: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d930) {
            ctx->pc = 0x21E264u;
            goto label_21e264;
        }
    }
    ctx->pc = 0x21D938u;
label_21d938:
    // 0x21d938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d93c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21D93Cu;
    SET_GPR_U32(ctx, 31, 0x21D944u);
    ctx->pc = 0x21D940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D93Cu;
    // 0x21d940: 0x24a51978  addiu       $a1, $a1, 0x1978 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21D93Cu, 0x21D944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D944u;
label_21d944:
    // 0x21d944: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d948: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21D948u;
    {
        const bool branch_taken_0x21d948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d948) {
            ctx->pc = 0x21D94Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D948u;
            // 0x21d94c: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D960u;
            goto label_21d960;
        }
    }
    ctx->pc = 0x21D950u;
    // 0x21d950: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x21d950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x21d954: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x21d954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x21d958: 0x10000242  b           . + 4 + (0x242 << 2)
    ctx->pc = 0x21D958u;
    {
        const bool branch_taken_0x21d958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D958u;
        // 0x21d95c: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d958) {
            ctx->pc = 0x21E264u;
            goto label_21e264;
        }
    }
    ctx->pc = 0x21D960u;
label_21d960:
    // 0x21d960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d964: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21D964u;
    SET_GPR_U32(ctx, 31, 0x21D96Cu);
    ctx->pc = 0x21D968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D964u;
    // 0x21d968: 0x24a51988  addiu       $a1, $a1, 0x1988 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21D964u, 0x21D96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D96Cu;
label_21d96c:
    // 0x21d96c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d970: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21D970u;
    {
        const bool branch_taken_0x21d970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d970) {
            ctx->pc = 0x21D974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D970u;
            // 0x21d974: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D988u;
            goto label_21d988;
        }
    }
    ctx->pc = 0x21D978u;
    // 0x21d978: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x21d978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x21d97c: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x21d97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x21d980: 0x10000238  b           . + 4 + (0x238 << 2)
    ctx->pc = 0x21D980u;
    {
        const bool branch_taken_0x21d980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D980u;
        // 0x21d984: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d980) {
            ctx->pc = 0x21E264u;
            goto label_21e264;
        }
    }
    ctx->pc = 0x21D988u;
label_21d988:
    // 0x21d988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d98c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21D98Cu;
    SET_GPR_U32(ctx, 31, 0x21D994u);
    ctx->pc = 0x21D990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D98Cu;
    // 0x21d990: 0x24a51998  addiu       $a1, $a1, 0x1998 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21D98Cu, 0x21D994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D994u;
label_21d994:
    // 0x21d994: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d998: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21D998u;
    {
        const bool branch_taken_0x21d998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D998u;
        // 0x21d99c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d998) {
            ctx->pc = 0x21D9A8u;
            goto label_21d9a8;
        }
    }
    ctx->pc = 0x21D9A0u;
    // 0x21d9a0: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x21D9A0u;
    {
        const bool branch_taken_0x21d9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D9A0u;
        // 0x21d9a4: 0x8e2200b0  lw          $v0, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d9a0) {
            ctx->pc = 0x21DDD8u;
            goto label_21ddd8;
        }
    }
    ctx->pc = 0x21D9A8u;
label_21d9a8:
    // 0x21d9a8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21d9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21d9ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d9b0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21D9B0u;
    SET_GPR_U32(ctx, 31, 0x21D9B8u);
    ctx->pc = 0x21D9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D9B0u;
    // 0x21d9b4: 0x24a519a8  addiu       $a1, $a1, 0x19A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21D9B0u, 0x21D9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D9B8u;
label_21d9b8:
    // 0x21d9b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d9bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21D9BCu;
    {
        const bool branch_taken_0x21d9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D9BCu;
        // 0x21d9c0: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d9bc) {
            ctx->pc = 0x21D9CCu;
            goto label_21d9cc;
        }
    }
    ctx->pc = 0x21D9C4u;
    // 0x21d9c4: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x21D9C4u;
    {
        const bool branch_taken_0x21d9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D9C4u;
        // 0x21d9c8: 0x8e2200b0  lw          $v0, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d9c4) {
            ctx->pc = 0x21DDD8u;
            goto label_21ddd8;
        }
    }
    ctx->pc = 0x21D9CCu;
label_21d9cc:
    // 0x21d9cc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21d9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21d9d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d9d4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21D9D4u;
    SET_GPR_U32(ctx, 31, 0x21D9DCu);
    ctx->pc = 0x21D9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D9D4u;
    // 0x21d9d8: 0x24a519b8  addiu       $a1, $a1, 0x19B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21D9D4u, 0x21D9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D9DCu;
label_21d9dc:
    // 0x21d9dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d9e0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21D9E0u;
    {
        const bool branch_taken_0x21d9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d9e0) {
            ctx->pc = 0x21D9E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D9E0u;
            // 0x21d9e4: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D9F8u;
            goto label_21d9f8;
        }
    }
    ctx->pc = 0x21D9E8u;
    // 0x21d9e8: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x21d9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x21d9ec: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x21d9ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x21d9f0: 0x1000021c  b           . + 4 + (0x21C << 2)
    ctx->pc = 0x21D9F0u;
    {
        const bool branch_taken_0x21d9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D9F0u;
        // 0x21d9f4: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d9f0) {
            ctx->pc = 0x21E264u;
            goto label_21e264;
        }
    }
    ctx->pc = 0x21D9F8u;
label_21d9f8:
    // 0x21d9f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d9fc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21D9FCu;
    SET_GPR_U32(ctx, 31, 0x21DA04u);
    ctx->pc = 0x21DA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D9FCu;
    // 0x21da00: 0x24a519c8  addiu       $a1, $a1, 0x19C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21D9FCu, 0x21DA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DA04u;
label_21da04:
    // 0x21da04: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21da04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21da08: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21DA08u;
    {
        const bool branch_taken_0x21da08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21da08) {
            ctx->pc = 0x21DA0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DA08u;
            // 0x21da0c: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DA20u;
            goto label_21da20;
        }
    }
    ctx->pc = 0x21DA10u;
    // 0x21da10: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x21da10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x21da14: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x21da14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x21da18: 0x10000212  b           . + 4 + (0x212 << 2)
    ctx->pc = 0x21DA18u;
    {
        const bool branch_taken_0x21da18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA18u;
        // 0x21da1c: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da18) {
            ctx->pc = 0x21E264u;
            goto label_21e264;
        }
    }
    ctx->pc = 0x21DA20u;
label_21da20:
    // 0x21da20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21da20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21da24: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21DA24u;
    SET_GPR_U32(ctx, 31, 0x21DA2Cu);
    ctx->pc = 0x21DA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DA24u;
    // 0x21da28: 0x24a519d8  addiu       $a1, $a1, 0x19D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21DA24u, 0x21DA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DA2Cu;
label_21da2c:
    // 0x21da2c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21da2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21da30: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21DA30u;
    {
        const bool branch_taken_0x21da30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21da30) {
            ctx->pc = 0x21DA34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DA30u;
            // 0x21da34: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DA48u;
            goto label_21da48;
        }
    }
    ctx->pc = 0x21DA38u;
    // 0x21da38: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x21da38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x21da3c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x21da3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x21da40: 0x10000208  b           . + 4 + (0x208 << 2)
    ctx->pc = 0x21DA40u;
    {
        const bool branch_taken_0x21da40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA40u;
        // 0x21da44: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da40) {
            ctx->pc = 0x21E264u;
            goto label_21e264;
        }
    }
    ctx->pc = 0x21DA48u;
label_21da48:
    // 0x21da48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21da48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21da4c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21DA4Cu;
    SET_GPR_U32(ctx, 31, 0x21DA54u);
    ctx->pc = 0x21DA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DA4Cu;
    // 0x21da50: 0x24a519e8  addiu       $a1, $a1, 0x19E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21DA4Cu, 0x21DA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DA54u;
label_21da54:
    // 0x21da54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21da54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21da58: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21DA58u;
    {
        const bool branch_taken_0x21da58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21da58) {
            ctx->pc = 0x21DA5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DA58u;
            // 0x21da5c: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DA70u;
            goto label_21da70;
        }
    }
    ctx->pc = 0x21DA60u;
    // 0x21da60: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x21da60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x21da64: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x21da64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x21da68: 0x100001fe  b           . + 4 + (0x1FE << 2)
    ctx->pc = 0x21DA68u;
    {
        const bool branch_taken_0x21da68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA68u;
        // 0x21da6c: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da68) {
            ctx->pc = 0x21E264u;
            goto label_21e264;
        }
    }
    ctx->pc = 0x21DA70u;
label_21da70:
    // 0x21da70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21da70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21da74: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21DA74u;
    SET_GPR_U32(ctx, 31, 0x21DA7Cu);
    ctx->pc = 0x21DA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DA74u;
    // 0x21da78: 0x24a519f8  addiu       $a1, $a1, 0x19F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21DA74u, 0x21DA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DA7Cu;
label_21da7c:
    // 0x21da7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21da7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21da80: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21DA80u;
    {
        const bool branch_taken_0x21da80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21da80) {
            ctx->pc = 0x21DA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DA80u;
            // 0x21da84: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DA98u;
            goto label_21da98;
        }
    }
    ctx->pc = 0x21DA88u;
    // 0x21da88: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x21da88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x21da8c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x21da8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x21da90: 0x100001f4  b           . + 4 + (0x1F4 << 2)
    ctx->pc = 0x21DA90u;
    {
        const bool branch_taken_0x21da90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DA90u;
        // 0x21da94: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21da90) {
            ctx->pc = 0x21E264u;
            goto label_21e264;
        }
    }
    ctx->pc = 0x21DA98u;
label_21da98:
    // 0x21da98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21da98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21da9c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21DA9Cu;
    SET_GPR_U32(ctx, 31, 0x21DAA4u);
    ctx->pc = 0x21DAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DA9Cu;
    // 0x21daa0: 0x24a51a08  addiu       $a1, $a1, 0x1A08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21DA9Cu, 0x21DAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DAA4u;
label_21daa4:
    // 0x21daa4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21daa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21daa8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21DAA8u;
    {
        const bool branch_taken_0x21daa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DAA8u;
        // 0x21daac: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21daa8) {
            ctx->pc = 0x21DAB8u;
            goto label_21dab8;
        }
    }
    ctx->pc = 0x21DAB0u;
    // 0x21dab0: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x21DAB0u;
    {
        const bool branch_taken_0x21dab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DAB0u;
        // 0x21dab4: 0x8e2200b0  lw          $v0, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dab0) {
            ctx->pc = 0x21DDD8u;
            goto label_21ddd8;
        }
    }
    ctx->pc = 0x21DAB8u;
label_21dab8:
    // 0x21dab8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21dab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21dabc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21dabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dac0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21DAC0u;
    SET_GPR_U32(ctx, 31, 0x21DAC8u);
    ctx->pc = 0x21DAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DAC0u;
    // 0x21dac4: 0x24a51a18  addiu       $a1, $a1, 0x1A18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21DAC0u, 0x21DAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DAC8u;
label_21dac8:
    // 0x21dac8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21dac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21dacc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21DACCu;
    {
        const bool branch_taken_0x21dacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DACCu;
        // 0x21dad0: 0x3c030008  lui         $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dacc) {
            ctx->pc = 0x21DADCu;
            goto label_21dadc;
        }
    }
    ctx->pc = 0x21DAD4u;
    // 0x21dad4: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x21DAD4u;
    {
        const bool branch_taken_0x21dad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DAD4u;
        // 0x21dad8: 0x8e2200b0  lw          $v0, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dad4) {
            ctx->pc = 0x21DDD8u;
            goto label_21ddd8;
        }
    }
    ctx->pc = 0x21DADCu;
label_21dadc:
    // 0x21dadc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21dadcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21dae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21dae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dae4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21DAE4u;
    SET_GPR_U32(ctx, 31, 0x21DAECu);
    ctx->pc = 0x21DAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DAE4u;
    // 0x21dae8: 0x24a51a28  addiu       $a1, $a1, 0x1A28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21DAE4u, 0x21DAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DAECu;
label_21daec:
    // 0x21daec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21daecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21daf0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21DAF0u;
    {
        const bool branch_taken_0x21daf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21daf0) {
            ctx->pc = 0x21DAF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DAF0u;
            // 0x21daf4: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DB08u;
            goto label_21db08;
        }
    }
    ctx->pc = 0x21DAF8u;
    // 0x21daf8: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x21daf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x21dafc: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x21dafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x21db00: 0x100001d8  b           . + 4 + (0x1D8 << 2)
    ctx->pc = 0x21DB00u;
    {
        const bool branch_taken_0x21db00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB00u;
        // 0x21db04: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21db00) {
            ctx->pc = 0x21E264u;
            goto label_21e264;
        }
    }
    ctx->pc = 0x21DB08u;
label_21db08:
    // 0x21db08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21db08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21db0c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21DB0Cu;
    SET_GPR_U32(ctx, 31, 0x21DB14u);
    ctx->pc = 0x21DB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DB0Cu;
    // 0x21db10: 0x24a51a40  addiu       $a1, $a1, 0x1A40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21DB0Cu, 0x21DB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DB14u;
label_21db14:
    // 0x21db14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21db14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21db18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21DB18u;
    {
        const bool branch_taken_0x21db18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB18u;
        // 0x21db1c: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21db18) {
            ctx->pc = 0x21DB28u;
            goto label_21db28;
        }
    }
    ctx->pc = 0x21DB20u;
    // 0x21db20: 0x100000ad  b           . + 4 + (0xAD << 2)
    ctx->pc = 0x21DB20u;
    {
        const bool branch_taken_0x21db20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB20u;
        // 0x21db24: 0x8e2200b0  lw          $v0, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21db20) {
            ctx->pc = 0x21DDD8u;
            goto label_21ddd8;
        }
    }
    ctx->pc = 0x21DB28u;
label_21db28:
    // 0x21db28: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21db28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21db2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21db2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21db30: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21DB30u;
    SET_GPR_U32(ctx, 31, 0x21DB38u);
    ctx->pc = 0x21DB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DB30u;
    // 0x21db34: 0x24a51a50  addiu       $a1, $a1, 0x1A50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21DB30u, 0x21DB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DB38u;
label_21db38:
    // 0x21db38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21db38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21db3c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21DB3Cu;
    {
        const bool branch_taken_0x21db3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB3Cu;
        // 0x21db40: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21db3c) {
            ctx->pc = 0x21DB4Cu;
            goto label_21db4c;
        }
    }
    ctx->pc = 0x21DB44u;
    // 0x21db44: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x21DB44u;
    {
        const bool branch_taken_0x21db44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB44u;
        // 0x21db48: 0x8e2200b0  lw          $v0, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21db44) {
            ctx->pc = 0x21DDD8u;
            goto label_21ddd8;
        }
    }
    ctx->pc = 0x21DB4Cu;
label_21db4c:
    // 0x21db4c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21db4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21db50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21db50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21db54: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21DB54u;
    SET_GPR_U32(ctx, 31, 0x21DB5Cu);
    ctx->pc = 0x21DB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DB54u;
    // 0x21db58: 0x24a51a60  addiu       $a1, $a1, 0x1A60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21DB54u, 0x21DB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DB5Cu;
label_21db5c:
    // 0x21db5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21db5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21db60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21DB60u;
    {
        const bool branch_taken_0x21db60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB60u;
        // 0x21db64: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21db60) {
            ctx->pc = 0x21DB70u;
            goto label_21db70;
        }
    }
    ctx->pc = 0x21DB68u;
    // 0x21db68: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x21DB68u;
    {
        const bool branch_taken_0x21db68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB68u;
        // 0x21db6c: 0x8e2200b0  lw          $v0, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21db68) {
            ctx->pc = 0x21DDD8u;
            goto label_21ddd8;
        }
    }
    ctx->pc = 0x21DB70u;
label_21db70:
    // 0x21db70: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21db70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21db74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21db74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21db78: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21DB78u;
    SET_GPR_U32(ctx, 31, 0x21DB80u);
    ctx->pc = 0x21DB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DB78u;
    // 0x21db7c: 0x24a51a70  addiu       $a1, $a1, 0x1A70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21DB78u, 0x21DB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DB80u;
label_21db80:
    // 0x21db80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21db80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21db84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21DB84u;
    {
        const bool branch_taken_0x21db84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB84u;
        // 0x21db88: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21db84) {
            ctx->pc = 0x21DB94u;
            goto label_21db94;
        }
    }
    ctx->pc = 0x21DB8Cu;
    // 0x21db8c: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x21DB8Cu;
    {
        const bool branch_taken_0x21db8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DB8Cu;
        // 0x21db90: 0x8e2200b0  lw          $v0, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21db8c) {
            ctx->pc = 0x21DDD8u;
            goto label_21ddd8;
        }
    }
    ctx->pc = 0x21DB94u;
label_21db94:
    // 0x21db94: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21db94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21db98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21db98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21db9c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21DB9Cu;
    SET_GPR_U32(ctx, 31, 0x21DBA4u);
    ctx->pc = 0x21DBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DB9Cu;
    // 0x21dba0: 0x24a51a88  addiu       $a1, $a1, 0x1A88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21DB9Cu, 0x21DBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DBA4u;
label_21dba4:
    // 0x21dba4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21dba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21dba8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21DBA8u;
    {
        const bool branch_taken_0x21dba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21dba8) {
            ctx->pc = 0x21DBACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DBA8u;
            // 0x21dbac: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DBC0u;
            goto label_21dbc0;
        }
    }
    ctx->pc = 0x21DBB0u;
    // 0x21dbb0: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x21dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x21dbb4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x21dbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x21dbb8: 0x100001aa  b           . + 4 + (0x1AA << 2)
    ctx->pc = 0x21DBB8u;
    {
        const bool branch_taken_0x21dbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DBB8u;
        // 0x21dbbc: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dbb8) {
            ctx->pc = 0x21E264u;
            goto label_21e264;
        }
    }
    ctx->pc = 0x21DBC0u;
label_21dbc0:
    // 0x21dbc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21dbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dbc4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21DBC4u;
    SET_GPR_U32(ctx, 31, 0x21DBCCu);
    ctx->pc = 0x21DBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DBC4u;
    // 0x21dbc8: 0x24a51a98  addiu       $a1, $a1, 0x1A98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21DBC4u, 0x21DBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DBCCu;
label_21dbcc:
    // 0x21dbcc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21dbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21dbd0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21DBD0u;
    {
        const bool branch_taken_0x21dbd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DBD0u;
        // 0x21dbd4: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dbd0) {
            ctx->pc = 0x21DBE0u;
            goto label_21dbe0;
        }
    }
    ctx->pc = 0x21DBD8u;
    // 0x21dbd8: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x21DBD8u;
    {
        const bool branch_taken_0x21dbd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DBD8u;
        // 0x21dbdc: 0x8e2200b0  lw          $v0, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dbd8) {
            ctx->pc = 0x21DDD8u;
            goto label_21ddd8;
        }
    }
    ctx->pc = 0x21DBE0u;
label_21dbe0:
    // 0x21dbe0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21dbe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21dbe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21dbe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dbe8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21DBE8u;
    SET_GPR_U32(ctx, 31, 0x21DBF0u);
    ctx->pc = 0x21DBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DBE8u;
    // 0x21dbec: 0x24a51aa0  addiu       $a1, $a1, 0x1AA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21DBE8u, 0x21DBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DBF0u;
label_21dbf0:
    // 0x21dbf0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21dbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21dbf4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21DBF4u;
    {
        const bool branch_taken_0x21dbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DBF4u;
        // 0x21dbf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dbf4) {
            ctx->pc = 0x21DC0Cu;
            goto label_21dc0c;
        }
    }
    ctx->pc = 0x21DBFCu;
    // 0x21dbfc: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21DBFCu;
    SET_GPR_U32(ctx, 31, 0x21DC04u);
    ctx->pc = 0x21DC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DBFCu;
    // 0x21dc00: 0x26250170  addiu       $a1, $s1, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21DBFCu, 0x21DC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DC04u;
label_21dc04:
    // 0x21dc04: 0x10000198  b           . + 4 + (0x198 << 2)
    ctx->pc = 0x21DC04u;
    {
        const bool branch_taken_0x21dc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC04u;
        // 0x21dc08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dc04) {
            ctx->pc = 0x21E268u;
            goto label_21e268;
        }
    }
    ctx->pc = 0x21DC0Cu;
label_21dc0c:
    // 0x21dc0c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21dc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21dc10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21dc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dc14: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21DC14u;
    SET_GPR_U32(ctx, 31, 0x21DC1Cu);
    ctx->pc = 0x21DC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DC14u;
    // 0x21dc18: 0x24a51ac8  addiu       $a1, $a1, 0x1AC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21DC14u, 0x21DC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DC1Cu;
label_21dc1c:
    // 0x21dc1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21dc1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21dc20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21DC20u;
    {
        const bool branch_taken_0x21dc20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC20u;
        // 0x21dc24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dc20) {
            ctx->pc = 0x21DC38u;
            goto label_21dc38;
        }
    }
    ctx->pc = 0x21DC28u;
    // 0x21dc28: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21DC28u;
    SET_GPR_U32(ctx, 31, 0x21DC30u);
    ctx->pc = 0x21DC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DC28u;
    // 0x21dc2c: 0x26250174  addiu       $a1, $s1, 0x174 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 372));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21DC28u, 0x21DC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DC30u;
label_21dc30:
    // 0x21dc30: 0x1000018d  b           . + 4 + (0x18D << 2)
    ctx->pc = 0x21DC30u;
    {
        const bool branch_taken_0x21dc30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC30u;
        // 0x21dc34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dc30) {
            ctx->pc = 0x21E268u;
            goto label_21e268;
        }
    }
    ctx->pc = 0x21DC38u;
label_21dc38:
    // 0x21dc38: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21dc38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21dc3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21dc3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dc40: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21DC40u;
    SET_GPR_U32(ctx, 31, 0x21DC48u);
    ctx->pc = 0x21DC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DC40u;
    // 0x21dc44: 0x24a51ae0  addiu       $a1, $a1, 0x1AE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21DC40u, 0x21DC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DC48u;
label_21dc48:
    // 0x21dc48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21dc48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21dc4c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21DC4Cu;
    {
        const bool branch_taken_0x21dc4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21dc4c) {
            ctx->pc = 0x21DC50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DC4Cu;
            // 0x21dc50: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DC64u;
            goto label_21dc64;
        }
    }
    ctx->pc = 0x21DC54u;
    // 0x21dc54: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x21dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x21dc58: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x21dc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x21dc5c: 0x10000181  b           . + 4 + (0x181 << 2)
    ctx->pc = 0x21DC5Cu;
    {
        const bool branch_taken_0x21dc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC5Cu;
        // 0x21dc60: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dc5c) {
            ctx->pc = 0x21E264u;
            goto label_21e264;
        }
    }
    ctx->pc = 0x21DC64u;
label_21dc64:
    // 0x21dc64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21dc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dc68: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21DC68u;
    SET_GPR_U32(ctx, 31, 0x21DC70u);
    ctx->pc = 0x21DC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DC68u;
    // 0x21dc6c: 0x24a51ae8  addiu       $a1, $a1, 0x1AE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21DC68u, 0x21DC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DC70u;
label_21dc70:
    // 0x21dc70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21dc70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21dc74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21DC74u;
    {
        const bool branch_taken_0x21dc74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC74u;
        // 0x21dc78: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dc74) {
            ctx->pc = 0x21DC84u;
            goto label_21dc84;
        }
    }
    ctx->pc = 0x21DC7Cu;
    // 0x21dc7c: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x21DC7Cu;
    {
        const bool branch_taken_0x21dc7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DC7Cu;
        // 0x21dc80: 0x8e2200b0  lw          $v0, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dc7c) {
            ctx->pc = 0x21DDD8u;
            goto label_21ddd8;
        }
    }
    ctx->pc = 0x21DC84u;
label_21dc84:
    // 0x21dc84: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21dc84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21dc88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21dc88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dc8c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21DC8Cu;
    SET_GPR_U32(ctx, 31, 0x21DC94u);
    ctx->pc = 0x21DC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DC8Cu;
    // 0x21dc90: 0x24a51af8  addiu       $a1, $a1, 0x1AF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21DC8Cu, 0x21DC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DC94u;
label_21dc94:
    // 0x21dc94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21dc94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21dc98: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21DC98u;
    {
        const bool branch_taken_0x21dc98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21dc98) {
            ctx->pc = 0x21DC9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DC98u;
            // 0x21dc9c: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DCB0u;
            goto label_21dcb0;
        }
    }
    ctx->pc = 0x21DCA0u;
    // 0x21dca0: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x21dca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x21dca4: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x21dca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x21dca8: 0x1000016e  b           . + 4 + (0x16E << 2)
    ctx->pc = 0x21DCA8u;
    {
        const bool branch_taken_0x21dca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DCA8u;
        // 0x21dcac: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dca8) {
            ctx->pc = 0x21E264u;
            goto label_21e264;
        }
    }
    ctx->pc = 0x21DCB0u;
label_21dcb0:
    // 0x21dcb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21dcb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dcb4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21DCB4u;
    SET_GPR_U32(ctx, 31, 0x21DCBCu);
    ctx->pc = 0x21DCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DCB4u;
    // 0x21dcb8: 0x24a51b08  addiu       $a1, $a1, 0x1B08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21DCB4u, 0x21DCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DCBCu;
label_21dcbc:
    // 0x21dcbc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21dcbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21dcc0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x21DCC0u;
    {
        const bool branch_taken_0x21dcc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21dcc0) {
            ctx->pc = 0x21DCC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DCC0u;
            // 0x21dcc4: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DCD8u;
            goto label_21dcd8;
        }
    }
    ctx->pc = 0x21DCC8u;
    // 0x21dcc8: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x21dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x21dccc: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x21dcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x21dcd0: 0x10000164  b           . + 4 + (0x164 << 2)
    ctx->pc = 0x21DCD0u;
    {
        const bool branch_taken_0x21dcd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DCD0u;
        // 0x21dcd4: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dcd0) {
            ctx->pc = 0x21E264u;
            goto label_21e264;
        }
    }
    ctx->pc = 0x21DCD8u;
label_21dcd8:
    // 0x21dcd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21dcd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dcdc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21DCDCu;
    SET_GPR_U32(ctx, 31, 0x21DCE4u);
    ctx->pc = 0x21DCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DCDCu;
    // 0x21dce0: 0x24a51b18  addiu       $a1, $a1, 0x1B18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21DCDCu, 0x21DCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DCE4u;
label_21dce4:
    // 0x21dce4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21dce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21dce8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x21DCE8u;
    {
        const bool branch_taken_0x21dce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DCE8u;
        // 0x21dcec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dce8) {
            ctx->pc = 0x21DD44u;
            goto label_21dd44;
        }
    }
    ctx->pc = 0x21DCF0u;
    // 0x21dcf0: 0x27b00260  addiu       $s0, $sp, 0x260
    ctx->pc = 0x21dcf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x21dcf4: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x21dcf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x21dcf8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21dcf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dcfc: 0xc09e06e  jal         func_2781B8
    ctx->pc = 0x21DCFCu;
    SET_GPR_U32(ctx, 31, 0x21DD04u);
    ctx->pc = 0x21DD00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DCFCu;
    // 0x21dd00: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2781B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2781B8u, 0x21DCFCu, 0x21DD04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DD04u;
label_21dd04:
    // 0x21dd04: 0xc08670c  jal         func_219C30
    ctx->pc = 0x21DD04u;
    SET_GPR_U32(ctx, 31, 0x21DD0Cu);
    ctx->pc = 0x21DD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DD04u;
    // 0x21dd08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x219C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x219C30u, 0x21DD04u, 0x21DD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DD0Cu;
label_21dd0c:
    // 0x21dd0c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x21dd0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dd10: 0x12400155  beqz        $s2, . + 4 + (0x155 << 2)
    ctx->pc = 0x21DD10u;
    {
        const bool branch_taken_0x21dd10 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD10u;
        // 0x21dd14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd10) {
            ctx->pc = 0x21E268u;
            goto label_21e268;
        }
    }
    ctx->pc = 0x21DD18u;
    // 0x21dd18: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x21DD18u;
    SET_GPR_U32(ctx, 31, 0x21DD20u);
    ctx->pc = 0x21DD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DD18u;
    // 0x21dd1c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x21DD18u, 0x21DD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DD20u;
label_21dd20:
    // 0x21dd20: 0x8e23018c  lw          $v1, 0x18C($s1)
    ctx->pc = 0x21dd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 396)));
    // 0x21dd24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21dd24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dd28: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x21dd28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dd2c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x21dd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x21dd30: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x21DD30u;
    SET_GPR_U32(ctx, 31, 0x21DD38u);
    ctx->pc = 0x21DD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DD30u;
    // 0x21dd34: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x21DD30u, 0x21DD38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DD38u;
label_21dd38:
    // 0x21dd38: 0xae30018c  sw          $s0, 0x18C($s1)
    ctx->pc = 0x21dd38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 396), GPR_U32(ctx, 16));
    // 0x21dd3c: 0x10000149  b           . + 4 + (0x149 << 2)
    ctx->pc = 0x21DD3Cu;
    {
        const bool branch_taken_0x21dd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD3Cu;
        // 0x21dd40: 0xae12000c  sw          $s2, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd3c) {
            ctx->pc = 0x21E264u;
            goto label_21e264;
        }
    }
    ctx->pc = 0x21DD44u;
label_21dd44:
    // 0x21dd44: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21dd44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21dd48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21dd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dd4c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21DD4Cu;
    SET_GPR_U32(ctx, 31, 0x21DD54u);
    ctx->pc = 0x21DD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DD4Cu;
    // 0x21dd50: 0x24a51b28  addiu       $a1, $a1, 0x1B28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21DD4Cu, 0x21DD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DD54u;
label_21dd54:
    // 0x21dd54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21dd54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21dd58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21DD58u;
    {
        const bool branch_taken_0x21dd58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD58u;
        // 0x21dd5c: 0x3c030100  lui         $v1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd58) {
            ctx->pc = 0x21DD68u;
            goto label_21dd68;
        }
    }
    ctx->pc = 0x21DD60u;
    // 0x21dd60: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x21DD60u;
    {
        const bool branch_taken_0x21dd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD60u;
        // 0x21dd64: 0x8e2200b0  lw          $v0, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd60) {
            ctx->pc = 0x21DDD8u;
            goto label_21ddd8;
        }
    }
    ctx->pc = 0x21DD68u;
label_21dd68:
    // 0x21dd68: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21dd68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21dd6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21dd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dd70: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21DD70u;
    SET_GPR_U32(ctx, 31, 0x21DD78u);
    ctx->pc = 0x21DD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DD70u;
    // 0x21dd74: 0x24a51b30  addiu       $a1, $a1, 0x1B30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21DD70u, 0x21DD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DD78u;
label_21dd78:
    // 0x21dd78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21dd78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21dd7c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21DD7Cu;
    {
        const bool branch_taken_0x21dd7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD7Cu;
        // 0x21dd80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd7c) {
            ctx->pc = 0x21DD94u;
            goto label_21dd94;
        }
    }
    ctx->pc = 0x21DD84u;
    // 0x21dd84: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21DD84u;
    SET_GPR_U32(ctx, 31, 0x21DD8Cu);
    ctx->pc = 0x21DD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DD84u;
    // 0x21dd88: 0x26250178  addiu       $a1, $s1, 0x178 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21DD84u, 0x21DD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DD8Cu;
label_21dd8c:
    // 0x21dd8c: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x21DD8Cu;
    {
        const bool branch_taken_0x21dd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DD8Cu;
        // 0x21dd90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dd8c) {
            ctx->pc = 0x21E268u;
            goto label_21e268;
        }
    }
    ctx->pc = 0x21DD94u;
label_21dd94:
    // 0x21dd94: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21dd94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21dd98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21dd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dd9c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21DD9Cu;
    SET_GPR_U32(ctx, 31, 0x21DDA4u);
    ctx->pc = 0x21DDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DD9Cu;
    // 0x21dda0: 0x24a51b40  addiu       $a1, $a1, 0x1B40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21DD9Cu, 0x21DDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DDA4u;
label_21dda4:
    // 0x21dda4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21dda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21dda8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21DDA8u;
    {
        const bool branch_taken_0x21dda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDA8u;
        // 0x21ddac: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dda8) {
            ctx->pc = 0x21DDB8u;
            goto label_21ddb8;
        }
    }
    ctx->pc = 0x21DDB0u;
    // 0x21ddb0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x21DDB0u;
    {
        const bool branch_taken_0x21ddb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDB0u;
        // 0x21ddb4: 0x8e2200b0  lw          $v0, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ddb0) {
            ctx->pc = 0x21DDD8u;
            goto label_21ddd8;
        }
    }
    ctx->pc = 0x21DDB8u;
label_21ddb8:
    // 0x21ddb8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21ddb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21ddbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ddbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ddc0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21DDC0u;
    SET_GPR_U32(ctx, 31, 0x21DDC8u);
    ctx->pc = 0x21DDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DDC0u;
    // 0x21ddc4: 0x24a51b50  addiu       $a1, $a1, 0x1B50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21DDC0u, 0x21DDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DDC8u;
label_21ddc8:
    // 0x21ddc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21ddc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21ddcc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21DDCCu;
    {
        const bool branch_taken_0x21ddcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDCCu;
        // 0x21ddd0: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ddcc) {
            ctx->pc = 0x21DDE4u;
            goto label_21dde4;
        }
    }
    ctx->pc = 0x21DDD4u;
    // 0x21ddd4: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x21ddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_21ddd8:
    // 0x21ddd8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x21ddd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x21dddc: 0x10000121  b           . + 4 + (0x121 << 2)
    ctx->pc = 0x21DDDCu;
    {
        const bool branch_taken_0x21dddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDDCu;
        // 0x21dde0: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dddc) {
            ctx->pc = 0x21E264u;
            goto label_21e264;
        }
    }
    ctx->pc = 0x21DDE4u;
label_21dde4:
    // 0x21dde4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21dde4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21dde8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21dde8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ddec: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21DDECu;
    SET_GPR_U32(ctx, 31, 0x21DDF4u);
    ctx->pc = 0x21DDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DDECu;
    // 0x21ddf0: 0x24a51b60  addiu       $a1, $a1, 0x1B60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21DDECu, 0x21DDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DDF4u;
label_21ddf4:
    // 0x21ddf4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21ddf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21ddf8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21DDF8u;
    {
        const bool branch_taken_0x21ddf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DDF8u;
        // 0x21ddfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ddf8) {
            ctx->pc = 0x21DE18u;
            goto label_21de18;
        }
    }
    ctx->pc = 0x21DE00u;
    // 0x21de00: 0x262700c8  addiu       $a3, $s1, 0xC8
    ctx->pc = 0x21de00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
    // 0x21de04: 0x262500c0  addiu       $a1, $s1, 0xC0
    ctx->pc = 0x21de04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x21de08: 0xc09df62  jal         func_277D88
    ctx->pc = 0x21DE08u;
    SET_GPR_U32(ctx, 31, 0x21DE10u);
    ctx->pc = 0x21DE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DE08u;
    // 0x21de0c: 0x262600c4  addiu       $a2, $s1, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x21DE08u, 0x21DE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DE10u;
label_21de10:
    // 0x21de10: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x21DE10u;
    {
        const bool branch_taken_0x21de10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE10u;
        // 0x21de14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21de10) {
            ctx->pc = 0x21E268u;
            goto label_21e268;
        }
    }
    ctx->pc = 0x21DE18u;
label_21de18:
    // 0x21de18: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21de18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21de1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21de1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21de20: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21DE20u;
    SET_GPR_U32(ctx, 31, 0x21DE28u);
    ctx->pc = 0x21DE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DE20u;
    // 0x21de24: 0x24a51b70  addiu       $a1, $a1, 0x1B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21DE20u, 0x21DE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DE28u;
label_21de28:
    // 0x21de28: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21de28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21de2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21DE2Cu;
    {
        const bool branch_taken_0x21de2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE2Cu;
        // 0x21de30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21de2c) {
            ctx->pc = 0x21DE44u;
            goto label_21de44;
        }
    }
    ctx->pc = 0x21DE34u;
    // 0x21de34: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21DE34u;
    SET_GPR_U32(ctx, 31, 0x21DE3Cu);
    ctx->pc = 0x21DE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DE34u;
    // 0x21de38: 0x262500ac  addiu       $a1, $s1, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21DE34u, 0x21DE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DE3Cu;
label_21de3c:
    // 0x21de3c: 0x1000010a  b           . + 4 + (0x10A << 2)
    ctx->pc = 0x21DE3Cu;
    {
        const bool branch_taken_0x21de3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE3Cu;
        // 0x21de40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21de3c) {
            ctx->pc = 0x21E268u;
            goto label_21e268;
        }
    }
    ctx->pc = 0x21DE44u;
label_21de44:
    // 0x21de44: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21de44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21de48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21de48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21de4c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21DE4Cu;
    SET_GPR_U32(ctx, 31, 0x21DE54u);
    ctx->pc = 0x21DE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DE4Cu;
    // 0x21de50: 0x24a51b80  addiu       $a1, $a1, 0x1B80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21DE4Cu, 0x21DE54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DE54u;
label_21de54:
    // 0x21de54: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21de54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21de58: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21DE58u;
    {
        const bool branch_taken_0x21de58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE58u;
        // 0x21de5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21de58) {
            ctx->pc = 0x21DE74u;
            goto label_21de74;
        }
    }
    ctx->pc = 0x21DE60u;
    // 0x21de60: 0xc09e056  jal         func_278158
    ctx->pc = 0x21DE60u;
    SET_GPR_U32(ctx, 31, 0x21DE68u);
    ctx->pc = 0x21DE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DE60u;
    // 0x21de64: 0x27a50464  addiu       $a1, $sp, 0x464 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x21DE60u, 0x21DE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DE68u;
label_21de68:
    // 0x21de68: 0x8fa20464  lw          $v0, 0x464($sp)
    ctx->pc = 0x21de68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1124)));
    // 0x21de6c: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x21DE6Cu;
    {
        const bool branch_taken_0x21de6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE6Cu;
        // 0x21de70: 0xae2200a4  sw          $v0, 0xA4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21de6c) {
            ctx->pc = 0x21E264u;
            goto label_21e264;
        }
    }
    ctx->pc = 0x21DE74u;
label_21de74:
    // 0x21de74: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21de74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21de78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21de78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21de7c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21DE7Cu;
    SET_GPR_U32(ctx, 31, 0x21DE84u);
    ctx->pc = 0x21DE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DE7Cu;
    // 0x21de80: 0x24a51b90  addiu       $a1, $a1, 0x1B90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21DE7Cu, 0x21DE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DE84u;
label_21de84:
    // 0x21de84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21de84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21de88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21DE88u;
    {
        const bool branch_taken_0x21de88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE88u;
        // 0x21de8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21de88) {
            ctx->pc = 0x21DEA0u;
            goto label_21dea0;
        }
    }
    ctx->pc = 0x21DE90u;
    // 0x21de90: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21DE90u;
    SET_GPR_U32(ctx, 31, 0x21DE98u);
    ctx->pc = 0x21DE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DE90u;
    // 0x21de94: 0x26250100  addiu       $a1, $s1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21DE90u, 0x21DE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DE98u;
label_21de98:
    // 0x21de98: 0x100000f3  b           . + 4 + (0xF3 << 2)
    ctx->pc = 0x21DE98u;
    {
        const bool branch_taken_0x21de98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DE98u;
        // 0x21de9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21de98) {
            ctx->pc = 0x21E268u;
            goto label_21e268;
        }
    }
    ctx->pc = 0x21DEA0u;
label_21dea0:
    // 0x21dea0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21dea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21dea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21dea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dea8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21DEA8u;
    SET_GPR_U32(ctx, 31, 0x21DEB0u);
    ctx->pc = 0x21DEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DEA8u;
    // 0x21deac: 0x24a51ba0  addiu       $a1, $a1, 0x1BA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21DEA8u, 0x21DEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DEB0u;
label_21deb0:
    // 0x21deb0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21deb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21deb4: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x21DEB4u;
    {
        const bool branch_taken_0x21deb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21deb4) {
            ctx->pc = 0x21DEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21DEB4u;
            // 0x21deb8: 0x266518d0  addiu       $a1, $s3, 0x18D0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 6352));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21DF90u;
            goto label_21df90;
        }
    }
    ctx->pc = 0x21DEBCu;
    // 0x21debc: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x21DEBCu;
    SET_GPR_U32(ctx, 31, 0x21DEC4u);
    ctx->pc = 0x21DEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DEBCu;
    // 0x21dec0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x21DEBCu, 0x21DEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DEC4u;
label_21dec4:
    // 0x21dec4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x21dec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dec8: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x21DEC8u;
    SET_GPR_U32(ctx, 31, 0x21DED0u);
    ctx->pc = 0x21DECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DEC8u;
    // 0x21decc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x21DEC8u, 0x21DED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DED0u;
label_21ded0:
    // 0x21ded0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21ded0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21ded4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21ded4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ded8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21DED8u;
    SET_GPR_U32(ctx, 31, 0x21DEE0u);
    ctx->pc = 0x21DEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DED8u;
    // 0x21dedc: 0x24a51bb0  addiu       $a1, $a1, 0x1BB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21DED8u, 0x21DEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DEE0u;
label_21dee0:
    // 0x21dee0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21dee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21dee4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21DEE4u;
    {
        const bool branch_taken_0x21dee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DEE4u;
        // 0x21dee8: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dee4) {
            ctx->pc = 0x21DEF4u;
            goto label_21def4;
        }
    }
    ctx->pc = 0x21DEECu;
    // 0x21deec: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x21DEECu;
    {
        const bool branch_taken_0x21deec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DEECu;
        // 0x21def0: 0xae2000a8  sw          $zero, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21deec) {
            ctx->pc = 0x21E040u;
            goto label_21e040;
        }
    }
    ctx->pc = 0x21DEF4u;
label_21def4:
    // 0x21def4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21def4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21def8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21DEF8u;
    SET_GPR_U32(ctx, 31, 0x21DF00u);
    ctx->pc = 0x21DEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DEF8u;
    // 0x21defc: 0x24a51bc0  addiu       $a1, $a1, 0x1BC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21DEF8u, 0x21DF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DF00u;
label_21df00:
    // 0x21df00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21df00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21df04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21DF04u;
    {
        const bool branch_taken_0x21df04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF04u;
        // 0x21df08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21df04) {
            ctx->pc = 0x21DF14u;
            goto label_21df14;
        }
    }
    ctx->pc = 0x21DF0Cu;
    // 0x21df0c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x21DF0Cu;
    {
        const bool branch_taken_0x21df0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF0Cu;
        // 0x21df10: 0xae2200a8  sw          $v0, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21df0c) {
            ctx->pc = 0x21E040u;
            goto label_21e040;
        }
    }
    ctx->pc = 0x21DF14u;
label_21df14:
    // 0x21df14: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21df14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21df18: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21df18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21df1c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21DF1Cu;
    SET_GPR_U32(ctx, 31, 0x21DF24u);
    ctx->pc = 0x21DF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DF1Cu;
    // 0x21df20: 0x24a51bd0  addiu       $a1, $a1, 0x1BD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21DF1Cu, 0x21DF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DF24u;
label_21df24:
    // 0x21df24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21df24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21df28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21DF28u;
    {
        const bool branch_taken_0x21df28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF28u;
        // 0x21df2c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21df28) {
            ctx->pc = 0x21DF38u;
            goto label_21df38;
        }
    }
    ctx->pc = 0x21DF30u;
    // 0x21df30: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x21DF30u;
    {
        const bool branch_taken_0x21df30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF30u;
        // 0x21df34: 0xae2200a8  sw          $v0, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21df30) {
            ctx->pc = 0x21E040u;
            goto label_21e040;
        }
    }
    ctx->pc = 0x21DF38u;
label_21df38:
    // 0x21df38: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21df38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21df3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21df3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21df40: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21DF40u;
    SET_GPR_U32(ctx, 31, 0x21DF48u);
    ctx->pc = 0x21DF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DF40u;
    // 0x21df44: 0x24a51be0  addiu       $a1, $a1, 0x1BE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21DF40u, 0x21DF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DF48u;
label_21df48:
    // 0x21df48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21df48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21df4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21DF4Cu;
    {
        const bool branch_taken_0x21df4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF4Cu;
        // 0x21df50: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21df4c) {
            ctx->pc = 0x21DF5Cu;
            goto label_21df5c;
        }
    }
    ctx->pc = 0x21DF54u;
    // 0x21df54: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x21DF54u;
    {
        const bool branch_taken_0x21df54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF54u;
        // 0x21df58: 0xae2200a8  sw          $v0, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21df54) {
            ctx->pc = 0x21E040u;
            goto label_21e040;
        }
    }
    ctx->pc = 0x21DF5Cu;
label_21df5c:
    // 0x21df5c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21df5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21df60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21df60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21df64: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21DF64u;
    SET_GPR_U32(ctx, 31, 0x21DF6Cu);
    ctx->pc = 0x21DF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DF64u;
    // 0x21df68: 0x24a51bf0  addiu       $a1, $a1, 0x1BF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21DF64u, 0x21DF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DF6Cu;
label_21df6c:
    // 0x21df6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21df6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21df70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21DF70u;
    {
        const bool branch_taken_0x21df70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF70u;
        // 0x21df74: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21df70) {
            ctx->pc = 0x21DF80u;
            goto label_21df80;
        }
    }
    ctx->pc = 0x21DF78u;
    // 0x21df78: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x21DF78u;
    {
        const bool branch_taken_0x21df78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF78u;
        // 0x21df7c: 0xae2200a8  sw          $v0, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21df78) {
            ctx->pc = 0x21E040u;
            goto label_21e040;
        }
    }
    ctx->pc = 0x21DF80u;
label_21df80:
    // 0x21df80: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21df80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21df84: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x21df84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21df88: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x21DF88u;
    {
        const bool branch_taken_0x21df88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF88u;
        // 0x21df8c: 0x24a51c08  addiu       $a1, $a1, 0x1C08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21df88) {
            ctx->pc = 0x21E038u;
            goto label_21e038;
        }
    }
    ctx->pc = 0x21DF90u;
label_21df90:
    // 0x21df90: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21DF90u;
    SET_GPR_U32(ctx, 31, 0x21DF98u);
    ctx->pc = 0x21DF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DF90u;
    // 0x21df94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21DF90u, 0x21DF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DF98u;
label_21df98:
    // 0x21df98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21df98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21df9c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x21DF9Cu;
    {
        const bool branch_taken_0x21df9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DF9Cu;
        // 0x21dfa0: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21df9c) {
            ctx->pc = 0x21DFE8u;
            goto label_21dfe8;
        }
    }
    ctx->pc = 0x21DFA4u;
    // 0x21dfa4: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x21DFA4u;
    SET_GPR_U32(ctx, 31, 0x21DFACu);
    ctx->pc = 0x21DFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DFA4u;
    // 0x21dfa8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x21DFA4u, 0x21DFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DFACu;
label_21dfac:
    // 0x21dfac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21dfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dfb0: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x21DFB0u;
    SET_GPR_U32(ctx, 31, 0x21DFB8u);
    ctx->pc = 0x21DFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DFB0u;
    // 0x21dfb4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x21DFB0u, 0x21DFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DFB8u;
label_21dfb8:
    // 0x21dfb8: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x21dfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x21dfbc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x21dfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21dfc0: 0xc0c3650  jal         func_30D940
    ctx->pc = 0x21DFC0u;
    SET_GPR_U32(ctx, 31, 0x21DFC8u);
    ctx->pc = 0x21DFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DFC0u;
    // 0x21dfc4: 0x24847ee0  addiu       $a0, $a0, 0x7EE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D940u, 0x21DFC0u, 0x21DFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DFC8u;
label_21dfc8:
    // 0x21dfc8: 0xa6220054  sh          $v0, 0x54($s1)
    ctx->pc = 0x21dfc8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 84), (uint16_t)GPR_U32(ctx, 2));
    // 0x21dfcc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x21dfccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x21dfd0: 0x441001c  bgez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x21DFD0u;
    {
        const bool branch_taken_0x21dfd0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x21DFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DFD0u;
        // 0x21dfd4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dfd0) {
            ctx->pc = 0x21E044u;
            goto label_21e044;
        }
    }
    ctx->pc = 0x21DFD8u;
    // 0x21dfd8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21dfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21dfdc: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x21dfdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21dfe0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x21DFE0u;
    {
        const bool branch_taken_0x21dfe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DFE0u;
        // 0x21dfe4: 0x24a51c28  addiu       $a1, $a1, 0x1C28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dfe0) {
            ctx->pc = 0x21E038u;
            goto label_21e038;
        }
    }
    ctx->pc = 0x21DFE8u;
label_21dfe8:
    // 0x21dfe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21dfe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21dfec: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21DFECu;
    SET_GPR_U32(ctx, 31, 0x21DFF4u);
    ctx->pc = 0x21DFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21DFECu;
    // 0x21dff0: 0x24a51c48  addiu       $a1, $a1, 0x1C48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21DFECu, 0x21DFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DFF4u;
label_21dff4:
    // 0x21dff4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21dff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21dff8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x21DFF8u;
    {
        const bool branch_taken_0x21dff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21DFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21DFF8u;
        // 0x21dffc: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21dff8) {
            ctx->pc = 0x21E054u;
            goto label_21e054;
        }
    }
    ctx->pc = 0x21E000u;
    // 0x21e000: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x21E000u;
    SET_GPR_U32(ctx, 31, 0x21E008u);
    ctx->pc = 0x21E004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E000u;
    // 0x21e004: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x21E000u, 0x21E008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E008u;
label_21e008:
    // 0x21e008: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21e008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e00c: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x21E00Cu;
    SET_GPR_U32(ctx, 31, 0x21E014u);
    ctx->pc = 0x21E010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E00Cu;
    // 0x21e010: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x21E00Cu, 0x21E014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E014u;
label_21e014:
    // 0x21e014: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x21e014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x21e018: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x21e018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e01c: 0xc0b0b82  jal         func_2C2E08
    ctx->pc = 0x21E01Cu;
    SET_GPR_U32(ctx, 31, 0x21E024u);
    ctx->pc = 0x21E020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E01Cu;
    // 0x21e020: 0x24844f20  addiu       $a0, $a0, 0x4F20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2E08u, 0x21E01Cu, 0x21E024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E024u;
label_21e024:
    // 0x21e024: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21E024u;
    {
        const bool branch_taken_0x21e024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E024u;
        // 0x21e028: 0xae220104  sw          $v0, 0x104($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e024) {
            ctx->pc = 0x21E040u;
            goto label_21e040;
        }
    }
    ctx->pc = 0x21E02Cu;
    // 0x21e02c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21e02cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21e030: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x21e030u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21e034: 0x24a51c58  addiu       $a1, $a1, 0x1C58
    ctx->pc = 0x21e034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7256));
label_21e038:
    // 0x21e038: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x21E038u;
    SET_GPR_U32(ctx, 31, 0x21E040u);
    ctx->pc = 0x21E03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E038u;
    // 0x21e03c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x21E038u, 0x21E040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E040u;
label_21e040:
    // 0x21e040: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x21e040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_21e044:
    // 0x21e044: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x21E044u;
    SET_GPR_U32(ctx, 31, 0x21E04Cu);
    ctx->pc = 0x21E048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E044u;
    // 0x21e048: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x21E044u, 0x21E04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E04Cu;
label_21e04c:
    // 0x21e04c: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x21E04Cu;
    {
        const bool branch_taken_0x21e04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E04Cu;
        // 0x21e050: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e04c) {
            ctx->pc = 0x21E268u;
            goto label_21e268;
        }
    }
    ctx->pc = 0x21E054u;
label_21e054:
    // 0x21e054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e058: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21E058u;
    SET_GPR_U32(ctx, 31, 0x21E060u);
    ctx->pc = 0x21E05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E058u;
    // 0x21e05c: 0x24a51c78  addiu       $a1, $a1, 0x1C78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21E058u, 0x21E060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E060u;
label_21e060:
    // 0x21e060: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21e060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21e064: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21E064u;
    {
        const bool branch_taken_0x21e064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E064u;
        // 0x21e068: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e064) {
            ctx->pc = 0x21E07Cu;
            goto label_21e07c;
        }
    }
    ctx->pc = 0x21E06Cu;
    // 0x21e06c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21E06Cu;
    SET_GPR_U32(ctx, 31, 0x21E074u);
    ctx->pc = 0x21E070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E06Cu;
    // 0x21e070: 0x26250138  addiu       $a1, $s1, 0x138 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21E06Cu, 0x21E074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E074u;
label_21e074:
    // 0x21e074: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x21E074u;
    {
        const bool branch_taken_0x21e074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E074u;
        // 0x21e078: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e074) {
            ctx->pc = 0x21E268u;
            goto label_21e268;
        }
    }
    ctx->pc = 0x21E07Cu;
label_21e07c:
    // 0x21e07c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21e07cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21e080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e084: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21E084u;
    SET_GPR_U32(ctx, 31, 0x21E08Cu);
    ctx->pc = 0x21E088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E084u;
    // 0x21e088: 0x24a51c98  addiu       $a1, $a1, 0x1C98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21E084u, 0x21E08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E08Cu;
label_21e08c:
    // 0x21e08c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21e08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21e090: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21E090u;
    {
        const bool branch_taken_0x21e090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E090u;
        // 0x21e094: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e090) {
            ctx->pc = 0x21E0A8u;
            goto label_21e0a8;
        }
    }
    ctx->pc = 0x21E098u;
    // 0x21e098: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21E098u;
    SET_GPR_U32(ctx, 31, 0x21E0A0u);
    ctx->pc = 0x21E09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E098u;
    // 0x21e09c: 0x2625013c  addiu       $a1, $s1, 0x13C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 316));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21E098u, 0x21E0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E0A0u;
label_21e0a0:
    // 0x21e0a0: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x21E0A0u;
    {
        const bool branch_taken_0x21e0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E0A0u;
        // 0x21e0a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e0a0) {
            ctx->pc = 0x21E268u;
            goto label_21e268;
        }
    }
    ctx->pc = 0x21E0A8u;
label_21e0a8:
    // 0x21e0a8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21e0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21e0ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e0b0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21E0B0u;
    SET_GPR_U32(ctx, 31, 0x21E0B8u);
    ctx->pc = 0x21E0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E0B0u;
    // 0x21e0b4: 0x24a51cb8  addiu       $a1, $a1, 0x1CB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21E0B0u, 0x21E0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E0B8u;
label_21e0b8:
    // 0x21e0b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21e0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21e0bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21E0BCu;
    {
        const bool branch_taken_0x21e0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E0BCu;
        // 0x21e0c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e0bc) {
            ctx->pc = 0x21E0D4u;
            goto label_21e0d4;
        }
    }
    ctx->pc = 0x21E0C4u;
    // 0x21e0c4: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21E0C4u;
    SET_GPR_U32(ctx, 31, 0x21E0CCu);
    ctx->pc = 0x21E0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E0C4u;
    // 0x21e0c8: 0x26250144  addiu       $a1, $s1, 0x144 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 324));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21E0C4u, 0x21E0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E0CCu;
label_21e0cc:
    // 0x21e0cc: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x21E0CCu;
    {
        const bool branch_taken_0x21e0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E0CCu;
        // 0x21e0d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e0cc) {
            ctx->pc = 0x21E268u;
            goto label_21e268;
        }
    }
    ctx->pc = 0x21E0D4u;
label_21e0d4:
    // 0x21e0d4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21e0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21e0d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e0dc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21E0DCu;
    SET_GPR_U32(ctx, 31, 0x21E0E4u);
    ctx->pc = 0x21E0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E0DCu;
    // 0x21e0e0: 0x24a51ce0  addiu       $a1, $a1, 0x1CE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21E0DCu, 0x21E0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E0E4u;
label_21e0e4:
    // 0x21e0e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21e0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21e0e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21E0E8u;
    {
        const bool branch_taken_0x21e0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E0E8u;
        // 0x21e0ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e0e8) {
            ctx->pc = 0x21E100u;
            goto label_21e100;
        }
    }
    ctx->pc = 0x21E0F0u;
    // 0x21e0f0: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21E0F0u;
    SET_GPR_U32(ctx, 31, 0x21E0F8u);
    ctx->pc = 0x21E0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E0F0u;
    // 0x21e0f4: 0x26250140  addiu       $a1, $s1, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21E0F0u, 0x21E0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E0F8u;
label_21e0f8:
    // 0x21e0f8: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x21E0F8u;
    {
        const bool branch_taken_0x21e0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E0F8u;
        // 0x21e0fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e0f8) {
            ctx->pc = 0x21E268u;
            goto label_21e268;
        }
    }
    ctx->pc = 0x21E100u;
label_21e100:
    // 0x21e100: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21e100u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21e104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e108: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21E108u;
    SET_GPR_U32(ctx, 31, 0x21E110u);
    ctx->pc = 0x21E10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E108u;
    // 0x21e10c: 0x24a51d00  addiu       $a1, $a1, 0x1D00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21E108u, 0x21E110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E110u;
label_21e110:
    // 0x21e110: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21e110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21e114: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21E114u;
    {
        const bool branch_taken_0x21e114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E114u;
        // 0x21e118: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e114) {
            ctx->pc = 0x21E124u;
            goto label_21e124;
        }
    }
    ctx->pc = 0x21E11Cu;
    // 0x21e11c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x21E11Cu;
    {
        const bool branch_taken_0x21e11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E11Cu;
        // 0x21e120: 0xa2220148  sb          $v0, 0x148($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 328), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e11c) {
            ctx->pc = 0x21E264u;
            goto label_21e264;
        }
    }
    ctx->pc = 0x21E124u;
label_21e124:
    // 0x21e124: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21e124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21e128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e12c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21E12Cu;
    SET_GPR_U32(ctx, 31, 0x21E134u);
    ctx->pc = 0x21E130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E12Cu;
    // 0x21e130: 0x24a51d18  addiu       $a1, $a1, 0x1D18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21E12Cu, 0x21E134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E134u;
label_21e134:
    // 0x21e134: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21e134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21e138: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21E138u;
    {
        const bool branch_taken_0x21e138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E138u;
        // 0x21e13c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e138) {
            ctx->pc = 0x21E150u;
            goto label_21e150;
        }
    }
    ctx->pc = 0x21E140u;
    // 0x21e140: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x21E140u;
    SET_GPR_U32(ctx, 31, 0x21E148u);
    ctx->pc = 0x21E144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E140u;
    // 0x21e144: 0x2625014c  addiu       $a1, $s1, 0x14C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 332));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x21E140u, 0x21E148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E148u;
label_21e148:
    // 0x21e148: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x21E148u;
    {
        const bool branch_taken_0x21e148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E148u;
        // 0x21e14c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e148) {
            ctx->pc = 0x21E268u;
            goto label_21e268;
        }
    }
    ctx->pc = 0x21E150u;
label_21e150:
    // 0x21e150: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21e150u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21e154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e158: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21E158u;
    SET_GPR_U32(ctx, 31, 0x21E160u);
    ctx->pc = 0x21E15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E158u;
    // 0x21e15c: 0x24a51d28  addiu       $a1, $a1, 0x1D28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21E158u, 0x21E160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E160u;
label_21e160:
    // 0x21e160: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21e160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21e164: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21E164u;
    {
        const bool branch_taken_0x21e164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E164u;
        // 0x21e168: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e164) {
            ctx->pc = 0x21E17Cu;
            goto label_21e17c;
        }
    }
    ctx->pc = 0x21E16Cu;
    // 0x21e16c: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x21E16Cu;
    SET_GPR_U32(ctx, 31, 0x21E174u);
    ctx->pc = 0x21E170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E16Cu;
    // 0x21e170: 0x26250154  addiu       $a1, $s1, 0x154 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 340));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x21E16Cu, 0x21E174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E174u;
label_21e174:
    // 0x21e174: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x21E174u;
    {
        const bool branch_taken_0x21e174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E174u;
        // 0x21e178: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e174) {
            ctx->pc = 0x21E268u;
            goto label_21e268;
        }
    }
    ctx->pc = 0x21E17Cu;
label_21e17c:
    // 0x21e17c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21e17cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21e180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e184: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21E184u;
    SET_GPR_U32(ctx, 31, 0x21E18Cu);
    ctx->pc = 0x21E188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E184u;
    // 0x21e188: 0x24a51d40  addiu       $a1, $a1, 0x1D40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21E184u, 0x21E18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E18Cu;
label_21e18c:
    // 0x21e18c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21e18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21e190: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21E190u;
    {
        const bool branch_taken_0x21e190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E190u;
        // 0x21e194: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e190) {
            ctx->pc = 0x21E1B0u;
            goto label_21e1b0;
        }
    }
    ctx->pc = 0x21E198u;
    // 0x21e198: 0x26270168  addiu       $a3, $s1, 0x168
    ctx->pc = 0x21e198u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 360));
    // 0x21e19c: 0x26250160  addiu       $a1, $s1, 0x160
    ctx->pc = 0x21e19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x21e1a0: 0xc09df62  jal         func_277D88
    ctx->pc = 0x21E1A0u;
    SET_GPR_U32(ctx, 31, 0x21E1A8u);
    ctx->pc = 0x21E1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E1A0u;
    // 0x21e1a4: 0x26260164  addiu       $a2, $s1, 0x164 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x21E1A0u, 0x21E1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E1A8u;
label_21e1a8:
    // 0x21e1a8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x21E1A8u;
    {
        const bool branch_taken_0x21e1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E1A8u;
        // 0x21e1ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e1a8) {
            ctx->pc = 0x21E268u;
            goto label_21e268;
        }
    }
    ctx->pc = 0x21E1B0u;
label_21e1b0:
    // 0x21e1b0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21e1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21e1b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e1b8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21E1B8u;
    SET_GPR_U32(ctx, 31, 0x21E1C0u);
    ctx->pc = 0x21E1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E1B8u;
    // 0x21e1bc: 0x24a51d58  addiu       $a1, $a1, 0x1D58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21E1B8u, 0x21E1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E1C0u;
label_21e1c0:
    // 0x21e1c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21e1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21e1c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21E1C4u;
    {
        const bool branch_taken_0x21e1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E1C4u;
        // 0x21e1c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e1c4) {
            ctx->pc = 0x21E1DCu;
            goto label_21e1dc;
        }
    }
    ctx->pc = 0x21E1CCu;
    // 0x21e1cc: 0xc09e056  jal         func_278158
    ctx->pc = 0x21E1CCu;
    SET_GPR_U32(ctx, 31, 0x21E1D4u);
    ctx->pc = 0x21E1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E1CCu;
    // 0x21e1d0: 0x2625015c  addiu       $a1, $s1, 0x15C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x21E1CCu, 0x21E1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E1D4u;
label_21e1d4:
    // 0x21e1d4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x21E1D4u;
    {
        const bool branch_taken_0x21e1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E1D4u;
        // 0x21e1d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e1d4) {
            ctx->pc = 0x21E268u;
            goto label_21e268;
        }
    }
    ctx->pc = 0x21E1DCu;
label_21e1dc:
    // 0x21e1dc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21e1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21e1e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e1e4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21E1E4u;
    SET_GPR_U32(ctx, 31, 0x21E1ECu);
    ctx->pc = 0x21E1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E1E4u;
    // 0x21e1e8: 0x24a51d70  addiu       $a1, $a1, 0x1D70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21E1E4u, 0x21E1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E1ECu;
label_21e1ec:
    // 0x21e1ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21e1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21e1f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21E1F0u;
    {
        const bool branch_taken_0x21e1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E1F0u;
        // 0x21e1f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e1f0) {
            ctx->pc = 0x21E208u;
            goto label_21e208;
        }
    }
    ctx->pc = 0x21E1F8u;
    // 0x21e1f8: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x21E1F8u;
    SET_GPR_U32(ctx, 31, 0x21E200u);
    ctx->pc = 0x21E1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E1F8u;
    // 0x21e1fc: 0x2625017c  addiu       $a1, $s1, 0x17C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 380));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x21E1F8u, 0x21E200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E200u;
label_21e200:
    // 0x21e200: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x21E200u;
    {
        const bool branch_taken_0x21e200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E200u;
        // 0x21e204: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e200) {
            ctx->pc = 0x21E268u;
            goto label_21e268;
        }
    }
    ctx->pc = 0x21E208u;
label_21e208:
    // 0x21e208: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21e208u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21e20c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e210: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21E210u;
    SET_GPR_U32(ctx, 31, 0x21E218u);
    ctx->pc = 0x21E214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E210u;
    // 0x21e214: 0x24a51d88  addiu       $a1, $a1, 0x1D88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21E210u, 0x21E218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E218u;
label_21e218:
    // 0x21e218: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21e218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21e21c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x21E21Cu;
    {
        const bool branch_taken_0x21e21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E21Cu;
        // 0x21e220: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e21c) {
            ctx->pc = 0x21E25Cu;
            goto label_21e25c;
        }
    }
    ctx->pc = 0x21E224u;
    // 0x21e224: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21e224u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21e228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21e228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21e22c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21E22Cu;
    SET_GPR_U32(ctx, 31, 0x21E234u);
    ctx->pc = 0x21E230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E22Cu;
    // 0x21e230: 0x24a51da0  addiu       $a1, $a1, 0x1DA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21E22Cu, 0x21E234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E234u;
label_21e234:
    // 0x21e234: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21e234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21e238: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21E238u;
    {
        const bool branch_taken_0x21e238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E238u;
        // 0x21e23c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e238) {
            ctx->pc = 0x21E268u;
            goto label_21e268;
        }
    }
    ctx->pc = 0x21E240u;
    // 0x21e240: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x21e240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21e244: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21e244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21e248: 0x24a51db0  addiu       $a1, $a1, 0x1DB0
    ctx->pc = 0x21e248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7600));
    // 0x21e24c: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x21E24Cu;
    SET_GPR_U32(ctx, 31, 0x21E254u);
    ctx->pc = 0x21E250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E24Cu;
    // 0x21e250: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x21E24Cu, 0x21E254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E254u;
label_21e254:
    // 0x21e254: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21E254u;
    {
        const bool branch_taken_0x21e254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E254u;
        // 0x21e258: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e254) {
            ctx->pc = 0x21E268u;
            goto label_21e268;
        }
    }
    ctx->pc = 0x21E25Cu;
label_21e25c:
    // 0x21e25c: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x21E25Cu;
    SET_GPR_U32(ctx, 31, 0x21E264u);
    ctx->pc = 0x21E260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E25Cu;
    // 0x21e260: 0x26250184  addiu       $a1, $s1, 0x184 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 388));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x21E25Cu, 0x21E264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21E264u;
label_21e264:
    // 0x21e264: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21e264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21e268:
    // 0x21e268: 0xdfb00470  ld          $s0, 0x470($sp)
    ctx->pc = 0x21e268u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
    // 0x21e26c: 0xdfb10478  ld          $s1, 0x478($sp)
    ctx->pc = 0x21e26cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1144)));
    // 0x21e270: 0xdfb20480  ld          $s2, 0x480($sp)
    ctx->pc = 0x21e270u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1152)));
    // 0x21e274: 0xdfb30488  ld          $s3, 0x488($sp)
    ctx->pc = 0x21e274u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1160)));
    // 0x21e278: 0xdfbf0490  ld          $ra, 0x490($sp)
    ctx->pc = 0x21e278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1168)));
    // 0x21e27c: 0x3e00008  jr          $ra
    ctx->pc = 0x21E27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E27Cu;
        // 0x21e280: 0x27bd04a0  addiu       $sp, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E27Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21E284u;
    // 0x21e284: 0x0  nop
    ctx->pc = 0x21e284u;
    // NOP
    ctx->pc = 0x21e288u;
}

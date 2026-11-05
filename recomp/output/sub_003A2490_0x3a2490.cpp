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

// Function: sub_003A2490
// Address: 0x3a2490 - 0x3a25a8
void sub_003A2490_0x3a2490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2490_0x3a2490");
#endif

    switch (ctx->pc) {
        case 0x3a2490u: goto label_3a2490;
        case 0x3a2494u: goto label_3a2494;
        case 0x3a2498u: goto label_3a2498;
        case 0x3a249cu: goto label_3a249c;
        case 0x3a24a0u: goto label_3a24a0;
        case 0x3a24a4u: goto label_3a24a4;
        case 0x3a24a8u: goto label_3a24a8;
        case 0x3a24acu: goto label_3a24ac;
        case 0x3a24b0u: goto label_3a24b0;
        case 0x3a24b4u: goto label_3a24b4;
        case 0x3a24b8u: goto label_3a24b8;
        case 0x3a24bcu: goto label_3a24bc;
        case 0x3a24c0u: goto label_3a24c0;
        case 0x3a24c4u: goto label_3a24c4;
        case 0x3a24c8u: goto label_3a24c8;
        case 0x3a24ccu: goto label_3a24cc;
        case 0x3a24d0u: goto label_3a24d0;
        case 0x3a24d4u: goto label_3a24d4;
        case 0x3a24d8u: goto label_3a24d8;
        case 0x3a24dcu: goto label_3a24dc;
        case 0x3a24e0u: goto label_3a24e0;
        case 0x3a24e4u: goto label_3a24e4;
        case 0x3a24e8u: goto label_3a24e8;
        case 0x3a24ecu: goto label_3a24ec;
        case 0x3a24f0u: goto label_3a24f0;
        case 0x3a24f4u: goto label_3a24f4;
        case 0x3a24f8u: goto label_3a24f8;
        case 0x3a24fcu: goto label_3a24fc;
        case 0x3a2500u: goto label_3a2500;
        case 0x3a2504u: goto label_3a2504;
        case 0x3a2508u: goto label_3a2508;
        case 0x3a250cu: goto label_3a250c;
        case 0x3a2510u: goto label_3a2510;
        case 0x3a2514u: goto label_3a2514;
        case 0x3a2518u: goto label_3a2518;
        case 0x3a251cu: goto label_3a251c;
        case 0x3a2520u: goto label_3a2520;
        case 0x3a2524u: goto label_3a2524;
        case 0x3a2528u: goto label_3a2528;
        case 0x3a252cu: goto label_3a252c;
        case 0x3a2530u: goto label_3a2530;
        case 0x3a2534u: goto label_3a2534;
        case 0x3a2538u: goto label_3a2538;
        case 0x3a253cu: goto label_3a253c;
        case 0x3a2540u: goto label_3a2540;
        case 0x3a2544u: goto label_3a2544;
        case 0x3a2548u: goto label_3a2548;
        case 0x3a254cu: goto label_3a254c;
        case 0x3a2550u: goto label_3a2550;
        case 0x3a2554u: goto label_3a2554;
        case 0x3a2558u: goto label_3a2558;
        case 0x3a255cu: goto label_3a255c;
        case 0x3a2560u: goto label_3a2560;
        case 0x3a2564u: goto label_3a2564;
        case 0x3a2568u: goto label_3a2568;
        case 0x3a256cu: goto label_3a256c;
        case 0x3a2570u: goto label_3a2570;
        case 0x3a2574u: goto label_3a2574;
        case 0x3a2578u: goto label_3a2578;
        case 0x3a257cu: goto label_3a257c;
        case 0x3a2580u: goto label_3a2580;
        case 0x3a2584u: goto label_3a2584;
        case 0x3a2588u: goto label_3a2588;
        case 0x3a258cu: goto label_3a258c;
        case 0x3a2590u: goto label_3a2590;
        case 0x3a2594u: goto label_3a2594;
        case 0x3a2598u: goto label_3a2598;
        case 0x3a259cu: goto label_3a259c;
        case 0x3a25a0u: goto label_3a25a0;
        case 0x3a25a4u: goto label_3a25a4;
        default: break;
    }

    ctx->pc = 0x3a2490u;

label_3a2490:
    // 0x3a2490: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x3a2490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_3a2494:
    // 0x3a2494: 0xffb00260  sd          $s0, 0x260($sp)
    ctx->pc = 0x3a2494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_3a2498:
    // 0x3a2498: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a2498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a249c:
    // 0x3a249c: 0xffb10268  sd          $s1, 0x268($sp)
    ctx->pc = 0x3a249cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_3a24a0:
    // 0x3a24a0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_3a24a4:
    if (ctx->pc == 0x3A24A4u) {
        ctx->pc = 0x3A24A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A24A0u;
        // 0x3a24a4: 0xffbf0270  sd          $ra, 0x270($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A24A8u;
        goto label_3a24a8;
    }
    ctx->pc = 0x3A24A0u;
    {
        const bool branch_taken_0x3a24a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A24A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A24A0u;
        // 0x3a24a4: 0xffbf0270  sd          $ra, 0x270($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a24a0) {
            ctx->pc = 0x3A24B8u;
            goto label_3a24b8;
        }
    }
    ctx->pc = 0x3A24A8u;
label_3a24a8:
    // 0x3a24a8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a24a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3a24ac:
    // 0x3a24ac: 0x1000001f  b           . + 4 + (0x1F << 2)
label_3a24b0:
    if (ctx->pc == 0x3A24B0u) {
        ctx->pc = 0x3A24B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A24ACu;
        // 0x3a24b0: 0x2484c8d8  addiu       $a0, $a0, -0x3728 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A24B4u;
        goto label_3a24b4;
    }
    ctx->pc = 0x3A24ACu;
    {
        const bool branch_taken_0x3a24ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A24B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A24ACu;
        // 0x3a24b0: 0x2484c8d8  addiu       $a0, $a0, -0x3728 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a24ac) {
            ctx->pc = 0x3A252Cu;
            goto label_3a252c;
        }
    }
    ctx->pc = 0x3A24B4u;
label_3a24b4:
    // 0x3a24b4: 0x0  nop
    ctx->pc = 0x3a24b4u;
    // NOP
label_3a24b8:
    // 0x3a24b8: 0x27b10130  addiu       $s1, $sp, 0x130
    ctx->pc = 0x3a24b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_3a24bc:
    // 0x3a24bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a24bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a24c0:
    // 0x3a24c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a24c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a24c4:
    // 0x3a24c4: 0xc0e8816  jal         func_3A2058
label_3a24c8:
    if (ctx->pc == 0x3A24C8u) {
        ctx->pc = 0x3A24C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A24C4u;
        // 0x3a24c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A24CCu;
        goto label_3a24cc;
    }
    ctx->pc = 0x3A24C4u;
    SET_GPR_U32(ctx, 31, 0x3A24CCu);
    ctx->pc = 0x3A24C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A24C4u;
    // 0x3a24c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2058u, 0x3A24C4u, 0x3A24CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A24CCu;
label_3a24cc:
    // 0x3a24cc: 0x83a20130  lb          $v0, 0x130($sp)
    ctx->pc = 0x3a24ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_3a24d0:
    // 0x3a24d0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3a24d4:
    if (ctx->pc == 0x3A24D4u) {
        ctx->pc = 0x3A24D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A24D0u;
        // 0x3a24d4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A24D8u;
        goto label_3a24d8;
    }
    ctx->pc = 0x3A24D0u;
    {
        const bool branch_taken_0x3a24d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A24D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A24D0u;
        // 0x3a24d4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a24d0) {
            ctx->pc = 0x3A24E8u;
            goto label_3a24e8;
        }
    }
    ctx->pc = 0x3A24D8u;
label_3a24d8:
    // 0x3a24d8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a24d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3a24dc:
    // 0x3a24dc: 0x10000013  b           . + 4 + (0x13 << 2)
label_3a24e0:
    if (ctx->pc == 0x3A24E0u) {
        ctx->pc = 0x3A24E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A24DCu;
        // 0x3a24e0: 0x2484c8d8  addiu       $a0, $a0, -0x3728 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A24E4u;
        goto label_3a24e4;
    }
    ctx->pc = 0x3A24DCu;
    {
        const bool branch_taken_0x3a24dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A24E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A24DCu;
        // 0x3a24e0: 0x2484c8d8  addiu       $a0, $a0, -0x3728 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a24dc) {
            ctx->pc = 0x3A252Cu;
            goto label_3a252c;
        }
    }
    ctx->pc = 0x3A24E4u;
label_3a24e4:
    // 0x3a24e4: 0x0  nop
    ctx->pc = 0x3a24e4u;
    // NOP
label_3a24e8:
    // 0x3a24e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a24e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a24ec:
    // 0x3a24ec: 0xc0e8784  jal         func_3A1E10
label_3a24f0:
    if (ctx->pc == 0x3A24F0u) {
        ctx->pc = 0x3A24F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A24ECu;
        // 0x3a24f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A24F4u;
        goto label_3a24f4;
    }
    ctx->pc = 0x3A24ECu;
    SET_GPR_U32(ctx, 31, 0x3A24F4u);
    ctx->pc = 0x3A24F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A24ECu;
    // 0x3a24f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1E10u, 0x3A24ECu, 0x3A24F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A24F4u;
label_3a24f4:
    // 0x3a24f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a24f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a24f8:
    // 0x3a24f8: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_3a24fc:
    if (ctx->pc == 0x3A24FCu) {
        ctx->pc = 0x3A24FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A24F8u;
        // 0x3a24fc: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2500u;
        goto label_3a2500;
    }
    ctx->pc = 0x3A24F8u;
    {
        const bool branch_taken_0x3a24f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a24f8) {
            ctx->pc = 0x3A24FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A24F8u;
            // 0x3a24fc: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A2510u;
            goto label_3a2510;
        }
    }
    ctx->pc = 0x3A2500u;
label_3a2500:
    // 0x3a2500: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a2500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3a2504:
    // 0x3a2504: 0xc0e8688  jal         func_3A1A20
label_3a2508:
    if (ctx->pc == 0x3A2508u) {
        ctx->pc = 0x3A2508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2504u;
        // 0x3a2508: 0x2484c928  addiu       $a0, $a0, -0x36D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A250Cu;
        goto label_3a250c;
    }
    ctx->pc = 0x3A2504u;
    SET_GPR_U32(ctx, 31, 0x3A250Cu);
    ctx->pc = 0x3A2508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2504u;
    // 0x3a2508: 0x2484c928  addiu       $a0, $a0, -0x36D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1A20u, 0x3A2504u, 0x3A250Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A250Cu;
label_3a250c:
    // 0x3a250c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3a250cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3a2510:
    // 0x3a2510: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3a2514:
    if (ctx->pc == 0x3A2514u) {
        ctx->pc = 0x3A2514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2510u;
        // 0x3a2514: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2518u;
        goto label_3a2518;
    }
    ctx->pc = 0x3A2510u;
    {
        const bool branch_taken_0x3a2510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2510) {
            ctx->pc = 0x3A2514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2510u;
            // 0x3a2514: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A2528u;
            goto label_3a2528;
        }
    }
    ctx->pc = 0x3A2518u;
label_3a2518:
    // 0x3a2518: 0x40f809  jalr        $v0
label_3a251c:
    if (ctx->pc == 0x3A251Cu) {
        ctx->pc = 0x3A251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2518u;
        // 0x3a251c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2520u;
        goto label_3a2520;
    }
    ctx->pc = 0x3A2518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A2520u);
        ctx->pc = 0x3A251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2518u;
        // 0x3a251c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2518u, 0x3A2520u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A2520u;
label_3a2520:
    // 0x3a2520: 0x10000006  b           . + 4 + (0x6 << 2)
label_3a2524:
    if (ctx->pc == 0x3A2524u) {
        ctx->pc = 0x3A2524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2520u;
        // 0x3a2524: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A2528u;
        goto label_3a2528;
    }
    ctx->pc = 0x3A2520u;
    {
        const bool branch_taken_0x3a2520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2520u;
        // 0x3a2524: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2520) {
            ctx->pc = 0x3A253Cu;
            goto label_3a253c;
        }
    }
    ctx->pc = 0x3A2528u;
label_3a2528:
    // 0x3a2528: 0x2484c950  addiu       $a0, $a0, -0x36B0
    ctx->pc = 0x3a2528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953296));
label_3a252c:
    // 0x3a252c: 0xc0e8688  jal         func_3A1A20
label_3a2530:
    if (ctx->pc == 0x3A2530u) {
        ctx->pc = 0x3A2534u;
        goto label_3a2534;
    }
    ctx->pc = 0x3A252Cu;
    SET_GPR_U32(ctx, 31, 0x3A2534u);
    ctx->pc = 0x3A1A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1A20u, 0x3A252Cu, 0x3A2534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2534u;
label_3a2534:
    // 0x3a2534: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a2534u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a2538:
    // 0x3a2538: 0xdfb00260  ld          $s0, 0x260($sp)
    ctx->pc = 0x3a2538u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_3a253c:
    // 0x3a253c: 0xdfb10268  ld          $s1, 0x268($sp)
    ctx->pc = 0x3a253cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_3a2540:
    // 0x3a2540: 0xdfbf0270  ld          $ra, 0x270($sp)
    ctx->pc = 0x3a2540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_3a2544:
    // 0x3a2544: 0x3e00008  jr          $ra
label_3a2548:
    if (ctx->pc == 0x3A2548u) {
        ctx->pc = 0x3A2548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2544u;
        // 0x3a2548: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A254Cu;
        goto label_3a254c;
    }
    ctx->pc = 0x3A2544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2544u;
        // 0x3a2548: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A254Cu;
label_3a254c:
    // 0x3a254c: 0x0  nop
    ctx->pc = 0x3a254cu;
    // NOP
label_3a2550:
    // 0x3a2550: 0x27bd0280  addiu       $sp, $sp, 0x280
    ctx->pc = 0x3a2550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_3a2554:
    // 0x3a2554: 0x0  nop
    ctx->pc = 0x3a2554u;
    // NOP
label_3a2558:
    // 0x3a2558: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3a2558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3a255c:
    // 0x3a255c: 0x0  nop
    ctx->pc = 0x3a255cu;
    // NOP
label_3a2560:
    // 0x3a2560: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3a2560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3a2564:
    // 0x3a2564: 0x0  nop
    ctx->pc = 0x3a2564u;
    // NOP
label_3a2568:
    // 0x3a2568: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3a2568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3a256c:
    // 0x3a256c: 0x0  nop
    ctx->pc = 0x3a256cu;
    // NOP
label_3a2570:
    // 0x3a2570: 0x27bd0280  addiu       $sp, $sp, 0x280
    ctx->pc = 0x3a2570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_3a2574:
    // 0x3a2574: 0x0  nop
    ctx->pc = 0x3a2574u;
    // NOP
label_3a2578:
    // 0x3a2578: 0x27bd0280  addiu       $sp, $sp, 0x280
    ctx->pc = 0x3a2578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_3a257c:
    // 0x3a257c: 0x0  nop
    ctx->pc = 0x3a257cu;
    // NOP
label_3a2580:
    // 0x3a2580: 0x27bd0290  addiu       $sp, $sp, 0x290
    ctx->pc = 0x3a2580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_3a2584:
    // 0x3a2584: 0x0  nop
    ctx->pc = 0x3a2584u;
    // NOP
label_3a2588:
    // 0x3a2588: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x3a2588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3a258c:
    // 0x3a258c: 0x0  nop
    ctx->pc = 0x3a258cu;
    // NOP
label_3a2590:
    // 0x3a2590: 0x27bd0280  addiu       $sp, $sp, 0x280
    ctx->pc = 0x3a2590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_3a2594:
    // 0x3a2594: 0x0  nop
    ctx->pc = 0x3a2594u;
    // NOP
label_3a2598:
    // 0x3a2598: 0x27bd0280  addiu       $sp, $sp, 0x280
    ctx->pc = 0x3a2598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_3a259c:
    // 0x3a259c: 0x0  nop
    ctx->pc = 0x3a259cu;
    // NOP
label_3a25a0:
    // 0x3a25a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3a25a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3a25a4:
    // 0x3a25a4: 0x0  nop
    ctx->pc = 0x3a25a4u;
    // NOP
    ctx->pc = 0x3a25a8u;
}

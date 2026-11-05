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

// Function: sub_003B24C8
// Address: 0x3b24c8 - 0x3b27a8
void sub_003B24C8_0x3b24c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B24C8_0x3b24c8");
#endif

    switch (ctx->pc) {
        case 0x3b2520u: goto label_3b2520;
        case 0x3b2548u: goto label_3b2548;
        case 0x3b256cu: goto label_3b256c;
        case 0x3b2598u: goto label_3b2598;
        case 0x3b25b0u: goto label_3b25b0;
        case 0x3b25e8u: goto label_3b25e8;
        case 0x3b2608u: goto label_3b2608;
        case 0x3b2658u: goto label_3b2658;
        case 0x3b2668u: goto label_3b2668;
        case 0x3b2680u: goto label_3b2680;
        case 0x3b2698u: goto label_3b2698;
        case 0x3b26a8u: goto label_3b26a8;
        case 0x3b26b8u: goto label_3b26b8;
        case 0x3b26d4u: goto label_3b26d4;
        case 0x3b2728u: goto label_3b2728;
        case 0x3b2748u: goto label_3b2748;
        default: break;
    }

    ctx->pc = 0x3b24c8u;

    // 0x3b24c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3b24c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3b24cc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3b24ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3b24d0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3b24d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3b24d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3b24d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b24d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b24d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3b24dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b24dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b24e0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x3b24e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x3b24e4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x3b24e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b24e8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3b24e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3b24ec: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3b24ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x3b24f0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x3b24f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x3b24f4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x3b24f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x3b24f8: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x3b24f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x3b24fc: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x3b24fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x3b2500: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x3b2500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x3b2504: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x3b2504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x3b2508: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x3b2508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x3b250c: 0x8e1e0010  lw          $fp, 0x10($s0)
    ctx->pc = 0x3b250cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3b2510: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B2510u;
    {
        const bool branch_taken_0x3b2510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2510u;
        // 0x3b2514: 0x8e150004  lw          $s5, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2510) {
            ctx->pc = 0x3B2528u;
            goto label_3b2528;
        }
    }
    ctx->pc = 0x3B2518u;
    // 0x3b2518: 0xc0ec5a6  jal         func_3B1698
    ctx->pc = 0x3B2518u;
    SET_GPR_U32(ctx, 31, 0x3B2520u);
    ctx->pc = 0x3B251Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2518u;
    // 0x3b251c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1698u, 0x3B2518u, 0x3B2520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2520u;
label_3b2520:
    // 0x3b2520: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3B2520u;
    {
        const bool branch_taken_0x3b2520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2520u;
        // 0x3b2524: 0xaec20000  sw          $v0, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2520) {
            ctx->pc = 0x3B252Cu;
            goto label_3b252c;
        }
    }
    ctx->pc = 0x3B2528u;
label_3b2528:
    // 0x3b2528: 0xaec00000  sw          $zero, 0x0($s6)
    ctx->pc = 0x3b2528u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
label_3b252c:
    // 0x3b252c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3b252cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3b2530: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3b2530u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b2534: 0x27e182a  slt         $v1, $s3, $fp
    ctx->pc = 0x3b2534u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x3b2538: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3b2538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3b253c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3b253cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3b2540: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3B2540u;
    {
        const bool branch_taken_0x3b2540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2540u;
        // 0x3b2544: 0x84510034  lh          $s1, 0x34($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2540) {
            ctx->pc = 0x3B2588u;
            goto label_3b2588;
        }
    }
    ctx->pc = 0x3B2548u;
label_3b2548:
    // 0x3b2548: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3b2548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b254c: 0x138080  sll         $s0, $s3, 2
    ctx->pc = 0x3b254cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x3b2550: 0x2031021  addu        $v0, $s0, $v1
    ctx->pc = 0x3b2550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3b2554: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3b2554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b2558: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B2558u;
    {
        const bool branch_taken_0x3b2558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B255Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2558u;
        // 0x3b255c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2558) {
            ctx->pc = 0x3B257Cu;
            goto label_3b257c;
        }
    }
    ctx->pc = 0x3B2560u;
    // 0x3b2560: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b2560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2564: 0xc0ec5a6  jal         func_3B1698
    ctx->pc = 0x3B2564u;
    SET_GPR_U32(ctx, 31, 0x3B256Cu);
    ctx->pc = 0x3B2568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2564u;
    // 0x3b2568: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1698u, 0x3B2564u, 0x3B256Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B256Cu;
label_3b256c:
    // 0x3b256c: 0x2161821  addu        $v1, $s0, $s6
    ctx->pc = 0x3b256cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    // 0x3b2570: 0x32240003  andi        $a0, $s1, 0x3
    ctx->pc = 0x3b2570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3);
    // 0x3b2574: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x3b2574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x3b2578: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3b2578u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3b257c:
    // 0x3b257c: 0x27e102a  slt         $v0, $s3, $fp
    ctx->pc = 0x3b257cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x3b2580: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x3B2580u;
    {
        const bool branch_taken_0x3b2580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B2584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2580u;
        // 0x3b2584: 0x118883  sra         $s1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2580) {
            ctx->pc = 0x3B2548u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b2548;
        }
    }
    ctx->pc = 0x3B2588u;
label_3b2588:
    // 0x3b2588: 0x3c0982d  daddu       $s3, $fp, $zero
    ctx->pc = 0x3b2588u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b258c: 0x2a620020  slti        $v0, $s3, 0x20
    ctx->pc = 0x3b258cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3b2590: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3B2590u;
    {
        const bool branch_taken_0x3b2590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b2590) {
            ctx->pc = 0x3B25DCu;
            goto label_3b25dc;
        }
    }
    ctx->pc = 0x3B2598u;
label_3b2598:
    // 0x3b2598: 0x5aa0000d  blezl       $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x3B2598u;
    {
        const bool branch_taken_0x3b2598 = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x3b2598) {
            ctx->pc = 0x3B259Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2598u;
            // 0x3b259c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B25D0u;
            goto label_3b25d0;
        }
    }
    ctx->pc = 0x3B25A0u;
    // 0x3b25a0: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x3b25a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x3b25a4: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x3b25a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b25a8: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x3b25a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x3b25ac: 0x0  nop
    ctx->pc = 0x3b25acu;
    // NOP
label_3b25b0:
    // 0x3b25b0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3b25b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3b25b4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3b25b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3b25b8: 0x0  nop
    ctx->pc = 0x3b25b8u;
    // NOP
    // 0x3b25bc: 0x0  nop
    ctx->pc = 0x3b25bcu;
    // NOP
    // 0x3b25c0: 0x0  nop
    ctx->pc = 0x3b25c0u;
    // NOP
    // 0x3b25c4: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3B25C4u;
    {
        const bool branch_taken_0x3b25c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B25C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B25C4u;
        // 0x3b25c8: 0x24420080  addiu       $v0, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b25c4) {
            ctx->pc = 0x3B25B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b25b0;
        }
    }
    ctx->pc = 0x3B25CCu;
    // 0x3b25cc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3b25ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3b25d0:
    // 0x3b25d0: 0x2a620020  slti        $v0, $s3, 0x20
    ctx->pc = 0x3b25d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3b25d4: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3B25D4u;
    {
        const bool branch_taken_0x3b25d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b25d4) {
            ctx->pc = 0x3B2598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b2598;
        }
    }
    ctx->pc = 0x3B25DCu;
label_3b25dc:
    // 0x3b25dc: 0x1bc0004d  blez        $fp, . + 4 + (0x4D << 2)
    ctx->pc = 0x3B25DCu;
    {
        const bool branch_taken_0x3b25dc = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x3B25E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B25DCu;
        // 0x3b25e0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b25dc) {
            ctx->pc = 0x3B2714u;
            goto label_3b2714;
        }
    }
    ctx->pc = 0x3B25E4u;
    // 0x3b25e4: 0x0  nop
    ctx->pc = 0x3b25e4u;
    // NOP
label_3b25e8:
    // 0x3b25e8: 0x5aa00047  blezl       $s5, . + 4 + (0x47 << 2)
    ctx->pc = 0x3B25E8u;
    {
        const bool branch_taken_0x3b25e8 = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x3b25e8) {
            ctx->pc = 0x3B25ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B25E8u;
            // 0x3b25ec: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2708u;
            goto label_3b2708;
        }
    }
    ctx->pc = 0x3B25F0u;
    // 0x3b25f0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3b25f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3b25f4: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x3b25f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x3b25f8: 0x2417003f  addiu       $s7, $zero, 0x3F
    ctx->pc = 0x3b25f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3b25fc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3b25fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2600: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x3b2600u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3b2604: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x3b2604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b2608:
    // 0x3b2608: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3b2608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b260c: 0x2831021  addu        $v0, $s4, $v1
    ctx->pc = 0x3b260cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x3b2610: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3b2610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b2614: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x3B2614u;
    {
        const bool branch_taken_0x3b2614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2614u;
        // 0x3b2618: 0x2961021  addu        $v0, $s4, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2614) {
            ctx->pc = 0x3B26E8u;
            goto label_3b26e8;
        }
    }
    ctx->pc = 0x3B261Cu;
    // 0x3b261c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3b261cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b2620: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3b2620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3b2624: 0x50830014  beql        $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x3B2624u;
    {
        const bool branch_taken_0x3b2624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b2624) {
            ctx->pc = 0x3B2628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2624u;
            // 0x3b2628: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2678u;
            goto label_3b2678;
        }
    }
    ctx->pc = 0x3B262Cu;
    // 0x3b262c: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3B262Cu;
    {
        const bool branch_taken_0x3b262c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b262c) {
            ctx->pc = 0x3B2630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B262Cu;
            // 0x3b2630: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2650u;
            goto label_3b2650;
        }
    }
    ctx->pc = 0x3B2634u;
    // 0x3b2634: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b2634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3b2638: 0x10820023  beq         $a0, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3B2638u;
    {
        const bool branch_taken_0x3b2638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2638u;
        // 0x3b263c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2638) {
            ctx->pc = 0x3B26C8u;
            goto label_3b26c8;
        }
    }
    ctx->pc = 0x3B2640u;
    // 0x3b2640: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3B2640u;
    {
        const bool branch_taken_0x3b2640 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3B2644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2640u;
        // 0x3b2644: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2640) {
            ctx->pc = 0x3B26A0u;
            goto label_3b26a0;
        }
    }
    ctx->pc = 0x3B2648u;
    // 0x3b2648: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x3B2648u;
    {
        const bool branch_taken_0x3b2648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2648u;
        // 0x3b264c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2648) {
            ctx->pc = 0x3B26F8u;
            goto label_3b26f8;
        }
    }
    ctx->pc = 0x3B2650u;
label_3b2650:
    // 0x3b2650: 0xc0ec5a6  jal         func_3B1698
    ctx->pc = 0x3B2650u;
    SET_GPR_U32(ctx, 31, 0x3B2658u);
    ctx->pc = 0x3B2654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2650u;
    // 0x3b2654: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1698u, 0x3B2650u, 0x3B2658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2658u;
label_3b2658:
    // 0x3b2658: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b2658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b265c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3b265cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3b2660: 0xc0ec5a6  jal         func_3B1698
    ctx->pc = 0x3B2660u;
    SET_GPR_U32(ctx, 31, 0x3B2668u);
    ctx->pc = 0x3B2664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2660u;
    // 0x3b2664: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1698u, 0x3B2660u, 0x3B2668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2668u;
label_3b2668:
    // 0x3b2668: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b2668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b266c: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x3b266cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x3b2670: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3B2670u;
    {
        const bool branch_taken_0x3b2670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2670u;
        // 0x3b2674: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2670) {
            ctx->pc = 0x3B2690u;
            goto label_3b2690;
        }
    }
    ctx->pc = 0x3B2678u;
label_3b2678:
    // 0x3b2678: 0xc0ec5a6  jal         func_3B1698
    ctx->pc = 0x3B2678u;
    SET_GPR_U32(ctx, 31, 0x3B2680u);
    ctx->pc = 0x3B267Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2678u;
    // 0x3b267c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1698u, 0x3B2678u, 0x3B2680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2680u;
label_3b2680:
    // 0x3b2680: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b2680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2684: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3b2684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3b2688: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3b2688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3b268c: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x3b268cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_3b2690:
    // 0x3b2690: 0xc0ec5a6  jal         func_3B1698
    ctx->pc = 0x3B2690u;
    SET_GPR_U32(ctx, 31, 0x3B2698u);
    ctx->pc = 0x3B2694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2690u;
    // 0x3b2694: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1698u, 0x3B2690u, 0x3B2698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2698u;
label_3b2698:
    // 0x3b2698: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3B2698u;
    {
        const bool branch_taken_0x3b2698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B269Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2698u;
        // 0x3b269c: 0xae020100  sw          $v0, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2698) {
            ctx->pc = 0x3B26F8u;
            goto label_3b26f8;
        }
    }
    ctx->pc = 0x3B26A0u;
label_3b26a0:
    // 0x3b26a0: 0xc0ec5a6  jal         func_3B1698
    ctx->pc = 0x3B26A0u;
    SET_GPR_U32(ctx, 31, 0x3B26A8u);
    ctx->pc = 0x3B26A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B26A0u;
    // 0x3b26a4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1698u, 0x3B26A0u, 0x3B26A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B26A8u;
label_3b26a8:
    // 0x3b26a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b26a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b26ac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3b26acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3b26b0: 0xc0ec5a6  jal         func_3B1698
    ctx->pc = 0x3B26B0u;
    SET_GPR_U32(ctx, 31, 0x3B26B8u);
    ctx->pc = 0x3B26B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B26B0u;
    // 0x3b26b4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1698u, 0x3B26B0u, 0x3B26B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B26B8u;
label_3b26b8:
    // 0x3b26b8: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x3b26b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x3b26bc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3B26BCu;
    {
        const bool branch_taken_0x3b26bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B26C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B26BCu;
        // 0x3b26c0: 0xae020100  sw          $v0, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b26bc) {
            ctx->pc = 0x3B26F4u;
            goto label_3b26f4;
        }
    }
    ctx->pc = 0x3B26C4u;
    // 0x3b26c4: 0x0  nop
    ctx->pc = 0x3b26c4u;
    // NOP
label_3b26c8:
    // 0x3b26c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b26c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b26cc: 0xc0ec5a6  jal         func_3B1698
    ctx->pc = 0x3B26CCu;
    SET_GPR_U32(ctx, 31, 0x3B26D4u);
    ctx->pc = 0x3B26D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B26CCu;
    // 0x3b26d0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1698u, 0x3B26CCu, 0x3B26D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B26D4u;
label_3b26d4:
    // 0x3b26d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3b26d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3b26d8: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x3b26d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x3b26dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B26DCu;
    {
        const bool branch_taken_0x3b26dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B26E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B26DCu;
        // 0x3b26e0: 0xae020080  sw          $v0, 0x80($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b26dc) {
            ctx->pc = 0x3B26F4u;
            goto label_3b26f4;
        }
    }
    ctx->pc = 0x3B26E4u;
    // 0x3b26e4: 0x0  nop
    ctx->pc = 0x3b26e4u;
    // NOP
label_3b26e8:
    // 0x3b26e8: 0xae170100  sw          $s7, 0x100($s0)
    ctx->pc = 0x3b26e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 23));
    // 0x3b26ec: 0xae170080  sw          $s7, 0x80($s0)
    ctx->pc = 0x3b26ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 23));
    // 0x3b26f0: 0xae170000  sw          $s7, 0x0($s0)
    ctx->pc = 0x3b26f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 23));
label_3b26f4:
    // 0x3b26f4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3b26f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3b26f8:
    // 0x3b26f8: 0x26100180  addiu       $s0, $s0, 0x180
    ctx->pc = 0x3b26f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x3b26fc: 0x1620ffc2  bnez        $s1, . + 4 + (-0x3E << 2)
    ctx->pc = 0x3B26FCu;
    {
        const bool branch_taken_0x3b26fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B2700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B26FCu;
        // 0x3b2700: 0x26940080  addiu       $s4, $s4, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b26fc) {
            ctx->pc = 0x3B2608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b2608;
        }
    }
    ctx->pc = 0x3B2704u;
    // 0x3b2704: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3b2704u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3b2708:
    // 0x3b2708: 0x27e102a  slt         $v0, $s3, $fp
    ctx->pc = 0x3b2708u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x3b270c: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x3B270Cu;
    {
        const bool branch_taken_0x3b270c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b270c) {
            ctx->pc = 0x3B25E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b25e8;
        }
    }
    ctx->pc = 0x3B2714u;
label_3b2714:
    // 0x3b2714: 0x3c0982d  daddu       $s3, $fp, $zero
    ctx->pc = 0x3b2714u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2718: 0x2a620020  slti        $v0, $s3, 0x20
    ctx->pc = 0x3b2718u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3b271c: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x3B271Cu;
    {
        const bool branch_taken_0x3b271c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b271c) {
            ctx->pc = 0x3B2720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B271Cu;
            // 0x3b2720: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2778u;
            goto label_3b2778;
        }
    }
    ctx->pc = 0x3B2724u;
    // 0x3b2724: 0x0  nop
    ctx->pc = 0x3b2724u;
    // NOP
label_3b2728:
    // 0x3b2728: 0x5aa0000f  blezl       $s5, . + 4 + (0xF << 2)
    ctx->pc = 0x3B2728u;
    {
        const bool branch_taken_0x3b2728 = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x3b2728) {
            ctx->pc = 0x3B272Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2728u;
            // 0x3b272c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2768u;
            goto label_3b2768;
        }
    }
    ctx->pc = 0x3B2730u;
    // 0x3b2730: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3b2730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3b2734: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x3b2734u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x3b2738: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x3b2738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x3b273c: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x3b273cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2740: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3b2740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3b2744: 0x0  nop
    ctx->pc = 0x3b2744u;
    // NOP
label_3b2748:
    // 0x3b2748: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3b2748u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3b274c: 0xac430100  sw          $v1, 0x100($v0)
    ctx->pc = 0x3b274cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 3));
    // 0x3b2750: 0xac430080  sw          $v1, 0x80($v0)
    ctx->pc = 0x3b2750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 3));
    // 0x3b2754: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3b2754u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3b2758: 0x0  nop
    ctx->pc = 0x3b2758u;
    // NOP
    // 0x3b275c: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3B275Cu;
    {
        const bool branch_taken_0x3b275c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B2760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B275Cu;
        // 0x3b2760: 0x24420180  addiu       $v0, $v0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b275c) {
            ctx->pc = 0x3B2748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b2748;
        }
    }
    ctx->pc = 0x3B2764u;
    // 0x3b2764: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3b2764u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3b2768:
    // 0x3b2768: 0x2a620020  slti        $v0, $s3, 0x20
    ctx->pc = 0x3b2768u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3b276c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3B276Cu;
    {
        const bool branch_taken_0x3b276c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b276c) {
            ctx->pc = 0x3B2728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b2728;
        }
    }
    ctx->pc = 0x3B2774u;
    // 0x3b2774: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3b2774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b2778:
    // 0x3b2778: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3b2778u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3b277c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b277cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b2780: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3b2780u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3b2784: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3b2784u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b2788: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x3b2788u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3b278c: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x3b278cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b2790: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x3b2790u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3b2794: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x3b2794u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b2798: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x3b2798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3b279c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B279Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B27A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B279Cu;
        // 0x3b27a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B279Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B27A4u;
    // 0x3b27a4: 0x0  nop
    ctx->pc = 0x3b27a4u;
    // NOP
    ctx->pc = 0x3b27a8u;
}

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

// Function: sub_002834F8
// Address: 0x2834f8 - 0x283610
void sub_002834F8_0x2834f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002834F8_0x2834f8");
#endif

    switch (ctx->pc) {
        case 0x283530u: goto label_283530;
        default: break;
    }

    ctx->pc = 0x2834f8u;

    // 0x2834f8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2834f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2834fc: 0x240603fe  addiu       $a2, $zero, 0x3FE
    ctx->pc = 0x2834fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1022));
    // 0x283500: 0x8c62aa88  lw          $v0, -0x5578($v1)
    ctx->pc = 0x283500u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAA88u));
    // 0x283504: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x283504u;
    {
        const bool branch_taken_0x283504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283504u;
        // 0x283508: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283504) {
            ctx->pc = 0x283518u;
            goto label_283518;
        }
    }
    ctx->pc = 0x28350Cu;
    // 0x28350c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28350cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283510: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x283510u;
    {
        const bool branch_taken_0x283510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283510u;
        // 0x283514: 0x3c07006c  lui         $a3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283510) {
            ctx->pc = 0x283554u;
            goto label_283554;
        }
    }
    ctx->pc = 0x283518u;
label_283518:
    // 0x283518: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x283518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x28351c: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x28351cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x283520: 0x24432480  addiu       $v1, $v0, 0x2480
    ctx->pc = 0x283520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9344));
    // 0x283524: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x283524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x283528: 0x24640078  addiu       $a0, $v1, 0x78
    ctx->pc = 0x283528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x28352c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x28352cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C2480u));
label_283530:
    // 0x283530: 0x50460008  beql        $v0, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x283530u;
    {
        const bool branch_taken_0x283530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x283530) {
            ctx->pc = 0x283534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283530u;
            // 0x283534: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283554u;
            goto label_283554;
        }
    }
    ctx->pc = 0x283538u;
    // 0x283538: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x283538u;
    {
        const bool branch_taken_0x283538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x28353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283538u;
        // 0x28353c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283538) {
            ctx->pc = 0x283554u;
            goto label_283554;
        }
    }
    ctx->pc = 0x283540u;
    // 0x283540: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x283540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x283544: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x283544u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x283548: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x283548u;
    {
        const bool branch_taken_0x283548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283548) {
            ctx->pc = 0x28354Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283548u;
            // 0x28354c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_283530;
        }
    }
    ctx->pc = 0x283550u;
    // 0x283550: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x283550u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283554:
    // 0x283554: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x283554u;
    {
        const bool branch_taken_0x283554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283554) {
            ctx->pc = 0x283558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283554u;
            // 0x283558: 0x24e4af50  addiu       $a0, $a3, -0x50B0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946640));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2835B4u;
            goto label_2835b4;
        }
    }
    ctx->pc = 0x28355Cu;
    // 0x28355c: 0x8d02aa88  lw          $v0, -0x5578($t0)
    ctx->pc = 0x28355cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294945416)));
    // 0x283560: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x283560u;
    {
        const bool branch_taken_0x283560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283560u;
        // 0x283564: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283560) {
            ctx->pc = 0x28357Cu;
            goto label_28357c;
        }
    }
    ctx->pc = 0x283568u;
    // 0x283568: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x283568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x28356c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x28356cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x283570: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x283570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x283574: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x283574u;
    {
        const bool branch_taken_0x283574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283574) {
            ctx->pc = 0x283578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283574u;
            // 0x283578: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283584u;
            goto label_283584;
        }
    }
    ctx->pc = 0x28357Cu;
label_28357c:
    // 0x28357c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28357Cu;
    {
        const bool branch_taken_0x28357c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28357Cu;
        // 0x283580: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28357c) {
            ctx->pc = 0x283588u;
            goto label_283588;
        }
    }
    ctx->pc = 0x283584u;
label_283584:
    // 0x283584: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x283584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_283588:
    // 0x283588: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x283588u;
    {
        const bool branch_taken_0x283588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283588u;
        // 0x28358c: 0x24e4af50  addiu       $a0, $a3, -0x50B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283588) {
            ctx->pc = 0x2835B4u;
            goto label_2835b4;
        }
    }
    ctx->pc = 0x283590u;
    // 0x283590: 0x8d02aa88  lw          $v0, -0x5578($t0)
    ctx->pc = 0x283590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294945416)));
    // 0x283594: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x283594u;
    {
        const bool branch_taken_0x283594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283594u;
        // 0x283598: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283594) {
            ctx->pc = 0x2835A8u;
            goto label_2835a8;
        }
    }
    ctx->pc = 0x28359Cu;
    // 0x28359c: 0x8c432478  lw          $v1, 0x2478($v0)
    ctx->pc = 0x28359cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9336)));
    // 0x2835a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2835A0u;
    {
        const bool branch_taken_0x2835a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2835A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2835A0u;
        // 0x2835a4: 0x30630010  andi        $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2835a0) {
            ctx->pc = 0x2835ACu;
            goto label_2835ac;
        }
    }
    ctx->pc = 0x2835A8u;
label_2835a8:
    // 0x2835a8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2835a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2835ac:
    // 0x2835ac: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2835ACu;
    {
        const bool branch_taken_0x2835ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2835B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2835ACu;
        // 0x2835b0: 0x24e4af50  addiu       $a0, $a3, -0x50B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2835ac) {
            ctx->pc = 0x2835F8u;
            goto label_2835f8;
        }
    }
    ctx->pc = 0x2835B4u;
label_2835b4:
    // 0x2835b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2835b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2835b8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2835b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2835bc: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2835BCu;
    {
        const bool branch_taken_0x2835bc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2835C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2835BCu;
        // 0x2835c0: 0xac82004c  sw          $v0, 0x4C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2835bc) {
            ctx->pc = 0x2835D4u;
            goto label_2835d4;
        }
    }
    ctx->pc = 0x2835C4u;
    // 0x2835c4: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2835c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2835c8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2835c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2835cc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2835CCu;
    {
        const bool branch_taken_0x2835cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2835cc) {
            ctx->pc = 0x2835D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2835CCu;
            // 0x2835d0: 0xac800034  sw          $zero, 0x34($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2835D4u;
            goto label_2835d4;
        }
    }
    ctx->pc = 0x2835D4u;
label_2835d4:
    // 0x2835d4: 0x24e3af50  addiu       $v1, $a3, -0x50B0
    ctx->pc = 0x2835d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946640));
    // 0x2835d8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x2835d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x2835dc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2835DCu;
    {
        const bool branch_taken_0x2835dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2835E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2835DCu;
        // 0x2835e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2835dc) {
            ctx->pc = 0x2835F0u;
            goto label_2835f0;
        }
    }
    ctx->pc = 0x2835E4u;
    // 0x2835e4: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x2835e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x2835e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2835E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2835ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2835E8u;
        // 0x2835ec: 0xac620034  sw          $v0, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2835E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2835F0u;
label_2835f0:
    // 0x2835f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2835F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2835F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2835F0u;
        // 0x2835f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2835F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2835F8u;
label_2835f8:
    // 0x2835f8: 0x24e3af50  addiu       $v1, $a3, -0x50B0
    ctx->pc = 0x2835f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946640));
    // 0x2835fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2835fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283600: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x283600u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x283604: 0x3e00008  jr          $ra
    ctx->pc = 0x283604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283604u;
        // 0x283608: 0xac60004c  sw          $zero, 0x4C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28360Cu;
    // 0x28360c: 0x0  nop
    ctx->pc = 0x28360cu;
    // NOP
    ctx->pc = 0x283610u;
}

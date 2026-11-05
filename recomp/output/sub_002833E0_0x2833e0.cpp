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

// Function: sub_002833E0
// Address: 0x2833e0 - 0x2834f8
void sub_002833E0_0x2833e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002833E0_0x2833e0");
#endif

    switch (ctx->pc) {
        case 0x283418u: goto label_283418;
        default: break;
    }

    ctx->pc = 0x2833e0u;

    // 0x2833e0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2833e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2833e4: 0x240603fd  addiu       $a2, $zero, 0x3FD
    ctx->pc = 0x2833e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1021));
    // 0x2833e8: 0x8c62aa88  lw          $v0, -0x5578($v1)
    ctx->pc = 0x2833e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAA88u));
    // 0x2833ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2833ECu;
    {
        const bool branch_taken_0x2833ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2833F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2833ECu;
        // 0x2833f0: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2833ec) {
            ctx->pc = 0x283400u;
            goto label_283400;
        }
    }
    ctx->pc = 0x2833F4u;
    // 0x2833f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2833f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2833f8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2833F8u;
    {
        const bool branch_taken_0x2833f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2833FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2833F8u;
        // 0x2833fc: 0x3c07006c  lui         $a3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2833f8) {
            ctx->pc = 0x28343Cu;
            goto label_28343c;
        }
    }
    ctx->pc = 0x283400u;
label_283400:
    // 0x283400: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x283400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x283404: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x283404u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x283408: 0x24432480  addiu       $v1, $v0, 0x2480
    ctx->pc = 0x283408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9344));
    // 0x28340c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x28340cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x283410: 0x24640078  addiu       $a0, $v1, 0x78
    ctx->pc = 0x283410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x283414: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x283414u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C2480u));
label_283418:
    // 0x283418: 0x50460008  beql        $v0, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x283418u;
    {
        const bool branch_taken_0x283418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x283418) {
            ctx->pc = 0x28341Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283418u;
            // 0x28341c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28343Cu;
            goto label_28343c;
        }
    }
    ctx->pc = 0x283420u;
    // 0x283420: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x283420u;
    {
        const bool branch_taken_0x283420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x283424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283420u;
        // 0x283424: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283420) {
            ctx->pc = 0x28343Cu;
            goto label_28343c;
        }
    }
    ctx->pc = 0x283428u;
    // 0x283428: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x283428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x28342c: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x28342cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x283430: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x283430u;
    {
        const bool branch_taken_0x283430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283430) {
            ctx->pc = 0x283434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283430u;
            // 0x283434: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_283418;
        }
    }
    ctx->pc = 0x283438u;
    // 0x283438: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x283438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28343c:
    // 0x28343c: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x28343Cu;
    {
        const bool branch_taken_0x28343c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28343c) {
            ctx->pc = 0x283440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28343Cu;
            // 0x283440: 0x24e4af50  addiu       $a0, $a3, -0x50B0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946640));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28349Cu;
            goto label_28349c;
        }
    }
    ctx->pc = 0x283444u;
    // 0x283444: 0x8d02aa88  lw          $v0, -0x5578($t0)
    ctx->pc = 0x283444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294945416)));
    // 0x283448: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x283448u;
    {
        const bool branch_taken_0x283448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283448u;
        // 0x28344c: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283448) {
            ctx->pc = 0x283464u;
            goto label_283464;
        }
    }
    ctx->pc = 0x283450u;
    // 0x283450: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x283450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x283454: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x283454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x283458: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x283458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x28345c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x28345Cu;
    {
        const bool branch_taken_0x28345c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28345c) {
            ctx->pc = 0x283460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28345Cu;
            // 0x283460: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28346Cu;
            goto label_28346c;
        }
    }
    ctx->pc = 0x283464u;
label_283464:
    // 0x283464: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x283464u;
    {
        const bool branch_taken_0x283464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283464u;
        // 0x283468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283464) {
            ctx->pc = 0x283470u;
            goto label_283470;
        }
    }
    ctx->pc = 0x28346Cu;
label_28346c:
    // 0x28346c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x28346cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_283470:
    // 0x283470: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x283470u;
    {
        const bool branch_taken_0x283470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283470u;
        // 0x283474: 0x24e4af50  addiu       $a0, $a3, -0x50B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283470) {
            ctx->pc = 0x28349Cu;
            goto label_28349c;
        }
    }
    ctx->pc = 0x283478u;
    // 0x283478: 0x8d02aa88  lw          $v0, -0x5578($t0)
    ctx->pc = 0x283478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294945416)));
    // 0x28347c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28347Cu;
    {
        const bool branch_taken_0x28347c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28347Cu;
        // 0x283480: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28347c) {
            ctx->pc = 0x283490u;
            goto label_283490;
        }
    }
    ctx->pc = 0x283484u;
    // 0x283484: 0x8c432478  lw          $v1, 0x2478($v0)
    ctx->pc = 0x283484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9336)));
    // 0x283488: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x283488u;
    {
        const bool branch_taken_0x283488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283488u;
        // 0x28348c: 0x30630001  andi        $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283488) {
            ctx->pc = 0x283494u;
            goto label_283494;
        }
    }
    ctx->pc = 0x283490u;
label_283490:
    // 0x283490: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x283490u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_283494:
    // 0x283494: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x283494u;
    {
        const bool branch_taken_0x283494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x283498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283494u;
        // 0x283498: 0x24e4af50  addiu       $a0, $a3, -0x50B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283494) {
            ctx->pc = 0x2834E0u;
            goto label_2834e0;
        }
    }
    ctx->pc = 0x28349Cu;
label_28349c:
    // 0x28349c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28349cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2834a0: 0x8ce3af50  lw          $v1, -0x50B0($a3)
    ctx->pc = 0x2834a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294946640)));
    // 0x2834a4: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2834A4u;
    {
        const bool branch_taken_0x2834a4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2834A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2834A4u;
        // 0x2834a8: 0xac820048  sw          $v0, 0x48($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2834a4) {
            ctx->pc = 0x2834BCu;
            goto label_2834bc;
        }
    }
    ctx->pc = 0x2834ACu;
    // 0x2834ac: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2834acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2834b0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2834b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2834b4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2834B4u;
    {
        const bool branch_taken_0x2834b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2834b4) {
            ctx->pc = 0x2834B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2834B4u;
            // 0x2834b8: 0xac800030  sw          $zero, 0x30($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2834BCu;
            goto label_2834bc;
        }
    }
    ctx->pc = 0x2834BCu;
label_2834bc:
    // 0x2834bc: 0x24e3af50  addiu       $v1, $a3, -0x50B0
    ctx->pc = 0x2834bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946640));
    // 0x2834c0: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x2834c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x2834c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2834C4u;
    {
        const bool branch_taken_0x2834c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2834C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2834C4u;
        // 0x2834c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2834c4) {
            ctx->pc = 0x2834D8u;
            goto label_2834d8;
        }
    }
    ctx->pc = 0x2834CCu;
    // 0x2834cc: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x2834ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x2834d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2834D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2834D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2834D0u;
        // 0x2834d4: 0xac620030  sw          $v0, 0x30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2834D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2834D8u;
label_2834d8:
    // 0x2834d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2834D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2834DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2834D8u;
        // 0x2834dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2834D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2834E0u;
label_2834e0:
    // 0x2834e0: 0x24e3af50  addiu       $v1, $a3, -0x50B0
    ctx->pc = 0x2834e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946640));
    // 0x2834e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2834e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2834e8: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x2834e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x2834ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2834ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2834F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2834ECu;
        // 0x2834f0: 0xac600048  sw          $zero, 0x48($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2834ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2834F4u;
    // 0x2834f4: 0x0  nop
    ctx->pc = 0x2834f4u;
    // NOP
    ctx->pc = 0x2834f8u;
}

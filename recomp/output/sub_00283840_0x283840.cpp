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

// Function: sub_00283840
// Address: 0x283840 - 0x283950
void sub_00283840_0x283840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283840_0x283840");
#endif

    switch (ctx->pc) {
        case 0x283878u: goto label_283878;
        default: break;
    }

    ctx->pc = 0x283840u;

    // 0x283840: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x283840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x283844: 0x24060415  addiu       $a2, $zero, 0x415
    ctx->pc = 0x283844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1045));
    // 0x283848: 0x8c62aa88  lw          $v0, -0x5578($v1)
    ctx->pc = 0x283848u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FAA88u));
    // 0x28384c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28384Cu;
    {
        const bool branch_taken_0x28384c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28384Cu;
        // 0x283850: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28384c) {
            ctx->pc = 0x283860u;
            goto label_283860;
        }
    }
    ctx->pc = 0x283854u;
    // 0x283854: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x283854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283858: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x283858u;
    {
        const bool branch_taken_0x283858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283858u;
        // 0x28385c: 0x3c07006c  lui         $a3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283858) {
            ctx->pc = 0x28389Cu;
            goto label_28389c;
        }
    }
    ctx->pc = 0x283860u;
label_283860:
    // 0x283860: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x283860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x283864: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x283864u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x283868: 0x24432480  addiu       $v1, $v0, 0x2480
    ctx->pc = 0x283868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9344));
    // 0x28386c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x28386cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x283870: 0x24640078  addiu       $a0, $v1, 0x78
    ctx->pc = 0x283870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 120));
    // 0x283874: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x283874u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C2480u));
label_283878:
    // 0x283878: 0x50460008  beql        $v0, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x283878u;
    {
        const bool branch_taken_0x283878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x283878) {
            ctx->pc = 0x28387Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283878u;
            // 0x28387c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28389Cu;
            goto label_28389c;
        }
    }
    ctx->pc = 0x283880u;
    // 0x283880: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x283880u;
    {
        const bool branch_taken_0x283880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x283884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283880u;
        // 0x283884: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283880) {
            ctx->pc = 0x28389Cu;
            goto label_28389c;
        }
    }
    ctx->pc = 0x283888u;
    // 0x283888: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x283888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x28388c: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x28388cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x283890: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x283890u;
    {
        const bool branch_taken_0x283890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283890) {
            ctx->pc = 0x283894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283890u;
            // 0x283894: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_283878;
        }
    }
    ctx->pc = 0x283898u;
    // 0x283898: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x283898u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28389c:
    // 0x28389c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x28389Cu;
    {
        const bool branch_taken_0x28389c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28389c) {
            ctx->pc = 0x2838A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28389Cu;
            // 0x2838a0: 0x24e3af50  addiu       $v1, $a3, -0x50B0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946640));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2838D8u;
            goto label_2838d8;
        }
    }
    ctx->pc = 0x2838A4u;
    // 0x2838a4: 0x8d02aa88  lw          $v0, -0x5578($t0)
    ctx->pc = 0x2838a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294945416)));
    // 0x2838a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2838A8u;
    {
        const bool branch_taken_0x2838a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2838ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2838A8u;
        // 0x2838ac: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2838a8) {
            ctx->pc = 0x2838C4u;
            goto label_2838c4;
        }
    }
    ctx->pc = 0x2838B0u;
    // 0x2838b0: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x2838b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x2838b4: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2838b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2838b8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2838b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2838bc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2838BCu;
    {
        const bool branch_taken_0x2838bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2838bc) {
            ctx->pc = 0x2838C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2838BCu;
            // 0x2838c0: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2838CCu;
            goto label_2838cc;
        }
    }
    ctx->pc = 0x2838C4u;
label_2838c4:
    // 0x2838c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2838C4u;
    {
        const bool branch_taken_0x2838c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2838C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2838C4u;
        // 0x2838c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2838c4) {
            ctx->pc = 0x2838D0u;
            goto label_2838d0;
        }
    }
    ctx->pc = 0x2838CCu;
label_2838cc:
    // 0x2838cc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2838ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2838d0:
    // 0x2838d0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2838D0u;
    {
        const bool branch_taken_0x2838d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2838D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2838D0u;
        // 0x2838d4: 0x24e3af50  addiu       $v1, $a3, -0x50B0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2838d0) {
            ctx->pc = 0x283934u;
            goto label_283934;
        }
    }
    ctx->pc = 0x2838D8u;
label_2838d8:
    // 0x2838d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2838d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2838dc: 0x8c640090  lw          $a0, 0x90($v1)
    ctx->pc = 0x2838dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x2838e0: 0x54820011  bnel        $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2838E0u;
    {
        const bool branch_taken_0x2838e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2838e0) {
            ctx->pc = 0x2838E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2838E0u;
            // 0x2838e4: 0xac600040  sw          $zero, 0x40($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283928u;
            goto label_283928;
        }
    }
    ctx->pc = 0x2838E8u;
    // 0x2838e8: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x2838e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2838ec: 0x18a00005  blez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2838ECu;
    {
        const bool branch_taken_0x2838ec = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2838F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2838ECu;
        // 0x2838f0: 0xac640058  sw          $a0, 0x58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2838ec) {
            ctx->pc = 0x283904u;
            goto label_283904;
        }
    }
    ctx->pc = 0x2838F4u;
    // 0x2838f4: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x2838f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x2838f8: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2838f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2838fc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2838FCu;
    {
        const bool branch_taken_0x2838fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2838fc) {
            ctx->pc = 0x283900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2838FCu;
            // 0x283900: 0xac600040  sw          $zero, 0x40($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283904u;
            goto label_283904;
        }
    }
    ctx->pc = 0x283904u;
label_283904:
    // 0x283904: 0x24e3af50  addiu       $v1, $a3, -0x50B0
    ctx->pc = 0x283904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294946640));
    // 0x283908: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x283908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x28390c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28390Cu;
    {
        const bool branch_taken_0x28390c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28390Cu;
        // 0x283910: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28390c) {
            ctx->pc = 0x283920u;
            goto label_283920;
        }
    }
    ctx->pc = 0x283914u;
    // 0x283914: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x283914u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x283918: 0x3e00008  jr          $ra
    ctx->pc = 0x283918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283918u;
        // 0x28391c: 0xac620040  sw          $v0, 0x40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283920u;
label_283920:
    // 0x283920: 0x3e00008  jr          $ra
    ctx->pc = 0x283920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283920u;
        // 0x283924: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283928u;
label_283928:
    // 0x283928: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x283928u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28392c: 0x3e00008  jr          $ra
    ctx->pc = 0x28392Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28392Cu;
        // 0x283930: 0xac600058  sw          $zero, 0x58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28392Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283934u;
label_283934:
    // 0x283934: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x283934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x283938: 0xac620090  sw          $v0, 0x90($v1)
    ctx->pc = 0x283938u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 2));
    // 0x28393c: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x28393cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x283940: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x283940u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283944: 0x3e00008  jr          $ra
    ctx->pc = 0x283944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283944u;
        // 0x283948: 0xac600058  sw          $zero, 0x58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28394Cu;
    // 0x28394c: 0x0  nop
    ctx->pc = 0x28394cu;
    // NOP
    ctx->pc = 0x283950u;
}

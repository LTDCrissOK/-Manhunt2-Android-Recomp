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

// Function: sub_002C1690
// Address: 0x2c1690 - 0x2c1710
void sub_002C1690_0x2c1690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1690_0x2c1690");
#endif

    switch (ctx->pc) {
        case 0x2c16a8u: goto label_2c16a8;
        default: break;
    }

    ctx->pc = 0x2c1690u;

    // 0x2c1690: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c1690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c1694: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2C1694u;
    {
        const bool branch_taken_0x2c1694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c1694) {
            ctx->pc = 0x2C1708u;
            goto label_2c1708;
        }
    }
    ctx->pc = 0x2C169Cu;
    // 0x2c169c: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C169Cu;
    {
        const bool branch_taken_0x2c169c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2c169c) {
            ctx->pc = 0x2C16C0u;
            goto label_2c16c0;
        }
    }
    ctx->pc = 0x2C16A4u;
    // 0x2c16a4: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2c16a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2c16a8:
    // 0x2c16a8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2C16A8u;
    {
        const bool branch_taken_0x2c16a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c16a8) {
            ctx->pc = 0x2C1708u;
            goto label_2c1708;
        }
    }
    ctx->pc = 0x2C16B0u;
    // 0x2c16b0: 0x0  nop
    ctx->pc = 0x2c16b0u;
    // NOP
    // 0x2c16b4: 0x0  nop
    ctx->pc = 0x2c16b4u;
    // NOP
    // 0x2c16b8: 0x54a2fffb  bnel        $a1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C16B8u;
    {
        const bool branch_taken_0x2c16b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c16b8) {
            ctx->pc = 0x2C16BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C16B8u;
            // 0x2c16bc: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C16A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c16a8;
        }
    }
    ctx->pc = 0x2C16C0u;
label_2c16c0:
    // 0x2c16c0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C16C0u;
    {
        const bool branch_taken_0x2c16c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c16c0) {
            ctx->pc = 0x2C1708u;
            goto label_2c1708;
        }
    }
    ctx->pc = 0x2C16C8u;
    // 0x2c16c8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2c16c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2c16cc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C16CCu;
    {
        const bool branch_taken_0x2c16cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C16D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C16CCu;
        // 0x2c16d0: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c16cc) {
            ctx->pc = 0x2C16DCu;
            goto label_2c16dc;
        }
    }
    ctx->pc = 0x2C16D4u;
    // 0x2c16d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C16D4u;
    {
        const bool branch_taken_0x2c16d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C16D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C16D4u;
        // 0x2c16d8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c16d4) {
            ctx->pc = 0x2C16E0u;
            goto label_2c16e0;
        }
    }
    ctx->pc = 0x2C16DCu;
label_2c16dc:
    // 0x2c16dc: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2c16dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_2c16e0:
    // 0x2c16e0: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C16E0u;
    {
        const bool branch_taken_0x2c16e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c16e0) {
            ctx->pc = 0x2C16E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C16E0u;
            // 0x2c16e4: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C16F0u;
            goto label_2c16f0;
        }
    }
    ctx->pc = 0x2C16E8u;
    // 0x2c16e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C16E8u;
    {
        const bool branch_taken_0x2c16e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C16ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C16E8u;
        // 0x2c16ec: 0xac650004  sw          $a1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c16e8) {
            ctx->pc = 0x2C16F4u;
            goto label_2c16f4;
        }
    }
    ctx->pc = 0x2C16F0u;
label_2c16f0:
    // 0x2c16f0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2c16f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2c16f4:
    // 0x2c16f4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2c16f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2c16f8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2c16f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c16fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c16fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c1700: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1700u;
        // 0x2c1704: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1708u;
label_2c1708:
    // 0x2c1708: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C170Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1708u;
        // 0x2c170c: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C1710u;
}

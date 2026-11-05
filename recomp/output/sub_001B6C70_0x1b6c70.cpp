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

// Function: sub_001B6C70
// Address: 0x1b6c70 - 0x1b6d08
void sub_001B6C70_0x1b6c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6C70_0x1b6c70");
#endif

    switch (ctx->pc) {
        case 0x1b6c98u: goto label_1b6c98;
        case 0x1b6cb8u: goto label_1b6cb8;
        default: break;
    }

    ctx->pc = 0x1b6c70u;

    // 0x1b6c70: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1b6c70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6c74: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x1b6c74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x1b6c78: 0x8cc30084  lw          $v1, 0x84($a2)
    ctx->pc = 0x1b6c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 132)));
    // 0x1b6c7c: 0x8c640ff8  lw          $a0, 0xFF8($v1)
    ctx->pc = 0x1b6c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4088)));
    // 0x1b6c80: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b6c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b6c84: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1b6c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1b6c88: 0x14450005  bne         $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B6C88u;
    {
        const bool branch_taken_0x1b6c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1B6C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C88u;
        // 0x1b6c8c: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6c88) {
            ctx->pc = 0x1B6CA0u;
            goto label_1b6ca0;
        }
    }
    ctx->pc = 0x1B6C90u;
    // 0x1b6c90: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6C90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C90u;
        // 0x1b6c94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6C90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6C98u;
label_1b6c98:
    // 0x1b6c98: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6C98u;
        // 0x1b6c9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6C98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6CA0u;
label_1b6ca0:
    // 0x1b6ca0: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x1b6ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x1b6ca4: 0x2465f010  addiu       $a1, $v1, -0xFF0
    ctx->pc = 0x1b6ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963216));
    // 0x1b6ca8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1b6ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1b6cac: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B6CACu;
    {
        const bool branch_taken_0x1b6cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6CACu;
        // 0x1b6cb0: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6cac) {
            ctx->pc = 0x1B6CD4u;
            goto label_1b6cd4;
        }
    }
    ctx->pc = 0x1B6CB4u;
    // 0x1b6cb4: 0x0  nop
    ctx->pc = 0x1b6cb4u;
    // NOP
label_1b6cb8:
    // 0x1b6cb8: 0x50820007  beql        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B6CB8u;
    {
        const bool branch_taken_0x1b6cb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b6cb8) {
            ctx->pc = 0x1B6CBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6CB8u;
            // 0x1b6cbc: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6CD8u;
            goto label_1b6cd8;
        }
    }
    ctx->pc = 0x1B6CC0u;
    // 0x1b6cc0: 0x8c830ff8  lw          $v1, 0xFF8($a0)
    ctx->pc = 0x1b6cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4088)));
    // 0x1b6cc4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b6cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b6cc8: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1b6cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x1b6ccc: 0x1047fff2  beq         $v0, $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x1B6CCCu;
    {
        const bool branch_taken_0x1b6ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x1b6ccc) {
            ctx->pc = 0x1B6C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6c98;
        }
    }
    ctx->pc = 0x1B6CD4u;
label_1b6cd4:
    // 0x1b6cd4: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1b6cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1b6cd8:
    // 0x1b6cd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b6cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6cdc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B6CDCu;
    {
        const bool branch_taken_0x1b6cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6CDCu;
        // 0x1b6ce0: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6cdc) {
            ctx->pc = 0x1B6CE8u;
            goto label_1b6ce8;
        }
    }
    ctx->pc = 0x1B6CE4u;
    // 0x1b6ce4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b6ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b6ce8:
    // 0x1b6ce8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6CE8u;
    {
        const bool branch_taken_0x1b6ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6ce8) {
            ctx->pc = 0x1B6CF8u;
            goto label_1b6cf8;
        }
    }
    ctx->pc = 0x1B6CF0u;
    // 0x1b6cf0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1b6cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b6cf4: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x1b6cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_1b6cf8:
    // 0x1b6cf8: 0x5480ffef  bnel        $a0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1B6CF8u;
    {
        const bool branch_taken_0x1b6cf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6cf8) {
            ctx->pc = 0x1B6CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6CF8u;
            // 0x1b6cfc: 0x8cc20084  lw          $v0, 0x84($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6cb8;
        }
    }
    ctx->pc = 0x1B6D00u;
    // 0x1b6d00: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6D00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6D00u;
        // 0x1b6d04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6D00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6D08u;
}

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

// Function: sub_0026DE70
// Address: 0x26de70 - 0x26dec8
void sub_0026DE70_0x26de70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026DE70_0x26de70");
#endif

    switch (ctx->pc) {
        case 0x26de80u: goto label_26de80;
        default: break;
    }

    ctx->pc = 0x26de70u;

    // 0x26de70: 0x8c83026c  lw          $v1, 0x26C($a0)
    ctx->pc = 0x26de70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 620)));
    // 0x26de74: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x26de74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x26de78: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26DE78u;
    {
        const bool branch_taken_0x26de78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE78u;
        // 0x26de7c: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de78) {
            ctx->pc = 0x26DEA0u;
            goto label_26dea0;
        }
    }
    ctx->pc = 0x26DE80u;
label_26de80:
    // 0x26de80: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26DE80u;
    {
        const bool branch_taken_0x26de80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x26de80) {
            ctx->pc = 0x26DE90u;
            goto label_26de90;
        }
    }
    ctx->pc = 0x26DE88u;
    // 0x26de88: 0x3e00008  jr          $ra
    ctx->pc = 0x26DE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26DE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE88u;
        // 0x26de8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26DE88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26DE90u;
label_26de90:
    // 0x26de90: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x26DE90u;
    {
        const bool branch_taken_0x26de90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26de90) {
            ctx->pc = 0x26DE94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DE90u;
            // 0x26de94: 0x8c86026c  lw          $a2, 0x26C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DEA4u;
            goto label_26dea4;
        }
    }
    ctx->pc = 0x26DE98u;
    // 0x26de98: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x26de98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x26de9c: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x26de9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_26dea0:
    // 0x26dea0: 0x8c86026c  lw          $a2, 0x26C($a0)
    ctx->pc = 0x26dea0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 620)));
label_26dea4:
    // 0x26dea4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x26dea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x26dea8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26DEA8u;
    {
        const bool branch_taken_0x26dea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DEA8u;
        // 0x26deac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dea8) {
            ctx->pc = 0x26DEB4u;
            goto label_26deb4;
        }
    }
    ctx->pc = 0x26DEB0u;
    // 0x26deb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26deb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26deb4:
    // 0x26deb4: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x26DEB4u;
    {
        const bool branch_taken_0x26deb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26deb4) {
            ctx->pc = 0x26DE80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26de80;
        }
    }
    ctx->pc = 0x26DEBCu;
    // 0x26debc: 0x3e00008  jr          $ra
    ctx->pc = 0x26DEBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26DEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DEBCu;
        // 0x26dec0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26DEBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26DEC4u;
    // 0x26dec4: 0x0  nop
    ctx->pc = 0x26dec4u;
    // NOP
    ctx->pc = 0x26dec8u;
}

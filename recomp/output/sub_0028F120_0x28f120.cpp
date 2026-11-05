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

// Function: sub_0028F120
// Address: 0x28f120 - 0x28f158
void sub_0028F120_0x28f120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F120_0x28f120");
#endif

    ctx->pc = 0x28f120u;

    // 0x28f120: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x28f120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x28f124: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x28f124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x28f128: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x28f128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x28f12c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x28f12cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28f130: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28F130u;
    {
        const bool branch_taken_0x28f130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F130u;
        // 0x28f134: 0xac830034  sw          $v1, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f130) {
            ctx->pc = 0x28F14Cu;
            goto label_28f14c;
        }
    }
    ctx->pc = 0x28F138u;
    // 0x28f138: 0x9082003c  lbu         $v0, 0x3C($a0)
    ctx->pc = 0x28f138u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x28f13c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F13Cu;
    {
        const bool branch_taken_0x28f13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f13c) {
            ctx->pc = 0x28F140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28F13Cu;
            // 0x28f140: 0xac850034  sw          $a1, 0x34($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28F14Cu;
            goto label_28f14c;
        }
    }
    ctx->pc = 0x28F144u;
    // 0x28f144: 0x3e00008  jr          $ra
    ctx->pc = 0x28F144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F144u;
        // 0x28f148: 0xac800034  sw          $zero, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F14Cu;
label_28f14c:
    // 0x28f14c: 0x3e00008  jr          $ra
    ctx->pc = 0x28F14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F154u;
    // 0x28f154: 0x0  nop
    ctx->pc = 0x28f154u;
    // NOP
    ctx->pc = 0x28f158u;
}

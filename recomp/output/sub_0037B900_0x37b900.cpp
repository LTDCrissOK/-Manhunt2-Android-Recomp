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

// Function: sub_0037B900
// Address: 0x37b900 - 0x37b938
void sub_0037B900_0x37b900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B900_0x37b900");
#endif

    switch (ctx->pc) {
        case 0x37b910u: goto label_37b910;
        default: break;
    }

    ctx->pc = 0x37b900u;

    // 0x37b900: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x37b900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x37b904: 0x54a20005  bnel        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37B904u;
    {
        const bool branch_taken_0x37b904 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x37b904) {
            ctx->pc = 0x37B908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37B904u;
            // 0x37b908: 0x8c830024  lw          $v1, 0x24($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37B91Cu;
            goto label_37b91c;
        }
    }
    ctx->pc = 0x37B90Cu;
    // 0x37b90c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x37b90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_37b910:
    // 0x37b910: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x37b910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x37b914: 0x3e00008  jr          $ra
    ctx->pc = 0x37B914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B914u;
        // 0x37b918: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B91Cu;
label_37b91c:
    // 0x37b91c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x37b91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x37b920: 0x3442ffef  ori         $v0, $v0, 0xFFEF
    ctx->pc = 0x37b920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65519);
    // 0x37b924: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x37b924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x37b928: 0x3e00008  jr          $ra
    ctx->pc = 0x37B928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B928u;
        // 0x37b92c: 0xac830024  sw          $v1, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B930u;
    // 0x37b930: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x37b930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x37b934: 0x0  nop
    ctx->pc = 0x37b934u;
    // NOP
    ctx->pc = 0x37b938u;
}

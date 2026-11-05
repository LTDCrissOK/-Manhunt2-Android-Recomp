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

// Function: sub_0020A460
// Address: 0x20a460 - 0x20a4c0
void sub_0020A460_0x20a460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A460_0x20a460");
#endif

    ctx->pc = 0x20a460u;

    // 0x20a460: 0x3e00008  jr          $ra
    ctx->pc = 0x20A460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A460u;
        // 0x20a464: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A460u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A468u;
    // 0x20a468: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20a468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20a46c: 0x0  nop
    ctx->pc = 0x20a46cu;
    // NOP
    // 0x20a470: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x20a470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x20a474: 0x0  nop
    ctx->pc = 0x20a474u;
    // NOP
    // 0x20a478: 0x27bd0210  addiu       $sp, $sp, 0x210
    ctx->pc = 0x20a478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x20a47c: 0x0  nop
    ctx->pc = 0x20a47cu;
    // NOP
    // 0x20a480: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x20a480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20a484: 0x0  nop
    ctx->pc = 0x20a484u;
    // NOP
    // 0x20a488: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x20a488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20a48c: 0x0  nop
    ctx->pc = 0x20a48cu;
    // NOP
    // 0x20a490: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x20a490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20a494: 0x0  nop
    ctx->pc = 0x20a494u;
    // NOP
    // 0x20a498: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x20a498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20a49c: 0x0  nop
    ctx->pc = 0x20a49cu;
    // NOP
    // 0x20a4a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x20a4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20a4a4: 0x0  nop
    ctx->pc = 0x20a4a4u;
    // NOP
    // 0x20a4a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x20a4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20a4ac: 0x0  nop
    ctx->pc = 0x20a4acu;
    // NOP
    // 0x20a4b0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x20a4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20a4b4: 0x0  nop
    ctx->pc = 0x20a4b4u;
    // NOP
    // 0x20a4b8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x20a4b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a4bc: 0x0  nop
    ctx->pc = 0x20a4bcu;
    // NOP
    ctx->pc = 0x20a4c0u;
}

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

// Function: sub_0012CA38
// Address: 0x12ca38 - 0x12ca70
void sub_0012CA38_0x12ca38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012CA38_0x12ca38");
#endif

    switch (ctx->pc) {
        case 0x12ca50u: goto label_12ca50;
        default: break;
    }

    ctx->pc = 0x12ca38u;

    // 0x12ca38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12ca38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12ca3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12ca3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12ca40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12ca40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12ca44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12ca44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca48: 0xc04b2d0  jal         func_12CB40
    ctx->pc = 0x12CA48u;
    SET_GPR_U32(ctx, 31, 0x12CA50u);
    ctx->pc = 0x12CA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CA48u;
    // 0x12ca4c: 0xae000800  sw          $zero, 0x800($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2048), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CB40u, 0x12CA48u, 0x12CA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CA50u;
label_12ca50:
    // 0x12ca50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12ca50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ca54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12ca54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12ca58: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x12ca58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x12ca5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12ca5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ca60: 0x3e00008  jr          $ra
    ctx->pc = 0x12CA60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CA60u;
        // 0x12ca64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CA60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CA68u;
    // 0x12ca68: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x12ca68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12ca6c: 0x0  nop
    ctx->pc = 0x12ca6cu;
    // NOP
    ctx->pc = 0x12ca70u;
}

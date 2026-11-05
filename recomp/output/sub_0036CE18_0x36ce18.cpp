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

// Function: sub_0036CE18
// Address: 0x36ce18 - 0x36ce40
void sub_0036CE18_0x36ce18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036CE18_0x36ce18");
#endif

    switch (ctx->pc) {
        case 0x36ce30u: goto label_36ce30;
        default: break;
    }

    ctx->pc = 0x36ce18u;

    // 0x36ce18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36ce18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36ce1c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x36ce1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36ce20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36ce20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36ce24: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x36ce24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x36ce28: 0xc0dd2ca  jal         func_374B28
    ctx->pc = 0x36CE28u;
    SET_GPR_U32(ctx, 31, 0x36CE30u);
    ctx->pc = 0x36CE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36CE28u;
    // 0x36ce2c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374B28u, 0x36CE28u, 0x36CE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36CE30u;
label_36ce30:
    // 0x36ce30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36ce30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36ce34: 0x3e00008  jr          $ra
    ctx->pc = 0x36CE34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CE34u;
        // 0x36ce38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CE34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36CE3Cu;
    // 0x36ce3c: 0x0  nop
    ctx->pc = 0x36ce3cu;
    // NOP
    ctx->pc = 0x36ce40u;
}

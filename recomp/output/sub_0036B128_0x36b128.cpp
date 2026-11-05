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

// Function: sub_0036B128
// Address: 0x36b128 - 0x36b150
void sub_0036B128_0x36b128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036B128_0x36b128");
#endif

    switch (ctx->pc) {
        case 0x36b140u: goto label_36b140;
        default: break;
    }

    ctx->pc = 0x36b128u;

    // 0x36b128: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36b128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36b12c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36b12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36b130: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x36b130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x36b134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36b134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36b138: 0xc0daa5e  jal         func_36A978
    ctx->pc = 0x36B138u;
    SET_GPR_U32(ctx, 31, 0x36B140u);
    ctx->pc = 0x36B13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36B138u;
    // 0x36b13c: 0xac43ca8c  sw          $v1, -0x3574($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953612), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A978u, 0x36B138u, 0x36B140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B140u;
label_36b140:
    // 0x36b140: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36b140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36b144: 0x3e00008  jr          $ra
    ctx->pc = 0x36B144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36B148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36B144u;
        // 0x36b148: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B144u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36B14Cu;
    // 0x36b14c: 0x0  nop
    ctx->pc = 0x36b14cu;
    // NOP
    ctx->pc = 0x36b150u;
}

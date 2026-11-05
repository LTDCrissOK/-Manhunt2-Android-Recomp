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

// Function: sub_003E8258
// Address: 0x3e8258 - 0x3e8278
void sub_003E8258_0x3e8258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8258_0x3e8258");
#endif

    switch (ctx->pc) {
        case 0x3e8268u: goto label_3e8268;
        default: break;
    }

    ctx->pc = 0x3e8258u;

    // 0x3e8258: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e8258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e825c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e825cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e8260: 0xc0b0096  jal         func_2C0258
    ctx->pc = 0x3E8260u;
    SET_GPR_U32(ctx, 31, 0x3E8268u);
    ctx->pc = 0x3E8264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8260u;
    // 0x3e8264: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0258u, 0x3E8260u, 0x3E8268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8268u;
label_3e8268:
    // 0x3e8268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e8268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e826c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E826Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E826Cu;
        // 0x3e8270: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E826Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E8274u;
    // 0x3e8274: 0x0  nop
    ctx->pc = 0x3e8274u;
    // NOP
    ctx->pc = 0x3e8278u;
}

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

// Function: sub_0017BA00
// Address: 0x17ba00 - 0x17ba20
void sub_0017BA00_0x17ba00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BA00_0x17ba00");
#endif

    switch (ctx->pc) {
        case 0x17ba14u: goto label_17ba14;
        default: break;
    }

    ctx->pc = 0x17ba00u;

    // 0x17ba00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17ba00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17ba04: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x17ba04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x17ba08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17ba08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17ba0c: 0xc041e44  jal         func_107910
    ctx->pc = 0x17BA0Cu;
    SET_GPR_U32(ctx, 31, 0x17BA14u);
    ctx->pc = 0x17BA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BA0Cu;
    // 0x17ba10: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107910u, 0x17BA0Cu, 0x17BA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BA14u;
label_17ba14:
    // 0x17ba14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ba14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ba18: 0x3e00008  jr          $ra
    ctx->pc = 0x17BA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BA18u;
        // 0x17ba1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BA20u;
}

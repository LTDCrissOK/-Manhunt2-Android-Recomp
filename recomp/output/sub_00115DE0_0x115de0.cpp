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

// Function: sub_00115DE0
// Address: 0x115de0 - 0x115e00
void sub_00115DE0_0x115de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115DE0_0x115de0");
#endif

    switch (ctx->pc) {
        case 0x115df4u: goto label_115df4;
        default: break;
    }

    ctx->pc = 0x115de0u;

    // 0x115de0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x115de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x115de4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x115de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x115de8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x115de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x115dec: 0xc04576a  jal         func_115DA8
    ctx->pc = 0x115DECu;
    SET_GPR_U32(ctx, 31, 0x115DF4u);
    ctx->pc = 0x115DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115DECu;
    // 0x115df0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x115DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115DA8u, 0x115DECu, 0x115DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115DF4u;
label_115df4:
    // 0x115df4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x115df4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115df8: 0x3e00008  jr          $ra
    ctx->pc = 0x115DF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115DF8u;
        // 0x115dfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115DF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115E00u;
}

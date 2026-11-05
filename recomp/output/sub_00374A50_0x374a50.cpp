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

// Function: sub_00374A50
// Address: 0x374a50 - 0x374a80
void sub_00374A50_0x374a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374A50_0x374a50");
#endif

    switch (ctx->pc) {
        case 0x374a64u: goto label_374a64;
        default: break;
    }

    ctx->pc = 0x374a50u;

    // 0x374a50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374a54: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x374a54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x374a58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374a5c: 0xc0dde56  jal         func_377958
    ctx->pc = 0x374A5Cu;
    SET_GPR_U32(ctx, 31, 0x374A64u);
    ctx->pc = 0x374A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374A5Cu;
    // 0x374a60: 0x24848150  addiu       $a0, $a0, -0x7EB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377958u, 0x374A5Cu, 0x374A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374A64u;
label_374a64:
    // 0x374a64: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x374a64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x374a68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x374a6c: 0x8c836080  lw          $v1, 0x6080($a0)
    ctx->pc = 0x374a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6C6080u));
    // 0x374a70: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x374a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x374a74: 0x2c620001  sltiu       $v0, $v1, 0x1
    ctx->pc = 0x374a74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x374a78: 0x3e00008  jr          $ra
    ctx->pc = 0x374A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374A78u;
        // 0x374a7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374A80u;
}

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

// Function: sub_00356038
// Address: 0x356038 - 0x356060
void sub_00356038_0x356038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356038_0x356038");
#endif

    switch (ctx->pc) {
        case 0x356050u: goto label_356050;
        default: break;
    }

    ctx->pc = 0x356038u;

    // 0x356038: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x356038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35603c: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x35603cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x356040: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x356040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x356044: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x356044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x356048: 0xc0d5834  jal         func_3560D0
    ctx->pc = 0x356048u;
    SET_GPR_U32(ctx, 31, 0x356050u);
    ctx->pc = 0x35604Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356048u;
    // 0x35604c: 0x2484c520  addiu       $a0, $a0, -0x3AE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3560D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3560D0u, 0x356048u, 0x356050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356050u;
label_356050:
    // 0x356050: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x356050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356054: 0x3e00008  jr          $ra
    ctx->pc = 0x356054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356054u;
        // 0x356058: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35605Cu;
    // 0x35605c: 0x0  nop
    ctx->pc = 0x35605cu;
    // NOP
    ctx->pc = 0x356060u;
}

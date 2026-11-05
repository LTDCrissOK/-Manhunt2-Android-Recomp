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

// Function: sub_00122448
// Address: 0x122448 - 0x122470
void sub_00122448_0x122448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122448_0x122448");
#endif

    switch (ctx->pc) {
        case 0x122460u: goto label_122460;
        default: break;
    }

    ctx->pc = 0x122448u;

    // 0x122448: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x122448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12244c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x12244cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122450: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x122450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x122454: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x122454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x122458: 0xc048994  jal         func_122650
    ctx->pc = 0x122458u;
    SET_GPR_U32(ctx, 31, 0x122460u);
    ctx->pc = 0x12245Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122458u;
    // 0x12245c: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122650u, 0x122458u, 0x122460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122460u;
label_122460:
    // 0x122460: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x122460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122464: 0x3e00008  jr          $ra
    ctx->pc = 0x122464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122464u;
        // 0x122468: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12246Cu;
    // 0x12246c: 0x0  nop
    ctx->pc = 0x12246cu;
    // NOP
    ctx->pc = 0x122470u;
}

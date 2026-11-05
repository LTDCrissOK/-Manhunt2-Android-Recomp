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

// Function: sub_00281448
// Address: 0x281448 - 0x281470
void sub_00281448_0x281448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281448_0x281448");
#endif

    switch (ctx->pc) {
        case 0x281458u: goto label_281458;
        default: break;
    }

    ctx->pc = 0x281448u;

    // 0x281448: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x281448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28144c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28144cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281450: 0xc0a050a  jal         func_281428
    ctx->pc = 0x281450u;
    SET_GPR_U32(ctx, 31, 0x281458u);
    ctx->pc = 0x281428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281428u, 0x281450u, 0x281458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281458u;
label_281458:
    // 0x281458: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x281458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x28145c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28145cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281460: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281464: 0xac62a320  sw          $v0, -0x5CE0($v1)
    ctx->pc = 0x281464u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FA320u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA320u, _value); } while (0);
    // 0x281468: 0x3e00008  jr          $ra
    ctx->pc = 0x281468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281468u;
        // 0x28146c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281470u;
}

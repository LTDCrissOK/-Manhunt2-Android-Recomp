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

// Function: sub_001D9028
// Address: 0x1d9028 - 0x1d9068
void sub_001D9028_0x1d9028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9028_0x1d9028");
#endif

    switch (ctx->pc) {
        case 0x1d9038u: goto label_1d9038;
        case 0x1d9040u: goto label_1d9040;
        case 0x1d9048u: goto label_1d9048;
        case 0x1d9050u: goto label_1d9050;
        case 0x1d9058u: goto label_1d9058;
        default: break;
    }

    ctx->pc = 0x1d9028u;

    // 0x1d9028: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d902c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d902cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d9030: 0xc0793cc  jal         func_1E4F30
    ctx->pc = 0x1D9030u;
    SET_GPR_U32(ctx, 31, 0x1D9038u);
    ctx->pc = 0x1E4F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E4F30u, 0x1D9030u, 0x1D9038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9038u;
label_1d9038:
    // 0x1d9038: 0xc079666  jal         func_1E5998
    ctx->pc = 0x1D9038u;
    SET_GPR_U32(ctx, 31, 0x1D9040u);
    ctx->pc = 0x1E5998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5998u, 0x1D9038u, 0x1D9040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9040u;
label_1d9040:
    // 0x1d9040: 0xc079dc6  jal         func_1E7718
    ctx->pc = 0x1D9040u;
    SET_GPR_U32(ctx, 31, 0x1D9048u);
    ctx->pc = 0x1E7718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7718u, 0x1D9040u, 0x1D9048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9048u;
label_1d9048:
    // 0x1d9048: 0xc07a228  jal         func_1E88A0
    ctx->pc = 0x1D9048u;
    SET_GPR_U32(ctx, 31, 0x1D9050u);
    ctx->pc = 0x1E88A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E88A0u, 0x1D9048u, 0x1D9050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9050u;
label_1d9050:
    // 0x1d9050: 0xc07ab20  jal         func_1EAC80
    ctx->pc = 0x1D9050u;
    SET_GPR_U32(ctx, 31, 0x1D9058u);
    ctx->pc = 0x1EAC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAC80u, 0x1D9050u, 0x1D9058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9058u;
label_1d9058:
    // 0x1d9058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d9058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d905c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D905Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D905Cu;
        // 0x1d9060: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D905Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9064u;
    // 0x1d9064: 0x0  nop
    ctx->pc = 0x1d9064u;
    // NOP
    ctx->pc = 0x1d9068u;
}

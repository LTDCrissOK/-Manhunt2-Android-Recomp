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

// Function: sub_0028B7C0
// Address: 0x28b7c0 - 0x28b7f0
void sub_0028B7C0_0x28b7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B7C0_0x28b7c0");
#endif

    switch (ctx->pc) {
        case 0x28b7d8u: goto label_28b7d8;
        default: break;
    }

    ctx->pc = 0x28b7c0u;

    // 0x28b7c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28b7c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28b7c4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28b7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28b7c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28b7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28b7cc: 0x8c43bd50  lw          $v1, -0x42B0($v0)
    ctx->pc = 0x28b7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x28b7d0: 0xc0aca82  jal         func_2B2A08
    ctx->pc = 0x28B7D0u;
    SET_GPR_U32(ctx, 31, 0x28B7D8u);
    ctx->pc = 0x28B7D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B7D0u;
    // 0x28b7d4: 0x8c640224  lw          $a0, 0x224($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2A08u, 0x28B7D0u, 0x28B7D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B7D8u;
label_28b7d8:
    // 0x28b7d8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x28b7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x28b7dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28b7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b7e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28b7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b7e4: 0xac62adfc  sw          $v0, -0x5204($v1)
    ctx->pc = 0x28b7e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BADFCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BADFCu, _value); } while (0);
    // 0x28b7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x28B7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B7E8u;
        // 0x28b7ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B7F0u;
}

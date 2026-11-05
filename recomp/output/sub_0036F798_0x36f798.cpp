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

// Function: sub_0036F798
// Address: 0x36f798 - 0x36f7d0
void sub_0036F798_0x36f798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036F798_0x36f798");
#endif

    switch (ctx->pc) {
        case 0x36f7c4u: goto label_36f7c4;
        default: break;
    }

    ctx->pc = 0x36f798u;

    // 0x36f798: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x36f798u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f79c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x36f79cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f7a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36f7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36f7a4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x36f7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f7a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x36f7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x36f7ac: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x36f7acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
    // 0x36f7b0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x36f7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f7b4: 0x24c6f558  addiu       $a2, $a2, -0xAA8
    ctx->pc = 0x36f7b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964568));
    // 0x36f7b8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x36f7b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36f7bc: 0xc0c957e  jal         func_3255F8
    ctx->pc = 0x36F7BCu;
    SET_GPR_U32(ctx, 31, 0x36F7C4u);
    ctx->pc = 0x36F7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36F7BCu;
    // 0x36f7c0: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3255F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3255F8u, 0x36F7BCu, 0x36F7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36F7C4u;
label_36f7c4:
    // 0x36f7c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36f7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36f7c8: 0x3e00008  jr          $ra
    ctx->pc = 0x36F7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36F7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36F7C8u;
        // 0x36f7cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36F7C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36F7D0u;
}

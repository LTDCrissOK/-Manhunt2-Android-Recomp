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

// Function: sub_00344B18
// Address: 0x344b18 - 0x344b38
void sub_00344B18_0x344b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344B18_0x344b18");
#endif

    switch (ctx->pc) {
        case 0x344b2cu: goto label_344b2c;
        default: break;
    }

    ctx->pc = 0x344b18u;

    // 0x344b18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344b1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x344b20: 0xc48c0070  lwc1        $f12, 0x70($a0)
    ctx->pc = 0x344b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x344b24: 0xc0d122c  jal         func_3448B0
    ctx->pc = 0x344B24u;
    SET_GPR_U32(ctx, 31, 0x344B2Cu);
    ctx->pc = 0x344B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344B24u;
    // 0x344b28: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3448B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3448B0u, 0x344B24u, 0x344B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344B2Cu;
label_344b2c:
    // 0x344b2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x344b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344b30: 0x3e00008  jr          $ra
    ctx->pc = 0x344B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344B30u;
        // 0x344b34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344B38u;
}

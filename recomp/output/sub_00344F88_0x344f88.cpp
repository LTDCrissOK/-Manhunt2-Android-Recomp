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

// Function: sub_00344F88
// Address: 0x344f88 - 0x344fa8
void sub_00344F88_0x344f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344F88_0x344f88");
#endif

    switch (ctx->pc) {
        case 0x344f9cu: goto label_344f9c;
        default: break;
    }

    ctx->pc = 0x344f88u;

    // 0x344f88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x344f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x344f8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x344f90: 0xc48d0028  lwc1        $f13, 0x28($a0)
    ctx->pc = 0x344f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x344f94: 0xc0d1656  jal         func_345958
    ctx->pc = 0x344F94u;
    SET_GPR_U32(ctx, 31, 0x344F9Cu);
    ctx->pc = 0x344F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344F94u;
    // 0x344f98: 0xc48c0024  lwc1        $f12, 0x24($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x345958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345958u, 0x344F94u, 0x344F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344F9Cu;
label_344f9c:
    // 0x344f9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x344f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x344FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344FA0u;
        // 0x344fa4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344FA8u;
}

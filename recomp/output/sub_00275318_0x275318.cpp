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

// Function: sub_00275318
// Address: 0x275318 - 0x275350
void sub_00275318_0x275318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275318_0x275318");
#endif

    switch (ctx->pc) {
        case 0x275344u: goto label_275344;
        default: break;
    }

    ctx->pc = 0x275318u;

    // 0x275318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x275318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27531c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x27531cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275320: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275324: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x275324u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x275328: 0xf8410300  sqc2        $vf1, 0x300($v0)
    ctx->pc = 0x275328u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 768), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x27532c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27532cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275330: 0xa0460373  sb          $a2, 0x373($v0)
    ctx->pc = 0x275330u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 883), (uint8_t)GPR_U32(ctx, 6));
    // 0x275334: 0xa0430370  sb          $v1, 0x370($v0)
    ctx->pc = 0x275334u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 880), (uint8_t)GPR_U32(ctx, 3));
    // 0x275338: 0x24441e80  addiu       $a0, $v0, 0x1E80
    ctx->pc = 0x275338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 7808));
    // 0x27533c: 0xc0d73fc  jal         func_35CFF0
    ctx->pc = 0x27533Cu;
    SET_GPR_U32(ctx, 31, 0x275344u);
    ctx->pc = 0x275340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27533Cu;
    // 0x275340: 0xa0470374  sb          $a3, 0x374($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 884), (uint8_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFF0u, 0x27533Cu, 0x275344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275344u;
label_275344:
    // 0x275344: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275348: 0x3e00008  jr          $ra
    ctx->pc = 0x275348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275348u;
        // 0x27534c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275350u;
}

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

// Function: sub_0028E860
// Address: 0x28e860 - 0x28e898
void sub_0028E860_0x28e860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E860_0x28e860");
#endif

    switch (ctx->pc) {
        case 0x28e874u: goto label_28e874;
        default: break;
    }

    ctx->pc = 0x28e860u;

    // 0x28e860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28e860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28e864: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28e864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28e868: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28e868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28e86c: 0xc0a3948  jal         func_28E520
    ctx->pc = 0x28E86Cu;
    SET_GPR_U32(ctx, 31, 0x28E874u);
    ctx->pc = 0x28E870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E86Cu;
    // 0x28e870: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E520u, 0x28E86Cu, 0x28E874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E874u;
label_28e874:
    // 0x28e874: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E874u;
    {
        const bool branch_taken_0x28e874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e874) {
            ctx->pc = 0x28E878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28E874u;
            // 0x28e878: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28E888u;
            goto label_28e888;
        }
    }
    ctx->pc = 0x28E87Cu;
    // 0x28e87c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x28e87cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28e880: 0xf8410020  sqc2        $vf1, 0x20($v0)
    ctx->pc = 0x28e880u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x28e884: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28e884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28e888:
    // 0x28e888: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28e888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28e88c: 0x3e00008  jr          $ra
    ctx->pc = 0x28E88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E88Cu;
        // 0x28e890: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E894u;
    // 0x28e894: 0x0  nop
    ctx->pc = 0x28e894u;
    // NOP
    ctx->pc = 0x28e898u;
}

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

// Function: sub_00271BE8
// Address: 0x271be8 - 0x271c20
void sub_00271BE8_0x271be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271BE8_0x271be8");
#endif

    switch (ctx->pc) {
        case 0x271bfcu: goto label_271bfc;
        default: break;
    }

    ctx->pc = 0x271be8u;

    // 0x271be8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x271be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x271bec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x271becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x271bf0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x271bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x271bf4: 0xc0845aa  jal         func_2116A8
    ctx->pc = 0x271BF4u;
    SET_GPR_U32(ctx, 31, 0x271BFCu);
    ctx->pc = 0x271BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271BF4u;
    // 0x271bf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2116A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2116A8u, 0x271BF4u, 0x271BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271BFCu;
label_271bfc:
    // 0x271bfc: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x271bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x271c00: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x271c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x271c04: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x271c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x271c08: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x271c08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x271c0c: 0xfa010230  sqc2        $vf1, 0x230($s0)
    ctx->pc = 0x271c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 560), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x271c10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x271c10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271c14: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x271c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x271c18: 0x3e00008  jr          $ra
    ctx->pc = 0x271C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271C18u;
        // 0x271c1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271C20u;
}

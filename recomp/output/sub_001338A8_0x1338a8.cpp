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

// Function: sub_001338A8
// Address: 0x1338a8 - 0x1338e8
void sub_001338A8_0x1338a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001338A8_0x1338a8");
#endif

    switch (ctx->pc) {
        case 0x1338c0u: goto label_1338c0;
        case 0x1338d0u: goto label_1338d0;
        default: break;
    }

    ctx->pc = 0x1338a8u;

    // 0x1338a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1338a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1338ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1338acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1338b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1338b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1338b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1338b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1338b8: 0xc04c01e  jal         func_130078
    ctx->pc = 0x1338B8u;
    SET_GPR_U32(ctx, 31, 0x1338C0u);
    ctx->pc = 0x1338BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1338B8u;
    // 0x1338bc: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x130078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x130078u, 0x1338B8u, 0x1338C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1338C0u;
label_1338c0:
    // 0x1338c0: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x1338c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1338c4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1338c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1338c8: 0xc042080  jal         func_108200
    ctx->pc = 0x1338C8u;
    SET_GPR_U32(ctx, 31, 0x1338D0u);
    ctx->pc = 0x1338CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1338C8u;
    // 0x1338cc: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108200u, 0x1338C8u, 0x1338D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1338D0u;
label_1338d0:
    // 0x1338d0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1338d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1338d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1338d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1338d8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1338d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1338dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1338DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1338E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1338DCu;
        // 0x1338e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1338DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1338E4u;
    // 0x1338e4: 0x0  nop
    ctx->pc = 0x1338e4u;
    // NOP
    ctx->pc = 0x1338e8u;
}

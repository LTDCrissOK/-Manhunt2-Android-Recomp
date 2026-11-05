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

// Function: sub_002DD9D0
// Address: 0x2dd9d0 - 0x2dda18
void sub_002DD9D0_0x2dd9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD9D0_0x2dd9d0");
#endif

    switch (ctx->pc) {
        case 0x2dd9f4u: goto label_2dd9f4;
        case 0x2dd9fcu: goto label_2dd9fc;
        case 0x2dda08u: goto label_2dda08;
        default: break;
    }

    ctx->pc = 0x2dd9d0u;

    // 0x2dd9d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dd9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dd9d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dd9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dd9d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2dd9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2dd9dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dd9dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd9e0: 0x8e0200e0  lw          $v0, 0xE0($s0)
    ctx->pc = 0x2dd9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x2dd9e4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DD9E4u;
    {
        const bool branch_taken_0x2dd9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd9e4) {
            ctx->pc = 0x2DDA00u;
            goto label_2dda00;
        }
    }
    ctx->pc = 0x2DD9ECu;
    // 0x2dd9ec: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2DD9ECu;
    SET_GPR_U32(ctx, 31, 0x2DD9F4u);
    ctx->pc = 0x2DD9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD9ECu;
    // 0x2dd9f0: 0x24040fc0  addiu       $a0, $zero, 0xFC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2DD9ECu, 0x2DD9F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD9F4u;
label_2dd9f4:
    // 0x2dd9f4: 0xc0b8810  jal         func_2E2040
    ctx->pc = 0x2DD9F4u;
    SET_GPR_U32(ctx, 31, 0x2DD9FCu);
    ctx->pc = 0x2DD9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD9F4u;
    // 0x2dd9f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E2040u, 0x2DD9F4u, 0x2DD9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD9FCu;
label_2dd9fc:
    // 0x2dd9fc: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x2dd9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
label_2dda00:
    // 0x2dda00: 0xc0b72a0  jal         func_2DCA80
    ctx->pc = 0x2DDA00u;
    SET_GPR_U32(ctx, 31, 0x2DDA08u);
    ctx->pc = 0x2DDA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDA00u;
    // 0x2dda04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCA80u, 0x2DDA00u, 0x2DDA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDA08u;
label_2dda08:
    // 0x2dda08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dda08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dda0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2dda0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2dda10: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDA10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDA10u;
        // 0x2dda14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDA10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDA18u;
}

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

// Function: sub_003365B8
// Address: 0x3365b8 - 0x336610
void sub_003365B8_0x3365b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003365B8_0x3365b8");
#endif

    switch (ctx->pc) {
        case 0x3365e0u: goto label_3365e0;
        case 0x3365f8u: goto label_3365f8;
        default: break;
    }

    ctx->pc = 0x3365b8u;

    // 0x3365b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3365b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3365bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3365bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3365c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3365c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3365c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3365c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3365c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3365c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3365cc: 0x8c4501b8  lw          $a1, 0x1B8($v0)
    ctx->pc = 0x3365ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 440)));
    // 0x3365d0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3365D0u;
    {
        const bool branch_taken_0x3365d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3365D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3365D0u;
        // 0x3365d4: 0x3c04005b  lui         $a0, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3365d0) {
            ctx->pc = 0x3365F8u;
            goto label_3365f8;
        }
    }
    ctx->pc = 0x3365D8u;
    // 0x3365d8: 0xc0fbab6  jal         func_3EEAD8
    ctx->pc = 0x3365D8u;
    SET_GPR_U32(ctx, 31, 0x3365E0u);
    ctx->pc = 0x3365DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3365D8u;
    // 0x3365dc: 0x24846ea0  addiu       $a0, $a0, 0x6EA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EEAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EEAD8u, 0x3365D8u, 0x3365E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3365E0u;
label_3365e0:
    // 0x3365e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3365e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3365e4: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x3365e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
    // 0x3365e8: 0x24846eb0  addiu       $a0, $a0, 0x6EB0
    ctx->pc = 0x3365e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28336));
    // 0x3365ec: 0xac4001b8  sw          $zero, 0x1B8($v0)
    ctx->pc = 0x3365ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 440), GPR_U32(ctx, 0));
    // 0x3365f0: 0xc0fbadc  jal         func_3EEB70
    ctx->pc = 0x3365F0u;
    SET_GPR_U32(ctx, 31, 0x3365F8u);
    ctx->pc = 0x3365F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3365F0u;
    // 0x3365f4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EEB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EEB70u, 0x3365F0u, 0x3365F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3365F8u;
label_3365f8:
    // 0x3365f8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3365f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x3365fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3365fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336600: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x336600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x336604: 0x3e00008  jr          $ra
    ctx->pc = 0x336604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336604u;
        // 0x336608: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33660Cu;
    // 0x33660c: 0x0  nop
    ctx->pc = 0x33660cu;
    // NOP
    ctx->pc = 0x336610u;
}

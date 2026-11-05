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

// Function: sub_0027ABD0
// Address: 0x27abd0 - 0x27ac10
void sub_0027ABD0_0x27abd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027ABD0_0x27abd0");
#endif

    switch (ctx->pc) {
        case 0x27abf0u: goto label_27abf0;
        case 0x27abfcu: goto label_27abfc;
        default: break;
    }

    ctx->pc = 0x27abd0u;

    // 0x27abd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27abd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27abd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27abd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27abd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27abd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27abdc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x27abdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x27abe0: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x27abe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x27abe4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27abe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27abe8: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x27ABE8u;
    SET_GPR_U32(ctx, 31, 0x27ABF0u);
    ctx->pc = 0x27ABECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ABE8u;
    // 0x27abec: 0x2484edc0  addiu       $a0, $a0, -0x1240 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x27ABE8u, 0x27ABF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ABF0u;
label_27abf0:
    // 0x27abf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27abf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27abf4: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x27ABF4u;
    SET_GPR_U32(ctx, 31, 0x27ABFCu);
    ctx->pc = 0x27ABF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ABF4u;
    // 0x27abf8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x27ABF4u, 0x27ABFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ABFCu;
label_27abfc:
    // 0x27abfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27abfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ac00: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x27ac00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27ac04: 0x3e00008  jr          $ra
    ctx->pc = 0x27AC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AC04u;
        // 0x27ac08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27AC0Cu;
    // 0x27ac0c: 0x0  nop
    ctx->pc = 0x27ac0cu;
    // NOP
    ctx->pc = 0x27ac10u;
}

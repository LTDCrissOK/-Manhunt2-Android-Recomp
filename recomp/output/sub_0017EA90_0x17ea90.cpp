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

// Function: sub_0017EA90
// Address: 0x17ea90 - 0x17ead8
void sub_0017EA90_0x17ea90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017EA90_0x17ea90");
#endif

    switch (ctx->pc) {
        case 0x17eaa8u: goto label_17eaa8;
        case 0x17eab4u: goto label_17eab4;
        case 0x17eac4u: goto label_17eac4;
        default: break;
    }

    ctx->pc = 0x17ea90u;

    // 0x17ea90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17ea90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17ea94: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17ea94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17ea98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17ea98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea9c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17ea9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17eaa0: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x17EAA0u;
    SET_GPR_U32(ctx, 31, 0x17EAA8u);
    ctx->pc = 0x17EAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EAA0u;
    // 0x17eaa4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x17EAA0u, 0x17EAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EAA8u;
label_17eaa8:
    // 0x17eaa8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17eaa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eaac: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x17EAACu;
    SET_GPR_U32(ctx, 31, 0x17EAB4u);
    ctx->pc = 0x17EAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EAACu;
    // 0x17eab0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x17EAACu, 0x17EAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EAB4u;
label_17eab4:
    // 0x17eab4: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x17eab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x17eab8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17eab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eabc: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x17EABCu;
    SET_GPR_U32(ctx, 31, 0x17EAC4u);
    ctx->pc = 0x17EAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17EABCu;
    // 0x17eac0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x17EABCu, 0x17EAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17EAC4u;
label_17eac4:
    // 0x17eac4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17eac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17eac8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17eac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17eacc: 0x3e00008  jr          $ra
    ctx->pc = 0x17EACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EACCu;
        // 0x17ead0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17EACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17EAD4u;
    // 0x17ead4: 0x0  nop
    ctx->pc = 0x17ead4u;
    // NOP
    ctx->pc = 0x17ead8u;
}

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

// Function: sub_0028ABC0
// Address: 0x28abc0 - 0x28abf0
void sub_0028ABC0_0x28abc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028ABC0_0x28abc0");
#endif

    switch (ctx->pc) {
        case 0x28abd0u: goto label_28abd0;
        default: break;
    }

    ctx->pc = 0x28abc0u;

    // 0x28abc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28abc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28abc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28abc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28abc8: 0xc09f5e8  jal         func_27D7A0
    ctx->pc = 0x28ABC8u;
    SET_GPR_U32(ctx, 31, 0x28ABD0u);
    ctx->pc = 0x27D7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D7A0u, 0x28ABC8u, 0x28ABD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ABD0u;
label_28abd0:
    // 0x28abd0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x28abd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x28abd4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28abd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28abd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28abd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28abdc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28abdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28abe0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28abe0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28abe4: 0x3e00008  jr          $ra
    ctx->pc = 0x28ABE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28ABE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABE4u;
        // 0x28abe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28ABE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28ABECu;
    // 0x28abec: 0x0  nop
    ctx->pc = 0x28abecu;
    // NOP
    ctx->pc = 0x28abf0u;
}

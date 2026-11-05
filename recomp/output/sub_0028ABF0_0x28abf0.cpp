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

// Function: sub_0028ABF0
// Address: 0x28abf0 - 0x28ac40
void sub_0028ABF0_0x28abf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028ABF0_0x28abf0");
#endif

    switch (ctx->pc) {
        case 0x28ac00u: goto label_28ac00;
        default: break;
    }

    ctx->pc = 0x28abf0u;

    // 0x28abf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28abf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28abf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28abf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28abf8: 0xc09f60e  jal         func_27D838
    ctx->pc = 0x28ABF8u;
    SET_GPR_U32(ctx, 31, 0x28AC00u);
    ctx->pc = 0x27D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D838u, 0x28ABF8u, 0x28AC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28AC00u;
label_28ac00:
    // 0x28ac00: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x28ac00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x28ac04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28ac04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28ac08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28ac08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ac0c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x28ac0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x28ac10: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x28ac10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x28ac14: 0x3e00008  jr          $ra
    ctx->pc = 0x28AC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AC14u;
        // 0x28ac18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AC1Cu;
    // 0x28ac1c: 0x0  nop
    ctx->pc = 0x28ac1cu;
    // NOP
    // 0x28ac20: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x28ac20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28ac24: 0x0  nop
    ctx->pc = 0x28ac24u;
    // NOP
    // 0x28ac28: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x28ac28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28ac2c: 0x0  nop
    ctx->pc = 0x28ac2cu;
    // NOP
    // 0x28ac30: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x28ac30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ac34: 0x0  nop
    ctx->pc = 0x28ac34u;
    // NOP
    // 0x28ac38: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x28ac38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28ac3c: 0x0  nop
    ctx->pc = 0x28ac3cu;
    // NOP
    ctx->pc = 0x28ac40u;
}

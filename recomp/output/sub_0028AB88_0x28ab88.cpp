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

// Function: sub_0028AB88
// Address: 0x28ab88 - 0x28abc0
void sub_0028AB88_0x28ab88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AB88_0x28ab88");
#endif

    switch (ctx->pc) {
        case 0x28abb4u: goto label_28abb4;
        default: break;
    }

    ctx->pc = 0x28ab88u;

    // 0x28ab88: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x28ab88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28ab8c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28ab8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28ab90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28ab90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28ab94: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x28ab94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x28ab98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28ab98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ab9c: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x28ab9cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x28aba0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28aba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28aba4: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x28aba4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x28aba8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28aba8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28abac: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x28ABACu;
    SET_GPR_U32(ctx, 31, 0x28ABB4u);
    ctx->pc = 0x28ABB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28ABACu;
    // 0x28abb0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x28ABACu, 0x28ABB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28ABB4u;
label_28abb4:
    // 0x28abb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28abb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28abb8: 0x3e00008  jr          $ra
    ctx->pc = 0x28ABB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28ABBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ABB8u;
        // 0x28abbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28ABB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28ABC0u;
}

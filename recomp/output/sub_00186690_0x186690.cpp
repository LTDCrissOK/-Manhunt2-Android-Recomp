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

// Function: sub_00186690
// Address: 0x186690 - 0x1866c8
void sub_00186690_0x186690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186690_0x186690");
#endif

    ctx->pc = 0x186690u;

    // 0x186690: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x186690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x186694: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x186694u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x186698: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x186698u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18669c: 0x3c013f2a  lui         $at, 0x3F2A
    ctx->pc = 0x18669cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16170 << 16));
    // 0x1866a0: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1866a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1866a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1866a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1866a8: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x1866a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x1866ac: 0xe48c0010  swc1        $f12, 0x10($a0)
    ctx->pc = 0x1866acu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1866b0: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1866b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1866b4: 0xe48c0004  swc1        $f12, 0x4($a0)
    ctx->pc = 0x1866b4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1866b8: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x1866b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1866bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1866BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1866C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1866BCu;
        // 0x1866c0: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1866BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1866C4u;
    // 0x1866c4: 0x0  nop
    ctx->pc = 0x1866c4u;
    // NOP
    ctx->pc = 0x1866c8u;
}

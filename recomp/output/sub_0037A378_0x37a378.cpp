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

// Function: sub_0037A378
// Address: 0x37a378 - 0x37a3b8
void sub_0037A378_0x37a378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037A378_0x37a378");
#endif

    ctx->pc = 0x37a378u;

    // 0x37a378: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x37a378u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x37a37c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x37a37cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x37a380: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x37a380u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x37a384: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x37a384u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37a388: 0x0  nop
    ctx->pc = 0x37a388u;
    // NOP
    // 0x37a38c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x37a38cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37a390: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x37a390u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x37a394: 0x0  nop
    ctx->pc = 0x37a394u;
    // NOP
    // 0x37a398: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x37a398u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x37a39c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x37a39cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37a3a0: 0x0  nop
    ctx->pc = 0x37a3a0u;
    // NOP
    // 0x37a3a4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x37a3a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x37a3a8: 0xe4810080  swc1        $f1, 0x80($a0)
    ctx->pc = 0x37a3a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x37a3ac: 0xe4820084  swc1        $f2, 0x84($a0)
    ctx->pc = 0x37a3acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 132), bits); }
    // 0x37a3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x37A3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A3B0u;
        // 0x37a3b4: 0xe4800088  swc1        $f0, 0x88($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A3B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A3B8u;
}

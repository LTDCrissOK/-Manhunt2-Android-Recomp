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

// Function: sub_001FA628
// Address: 0x1fa628 - 0x1fa668
void sub_001FA628_0x1fa628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA628_0x1fa628");
#endif

    ctx->pc = 0x1fa628u;

    // 0x1fa628: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1fa628u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1fa62c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1fa62cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fa630: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1fa630u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fa634: 0x0  nop
    ctx->pc = 0x1fa634u;
    // NOP
    // 0x1fa638: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fa638u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fa63c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1fa63cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fa640: 0x0  nop
    ctx->pc = 0x1fa640u;
    // NOP
    // 0x1fa644: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fa644u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fa648: 0x460c0b01  sub.s       $f12, $f1, $f12
    ctx->pc = 0x1fa648u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x1fa64c: 0x0  nop
    ctx->pc = 0x1fa64cu;
    // NOP
    // 0x1fa650: 0x0  nop
    ctx->pc = 0x1fa650u;
    // NOP
    // 0x1fa654: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x1fa654u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[1]); }
    // 0x1fa658: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA658u;
        // 0x1fa65c: 0x460c0002  mul.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA660u;
    // 0x1fa660: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1fa660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1fa664: 0x0  nop
    ctx->pc = 0x1fa664u;
    // NOP
    ctx->pc = 0x1fa668u;
}

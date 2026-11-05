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

// Function: sub_001FB840
// Address: 0x1fb840 - 0x1fb880
void sub_001FB840_0x1fb840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB840_0x1fb840");
#endif

    ctx->pc = 0x1fb840u;

    // 0x1fb840: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x1fb840u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1fb844: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1fb844u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fb848: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1fb848u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fb84c: 0x0  nop
    ctx->pc = 0x1fb84cu;
    // NOP
    // 0x1fb850: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1fb850u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fb854: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1fb854u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fb858: 0x0  nop
    ctx->pc = 0x1fb858u;
    // NOP
    // 0x1fb85c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fb85cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fb860: 0x460c0b01  sub.s       $f12, $f1, $f12
    ctx->pc = 0x1fb860u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x1fb864: 0x0  nop
    ctx->pc = 0x1fb864u;
    // NOP
    // 0x1fb868: 0x0  nop
    ctx->pc = 0x1fb868u;
    // NOP
    // 0x1fb86c: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x1fb86cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[1]); }
    // 0x1fb870: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB870u;
        // 0x1fb874: 0x460c0002  mul.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB878u;
    // 0x1fb878: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1fb878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1fb87c: 0x0  nop
    ctx->pc = 0x1fb87cu;
    // NOP
    ctx->pc = 0x1fb880u;
}

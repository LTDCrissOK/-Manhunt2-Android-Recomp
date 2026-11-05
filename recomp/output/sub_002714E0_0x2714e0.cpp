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

// Function: sub_002714E0
// Address: 0x2714e0 - 0x271520
void sub_002714E0_0x2714e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002714E0_0x2714e0");
#endif

    ctx->pc = 0x2714e0u;

    // 0x2714e0: 0x8c820288  lw          $v0, 0x288($a0)
    ctx->pc = 0x2714e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 648)));
    // 0x2714e4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2714E4u;
    {
        const bool branch_taken_0x2714e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2714E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2714E4u;
        // 0x2714e8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2714e4) {
            ctx->pc = 0x271500u;
            goto label_271500;
        }
    }
    ctx->pc = 0x2714ECu;
    // 0x2714ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2714ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2714f0: 0x0  nop
    ctx->pc = 0x2714f0u;
    // NOP
    // 0x2714f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2714f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2714f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2714F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2714F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271500u;
label_271500:
    // 0x271500: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x271500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x271504: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x271504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x271508: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x271508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27150c: 0x0  nop
    ctx->pc = 0x27150cu;
    // NOP
    // 0x271510: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x271510u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x271514: 0x3e00008  jr          $ra
    ctx->pc = 0x271514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271514u;
        // 0x271518: 0x46000000  add.s       $f0, $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27151Cu;
    // 0x27151c: 0x0  nop
    ctx->pc = 0x27151cu;
    // NOP
    ctx->pc = 0x271520u;
}

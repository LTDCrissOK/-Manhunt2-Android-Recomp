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

// Function: sub_002714A0
// Address: 0x2714a0 - 0x2714e0
void sub_002714A0_0x2714a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002714A0_0x2714a0");
#endif

    ctx->pc = 0x2714a0u;

    // 0x2714a0: 0x8c820284  lw          $v0, 0x284($a0)
    ctx->pc = 0x2714a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 644)));
    // 0x2714a4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2714A4u;
    {
        const bool branch_taken_0x2714a4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2714A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2714A4u;
        // 0x2714a8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2714a4) {
            ctx->pc = 0x2714C0u;
            goto label_2714c0;
        }
    }
    ctx->pc = 0x2714ACu;
    // 0x2714ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2714acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2714b0: 0x0  nop
    ctx->pc = 0x2714b0u;
    // NOP
    // 0x2714b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2714b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2714b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2714B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2714B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2714C0u;
label_2714c0:
    // 0x2714c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2714c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2714c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2714c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2714c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2714c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2714cc: 0x0  nop
    ctx->pc = 0x2714ccu;
    // NOP
    // 0x2714d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2714d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2714d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2714D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2714D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2714D4u;
        // 0x2714d8: 0x46000000  add.s       $f0, $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2714D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2714DCu;
    // 0x2714dc: 0x0  nop
    ctx->pc = 0x2714dcu;
    // NOP
    ctx->pc = 0x2714e0u;
}

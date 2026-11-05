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

// Function: sub_0020B280
// Address: 0x20b280 - 0x20b2f0
void sub_0020B280_0x20b280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B280_0x20b280");
#endif

    ctx->pc = 0x20b280u;

    // 0x20b280: 0x460c6002  mul.s       $f0, $f12, $f12
    ctx->pc = 0x20b280u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x20b284: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20b284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20b288: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20b288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20b28c: 0x460d6842  mul.s       $f1, $f13, $f13
    ctx->pc = 0x20b28cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x20b290: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20b290u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20b294: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x20b294u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b298: 0x0  nop
    ctx->pc = 0x20b298u;
    // NOP
    // 0x20b29c: 0x45020012  bc1fl       . + 4 + (0x12 << 2)
    ctx->pc = 0x20B29Cu;
    {
        const bool branch_taken_0x20b29c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b29c) {
            ctx->pc = 0x20B2A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B29Cu;
            // 0x20b2a0: 0xe48c0000  swc1        $f12, 0x0($a0) (Delay Slot)
            { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B2E8u;
            goto label_20b2e8;
        }
    }
    ctx->pc = 0x20B2A4u;
    // 0x20b2a4: 0x0  nop
    ctx->pc = 0x20b2a4u;
    // NOP
    // 0x20b2a8: 0x0  nop
    ctx->pc = 0x20b2a8u;
    // NOP
    // 0x20b2ac: 0x46000004  c1          0x4
    ctx->pc = 0x20b2acu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x20b2b0: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x20b2b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x20b2b4: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x20b2b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x20b2b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20b2b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20b2bc: 0x0  nop
    ctx->pc = 0x20b2bcu;
    // NOP
    // 0x20b2c0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20b2c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20b2c4: 0x0  nop
    ctx->pc = 0x20b2c4u;
    // NOP
    // 0x20b2c8: 0x0  nop
    ctx->pc = 0x20b2c8u;
    // NOP
    // 0x20b2cc: 0x46006083  div.s       $f2, $f12, $f0
    ctx->pc = 0x20b2ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
    // 0x20b2d0: 0x0  nop
    ctx->pc = 0x20b2d0u;
    // NOP
    // 0x20b2d4: 0x0  nop
    ctx->pc = 0x20b2d4u;
    // NOP
    // 0x20b2d8: 0x46006803  div.s       $f0, $f13, $f0
    ctx->pc = 0x20b2d8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[13], ctx->f[0]); }
    // 0x20b2dc: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x20b2dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x20b2e0: 0x3e00008  jr          $ra
    ctx->pc = 0x20B2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B2E0u;
        // 0x20b2e4: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B2E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B2E8u;
label_20b2e8:
    // 0x20b2e8: 0x3e00008  jr          $ra
    ctx->pc = 0x20B2E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B2E8u;
        // 0x20b2ec: 0xe4ad0000  swc1        $f13, 0x0($a1) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B2E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B2F0u;
}

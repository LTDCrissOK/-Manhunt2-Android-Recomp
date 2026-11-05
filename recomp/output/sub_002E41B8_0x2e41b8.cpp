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

// Function: sub_002E41B8
// Address: 0x2e41b8 - 0x2e4230
void sub_002E41B8_0x2e41b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E41B8_0x2e41b8");
#endif

    ctx->pc = 0x2e41b8u;

    // 0x2e41b8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e41b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e41bc: 0xe48c0000  swc1        $f12, 0x0($a0)
    ctx->pc = 0x2e41bcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2e41c0: 0x46017034  c.lt.s      $f14, $f1
    ctx->pc = 0x2e41c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e41c4: 0xe48d0004  swc1        $f13, 0x4($a0)
    ctx->pc = 0x2e41c4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2e41c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e41c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e41cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e41ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e41d0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E41D0u;
    {
        const bool branch_taken_0x2e41d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E41D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E41D0u;
        // 0x2e41d4: 0xe48e0008  swc1        $f14, 0x8($a0) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e41d0) {
            ctx->pc = 0x2E41E0u;
            goto label_2e41e0;
        }
    }
    ctx->pc = 0x2E41D8u;
    // 0x2e41d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E41D8u;
    {
        const bool branch_taken_0x2e41d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E41DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E41D8u;
        // 0x2e41dc: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e41d8) {
            ctx->pc = 0x2E41F4u;
            goto label_2e41f4;
        }
    }
    ctx->pc = 0x2E41E0u;
label_2e41e0:
    // 0x2e41e0: 0x460e0034  c.lt.s      $f0, $f14
    ctx->pc = 0x2e41e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e41e4: 0x0  nop
    ctx->pc = 0x2e41e4u;
    // NOP
    // 0x2e41e8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E41E8u;
    {
        const bool branch_taken_0x2e41e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e41e8) {
            ctx->pc = 0x2E41ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E41E8u;
            // 0x2e41ec: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E41F0u;
            goto label_2e41f0;
        }
    }
    ctx->pc = 0x2E41F0u;
label_2e41f0:
    // 0x2e41f0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e41f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e41f4:
    // 0x2e41f4: 0xe48f000c  swc1        $f15, 0xC($a0)
    ctx->pc = 0x2e41f4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2e41f8: 0x46018834  c.lt.s      $f17, $f1
    ctx->pc = 0x2e41f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[17], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e41fc: 0xe4900010  swc1        $f16, 0x10($a0)
    ctx->pc = 0x2e41fcu;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2e4200: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e4200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e4204: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e4204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4208: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2E4208u;
    {
        const bool branch_taken_0x2e4208 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4208u;
        // 0x2e420c: 0xe4910014  swc1        $f17, 0x14($a0) (Delay Slot)
        { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4208) {
            ctx->pc = 0x2E4218u;
            goto label_2e4218;
        }
    }
    ctx->pc = 0x2E4210u;
    // 0x2e4210: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2E4210u;
    {
        const bool branch_taken_0x2e4210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4210u;
        // 0x2e4214: 0xe4810014  swc1        $f1, 0x14($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4210) {
            ctx->pc = 0x2E4228u;
            goto label_2e4228;
        }
    }
    ctx->pc = 0x2E4218u;
label_2e4218:
    // 0x2e4218: 0x46110034  c.lt.s      $f0, $f17
    ctx->pc = 0x2e4218u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[17])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e421c: 0x0  nop
    ctx->pc = 0x2e421cu;
    // NOP
    // 0x2e4220: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E4220u;
    {
        const bool branch_taken_0x2e4220 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e4220) {
            ctx->pc = 0x2E4224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4220u;
            // 0x2e4224: 0xe4800014  swc1        $f0, 0x14($a0) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4228u;
            goto label_2e4228;
        }
    }
    ctx->pc = 0x2E4228u;
label_2e4228:
    // 0x2e4228: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4228u;
        // 0x2e422c: 0xe4920018  swc1        $f18, 0x18($a0) (Delay Slot)
        { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4230u;
}

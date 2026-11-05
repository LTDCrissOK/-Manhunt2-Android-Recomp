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

// Function: sub_001D0BF8
// Address: 0x1d0bf8 - 0x1d0c70
void sub_001D0BF8_0x1d0bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0BF8_0x1d0bf8");
#endif

    ctx->pc = 0x1d0bf8u;

    // 0x1d0bf8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d0bf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d0bfc: 0x0  nop
    ctx->pc = 0x1d0bfcu;
    // NOP
    // 0x1d0c00: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1d0c00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d0c04: 0x0  nop
    ctx->pc = 0x1d0c04u;
    // NOP
    // 0x1d0c08: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1D0C08u;
    {
        const bool branch_taken_0x1d0c08 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D0C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0C08u;
        // 0x1d0c0c: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0c08) {
            ctx->pc = 0x1D0C64u;
            goto label_1d0c64;
        }
    }
    ctx->pc = 0x1D0C10u;
    // 0x1d0c10: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x1d0c10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x1d0c14: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1d0c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1d0c18: 0x8ce68e88  lw          $a2, -0x7178($a3)
    ctx->pc = 0x1d0c18u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3F8E88u));
    // 0x1d0c1c: 0x2463f1d0  addiu       $v1, $v1, -0xE30
    ctx->pc = 0x1d0c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963664));
    // 0x1d0c20: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1d0c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0c24: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1d0c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1d0c28: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x1d0c28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1d0c2c: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1d0c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d0c30: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1d0c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d0c34: 0x2442f260  addiu       $v0, $v0, -0xDA0
    ctx->pc = 0x1d0c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963808));
    // 0x1d0c38: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1d0c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1d0c3c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1d0c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1d0c40: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d0c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1d0c44: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x1d0c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0c48: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1d0c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1d0c4c: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x1d0c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d0c50: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1d0c50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1d0c54: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x1d0c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d0c58: 0xe4ac0000  swc1        $f12, 0x0($a1)
    ctx->pc = 0x1d0c58u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1d0c5c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1d0c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1d0c60: 0xace68e88  sw          $a2, -0x7178($a3)
    ctx->pc = 0x1d0c60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294938248), GPR_U32(ctx, 6));
label_1d0c64:
    // 0x1d0c64: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0C6Cu;
    // 0x1d0c6c: 0x0  nop
    ctx->pc = 0x1d0c6cu;
    // NOP
    ctx->pc = 0x1d0c70u;
}

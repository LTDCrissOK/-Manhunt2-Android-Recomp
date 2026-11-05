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

// Function: sub_00287720
// Address: 0x287720 - 0x2877a8
void sub_00287720_0x287720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287720_0x287720");
#endif

    ctx->pc = 0x287720u;

    // 0x287720: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x287720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x287724: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x287724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x287728: 0x8ca4a4bc  lw          $a0, -0x5B44($a1)
    ctx->pc = 0x287728u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FA4BCu));
    // 0x28772c: 0x8c62a4c0  lw          $v0, -0x5B40($v1)
    ctx->pc = 0x28772cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FA4C0u));
    // 0x287730: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x287730u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x287734: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x287734u;
    {
        const bool branch_taken_0x287734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287734u;
        // 0x287738: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287734) {
            ctx->pc = 0x28774Cu;
            goto label_28774c;
        }
    }
    ctx->pc = 0x28773Cu;
    // 0x28773c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x28773cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x287740: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x287740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287744: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x287744u;
    {
        const bool branch_taken_0x287744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287744u;
        // 0x287748: 0xaca3a4bc  sw          $v1, -0x5B44($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294943932), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287744) {
            ctx->pc = 0x28779Cu;
            goto label_28779c;
        }
    }
    ctx->pc = 0x28774Cu;
label_28774c:
    // 0x28774c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x28774cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x287750: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x287750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x287754: 0xc460a4c4  lwc1        $f0, -0x5B3C($v1)
    ctx->pc = 0x287754u;
    { uint32_t bits = FAST_READ32(0x3FA4C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287758: 0x24822450  addiu       $v0, $a0, 0x2450
    ctx->pc = 0x287758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 9296));
    // 0x28775c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x28775cu;
    { uint32_t bits = FAST_READ32(0x4C2454u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x287760: 0x460000c7  neg.s       $f3, $f0
    ctx->pc = 0x287760u;
    ctx->f[3] = FPU_NEG_S(ctx->f[0]);
    // 0x287764: 0xc444000c  lwc1        $f4, 0xC($v0)
    ctx->pc = 0x287764u;
    { uint32_t bits = FAST_READ32(0x4C245Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x287768: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x287768u;
    { uint32_t bits = FAST_READ32(0x4C2458u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x28776c: 0xc4802450  lwc1        $f0, 0x2450($a0)
    ctx->pc = 0x28776cu;
    { uint32_t bits = FAST_READ32(0x4C2450u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287770: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x287770u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287774: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x287774u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x287778: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x287778u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28777c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x28777cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x287780: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x287780u;
    {
        const bool branch_taken_0x287780 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x287784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287780u;
        // 0x287784: 0xe7a40014  swc1        $f4, 0x14($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x287780) {
            ctx->pc = 0x287798u;
            goto label_287798;
        }
    }
    ctx->pc = 0x287788u;
    // 0x287788: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x287788u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28778c: 0x0  nop
    ctx->pc = 0x28778cu;
    // NOP
    // 0x287790: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x287790u;
    {
        const bool branch_taken_0x287790 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x287794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287790u;
        // 0x287794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287790) {
            ctx->pc = 0x28779Cu;
            goto label_28779c;
        }
    }
    ctx->pc = 0x287798u;
label_287798:
    // 0x287798: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x287798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28779c:
    // 0x28779c: 0x3e00008  jr          $ra
    ctx->pc = 0x28779Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2877A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28779Cu;
        // 0x2877a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28779Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2877A4u;
    // 0x2877a4: 0x0  nop
    ctx->pc = 0x2877a4u;
    // NOP
    ctx->pc = 0x2877a8u;
}

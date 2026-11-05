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

// Function: sub_002876A0
// Address: 0x2876a0 - 0x287720
void sub_002876A0_0x2876a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002876A0_0x2876a0");
#endif

    ctx->pc = 0x2876a0u;

    // 0x2876a0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2876a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2876a4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2876a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2876a8: 0x8ca4a4bc  lw          $a0, -0x5B44($a1)
    ctx->pc = 0x2876a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FA4BCu));
    // 0x2876ac: 0x8c62a4c0  lw          $v0, -0x5B40($v1)
    ctx->pc = 0x2876acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FA4C0u));
    // 0x2876b0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2876b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2876b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2876B4u;
    {
        const bool branch_taken_0x2876b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2876B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2876B4u;
        // 0x2876b8: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2876b4) {
            ctx->pc = 0x2876CCu;
            goto label_2876cc;
        }
    }
    ctx->pc = 0x2876BCu;
    // 0x2876bc: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2876bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2876c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2876c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2876c4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2876C4u;
    {
        const bool branch_taken_0x2876c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2876C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2876C4u;
        // 0x2876c8: 0xaca3a4bc  sw          $v1, -0x5B44($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294943932), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2876c4) {
            ctx->pc = 0x287718u;
            goto label_287718;
        }
    }
    ctx->pc = 0x2876CCu;
label_2876cc:
    // 0x2876cc: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2876ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2876d0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2876d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2876d4: 0x24832450  addiu       $v1, $a0, 0x2450
    ctx->pc = 0x2876d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 9296));
    // 0x2876d8: 0xc444a4c4  lwc1        $f4, -0x5B3C($v0)
    ctx->pc = 0x2876d8u;
    { uint32_t bits = FAST_READ32(0x3FA4C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2876dc: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2876dcu;
    { uint32_t bits = FAST_READ32(0x4C2454u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2876e0: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x2876e0u;
    { uint32_t bits = FAST_READ32(0x4C245Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2876e4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2876e4u;
    { uint32_t bits = FAST_READ32(0x4C2458u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2876e8: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x2876e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2876ec: 0xc4812450  lwc1        $f1, 0x2450($a0)
    ctx->pc = 0x2876ecu;
    { uint32_t bits = FAST_READ32(0x4C2450u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2876f0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2876f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2876f4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2876f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2876f8: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2876f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2876fc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2876FCu;
    {
        const bool branch_taken_0x2876fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x287700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2876FCu;
        // 0x287700: 0xe7a30014  swc1        $f3, 0x14($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2876fc) {
            ctx->pc = 0x287714u;
            goto label_287714;
        }
    }
    ctx->pc = 0x287704u;
    // 0x287704: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x287704u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287708: 0x0  nop
    ctx->pc = 0x287708u;
    // NOP
    // 0x28770c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28770Cu;
    {
        const bool branch_taken_0x28770c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x287710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28770Cu;
        // 0x287710: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28770c) {
            ctx->pc = 0x287718u;
            goto label_287718;
        }
    }
    ctx->pc = 0x287714u;
label_287714:
    // 0x287714: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x287714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_287718:
    // 0x287718: 0x3e00008  jr          $ra
    ctx->pc = 0x287718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287718u;
        // 0x28771c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287720u;
}

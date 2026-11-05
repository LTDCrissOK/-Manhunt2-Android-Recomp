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

// Function: sub_00274800
// Address: 0x274800 - 0x2748c0
void sub_00274800_0x274800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274800_0x274800");
#endif

    switch (ctx->pc) {
        case 0x274870u: goto label_274870;
        case 0x274884u: goto label_274884;
        default: break;
    }

    ctx->pc = 0x274800u;

    // 0x274800: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x274800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x274804: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x274804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x274808: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x274808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x27480c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27480cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274810: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x274810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x274814: 0x8e241e6c  lw          $a0, 0x1E6C($s1)
    ctx->pc = 0x274814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7788)));
    // 0x274818: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x274818u;
    {
        const bool branch_taken_0x274818 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274818u;
        // 0x27481c: 0x24820070  addiu       $v0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274818) {
            ctx->pc = 0x2748A8u;
            goto label_2748a8;
        }
    }
    ctx->pc = 0x274820u;
    // 0x274820: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x274820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274824: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x274824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x274828: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x274828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27482c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x27482cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x274830: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x274830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x274834: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x274834u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x274838: 0xc60c9e24  lwc1        $f12, -0x61DC($s0)
    ctx->pc = 0x274838u;
    { uint32_t bits = FAST_READ32(0x3F9E24u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27483c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x27483cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274840: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x274840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274844: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x274844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x274848: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x274848u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x27484c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27484cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274850: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x274850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x274854: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x274854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274858: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x274858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x27485c: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x27485cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x274860: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x274860u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x274864: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x274864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x274868: 0xc0b1574  jal         func_2C55D0
    ctx->pc = 0x274868u;
    SET_GPR_U32(ctx, 31, 0x274870u);
    ctx->pc = 0x27486Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274868u;
    // 0x27486c: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C55D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C55D0u, 0x274868u, 0x274870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274870u;
label_274870:
    // 0x274870: 0x8e221e6c  lw          $v0, 0x1E6C($s1)
    ctx->pc = 0x274870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7788)));
    // 0x274874: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x274874u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274878: 0xf8410070  sqc2        $vf1, 0x70($v0)
    ctx->pc = 0x274878u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x27487c: 0xc0c48da  jal         func_312368
    ctx->pc = 0x27487Cu;
    SET_GPR_U32(ctx, 31, 0x274884u);
    ctx->pc = 0x274880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27487Cu;
    // 0x274880: 0x8e241e6c  lw          $a0, 0x1E6C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 7788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x27487Cu, 0x274884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274884u;
label_274884:
    // 0x274884: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x274884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x274888: 0x3c0145a8  lui         $at, 0x45A8
    ctx->pc = 0x274888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17832 << 16));
    // 0x27488c: 0x3421c000  ori         $at, $at, 0xC000
    ctx->pc = 0x27488cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49152);
    // 0x274890: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x274890u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x274894: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x274894u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274898: 0xc6019e24  lwc1        $f1, -0x61DC($s0)
    ctx->pc = 0x274898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294942244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27489c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x27489cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2748a0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2748a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2748a4: 0xe6019e24  swc1        $f1, -0x61DC($s0)
    ctx->pc = 0x2748a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294942244), bits); }
label_2748a8:
    // 0x2748a8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2748a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2748ac: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2748acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2748b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2748b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2748b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2748B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2748B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2748B4u;
        // 0x2748b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2748B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2748BCu;
    // 0x2748bc: 0x0  nop
    ctx->pc = 0x2748bcu;
    // NOP
    ctx->pc = 0x2748c0u;
}

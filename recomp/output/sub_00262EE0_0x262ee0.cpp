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

// Function: sub_00262EE0
// Address: 0x262ee0 - 0x262fc8
void sub_00262EE0_0x262ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262EE0_0x262ee0");
#endif

    switch (ctx->pc) {
        case 0x262f08u: goto label_262f08;
        case 0x262f18u: goto label_262f18;
        default: break;
    }

    ctx->pc = 0x262ee0u;

    // 0x262ee0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x262ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x262ee4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x262ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x262ee8: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x262ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x262eec: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x262eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x262ef0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x262ef0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262ef4: 0x8c62bd48  lw          $v0, -0x42B8($v1)
    ctx->pc = 0x262ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x262ef8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x262ef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x262efc: 0x8c500100  lw          $s0, 0x100($v0)
    ctx->pc = 0x262efcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x262f00: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x262F00u;
    SET_GPR_U32(ctx, 31, 0x262F08u);
    ctx->pc = 0x262F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262F00u;
    // 0x262f04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x262F00u, 0x262F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262F08u;
label_262f08:
    // 0x262f08: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x262F08u;
    {
        const bool branch_taken_0x262f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262f08) {
            ctx->pc = 0x262F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262F08u;
            // 0x262f0c: 0xc60100b0  lwc1        $f1, 0xB0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x262F1Cu;
            goto label_262f1c;
        }
    }
    ctx->pc = 0x262F10u;
    // 0x262f10: 0xc0c4900  jal         func_312400
    ctx->pc = 0x262F10u;
    SET_GPR_U32(ctx, 31, 0x262F18u);
    ctx->pc = 0x262F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262F10u;
    // 0x262f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x262F10u, 0x262F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262F18u;
label_262f18:
    // 0x262f18: 0xc60100b0  lwc1        $f1, 0xB0($s0)
    ctx->pc = 0x262f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_262f1c:
    // 0x262f1c: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x262f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x262f20: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x262f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x262f24: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x262f24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x262f28: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x262f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262f2c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x262f2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x262f30: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x262f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262f34: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x262f34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x262f38: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x262f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262f3c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x262f3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x262f40: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x262f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x262f44: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x262f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x262f48: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x262f48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x262f4c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x262f4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262f50: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x262f50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x262f54: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x262f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x262f58: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x262f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x262f5c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x262f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x262f60: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x262f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262f64: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x262f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x262f68: 0xc7a5002c  lwc1        $f5, 0x2C($sp)
    ctx->pc = 0x262f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x262f6c: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x262f6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x262f70: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x262f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x262f74: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x262f74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x262f78: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x262f78u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x262f7c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x262f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x262f80: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x262f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x262f84: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x262f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x262f88: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x262f88u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x262f8c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x262f8cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x262f90: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x262f90u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x262f94: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x262f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x262f98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x262f98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x262f9c: 0x0  nop
    ctx->pc = 0x262f9cu;
    // NOP
    // 0x262fa0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x262fa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x262fa4: 0x0  nop
    ctx->pc = 0x262fa4u;
    // NOP
    // 0x262fa8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x262FA8u;
    {
        const bool branch_taken_0x262fa8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x262FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262FA8u;
        // 0x262fac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262fa8) {
            ctx->pc = 0x262FB4u;
            goto label_262fb4;
        }
    }
    ctx->pc = 0x262FB0u;
    // 0x262fb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x262fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_262fb4:
    // 0x262fb4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x262fb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x262fb8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x262fb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x262fbc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x262fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x262fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x262FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262FC0u;
        // 0x262fc4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262FC8u;
}

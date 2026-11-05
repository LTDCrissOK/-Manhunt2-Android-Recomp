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

// Function: sub_001A1D98
// Address: 0x1a1d98 - 0x1a1e98
void sub_001A1D98_0x1a1d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1D98_0x1a1d98");
#endif

    switch (ctx->pc) {
        case 0x1a1db8u: goto label_1a1db8;
        case 0x1a1dd0u: goto label_1a1dd0;
        default: break;
    }

    ctx->pc = 0x1a1d98u;

    // 0x1a1d98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a1d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a1d9c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1a1d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1a1da0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1a1da0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1a1da4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a1da4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1da8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a1da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1dac: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1a1dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1a1db0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1A1DB0u;
    SET_GPR_U32(ctx, 31, 0x1A1DB8u);
    ctx->pc = 0x1A1DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A1DB0u;
    // 0x1a1db4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1A1DB0u, 0x1A1DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A1DB8u;
label_1a1db8:
    // 0x1a1db8: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1a1db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1a1dbc: 0x2444f010  addiu       $a0, $v0, -0xFF0
    ctx->pc = 0x1a1dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963216));
    // 0x1a1dc0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1a1dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x48F014u));
    // 0x1a1dc4: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1a1dc4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x48F01Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48F01Cu, _value); } while (0);
    // 0x1a1dc8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1A1DC8u;
    {
        const bool branch_taken_0x1a1dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DC8u;
        // 0x1a1dcc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1dc8) {
            ctx->pc = 0x1A1E54u;
            goto label_1a1e54;
        }
    }
    ctx->pc = 0x1A1DD0u;
label_1a1dd0:
    // 0x1a1dd0: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1A1DD0u;
    {
        const bool branch_taken_0x1a1dd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A1DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1DD0u;
        // 0x1a1dd4: 0x24a4f010  addiu       $a0, $a1, -0xFF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1dd0) {
            ctx->pc = 0x1A1E58u;
            goto label_1a1e58;
        }
    }
    ctx->pc = 0x1A1DD8u;
    // 0x1a1dd8: 0x8c441004  lw          $a0, 0x1004($v0)
    ctx->pc = 0x1a1dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    // 0x1a1ddc: 0x8c630fe8  lw          $v1, 0xFE8($v1)
    ctx->pc = 0x1a1ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
    // 0x1a1de0: 0x8c820fe8  lw          $v0, 0xFE8($a0)
    ctx->pc = 0x1a1de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4072)));
    // 0x1a1de4: 0x246301e0  addiu       $v1, $v1, 0x1E0
    ctx->pc = 0x1a1de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 480));
    // 0x1a1de8: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x1a1de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x1a1dec: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1a1decu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a1df0: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1a1df0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a1df4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1a1df4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a1df8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1a1df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a1dfc: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x1a1dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a1e00: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1a1e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a1e04: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1a1e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a1e08: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1a1e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a1e0c: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x1a1e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a1e10: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1a1e10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a1e14: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1a1e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a1e18: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1a1e18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1a1e1c: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x1a1e1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1a1e20: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1a1e20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a1e24: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1a1e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a1e28: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1a1e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a1e2c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1a1e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a1e30: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1a1e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a1e34: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1a1e34u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1a1e38: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1a1e38u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1a1e3c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1a1e3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1a1e40: 0x46000004  c1          0x4
    ctx->pc = 0x1a1e40u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1a1e44: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1a1e44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a1e48: 0x0  nop
    ctx->pc = 0x1a1e48u;
    // NOP
    // 0x1a1e4c: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x1A1E4Cu;
    {
        const bool branch_taken_0x1a1e4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A1E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E4Cu;
        // 0x1a1e50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e4c) {
            ctx->pc = 0x1A1E84u;
            goto label_1a1e84;
        }
    }
    ctx->pc = 0x1A1E54u;
label_1a1e54:
    // 0x1a1e54: 0x24a4f010  addiu       $a0, $a1, -0xFF0
    ctx->pc = 0x1a1e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963216));
label_1a1e58:
    // 0x1a1e58: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1a1e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1a1e5c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A1E5Cu;
    {
        const bool branch_taken_0x1a1e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E5Cu;
        // 0x1a1e60: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1e5c) {
            ctx->pc = 0x1A1E68u;
            goto label_1a1e68;
        }
    }
    ctx->pc = 0x1A1E64u;
    // 0x1a1e64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a1e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a1e68:
    // 0x1a1e68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1E68u;
    {
        const bool branch_taken_0x1a1e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1e68) {
            ctx->pc = 0x1A1E78u;
            goto label_1a1e78;
        }
    }
    ctx->pc = 0x1A1E70u;
    // 0x1a1e70: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1a1e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a1e74: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1a1e74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_1a1e78:
    // 0x1a1e78: 0x5460ffd5  bnel        $v1, $zero, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1A1E78u;
    {
        const bool branch_taken_0x1a1e78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1e78) {
            ctx->pc = 0x1A1E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A1E78u;
            // 0x1a1e7c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A1DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a1dd0;
        }
    }
    ctx->pc = 0x1A1E80u;
    // 0x1a1e80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a1e80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1e84:
    // 0x1a1e84: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1a1e84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a1e88: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1a1e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a1e8c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1a1e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a1e90: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A1E90u;
        // 0x1a1e94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A1E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A1E98u;
}

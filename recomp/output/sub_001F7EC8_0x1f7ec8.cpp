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

// Function: sub_001F7EC8
// Address: 0x1f7ec8 - 0x1f7fd0
void sub_001F7EC8_0x1f7ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7EC8_0x1f7ec8");
#endif

    switch (ctx->pc) {
        case 0x1f7f0cu: goto label_1f7f0c;
        case 0x1f7f9cu: goto label_1f7f9c;
        case 0x1f7fb8u: goto label_1f7fb8;
        default: break;
    }

    ctx->pc = 0x1f7ec8u;

    // 0x1f7ec8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f7ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f7ecc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1f7eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1f7ed0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f7ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f7ed4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f7ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7ed8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1f7ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1f7edc: 0x8c44bd50  lw          $a0, -0x42B0($v0)
    ctx->pc = 0x1f7edcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x1f7ee0: 0x10800026  beqz        $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1F7EE0u;
    {
        const bool branch_taken_0x1f7ee0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7EE0u;
        // 0x1f7ee4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ee0) {
            ctx->pc = 0x1F7F7Cu;
            goto label_1f7f7c;
        }
    }
    ctx->pc = 0x1F7EE8u;
    // 0x1f7ee8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1f7ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1f7eec: 0x8c43be30  lw          $v1, -0x41D0($v0)
    ctx->pc = 0x1f7eecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBE30u));
    // 0x1f7ef0: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1F7EF0u;
    {
        const bool branch_taken_0x1f7ef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7EF0u;
        // 0x1f7ef4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7ef0) {
            ctx->pc = 0x1F7F80u;
            goto label_1f7f80;
        }
    }
    ctx->pc = 0x1F7EF8u;
    // 0x1f7ef8: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x1f7ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x1f7efc: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x1f7efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x1f7f00: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1f7f00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f7f04: 0xc0b1680  jal         func_2C5A00
    ctx->pc = 0x1F7F04u;
    SET_GPR_U32(ctx, 31, 0x1F7F0Cu);
    ctx->pc = 0x1F7F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7F04u;
    // 0x1f7f08: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5A00u, 0x1F7F04u, 0x1F7F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7F0Cu;
label_1f7f0c:
    // 0x1f7f0c: 0x260200c0  addiu       $v0, $s0, 0xC0
    ctx->pc = 0x1f7f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x1f7f10: 0xc60200c0  lwc1        $f2, 0xC0($s0)
    ctx->pc = 0x1f7f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f7f14: 0xc444000c  lwc1        $f4, 0xC($v0)
    ctx->pc = 0x1f7f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1f7f18: 0x260300d0  addiu       $v1, $s0, 0xD0
    ctx->pc = 0x1f7f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x1f7f1c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1f7f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f7f20: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1f7f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7f24: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1f7f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1f7f28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f7f28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f7f2c: 0x0  nop
    ctx->pc = 0x1f7f2cu;
    // NOP
    // 0x1f7f30: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1f7f30u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1f7f34: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1f7f34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1f7f38: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x1f7f38u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1f7f3c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f7f3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f7f40: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x1f7f40u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1f7f44: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1f7f44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1f7f48: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x1f7f48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1f7f4c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1f7f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1f7f50: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1f7f50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f7f54: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1f7f54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7f58: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1f7f58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f7f5c: 0xfa0100d0  sqc2        $vf1, 0xD0($s0)
    ctx->pc = 0x1f7f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f7f60: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1f7f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f7f64: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x1f7f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
    // 0x1f7f68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f7f68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f7f6c: 0x0  nop
    ctx->pc = 0x1f7f6cu;
    // NOP
    // 0x1f7f70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f7f70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f7f74: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1F7F74u;
    {
        const bool branch_taken_0x1f7f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7F74u;
        // 0x1f7f78: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7f74) {
            ctx->pc = 0x1F7FB8u;
            goto label_1f7fb8;
        }
    }
    ctx->pc = 0x1F7F7Cu;
label_1f7f7c:
    // 0x1f7f7c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1f7f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_1f7f80:
    // 0x1f7f80: 0x8c42bd48  lw          $v0, -0x42B8($v0)
    ctx->pc = 0x1f7f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950216)));
    // 0x1f7f84: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F7F84u;
    {
        const bool branch_taken_0x1f7f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7F84u;
        // 0x1f7f88: 0x261100a0  addiu       $s1, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7f84) {
            ctx->pc = 0x1F7FB8u;
            goto label_1f7fb8;
        }
    }
    ctx->pc = 0x1F7F8Cu;
    // 0x1f7f8c: 0x8c450100  lw          $a1, 0x100($v0)
    ctx->pc = 0x1f7f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x1f7f90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f7f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7f94: 0xc0b1680  jal         func_2C5A00
    ctx->pc = 0x1F7F94u;
    SET_GPR_U32(ctx, 31, 0x1F7F9Cu);
    ctx->pc = 0x1F7F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7F94u;
    // 0x1f7f98: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5A00u, 0x1F7F94u, 0x1F7F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7F9Cu;
label_1f7f9c:
    // 0x1f7f9c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1f7f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1f7fa0: 0x8c43be30  lw          $v1, -0x41D0($v0)
    ctx->pc = 0x1f7fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBE30u));
    // 0x1f7fa4: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7FA4u;
    {
        const bool branch_taken_0x1f7fa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f7fa4) {
            ctx->pc = 0x1F7FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F7FA4u;
            // 0x1f7fa8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F7FBCu;
            goto label_1f7fbc;
        }
    }
    ctx->pc = 0x1F7FACu;
    // 0x1f7fac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f7facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7fb0: 0xc0b1628  jal         func_2C58A0
    ctx->pc = 0x1F7FB0u;
    SET_GPR_U32(ctx, 31, 0x1F7FB8u);
    ctx->pc = 0x1F7FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7FB0u;
    // 0x1f7fb4: 0x260500e0  addiu       $a1, $s0, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C58A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C58A0u, 0x1F7FB0u, 0x1F7FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7FB8u;
label_1f7fb8:
    // 0x1f7fb8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f7fb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f7fbc:
    // 0x1f7fbc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1f7fbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f7fc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f7fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f7fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7FC4u;
        // 0x1f7fc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7FCCu;
    // 0x1f7fcc: 0x0  nop
    ctx->pc = 0x1f7fccu;
    // NOP
    ctx->pc = 0x1f7fd0u;
}

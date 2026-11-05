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

// Function: sub_001A0E80
// Address: 0x1a0e80 - 0x1a0fb8
void sub_001A0E80_0x1a0e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0E80_0x1a0e80");
#endif

    switch (ctx->pc) {
        case 0x1a0e94u: goto label_1a0e94;
        case 0x1a0ec0u: goto label_1a0ec0;
        case 0x1a0f00u: goto label_1a0f00;
        case 0x1a0f0cu: goto label_1a0f0c;
        default: break;
    }

    ctx->pc = 0x1a0e80u;

    // 0x1a0e80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a0e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a0e84: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1a0e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1a0e88: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1a0e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1a0e8c: 0xc061a26  jal         func_186898
    ctx->pc = 0x1A0E8Cu;
    SET_GPR_U32(ctx, 31, 0x1A0E94u);
    ctx->pc = 0x1A0E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0E8Cu;
    // 0x1a0e90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1A0E8Cu, 0x1A0E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0E94u;
label_1a0e94:
    // 0x1a0e94: 0xc4410138  lwc1        $f1, 0x138($v0)
    ctx->pc = 0x1a0e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a0e98: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1a0e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x1a0e9c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1a0e9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1a0ea0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a0ea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0ea4: 0x0  nop
    ctx->pc = 0x1a0ea4u;
    // NOP
    // 0x1a0ea8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a0ea8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0eac: 0x0  nop
    ctx->pc = 0x1a0eacu;
    // NOP
    // 0x1a0eb0: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x1A0EB0u;
    {
        const bool branch_taken_0x1a0eb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a0eb0) {
            ctx->pc = 0x1A0EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0EB0u;
            // 0x1a0eb4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0ED8u;
            goto label_1a0ed8;
        }
    }
    ctx->pc = 0x1A0EB8u;
    // 0x1a0eb8: 0xc061a26  jal         func_186898
    ctx->pc = 0x1A0EB8u;
    SET_GPR_U32(ctx, 31, 0x1A0EC0u);
    ctx->pc = 0x1A0EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0EB8u;
    // 0x1a0ebc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1A0EB8u, 0x1A0EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0EC0u;
label_1a0ec0:
    // 0x1a0ec0: 0x8c430110  lw          $v1, 0x110($v0)
    ctx->pc = 0x1a0ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x1a0ec4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1a0ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1a0ec8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1a0ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a0ecc: 0x14620035  bne         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1A0ECCu;
    {
        const bool branch_taken_0x1a0ecc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A0ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0ECCu;
        // 0x1a0ed0: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0ecc) {
            ctx->pc = 0x1A0FA4u;
            goto label_1a0fa4;
        }
    }
    ctx->pc = 0x1A0ED4u;
    // 0x1a0ed4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a0ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a0ed8:
    // 0x1a0ed8: 0x8c431004  lw          $v1, 0x1004($v0)
    ctx->pc = 0x1a0ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    // 0x1a0edc: 0x8c640ff8  lw          $a0, 0xFF8($v1)
    ctx->pc = 0x1a0edcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4088)));
    // 0x1a0ee0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1a0ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a0ee4: 0x30820200  andi        $v0, $a0, 0x200
    ctx->pc = 0x1a0ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
    // 0x1a0ee8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0EE8u;
    {
        const bool branch_taken_0x1a0ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0EE8u;
        // 0x1a0eec: 0x30820400  andi        $v0, $a0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0ee8) {
            ctx->pc = 0x1A0EF8u;
            goto label_1a0ef8;
        }
    }
    ctx->pc = 0x1A0EF0u;
    // 0x1a0ef0: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1A0EF0u;
    {
        const bool branch_taken_0x1a0ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0EF0u;
        // 0x1a0ef4: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0ef0) {
            ctx->pc = 0x1A0FA4u;
            goto label_1a0fa4;
        }
    }
    ctx->pc = 0x1A0EF8u;
label_1a0ef8:
    // 0x1a0ef8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1A0EF8u;
    SET_GPR_U32(ctx, 31, 0x1A0F00u);
    ctx->pc = 0x1A0EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0EF8u;
    // 0x1a0efc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1A0EF8u, 0x1A0F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0F00u;
label_1a0f00:
    // 0x1a0f00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a0f00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0f04: 0xc0683ee  jal         func_1A0FB8
    ctx->pc = 0x1A0F04u;
    SET_GPR_U32(ctx, 31, 0x1A0F0Cu);
    ctx->pc = 0x1A0F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0F04u;
    // 0x1a0f08: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0FB8u, 0x1A0F04u, 0x1A0F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A0F0Cu;
label_1a0f0c:
    // 0x1a0f0c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1a0f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a0f10: 0x8c831004  lw          $v1, 0x1004($a0)
    ctx->pc = 0x1a0f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4100)));
    // 0x1a0f14: 0x8c620fe8  lw          $v0, 0xFE8($v1)
    ctx->pc = 0x1a0f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
    // 0x1a0f18: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x1a0f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x1a0f1c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1a0f1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0f20: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1a0f20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a0f24: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1a0f24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1a0f28: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1a0f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1a0f2c: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x1a0f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a0f30: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1a0f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1a0f34: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1a0f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0f38: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1a0f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a0f3c: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x1a0f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a0f40: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1a0f40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1a0f44: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1a0f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1a0f48: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1a0f48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1a0f4c: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x1a0f4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1a0f50: 0x8c821004  lw          $v0, 0x1004($a0)
    ctx->pc = 0x1a0f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4100)));
    // 0x1a0f54: 0x244203b0  addiu       $v0, $v0, 0x3B0
    ctx->pc = 0x1a0f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 944));
    // 0x1a0f58: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1a0f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a0f5c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1a0f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a0f60: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1a0f60u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1a0f64: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1a0f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a0f68: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1a0f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a0f6c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1a0f6cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1a0f70: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x1a0f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a0f74: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1a0f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a0f78: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x1a0f78u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1a0f7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a0f7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a0f80: 0x0  nop
    ctx->pc = 0x1a0f80u;
    // NOP
    // 0x1a0f84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a0f84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a0f88: 0x0  nop
    ctx->pc = 0x1a0f88u;
    // NOP
    // 0x1a0f8c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1A0F8Cu;
    {
        const bool branch_taken_0x1a0f8c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A0F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0F8Cu;
        // 0x1a0f90: 0x3c03003f  lui         $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0f8c) {
            ctx->pc = 0x1A0FA0u;
            goto label_1a0fa0;
        }
    }
    ctx->pc = 0x1A0F94u;
    // 0x1a0f94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a0f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0f98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0F98u;
    {
        const bool branch_taken_0x1a0f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A0F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0F98u;
        // 0x1a0f9c: 0xac620928  sw          $v0, 0x928($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 2344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0f98) {
            ctx->pc = 0x1A0FA8u;
            goto label_1a0fa8;
        }
    }
    ctx->pc = 0x1A0FA0u;
label_1a0fa0:
    // 0x1a0fa0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x1a0fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_1a0fa4:
    // 0x1a0fa4: 0xac400928  sw          $zero, 0x928($v0)
    ctx->pc = 0x1a0fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2344), GPR_U32(ctx, 0));
label_1a0fa8:
    // 0x1a0fa8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1a0fa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0fac: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1a0facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a0fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0FB0u;
        // 0x1a0fb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0FB8u;
}

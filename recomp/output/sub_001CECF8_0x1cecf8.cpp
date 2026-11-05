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

// Function: sub_001CECF8
// Address: 0x1cecf8 - 0x1ceec0
void sub_001CECF8_0x1cecf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CECF8_0x1cecf8");
#endif

    switch (ctx->pc) {
        case 0x1ced24u: goto label_1ced24;
        case 0x1ced90u: goto label_1ced90;
        case 0x1ced9cu: goto label_1ced9c;
        case 0x1cedb4u: goto label_1cedb4;
        case 0x1cedc0u: goto label_1cedc0;
        case 0x1cedc8u: goto label_1cedc8;
        case 0x1cee60u: goto label_1cee60;
        case 0x1cee74u: goto label_1cee74;
        case 0x1cee94u: goto label_1cee94;
        default: break;
    }

    ctx->pc = 0x1cecf8u;

    // 0x1cecf8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1cecf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1cecfc: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x1cecfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x1ced00: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1ced00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x1ced04: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ced04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ced08: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x1ced08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x1ced0c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1ced0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ced10: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ced10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ced14: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x1ced14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x1ced18: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1ced18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1ced1c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1CED1Cu;
    SET_GPR_U32(ctx, 31, 0x1CED24u);
    ctx->pc = 0x1CED20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CED1Cu;
    // 0x1ced20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1CED1Cu, 0x1CED24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CED24u;
label_1ced24:
    // 0x1ced24: 0x8e42004c  lw          $v0, 0x4C($s2)
    ctx->pc = 0x1ced24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1ced28: 0x8e640104  lw          $a0, 0x104($s3)
    ctx->pc = 0x1ced28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
    // 0x1ced2c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1ced2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ced30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ced30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ced34: 0x8ca60104  lw          $a2, 0x104($a1)
    ctx->pc = 0x1ced34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x1ced38: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x1ced38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x1ced3c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1ced3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ced40: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1ced40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1ced44: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1ced44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ced48: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1ced48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ced4c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1ced4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ced50: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1ced50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ced54: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1ced54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ced58: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1ced58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ced5c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1ced5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1ced60: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1ced60u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1ced64: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1ced64u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1ced68: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1ced68u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1ced6c: 0x46010044  c1          0x10044
    ctx->pc = 0x1ced6cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1ced70: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ced70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ced74: 0xc4408a54  lwc1        $f0, -0x75AC($v0)
    ctx->pc = 0x1ced74u;
    { uint32_t bits = FAST_READ32(0x3F8A54u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ced78: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ced78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ced7c: 0x0  nop
    ctx->pc = 0x1ced7cu;
    // NOP
    // 0x1ced80: 0x45010047  bc1t        . + 4 + (0x47 << 2)
    ctx->pc = 0x1CED80u;
    {
        const bool branch_taken_0x1ced80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CED84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CED80u;
        // 0x1ced84: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ced80) {
            ctx->pc = 0x1CEEA0u;
            goto label_1ceea0;
        }
    }
    ctx->pc = 0x1CED88u;
    // 0x1ced88: 0xc0739ea  jal         func_1CE7A8
    ctx->pc = 0x1CED88u;
    SET_GPR_U32(ctx, 31, 0x1CED90u);
    ctx->pc = 0x1CED8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CED88u;
    // 0x1ced8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE7A8u, 0x1CED88u, 0x1CED90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CED90u;
label_1ced90:
    // 0x1ced90: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x1ced90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1ced94: 0xc077200  jal         func_1DC800
    ctx->pc = 0x1CED94u;
    SET_GPR_U32(ctx, 31, 0x1CED9Cu);
    ctx->pc = 0x1CED98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CED94u;
    // 0x1ced98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DC800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DC800u, 0x1CED94u, 0x1CED9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CED9Cu;
label_1ced9c:
    // 0x1ced9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ced9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ceda0: 0x1200003a  beqz        $s0, . + 4 + (0x3A << 2)
    ctx->pc = 0x1CEDA0u;
    {
        const bool branch_taken_0x1ceda0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEDA0u;
        // 0x1ceda4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ceda0) {
            ctx->pc = 0x1CEE8Cu;
            goto label_1cee8c;
        }
    }
    ctx->pc = 0x1CEDA8u;
    // 0x1ceda8: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x1ceda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x1cedac: 0xc089ee6  jal         func_227B98
    ctx->pc = 0x1CEDACu;
    SET_GPR_U32(ctx, 31, 0x1CEDB4u);
    ctx->pc = 0x1CEDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEDACu;
    // 0x1cedb0: 0x8c500050  lw          $s0, 0x50($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227B98u, 0x1CEDACu, 0x1CEDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEDB4u;
label_1cedb4:
    // 0x1cedb4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cedb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cedb8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1CEDB8u;
    SET_GPR_U32(ctx, 31, 0x1CEDC0u);
    ctx->pc = 0x1CEDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEDB8u;
    // 0x1cedbc: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1CEDB8u, 0x1CEDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEDC0u;
label_1cedc0:
    // 0x1cedc0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1CEDC0u;
    SET_GPR_U32(ctx, 31, 0x1CEDC8u);
    ctx->pc = 0x1CEDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEDC0u;
    // 0x1cedc4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1CEDC0u, 0x1CEDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEDC8u;
label_1cedc8:
    // 0x1cedc8: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x1cedc8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1cedcc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1cedccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1cedd0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1cedd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1cedd4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1cedd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1cedd8: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1cedd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x1ceddc: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x1ceddcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cede0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1cede0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1cede4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1cede4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1cede8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1cede8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1cedec: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1cedecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cedf0: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1cedf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1cedf4: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x1cedf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1cedf8: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x1cedf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1cedfc: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x1cedfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1cee00: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1cee00u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1cee04: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1cee04u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1cee08: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1cee08u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1cee0c: 0x0  nop
    ctx->pc = 0x1cee0cu;
    // NOP
    // 0x1cee10: 0x0  nop
    ctx->pc = 0x1cee10u;
    // NOP
    // 0x1cee14: 0x46010084  c1          0x10084
    ctx->pc = 0x1cee14u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x1cee18: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1cee18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1cee1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cee1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cee20: 0x0  nop
    ctx->pc = 0x1cee20u;
    // NOP
    // 0x1cee24: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1cee24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cee28: 0x0  nop
    ctx->pc = 0x1cee28u;
    // NOP
    // 0x1cee2c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1CEE2Cu;
    {
        const bool branch_taken_0x1cee2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CEE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE2Cu;
        // 0x1cee30: 0xe7a20060  swc1        $f2, 0x60($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cee2c) {
            ctx->pc = 0x1CEE58u;
            goto label_1cee58;
        }
    }
    ctx->pc = 0x1CEE34u;
    // 0x1cee34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1cee34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1cee38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cee38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cee3c: 0x0  nop
    ctx->pc = 0x1cee3cu;
    // NOP
    // 0x1cee40: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1cee40u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1cee44: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1cee44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1cee48: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1cee48u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1cee4c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1cee4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1cee50: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1cee50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1cee54: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x1cee54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_1cee58:
    // 0x1cee58: 0xc077878  jal         func_1DE1E0
    ctx->pc = 0x1CEE58u;
    SET_GPR_U32(ctx, 31, 0x1CEE60u);
    ctx->pc = 0x1CEE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEE58u;
    // 0x1cee5c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE1E0u, 0x1CEE58u, 0x1CEE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEE60u;
label_1cee60:
    // 0x1cee60: 0x2c500001  sltiu       $s0, $v0, 0x1
    ctx->pc = 0x1cee60u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1cee64: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CEE64u;
    {
        const bool branch_taken_0x1cee64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEE64u;
        // 0x1cee68: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cee64) {
            ctx->pc = 0x1CEE8Cu;
            goto label_1cee8c;
        }
    }
    ctx->pc = 0x1CEE6Cu;
    // 0x1cee6c: 0xc073a62  jal         func_1CE988
    ctx->pc = 0x1CEE6Cu;
    SET_GPR_U32(ctx, 31, 0x1CEE74u);
    ctx->pc = 0x1CEE70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEE6Cu;
    // 0x1cee70: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE988u, 0x1CEE6Cu, 0x1CEE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEE74u;
label_1cee74:
    // 0x1cee74: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1cee74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1cee78: 0xc4418a10  lwc1        $f1, -0x75F0($v0)
    ctx->pc = 0x1cee78u;
    { uint32_t bits = FAST_READ32(0x3F8A10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cee7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cee7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cee80: 0x0  nop
    ctx->pc = 0x1cee80u;
    // NOP
    // 0x1cee84: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CEE84u;
    {
        const bool branch_taken_0x1cee84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cee84) {
            ctx->pc = 0x1CEE88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CEE84u;
            // 0x1cee88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CEE8Cu;
            goto label_1cee8c;
        }
    }
    ctx->pc = 0x1CEE8Cu;
label_1cee8c:
    // 0x1cee8c: 0xc0739b6  jal         func_1CE6D8
    ctx->pc = 0x1CEE8Cu;
    SET_GPR_U32(ctx, 31, 0x1CEE94u);
    ctx->pc = 0x1CEE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEE8Cu;
    // 0x1cee90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE6D8u, 0x1CEE8Cu, 0x1CEE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEE94u;
label_1cee94:
    // 0x1cee94: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1cee94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1cee98: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1cee98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1cee9c: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x1cee9cu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_1ceea0:
    // 0x1ceea0: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1ceea0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ceea4: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x1ceea4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1ceea8: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x1ceea8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ceeac: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x1ceeacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1ceeb0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1ceeb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ceeb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEEB4u;
        // 0x1ceeb8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEEB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEEBCu;
    // 0x1ceebc: 0x0  nop
    ctx->pc = 0x1ceebcu;
    // NOP
    ctx->pc = 0x1ceec0u;
}

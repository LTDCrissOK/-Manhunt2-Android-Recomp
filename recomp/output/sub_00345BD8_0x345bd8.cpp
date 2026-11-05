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

// Function: sub_00345BD8
// Address: 0x345bd8 - 0x345e08
void sub_00345BD8_0x345bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00345BD8_0x345bd8");
#endif

    switch (ctx->pc) {
        case 0x345c24u: goto label_345c24;
        case 0x345c88u: goto label_345c88;
        case 0x345cecu: goto label_345cec;
        default: break;
    }

    ctx->pc = 0x345bd8u;

    // 0x345bd8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x345bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x345bdc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x345bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x345be0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x345be0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345be4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x345be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x345be8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x345be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x345bec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x345becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345bf0: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x345bf0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x345bf4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x345bf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x345bf8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x345bf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x345bfc: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x345bfcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x345c00: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x345c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x345c04: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x345c04u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x345c08: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x345c08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x345c0c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x345c0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x345c10: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x345c10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x345c14: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x345c14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x345c18: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x345c18u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x345c1c: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x345C1Cu;
    SET_GPR_U32(ctx, 31, 0x345C24u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x345C1Cu, 0x345C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345C24u;
label_345c24:
    // 0x345c24: 0x304303ff  andi        $v1, $v0, 0x3FF
    ctx->pc = 0x345c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x345c28: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x345C28u;
    {
        const bool branch_taken_0x345c28 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x345C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345C28u;
        // 0x345c2c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x345c28) {
            ctx->pc = 0x345C44u;
            goto label_345c44;
        }
    }
    ctx->pc = 0x345C30u;
    // 0x345c30: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x345c30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x345c34: 0x0  nop
    ctx->pc = 0x345c34u;
    // NOP
    // 0x345c38: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x345c38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x345c3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x345C3Cu;
    {
        const bool branch_taken_0x345c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345C3Cu;
        // 0x345c40: 0xc6000000  lwc1        $f0, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x345c3c) {
            ctx->pc = 0x345C60u;
            goto label_345c60;
        }
    }
    ctx->pc = 0x345C44u;
label_345c44:
    // 0x345c44: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x345c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x345c48: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x345c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x345c4c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x345c4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x345c50: 0x0  nop
    ctx->pc = 0x345c50u;
    // NOP
    // 0x345c54: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x345c54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x345c58: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x345c58u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x345c5c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x345c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_345c60:
    // 0x345c60: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x345c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x345c64: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x345c64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x345c68: 0x3c013a80  lui         $at, 0x3A80
    ctx->pc = 0x345c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14976 << 16));
    // 0x345c6c: 0x34212008  ori         $at, $at, 0x2008
    ctx->pc = 0x345c6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8200);
    // 0x345c70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x345c70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x345c74: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x345c74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x345c78: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x345c78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x345c7c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x345c7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x345c80: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x345C80u;
    SET_GPR_U32(ctx, 31, 0x345C88u);
    ctx->pc = 0x345C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345C80u;
    // 0x345c84: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x345C80u, 0x345C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345C88u;
label_345c88:
    // 0x345c88: 0x304303ff  andi        $v1, $v0, 0x3FF
    ctx->pc = 0x345c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x345c8c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x345C8Cu;
    {
        const bool branch_taken_0x345c8c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x345C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345C8Cu;
        // 0x345c90: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x345c8c) {
            ctx->pc = 0x345CA8u;
            goto label_345ca8;
        }
    }
    ctx->pc = 0x345C94u;
    // 0x345c94: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x345c94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x345c98: 0x0  nop
    ctx->pc = 0x345c98u;
    // NOP
    // 0x345c9c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x345c9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x345ca0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x345CA0u;
    {
        const bool branch_taken_0x345ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345CA0u;
        // 0x345ca4: 0xc6000004  lwc1        $f0, 0x4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x345ca0) {
            ctx->pc = 0x345CC4u;
            goto label_345cc4;
        }
    }
    ctx->pc = 0x345CA8u;
label_345ca8:
    // 0x345ca8: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x345ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x345cac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x345cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x345cb0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x345cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x345cb4: 0x0  nop
    ctx->pc = 0x345cb4u;
    // NOP
    // 0x345cb8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x345cb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x345cbc: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x345cbcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x345cc0: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x345cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_345cc4:
    // 0x345cc4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x345cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x345cc8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x345cc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x345ccc: 0x3c013a80  lui         $at, 0x3A80
    ctx->pc = 0x345cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14976 << 16));
    // 0x345cd0: 0x34212008  ori         $at, $at, 0x2008
    ctx->pc = 0x345cd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8200);
    // 0x345cd4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x345cd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x345cd8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x345cd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x345cdc: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x345cdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x345ce0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x345ce0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x345ce4: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x345CE4u;
    SET_GPR_U32(ctx, 31, 0x345CECu);
    ctx->pc = 0x345CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x345CE4u;
    // 0x345ce8: 0xe6210004  swc1        $f1, 0x4($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x345CE4u, 0x345CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x345CECu;
label_345cec:
    // 0x345cec: 0x304303ff  andi        $v1, $v0, 0x3FF
    ctx->pc = 0x345cecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x345cf0: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x345CF0u;
    {
        const bool branch_taken_0x345cf0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x345CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345CF0u;
        // 0x345cf4: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x345cf0) {
            ctx->pc = 0x345D0Cu;
            goto label_345d0c;
        }
    }
    ctx->pc = 0x345CF8u;
    // 0x345cf8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x345cf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x345cfc: 0x0  nop
    ctx->pc = 0x345cfcu;
    // NOP
    // 0x345d00: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x345d00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x345d04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x345D04u;
    {
        const bool branch_taken_0x345d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345D04u;
        // 0x345d08: 0xc6010008  lwc1        $f1, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x345d04) {
            ctx->pc = 0x345D28u;
            goto label_345d28;
        }
    }
    ctx->pc = 0x345D0Cu;
label_345d0c:
    // 0x345d0c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x345d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x345d10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x345d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x345d14: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x345d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x345d18: 0x0  nop
    ctx->pc = 0x345d18u;
    // NOP
    // 0x345d1c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x345d1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x345d20: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x345d20u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x345d24: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x345d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_345d28:
    // 0x345d28: 0x3c013a80  lui         $at, 0x3A80
    ctx->pc = 0x345d28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14976 << 16));
    // 0x345d2c: 0x34212008  ori         $at, $at, 0x2008
    ctx->pc = 0x345d2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8200);
    // 0x345d30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x345d30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x345d34: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x345d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x345d38: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x345d38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x345d3c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x345d3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x345d40: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x345d40u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x345d44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x345d44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x345d48: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x345d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x345d4c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x345d4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x345d50: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x345d50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x345d54: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x345d54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x345d58: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x345d58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x345d5c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x345d5cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x345d60: 0x4a0003bf  vwaitq
    ctx->pc = 0x345d60u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x345d64: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x345d64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x345d68: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x345d68u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x345d6c: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x345d6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x345d70: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x345d70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x345d74: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x345d74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x345d78: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x345d78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x345d7c: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x345d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x345d80: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x345d80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x345d84: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x345d84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x345d88: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x345d88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x345d8c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x345d8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x345d90: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x345d90u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x345d94: 0x4a0003bf  vwaitq
    ctx->pc = 0x345d94u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x345d98: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x345d98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x345d9c: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x345d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x345da0: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x345da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x345da4: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x345da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x345da8: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x345da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x345dac: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x345dacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x345db0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x345db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x345db4: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x345db4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x345db8: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x345db8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x345dbc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x345dbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x345dc0: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x345dc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x345dc4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x345dc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x345dc8: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x345dc8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x345dcc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x345dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x345dd0: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x345dd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x345dd4: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x345dd4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x345dd8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x345dd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x345ddc: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x345ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x345de0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x345de0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x345de4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x345de4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x345de8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x345de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x345dec: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x345decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x345df0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x345df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x345df4: 0x3e00008  jr          $ra
    ctx->pc = 0x345DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x345DF4u;
        // 0x345df8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x345DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x345DFCu;
    // 0x345dfc: 0x0  nop
    ctx->pc = 0x345dfcu;
    // NOP
    // 0x345e00: 0x0  nop
    ctx->pc = 0x345e00u;
    // NOP
    // 0x345e04: 0x0  nop
    ctx->pc = 0x345e04u;
    // NOP
    ctx->pc = 0x345e08u;
}

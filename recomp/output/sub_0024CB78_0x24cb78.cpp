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

// Function: sub_0024CB78
// Address: 0x24cb78 - 0x24cd20
void sub_0024CB78_0x24cb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CB78_0x24cb78");
#endif

    switch (ctx->pc) {
        case 0x24cc24u: goto label_24cc24;
        case 0x24cc58u: goto label_24cc58;
        case 0x24cd14u: goto label_24cd14;
        default: break;
    }

    ctx->pc = 0x24cb78u;

    // 0x24cb78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x24cb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24cb7c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x24cb7cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cb80: 0x10a0002a  beqz        $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x24CB80u;
    {
        const bool branch_taken_0x24cb80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CB80u;
        // 0x24cb84: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cb80) {
            ctx->pc = 0x24CC2Cu;
            goto label_24cc2c;
        }
    }
    ctx->pc = 0x24CB88u;
    // 0x24cb88: 0xc4a10020  lwc1        $f1, 0x20($a1)
    ctx->pc = 0x24cb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24cb8c: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x24cb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x24cb90: 0x8d030024  lw          $v1, 0x24($t0)
    ctx->pc = 0x24cb90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x24cb94: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x24cb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24cb98: 0x0  nop
    ctx->pc = 0x24cb98u;
    // NOP
    // 0x24cb9c: 0x0  nop
    ctx->pc = 0x24cb9cu;
    // NOP
    // 0x24cba0: 0x46010044  c1          0x10044
    ctx->pc = 0x24cba0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x24cba4: 0xc444000c  lwc1        $f4, 0xC($v0)
    ctx->pc = 0x24cba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24cba8: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x24cba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cbac: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x24cbacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24cbb0: 0xc4a20010  lwc1        $f2, 0x10($a1)
    ctx->pc = 0x24cbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24cbb4: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x24cbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24cbb8: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x24cbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x24cbbc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x24cbbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24cbc0: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x24cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x24cbc4: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x24cbc4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x24cbc8: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x24cbc8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x24cbcc: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x24cbccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x24cbd0: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x24cbd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x24cbd4: 0xe7a4001c  swc1        $f4, 0x1C($sp)
    ctx->pc = 0x24cbd4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x24cbd8: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x24cbd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x24cbdc: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x24cbdcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x24cbe0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x24cbe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x24cbe4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x24cbe4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24cbe8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x24cbe8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24cbec: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24cbecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24cbf0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x24cbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24cbf4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x24cbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cbf8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x24cbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24cbfc: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x24cbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24cc00: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x24cc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24cc04: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x24cc04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24cc08: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x24cc08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24cc0c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x24cc0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x24cc10: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x24cc10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x24cc14: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x24cc14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24cc18: 0xf8610030  sqc2        $vf1, 0x30($v1)
    ctx->pc = 0x24cc18u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24cc1c: 0xc093240  jal         func_24C900
    ctx->pc = 0x24CC1Cu;
    SET_GPR_U32(ctx, 31, 0x24CC24u);
    ctx->pc = 0x24CC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CC1Cu;
    // 0x24cc20: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C900u, 0x24CC1Cu, 0x24CC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CC24u;
label_24cc24:
    // 0x24cc24: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x24CC24u;
    {
        const bool branch_taken_0x24cc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CC24u;
        // 0x24cc28: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cc24) {
            ctx->pc = 0x24CD18u;
            goto label_24cd18;
        }
    }
    ctx->pc = 0x24CC2Cu;
label_24cc2c:
    // 0x24cc2c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x24cc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x24cc30: 0x8c622b1c  lw          $v0, 0x2B1C($v1)
    ctx->pc = 0x24cc30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B1Cu));
    // 0x24cc34: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x24CC34u;
    {
        const bool branch_taken_0x24cc34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CC34u;
        // 0x24cc38: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cc34) {
            ctx->pc = 0x24CD0Cu;
            goto label_24cd0c;
        }
    }
    ctx->pc = 0x24CC3Cu;
    // 0x24cc3c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x24cc3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x24cc40: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x24cc40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x24cc44: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x24cc44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x24cc48: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x24cc48u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cc4c: 0x3c0a0048  lui         $t2, 0x48
    ctx->pc = 0x24cc4cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)72 << 16));
    // 0x24cc50: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x24cc50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24cc54: 0x8d432b20  lw          $v1, 0x2B20($t2)
    ctx->pc = 0x24cc54u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482B20u));
label_24cc58:
    // 0x24cc58: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x24cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x24cc5c: 0x8d040024  lw          $a0, 0x24($t0)
    ctx->pc = 0x24cc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x24cc60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24cc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x24cc64: 0x8d060004  lw          $a2, 0x4($t0)
    ctx->pc = 0x24cc64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x24cc68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24cc68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24cc6c: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x24cc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24cc70: 0x24c50030  addiu       $a1, $a2, 0x30
    ctx->pc = 0x24cc70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x24cc74: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x24cc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24cc78: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x24cc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x24cc7c: 0xc4640010  lwc1        $f4, 0x10($v1)
    ctx->pc = 0x24cc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x24cc80: 0x0  nop
    ctx->pc = 0x24cc80u;
    // NOP
    // 0x24cc84: 0x0  nop
    ctx->pc = 0x24cc84u;
    // NOP
    // 0x24cc88: 0x46010044  c1          0x10044
    ctx->pc = 0x24cc88u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x24cc8c: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x24cc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24cc90: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x24cc90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24cc94: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x24cc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x24cc98: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x24cc98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x24cc9c: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x24cc9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x24cca0: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x24cca0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x24cca4: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x24cca4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x24cca8: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x24cca8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x24ccac: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x24ccacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x24ccb0: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x24ccb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x24ccb4: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x24ccb4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x24ccb8: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x24ccb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x24ccbc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x24ccbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x24ccc0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x24ccc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x24ccc4: 0xd9220000  lqc2        $vf2, 0x0($t1)
    ctx->pc = 0x24ccc4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x24ccc8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x24ccc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x24cccc: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x24ccccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24ccd0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x24ccd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ccd4: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x24ccd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ccd8: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x24ccd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24ccdc: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x24ccdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24cce0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x24cce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x24cce4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x24cce4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24cce8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x24cce8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x24ccec: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x24ccecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x24ccf0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x24ccf0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ccf4: 0xf8c10030  sqc2        $vf1, 0x30($a2)
    ctx->pc = 0x24ccf4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x24ccf8: 0x8d622b1c  lw          $v0, 0x2B1C($t3)
    ctx->pc = 0x24ccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 11036)));
    // 0x24ccfc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x24ccfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x24cd00: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x24cd00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24cd04: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x24CD04u;
    {
        const bool branch_taken_0x24cd04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD04u;
        // 0x24cd08: 0x8d432b20  lw          $v1, 0x2B20($t2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 11040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cd04) {
            ctx->pc = 0x24CC58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24cc58;
        }
    }
    ctx->pc = 0x24CD0Cu;
label_24cd0c:
    // 0x24cd0c: 0xc093240  jal         func_24C900
    ctx->pc = 0x24CD0Cu;
    SET_GPR_U32(ctx, 31, 0x24CD14u);
    ctx->pc = 0x24CD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CD0Cu;
    // 0x24cd10: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24C900u, 0x24CD0Cu, 0x24CD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24CD14u;
label_24cd14:
    // 0x24cd14: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24cd14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24cd18:
    // 0x24cd18: 0x3e00008  jr          $ra
    ctx->pc = 0x24CD18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CD18u;
        // 0x24cd1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CD18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24CD20u;
}

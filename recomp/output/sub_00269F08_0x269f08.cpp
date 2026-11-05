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

// Function: sub_00269F08
// Address: 0x269f08 - 0x26a118
void sub_00269F08_0x269f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00269F08_0x269f08");
#endif

    switch (ctx->pc) {
        case 0x269f08u: goto label_269f08;
        case 0x269f0cu: goto label_269f0c;
        case 0x269f10u: goto label_269f10;
        case 0x269f14u: goto label_269f14;
        case 0x269f18u: goto label_269f18;
        case 0x269f1cu: goto label_269f1c;
        case 0x269f20u: goto label_269f20;
        case 0x269f24u: goto label_269f24;
        case 0x269f28u: goto label_269f28;
        case 0x269f2cu: goto label_269f2c;
        case 0x269f30u: goto label_269f30;
        case 0x269f34u: goto label_269f34;
        case 0x269f38u: goto label_269f38;
        case 0x269f3cu: goto label_269f3c;
        case 0x269f40u: goto label_269f40;
        case 0x269f44u: goto label_269f44;
        case 0x269f48u: goto label_269f48;
        case 0x269f4cu: goto label_269f4c;
        case 0x269f50u: goto label_269f50;
        case 0x269f54u: goto label_269f54;
        case 0x269f58u: goto label_269f58;
        case 0x269f5cu: goto label_269f5c;
        case 0x269f60u: goto label_269f60;
        case 0x269f64u: goto label_269f64;
        case 0x269f68u: goto label_269f68;
        case 0x269f6cu: goto label_269f6c;
        case 0x269f70u: goto label_269f70;
        case 0x269f74u: goto label_269f74;
        case 0x269f78u: goto label_269f78;
        case 0x269f7cu: goto label_269f7c;
        case 0x269f80u: goto label_269f80;
        case 0x269f84u: goto label_269f84;
        case 0x269f88u: goto label_269f88;
        case 0x269f8cu: goto label_269f8c;
        case 0x269f90u: goto label_269f90;
        case 0x269f94u: goto label_269f94;
        case 0x269f98u: goto label_269f98;
        case 0x269f9cu: goto label_269f9c;
        case 0x269fa0u: goto label_269fa0;
        case 0x269fa4u: goto label_269fa4;
        case 0x269fa8u: goto label_269fa8;
        case 0x269facu: goto label_269fac;
        case 0x269fb0u: goto label_269fb0;
        case 0x269fb4u: goto label_269fb4;
        case 0x269fb8u: goto label_269fb8;
        case 0x269fbcu: goto label_269fbc;
        case 0x269fc0u: goto label_269fc0;
        case 0x269fc4u: goto label_269fc4;
        case 0x269fc8u: goto label_269fc8;
        case 0x269fccu: goto label_269fcc;
        case 0x269fd0u: goto label_269fd0;
        case 0x269fd4u: goto label_269fd4;
        case 0x269fd8u: goto label_269fd8;
        case 0x269fdcu: goto label_269fdc;
        case 0x269fe0u: goto label_269fe0;
        case 0x269fe4u: goto label_269fe4;
        case 0x269fe8u: goto label_269fe8;
        case 0x269fecu: goto label_269fec;
        case 0x269ff0u: goto label_269ff0;
        case 0x269ff4u: goto label_269ff4;
        case 0x269ff8u: goto label_269ff8;
        case 0x269ffcu: goto label_269ffc;
        case 0x26a000u: goto label_26a000;
        case 0x26a004u: goto label_26a004;
        case 0x26a008u: goto label_26a008;
        case 0x26a00cu: goto label_26a00c;
        case 0x26a010u: goto label_26a010;
        case 0x26a014u: goto label_26a014;
        case 0x26a018u: goto label_26a018;
        case 0x26a01cu: goto label_26a01c;
        case 0x26a020u: goto label_26a020;
        case 0x26a024u: goto label_26a024;
        case 0x26a028u: goto label_26a028;
        case 0x26a02cu: goto label_26a02c;
        case 0x26a030u: goto label_26a030;
        case 0x26a034u: goto label_26a034;
        case 0x26a038u: goto label_26a038;
        case 0x26a03cu: goto label_26a03c;
        case 0x26a040u: goto label_26a040;
        case 0x26a044u: goto label_26a044;
        case 0x26a048u: goto label_26a048;
        case 0x26a04cu: goto label_26a04c;
        case 0x26a050u: goto label_26a050;
        case 0x26a054u: goto label_26a054;
        case 0x26a058u: goto label_26a058;
        case 0x26a05cu: goto label_26a05c;
        case 0x26a060u: goto label_26a060;
        case 0x26a064u: goto label_26a064;
        case 0x26a068u: goto label_26a068;
        case 0x26a06cu: goto label_26a06c;
        case 0x26a070u: goto label_26a070;
        case 0x26a074u: goto label_26a074;
        case 0x26a078u: goto label_26a078;
        case 0x26a07cu: goto label_26a07c;
        case 0x26a080u: goto label_26a080;
        case 0x26a084u: goto label_26a084;
        case 0x26a088u: goto label_26a088;
        case 0x26a08cu: goto label_26a08c;
        case 0x26a090u: goto label_26a090;
        case 0x26a094u: goto label_26a094;
        case 0x26a098u: goto label_26a098;
        case 0x26a09cu: goto label_26a09c;
        case 0x26a0a0u: goto label_26a0a0;
        case 0x26a0a4u: goto label_26a0a4;
        case 0x26a0a8u: goto label_26a0a8;
        case 0x26a0acu: goto label_26a0ac;
        case 0x26a0b0u: goto label_26a0b0;
        case 0x26a0b4u: goto label_26a0b4;
        case 0x26a0b8u: goto label_26a0b8;
        case 0x26a0bcu: goto label_26a0bc;
        case 0x26a0c0u: goto label_26a0c0;
        case 0x26a0c4u: goto label_26a0c4;
        case 0x26a0c8u: goto label_26a0c8;
        case 0x26a0ccu: goto label_26a0cc;
        case 0x26a0d0u: goto label_26a0d0;
        case 0x26a0d4u: goto label_26a0d4;
        case 0x26a0d8u: goto label_26a0d8;
        case 0x26a0dcu: goto label_26a0dc;
        case 0x26a0e0u: goto label_26a0e0;
        case 0x26a0e4u: goto label_26a0e4;
        case 0x26a0e8u: goto label_26a0e8;
        case 0x26a0ecu: goto label_26a0ec;
        case 0x26a0f0u: goto label_26a0f0;
        case 0x26a0f4u: goto label_26a0f4;
        case 0x26a0f8u: goto label_26a0f8;
        case 0x26a0fcu: goto label_26a0fc;
        case 0x26a100u: goto label_26a100;
        case 0x26a104u: goto label_26a104;
        case 0x26a108u: goto label_26a108;
        case 0x26a10cu: goto label_26a10c;
        case 0x26a110u: goto label_26a110;
        case 0x26a114u: goto label_26a114;
        default: break;
    }

    ctx->pc = 0x269f08u;

label_269f08:
    // 0x269f08: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x269f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_269f0c:
    // 0x269f0c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x269f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_269f10:
    // 0x269f10: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x269f10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_269f14:
    // 0x269f14: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x269f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_269f18:
    // 0x269f18: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x269f18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_269f1c:
    // 0x269f1c: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x269f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_269f20:
    // 0x269f20: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x269f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
label_269f24:
    // 0x269f24: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x269f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_269f28:
    // 0x269f28: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x269f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_269f2c:
    // 0x269f2c: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x269f2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_269f30:
    // 0x269f30: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x269f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_269f34:
    // 0x269f34: 0x8e45010c  lw          $a1, 0x10C($s2)
    ctx->pc = 0x269f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_269f38:
    // 0x269f38: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x269f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_269f3c:
    // 0x269f3c: 0x8e460104  lw          $a2, 0x104($s2)
    ctx->pc = 0x269f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_269f40:
    // 0x269f40: 0x24a40010  addiu       $a0, $a1, 0x10
    ctx->pc = 0x269f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_269f44:
    // 0x269f44: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x269f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_269f48:
    // 0x269f48: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x269f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_269f4c:
    // 0x269f4c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x269f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_269f50:
    // 0x269f50: 0xc4540030  lwc1        $f20, 0x30($v0)
    ctx->pc = 0x269f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_269f54:
    // 0x269f54: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x269f54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_269f58:
    // 0x269f58: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x269f58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_269f5c:
    // 0x269f5c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x269f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_269f60:
    // 0x269f60: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x269f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_269f64:
    // 0x269f64: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x269f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_269f68:
    // 0x269f68: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x269f68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_269f6c:
    // 0x269f6c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x269f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_269f70:
    // 0x269f70: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x269f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_269f74:
    // 0x269f74: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x269f74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_269f78:
    // 0x269f78: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x269f78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_269f7c:
    // 0x269f7c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x269f7cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_269f80:
    // 0x269f80: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x269f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_269f84:
    // 0x269f84: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x269f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
label_269f88:
    // 0x269f88: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x269f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_269f8c:
    // 0x269f8c: 0x24423510  addiu       $v0, $v0, 0x3510
    ctx->pc = 0x269f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13584));
label_269f90:
    // 0x269f90: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x269f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_269f94:
    // 0x269f94: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x269f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_269f98:
    // 0x269f98: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x269f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_269f9c:
    // 0x269f9c: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x269f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_269fa0:
    // 0x269fa0: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x269fa0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_269fa4:
    // 0x269fa4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x269fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_269fa8:
    // 0x269fa8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x269fa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_269fac:
    // 0x269fac: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x269facu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_269fb0:
    // 0x269fb0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x269fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_269fb4:
    // 0x269fb4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x269fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_269fb8:
    // 0x269fb8: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x269fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_269fbc:
    // 0x269fbc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x269fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_269fc0:
    // 0x269fc0: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x269fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_269fc4:
    // 0x269fc4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x269fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_269fc8:
    // 0x269fc8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x269fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_269fcc:
    // 0x269fcc: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
label_269fd0:
    if (ctx->pc == 0x269FD0u) {
        ctx->pc = 0x269FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269FCCu;
        // 0x269fd0: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x269FD4u;
        goto label_269fd4;
    }
    ctx->pc = 0x269FCCu;
    {
        const bool branch_taken_0x269fcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x269FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269FCCu;
        // 0x269fd0: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269fcc) {
            ctx->pc = 0x26A0F4u;
            goto label_26a0f4;
        }
    }
    ctx->pc = 0x269FD4u;
label_269fd4:
    // 0x269fd4: 0x3c130400  lui         $s3, 0x400
    ctx->pc = 0x269fd4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)1024 << 16));
label_269fd8:
    // 0x269fd8: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x269fd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_269fdc:
    // 0x269fdc: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x269fdcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
label_269fe0:
    // 0x269fe0: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x269fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_269fe4:
    // 0x269fe4: 0x0  nop
    ctx->pc = 0x269fe4u;
    // NOP
label_269fe8:
    // 0x269fe8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x269fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_269fec:
    // 0x269fec: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x269fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_269ff0:
    // 0x269ff0: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
label_269ff4:
    if (ctx->pc == 0x269FF4u) {
        ctx->pc = 0x269FF8u;
        goto label_269ff8;
    }
    ctx->pc = 0x269FF0u;
    {
        const bool branch_taken_0x269ff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x269ff0) {
            ctx->pc = 0x26A0C0u;
            goto label_26a0c0;
        }
    }
    ctx->pc = 0x269FF8u;
label_269ff8:
    // 0x269ff8: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x269ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_269ffc:
    // 0x269ffc: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x269ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_26a000:
    // 0x26a000: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
label_26a004:
    if (ctx->pc == 0x26A004u) {
        ctx->pc = 0x26A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A000u;
        // 0x26a004: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A008u;
        goto label_26a008;
    }
    ctx->pc = 0x26A000u;
    {
        const bool branch_taken_0x26a000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A000u;
        // 0x26a004: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a000) {
            ctx->pc = 0x26A0C0u;
            goto label_26a0c0;
        }
    }
    ctx->pc = 0x26A008u;
label_26a008:
    // 0x26a008: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x26a008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_26a00c:
    // 0x26a00c: 0x1053002c  beq         $v0, $s3, . + 4 + (0x2C << 2)
label_26a010:
    if (ctx->pc == 0x26A010u) {
        ctx->pc = 0x26A010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A00Cu;
        // 0x26a010: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A014u;
        goto label_26a014;
    }
    ctx->pc = 0x26A00Cu;
    {
        const bool branch_taken_0x26a00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x26A010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A00Cu;
        // 0x26a010: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a00c) {
            ctx->pc = 0x26A0C0u;
            goto label_26a0c0;
        }
    }
    ctx->pc = 0x26A014u;
label_26a014:
    // 0x26a014: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x26a014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_26a018:
    // 0x26a018: 0x8e450104  lw          $a1, 0x104($s2)
    ctx->pc = 0x26a018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_26a01c:
    // 0x26a01c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x26a01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_26a020:
    // 0x26a020: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x26a020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_26a024:
    // 0x26a024: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x26a024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_26a028:
    // 0x26a028: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x26a028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_26a02c:
    // 0x26a02c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x26a02cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_26a030:
    // 0x26a030: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x26a030u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26a034:
    // 0x26a034: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26a034u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26a038:
    // 0x26a038: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x26a038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_26a03c:
    // 0x26a03c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x26a03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26a040:
    // 0x26a040: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x26a040u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26a044:
    // 0x26a044: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x26a044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26a048:
    // 0x26a048: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x26a048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26a04c:
    // 0x26a04c: 0xc7a5004c  lwc1        $f5, 0x4C($sp)
    ctx->pc = 0x26a04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_26a050:
    // 0x26a050: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x26a050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_26a054:
    // 0x26a054: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x26a054u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_26a058:
    // 0x26a058: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x26a058u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_26a05c:
    // 0x26a05c: 0xe7a5003c  swc1        $f5, 0x3C($sp)
    ctx->pc = 0x26a05cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_26a060:
    // 0x26a060: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x26a060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26a064:
    // 0x26a064: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x26a064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26a068:
    // 0x26a068: 0xc6840008  lwc1        $f4, 0x8($s4)
    ctx->pc = 0x26a068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_26a06c:
    // 0x26a06c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x26a06cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_26a070:
    // 0x26a070: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x26a070u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_26a074:
    // 0x26a074: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x26a074u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_26a078:
    // 0x26a078: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x26a078u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26a07c:
    // 0x26a07c: 0x0  nop
    ctx->pc = 0x26a07cu;
    // NOP
label_26a080:
    // 0x26a080: 0x4500000f  bc1f        . + 4 + (0xF << 2)
label_26a084:
    if (ctx->pc == 0x26A084u) {
        ctx->pc = 0x26A084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A080u;
        // 0x26a084: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A088u;
        goto label_26a088;
    }
    ctx->pc = 0x26A080u;
    {
        const bool branch_taken_0x26a080 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26A084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A080u;
        // 0x26a084: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a080) {
            ctx->pc = 0x26A0C0u;
            goto label_26a0c0;
        }
    }
    ctx->pc = 0x26A088u;
label_26a088:
    // 0x26a088: 0xc0f6a96  jal         func_3DAA58
label_26a08c:
    if (ctx->pc == 0x26A08Cu) {
        ctx->pc = 0x26A08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A088u;
        // 0x26a08c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A090u;
        goto label_26a090;
    }
    ctx->pc = 0x26A088u;
    SET_GPR_U32(ctx, 31, 0x26A090u);
    ctx->pc = 0x26A08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A088u;
    // 0x26a08c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26A088u, 0x26A090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A090u;
label_26a090:
    // 0x26a090: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26a090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26a094:
    // 0x26a094: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26a094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26a098:
    // 0x26a098: 0xc09a750  jal         func_269D40
label_26a09c:
    if (ctx->pc == 0x26A09Cu) {
        ctx->pc = 0x26A09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A098u;
        // 0x26a09c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A0A0u;
        goto label_26a0a0;
    }
    ctx->pc = 0x26A098u;
    SET_GPR_U32(ctx, 31, 0x26A0A0u);
    ctx->pc = 0x26A09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26A098u;
    // 0x26a09c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x269D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x269D40u, 0x26A098u, 0x26A0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A0A0u;
label_26a0a0:
    // 0x26a0a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_26a0a4:
    if (ctx->pc == 0x26A0A4u) {
        ctx->pc = 0x26A0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A0A0u;
        // 0x26a0a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A0A8u;
        goto label_26a0a8;
    }
    ctx->pc = 0x26A0A0u;
    {
        const bool branch_taken_0x26a0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A0A0u;
        // 0x26a0a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a0a0) {
            ctx->pc = 0x26A0BCu;
            goto label_26a0bc;
        }
    }
    ctx->pc = 0x26A0A8u;
label_26a0a8:
    // 0x26a0a8: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x26a0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_26a0ac:
    // 0x26a0ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26a0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26a0b0:
    // 0x26a0b0: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x26a0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_26a0b4:
    // 0x26a0b4: 0x40f809  jalr        $v0
label_26a0b8:
    if (ctx->pc == 0x26A0B8u) {
        ctx->pc = 0x26A0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A0B4u;
        // 0x26a0b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A0BCu;
        goto label_26a0bc;
    }
    ctx->pc = 0x26A0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26A0BCu);
        ctx->pc = 0x26A0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A0B4u;
        // 0x26a0b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A0B4u, 0x26A0BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26A0BCu;
label_26a0bc:
    // 0x26a0bc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x26a0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_26a0c0:
    // 0x26a0c0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_26a0c4:
    if (ctx->pc == 0x26A0C4u) {
        ctx->pc = 0x26A0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A0C0u;
        // 0x26a0c4: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A0C8u;
        goto label_26a0c8;
    }
    ctx->pc = 0x26A0C0u;
    {
        const bool branch_taken_0x26a0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a0c0) {
            ctx->pc = 0x26A0C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A0C0u;
            // 0x26a0c4: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A0D4u;
            goto label_26a0d4;
        }
    }
    ctx->pc = 0x26A0C8u;
label_26a0c8:
    // 0x26a0c8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x26a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_26a0cc:
    // 0x26a0cc: 0x10000005  b           . + 4 + (0x5 << 2)
label_26a0d0:
    if (ctx->pc == 0x26A0D0u) {
        ctx->pc = 0x26A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A0CCu;
        // 0x26a0d0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A0D4u;
        goto label_26a0d4;
    }
    ctx->pc = 0x26A0CCu;
    {
        const bool branch_taken_0x26a0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A0CCu;
        // 0x26a0d0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a0cc) {
            ctx->pc = 0x26A0E4u;
            goto label_26a0e4;
        }
    }
    ctx->pc = 0x26A0D4u;
label_26a0d4:
    // 0x26a0d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26a0d8:
    if (ctx->pc == 0x26A0D8u) {
        ctx->pc = 0x26A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A0D4u;
        // 0x26a0d8: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A0DCu;
        goto label_26a0dc;
    }
    ctx->pc = 0x26A0D4u;
    {
        const bool branch_taken_0x26a0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A0D4u;
        // 0x26a0d8: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a0d4) {
            ctx->pc = 0x26A0E8u;
            goto label_26a0e8;
        }
    }
    ctx->pc = 0x26A0DCu;
label_26a0dc:
    // 0x26a0dc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x26a0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_26a0e0:
    // 0x26a0e0: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x26a0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_26a0e4:
    // 0x26a0e4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x26a0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_26a0e8:
    // 0x26a0e8: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x26a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_26a0ec:
    // 0x26a0ec: 0x1462ffbe  bne         $v1, $v0, . + 4 + (-0x42 << 2)
label_26a0f0:
    if (ctx->pc == 0x26A0F0u) {
        ctx->pc = 0x26A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A0ECu;
        // 0x26a0f0: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A0F4u;
        goto label_26a0f4;
    }
    ctx->pc = 0x26A0ECu;
    {
        const bool branch_taken_0x26a0ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A0ECu;
        // 0x26a0f0: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a0ec) {
            ctx->pc = 0x269FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_269fe8;
        }
    }
    ctx->pc = 0x26A0F4u;
label_26a0f4:
    // 0x26a0f4: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x26a0f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_26a0f8:
    // 0x26a0f8: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x26a0f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_26a0fc:
    // 0x26a0fc: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x26a0fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_26a100:
    // 0x26a100: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x26a100u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_26a104:
    // 0x26a104: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x26a104u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_26a108:
    // 0x26a108: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x26a108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_26a10c:
    // 0x26a10c: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x26a10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_26a110:
    // 0x26a110: 0x3e00008  jr          $ra
label_26a114:
    if (ctx->pc == 0x26A114u) {
        ctx->pc = 0x26A114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A110u;
        // 0x26a114: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26A118u;
        goto label_fallthrough_0x26a110;
    }
    ctx->pc = 0x26A110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A110u;
        // 0x26a114: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x26a110:
    ctx->pc = 0x26A118u;
}

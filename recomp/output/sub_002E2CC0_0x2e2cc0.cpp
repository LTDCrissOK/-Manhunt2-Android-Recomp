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

// Function: sub_002E2CC0
// Address: 0x2e2cc0 - 0x2e3130
void sub_002E2CC0_0x2e2cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2CC0_0x2e2cc0");
#endif

    ctx->pc = 0x2e2cc0u;

    // 0x2e2cc0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2e2cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e2cc4: 0x240e000a  addiu       $t6, $zero, 0xA
    ctx->pc = 0x2e2cc4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e2cc8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2e2cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2e2ccc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2e2cccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2e2cd0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2e2cd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e2cd4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e2cd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e2cd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e2cd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2cdc: 0x0  nop
    ctx->pc = 0x2e2cdcu;
    // NOP
    // 0x2e2ce0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e2ce0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e2ce4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2e2ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2e2ce8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e2ce8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e2cec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e2cecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e2cf0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2e2cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2e2cf4: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x2e2cf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2e2cf8: 0x248305a0  addiu       $v1, $a0, 0x5A0
    ctx->pc = 0x2e2cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1440));
    // 0x2e2cfc: 0x3c014479  lui         $at, 0x4479
    ctx->pc = 0x2e2cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17529 << 16));
    // 0x2e2d00: 0x3421fff0  ori         $at, $at, 0xFFF0
    ctx->pc = 0x2e2d00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65520);
    // 0x2e2d04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e2d04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2d08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e2d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e2d0c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2e2d0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2e2d10: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x2e2d10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2e2d14: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x2e2d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x2e2d18: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x2e2d18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2d1c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2e2d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2e2d20: 0xe48d0014  swc1        $f13, 0x14($a0)
    ctx->pc = 0x2e2d20u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2e2d24: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x2e2d24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x2e2d28: 0xe48c001c  swc1        $f12, 0x1C($a0)
    ctx->pc = 0x2e2d28u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x2e2d2c: 0xac8e0020  sw          $t6, 0x20($a0)
    ctx->pc = 0x2e2d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 14));
    // 0x2e2d30: 0xe48d0024  swc1        $f13, 0x24($a0)
    ctx->pc = 0x2e2d30u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x2e2d34: 0xe48f0028  swc1        $f15, 0x28($a0)
    ctx->pc = 0x2e2d34u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x2e2d38: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x2e2d38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x2e2d3c: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x2e2d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x2e2d40: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2e2d40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x2e2d44: 0xa0800038  sb          $zero, 0x38($a0)
    ctx->pc = 0x2e2d44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 56), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2d48: 0xe484003c  swc1        $f4, 0x3C($a0)
    ctx->pc = 0x2e2d48u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x2e2d4c: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x2e2d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x2e2d50: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x2e2d50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x2e2d54: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2e2d54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x2e2d58: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x2e2d58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x2e2d5c: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x2e2d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x2e2d60: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x2e2d60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x2e2d64: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x2e2d64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x2e2d68: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x2e2d68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x2e2d6c: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x2e2d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x2e2d70: 0xac800074  sw          $zero, 0x74($a0)
    ctx->pc = 0x2e2d70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x2e2d74: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2e2d74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e2d78: 0xf8810600  sqc2        $vf1, 0x600($a0)
    ctx->pc = 0x2e2d78u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 1536), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e2d7c: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x2e2d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x2e2d80: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2e2d80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2e2d84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e2d84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2d88: 0x3c0137fb  lui         $at, 0x37FB
    ctx->pc = 0x2e2d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14331 << 16));
    // 0x2e2d8c: 0x3421a882  ori         $at, $at, 0xA882
    ctx->pc = 0x2e2d8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43138);
    // 0x2e2d90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e2d90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2d94: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x2e2d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
    // 0x2e2d98: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2e2d98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2e2d9c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e2d9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e2da0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2e2da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2e2da4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2e2da4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e2da8: 0xe480007c  swc1        $f0, 0x7C($a0)
    ctx->pc = 0x2e2da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 124), bits); }
    // 0x2e2dac: 0xe48100a4  swc1        $f1, 0xA4($a0)
    ctx->pc = 0x2e2dacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    // 0x2e2db0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2e2db0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e2db4: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x2e2db4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e2db8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2e2db8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2e2dbc: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x2e2dbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x2e2dc0: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x2e2dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x2e2dc4: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x2e2dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x2e2dc8: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x2e2dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x2e2dcc: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x2e2dccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x2e2dd0: 0xe4840094  swc1        $f4, 0x94($a0)
    ctx->pc = 0x2e2dd0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x2e2dd4: 0xe4840098  swc1        $f4, 0x98($a0)
    ctx->pc = 0x2e2dd4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x2e2dd8: 0xe484009c  swc1        $f4, 0x9C($a0)
    ctx->pc = 0x2e2dd8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x2e2ddc: 0xe48400a0  swc1        $f4, 0xA0($a0)
    ctx->pc = 0x2e2ddcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x2e2de0: 0xe48400a8  swc1        $f4, 0xA8($a0)
    ctx->pc = 0x2e2de0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
    // 0x2e2de4: 0xe7b20008  swc1        $f18, 0x8($sp)
    ctx->pc = 0x2e2de4u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2e2de8: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2e2de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2e2dec: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e2decu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2df0: 0xf88100d0  sqc2        $vf1, 0xD0($a0)
    ctx->pc = 0x2e2df0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e2df4: 0x3c013e75  lui         $at, 0x3E75
    ctx->pc = 0x2e2df4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15989 << 16));
    // 0x2e2df8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2e2df8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2e2dfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e2dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2e00: 0x24830580  addiu       $v1, $a0, 0x580
    ctx->pc = 0x2e2e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1408));
    // 0x2e2e04: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x2e2e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x2e2e08: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2e2e08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2e2e0c: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x2e2e0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x2e2e10: 0xe48000e0  swc1        $f0, 0xE0($a0)
    ctx->pc = 0x2e2e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
    // 0x2e2e14: 0xe49100e4  swc1        $f17, 0xE4($a0)
    ctx->pc = 0x2e2e14u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 228), bits); }
    // 0x2e2e18: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2e2e18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e2e1c: 0xf88105e0  sqc2        $vf1, 0x5E0($a0)
    ctx->pc = 0x2e2e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 1504), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e2e20: 0x24820590  addiu       $v0, $a0, 0x590
    ctx->pc = 0x2e2e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1424));
    // 0x2e2e24: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2e2e24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e2e28: 0xf88105f0  sqc2        $vf1, 0x5F0($a0)
    ctx->pc = 0x2e2e28u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 1520), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e2e2c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2e2e2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2e30: 0xac8000e8  sw          $zero, 0xE8($a0)
    ctx->pc = 0x2e2e30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 232), GPR_U32(ctx, 0));
    // 0x2e2e34: 0xa088027c  sb          $t0, 0x27C($a0)
    ctx->pc = 0x2e2e34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 636), (uint8_t)GPR_U32(ctx, 8));
    // 0x2e2e38: 0xa080027d  sb          $zero, 0x27D($a0)
    ctx->pc = 0x2e2e38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 637), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2e3c: 0xac800280  sw          $zero, 0x280($a0)
    ctx->pc = 0x2e2e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 640), GPR_U32(ctx, 0));
    // 0x2e2e40: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2e2e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2e2e44: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2e2e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2e2e48: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2e2e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2e2e4c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2e2e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2e2e50: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e2e50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2e54: 0xf88102b0  sqc2        $vf1, 0x2B0($a0)
    ctx->pc = 0x2e2e54u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 688), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2e2e58: 0x3c01c180  lui         $at, 0xC180
    ctx->pc = 0x2e2e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49536 << 16));
    // 0x2e2e5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e2e5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2e60: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2e2e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2e2e64: 0x3c013c13  lui         $at, 0x3C13
    ctx->pc = 0x2e2e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15379 << 16));
    // 0x2e2e68: 0x342174bc  ori         $at, $at, 0x74BC
    ctx->pc = 0x2e2e68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29884);
    // 0x2e2e6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e2e6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2e70: 0x240c0100  addiu       $t4, $zero, 0x100
    ctx->pc = 0x2e2e70u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e2e74: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2e2e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x2e2e78: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e2e78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e2e7c: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x2e2e7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x2e2e80: 0x240b00c8  addiu       $t3, $zero, 0xC8
    ctx->pc = 0x2e2e80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x2e2e84: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x2e2e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x2e2e88: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2e2e88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x2e2e8c: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x2e2e8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2e2e90: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2e2e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2e2e94: 0xe48002c4  swc1        $f0, 0x2C4($a0)
    ctx->pc = 0x2e2e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 708), bits); }
    // 0x2e2e98: 0x24050096  addiu       $a1, $zero, 0x96
    ctx->pc = 0x2e2e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x2e2e9c: 0xe4810374  swc1        $f1, 0x374($a0)
    ctx->pc = 0x2e2e9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 884), bits); }
    // 0x2e2ea0: 0x240601ea  addiu       $a2, $zero, 0x1EA
    ctx->pc = 0x2e2ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 490));
    // 0x2e2ea4: 0x2407001e  addiu       $a3, $zero, 0x1E
    ctx->pc = 0x2e2ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2e2ea8: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x2e2ea8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e2eac: 0xa08302dc  sb          $v1, 0x2DC($a0)
    ctx->pc = 0x2e2eacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 732), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e2eb0: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x2e2eb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2e2eb4: 0xa08502df  sb          $a1, 0x2DF($a0)
    ctx->pc = 0x2e2eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 735), (uint8_t)GPR_U32(ctx, 5));
    // 0x2e2eb8: 0x240d0002  addiu       $t5, $zero, 0x2
    ctx->pc = 0x2e2eb8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e2ebc: 0xac860360  sw          $a2, 0x360($a0)
    ctx->pc = 0x2e2ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 864), GPR_U32(ctx, 6));
    // 0x2e2ec0: 0x240300b4  addiu       $v1, $zero, 0xB4
    ctx->pc = 0x2e2ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x2e2ec4: 0xac870364  sw          $a3, 0x364($a0)
    ctx->pc = 0x2e2ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 868), GPR_U32(ctx, 7));
    // 0x2e2ec8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e2ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e2ecc: 0xac89036c  sw          $t1, 0x36C($a0)
    ctx->pc = 0x2e2eccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 876), GPR_U32(ctx, 9));
    // 0x2e2ed0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2e2ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e2ed4: 0xac8002c0  sw          $zero, 0x2C0($a0)
    ctx->pc = 0x2e2ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 704), GPR_U32(ctx, 0));
    // 0x2e2ed8: 0xa08002c8  sb          $zero, 0x2C8($a0)
    ctx->pc = 0x2e2ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 712), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2edc: 0xa08002c9  sb          $zero, 0x2C9($a0)
    ctx->pc = 0x2e2edcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 713), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2ee0: 0xa08002ca  sb          $zero, 0x2CA($a0)
    ctx->pc = 0x2e2ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 714), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2ee4: 0xa08002cb  sb          $zero, 0x2CB($a0)
    ctx->pc = 0x2e2ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 715), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2ee8: 0xa08002cc  sb          $zero, 0x2CC($a0)
    ctx->pc = 0x2e2ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 716), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2eec: 0xe48b02d0  swc1        $f11, 0x2D0($a0)
    ctx->pc = 0x2e2eecu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 720), bits); }
    // 0x2e2ef0: 0xe48b02d4  swc1        $f11, 0x2D4($a0)
    ctx->pc = 0x2e2ef0u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 724), bits); }
    // 0x2e2ef4: 0xe48d02d8  swc1        $f13, 0x2D8($a0)
    ctx->pc = 0x2e2ef4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 728), bits); }
    // 0x2e2ef8: 0xa08002dd  sb          $zero, 0x2DD($a0)
    ctx->pc = 0x2e2ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 733), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2efc: 0xa08002de  sb          $zero, 0x2DE($a0)
    ctx->pc = 0x2e2efcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 734), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2f00: 0xe49002e0  swc1        $f16, 0x2E0($a0)
    ctx->pc = 0x2e2f00u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 736), bits); }
    // 0x2e2f04: 0xac8002e4  sw          $zero, 0x2E4($a0)
    ctx->pc = 0x2e2f04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 740), GPR_U32(ctx, 0));
    // 0x2e2f08: 0xa08002f0  sb          $zero, 0x2F0($a0)
    ctx->pc = 0x2e2f08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 752), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2f0c: 0xa08002f1  sb          $zero, 0x2F1($a0)
    ctx->pc = 0x2e2f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 753), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2f10: 0xa08002f2  sb          $zero, 0x2F2($a0)
    ctx->pc = 0x2e2f10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 754), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2f14: 0xac8002f4  sw          $zero, 0x2F4($a0)
    ctx->pc = 0x2e2f14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 756), GPR_U32(ctx, 0));
    // 0x2e2f18: 0xac8002f8  sw          $zero, 0x2F8($a0)
    ctx->pc = 0x2e2f18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 760), GPR_U32(ctx, 0));
    // 0x2e2f1c: 0xac800330  sw          $zero, 0x330($a0)
    ctx->pc = 0x2e2f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 816), GPR_U32(ctx, 0));
    // 0x2e2f20: 0xa0800334  sb          $zero, 0x334($a0)
    ctx->pc = 0x2e2f20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 820), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2f24: 0xa0800350  sb          $zero, 0x350($a0)
    ctx->pc = 0x2e2f24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 848), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2f28: 0xa0800358  sb          $zero, 0x358($a0)
    ctx->pc = 0x2e2f28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 856), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e2f2c: 0xac8c035c  sw          $t4, 0x35C($a0)
    ctx->pc = 0x2e2f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 860), GPR_U32(ctx, 12));
    // 0x2e2f30: 0xac820368  sw          $v0, 0x368($a0)
    ctx->pc = 0x2e2f30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 872), GPR_U32(ctx, 2));
    // 0x2e2f34: 0xac800370  sw          $zero, 0x370($a0)
    ctx->pc = 0x2e2f34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 880), GPR_U32(ctx, 0));
    // 0x2e2f38: 0xa08b0378  sb          $t3, 0x378($a0)
    ctx->pc = 0x2e2f38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 888), (uint8_t)GPR_U32(ctx, 11));
    // 0x2e2f3c: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x2e2f3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x2e2f40: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2e2f40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2e2f44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e2f44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2f48: 0x3c013df5  lui         $at, 0x3DF5
    ctx->pc = 0x2e2f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15861 << 16));
    // 0x2e2f4c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2e2f4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2e2f50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e2f50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e2f54: 0xa08b0379  sb          $t3, 0x379($a0)
    ctx->pc = 0x2e2f54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 889), (uint8_t)GPR_U32(ctx, 11));
    // 0x2e2f58: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2e2f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2e2f5c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2e2f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2e2f60: 0x3c013d27  lui         $at, 0x3D27
    ctx->pc = 0x2e2f60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15655 << 16));
    // 0x2e2f64: 0x3421ef9e  ori         $at, $at, 0xEF9E
    ctx->pc = 0x2e2f64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61342);
    // 0x2e2f68: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e2f68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e2f6c: 0x3c013b44  lui         $at, 0x3B44
    ctx->pc = 0x2e2f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15172 << 16));
    // 0x2e2f70: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x2e2f70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
    // 0x2e2f74: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2e2f74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e2f78: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x2e2f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
    // 0x2e2f7c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2e2f7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2e2f80: 0xe480037c  swc1        $f0, 0x37C($a0)
    ctx->pc = 0x2e2f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 892), bits); }
    // 0x2e2f84: 0xe4810380  swc1        $f1, 0x380($a0)
    ctx->pc = 0x2e2f84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 896), bits); }
    // 0x2e2f88: 0xe4820384  swc1        $f2, 0x384($a0)
    ctx->pc = 0x2e2f88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 900), bits); }
    // 0x2e2f8c: 0xe4830390  swc1        $f3, 0x390($a0)
    ctx->pc = 0x2e2f8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 912), bits); }
    // 0x2e2f90: 0xe48503c0  swc1        $f5, 0x3C0($a0)
    ctx->pc = 0x2e2f90u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 960), bits); }
    // 0x2e2f94: 0xe48603d0  swc1        $f6, 0x3D0($a0)
    ctx->pc = 0x2e2f94u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 976), bits); }
    // 0x2e2f98: 0xe48603c4  swc1        $f6, 0x3C4($a0)
    ctx->pc = 0x2e2f98u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 964), bits); }
    // 0x2e2f9c: 0xa082038b  sb          $v0, 0x38B($a0)
    ctx->pc = 0x2e2f9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 907), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e2fa0: 0xac8c03ac  sw          $t4, 0x3AC($a0)
    ctx->pc = 0x2e2fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 940), GPR_U32(ctx, 12));
    // 0x2e2fa4: 0xac8e03b0  sw          $t6, 0x3B0($a0)
    ctx->pc = 0x2e2fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 944), GPR_U32(ctx, 14));
    // 0x2e2fa8: 0xac8d03b8  sw          $t5, 0x3B8($a0)
    ctx->pc = 0x2e2fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 952), GPR_U32(ctx, 13));
    // 0x2e2fac: 0xa08303be  sb          $v1, 0x3BE($a0)
    ctx->pc = 0x2e2facu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 958), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e2fb0: 0xa08a03bf  sb          $t2, 0x3BF($a0)
    ctx->pc = 0x2e2fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 959), (uint8_t)GPR_U32(ctx, 10));
    // 0x2e2fb4: 0xac8503cc  sw          $a1, 0x3CC($a0)
    ctx->pc = 0x2e2fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 972), GPR_U32(ctx, 5));
    // 0x2e2fb8: 0xa082037a  sb          $v0, 0x37A($a0)
    ctx->pc = 0x2e2fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 890), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e2fbc: 0xa082037b  sb          $v0, 0x37B($a0)
    ctx->pc = 0x2e2fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 891), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e2fc0: 0xa0820388  sb          $v0, 0x388($a0)
    ctx->pc = 0x2e2fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 904), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e2fc4: 0xa0820389  sb          $v0, 0x389($a0)
    ctx->pc = 0x2e2fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 905), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e2fc8: 0xa082038a  sb          $v0, 0x38A($a0)
    ctx->pc = 0x2e2fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 906), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e2fcc: 0xac80038c  sw          $zero, 0x38C($a0)
    ctx->pc = 0x2e2fccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 908), GPR_U32(ctx, 0));
    // 0x2e2fd0: 0xe4840394  swc1        $f4, 0x394($a0)
    ctx->pc = 0x2e2fd0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 916), bits); }
    // 0x2e2fd4: 0xe48b0398  swc1        $f11, 0x398($a0)
    ctx->pc = 0x2e2fd4u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 920), bits); }
    // 0x2e2fd8: 0xe48c039c  swc1        $f12, 0x39C($a0)
    ctx->pc = 0x2e2fd8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 924), bits); }
    // 0x2e2fdc: 0xe48c03a0  swc1        $f12, 0x3A0($a0)
    ctx->pc = 0x2e2fdcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 928), bits); }
    // 0x2e2fe0: 0xac8003a4  sw          $zero, 0x3A4($a0)
    ctx->pc = 0x2e2fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 932), GPR_U32(ctx, 0));
    // 0x2e2fe4: 0xac8003a8  sw          $zero, 0x3A8($a0)
    ctx->pc = 0x2e2fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 936), GPR_U32(ctx, 0));
    // 0x2e2fe8: 0xe48c03b4  swc1        $f12, 0x3B4($a0)
    ctx->pc = 0x2e2fe8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 948), bits); }
    // 0x2e2fec: 0xa08a03bc  sb          $t2, 0x3BC($a0)
    ctx->pc = 0x2e2fecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 956), (uint8_t)GPR_U32(ctx, 10));
    // 0x2e2ff0: 0xa08a03bd  sb          $t2, 0x3BD($a0)
    ctx->pc = 0x2e2ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 957), (uint8_t)GPR_U32(ctx, 10));
    // 0x2e2ff4: 0xac8003c8  sw          $zero, 0x3C8($a0)
    ctx->pc = 0x2e2ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 968), GPR_U32(ctx, 0));
    // 0x2e2ff8: 0xa08803d4  sb          $t0, 0x3D4($a0)
    ctx->pc = 0x2e2ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 980), (uint8_t)GPR_U32(ctx, 8));
    // 0x2e2ffc: 0xa08803d5  sb          $t0, 0x3D5($a0)
    ctx->pc = 0x2e2ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 981), (uint8_t)GPR_U32(ctx, 8));
    // 0x2e3000: 0xa08803d6  sb          $t0, 0x3D6($a0)
    ctx->pc = 0x2e3000u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 982), (uint8_t)GPR_U32(ctx, 8));
    // 0x2e3004: 0x3c013d61  lui         $at, 0x3D61
    ctx->pc = 0x2e3004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15713 << 16));
    // 0x2e3008: 0x342147ae  ori         $at, $at, 0x47AE
    ctx->pc = 0x2e3008u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18350);
    // 0x2e300c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e300cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3010: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2e3010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2e3014: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e3014u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e3018: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e3018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e301c: 0xa08803d7  sb          $t0, 0x3D7($a0)
    ctx->pc = 0x2e301cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 983), (uint8_t)GPR_U32(ctx, 8));
    // 0x2e3020: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2e3020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2e3024: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2e3024u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e3028: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x2e3028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x2e302c: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2e302cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x2e3030: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e3030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e3034: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x2e3034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
    // 0x2e3038: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2e3038u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2e303c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2e303cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e3040: 0x3c013f0c  lui         $at, 0x3F0C
    ctx->pc = 0x2e3040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16140 << 16));
    // 0x2e3044: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e3044u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e3048: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2e3048u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2e304c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2e304cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2e3050: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2e3050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2e3054: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x2e3054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x2e3058: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2e3058u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2e305c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2e305cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x2e3060: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e3060u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e3064: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x2e3064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x2e3068: 0x3c01c2aa  lui         $at, 0xC2AA
    ctx->pc = 0x2e3068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49834 << 16));
    // 0x2e306c: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x2e306cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x2e3070: 0x3c0142aa  lui         $at, 0x42AA
    ctx->pc = 0x2e3070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17066 << 16));
    // 0x2e3074: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x2e3074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x2e3078: 0xe48003dc  swc1        $f0, 0x3DC($a0)
    ctx->pc = 0x2e3078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 988), bits); }
    // 0x2e307c: 0xe48103e8  swc1        $f1, 0x3E8($a0)
    ctx->pc = 0x2e307cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1000), bits); }
    // 0x2e3080: 0xe49103e0  swc1        $f17, 0x3E0($a0)
    ctx->pc = 0x2e3080u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 992), bits); }
    // 0x2e3084: 0xe48c03e4  swc1        $f12, 0x3E4($a0)
    ctx->pc = 0x2e3084u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 996), bits); }
    // 0x2e3088: 0xe49003ec  swc1        $f16, 0x3EC($a0)
    ctx->pc = 0x2e3088u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1004), bits); }
    // 0x2e308c: 0xe48d03f4  swc1        $f13, 0x3F4($a0)
    ctx->pc = 0x2e308cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1012), bits); }
    // 0x2e3090: 0xe48203f8  swc1        $f2, 0x3F8($a0)
    ctx->pc = 0x2e3090u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1016), bits); }
    // 0x2e3094: 0xe48303fc  swc1        $f3, 0x3FC($a0)
    ctx->pc = 0x2e3094u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1020), bits); }
    // 0x2e3098: 0xe4850408  swc1        $f5, 0x408($a0)
    ctx->pc = 0x2e3098u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1032), bits); }
    // 0x2e309c: 0xe48e0414  swc1        $f14, 0x414($a0)
    ctx->pc = 0x2e309cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1044), bits); }
    // 0x2e30a0: 0xe4860430  swc1        $f6, 0x430($a0)
    ctx->pc = 0x2e30a0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1072), bits); }
    // 0x2e30a4: 0xac860438  sw          $a2, 0x438($a0)
    ctx->pc = 0x2e30a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1080), GPR_U32(ctx, 6));
    // 0x2e30a8: 0xe484043c  swc1        $f4, 0x43C($a0)
    ctx->pc = 0x2e30a8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1084), bits); }
    // 0x2e30ac: 0xe4870440  swc1        $f7, 0x440($a0)
    ctx->pc = 0x2e30acu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1088), bits); }
    // 0x2e30b0: 0xe48b0444  swc1        $f11, 0x444($a0)
    ctx->pc = 0x2e30b0u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1092), bits); }
    // 0x2e30b4: 0xe4880448  swc1        $f8, 0x448($a0)
    ctx->pc = 0x2e30b4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1096), bits); }
    // 0x2e30b8: 0xe489044c  swc1        $f9, 0x44C($a0)
    ctx->pc = 0x2e30b8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1100), bits); }
    // 0x2e30bc: 0xe48a0450  swc1        $f10, 0x450($a0)
    ctx->pc = 0x2e30bcu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1104), bits); }
    // 0x2e30c0: 0xa0880454  sb          $t0, 0x454($a0)
    ctx->pc = 0x2e30c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1108), (uint8_t)GPR_U32(ctx, 8));
    // 0x2e30c4: 0xa08803d8  sb          $t0, 0x3D8($a0)
    ctx->pc = 0x2e30c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 984), (uint8_t)GPR_U32(ctx, 8));
    // 0x2e30c8: 0xa08003d9  sb          $zero, 0x3D9($a0)
    ctx->pc = 0x2e30c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 985), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e30cc: 0xe48f03f0  swc1        $f15, 0x3F0($a0)
    ctx->pc = 0x2e30ccu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1008), bits); }
    // 0x2e30d0: 0xe4840400  swc1        $f4, 0x400($a0)
    ctx->pc = 0x2e30d0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1024), bits); }
    // 0x2e30d4: 0xe4840404  swc1        $f4, 0x404($a0)
    ctx->pc = 0x2e30d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1028), bits); }
    // 0x2e30d8: 0xe48e040c  swc1        $f14, 0x40C($a0)
    ctx->pc = 0x2e30d8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1036), bits); }
    // 0x2e30dc: 0xe48f0410  swc1        $f15, 0x410($a0)
    ctx->pc = 0x2e30dcu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1040), bits); }
    // 0x2e30e0: 0xac800418  sw          $zero, 0x418($a0)
    ctx->pc = 0x2e30e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1048), GPR_U32(ctx, 0));
    // 0x2e30e4: 0xa0800434  sb          $zero, 0x434($a0)
    ctx->pc = 0x2e30e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1076), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e30e8: 0xa0800038  sb          $zero, 0x38($a0)
    ctx->pc = 0x2e30e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 56), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e30ec: 0xa0800620  sb          $zero, 0x620($a0)
    ctx->pc = 0x2e30ecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1568), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e30f0: 0xac800458  sw          $zero, 0x458($a0)
    ctx->pc = 0x2e30f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1112), GPR_U32(ctx, 0));
    // 0x2e30f4: 0xa080045c  sb          $zero, 0x45C($a0)
    ctx->pc = 0x2e30f4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1116), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e30f8: 0xa080045d  sb          $zero, 0x45D($a0)
    ctx->pc = 0x2e30f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1117), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e30fc: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x2e30fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x2e3100: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e3100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e3104: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2e3104u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x2e3108: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e3108u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e310c: 0xa080045e  sb          $zero, 0x45E($a0)
    ctx->pc = 0x2e310cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1118), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e3110: 0xe4800460  swc1        $f0, 0x460($a0)
    ctx->pc = 0x2e3110u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1120), bits); }
    // 0x2e3114: 0xe4810464  swc1        $f1, 0x464($a0)
    ctx->pc = 0x2e3114u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1124), bits); }
    // 0x2e3118: 0xe4920468  swc1        $f18, 0x468($a0)
    ctx->pc = 0x2e3118u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1128), bits); }
    // 0x2e311c: 0xe48f061c  swc1        $f15, 0x61C($a0)
    ctx->pc = 0x2e311cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1564), bits); }
    // 0x2e3120: 0xac80054c  sw          $zero, 0x54C($a0)
    ctx->pc = 0x2e3120u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1356), GPR_U32(ctx, 0));
    // 0x2e3124: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3124u;
        // 0x2e3128: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E312Cu;
    // 0x2e312c: 0x0  nop
    ctx->pc = 0x2e312cu;
    // NOP
    ctx->pc = 0x2e3130u;
}

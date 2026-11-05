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

// Function: sub_00300858
// Address: 0x300858 - 0x300a70
void sub_00300858_0x300858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00300858_0x300858");
#endif

    switch (ctx->pc) {
        case 0x300928u: goto label_300928;
        case 0x300998u: goto label_300998;
        case 0x3009c4u: goto label_3009c4;
        case 0x3009e0u: goto label_3009e0;
        case 0x300a24u: goto label_300a24;
        case 0x300a3cu: goto label_300a3c;
        default: break;
    }

    ctx->pc = 0x300858u;

    // 0x300858: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x300858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x30085c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x30085cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x300860: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x300860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x300864: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x300864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x300868: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x300868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x30086c: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x30086cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x300870: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x300870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x300874: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x300874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x300878: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x300878u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30087c: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x30087cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x300880: 0x245e5870  addiu       $fp, $v0, 0x5870
    ctx->pc = 0x300880u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
    // 0x300884: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x300884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x300888: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x300888u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x30088c: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x30088cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x300890: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x300890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x300894: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x300894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x300898: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x300898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x30089c: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x30089cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
    // 0x3008a0: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x3008a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x3008a4: 0xc4c3000c  lwc1        $f3, 0xC($a2)
    ctx->pc = 0x3008a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3008a8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x3008a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3008ac: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x3008acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3008b0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x3008b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x3008b4: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x3008b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3008b8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x3008b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x3008bc: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x3008bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3008c0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3008c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x3008c4: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x3008c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x3008c8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x3008c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3008cc: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x3008ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3008d0: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x3008d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x3008d4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x3008d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3008d8: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x3008d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3008dc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3008dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3008e0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x3008e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3008e4: 0x4604a502  mul.s       $f20, $f20, $f4
    ctx->pc = 0x3008e4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
    // 0x3008e8: 0xc7c0007c  lwc1        $f0, 0x7C($fp)
    ctx->pc = 0x3008e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3008ec: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x3008ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3008f0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3008f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3008f4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x3008f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3008f8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x3008f8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x3008fc: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x3008fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x300900: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x300900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x300904: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x300904u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x300908: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x300908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30090c: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x30090cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x300910: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x300910u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x300914: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x300914u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x300918: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x300918u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x30091c: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x30091cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x300920: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x300920u;
    SET_GPR_U32(ctx, 31, 0x300928u);
    ctx->pc = 0x300924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300920u;
    // 0x300924: 0xe7a40004  swc1        $f4, 0x4($sp) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x300920u, 0x300928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300928u;
label_300928:
    // 0x300928: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x300928u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x30092c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x30092cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x300930: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x300930u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x300934: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x300934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x300938: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x300938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x30093c: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x30093cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x300940: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x300940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300944: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x300944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x300948: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x300948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30094c: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x30094cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x300950: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x300950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x300954: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x300954u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x300958: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x300958u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x30095c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x30095cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x300960: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x300960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x300964: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x300964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x300968: 0x9043bd24  lbu         $v1, -0x42DC($v0)
    ctx->pc = 0x300968u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FBD24u));
    // 0x30096c: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x30096Cu;
    {
        const bool branch_taken_0x30096c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x300970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30096Cu;
        // 0x300970: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30096c) {
            ctx->pc = 0x3009FCu;
            goto label_3009fc;
        }
    }
    ctx->pc = 0x300974u;
    // 0x300974: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x300974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300978: 0x8c52bd20  lw          $s2, -0x42E0($v0)
    ctx->pc = 0x300978u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950176)));
    // 0x30097c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x30097cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x300980: 0x18400028  blez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x300980u;
    {
        const bool branch_taken_0x300980 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x300984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300980u;
        // 0x300984: 0x27b30030  addiu       $s3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300980) {
            ctx->pc = 0x300A24u;
            goto label_300a24;
        }
    }
    ctx->pc = 0x300988u;
    // 0x300988: 0x24170004  addiu       $s7, $zero, 0x4
    ctx->pc = 0x300988u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30098c: 0x3c160030  lui         $s6, 0x30
    ctx->pc = 0x30098cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)48 << 16));
    // 0x300990: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x300990u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300994: 0x0  nop
    ctx->pc = 0x300994u;
    // NOP
label_300998:
    // 0x300998: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x300998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x30099c: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x30099cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3009a0: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x3009a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3009a4: 0x14770002  bne         $v1, $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x3009A4u;
    {
        const bool branch_taken_0x3009a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 23));
        ctx->pc = 0x3009A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3009A4u;
        // 0x3009a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3009a4) {
            ctx->pc = 0x3009B0u;
            goto label_3009b0;
        }
    }
    ctx->pc = 0x3009ACu;
    // 0x3009ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3009acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3009b0:
    // 0x3009b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3009b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3009b4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3009B4u;
    {
        const bool branch_taken_0x3009b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3009B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3009B4u;
        // 0x3009b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3009b4) {
            ctx->pc = 0x3009E0u;
            goto label_3009e0;
        }
    }
    ctx->pc = 0x3009BCu;
    // 0x3009bc: 0xc0b5332  jal         func_2D4CC8
    ctx->pc = 0x3009BCu;
    SET_GPR_U32(ctx, 31, 0x3009C4u);
    ctx->pc = 0x3009C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3009BCu;
    // 0x3009c0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D4CC8u, 0x3009BCu, 0x3009C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3009C4u;
label_3009c4:
    // 0x3009c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3009C4u;
    {
        const bool branch_taken_0x3009c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3009C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3009C4u;
        // 0x3009c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3009c4) {
            ctx->pc = 0x3009E0u;
            goto label_3009e0;
        }
    }
    ctx->pc = 0x3009CCu;
    // 0x3009cc: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x3009ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x3009d0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3009d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3009d4: 0x26c7fc40  addiu       $a3, $s6, -0x3C0
    ctx->pc = 0x3009d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966336));
    // 0x3009d8: 0xc0dbe70  jal         func_36F9C0
    ctx->pc = 0x3009D8u;
    SET_GPR_U32(ctx, 31, 0x3009E0u);
    ctx->pc = 0x3009DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3009D8u;
    // 0x3009dc: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F9C0u, 0x3009D8u, 0x3009E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3009E0u;
label_3009e0:
    // 0x3009e0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3009e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3009e4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3009e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3009e8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x3009e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3009ec: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x3009ECu;
    {
        const bool branch_taken_0x3009ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3009F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3009ECu;
        // 0x3009f0: 0x269401c4  addiu       $s4, $s4, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 452));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3009ec) {
            ctx->pc = 0x300998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300998;
        }
    }
    ctx->pc = 0x3009F4u;
    // 0x3009f4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3009F4u;
    {
        const bool branch_taken_0x3009f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3009f4) {
            ctx->pc = 0x300A24u;
            goto label_300a24;
        }
    }
    ctx->pc = 0x3009FCu;
label_3009fc:
    // 0x3009fc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3009fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x300a00: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x300a00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x300a04: 0x8c45bd28  lw          $a1, -0x42D8($v0)
    ctx->pc = 0x300a04u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FBD28u));
    // 0x300a08: 0x3c070030  lui         $a3, 0x30
    ctx->pc = 0x300a08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48 << 16));
    // 0x300a0c: 0x24e7fc40  addiu       $a3, $a3, -0x3C0
    ctx->pc = 0x300a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966336));
    // 0x300a10: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x300a10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300a14: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x300a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x300a18: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x300a18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300a1c: 0xc0dbe70  jal         func_36F9C0
    ctx->pc = 0x300A1Cu;
    SET_GPR_U32(ctx, 31, 0x300A24u);
    ctx->pc = 0x300A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300A1Cu;
    // 0x300a20: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F9C0u, 0x300A1Cu, 0x300A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300A24u;
label_300a24:
    // 0x300a24: 0x3c05fbd0  lui         $a1, 0xFBD0
    ctx->pc = 0x300a24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64464 << 16));
    // 0x300a28: 0xafd502c0  sw          $s5, 0x2C0($fp)
    ctx->pc = 0x300a28u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 704), GPR_U32(ctx, 21));
    // 0x300a2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x300a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300a30: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x300a30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x300a34: 0xc07a288  jal         func_1E8A20
    ctx->pc = 0x300A34u;
    SET_GPR_U32(ctx, 31, 0x300A3Cu);
    ctx->pc = 0x300A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300A34u;
    // 0x300a38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8A20u, 0x300A34u, 0x300A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300A3Cu;
label_300a3c:
    // 0x300a3c: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x300a3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x300a40: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x300a40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x300a44: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x300a44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x300a48: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x300a48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x300a4c: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x300a4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x300a50: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x300a50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x300a54: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x300a54u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x300a58: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x300a58u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x300a5c: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x300a5cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x300a60: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x300a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x300a64: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x300a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x300a68: 0x3e00008  jr          $ra
    ctx->pc = 0x300A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300A68u;
        // 0x300a6c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300A70u;
}

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

// Function: sub_0033F118
// Address: 0x33f118 - 0x33f578
void sub_0033F118_0x33f118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033F118_0x33f118");
#endif

    switch (ctx->pc) {
        case 0x33f210u: goto label_33f210;
        case 0x33f290u: goto label_33f290;
        case 0x33f504u: goto label_33f504;
        default: break;
    }

    ctx->pc = 0x33f118u;

    // 0x33f118: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x33f118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x33f11c: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x33f11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x33f120: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x33f120u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x33f124: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x33f124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x33f128: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x33f128u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x33f12c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x33f12cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f130: 0xe7ae0028  swc1        $f14, 0x28($sp)
    ctx->pc = 0x33f130u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x33f134: 0xe7af002c  swc1        $f15, 0x2C($sp)
    ctx->pc = 0x33f134u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x33f138: 0xe7b10034  swc1        $f17, 0x34($sp)
    ctx->pc = 0x33f138u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x33f13c: 0xc7a50120  lwc1        $f5, 0x120($sp)
    ctx->pc = 0x33f13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x33f140: 0x460f6041  sub.s       $f1, $f12, $f15
    ctx->pc = 0x33f140u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[15]);
    // 0x33f144: 0x46117081  sub.s       $f2, $f14, $f17
    ctx->pc = 0x33f144u;
    ctx->f[2] = FPU_SUB_S(ctx->f[14], ctx->f[17]);
    // 0x33f148: 0xe7b20038  swc1        $f18, 0x38($sp)
    ctx->pc = 0x33f148u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x33f14c: 0x460570c1  sub.s       $f3, $f14, $f5
    ctx->pc = 0x33f14cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[14], ctx->f[5]);
    // 0x33f150: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x33f150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x33f154: 0x46126001  sub.s       $f0, $f12, $f18
    ctx->pc = 0x33f154u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[18]);
    // 0x33f158: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33f158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x33f15c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x33f15cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x33f160: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x33f160u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x33f164: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x33f164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x33f168: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x33f168u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x33f16c: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x33f16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x33f170: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x33f170u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x33f174: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x33f174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x33f178: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x33f178u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x33f17c: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x33f17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x33f180: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x33f180u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x33f184: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x33f184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x33f188: 0xe7bf0118  swc1        $f31, 0x118($sp)
    ctx->pc = 0x33f188u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x33f18c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x33f18cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f190: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x33f190u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x33f194: 0xe7be0110  swc1        $f30, 0x110($sp)
    ctx->pc = 0x33f194u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x33f198: 0x0  nop
    ctx->pc = 0x33f198u;
    // NOP
    // 0x33f19c: 0x0  nop
    ctx->pc = 0x33f19cu;
    // NOP
    // 0x33f1a0: 0x46010044  c1          0x10044
    ctx->pc = 0x33f1a0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x33f1a4: 0xe7bd0108  swc1        $f29, 0x108($sp)
    ctx->pc = 0x33f1a4u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x33f1a8: 0xe7bc0100  swc1        $f28, 0x100($sp)
    ctx->pc = 0x33f1a8u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x33f1ac: 0x46000004  c1          0x4
    ctx->pc = 0x33f1acu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x33f1b0: 0xe7bb00f8  swc1        $f27, 0xF8($sp)
    ctx->pc = 0x33f1b0u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x33f1b4: 0xe7ba00f0  swc1        $f26, 0xF0($sp)
    ctx->pc = 0x33f1b4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x33f1b8: 0xe7b900e8  swc1        $f25, 0xE8($sp)
    ctx->pc = 0x33f1b8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x33f1bc: 0xe7b800e0  swc1        $f24, 0xE0($sp)
    ctx->pc = 0x33f1bcu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x33f1c0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x33f1c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x33f1c4: 0xe7b700d8  swc1        $f23, 0xD8($sp)
    ctx->pc = 0x33f1c4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x33f1c8: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x33f1c8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x33f1cc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x33f1ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x33f1d0: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x33f1d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x33f1d4: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x33f1d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x33f1d8: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x33f1d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x33f1dc: 0xe7ad0024  swc1        $f13, 0x24($sp)
    ctx->pc = 0x33f1dcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x33f1e0: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x33f1e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x33f1e4: 0xe7b00030  swc1        $f16, 0x30($sp)
    ctx->pc = 0x33f1e4u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x33f1e8: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33f1e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x33f1ec: 0x44121000  mfc1        $s2, $f2
    ctx->pc = 0x33f1ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x33f1f0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33f1f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x33f1f4: 0x44110800  mfc1        $s1, $f1
    ctx->pc = 0x33f1f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x33f1f8: 0x1a4000ca  blez        $s2, . + 4 + (0xCA << 2)
    ctx->pc = 0x33F1F8u;
    {
        const bool branch_taken_0x33f1f8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x33F1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F1F8u;
        // 0x33f1fc: 0xe7b3003c  swc1        $f19, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f1f8) {
            ctx->pc = 0x33F524u;
            goto label_33f524;
        }
    }
    ctx->pc = 0x33F200u;
    // 0x33f200: 0x44921000  mtc1        $s2, $f2
    ctx->pc = 0x33f200u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33f204: 0x0  nop
    ctx->pc = 0x33f204u;
    // NOP
    // 0x33f208: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x33f208u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33f20c: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x33f20cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_33f210:
    // 0x33f210: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x33f210u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33f214: 0x0  nop
    ctx->pc = 0x33f214u;
    // NOP
    // 0x33f218: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x33f218u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33f21c: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x33f21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33f220: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x33f220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33f224: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x33f224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33f228: 0x0  nop
    ctx->pc = 0x33f228u;
    // NOP
    // 0x33f22c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33f22cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33f230: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x33f230u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f234: 0x0  nop
    ctx->pc = 0x33f234u;
    // NOP
    // 0x33f238: 0x0  nop
    ctx->pc = 0x33f238u;
    // NOP
    // 0x33f23c: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x33f23cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x33f240: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x33f240u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f244: 0x0  nop
    ctx->pc = 0x33f244u;
    // NOP
    // 0x33f248: 0x0  nop
    ctx->pc = 0x33f248u;
    // NOP
    // 0x33f24c: 0x460307c3  div.s       $f31, $f0, $f3
    ctx->pc = 0x33f24cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[31] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x33f250: 0x1a2000b0  blez        $s1, . + 4 + (0xB0 << 2)
    ctx->pc = 0x33F250u;
    {
        const bool branch_taken_0x33f250 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x33F254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F250u;
        // 0x33f254: 0xe7a10040  swc1        $f1, 0x40($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f250) {
            ctx->pc = 0x33F514u;
            goto label_33f514;
        }
    }
    ctx->pc = 0x33F258u;
    // 0x33f258: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33f258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x33f25c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x33f25cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x33f260: 0x44912000  mtc1        $s1, $f4
    ctx->pc = 0x33f260u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x33f264: 0x0  nop
    ctx->pc = 0x33f264u;
    // NOP
    // 0x33f268: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x33f268u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x33f26c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33f26cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x33f270: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x33f270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x33f274: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x33f274u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x33f278: 0x461f3181  sub.s       $f6, $f6, $f31
    ctx->pc = 0x33f278u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[31]);
    // 0x33f27c: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x33f27cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x33f280: 0xe7a5004c  swc1        $f5, 0x4C($sp)
    ctx->pc = 0x33f280u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x33f284: 0xe7a60050  swc1        $f6, 0x50($sp)
    ctx->pc = 0x33f284u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x33f288: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x33f288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33f28c: 0x0  nop
    ctx->pc = 0x33f28cu;
    // NOP
label_33f290:
    // 0x33f290: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x33f290u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x33f294: 0x0  nop
    ctx->pc = 0x33f294u;
    // NOP
    // 0x33f298: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x33f298u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x33f29c: 0x44909800  mtc1        $s0, $f19
    ctx->pc = 0x33f29cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x33f2a0: 0x0  nop
    ctx->pc = 0x33f2a0u;
    // NOP
    // 0x33f2a4: 0x46809ce0  cvt.s.w     $f19, $f19
    ctx->pc = 0x33f2a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[19], sizeof(tmp)); ctx->f[19] = FPU_CVT_S_W(tmp); }
    // 0x33f2a8: 0xc7a70048  lwc1        $f7, 0x48($sp)
    ctx->pc = 0x33f2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x33f2ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33f2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x33f2b0: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x33f2b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x33f2b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x33f2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f2b8: 0x0  nop
    ctx->pc = 0x33f2b8u;
    // NOP
    // 0x33f2bc: 0x0  nop
    ctx->pc = 0x33f2bcu;
    // NOP
    // 0x33f2c0: 0x46076b43  div.s       $f13, $f13, $f7
    ctx->pc = 0x33f2c0u;
    { if (ctx->f[7] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[13], ctx->f[7]); }
    // 0x33f2c4: 0xc7af004c  lwc1        $f15, 0x4C($sp)
    ctx->pc = 0x33f2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x33f2c8: 0x0  nop
    ctx->pc = 0x33f2c8u;
    // NOP
    // 0x33f2cc: 0x0  nop
    ctx->pc = 0x33f2ccu;
    // NOP
    // 0x33f2d0: 0x46079cc3  div.s       $f19, $f19, $f7
    ctx->pc = 0x33f2d0u;
    { if (ctx->f[7] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[19] = FPU_DIV_S(ctx->f[19], ctx->f[7]); }
    // 0x33f2d4: 0xc7b20040  lwc1        $f18, 0x40($sp)
    ctx->pc = 0x33f2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x33f2d8: 0xc7b70050  lwc1        $f23, 0x50($sp)
    ctx->pc = 0x33f2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x33f2dc: 0xc7b80028  lwc1        $f24, 0x28($sp)
    ctx->pc = 0x33f2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x33f2e0: 0xc7bb0034  lwc1        $f27, 0x34($sp)
    ctx->pc = 0x33f2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x33f2e4: 0xc7bc0020  lwc1        $f28, 0x20($sp)
    ctx->pc = 0x33f2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x33f2e8: 0x460d4401  sub.s       $f16, $f8, $f13
    ctx->pc = 0x33f2e8u;
    ctx->f[16] = FPU_SUB_S(ctx->f[8], ctx->f[13]);
    // 0x33f2ec: 0xc7a6002c  lwc1        $f6, 0x2C($sp)
    ctx->pc = 0x33f2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x33f2f0: 0x46134001  sub.s       $f0, $f8, $f19
    ctx->pc = 0x33f2f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[8], ctx->f[19]);
    // 0x33f2f4: 0x46137b02  mul.s       $f12, $f15, $f19
    ctx->pc = 0x33f2f4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[15], ctx->f[19]);
    // 0x33f2f8: 0xc7a80024  lwc1        $f8, 0x24($sp)
    ctx->pc = 0x33f2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x33f2fc: 0x46107a42  mul.s       $f9, $f15, $f16
    ctx->pc = 0x33f2fcu;
    ctx->f[9] = FPU_MUL_S(ctx->f[15], ctx->f[16]);
    // 0x33f300: 0x46007a82  mul.s       $f10, $f15, $f0
    ctx->pc = 0x33f300u;
    ctx->f[10] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x33f304: 0x46009102  mul.s       $f4, $f18, $f0
    ctx->pc = 0x33f304u;
    ctx->f[4] = FPU_MUL_S(ctx->f[18], ctx->f[0]);
    // 0x33f308: 0xc7af0030  lwc1        $f15, 0x30($sp)
    ctx->pc = 0x33f308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x33f30c: 0x46109082  mul.s       $f2, $f18, $f16
    ctx->pc = 0x33f30cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[18], ctx->f[16]);
    // 0x33f310: 0x4610f8c2  mul.s       $f3, $f31, $f16
    ctx->pc = 0x33f310u;
    ctx->f[3] = FPU_MUL_S(ctx->f[31], ctx->f[16]);
    // 0x33f314: 0xc7b20034  lwc1        $f18, 0x34($sp)
    ctx->pc = 0x33f314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x33f318: 0x4600f842  mul.s       $f1, $f31, $f0
    ctx->pc = 0x33f318u;
    ctx->f[1] = FPU_MUL_S(ctx->f[31], ctx->f[0]);
    // 0x33f31c: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x33f31cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x33f320: 0x4610bc02  mul.s       $f16, $f23, $f16
    ctx->pc = 0x33f320u;
    ctx->f[16] = FPU_MUL_S(ctx->f[23], ctx->f[16]);
    // 0x33f324: 0x4613b9c2  mul.s       $f7, $f23, $f19
    ctx->pc = 0x33f324u;
    ctx->f[7] = FPU_MUL_S(ctx->f[23], ctx->f[19]);
    // 0x33f328: 0x461b2682  mul.s       $f26, $f4, $f27
    ctx->pc = 0x33f328u;
    ctx->f[26] = FPU_MUL_S(ctx->f[4], ctx->f[27]);
    // 0x33f32c: 0xc7b7004c  lwc1        $f23, 0x4C($sp)
    ctx->pc = 0x33f32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x33f330: 0x46185502  mul.s       $f20, $f10, $f24
    ctx->pc = 0x33f330u;
    ctx->f[20] = FPU_MUL_S(ctx->f[10], ctx->f[24]);
    // 0x33f334: 0x46180542  mul.s       $f21, $f0, $f24
    ctx->pc = 0x33f334u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x33f338: 0x46184b82  mul.s       $f14, $f9, $f24
    ctx->pc = 0x33f338u;
    ctx->f[14] = FPU_MUL_S(ctx->f[9], ctx->f[24]);
    // 0x33f33c: 0x46188442  mul.s       $f17, $f16, $f24
    ctx->pc = 0x33f33cu;
    ctx->f[17] = FPU_MUL_S(ctx->f[16], ctx->f[24]);
    // 0x33f340: 0x46060942  mul.s       $f5, $f1, $f6
    ctx->pc = 0x33f340u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x33f344: 0xc7b80050  lwc1        $f24, 0x50($sp)
    ctx->pc = 0x33f344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x33f348: 0x461b0ec2  mul.s       $f27, $f1, $f27
    ctx->pc = 0x33f348u;
    ctx->f[27] = FPU_MUL_S(ctx->f[1], ctx->f[27]);
    // 0x33f34c: 0x461c02c2  mul.s       $f11, $f0, $f28
    ctx->pc = 0x33f34cu;
    ctx->f[11] = FPU_MUL_S(ctx->f[0], ctx->f[28]);
    // 0x33f350: 0x461c4d82  mul.s       $f22, $f9, $f28
    ctx->pc = 0x33f350u;
    ctx->f[22] = FPU_MUL_S(ctx->f[9], ctx->f[28]);
    // 0x33f354: 0xc7bc002c  lwc1        $f28, 0x2C($sp)
    ctx->pc = 0x33f354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x33f358: 0x460f0842  mul.s       $f1, $f1, $f15
    ctx->pc = 0x33f358u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[15]);
    // 0x33f35c: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x33f35cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x33f360: 0xc7af0024  lwc1        $f15, 0x24($sp)
    ctx->pc = 0x33f360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x33f364: 0x460db982  mul.s       $f6, $f23, $f13
    ctx->pc = 0x33f364u;
    ctx->f[6] = FPU_MUL_S(ctx->f[23], ctx->f[13]);
    // 0x33f368: 0x460dc202  mul.s       $f8, $f24, $f13
    ctx->pc = 0x33f368u;
    ctx->f[8] = FPU_MUL_S(ctx->f[24], ctx->f[13]);
    // 0x33f36c: 0xc7b70020  lwc1        $f23, 0x20($sp)
    ctx->pc = 0x33f36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x33f370: 0x461c1642  mul.s       $f25, $f2, $f28
    ctx->pc = 0x33f370u;
    ctx->f[25] = FPU_MUL_S(ctx->f[2], ctx->f[28]);
    // 0x33f374: 0x461c1e02  mul.s       $f24, $f3, $f28
    ctx->pc = 0x33f374u;
    ctx->f[24] = FPU_MUL_S(ctx->f[3], ctx->f[28]);
    // 0x33f378: 0x46121742  mul.s       $f29, $f2, $f18
    ctx->pc = 0x33f378u;
    ctx->f[29] = FPU_MUL_S(ctx->f[2], ctx->f[18]);
    // 0x33f37c: 0xc7bc0024  lwc1        $f28, 0x24($sp)
    ctx->pc = 0x33f37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x33f380: 0x46121f82  mul.s       $f30, $f3, $f18
    ctx->pc = 0x33f380u;
    ctx->f[30] = FPU_MUL_S(ctx->f[3], ctx->f[18]);
    // 0x33f384: 0x460f4a42  mul.s       $f9, $f9, $f15
    ctx->pc = 0x33f384u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[15]);
    // 0x33f388: 0xc7b20030  lwc1        $f18, 0x30($sp)
    ctx->pc = 0x33f388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x33f38c: 0x461783c2  mul.s       $f15, $f16, $f23
    ctx->pc = 0x33f38cu;
    ctx->f[15] = FPU_MUL_S(ctx->f[16], ctx->f[23]);
    // 0x33f390: 0x461c8402  mul.s       $f16, $f16, $f28
    ctx->pc = 0x33f390u;
    ctx->f[16] = FPU_MUL_S(ctx->f[16], ctx->f[28]);
    // 0x33f394: 0x46121082  mul.s       $f2, $f2, $f18
    ctx->pc = 0x33f394u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[18]);
    // 0x33f398: 0xc7bc002c  lwc1        $f28, 0x2C($sp)
    ctx->pc = 0x33f398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x33f39c: 0x461218c2  mul.s       $f3, $f3, $f18
    ctx->pc = 0x33f39cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[18]);
    // 0x33f3a0: 0x46175482  mul.s       $f18, $f10, $f23
    ctx->pc = 0x33f3a0u;
    ctx->f[18] = FPU_MUL_S(ctx->f[10], ctx->f[23]);
    // 0x33f3a4: 0x461c25c2  mul.s       $f23, $f4, $f28
    ctx->pc = 0x33f3a4u;
    ctx->f[23] = FPU_MUL_S(ctx->f[4], ctx->f[28]);
    // 0x33f3a8: 0xc7bc0024  lwc1        $f28, 0x24($sp)
    ctx->pc = 0x33f3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x33f3ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33f3acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33f3b0: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x33f3b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33f3b4: 0x461bad40  add.s       $f21, $f21, $f27
    ctx->pc = 0x33f3b4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[27]);
    // 0x33f3b8: 0x461c5282  mul.s       $f10, $f10, $f28
    ctx->pc = 0x33f3b8u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[28]);
    // 0x33f3bc: 0xc7bc0030  lwc1        $f28, 0x30($sp)
    ctx->pc = 0x33f3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x33f3c0: 0x460166c2  mul.s       $f27, $f12, $f1
    ctx->pc = 0x33f3c0u;
    ctx->f[27] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x33f3c4: 0x46055ac0  add.s       $f11, $f11, $f5
    ctx->pc = 0x33f3c4u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[5]);
    // 0x33f3c8: 0x461c2102  mul.s       $f4, $f4, $f28
    ctx->pc = 0x33f3c8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[28]);
    // 0x33f3cc: 0x46013f02  mul.s       $f28, $f7, $f1
    ctx->pc = 0x33f3ccu;
    ctx->f[28] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x33f3d0: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x33f3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33f3d4: 0x4613f942  mul.s       $f5, $f31, $f19
    ctx->pc = 0x33f3d4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[31], ctx->f[19]);
    // 0x33f3d8: 0x461aa500  add.s       $f20, $f20, $f26
    ctx->pc = 0x33f3d8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[26]);
    // 0x33f3dc: 0x46130cc2  mul.s       $f19, $f1, $f19
    ctx->pc = 0x33f3dcu;
    ctx->f[19] = FPU_MUL_S(ctx->f[1], ctx->f[19]);
    // 0x33f3e0: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x33f3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33f3e4: 0x46024a40  add.s       $f9, $f9, $f2
    ctx->pc = 0x33f3e4u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[2]);
    // 0x33f3e8: 0x46038400  add.s       $f16, $f16, $f3
    ctx->pc = 0x33f3e8u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[3]);
    // 0x33f3ec: 0xc7a20120  lwc1        $f2, 0x120($sp)
    ctx->pc = 0x33f3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33f3f0: 0x46013e82  mul.s       $f26, $f7, $f1
    ctx->pc = 0x33f3f0u;
    ctx->f[26] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x33f3f4: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x33f3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33f3f8: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x33f3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33f3fc: 0x46045280  add.s       $f10, $f10, $f4
    ctx->pc = 0x33f3fcu;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[4]);
    // 0x33f400: 0xc7a40038  lwc1        $f4, 0x38($sp)
    ctx->pc = 0x33f400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33f404: 0x4619b580  add.s       $f22, $f22, $f25
    ctx->pc = 0x33f404u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[25]);
    // 0x33f408: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x33f408u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x33f40c: 0x460df842  mul.s       $f1, $f31, $f13
    ctx->pc = 0x33f40cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[31], ctx->f[13]);
    // 0x33f410: 0x46187bc0  add.s       $f15, $f15, $f24
    ctx->pc = 0x33f410u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[24]);
    // 0x33f414: 0x46179480  add.s       $f18, $f18, $f23
    ctx->pc = 0x33f414u;
    ctx->f[18] = FPU_ADD_S(ctx->f[18], ctx->f[23]);
    // 0x33f418: 0xc7b8003c  lwc1        $f24, 0x3C($sp)
    ctx->pc = 0x33f418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x33f41c: 0x460d1b42  mul.s       $f13, $f3, $f13
    ctx->pc = 0x33f41cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[3], ctx->f[13]);
    // 0x33f420: 0x460235c2  mul.s       $f23, $f6, $f2
    ctx->pc = 0x33f420u;
    ctx->f[23] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x33f424: 0x46024642  mul.s       $f25, $f8, $f2
    ctx->pc = 0x33f424u;
    ctx->f[25] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x33f428: 0x46043082  mul.s       $f2, $f6, $f4
    ctx->pc = 0x33f428u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[4]);
    // 0x33f42c: 0x460440c2  mul.s       $f3, $f8, $f4
    ctx->pc = 0x33f42cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
    // 0x33f430: 0x46184202  mul.s       $f8, $f8, $f24
    ctx->pc = 0x33f430u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[24]);
    // 0x33f434: 0x46046102  mul.s       $f4, $f12, $f4
    ctx->pc = 0x33f434u;
    ctx->f[4] = FPU_MUL_S(ctx->f[12], ctx->f[4]);
    // 0x33f438: 0x461ba500  add.s       $f20, $f20, $f27
    ctx->pc = 0x33f438u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[27]);
    // 0x33f43c: 0x461cad40  add.s       $f21, $f21, $f28
    ctx->pc = 0x33f43cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[28]);
    // 0x33f440: 0xc7bb0138  lwc1        $f27, 0x138($sp)
    ctx->pc = 0x33f440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x33f444: 0x46186302  mul.s       $f12, $f12, $f24
    ctx->pc = 0x33f444u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[24]);
    // 0x33f448: 0xc7bc0128  lwc1        $f28, 0x128($sp)
    ctx->pc = 0x33f448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x33f44c: 0x46183182  mul.s       $f6, $f6, $f24
    ctx->pc = 0x33f44cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[24]);
    // 0x33f450: 0x461a5ac0  add.s       $f11, $f11, $f26
    ctx->pc = 0x33f450u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[26]);
    // 0x33f454: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x33f454u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x33f458: 0x4602b580  add.s       $f22, $f22, $f2
    ctx->pc = 0x33f458u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[2]);
    // 0x33f45c: 0x461b9e02  mul.s       $f24, $f19, $f27
    ctx->pc = 0x33f45cu;
    ctx->f[24] = FPU_MUL_S(ctx->f[19], ctx->f[27]);
    // 0x33f460: 0xc7a20128  lwc1        $f2, 0x128($sp)
    ctx->pc = 0x33f460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33f464: 0x461b2e82  mul.s       $f26, $f5, $f27
    ctx->pc = 0x33f464u;
    ctx->f[26] = FPU_MUL_S(ctx->f[5], ctx->f[27]);
    // 0x33f468: 0x461c29c2  mul.s       $f7, $f5, $f28
    ctx->pc = 0x33f468u;
    ctx->f[7] = FPU_MUL_S(ctx->f[5], ctx->f[28]);
    // 0x33f46c: 0xc7bb0130  lwc1        $f27, 0x130($sp)
    ctx->pc = 0x33f46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x33f470: 0x46088400  add.s       $f16, $f16, $f8
    ctx->pc = 0x33f470u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[8]);
    // 0x33f474: 0xc7bc0138  lwc1        $f28, 0x138($sp)
    ctx->pc = 0x33f474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x33f478: 0x460c5280  add.s       $f10, $f10, $f12
    ctx->pc = 0x33f478u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[12]);
    // 0x33f47c: 0xc7a80128  lwc1        $f8, 0x128($sp)
    ctx->pc = 0x33f47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x33f480: 0x461d7380  add.s       $f14, $f14, $f29
    ctx->pc = 0x33f480u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[29]);
    // 0x33f484: 0x461e8c40  add.s       $f17, $f17, $f30
    ctx->pc = 0x33f484u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[30]);
    // 0x33f488: 0x46026b02  mul.s       $f12, $f13, $f2
    ctx->pc = 0x33f488u;
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
    // 0x33f48c: 0x46064a40  add.s       $f9, $f9, $f6
    ctx->pc = 0x33f48cu;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[6]);
    // 0x33f490: 0x46037bc0  add.s       $f15, $f15, $f3
    ctx->pc = 0x33f490u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[3]);
    // 0x33f494: 0x46049480  add.s       $f18, $f18, $f4
    ctx->pc = 0x33f494u;
    ctx->f[18] = FPU_ADD_S(ctx->f[18], ctx->f[4]);
    // 0x33f498: 0x461c6902  mul.s       $f4, $f13, $f28
    ctx->pc = 0x33f498u;
    ctx->f[4] = FPU_MUL_S(ctx->f[13], ctx->f[28]);
    // 0x33f49c: 0x461c0982  mul.s       $f6, $f1, $f28
    ctx->pc = 0x33f49cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[28]);
    // 0x33f4a0: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x33f4a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x33f4a4: 0x460898c2  mul.s       $f3, $f19, $f8
    ctx->pc = 0x33f4a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[19], ctx->f[8]);
    // 0x33f4a8: 0x461b2942  mul.s       $f5, $f5, $f27
    ctx->pc = 0x33f4a8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[27]);
    // 0x33f4ac: 0x46177380  add.s       $f14, $f14, $f23
    ctx->pc = 0x33f4acu;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[23]);
    // 0x33f4b0: 0x46198c40  add.s       $f17, $f17, $f25
    ctx->pc = 0x33f4b0u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[25]);
    // 0x33f4b4: 0x461b6b42  mul.s       $f13, $f13, $f27
    ctx->pc = 0x33f4b4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[27]);
    // 0x33f4b8: 0x461b0842  mul.s       $f1, $f1, $f27
    ctx->pc = 0x33f4b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[27]);
    // 0x33f4bc: 0x461b9cc2  mul.s       $f19, $f19, $f27
    ctx->pc = 0x33f4bcu;
    ctx->f[19] = FPU_MUL_S(ctx->f[19], ctx->f[27]);
    // 0x33f4c0: 0x4618a500  add.s       $f20, $f20, $f24
    ctx->pc = 0x33f4c0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[24]);
    // 0x33f4c4: 0x46075ac0  add.s       $f11, $f11, $f7
    ctx->pc = 0x33f4c4u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[7]);
    // 0x33f4c8: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x33f4c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x33f4cc: 0x461aad40  add.s       $f21, $f21, $f26
    ctx->pc = 0x33f4ccu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[26]);
    // 0x33f4d0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x33f4d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x33f4d4: 0x460cb300  add.s       $f12, $f22, $f12
    ctx->pc = 0x33f4d4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[22], ctx->f[12]);
    // 0x33f4d8: 0xe7ab0008  swc1        $f11, 0x8($sp)
    ctx->pc = 0x33f4d8u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x33f4dc: 0x460d4b40  add.s       $f13, $f9, $f13
    ctx->pc = 0x33f4dcu;
    ctx->f[13] = FPU_ADD_S(ctx->f[9], ctx->f[13]);
    // 0x33f4e0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x33f4e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x33f4e4: 0x46047380  add.s       $f14, $f14, $f4
    ctx->pc = 0x33f4e4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[4]);
    // 0x33f4e8: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x33f4e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x33f4ec: 0x46027bc0  add.s       $f15, $f15, $f2
    ctx->pc = 0x33f4ecu;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[2]);
    // 0x33f4f0: 0x46018400  add.s       $f16, $f16, $f1
    ctx->pc = 0x33f4f0u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[1]);
    // 0x33f4f4: 0x46068c40  add.s       $f17, $f17, $f6
    ctx->pc = 0x33f4f4u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[6]);
    // 0x33f4f8: 0x46039480  add.s       $f18, $f18, $f3
    ctx->pc = 0x33f4f8u;
    ctx->f[18] = FPU_ADD_S(ctx->f[18], ctx->f[3]);
    // 0x33f4fc: 0xc0cfd5e  jal         func_33F578
    ctx->pc = 0x33F4FCu;
    SET_GPR_U32(ctx, 31, 0x33F504u);
    ctx->pc = 0x33F500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F4FCu;
    // 0x33f500: 0x461354c0  add.s       $f19, $f10, $f19 (Delay Slot)
    ctx->f[19] = FPU_ADD_S(ctx->f[10], ctx->f[19]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F578u, 0x33F4FCu, 0x33F504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F504u;
label_33f504:
    // 0x33f504: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x33f504u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f508: 0x71102a  slt         $v0, $v1, $s1
    ctx->pc = 0x33f508u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x33f50c: 0x1440ff60  bnez        $v0, . + 4 + (-0xA0 << 2)
    ctx->pc = 0x33F50Cu;
    {
        const bool branch_taken_0x33f50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F50Cu;
        // 0x33f510: 0x24700001  addiu       $s0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f50c) {
            ctx->pc = 0x33F290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33f290;
        }
    }
    ctx->pc = 0x33F514u;
label_33f514:
    // 0x33f514: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x33f514u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f518: 0x72102a  slt         $v0, $v1, $s2
    ctx->pc = 0x33f518u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x33f51c: 0x1440ff3c  bnez        $v0, . + 4 + (-0xC4 << 2)
    ctx->pc = 0x33F51Cu;
    {
        const bool branch_taken_0x33f51c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33f51c) {
            ctx->pc = 0x33F210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33f210;
        }
    }
    ctx->pc = 0x33F524u;
label_33f524:
    // 0x33f524: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x33f524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x33f528: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x33f528u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x33f52c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x33f52cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x33f530: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x33f530u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x33f534: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x33f534u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x33f538: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x33f538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x33f53c: 0xc7bf0118  lwc1        $f31, 0x118($sp)
    ctx->pc = 0x33f53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x33f540: 0xc7be0110  lwc1        $f30, 0x110($sp)
    ctx->pc = 0x33f540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x33f544: 0xc7bd0108  lwc1        $f29, 0x108($sp)
    ctx->pc = 0x33f544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x33f548: 0xc7bc0100  lwc1        $f28, 0x100($sp)
    ctx->pc = 0x33f548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x33f54c: 0xc7bb00f8  lwc1        $f27, 0xF8($sp)
    ctx->pc = 0x33f54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x33f550: 0xc7ba00f0  lwc1        $f26, 0xF0($sp)
    ctx->pc = 0x33f550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x33f554: 0xc7b900e8  lwc1        $f25, 0xE8($sp)
    ctx->pc = 0x33f554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x33f558: 0xc7b800e0  lwc1        $f24, 0xE0($sp)
    ctx->pc = 0x33f558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x33f55c: 0xc7b700d8  lwc1        $f23, 0xD8($sp)
    ctx->pc = 0x33f55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x33f560: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x33f560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x33f564: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x33f564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x33f568: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x33f568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x33f56c: 0x3e00008  jr          $ra
    ctx->pc = 0x33F56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F56Cu;
        // 0x33f570: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F574u;
    // 0x33f574: 0x0  nop
    ctx->pc = 0x33f574u;
    // NOP
    ctx->pc = 0x33f578u;
}

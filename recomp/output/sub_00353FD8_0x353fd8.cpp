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

// Function: sub_00353FD8
// Address: 0x353fd8 - 0x354528
void sub_00353FD8_0x353fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00353FD8_0x353fd8");
#endif

    switch (ctx->pc) {
        case 0x354378u: goto label_354378;
        case 0x354388u: goto label_354388;
        default: break;
    }

    ctx->pc = 0x353fd8u;

    // 0x353fd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x353fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x353fdc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x353fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x353fe0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x353fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x353fe4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x353fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x353fe8: 0x84482c54  lh          $t0, 0x2C54($v0)
    ctx->pc = 0x353fe8u;
    SET_GPR_S32(ctx, 8, (int16_t)FAST_READ16(0x482C54u));
    // 0x353fec: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x353fecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x353ff0: 0x84672c56  lh          $a3, 0x2C56($v1)
    ctx->pc = 0x353ff0u;
    SET_GPR_S32(ctx, 7, (int16_t)FAST_READ16(0x482C56u));
    // 0x353ff4: 0x3c090048  lui         $t1, 0x48
    ctx->pc = 0x353ff4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)72 << 16));
    // 0x353ff8: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x353ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x353ffc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x353ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x354000: 0xc5292d00  lwc1        $f9, 0x2D00($t1)
    ctx->pc = 0x354000u;
    { uint32_t bits = FAST_READ32(0x482D00u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x354004: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x354004u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x354008: 0x2442d578  addiu       $v0, $v0, -0x2A88
    ctx->pc = 0x354008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956408));
    // 0x35400c: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x35400cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354010: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x354010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x354014: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x354014u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x354018: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x354018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35401c: 0xe24821  addu        $t1, $a3, $v0
    ctx->pc = 0x35401cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x354020: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x354020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x354024: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x354024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x354028: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x354028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35402c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x35402cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x354030: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x354030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x354034: 0x2484d5b8  addiu       $a0, $a0, -0x2A48
    ctx->pc = 0x354034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956472));
    // 0x354038: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x354038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x35403c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x35403cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x354040: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x354040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x354044: 0xe45821  addu        $t3, $a3, $a0
    ctx->pc = 0x354044u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x354048: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x354048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x35404c: 0x2463d598  addiu       $v1, $v1, -0x2A68
    ctx->pc = 0x35404cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956440));
    // 0x354050: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x354050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x354054: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x354054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x354058: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x354058u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x35405c: 0xc44d0000  lwc1        $f13, 0x0($v0)
    ctx->pc = 0x35405cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x354060: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x354060u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x354064: 0xe35021  addu        $t2, $a3, $v1
    ctx->pc = 0x354064u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x354068: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x354068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x35406c: 0x24a5d518  addiu       $a1, $a1, -0x2AE8
    ctx->pc = 0x35406cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956312));
    // 0x354070: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x354070u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x354074: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x354074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x354078: 0x46093001  sub.s       $f0, $f6, $f9
    ctx->pc = 0x354078u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[9]);
    // 0x35407c: 0xe56821  addu        $t5, $a3, $a1
    ctx->pc = 0x35407cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x354080: 0xc52e0000  lwc1        $f14, 0x0($t1)
    ctx->pc = 0x354080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x354084: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x354084u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x354088: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x354088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x35408c: 0xc4870000  lwc1        $f7, 0x0($a0)
    ctx->pc = 0x35408cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x354090: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x354090u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x354094: 0x24c6d4d8  addiu       $a2, $a2, -0x2B28
    ctx->pc = 0x354094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956248));
    // 0x354098: 0x2442d538  addiu       $v0, $v0, -0x2AC8
    ctx->pc = 0x354098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956344));
    // 0x35409c: 0xe66021  addu        $t4, $a3, $a2
    ctx->pc = 0x35409cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x3540a0: 0x1052821  addu        $a1, $t0, $a1
    ctx->pc = 0x3540a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x3540a4: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x3540a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3540a8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x3540a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x3540ac: 0xc54b0000  lwc1        $f11, 0x0($t2)
    ctx->pc = 0x3540acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x3540b0: 0x46805ae0  cvt.s.w     $f11, $f11
    ctx->pc = 0x3540b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[11], sizeof(tmp)); ctx->f[11] = FPU_CVT_S_W(tmp); }
    // 0x3540b4: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x3540b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x3540b8: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x3540b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3540bc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3540bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3540c0: 0x1063021  addu        $a2, $t0, $a2
    ctx->pc = 0x3540c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x3540c4: 0xc5640000  lwc1        $f4, 0x0($t3)
    ctx->pc = 0x3540c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3540c8: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x3540c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x3540cc: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x3540ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x3540d0: 0xc5a10000  lwc1        $f1, 0x0($t5)
    ctx->pc = 0x3540d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3540d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3540d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3540d8: 0xc44a0000  lwc1        $f10, 0x0($v0)
    ctx->pc = 0x3540d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x3540dc: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x3540dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3540e0: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x3540e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x3540e4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3540e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3540e8: 0xc5830000  lwc1        $f3, 0x0($t4)
    ctx->pc = 0x3540e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3540ec: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x3540ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3540f0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3540f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3540f4: 0x460e4b82  mul.s       $f14, $f9, $f14
    ctx->pc = 0x3540f4u;
    ctx->f[14] = FPU_MUL_S(ctx->f[9], ctx->f[14]);
    // 0x3540f8: 0xc4532be4  lwc1        $f19, 0x2BE4($v0)
    ctx->pc = 0x3540f8u;
    { uint32_t bits = FAST_READ32(0x482BE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x3540fc: 0x460d0342  mul.s       $f13, $f0, $f13
    ctx->pc = 0x3540fcu;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x354100: 0x2463d558  addiu       $v1, $v1, -0x2AA8
    ctx->pc = 0x354100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956376));
    // 0x354104: 0x460b4ac2  mul.s       $f11, $f9, $f11
    ctx->pc = 0x354104u;
    ctx->f[11] = FPU_MUL_S(ctx->f[9], ctx->f[11]);
    // 0x354108: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x354108u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35410c: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x35410cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x354110: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x354110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x354114: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x354114u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x354118: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x354118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x35411c: 0x46044902  mul.s       $f4, $f9, $f4
    ctx->pc = 0x35411cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[9], ctx->f[4]);
    // 0x354120: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x354120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x354124: 0x460701c2  mul.s       $f7, $f0, $f7
    ctx->pc = 0x354124u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x354128: 0x2442d4f8  addiu       $v0, $v0, -0x2B08
    ctx->pc = 0x354128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956280));
    // 0x35412c: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x35412cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x354130: 0xc4680000  lwc1        $f8, 0x0($v1)
    ctx->pc = 0x354130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x354134: 0x460348c2  mul.s       $f3, $f9, $f3
    ctx->pc = 0x354134u;
    ctx->f[3] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
    // 0x354138: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x354138u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x35413c: 0x460e6b40  add.s       $f13, $f13, $f14
    ctx->pc = 0x35413cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[14]);
    // 0x354140: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x354140u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x354144: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x354144u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x354148: 0xc4920000  lwc1        $f18, 0x0($a0)
    ctx->pc = 0x354148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x35414c: 0x460b6300  add.s       $f12, $f12, $f11
    ctx->pc = 0x35414cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[11]);
    // 0x354150: 0xc4d10000  lwc1        $f17, 0x0($a2)
    ctx->pc = 0x354150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x354154: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x354154u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x354158: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x354158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
    // 0x35415c: 0x460439c0  add.s       $f7, $f7, $f4
    ctx->pc = 0x35415cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
    // 0x354160: 0x248421e8  addiu       $a0, $a0, 0x21E8
    ctx->pc = 0x354160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8680));
    // 0x354164: 0x46006864  .word       0x46006864                   # cvt.w.s     $f1, $f13 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x354164u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[13]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x354168: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x354168u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x35416c: 0x908b0024  lbu         $t3, 0x24($a0)
    ctx->pc = 0x35416cu;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x354170: 0x46032940  add.s       $f5, $f5, $f3
    ctx->pc = 0x354170u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
    // 0x354174: 0x908c0025  lbu         $t4, 0x25($a0)
    ctx->pc = 0x354174u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 37)));
    // 0x354178: 0x46006064  .word       0x46006064                   # cvt.w.s     $f1, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x354178u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x35417c: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x35417cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x354180: 0x908d0026  lbu         $t5, 0x26($a0)
    ctx->pc = 0x354180u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 38)));
    // 0x354184: 0x46003864  .word       0x46003864                   # cvt.w.s     $f1, $f7 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x354184u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[7]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x354188: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x354188u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x35418c: 0x160702d  daddu       $t6, $t3, $zero
    ctx->pc = 0x35418cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354190: 0x46124c82  mul.s       $f18, $f9, $f18
    ctx->pc = 0x354190u;
    ctx->f[18] = FPU_MUL_S(ctx->f[9], ctx->f[18]);
    // 0x354194: 0xc48f0038  lwc1        $f15, 0x38($a0)
    ctx->pc = 0x354194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x354198: 0x460a0282  mul.s       $f10, $f0, $f10
    ctx->pc = 0x354198u;
    ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x35419c: 0x160502d  daddu       $t2, $t3, $zero
    ctx->pc = 0x35419cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3541a0: 0x46002864  .word       0x46002864                   # cvt.w.s     $f1, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3541a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3541a4: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x3541a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3541a8: 0xc4900030  lwc1        $f16, 0x30($a0)
    ctx->pc = 0x3541a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x3541ac: 0x46114c42  mul.s       $f17, $f9, $f17
    ctx->pc = 0x3541acu;
    ctx->f[17] = FPU_MUL_S(ctx->f[9], ctx->f[17]);
    // 0x3541b0: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x3541b0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x3541b4: 0x46080202  mul.s       $f8, $f0, $f8
    ctx->pc = 0x3541b4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x3541b8: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x3541b8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x3541bc: 0x46133181  sub.s       $f6, $f6, $f19
    ctx->pc = 0x3541bcu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[19]);
    // 0x3541c0: 0x3c190040  lui         $t9, 0x40
    ctx->pc = 0x3541c0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)64 << 16));
    // 0x3541c4: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3541c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3541c8: 0x44090800  mfc1        $t1, $f1
    ctx->pc = 0x3541c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x3541cc: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x3541ccu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
    // 0x3541d0: 0x46125280  add.s       $f10, $f10, $f18
    ctx->pc = 0x3541d0u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[18]);
    // 0x3541d4: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x3541d4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x3541d8: 0x448e0800  mtc1        $t6, $f1
    ctx->pc = 0x3541d8u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3541dc: 0x0  nop
    ctx->pc = 0x3541dcu;
    // NOP
    // 0x3541e0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3541e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3541e4: 0x3c180040  lui         $t8, 0x40
    ctx->pc = 0x3541e4u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)64 << 16));
    // 0x3541e8: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x3541e8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3541ec: 0x0  nop
    ctx->pc = 0x3541ecu;
    // NOP
    // 0x3541f0: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x3541f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x3541f4: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x3541f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x3541f8: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3541f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x3541fc: 0x0  nop
    ctx->pc = 0x3541fcu;
    // NOP
    // 0x354200: 0x468073a0  cvt.s.w     $f14, $f14
    ctx->pc = 0x354200u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[14], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x354204: 0x3c110048  lui         $s1, 0x48
    ctx->pc = 0x354204u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
    // 0x354208: 0x46114200  add.s       $f8, $f8, $f17
    ctx->pc = 0x354208u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[17]);
    // 0x35420c: 0x3c140040  lui         $s4, 0x40
    ctx->pc = 0x35420cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    // 0x354210: 0x44835800  mtc1        $v1, $f11
    ctx->pc = 0x354210u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x354214: 0x0  nop
    ctx->pc = 0x354214u;
    // NOP
    // 0x354218: 0x46805ae0  cvt.s.w     $f11, $f11
    ctx->pc = 0x354218u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[11], sizeof(tmp)); ctx->f[11] = FPU_CVT_S_W(tmp); }
    // 0x35421c: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x35421cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x354220: 0x0  nop
    ctx->pc = 0x354220u;
    // NOP
    // 0x354224: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x354224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x354228: 0x448b3800  mtc1        $t3, $f7
    ctx->pc = 0x354228u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x35422c: 0x0  nop
    ctx->pc = 0x35422cu;
    // NOP
    // 0x354230: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x354230u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x354234: 0x448c2000  mtc1        $t4, $f4
    ctx->pc = 0x354234u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x354238: 0x0  nop
    ctx->pc = 0x354238u;
    // NOP
    // 0x35423c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x35423cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x354240: 0x448d1800  mtc1        $t5, $f3
    ctx->pc = 0x354240u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x354244: 0x0  nop
    ctx->pc = 0x354244u;
    // NOP
    // 0x354248: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x354248u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x35424c: 0xc5110000  lwc1        $f17, 0x0($t0)
    ctx->pc = 0x35424cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x354250: 0x46808c60  cvt.s.w     $f17, $f17
    ctx->pc = 0x354250u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[17], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x354254: 0xc4f20000  lwc1        $f18, 0x0($a3)
    ctx->pc = 0x354254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x354258: 0x468094a0  cvt.s.w     $f18, $f18
    ctx->pc = 0x354258u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[18], sizeof(tmp)); ctx->f[18] = FPU_CVT_S_W(tmp); }
    // 0x35425c: 0x460a3282  mul.s       $f10, $f6, $f10
    ctx->pc = 0x35425cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[6], ctx->f[10]);
    // 0x354260: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x354260u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x354264: 0x0  nop
    ctx->pc = 0x354264u;
    // NOP
    // 0x354268: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x354268u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x35426c: 0x44892800  mtc1        $t1, $f5
    ctx->pc = 0x35426cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x354270: 0x0  nop
    ctx->pc = 0x354270u;
    // NOP
    // 0x354274: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x354274u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x354278: 0x460f9bc2  mul.s       $f15, $f19, $f15
    ctx->pc = 0x354278u;
    ctx->f[15] = FPU_MUL_S(ctx->f[19], ctx->f[15]);
    // 0x35427c: 0x460d3342  mul.s       $f13, $f6, $f13
    ctx->pc = 0x35427cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[6], ctx->f[13]);
    // 0x354280: 0x46019842  mul.s       $f1, $f19, $f1
    ctx->pc = 0x354280u;
    ctx->f[1] = FPU_MUL_S(ctx->f[19], ctx->f[1]);
    // 0x354284: 0x46083202  mul.s       $f8, $f6, $f8
    ctx->pc = 0x354284u;
    ctx->f[8] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x354288: 0x460e3382  mul.s       $f14, $f6, $f14
    ctx->pc = 0x354288u;
    ctx->f[14] = FPU_MUL_S(ctx->f[6], ctx->f[14]);
    // 0x35428c: 0x460b32c2  mul.s       $f11, $f6, $f11
    ctx->pc = 0x35428cu;
    ctx->f[11] = FPU_MUL_S(ctx->f[6], ctx->f[11]);
    // 0x354290: 0x460c3302  mul.s       $f12, $f6, $f12
    ctx->pc = 0x354290u;
    ctx->f[12] = FPU_MUL_S(ctx->f[6], ctx->f[12]);
    // 0x354294: 0x46109c02  mul.s       $f16, $f19, $f16
    ctx->pc = 0x354294u;
    ctx->f[16] = FPU_MUL_S(ctx->f[19], ctx->f[16]);
    // 0x354298: 0x460799c2  mul.s       $f7, $f19, $f7
    ctx->pc = 0x354298u;
    ctx->f[7] = FPU_MUL_S(ctx->f[19], ctx->f[7]);
    // 0x35429c: 0x46049902  mul.s       $f4, $f19, $f4
    ctx->pc = 0x35429cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[19], ctx->f[4]);
    // 0x3542a0: 0x460398c2  mul.s       $f3, $f19, $f3
    ctx->pc = 0x3542a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[19], ctx->f[3]);
    // 0x3542a4: 0x46053142  mul.s       $f5, $f6, $f5
    ctx->pc = 0x3542a4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
    // 0x3542a8: 0x46110002  mul.s       $f0, $f0, $f17
    ctx->pc = 0x3542a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[17]);
    // 0x3542ac: 0x46124a42  mul.s       $f9, $f9, $f18
    ctx->pc = 0x3542acu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[18]);
    // 0x3542b0: 0x46029882  mul.s       $f2, $f19, $f2
    ctx->pc = 0x3542b0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[19], ctx->f[2]);
    // 0x3542b4: 0x460a7bc0  add.s       $f15, $f15, $f10
    ctx->pc = 0x3542b4u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[10]);
    // 0x3542b8: 0x460d0840  add.s       $f1, $f1, $f13
    ctx->pc = 0x3542b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[13]);
    // 0x3542bc: 0x46088400  add.s       $f16, $f16, $f8
    ctx->pc = 0x3542bcu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[8]);
    // 0x3542c0: 0x460e39c0  add.s       $f7, $f7, $f14
    ctx->pc = 0x3542c0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[14]);
    // 0x3542c4: 0xe64fc8dc  swc1        $f15, -0x3724($s2)
    ctx->pc = 0x3542c4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4294953180), bits); }
    // 0x3542c8: 0x460b2100  add.s       $f4, $f4, $f11
    ctx->pc = 0x3542c8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[11]);
    // 0x3542cc: 0x460c18c0  add.s       $f3, $f3, $f12
    ctx->pc = 0x3542ccu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[12]);
    // 0x3542d0: 0xe670c8e0  swc1        $f16, -0x3720($s3)
    ctx->pc = 0x3542d0u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294953184), bits); }
    // 0x3542d4: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x3542d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x3542d8: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x3542d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x3542dc: 0x46000964  .word       0x46000964                   # cvt.w.s     $f5, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3542dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[5], &tmp, sizeof(tmp)); }
    // 0x3542e0: 0xe5e5c8f0  swc1        $f5, -0x3710($t7)
    ctx->pc = 0x3542e0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3FC8F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FC8F0u, _value); } while (0); }
    // 0x3542e4: 0x46003864  .word       0x46003864                   # cvt.w.s     $f1, $f7 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3542e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[7]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3542e8: 0xe721c8e4  swc1        $f1, -0x371C($t9)
    ctx->pc = 0x3542e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 4294953188), bits); }
    // 0x3542ec: 0x46002064  .word       0x46002064                   # cvt.w.s     $f1, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3542ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3542f0: 0xe6a1c8e8  swc1        $f1, -0x3718($s5)
    ctx->pc = 0x3542f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3FC8E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FC8E8u, _value); } while (0); }
    // 0x3542f4: 0x46001864  .word       0x46001864                   # cvt.w.s     $f1, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3542f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3542f8: 0xe701c8ec  swc1        $f1, -0x3714($t8)
    ctx->pc = 0x3542f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3FC8ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FC8ECu, _value); } while (0); }
    // 0x3542fc: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3542fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x354300: 0xe601c8f4  swc1        $f1, -0x370C($s0)
    ctx->pc = 0x354300u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3FC8F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FC8F4u, _value); } while (0); }
    // 0x354304: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x354304u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x354308: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x354308u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x35430c: 0x92252be0  lbu         $a1, 0x2BE0($s1)
    ctx->pc = 0x35430cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11232)));
    // 0x354310: 0x90820024  lbu         $v0, 0x24($a0)
    ctx->pc = 0x354310u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x354314: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x354314u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x354318: 0x0  nop
    ctx->pc = 0x354318u;
    // NOP
    // 0x35431c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x35431cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x354320: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x354320u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354324: 0x0  nop
    ctx->pc = 0x354324u;
    // NOP
    // 0x354328: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x354328u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x35432c: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x35432cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x354330: 0x46009802  mul.s       $f0, $f19, $f0
    ctx->pc = 0x354330u;
    ctx->f[0] = FPU_MUL_S(ctx->f[19], ctx->f[0]);
    // 0x354334: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x354334u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x354338: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x354338u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x35433c: 0xe681c8f8  swc1        $f1, -0x3708($s4)
    ctx->pc = 0x35433cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4294953208), bits); }
    // 0x354340: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x354340u;
    {
        const bool branch_taken_0x354340 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x354340) {
            ctx->pc = 0x354370u;
            goto label_354370;
        }
    }
    ctx->pc = 0x354348u;
    // 0x354348: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x354348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x35434c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x35434cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354350: 0x0  nop
    ctx->pc = 0x354350u;
    // NOP
    // 0x354354: 0x46009834  c.lt.s      $f19, $f0
    ctx->pc = 0x354354u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[19], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x354358: 0x0  nop
    ctx->pc = 0x354358u;
    // NOP
    // 0x35435c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x35435Cu;
    {
        const bool branch_taken_0x35435c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x354360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35435Cu;
        // 0x354360: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35435c) {
            ctx->pc = 0x354370u;
            goto label_354370;
        }
    }
    ctx->pc = 0x354364u;
    // 0x354364: 0xaf22c8e4  sw          $v0, -0x371C($t9)
    ctx->pc = 0x354364u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 4294953188), GPR_U32(ctx, 2));
    // 0x354368: 0xaf02c8ec  sw          $v0, -0x3714($t8)
    ctx->pc = 0x354368u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 4294953196), GPR_U32(ctx, 2));
    // 0x35436c: 0xaea2c8e8  sw          $v0, -0x3718($s5)
    ctx->pc = 0x35436cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294953192), GPR_U32(ctx, 2));
label_354370:
    // 0x354370: 0xc0d514a  jal         func_354528
    ctx->pc = 0x354370u;
    SET_GPR_U32(ctx, 31, 0x354378u);
    ctx->pc = 0x354374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354370u;
    // 0x354374: 0x86e42c54  lh          $a0, 0x2C54($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 11348)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354528u, 0x354370u, 0x354378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354378u;
label_354378:
    // 0x354378: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x354378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x35437c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35437cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354380: 0xc0d514a  jal         func_354528
    ctx->pc = 0x354380u;
    SET_GPR_U32(ctx, 31, 0x354388u);
    ctx->pc = 0x354384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354380u;
    // 0x354384: 0x84642c56  lh          $a0, 0x2C56($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 11350)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354528u, 0x354380u, 0x354388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354388u;
label_354388:
    // 0x354388: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x354388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x35438c: 0xc7c92d00  lwc1        $f9, 0x2D00($fp)
    ctx->pc = 0x35438cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 11520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x354390: 0x2484cb28  addiu       $a0, $a0, -0x34D8
    ctx->pc = 0x354390u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953768));
    // 0x354394: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x354394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x354398: 0x248300e8  addiu       $v1, $a0, 0xE8
    ctx->pc = 0x354398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 232));
    // 0x35439c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x35439cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3543a0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x3543a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3543a4: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x3543a4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3543a8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3543a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3543ac: 0x46092a81  sub.s       $f10, $f5, $f9
    ctx->pc = 0x3543acu;
    ctx->f[10] = FPU_SUB_S(ctx->f[5], ctx->f[9]);
    // 0x3543b0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x3543b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3543b4: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x3543b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3543b8: 0x248600fc  addiu       $a2, $a0, 0xFC
    ctx->pc = 0x3543b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 252));
    // 0x3543bc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x3543bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3543c0: 0x463821  addu        $a3, $v0, $a2
    ctx->pc = 0x3543c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3543c4: 0x460a18c2  mul.s       $f3, $f3, $f10
    ctx->pc = 0x3543c4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[10]);
    // 0x3543c8: 0xc6c22be4  lwc1        $f2, 0x2BE4($s6)
    ctx->pc = 0x3543c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 11236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3543cc: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x3543ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x3543d0: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x3543d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x3543d4: 0x24850110  addiu       $a1, $a0, 0x110
    ctx->pc = 0x3543d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 272));
    // 0x3543d8: 0x24830124  addiu       $v1, $a0, 0x124
    ctx->pc = 0x3543d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 292));
    // 0x3543dc: 0x454021  addu        $t0, $v0, $a1
    ctx->pc = 0x3543dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3543e0: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x3543e0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x3543e4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x3543e4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x3543e8: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x3543e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x3543ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3543ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3543f0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x3543f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3543f4: 0xc48400e8  lwc1        $f4, 0xE8($a0)
    ctx->pc = 0x3543f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3543f8: 0xc48600fc  lwc1        $f6, 0xFC($a0)
    ctx->pc = 0x3543f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3543fc: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x3543fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x354400: 0xe4830138  swc1        $f3, 0x138($a0)
    ctx->pc = 0x354400u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 312), bits); }
    // 0x354404: 0xc4870110  lwc1        $f7, 0x110($a0)
    ctx->pc = 0x354404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x354408: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x354408u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x35440c: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x35440cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x354410: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x354410u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x354414: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x354414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x354418: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x354418u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x35441c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35441cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x354420: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x354420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354424: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x354424u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x354428: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x354428u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35442c: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x35442cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x354430: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x354430u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x354434: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x354434u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x354438: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x354438u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35443c: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x35443cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x354440: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x354440u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x354444: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x354444u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x354448: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x354448u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x35444c: 0xc4880124  lwc1        $f8, 0x124($a0)
    ctx->pc = 0x35444cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x354450: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x354450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x354454: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x354454u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x354458: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x354458u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x35445c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x35445cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x354460: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x354460u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x354464: 0x46024202  mul.s       $f8, $f8, $f2
    ctx->pc = 0x354464u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x354468: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x354468u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x35446c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x35446cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x354470: 0x460239c2  mul.s       $f7, $f7, $f2
    ctx->pc = 0x354470u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x354474: 0xac83013c  sw          $v1, 0x13C($a0)
    ctx->pc = 0x354474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 316), GPR_U32(ctx, 3));
    // 0x354478: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x354478u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x35447c: 0x0  nop
    ctx->pc = 0x35447cu;
    // NOP
    // 0x354480: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x354480u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x354484: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x354484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354488: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x354488u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x35448c: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x35448cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x354490: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x354490u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x354494: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x354494u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x354498: 0x460a0002  mul.s       $f0, $f0, $f10
    ctx->pc = 0x354498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
    // 0x35449c: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x35449cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x3544a0: 0x46062100  add.s       $f4, $f4, $f6
    ctx->pc = 0x3544a0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x3544a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3544a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3544a8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3544a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3544ac: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x3544acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3544b0: 0xac830140  sw          $v1, 0x140($a0)
    ctx->pc = 0x3544b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 320), GPR_U32(ctx, 3));
    // 0x3544b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3544b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3544b8: 0x0  nop
    ctx->pc = 0x3544b8u;
    // NOP
    // 0x3544bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3544bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3544c0: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x3544c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3544c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3544c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3544c8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3544c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3544cc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3544ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3544d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3544d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3544d4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x3544d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x3544d8: 0xe4830138  swc1        $f3, 0x138($a0)
    ctx->pc = 0x3544d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 312), bits); }
    // 0x3544dc: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x3544dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x3544e0: 0x46091082  mul.s       $f2, $f2, $f9
    ctx->pc = 0x3544e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
    // 0x3544e4: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x3544e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x3544e8: 0x460020e4  .word       0x460020E4                   # cvt.w.s     $f3, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3544e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x3544ec: 0xe483013c  swc1        $f3, 0x13C($a0)
    ctx->pc = 0x3544ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 316), bits); }
    // 0x3544f0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3544f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3544f4: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3544f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3544f8: 0xe4820140  swc1        $f2, 0x140($a0)
    ctx->pc = 0x3544f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 320), bits); }
    // 0x3544fc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3544fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x354500: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x354500u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x354504: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x354504u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x354508: 0x0  nop
    ctx->pc = 0x354508u;
    // NOP
    // 0x35450c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x35450cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x354510: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x354510u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x354514: 0x46080000  add.s       $f0, $f0, $f8
    ctx->pc = 0x354514u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[8]);
    // 0x354518: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x354518u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x35451c: 0xe4810144  swc1        $f1, 0x144($a0)
    ctx->pc = 0x35451cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 324), bits); }
    // 0x354520: 0x3e00008  jr          $ra
    ctx->pc = 0x354520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354520u;
        // 0x354524: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x354528u;
}

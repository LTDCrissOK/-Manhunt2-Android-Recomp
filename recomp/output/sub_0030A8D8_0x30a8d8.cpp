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

// Function: sub_0030A8D8
// Address: 0x30a8d8 - 0x30aee0
void sub_0030A8D8_0x30a8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A8D8_0x30a8d8");
#endif

    switch (ctx->pc) {
        case 0x30ac3cu: goto label_30ac3c;
        case 0x30ac44u: goto label_30ac44;
        case 0x30ac54u: goto label_30ac54;
        case 0x30ac5cu: goto label_30ac5c;
        case 0x30ac68u: goto label_30ac68;
        case 0x30ac74u: goto label_30ac74;
        case 0x30ac80u: goto label_30ac80;
        case 0x30ac8cu: goto label_30ac8c;
        case 0x30acb8u: goto label_30acb8;
        case 0x30acdcu: goto label_30acdc;
        case 0x30ad08u: goto label_30ad08;
        case 0x30ad44u: goto label_30ad44;
        case 0x30ad54u: goto label_30ad54;
        case 0x30ad64u: goto label_30ad64;
        case 0x30adc0u: goto label_30adc0;
        case 0x30ae18u: goto label_30ae18;
        case 0x30ae24u: goto label_30ae24;
        case 0x30ae98u: goto label_30ae98;
        case 0x30aea0u: goto label_30aea0;
        case 0x30aea8u: goto label_30aea8;
        default: break;
    }

    ctx->pc = 0x30a8d8u;

    // 0x30a8d8: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x30a8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x30a8dc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x30a8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x30a8e0: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x30a8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x30a8e4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x30a8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x30a8e8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x30a8e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a8ec: 0x8c43cb78  lw          $v1, -0x3488($v0)
    ctx->pc = 0x30a8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FCB78u));
    // 0x30a8f0: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x30a8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x30a8f4: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x30a8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x30a8f8: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x30a8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x30a8fc: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x30a8fcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    // 0x30a900: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x30a900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x30a904: 0x26b100e0  addiu       $s1, $s5, 0xE0
    ctx->pc = 0x30a904u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 224));
    // 0x30a908: 0xe7b40140  swc1        $f20, 0x140($sp)
    ctx->pc = 0x30a908u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x30a90c: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x30a90cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a910: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x30a910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x30a914: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x30a914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x30a918: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x30a918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x30a91c: 0xffbf0138  sd          $ra, 0x138($sp)
    ctx->pc = 0x30a91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 31));
    // 0x30a920: 0x8ca4cb7c  lw          $a0, -0x3484($a1)
    ctx->pc = 0x30a920u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FCB7Cu));
    // 0x30a924: 0x32fc2  srl         $a1, $v1, 31
    ctx->pc = 0x30a924u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x30a928: 0xc6a200e0  lwc1        $f2, 0xE0($s5)
    ctx->pc = 0x30a928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30a92c: 0xc4c1cbd8  lwc1        $f1, -0x3428($a2)
    ctx->pc = 0x30a92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294953944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30a930: 0x417c2  srl         $v0, $a0, 31
    ctx->pc = 0x30a930u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x30a934: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x30a934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x30a938: 0xc6250004  lwc1        $f5, 0x4($s1)
    ctx->pc = 0x30a938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x30a93c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x30a93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x30a940: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x30a940u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x30a944: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x30a944u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a948: 0x0  nop
    ctx->pc = 0x30a948u;
    // NOP
    // 0x30a94c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x30a94cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x30a950: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x30a950u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x30a954: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x30a954u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x30a958: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30a958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30a95c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x30a95cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x30a960: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x30a960u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x30a964: 0x0  nop
    ctx->pc = 0x30a964u;
    // NOP
    // 0x30a968: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x30a968u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x30a96c: 0xc6aa00f4  lwc1        $f10, 0xF4($s5)
    ctx->pc = 0x30a96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x30a970: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x30a970u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x30a974: 0xc6a900f0  lwc1        $f9, 0xF0($s5)
    ctx->pc = 0x30a974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x30a978: 0x0  nop
    ctx->pc = 0x30a978u;
    // NOP
    // 0x30a97c: 0x0  nop
    ctx->pc = 0x30a97cu;
    // NOP
    // 0x30a980: 0x46003183  div.s       $f6, $f6, $f0
    ctx->pc = 0x30a980u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[6], ctx->f[0]); }
    // 0x30a984: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x30a984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x30a988: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x30a988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x30a98c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x30a98cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x30a990: 0x0  nop
    ctx->pc = 0x30a990u;
    // NOP
    // 0x30a994: 0x0  nop
    ctx->pc = 0x30a994u;
    // NOP
    // 0x30a998: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x30a998u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x30a99c: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x30a99cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x30a9a0: 0x461410c0  add.s       $f3, $f2, $f20
    ctx->pc = 0x30a9a0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
    // 0x30a9a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x30a9a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a9a8: 0x46142900  add.s       $f4, $f5, $f20
    ctx->pc = 0x30a9a8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[20]);
    // 0x30a9ac: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x30a9acu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x30a9b0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x30a9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x30a9b4: 0x0  nop
    ctx->pc = 0x30a9b4u;
    // NOP
    // 0x30a9b8: 0x0  nop
    ctx->pc = 0x30a9b8u;
    // NOP
    // 0x30a9bc: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x30a9bcu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x30a9c0: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x30a9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x30a9c4: 0x0  nop
    ctx->pc = 0x30a9c4u;
    // NOP
    // 0x30a9c8: 0x0  nop
    ctx->pc = 0x30a9c8u;
    // NOP
    // 0x30a9cc: 0x46042943  div.s       $f5, $f5, $f4
    ctx->pc = 0x30a9ccu;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[5], ctx->f[4]); }
    // 0x30a9d0: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x30a9d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x30a9d4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x30a9d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x30a9d8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x30a9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x30a9dc: 0x461430c0  add.s       $f3, $f6, $f20
    ctx->pc = 0x30a9dcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[6], ctx->f[20]);
    // 0x30a9e0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x30a9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x30a9e4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x30a9e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x30a9e8: 0x46005287  neg.s       $f10, $f10
    ctx->pc = 0x30a9e8u;
    ctx->f[10] = FPU_NEG_S(ctx->f[10]);
    // 0x30a9ec: 0x461409c0  add.s       $f7, $f1, $f20
    ctx->pc = 0x30a9ecu;
    ctx->f[7] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x30a9f0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x30a9f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x30a9f4: 0x0  nop
    ctx->pc = 0x30a9f4u;
    // NOP
    // 0x30a9f8: 0x0  nop
    ctx->pc = 0x30a9f8u;
    // NOP
    // 0x30a9fc: 0x46033183  div.s       $f6, $f6, $f3
    ctx->pc = 0x30a9fcu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[6], ctx->f[3]); }
    // 0x30aa00: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x30aa00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x30aa04: 0x4602a0c1  sub.s       $f3, $f20, $f2
    ctx->pc = 0x30aa04u;
    ctx->f[3] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x30aa08: 0x0  nop
    ctx->pc = 0x30aa08u;
    // NOP
    // 0x30aa0c: 0x0  nop
    ctx->pc = 0x30aa0cu;
    // NOP
    // 0x30aa10: 0x46070843  div.s       $f1, $f1, $f7
    ctx->pc = 0x30aa10u;
    { if (ctx->f[7] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[7]); }
    // 0x30aa14: 0x4605a101  sub.s       $f4, $f20, $f5
    ctx->pc = 0x30aa14u;
    ctx->f[4] = FPU_SUB_S(ctx->f[20], ctx->f[5]);
    // 0x30aa18: 0x0  nop
    ctx->pc = 0x30aa18u;
    // NOP
    // 0x30aa1c: 0x0  nop
    ctx->pc = 0x30aa1cu;
    // NOP
    // 0x30aa20: 0x460300c4  c1          0x300C4
    ctx->pc = 0x30aa20u;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x30aa24: 0x46050144  c1          0x50144
    ctx->pc = 0x30aa24u;
    ctx->f[5] = FPU_SQRT_S(ctx->f[0]);
    // 0x30aa28: 0x46040104  c1          0x40104
    ctx->pc = 0x30aa28u;
    ctx->f[4] = FPU_SQRT_S(ctx->f[0]);
    // 0x30aa2c: 0x4606a1c1  sub.s       $f7, $f20, $f6
    ctx->pc = 0x30aa2cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[20], ctx->f[6]);
    // 0x30aa30: 0x4601a201  sub.s       $f8, $f20, $f1
    ctx->pc = 0x30aa30u;
    ctx->f[8] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x30aa34: 0x0  nop
    ctx->pc = 0x30aa34u;
    // NOP
    // 0x30aa38: 0x0  nop
    ctx->pc = 0x30aa38u;
    // NOP
    // 0x30aa3c: 0x46020084  c1          0x20084
    ctx->pc = 0x30aa3cu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x30aa40: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x30aa40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x30aa44: 0x0  nop
    ctx->pc = 0x30aa44u;
    // NOP
    // 0x30aa48: 0x0  nop
    ctx->pc = 0x30aa48u;
    // NOP
    // 0x30aa4c: 0x460701c4  c1          0x701C4
    ctx->pc = 0x30aa4cu;
    ctx->f[7] = FPU_SQRT_S(ctx->f[0]);
    // 0x30aa50: 0x46080204  c1          0x80204
    ctx->pc = 0x30aa50u;
    ctx->f[8] = FPU_SQRT_S(ctx->f[0]);
    // 0x30aa54: 0xe7a5006c  swc1        $f5, 0x6C($sp)
    ctx->pc = 0x30aa54u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x30aa58: 0xe7a4005c  swc1        $f4, 0x5C($sp)
    ctx->pc = 0x30aa58u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x30aa5c: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x30aa5cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x30aa60: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x30aa60u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x30aa64: 0xe7a50068  swc1        $f5, 0x68($sp)
    ctx->pc = 0x30aa64u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x30aa68: 0x0  nop
    ctx->pc = 0x30aa68u;
    // NOP
    // 0x30aa6c: 0x0  nop
    ctx->pc = 0x30aa6cu;
    // NOP
    // 0x30aa70: 0x46060184  c1          0x60184
    ctx->pc = 0x30aa70u;
    ctx->f[6] = FPU_SQRT_S(ctx->f[0]);
    // 0x30aa74: 0x46010044  c1          0x10044
    ctx->pc = 0x30aa74u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x30aa78: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x30aa78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x30aa7c: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x30aa7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x30aa80: 0x46004a47  neg.s       $f9, $f9
    ctx->pc = 0x30aa80u;
    ctx->f[9] = FPU_NEG_S(ctx->f[9]);
    // 0x30aa84: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x30aa84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x30aa88: 0x46003887  neg.s       $f2, $f7
    ctx->pc = 0x30aa88u;
    ctx->f[2] = FPU_NEG_S(ctx->f[7]);
    // 0x30aa8c: 0xe7a40058  swc1        $f4, 0x58($sp)
    ctx->pc = 0x30aa8cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x30aa90: 0x460040c7  neg.s       $f3, $f8
    ctx->pc = 0x30aa90u;
    ctx->f[3] = FPU_NEG_S(ctx->f[8]);
    // 0x30aa94: 0x6ba20047  ldl         $v0, 0x47($sp)
    ctx->pc = 0x30aa94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x30aa98: 0x6fa20040  ldr         $v0, 0x40($sp)
    ctx->pc = 0x30aa98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x30aa9c: 0x6ba3004f  ldl         $v1, 0x4F($sp)
    ctx->pc = 0x30aa9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x30aaa0: 0x6fa30048  ldr         $v1, 0x48($sp)
    ctx->pc = 0x30aaa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x30aaa4: 0x6ba50057  ldl         $a1, 0x57($sp)
    ctx->pc = 0x30aaa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x30aaa8: 0x6fa50050  ldr         $a1, 0x50($sp)
    ctx->pc = 0x30aaa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x30aaac: 0x6ba6005f  ldl         $a2, 0x5F($sp)
    ctx->pc = 0x30aaacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x30aab0: 0x6fa60058  ldr         $a2, 0x58($sp)
    ctx->pc = 0x30aab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x30aab4: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x30aab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30aab8: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x30aab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30aabc: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x30aabcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30aac0: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x30aac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30aac4: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x30aac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30aac8: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x30aac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30aacc: 0xb3a6001f  sdl         $a2, 0x1F($sp)
    ctx->pc = 0x30aaccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30aad0: 0xb7a60018  sdr         $a2, 0x18($sp)
    ctx->pc = 0x30aad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30aad4: 0x6ba20067  ldl         $v0, 0x67($sp)
    ctx->pc = 0x30aad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x30aad8: 0x6fa20060  ldr         $v0, 0x60($sp)
    ctx->pc = 0x30aad8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x30aadc: 0x6ba3006f  ldl         $v1, 0x6F($sp)
    ctx->pc = 0x30aadcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x30aae0: 0x6fa30068  ldr         $v1, 0x68($sp)
    ctx->pc = 0x30aae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x30aae4: 0x6ba50077  ldl         $a1, 0x77($sp)
    ctx->pc = 0x30aae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x30aae8: 0x6fa50070  ldr         $a1, 0x70($sp)
    ctx->pc = 0x30aae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x30aaec: 0x6ba6007f  ldl         $a2, 0x7F($sp)
    ctx->pc = 0x30aaecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x30aaf0: 0x6fa60078  ldr         $a2, 0x78($sp)
    ctx->pc = 0x30aaf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x30aaf4: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x30aaf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30aaf8: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x30aaf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30aafc: 0xb3a3002f  sdl         $v1, 0x2F($sp)
    ctx->pc = 0x30aafcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30ab00: 0xb7a30028  sdr         $v1, 0x28($sp)
    ctx->pc = 0x30ab00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30ab04: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x30ab04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30ab08: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x30ab08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30ab0c: 0xb3a6003f  sdl         $a2, 0x3F($sp)
    ctx->pc = 0x30ab0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30ab10: 0xb7a60038  sdr         $a2, 0x38($sp)
    ctx->pc = 0x30ab10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30ab14: 0xe7ab0068  swc1        $f11, 0x68($sp)
    ctx->pc = 0x30ab14u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x30ab18: 0xe7aa006c  swc1        $f10, 0x6C($sp)
    ctx->pc = 0x30ab18u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x30ab1c: 0xe7a9007c  swc1        $f9, 0x7C($sp)
    ctx->pc = 0x30ab1cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x30ab20: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x30ab20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x30ab24: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x30ab24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x30ab28: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x30ab28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x30ab2c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x30ab2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x30ab30: 0xe7b40078  swc1        $f20, 0x78($sp)
    ctx->pc = 0x30ab30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x30ab34: 0x6ba20067  ldl         $v0, 0x67($sp)
    ctx->pc = 0x30ab34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x30ab38: 0x6fa20060  ldr         $v0, 0x60($sp)
    ctx->pc = 0x30ab38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x30ab3c: 0x6ba3006f  ldl         $v1, 0x6F($sp)
    ctx->pc = 0x30ab3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x30ab40: 0x6fa30068  ldr         $v1, 0x68($sp)
    ctx->pc = 0x30ab40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x30ab44: 0x6ba50077  ldl         $a1, 0x77($sp)
    ctx->pc = 0x30ab44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x30ab48: 0x6fa50070  ldr         $a1, 0x70($sp)
    ctx->pc = 0x30ab48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x30ab4c: 0x6ba6007f  ldl         $a2, 0x7F($sp)
    ctx->pc = 0x30ab4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x30ab50: 0x6fa60078  ldr         $a2, 0x78($sp)
    ctx->pc = 0x30ab50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x30ab54: 0xb3a20047  sdl         $v0, 0x47($sp)
    ctx->pc = 0x30ab54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30ab58: 0xb7a20040  sdr         $v0, 0x40($sp)
    ctx->pc = 0x30ab58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30ab5c: 0xb3a3004f  sdl         $v1, 0x4F($sp)
    ctx->pc = 0x30ab5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30ab60: 0xb7a30048  sdr         $v1, 0x48($sp)
    ctx->pc = 0x30ab60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30ab64: 0xb3a50057  sdl         $a1, 0x57($sp)
    ctx->pc = 0x30ab64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30ab68: 0xb7a50050  sdr         $a1, 0x50($sp)
    ctx->pc = 0x30ab68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30ab6c: 0xb3a6005f  sdl         $a2, 0x5F($sp)
    ctx->pc = 0x30ab6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30ab70: 0xb7a60058  sdr         $a2, 0x58($sp)
    ctx->pc = 0x30ab70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30ab74: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x30ab74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x30ab78: 0xe7a700c4  swc1        $f7, 0xC4($sp)
    ctx->pc = 0x30ab78u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x30ab7c: 0xe7a300d8  swc1        $f3, 0xD8($sp)
    ctx->pc = 0x30ab7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x30ab80: 0xe7a800dc  swc1        $f8, 0xDC($sp)
    ctx->pc = 0x30ab80u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x30ab84: 0xe7a600e4  swc1        $f6, 0xE4($sp)
    ctx->pc = 0x30ab84u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x30ab88: 0xe7a100ec  swc1        $f1, 0xEC($sp)
    ctx->pc = 0x30ab88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x30ab8c: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x30ab8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x30ab90: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x30ab90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x30ab94: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x30ab94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x30ab98: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x30ab98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x30ab9c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x30ab9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x30aba0: 0xe7a600e0  swc1        $f6, 0xE0($sp)
    ctx->pc = 0x30aba0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x30aba4: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x30aba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x30aba8: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x30aba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x30abac: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x30abacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x30abb0: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x30abb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x30abb4: 0x6ba200c7  ldl         $v0, 0xC7($sp)
    ctx->pc = 0x30abb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x30abb8: 0x6fa200c0  ldr         $v0, 0xC0($sp)
    ctx->pc = 0x30abb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x30abbc: 0x6ba300cf  ldl         $v1, 0xCF($sp)
    ctx->pc = 0x30abbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x30abc0: 0x6fa300c8  ldr         $v1, 0xC8($sp)
    ctx->pc = 0x30abc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 200); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x30abc4: 0x6ba500d7  ldl         $a1, 0xD7($sp)
    ctx->pc = 0x30abc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x30abc8: 0x6fa500d0  ldr         $a1, 0xD0($sp)
    ctx->pc = 0x30abc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x30abcc: 0x6ba600df  ldl         $a2, 0xDF($sp)
    ctx->pc = 0x30abccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 223); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x30abd0: 0x6fa600d8  ldr         $a2, 0xD8($sp)
    ctx->pc = 0x30abd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 216); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x30abd4: 0xb3a20087  sdl         $v0, 0x87($sp)
    ctx->pc = 0x30abd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30abd8: 0xb7a20080  sdr         $v0, 0x80($sp)
    ctx->pc = 0x30abd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30abdc: 0xb3a3008f  sdl         $v1, 0x8F($sp)
    ctx->pc = 0x30abdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 143); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30abe0: 0xb7a30088  sdr         $v1, 0x88($sp)
    ctx->pc = 0x30abe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 136); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30abe4: 0xb3a50097  sdl         $a1, 0x97($sp)
    ctx->pc = 0x30abe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30abe8: 0xb7a50090  sdr         $a1, 0x90($sp)
    ctx->pc = 0x30abe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30abec: 0xb3a6009f  sdl         $a2, 0x9F($sp)
    ctx->pc = 0x30abecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 159); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30abf0: 0xb7a60098  sdr         $a2, 0x98($sp)
    ctx->pc = 0x30abf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 152); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30abf4: 0x6ba200e7  ldl         $v0, 0xE7($sp)
    ctx->pc = 0x30abf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x30abf8: 0x6fa200e0  ldr         $v0, 0xE0($sp)
    ctx->pc = 0x30abf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x30abfc: 0x6ba300ef  ldl         $v1, 0xEF($sp)
    ctx->pc = 0x30abfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 239); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x30ac00: 0x6fa300e8  ldr         $v1, 0xE8($sp)
    ctx->pc = 0x30ac00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 232); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x30ac04: 0x6ba500f7  ldl         $a1, 0xF7($sp)
    ctx->pc = 0x30ac04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x30ac08: 0x6fa500f0  ldr         $a1, 0xF0($sp)
    ctx->pc = 0x30ac08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x30ac0c: 0x6ba600ff  ldl         $a2, 0xFF($sp)
    ctx->pc = 0x30ac0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 255); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x30ac10: 0x6fa600f8  ldr         $a2, 0xF8($sp)
    ctx->pc = 0x30ac10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 248); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x30ac14: 0xb3a200a7  sdl         $v0, 0xA7($sp)
    ctx->pc = 0x30ac14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30ac18: 0xb7a200a0  sdr         $v0, 0xA0($sp)
    ctx->pc = 0x30ac18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30ac1c: 0xb3a300af  sdl         $v1, 0xAF($sp)
    ctx->pc = 0x30ac1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30ac20: 0xb7a300a8  sdr         $v1, 0xA8($sp)
    ctx->pc = 0x30ac20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30ac24: 0xb3a500b7  sdl         $a1, 0xB7($sp)
    ctx->pc = 0x30ac24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30ac28: 0xb7a500b0  sdr         $a1, 0xB0($sp)
    ctx->pc = 0x30ac28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30ac2c: 0xb3a600bf  sdl         $a2, 0xBF($sp)
    ctx->pc = 0x30ac2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 191); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30ac30: 0xb7a600b8  sdr         $a2, 0xB8($sp)
    ctx->pc = 0x30ac30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 184); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x30ac34: 0xc0db37c  jal         func_36CDF0
    ctx->pc = 0x30AC34u;
    SET_GPR_U32(ctx, 31, 0x30AC3Cu);
    ctx->pc = 0x30AC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AC34u;
    // 0x30ac38: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36CDF0u, 0x30AC34u, 0x30AC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AC3Cu;
label_30ac3c:
    // 0x30ac3c: 0xc0dc196  jal         func_370658
    ctx->pc = 0x30AC3Cu;
    SET_GPR_U32(ctx, 31, 0x30AC44u);
    ctx->pc = 0x30AC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AC3Cu;
    // 0x30ac40: 0x2604f8c8  addiu       $a0, $s0, -0x738 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370658u, 0x30AC3Cu, 0x30AC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AC44u;
label_30ac44:
    // 0x30ac44: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x30ac44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x30ac48: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x30ac48u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x30ac4c: 0xc0ddd54  jal         func_377550
    ctx->pc = 0x30AC4Cu;
    SET_GPR_U32(ctx, 31, 0x30AC54u);
    ctx->pc = 0x30AC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AC4Cu;
    // 0x30ac50: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x377550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377550u, 0x30AC4Cu, 0x30AC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AC54u;
label_30ac54:
    // 0x30ac54: 0xc0dd1d4  jal         func_374750
    ctx->pc = 0x30AC54u;
    SET_GPR_U32(ctx, 31, 0x30AC5Cu);
    ctx->pc = 0x30AC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AC54u;
    // 0x30ac58: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374750u, 0x30AC54u, 0x30AC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AC5Cu;
label_30ac5c:
    // 0x30ac5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30ac5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ac60: 0xc0dd5fa  jal         func_3757E8
    ctx->pc = 0x30AC60u;
    SET_GPR_U32(ctx, 31, 0x30AC68u);
    ctx->pc = 0x30AC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AC60u;
    // 0x30ac64: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3757E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3757E8u, 0x30AC60u, 0x30AC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AC68u;
label_30ac68:
    // 0x30ac68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30ac68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ac6c: 0xc0dd618  jal         func_375860
    ctx->pc = 0x30AC6Cu;
    SET_GPR_U32(ctx, 31, 0x30AC74u);
    ctx->pc = 0x30AC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AC6Cu;
    // 0x30ac70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375860u, 0x30AC6Cu, 0x30AC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AC74u;
label_30ac74:
    // 0x30ac74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30ac74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30ac78: 0xc0dd5fa  jal         func_3757E8
    ctx->pc = 0x30AC78u;
    SET_GPR_U32(ctx, 31, 0x30AC80u);
    ctx->pc = 0x30AC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AC78u;
    // 0x30ac7c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3757E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3757E8u, 0x30AC78u, 0x30AC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AC80u;
label_30ac80:
    // 0x30ac80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x30ac80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30ac84: 0xc0dd618  jal         func_375860
    ctx->pc = 0x30AC84u;
    SET_GPR_U32(ctx, 31, 0x30AC8Cu);
    ctx->pc = 0x30AC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AC84u;
    // 0x30ac88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375860u, 0x30AC84u, 0x30AC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AC8Cu;
label_30ac8c:
    // 0x30ac8c: 0x8ea3010c  lw          $v1, 0x10C($s5)
    ctx->pc = 0x30ac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 268)));
    // 0x30ac90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30ac90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30ac94: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x30AC94u;
    {
        const bool branch_taken_0x30ac94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30AC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AC94u;
        // 0x30ac98: 0xc6ac00e0  lwc1        $f12, 0xE0($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ac94) {
            ctx->pc = 0x30ACC0u;
            goto label_30acc0;
        }
    }
    ctx->pc = 0x30AC9Cu;
    // 0x30ac9c: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x30ac9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x30aca0: 0x0  nop
    ctx->pc = 0x30aca0u;
    // NOP
    // 0x30aca4: 0x460d6343  div.s       $f13, $f12, $f13
    ctx->pc = 0x30aca4u;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[12], ctx->f[13]); }
    // 0x30aca8: 0x3c0144fa  lui         $at, 0x44FA
    ctx->pc = 0x30aca8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17658 << 16));
    // 0x30acac: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x30acacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x30acb0: 0xc0dcfd2  jal         func_373F48
    ctx->pc = 0x30ACB0u;
    SET_GPR_U32(ctx, 31, 0x30ACB8u);
    ctx->pc = 0x30ACB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ACB0u;
    // 0x30acb4: 0xc6ae00f0  lwc1        $f14, 0xF0($s5) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x373F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373F48u, 0x30ACB0u, 0x30ACB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ACB8u;
label_30acb8:
    // 0x30acb8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x30ACB8u;
    {
        const bool branch_taken_0x30acb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30ACBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30ACB8u;
        // 0x30acbc: 0x3c02005a  lui         $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30acb8) {
            ctx->pc = 0x30ACE0u;
            goto label_30ace0;
        }
    }
    ctx->pc = 0x30ACC0u;
label_30acc0:
    // 0x30acc0: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x30acc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x30acc4: 0x0  nop
    ctx->pc = 0x30acc4u;
    // NOP
    // 0x30acc8: 0x460d6343  div.s       $f13, $f12, $f13
    ctx->pc = 0x30acc8u;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[12], ctx->f[13]); }
    // 0x30accc: 0x3c0144fa  lui         $at, 0x44FA
    ctx->pc = 0x30acccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17658 << 16));
    // 0x30acd0: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x30acd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x30acd4: 0xc0dcf34  jal         func_373CD0
    ctx->pc = 0x30ACD4u;
    SET_GPR_U32(ctx, 31, 0x30ACDCu);
    ctx->pc = 0x30ACD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30ACD4u;
    // 0x30acd8: 0xc6ae00f0  lwc1        $f14, 0xF0($s5) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x373CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373CD0u, 0x30ACD4u, 0x30ACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ACDCu;
label_30acdc:
    // 0x30acdc: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x30acdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_30ace0:
    // 0x30ace0: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x30ace0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x30ace4: 0x24457d90  addiu       $a1, $v0, 0x7D90
    ctx->pc = 0x30ace4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32144));
    // 0x30ace8: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x30ace8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x30acec: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x30acecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x30acf0: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x30acf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x30acf4: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x30acf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x30acf8: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x30acf8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x30acfc: 0xf8417d90  sqc2        $vf1, 0x7D90($v0)
    ctx->pc = 0x30acfcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30ad00: 0xc0c29b4  jal         func_30A6D0
    ctx->pc = 0x30AD00u;
    SET_GPR_U32(ctx, 31, 0x30AD08u);
    ctx->pc = 0x30AD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AD00u;
    // 0x30ad04: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A6D0u, 0x30AD00u, 0x30AD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AD08u;
label_30ad08:
    // 0x30ad08: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x30ad08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x30ad0c: 0x3c12005a  lui         $s2, 0x5A
    ctx->pc = 0x30ad0cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)90 << 16));
    // 0x30ad10: 0x8c43f158  lw          $v1, -0xEA8($v0)
    ctx->pc = 0x30ad10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5BF158u));
    // 0x30ad14: 0x26527da0  addiu       $s2, $s2, 0x7DA0
    ctx->pc = 0x30ad14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32160));
    // 0x30ad18: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x30ad18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ad1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x30ad1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30ad20: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x30ad20u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x30ad24: 0x31402  srl         $v0, $v1, 16
    ctx->pc = 0x30ad24u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x30ad28: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x30ad28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x30ad2c: 0x118c00  sll         $s1, $s1, 16
    ctx->pc = 0x30ad2cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x30ad30: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x30ad30u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x30ad34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x30ad34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x30ad38: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x30ad38u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x30ad3c: 0xc0b1662  jal         func_2C5988
    ctx->pc = 0x30AD3Cu;
    SET_GPR_U32(ctx, 31, 0x30AD44u);
    ctx->pc = 0x30AD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AD3Cu;
    // 0x30ad40: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5988u, 0x30AD3Cu, 0x30AD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AD44u;
label_30ad44:
    // 0x30ad44: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x30ad44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x30ad48: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x30ad48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x30ad4c: 0xc0b1662  jal         func_2C5988
    ctx->pc = 0x30AD4Cu;
    SET_GPR_U32(ctx, 31, 0x30AD54u);
    ctx->pc = 0x30AD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AD4Cu;
    // 0x30ad50: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5988u, 0x30AD4Cu, 0x30AD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AD54u;
label_30ad54:
    // 0x30ad54: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x30ad54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x30ad58: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x30ad58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x30ad5c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x30AD5Cu;
    SET_GPR_U32(ctx, 31, 0x30AD64u);
    ctx->pc = 0x30AD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AD5Cu;
    // 0x30ad60: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x30AD5Cu, 0x30AD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AD64u;
label_30ad64:
    // 0x30ad64: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x30ad64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30ad68: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x30ad68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x30ad6c: 0xdaa30010  lqc2        $vf3, 0x10($s5)
    ctx->pc = 0x30ad6cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x30ad70: 0xdaa40020  lqc2        $vf4, 0x20($s5)
    ctx->pc = 0x30ad70u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x30ad74: 0xdaa50030  lqc2        $vf5, 0x30($s5)
    ctx->pc = 0x30ad74u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x30ad78: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x30ad78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x30ad7c: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x30ad7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x30ad80: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x30ad80u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x30ad84: 0x4bc1218b  vmaddw.xyz  $vf6, $vf4, $vf1w
    ctx->pc = 0x30ad84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x30ad88: 0xfba60070  sqc2        $vf6, 0x70($sp)
    ctx->pc = 0x30ad88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x30ad8c: 0xc7a30070  lwc1        $f3, 0x70($sp)
    ctx->pc = 0x30ad8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30ad90: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x30ad90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x30ad94: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x30ad94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ad98: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x30ad98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ad9c: 0xc7a2007c  lwc1        $f2, 0x7C($sp)
    ctx->pc = 0x30ad9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ada0: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x30ada0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x30ada4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x30ada4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x30ada8: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x30ada8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x30adac: 0xe7a2006c  swc1        $f2, 0x6C($sp)
    ctx->pc = 0x30adacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x30adb0: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x30adb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x30adb4: 0xfa4100c0  sqc2        $vf1, 0xC0($s2)
    ctx->pc = 0x30adb4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30adb8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x30ADB8u;
    SET_GPR_U32(ctx, 31, 0x30ADC0u);
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x30ADB8u, 0x30ADC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30ADC0u;
label_30adc0:
    // 0x30adc0: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x30adc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x30adc4: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x30adc4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x30adc8: 0xdaa30010  lqc2        $vf3, 0x10($s5)
    ctx->pc = 0x30adc8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x30adcc: 0xdaa40020  lqc2        $vf4, 0x20($s5)
    ctx->pc = 0x30adccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x30add0: 0xdaa50030  lqc2        $vf5, 0x30($s5)
    ctx->pc = 0x30add0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x30add4: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x30add4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x30add8: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x30add8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x30addc: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x30addcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x30ade0: 0x4bc1218b  vmaddw.xyz  $vf6, $vf4, $vf1w
    ctx->pc = 0x30ade0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x30ade4: 0xfba60070  sqc2        $vf6, 0x70($sp)
    ctx->pc = 0x30ade4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x30ade8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x30ade8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30adec: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x30adecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30adf0: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x30adf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30adf4: 0xc7a3007c  lwc1        $f3, 0x7C($sp)
    ctx->pc = 0x30adf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30adf8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x30adf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x30adfc: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x30adfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x30ae00: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x30ae00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x30ae04: 0xe7a3006c  swc1        $f3, 0x6C($sp)
    ctx->pc = 0x30ae04u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x30ae08: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x30ae08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x30ae0c: 0xfa4100d0  sqc2        $vf1, 0xD0($s2)
    ctx->pc = 0x30ae0cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30ae10: 0xc0dd230  jal         func_3748C0
    ctx->pc = 0x30AE10u;
    SET_GPR_U32(ctx, 31, 0x30AE18u);
    ctx->pc = 0x30AE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AE10u;
    // 0x30ae14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3748C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3748C0u, 0x30AE10u, 0x30AE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AE18u;
label_30ae18:
    // 0x30ae18: 0xc6ac00f8  lwc1        $f12, 0xF8($s5)
    ctx->pc = 0x30ae18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30ae1c: 0xc0dd23e  jal         func_3748F8
    ctx->pc = 0x30AE1Cu;
    SET_GPR_U32(ctx, 31, 0x30AE24u);
    ctx->pc = 0x30AE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AE1Cu;
    // 0x30ae20: 0xc6ad00fc  lwc1        $f13, 0xFC($s5) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3748F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3748F8u, 0x30AE1Cu, 0x30AE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AE24u;
label_30ae24:
    // 0x30ae24: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x30ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x30ae28: 0x3c013acc  lui         $at, 0x3ACC
    ctx->pc = 0x30ae28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15052 << 16));
    // 0x30ae2c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x30ae2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x30ae30: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30ae30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30ae34: 0xc444cbdc  lwc1        $f4, -0x3424($v0)
    ctx->pc = 0x30ae34u;
    { uint32_t bits = FAST_READ32(0x3FCBDCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x30ae38: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x30ae38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x30ae3c: 0xc6a100e0  lwc1        $f1, 0xE0($s5)
    ctx->pc = 0x30ae3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ae40: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x30ae40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x30ae44: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x30ae44u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x30ae48: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x30ae48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x30ae4c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x30ae4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x30ae50: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x30ae50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x30ae54: 0xc462cbe0  lwc1        $f2, -0x3420($v1)
    ctx->pc = 0x30ae54u;
    { uint32_t bits = FAST_READ32(0x3FCBE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30ae58: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x30ae58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x30ae5c: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x30ae5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x30ae60: 0x26c4f8c8  addiu       $a0, $s6, -0x738
    ctx->pc = 0x30ae60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965448));
    // 0x30ae64: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x30ae64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x30ae68: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x30ae68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x30ae6c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x30ae6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x30ae70: 0xe441f004  swc1        $f1, -0xFFC($v0)
    ctx->pc = 0x30ae70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5BF004u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BF004u, _value); } while (0); }
    // 0x30ae74: 0xc6a000e0  lwc1        $f0, 0xE0($s5)
    ctx->pc = 0x30ae74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30ae78: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x30ae78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x30ae7c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x30ae7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x30ae80: 0xe4a0f00c  swc1        $f0, -0xFF4($a1)
    ctx->pc = 0x30ae80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5BF00Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BF00Cu, _value); } while (0); }
    // 0x30ae84: 0xc6a100e0  lwc1        $f1, 0xE0($s5)
    ctx->pc = 0x30ae84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30ae88: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x30ae88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x30ae8c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x30ae8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x30ae90: 0xc0dc196  jal         func_370658
    ctx->pc = 0x30AE90u;
    SET_GPR_U32(ctx, 31, 0x30AE98u);
    ctx->pc = 0x30AE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AE90u;
    // 0x30ae94: 0xe461f010  swc1        $f1, -0xFF0($v1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294963216), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x370658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370658u, 0x30AE90u, 0x30AE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AE98u;
label_30ae98:
    // 0x30ae98: 0xc0dd84e  jal         func_376138
    ctx->pc = 0x30AE98u;
    SET_GPR_U32(ctx, 31, 0x30AEA0u);
    ctx->pc = 0x376138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376138u, 0x30AE98u, 0x30AEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AEA0u;
label_30aea0:
    // 0x30aea0: 0xc0c2bbc  jal         func_30AEF0
    ctx->pc = 0x30AEA0u;
    SET_GPR_U32(ctx, 31, 0x30AEA8u);
    ctx->pc = 0x30AEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30AEA0u;
    // 0x30aea4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AEF0u, 0x30AEA0u, 0x30AEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30AEA8u;
label_30aea8:
    // 0x30aea8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x30aea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x30aeac: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x30aeacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30aeb0: 0xac75bb70  sw          $s5, -0x4490($v1)
    ctx->pc = 0x30aeb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x3FBB70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBB70u, _value); } while (0);
    // 0x30aeb4: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x30aeb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x30aeb8: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x30aeb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x30aebc: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x30aebcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x30aec0: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x30aec0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x30aec4: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x30aec4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x30aec8: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x30aec8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x30aecc: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x30aeccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x30aed0: 0xdfbf0138  ld          $ra, 0x138($sp)
    ctx->pc = 0x30aed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x30aed4: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x30aed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30aed8: 0x3e00008  jr          $ra
    ctx->pc = 0x30AED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30AEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30AED8u;
        // 0x30aedc: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30AED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30AEE0u;
}

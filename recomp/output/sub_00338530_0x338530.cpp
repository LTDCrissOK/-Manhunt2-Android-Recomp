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

// Function: sub_00338530
// Address: 0x338530 - 0x338d58
void sub_00338530_0x338530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00338530_0x338530");
#endif

    switch (ctx->pc) {
        case 0x3385f4u: goto label_3385f4;
        case 0x338778u: goto label_338778;
        case 0x33878cu: goto label_33878c;
        case 0x3387b0u: goto label_3387b0;
        case 0x3387e0u: goto label_3387e0;
        case 0x338834u: goto label_338834;
        case 0x3388acu: goto label_3388ac;
        case 0x3388c8u: goto label_3388c8;
        case 0x3388d8u: goto label_3388d8;
        case 0x3388f0u: goto label_3388f0;
        case 0x338900u: goto label_338900;
        case 0x338908u: goto label_338908;
        case 0x338914u: goto label_338914;
        case 0x338928u: goto label_338928;
        case 0x338938u: goto label_338938;
        case 0x33895cu: goto label_33895c;
        case 0x338968u: goto label_338968;
        case 0x338988u: goto label_338988;
        case 0x3389acu: goto label_3389ac;
        case 0x3389e0u: goto label_3389e0;
        case 0x3389f8u: goto label_3389f8;
        case 0x338a08u: goto label_338a08;
        case 0x338a20u: goto label_338a20;
        case 0x338a30u: goto label_338a30;
        case 0x338a38u: goto label_338a38;
        case 0x338a44u: goto label_338a44;
        case 0x338a58u: goto label_338a58;
        case 0x338a68u: goto label_338a68;
        case 0x338a8cu: goto label_338a8c;
        case 0x338a98u: goto label_338a98;
        case 0x338b00u: goto label_338b00;
        case 0x338b10u: goto label_338b10;
        case 0x338b60u: goto label_338b60;
        case 0x338b74u: goto label_338b74;
        case 0x338b98u: goto label_338b98;
        case 0x338bc8u: goto label_338bc8;
        case 0x338c18u: goto label_338c18;
        case 0x338c44u: goto label_338c44;
        case 0x338cccu: goto label_338ccc;
        case 0x338ce0u: goto label_338ce0;
        case 0x338d14u: goto label_338d14;
        default: break;
    }

    ctx->pc = 0x338530u;

    // 0x338530: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x338530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x338534: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x338534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x338538: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x338538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x33853c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x33853cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338540: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x338540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x338544: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x338544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x338548: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x338548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x33854c: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x33854cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x338550: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x338550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x338554: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x338554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x338558: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x338558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x33855c: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x33855cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
    // 0x338560: 0x7fbe00e0  sq          $fp, 0xE0($sp)
    ctx->pc = 0x338560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 30));
    // 0x338564: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x338564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x338568: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x338568u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
    // 0x33856c: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x33856cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
    // 0x338570: 0x1040015f  beqz        $v0, . + 4 + (0x15F << 2)
    ctx->pc = 0x338570u;
    {
        const bool branch_taken_0x338570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x338574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338570u;
        // 0x338574: 0xafa8003c  sw          $t0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338570) {
            ctx->pc = 0x338AF0u;
            goto label_338af0;
        }
    }
    ctx->pc = 0x338578u;
    // 0x338578: 0x3c0c0048  lui         $t4, 0x48
    ctx->pc = 0x338578u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)72 << 16));
    // 0x33857c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x33857cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x338580: 0x8d822c94  lw          $v0, 0x2C94($t4)
    ctx->pc = 0x338580u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482C94u));
    // 0x338584: 0x1062015a  beq         $v1, $v0, . + 4 + (0x15A << 2)
    ctx->pc = 0x338584u;
    {
        const bool branch_taken_0x338584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x338588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338584u;
        // 0x338588: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338584) {
            ctx->pc = 0x338AF0u;
            goto label_338af0;
        }
    }
    ctx->pc = 0x33858Cu;
    // 0x33858c: 0x8ca50104  lw          $a1, 0x104($a1)
    ctx->pc = 0x33858cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x338590: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x338590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x338594: 0x10a001e4  beqz        $a1, . + 4 + (0x1E4 << 2)
    ctx->pc = 0x338594u;
    {
        const bool branch_taken_0x338594 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x338598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338594u;
        // 0x338598: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338594) {
            ctx->pc = 0x338D28u;
            goto label_338d28;
        }
    }
    ctx->pc = 0x33859Cu;
    // 0x33859c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x33859cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3385a0: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x3385a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x3385a4: 0xac44bfcc  sw          $a0, -0x4034($v0)
    ctx->pc = 0x3385a4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3FBFCCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBFCCu, _value); } while (0);
    // 0x3385a8: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x3385a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
    // 0x3385ac: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x3385acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3385b0: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x3385b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x3385b4: 0xaceb2c98  sw          $t3, 0x2C98($a3)
    ctx->pc = 0x3385b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x482C98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482C98u, _value); } while (0);
    // 0x3385b8: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x3385b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x3385bc: 0xad022c9c  sw          $v0, 0x2C9C($t0)
    ctx->pc = 0x3385bcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x482C9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482C9Cu, _value); } while (0);
    // 0x3385c0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3385c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3385c4: 0x8fa70030  lw          $a3, 0x30($sp)
    ctx->pc = 0x3385c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3385c8: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x3385c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x3385cc: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x3385ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x3385d0: 0x24a5a8b8  addiu       $a1, $a1, -0x5748
    ctx->pc = 0x3385d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944952));
    // 0x3385d4: 0xacca2ca0  sw          $t2, 0x2CA0($a2)
    ctx->pc = 0x3385d4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x482CA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482CA0u, _value); } while (0);
    // 0x3385d8: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x3385d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3385dc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x3385dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3385e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3385e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3385e4: 0xad872c94  sw          $a3, 0x2C94($t4)
    ctx->pc = 0x3385e4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 11412), GPR_U32(ctx, 7));
    // 0x3385e8: 0xac692ca4  sw          $t1, 0x2CA4($v1)
    ctx->pc = 0x3385e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x482CA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482CA4u, _value); } while (0);
    // 0x3385ec: 0xc0c3164  jal         func_30C590
    ctx->pc = 0x3385ECu;
    SET_GPR_U32(ctx, 31, 0x3385F4u);
    ctx->pc = 0x3385F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3385ECu;
    // 0x3385f0: 0xae02bfc8  sw          $v0, -0x4038($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950856), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C590u, 0x3385ECu, 0x3385F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3385F4u;
label_3385f4:
    // 0x3385f4: 0x8e07bfc8  lw          $a3, -0x4038($s0)
    ctx->pc = 0x3385f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950856)));
    // 0x3385f8: 0x14e00049  bnez        $a3, . + 4 + (0x49 << 2)
    ctx->pc = 0x3385F8u;
    {
        const bool branch_taken_0x3385f8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3385FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3385F8u;
        // 0x3385fc: 0x3c03005b  lui         $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3385f8) {
            ctx->pc = 0x338720u;
            goto label_338720;
        }
    }
    ctx->pc = 0x338600u;
    // 0x338600: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x338600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x338604: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x338604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
    // 0x338608: 0x24426f70  addiu       $v0, $v0, 0x6F70
    ctx->pc = 0x338608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28528));
    // 0x33860c: 0x24636f60  addiu       $v1, $v1, 0x6F60
    ctx->pc = 0x33860cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28512));
    // 0x338610: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x338610u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x5B6F70u));
    // 0x338614: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x338614u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(FAST_READ128(0x5B6F60u));
    // 0x338618: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x338618u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33861c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x33861cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x338620: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x338620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x338624: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x338624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x338628: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x338628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33862c: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x33862cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x338630: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x338630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x338634: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x338634u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x338638: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x338638u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x33863c: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x33863cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x338640: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x338640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x338644: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x338644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x338648: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x338648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33864c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x33864cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x338650: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x338650u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x338654: 0x4604219c  madd.s      $f6, $f4, $f4
    ctx->pc = 0x338654u;
    ctx->f[6] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x338658: 0x46060184  c1          0x60184
    ctx->pc = 0x338658u;
    ctx->f[6] = FPU_SQRT_S(ctx->f[0]);
    // 0x33865c: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x33865cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x338660: 0x24426f80  addiu       $v0, $v0, 0x6F80
    ctx->pc = 0x338660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28544));
    // 0x338664: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x338664u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x5B6F80u));
    // 0x338668: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x338668u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33866c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33866cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x338670: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x338670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x338674: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x338674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x338678: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x338678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33867c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x33867cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x338680: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x338680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x338684: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x338684u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x338688: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x338688u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x33868c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x33868cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x338690: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x338690u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x338694: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x338694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x338698: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x338698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33869c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x33869cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3386a0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x3386a0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x3386a4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x3386a4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x3386a8: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x3386a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x3386ac: 0x46000004  c1          0x4
    ctx->pc = 0x3386acu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x3386b0: 0x3c014055  lui         $at, 0x4055
    ctx->pc = 0x3386b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16469 << 16));
    // 0x3386b4: 0x34215555  ori         $at, $at, 0x5555
    ctx->pc = 0x3386b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)21845);
    // 0x3386b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3386b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3386bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3386bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3386c0: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x3386c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x3386c4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x3386c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3386c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3386c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3386cc: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x3386ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x3386d0: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x3386d0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x3386d4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3386d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3386d8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3386d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3386dc: 0x46003024  .word       0x46003024                   # cvt.w.s     $f0, $f6 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3386dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[6]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3386e0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3386e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3386e4: 0xe5102a  slt         $v0, $a3, $a1
    ctx->pc = 0x3386e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3386e8: 0xe6182a  slt         $v1, $a3, $a2
    ctx->pc = 0x3386e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3386ec: 0x8fa7003c  lw          $a3, 0x3C($sp)
    ctx->pc = 0x3386ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x3386f0: 0xa2380b  movn        $a3, $a1, $v0
    ctx->pc = 0x3386f0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
    // 0x3386f4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3386f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3386f8: 0xc3100b  movn        $v0, $a2, $v1
    ctx->pc = 0x3386f8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x3386fc: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x3386fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x338700: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x338700u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x338704: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x338704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x338708: 0x82380b  movn        $a3, $a0, $v0
    ctx->pc = 0x338708u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x33870c: 0xafa7003c  sw          $a3, 0x3C($sp)
    ctx->pc = 0x33870cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 7));
    // 0x338710: 0x85182a  slt         $v1, $a0, $a1
    ctx->pc = 0x338710u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x338714: 0x83280b  movn        $a1, $a0, $v1
    ctx->pc = 0x338714u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x338718: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x338718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x33871c: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x33871cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
label_338720:
    // 0x338720: 0x8c626ec0  lw          $v0, 0x6EC0($v1)
    ctx->pc = 0x338720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28352)));
    // 0x338724: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x338724u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x338728: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x338728u;
    {
        const bool branch_taken_0x338728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338728u;
        // 0x33872c: 0x24646ec0  addiu       $a0, $v1, 0x6EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338728) {
            ctx->pc = 0x338734u;
            goto label_338734;
        }
    }
    ctx->pc = 0x338730u;
    // 0x338730: 0xac606ec0  sw          $zero, 0x6EC0($v1)
    ctx->pc = 0x338730u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28352), GPR_U32(ctx, 0));
label_338734:
    // 0x338734: 0x3c06005b  lui         $a2, 0x5B
    ctx->pc = 0x338734u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)91 << 16));
    // 0x338738: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x338738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x33873c: 0x8cc26ec0  lw          $v0, 0x6EC0($a2)
    ctx->pc = 0x33873cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5B6EC0u));
    // 0x338740: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x338740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x338744: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x338744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x338748: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x338748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33874c: 0x10800044  beqz        $a0, . + 4 + (0x44 << 2)
    ctx->pc = 0x33874Cu;
    {
        const bool branch_taken_0x33874c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x338750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33874Cu;
        // 0x338750: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33874c) {
            ctx->pc = 0x338860u;
            goto label_338860;
        }
    }
    ctx->pc = 0x338754u;
    // 0x338754: 0x8c83fff0  lw          $v1, -0x10($a0)
    ctx->pc = 0x338754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x338758: 0x623018  mult        $a2, $v1, $v0
    ctx->pc = 0x338758u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x33875c: 0xc48821  addu        $s1, $a2, $a0
    ctx->pc = 0x33875cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x338760: 0x1091002b  beq         $a0, $s1, . + 4 + (0x2B << 2)
    ctx->pc = 0x338760u;
    {
        const bool branch_taken_0x338760 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x338764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338760u;
        // 0x338764: 0x26300050  addiu       $s0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338760) {
            ctx->pc = 0x338810u;
            goto label_338810;
        }
    }
    ctx->pc = 0x338768u;
    // 0x338768: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x338768u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33876c: 0x3c130057  lui         $s3, 0x57
    ctx->pc = 0x33876cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)87 << 16));
    // 0x338770: 0x3c12005b  lui         $s2, 0x5B
    ctx->pc = 0x338770u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)91 << 16));
    // 0x338774: 0x2610ff60  addiu       $s0, $s0, -0xA0
    ctx->pc = 0x338774u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967136));
label_338778:
    // 0x338778: 0x8e05ffb0  lw          $a1, -0x50($s0)
    ctx->pc = 0x338778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967216)));
    // 0x33877c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33877Cu;
    {
        const bool branch_taken_0x33877c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x338780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33877Cu;
        // 0x338780: 0x2631ff60  addiu       $s1, $s1, -0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33877c) {
            ctx->pc = 0x33878Cu;
            goto label_33878c;
        }
    }
    ctx->pc = 0x338784u;
    // 0x338784: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x338784u;
    SET_GPR_U32(ctx, 31, 0x33878Cu);
    ctx->pc = 0x338788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338784u;
    // 0x338788: 0x26645ad0  addiu       $a0, $s3, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x338784u, 0x33878Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33878Cu;
label_33878c:
    // 0x33878c: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x33878cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x338790: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x338790u;
    {
        const bool branch_taken_0x338790 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x338794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338790u;
        // 0x338794: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338790) {
            ctx->pc = 0x3387C8u;
            goto label_3387c8;
        }
    }
    ctx->pc = 0x338798u;
    // 0x338798: 0x26220068  addiu       $v0, $s1, 0x68
    ctx->pc = 0x338798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x33879c: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x33879Cu;
    {
        const bool branch_taken_0x33879c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x33879c) {
            ctx->pc = 0x3387C8u;
            goto label_3387c8;
        }
    }
    ctx->pc = 0x3387A4u;
    // 0x3387a4: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x3387a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3387a8: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x3387a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x3387ac: 0x0  nop
    ctx->pc = 0x3387acu;
    // NOP
label_3387b0:
    // 0x3387b0: 0x0  nop
    ctx->pc = 0x3387b0u;
    // NOP
    // 0x3387b4: 0x0  nop
    ctx->pc = 0x3387b4u;
    // NOP
    // 0x3387b8: 0x0  nop
    ctx->pc = 0x3387b8u;
    // NOP
    // 0x3387bc: 0x0  nop
    ctx->pc = 0x3387bcu;
    // NOP
    // 0x3387c0: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3387C0u;
    {
        const bool branch_taken_0x3387c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3387C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3387C0u;
        // 0x3387c4: 0x2442fff8  addiu       $v0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3387c0) {
            ctx->pc = 0x3387B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3387b0;
        }
    }
    ctx->pc = 0x3387C8u;
label_3387c8:
    // 0x3387c8: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x3387C8u;
    {
        const bool branch_taken_0x3387c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3387CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3387C8u;
        // 0x3387cc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3387c8) {
            ctx->pc = 0x3387F8u;
            goto label_3387f8;
        }
    }
    ctx->pc = 0x3387D0u;
    // 0x3387d0: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3387D0u;
    {
        const bool branch_taken_0x3387d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3387D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3387D0u;
        // 0x3387d4: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3387d0) {
            ctx->pc = 0x3387F8u;
            goto label_3387f8;
        }
    }
    ctx->pc = 0x3387D8u;
    // 0x3387d8: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3387d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3387dc: 0x0  nop
    ctx->pc = 0x3387dcu;
    // NOP
label_3387e0:
    // 0x3387e0: 0x0  nop
    ctx->pc = 0x3387e0u;
    // NOP
    // 0x3387e4: 0x0  nop
    ctx->pc = 0x3387e4u;
    // NOP
    // 0x3387e8: 0x0  nop
    ctx->pc = 0x3387e8u;
    // NOP
    // 0x3387ec: 0x0  nop
    ctx->pc = 0x3387ecu;
    // NOP
    // 0x3387f0: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3387F0u;
    {
        const bool branch_taken_0x3387f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3387F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3387F0u;
        // 0x3387f4: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3387f0) {
            ctx->pc = 0x3387E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3387e0;
        }
    }
    ctx->pc = 0x3387F8u;
label_3387f8:
    // 0x3387f8: 0x8e426ec0  lw          $v0, 0x6EC0($s2)
    ctx->pc = 0x3387f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28352)));
    // 0x3387fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3387fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x338800: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x338800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x338804: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x338804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x338808: 0x1471ffdb  bne         $v1, $s1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x338808u;
    {
        const bool branch_taken_0x338808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x33880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338808u;
        // 0x33880c: 0x2610ff60  addiu       $s0, $s0, -0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338808) {
            ctx->pc = 0x338778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338778;
        }
    }
    ctx->pc = 0x338810u;
label_338810:
    // 0x338810: 0x3c07005b  lui         $a3, 0x5B
    ctx->pc = 0x338810u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)91 << 16));
    // 0x338814: 0x8ce26ec0  lw          $v0, 0x6EC0($a3)
    ctx->pc = 0x338814u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5B6EC0u));
    // 0x338818: 0x24f06ec0  addiu       $s0, $a3, 0x6EC0
    ctx->pc = 0x338818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 28352));
    // 0x33881c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x33881cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x338820: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x338820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x338824: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x338824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x338828: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x338828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33882c: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x33882Cu;
    SET_GPR_U32(ctx, 31, 0x338834u);
    ctx->pc = 0x338830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33882Cu;
    // 0x338830: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x33882Cu, 0x338834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338834u;
label_338834:
    // 0x338834: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x338834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
    // 0x338838: 0x8c626ec0  lw          $v0, 0x6EC0($v1)
    ctx->pc = 0x338838u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5B6EC0u));
    // 0x33883c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33883cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x338840: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x338840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x338844: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x338844u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x338848: 0x8c636ec0  lw          $v1, 0x6EC0($v1)
    ctx->pc = 0x338848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28352)));
    // 0x33884c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33884cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x338850: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x338850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x338854: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x338854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x338858: 0x5440012f  bnel        $v0, $zero, . + 4 + (0x12F << 2)
    ctx->pc = 0x338858u;
    {
        const bool branch_taken_0x338858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x338858) {
            ctx->pc = 0x33885Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338858u;
            // 0x33885c: 0x3c04005b  lui         $a0, 0x5B (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338D18u;
            goto label_338d18;
        }
    }
    ctx->pc = 0x338860u;
label_338860:
    // 0x338860: 0x8ea2bfc8  lw          $v0, -0x4038($s5)
    ctx->pc = 0x338860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294950856)));
    // 0x338864: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x338864u;
    {
        const bool branch_taken_0x338864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x338868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338864u;
        // 0x338868: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338864) {
            ctx->pc = 0x338980u;
            goto label_338980;
        }
    }
    ctx->pc = 0x33886Cu;
    // 0x33886c: 0x3c07005b  lui         $a3, 0x5B
    ctx->pc = 0x33886cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)91 << 16));
    // 0x338870: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x338870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x338874: 0x24e26ec0  addiu       $v0, $a3, 0x6EC0
    ctx->pc = 0x338874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 28352));
    // 0x338878: 0x8ce36ec0  lw          $v1, 0x6EC0($a3)
    ctx->pc = 0x338878u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5B6EC0u));
    // 0x33887c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x33887cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x338880: 0x862818  mult        $a1, $a0, $a2
    ctx->pc = 0x338880u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x338884: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x338884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x338888: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x338888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33888c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x33888cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x338890: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x338890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x338894: 0x58080  sll         $s0, $a1, 2
    ctx->pc = 0x338894u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x338898: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x338898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x33889c: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x33889cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3388a0: 0x2611ffff  addiu       $s1, $s0, -0x1
    ctx->pc = 0x3388a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3388a4: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3388A4u;
    SET_GPR_U32(ctx, 31, 0x3388ACu);
    ctx->pc = 0x3388A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3388A4u;
    // 0x3388a8: 0x34840010  ori         $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3388A4u, 0x3388ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3388ACu;
label_3388ac:
    // 0x3388ac: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x3388acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3388b0: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x3388b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x3388b4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x3388b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x3388b8: 0x1200002d  beqz        $s0, . + 4 + (0x2D << 2)
    ctx->pc = 0x3388B8u;
    {
        const bool branch_taken_0x3388b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3388BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3388B8u;
        // 0x3388bc: 0x8fb20048  lw          $s2, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3388b8) {
            ctx->pc = 0x338970u;
            goto label_338970;
        }
    }
    ctx->pc = 0x3388C0u;
    // 0x3388c0: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x3388c0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3388c4: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x3388c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
label_3388c8:
    // 0x3388c8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x3388c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3388cc: 0x24c45ad0  addiu       $a0, $a2, 0x5AD0
    ctx->pc = 0x3388ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 23248));
    // 0x3388d0: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x3388D0u;
    SET_GPR_U32(ctx, 31, 0x3388D8u);
    ctx->pc = 0x3388D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3388D0u;
    // 0x3388d4: 0x2637ffff  addiu       $s7, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x3388D0u, 0x3388D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3388D8u;
label_3388d8:
    // 0x3388d8: 0x26510010  addiu       $s1, $s2, 0x10
    ctx->pc = 0x3388d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x3388dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3388dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3388e0: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x3388e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3388e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3388e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3388e8: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x3388E8u;
    SET_GPR_U32(ctx, 31, 0x3388F0u);
    ctx->pc = 0x3388ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3388E8u;
    // 0x3388ec: 0x26540040  addiu       $s4, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x3388E8u, 0x3388F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3388F0u;
label_3388f0:
    // 0x3388f0: 0x26550050  addiu       $s5, $s2, 0x50
    ctx->pc = 0x3388f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x3388f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3388f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3388f8: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x3388F8u;
    SET_GPR_U32(ctx, 31, 0x338900u);
    ctx->pc = 0x3388FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3388F8u;
    // 0x3388fc: 0x26560080  addiu       $s6, $s2, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x3388F8u, 0x338900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338900u;
label_338900:
    // 0x338900: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x338900u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
    // 0x338904: 0x265000a0  addiu       $s0, $s2, 0xA0
    ctx->pc = 0x338904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_338908:
    // 0x338908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x338908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33890c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x33890Cu;
    SET_GPR_U32(ctx, 31, 0x338914u);
    ctx->pc = 0x338910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33890Cu;
    // 0x338910: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x33890Cu, 0x338914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338914u;
label_338914:
    // 0x338914: 0x0  nop
    ctx->pc = 0x338914u;
    // NOP
    // 0x338918: 0x167efffb  bne         $s3, $fp, . + 4 + (-0x5 << 2)
    ctx->pc = 0x338918u;
    {
        const bool branch_taken_0x338918 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 30));
        ctx->pc = 0x33891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338918u;
        // 0x33891c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338918) {
            ctx->pc = 0x338908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338908;
        }
    }
    ctx->pc = 0x338920u;
    // 0x338920: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x338920u;
    SET_GPR_U32(ctx, 31, 0x338928u);
    ctx->pc = 0x338924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338920u;
    // 0x338924: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x338920u, 0x338928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338928u;
label_338928:
    // 0x338928: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x338928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33892c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x33892cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338930: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x338930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x338934: 0x0  nop
    ctx->pc = 0x338934u;
    // NOP
label_338938:
    // 0x338938: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x338938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x33893c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x33893cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x338940: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x338940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x338944: 0x0  nop
    ctx->pc = 0x338944u;
    // NOP
    // 0x338948: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x338948u;
    {
        const bool branch_taken_0x338948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x33894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338948u;
        // 0x33894c: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338948) {
            ctx->pc = 0x338938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338938;
        }
    }
    ctx->pc = 0x338950u;
    // 0x338950: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x338950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338954: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x338954u;
    SET_GPR_U32(ctx, 31, 0x33895Cu);
    ctx->pc = 0x338958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338954u;
    // 0x338958: 0x2e0882d  daddu       $s1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x338954u, 0x33895Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33895Cu;
label_33895c:
    // 0x33895c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x33895cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x338960: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x338960u;
    SET_GPR_U32(ctx, 31, 0x338968u);
    ctx->pc = 0x338964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338960u;
    // 0x338964: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x338960u, 0x338968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338968u;
label_338968:
    // 0x338968: 0x163effd7  bne         $s1, $fp, . + 4 + (-0x29 << 2)
    ctx->pc = 0x338968u;
    {
        const bool branch_taken_0x338968 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 30));
        ctx->pc = 0x33896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338968u;
        // 0x33896c: 0x3c060057  lui         $a2, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338968) {
            ctx->pc = 0x3388C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3388c8;
        }
    }
    ctx->pc = 0x338970u;
label_338970:
    // 0x338970: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x338970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x338974: 0x8fa70044  lw          $a3, 0x44($sp)
    ctx->pc = 0x338974u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x338978: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x338978u;
    {
        const bool branch_taken_0x338978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338978u;
        // 0x33897c: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338978) {
            ctx->pc = 0x338ACCu;
            goto label_338acc;
        }
    }
    ctx->pc = 0x338980u;
label_338980:
    // 0x338980: 0xc0a083e  jal         func_2820F8
    ctx->pc = 0x338980u;
    SET_GPR_U32(ctx, 31, 0x338988u);
    ctx->pc = 0x338984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338980u;
    // 0x338984: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2820F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2820F8u, 0x338980u, 0x338988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338988u;
label_338988:
    // 0x338988: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x338988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33898c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x33898cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x338990: 0x8c43bfb8  lw          $v1, -0x4048($v0)
    ctx->pc = 0x338990u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBFB8u));
    // 0x338994: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x338994u;
    {
        const bool branch_taken_0x338994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x338998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338994u;
        // 0x338998: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338994) {
            ctx->pc = 0x3389ACu;
            goto label_3389ac;
        }
    }
    ctx->pc = 0x33899Cu;
    // 0x33899c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x33899cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3389a0: 0x24a55c80  addiu       $a1, $a1, 0x5C80
    ctx->pc = 0x3389a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23680));
    // 0x3389a4: 0xc09f59c  jal         func_27D670
    ctx->pc = 0x3389A4u;
    SET_GPR_U32(ctx, 31, 0x3389ACu);
    ctx->pc = 0x3389A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3389A4u;
    // 0x3389a8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D670u, 0x3389A4u, 0x3389ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3389ACu;
label_3389ac:
    // 0x3389ac: 0x12200041  beqz        $s1, . + 4 + (0x41 << 2)
    ctx->pc = 0x3389ACu;
    {
        const bool branch_taken_0x3389ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3389B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3389ACu;
        // 0x3389b0: 0x3c05005b  lui         $a1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3389ac) {
            ctx->pc = 0x338AB4u;
            goto label_338ab4;
        }
    }
    ctx->pc = 0x3389B4u;
    // 0x3389b4: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x3389b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x3389b8: 0x8ca36ec0  lw          $v1, 0x6EC0($a1)
    ctx->pc = 0x3389b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28352)));
    // 0x3389bc: 0x2242018  mult        $a0, $s1, $a0
    ctx->pc = 0x3389bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3389c0: 0x24a26ec0  addiu       $v0, $a1, 0x6EC0
    ctx->pc = 0x3389c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 28352));
    // 0x3389c4: 0x2630ffff  addiu       $s0, $s1, -0x1
    ctx->pc = 0x3389c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3389c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3389c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3389cc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3389ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3389d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3389d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3389d4: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x3389d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
    // 0x3389d8: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3389D8u;
    SET_GPR_U32(ctx, 31, 0x3389E0u);
    ctx->pc = 0x3389DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3389D8u;
    // 0x3389dc: 0x34840010  ori         $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3389D8u, 0x3389E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3389E0u;
label_3389e0:
    // 0x3389e0: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x3389e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3389e4: 0xafa60050  sw          $a2, 0x50($sp)
    ctx->pc = 0x3389e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 6));
    // 0x3389e8: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x3389e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x3389ec: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x3389ECu;
    {
        const bool branch_taken_0x3389ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3389F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3389ECu;
        // 0x3389f0: 0x8fb20050  lw          $s2, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3389ec) {
            ctx->pc = 0x338AA4u;
            goto label_338aa4;
        }
    }
    ctx->pc = 0x3389F4u;
    // 0x3389f4: 0x3c070057  lui         $a3, 0x57
    ctx->pc = 0x3389f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)87 << 16));
label_3389f8:
    // 0x3389f8: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x3389f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3389fc: 0x24e45ad0  addiu       $a0, $a3, 0x5AD0
    ctx->pc = 0x3389fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 23248));
    // 0x338a00: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x338A00u;
    SET_GPR_U32(ctx, 31, 0x338A08u);
    ctx->pc = 0x338A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338A00u;
    // 0x338a04: 0x261effff  addiu       $fp, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x338A00u, 0x338A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338A08u;
label_338a08:
    // 0x338a08: 0x26510010  addiu       $s1, $s2, 0x10
    ctx->pc = 0x338a08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x338a0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x338a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338a10: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x338a10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x338a14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x338a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338a18: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x338A18u;
    SET_GPR_U32(ctx, 31, 0x338A20u);
    ctx->pc = 0x338A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338A18u;
    // 0x338a1c: 0x26540040  addiu       $s4, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x338A18u, 0x338A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338A20u;
label_338a20:
    // 0x338a20: 0x26550050  addiu       $s5, $s2, 0x50
    ctx->pc = 0x338a20u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x338a24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x338a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338a28: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x338A28u;
    SET_GPR_U32(ctx, 31, 0x338A30u);
    ctx->pc = 0x338A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338A28u;
    // 0x338a2c: 0x26560080  addiu       $s6, $s2, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x338A28u, 0x338A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338A30u;
label_338a30:
    // 0x338a30: 0x265700a0  addiu       $s7, $s2, 0xA0
    ctx->pc = 0x338a30u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x338a34: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x338a34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_338a38:
    // 0x338a38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x338a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338a3c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x338A3Cu;
    SET_GPR_U32(ctx, 31, 0x338A44u);
    ctx->pc = 0x338A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338A3Cu;
    // 0x338a40: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x338A3Cu, 0x338A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338A44u;
label_338a44:
    // 0x338a44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x338a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x338a48: 0x1662fffb  bne         $s3, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x338A48u;
    {
        const bool branch_taken_0x338a48 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x338A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338A48u;
        // 0x338a4c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338a48) {
            ctx->pc = 0x338A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338a38;
        }
    }
    ctx->pc = 0x338A50u;
    // 0x338a50: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x338A50u;
    SET_GPR_U32(ctx, 31, 0x338A58u);
    ctx->pc = 0x338A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338A50u;
    // 0x338a54: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x338A50u, 0x338A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338A58u;
label_338a58:
    // 0x338a58: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x338a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x338a5c: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x338a5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338a60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x338a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x338a64: 0x0  nop
    ctx->pc = 0x338a64u;
    // NOP
label_338a68:
    // 0x338a68: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x338a68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x338a6c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x338a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x338a70: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x338a70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x338a74: 0x0  nop
    ctx->pc = 0x338a74u;
    // NOP
    // 0x338a78: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x338A78u;
    {
        const bool branch_taken_0x338a78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x338A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338A78u;
        // 0x338a7c: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338a78) {
            ctx->pc = 0x338A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338a68;
        }
    }
    ctx->pc = 0x338A80u;
    // 0x338a80: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x338a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338a84: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x338A84u;
    SET_GPR_U32(ctx, 31, 0x338A8Cu);
    ctx->pc = 0x338A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338A84u;
    // 0x338a88: 0x3c0802d  daddu       $s0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x338A84u, 0x338A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338A8Cu;
label_338a8c:
    // 0x338a8c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x338a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x338a90: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x338A90u;
    SET_GPR_U32(ctx, 31, 0x338A98u);
    ctx->pc = 0x338A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338A90u;
    // 0x338a94: 0x2e0902d  daddu       $s2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x338A90u, 0x338A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338A98u;
label_338a98:
    // 0x338a98: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x338a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x338a9c: 0x1603ffd6  bne         $s0, $v1, . + 4 + (-0x2A << 2)
    ctx->pc = 0x338A9Cu;
    {
        const bool branch_taken_0x338a9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x338AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338A9Cu;
        // 0x338aa0: 0x3c070057  lui         $a3, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338a9c) {
            ctx->pc = 0x3389F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3389f8;
        }
    }
    ctx->pc = 0x338AA4u;
label_338aa4:
    // 0x338aa4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x338aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x338aa8: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x338aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x338aac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x338AACu;
    {
        const bool branch_taken_0x338aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338AACu;
        // 0x338ab0: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338aac) {
            ctx->pc = 0x338ACCu;
            goto label_338acc;
        }
    }
    ctx->pc = 0x338AB4u;
label_338ab4:
    // 0x338ab4: 0x3c06005b  lui         $a2, 0x5B
    ctx->pc = 0x338ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)91 << 16));
    // 0x338ab8: 0x8cc26ec0  lw          $v0, 0x6EC0($a2)
    ctx->pc = 0x338ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5B6EC0u));
    // 0x338abc: 0x24c36ec0  addiu       $v1, $a2, 0x6EC0
    ctx->pc = 0x338abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 28352));
    // 0x338ac0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x338ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x338ac4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x338ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x338ac8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x338ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_338acc:
    // 0x338acc: 0x3c07005b  lui         $a3, 0x5B
    ctx->pc = 0x338accu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)91 << 16));
    // 0x338ad0: 0x8ce26ec0  lw          $v0, 0x6EC0($a3)
    ctx->pc = 0x338ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5B6EC0u));
    // 0x338ad4: 0x24f16ec0  addiu       $s1, $a3, 0x6EC0
    ctx->pc = 0x338ad4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), 28352));
    // 0x338ad8: 0x26300004  addiu       $s0, $s1, 0x4
    ctx->pc = 0x338ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x338adc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x338adcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x338ae0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x338ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x338ae4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x338ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x338ae8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x338AE8u;
    {
        const bool branch_taken_0x338ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x338ae8) {
            ctx->pc = 0x338AF8u;
            goto label_338af8;
        }
    }
    ctx->pc = 0x338AF0u;
label_338af0:
    // 0x338af0: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x338AF0u;
    {
        const bool branch_taken_0x338af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338AF0u;
        // 0x338af4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338af0) {
            ctx->pc = 0x338D28u;
            goto label_338d28;
        }
    }
    ctx->pc = 0x338AF8u;
label_338af8:
    // 0x338af8: 0xc0c3158  jal         func_30C560
    ctx->pc = 0x338AF8u;
    SET_GPR_U32(ctx, 31, 0x338B00u);
    ctx->pc = 0x338AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338AF8u;
    // 0x338afc: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C560u, 0x338AF8u, 0x338B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338B00u;
label_338b00:
    // 0x338b00: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x338B00u;
    {
        const bool branch_taken_0x338b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x338B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338B00u;
        // 0x338b04: 0x3c03005b  lui         $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338b00) {
            ctx->pc = 0x338B20u;
            goto label_338b20;
        }
    }
    ctx->pc = 0x338B08u;
    // 0x338b08: 0xc0c3158  jal         func_30C560
    ctx->pc = 0x338B08u;
    SET_GPR_U32(ctx, 31, 0x338B10u);
    ctx->pc = 0x338B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338B08u;
    // 0x338b0c: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C560u, 0x338B08u, 0x338B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338B10u;
label_338b10:
    // 0x338b10: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x338b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x338b14: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x338B14u;
    {
        const bool branch_taken_0x338b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x338B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338B14u;
        // 0x338b18: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338b14) {
            ctx->pc = 0x338C38u;
            goto label_338c38;
        }
    }
    ctx->pc = 0x338B1Cu;
    // 0x338b1c: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x338b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
label_338b20:
    // 0x338b20: 0x8c626ec0  lw          $v0, 0x6EC0($v1)
    ctx->pc = 0x338b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28352)));
    // 0x338b24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x338b24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x338b28: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x338b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x338b2c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x338b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x338b30: 0x10800039  beqz        $a0, . + 4 + (0x39 << 2)
    ctx->pc = 0x338B30u;
    {
        const bool branch_taken_0x338b30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x338B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338B30u;
        // 0x338b34: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338b30) {
            ctx->pc = 0x338C18u;
            goto label_338c18;
        }
    }
    ctx->pc = 0x338B38u;
    // 0x338b38: 0x8c83fff0  lw          $v1, -0x10($a0)
    ctx->pc = 0x338b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x338b3c: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x338b3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x338b40: 0xa48821  addu        $s1, $a1, $a0
    ctx->pc = 0x338b40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x338b44: 0x1091002c  beq         $a0, $s1, . + 4 + (0x2C << 2)
    ctx->pc = 0x338B44u;
    {
        const bool branch_taken_0x338b44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x338B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338B44u;
        // 0x338b48: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338b44) {
            ctx->pc = 0x338BF8u;
            goto label_338bf8;
        }
    }
    ctx->pc = 0x338B4Cu;
    // 0x338b4c: 0x3c130057  lui         $s3, 0x57
    ctx->pc = 0x338b4cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)87 << 16));
    // 0x338b50: 0x3c12005b  lui         $s2, 0x5B
    ctx->pc = 0x338b50u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)91 << 16));
    // 0x338b54: 0x26300050  addiu       $s0, $s1, 0x50
    ctx->pc = 0x338b54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x338b58: 0x2610ff60  addiu       $s0, $s0, -0xA0
    ctx->pc = 0x338b58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967136));
    // 0x338b5c: 0x0  nop
    ctx->pc = 0x338b5cu;
    // NOP
label_338b60:
    // 0x338b60: 0x8e05ffb0  lw          $a1, -0x50($s0)
    ctx->pc = 0x338b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967216)));
    // 0x338b64: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x338B64u;
    {
        const bool branch_taken_0x338b64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x338B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338B64u;
        // 0x338b68: 0x2631ff60  addiu       $s1, $s1, -0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338b64) {
            ctx->pc = 0x338B74u;
            goto label_338b74;
        }
    }
    ctx->pc = 0x338B6Cu;
    // 0x338b6c: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x338B6Cu;
    SET_GPR_U32(ctx, 31, 0x338B74u);
    ctx->pc = 0x338B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338B6Cu;
    // 0x338b70: 0x26645ad0  addiu       $a0, $s3, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x338B6Cu, 0x338B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338B74u;
label_338b74:
    // 0x338b74: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x338b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x338b78: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x338B78u;
    {
        const bool branch_taken_0x338b78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x338B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338B78u;
        // 0x338b7c: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338b78) {
            ctx->pc = 0x338BB0u;
            goto label_338bb0;
        }
    }
    ctx->pc = 0x338B80u;
    // 0x338b80: 0x26220068  addiu       $v0, $s1, 0x68
    ctx->pc = 0x338b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x338b84: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x338B84u;
    {
        const bool branch_taken_0x338b84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x338b84) {
            ctx->pc = 0x338BB0u;
            goto label_338bb0;
        }
    }
    ctx->pc = 0x338B8Cu;
    // 0x338b8c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x338b8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338b90: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x338b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x338b94: 0x0  nop
    ctx->pc = 0x338b94u;
    // NOP
label_338b98:
    // 0x338b98: 0x0  nop
    ctx->pc = 0x338b98u;
    // NOP
    // 0x338b9c: 0x0  nop
    ctx->pc = 0x338b9cu;
    // NOP
    // 0x338ba0: 0x0  nop
    ctx->pc = 0x338ba0u;
    // NOP
    // 0x338ba4: 0x0  nop
    ctx->pc = 0x338ba4u;
    // NOP
    // 0x338ba8: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x338BA8u;
    {
        const bool branch_taken_0x338ba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x338BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338BA8u;
        // 0x338bac: 0x2442fff8  addiu       $v0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338ba8) {
            ctx->pc = 0x338B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338b98;
        }
    }
    ctx->pc = 0x338BB0u;
label_338bb0:
    // 0x338bb0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x338BB0u;
    {
        const bool branch_taken_0x338bb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x338BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338BB0u;
        // 0x338bb4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338bb0) {
            ctx->pc = 0x338BE0u;
            goto label_338be0;
        }
    }
    ctx->pc = 0x338BB8u;
    // 0x338bb8: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x338BB8u;
    {
        const bool branch_taken_0x338bb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x338BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338BB8u;
        // 0x338bbc: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338bb8) {
            ctx->pc = 0x338BE0u;
            goto label_338be0;
        }
    }
    ctx->pc = 0x338BC0u;
    // 0x338bc0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x338bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x338bc4: 0x0  nop
    ctx->pc = 0x338bc4u;
    // NOP
label_338bc8:
    // 0x338bc8: 0x0  nop
    ctx->pc = 0x338bc8u;
    // NOP
    // 0x338bcc: 0x0  nop
    ctx->pc = 0x338bccu;
    // NOP
    // 0x338bd0: 0x0  nop
    ctx->pc = 0x338bd0u;
    // NOP
    // 0x338bd4: 0x0  nop
    ctx->pc = 0x338bd4u;
    // NOP
    // 0x338bd8: 0x1462fffb  bne         $v1, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x338BD8u;
    {
        const bool branch_taken_0x338bd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x338BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338BD8u;
        // 0x338bdc: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338bd8) {
            ctx->pc = 0x338BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338bc8;
        }
    }
    ctx->pc = 0x338BE0u;
label_338be0:
    // 0x338be0: 0x8e426ec0  lw          $v0, 0x6EC0($s2)
    ctx->pc = 0x338be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28352)));
    // 0x338be4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x338be4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x338be8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x338be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x338bec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x338becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x338bf0: 0x1471ffdb  bne         $v1, $s1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x338BF0u;
    {
        const bool branch_taken_0x338bf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x338BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338BF0u;
        // 0x338bf4: 0x2610ff60  addiu       $s0, $s0, -0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338bf0) {
            ctx->pc = 0x338B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338b60;
        }
    }
    ctx->pc = 0x338BF8u;
label_338bf8:
    // 0x338bf8: 0x3c06005b  lui         $a2, 0x5B
    ctx->pc = 0x338bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)91 << 16));
    // 0x338bfc: 0x8cc26ec0  lw          $v0, 0x6EC0($a2)
    ctx->pc = 0x338bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5B6EC0u));
    // 0x338c00: 0x24c36ec0  addiu       $v1, $a2, 0x6EC0
    ctx->pc = 0x338c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 28352));
    // 0x338c04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x338c04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x338c08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x338c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x338c0c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x338c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x338c10: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x338C10u;
    SET_GPR_U32(ctx, 31, 0x338C18u);
    ctx->pc = 0x338C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338C10u;
    // 0x338c14: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x338C10u, 0x338C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338C18u;
label_338c18:
    // 0x338c18: 0x3c07005b  lui         $a3, 0x5B
    ctx->pc = 0x338c18u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)91 << 16));
    // 0x338c1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x338c1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338c20: 0x8ce36ec0  lw          $v1, 0x6EC0($a3)
    ctx->pc = 0x338c20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5B6EC0u));
    // 0x338c24: 0x24e46ec0  addiu       $a0, $a3, 0x6EC0
    ctx->pc = 0x338c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 28352));
    // 0x338c28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x338c28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x338c2c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x338c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x338c30: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x338C30u;
    {
        const bool branch_taken_0x338c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338C30u;
        // 0x338c34: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338c30) {
            ctx->pc = 0x338D28u;
            goto label_338d28;
        }
    }
    ctx->pc = 0x338C38u;
label_338c38:
    // 0x338c38: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x338c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x338c3c: 0xc0ce53a  jal         func_3394E8
    ctx->pc = 0x338C3Cu;
    SET_GPR_U32(ctx, 31, 0x338C44u);
    ctx->pc = 0x338C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338C3Cu;
    // 0x338c40: 0x8fa6003c  lw          $a2, 0x3C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3394E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3394E8u, 0x338C3Cu, 0x338C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338C44u;
label_338c44:
    // 0x338c44: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x338c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
    // 0x338c48: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x338c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x338c4c: 0x24636f60  addiu       $v1, $v1, 0x6F60
    ctx->pc = 0x338c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28512));
    // 0x338c50: 0x24426f80  addiu       $v0, $v0, 0x6F80
    ctx->pc = 0x338c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28544));
    // 0x338c54: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x338c54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x5B6F60u));
    // 0x338c58: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x338c58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(FAST_READ128(0x5B6F80u));
    // 0x338c5c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x338c5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x338c60: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x338c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x338c64: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x338c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x338c68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x338c68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x338c6c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x338c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x338c70: 0xc7a60024  lwc1        $f6, 0x24($sp)
    ctx->pc = 0x338c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x338c74: 0xc7a70028  lwc1        $f7, 0x28($sp)
    ctx->pc = 0x338c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x338c78: 0x46000902  mul.s       $f4, $f1, $f0
    ctx->pc = 0x338c78u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x338c7c: 0xc7a5002c  lwc1        $f5, 0x2C($sp)
    ctx->pc = 0x338c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x338c80: 0x46003082  mul.s       $f2, $f6, $f0
    ctx->pc = 0x338c80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x338c84: 0x460038c2  mul.s       $f3, $f7, $f0
    ctx->pc = 0x338c84u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x338c88: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x338c88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x338c8c: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x338c8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x338c90: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x338c90u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x338c94: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x338c94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x338c98: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x338c98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x338c9c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x338c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x338ca0: 0xe7a60014  swc1        $f6, 0x14($sp)
    ctx->pc = 0x338ca0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x338ca4: 0xe7a70018  swc1        $f7, 0x18($sp)
    ctx->pc = 0x338ca4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x338ca8: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x338ca8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x338cac: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x338cacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338cb0: 0xfa210090  sqc2        $vf1, 0x90($s1)
    ctx->pc = 0x338cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x338cb4: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x338cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x338cb8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x338CB8u;
    {
        const bool branch_taken_0x338cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x338CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338CB8u;
        // 0x338cbc: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338cb8) {
            ctx->pc = 0x338CD4u;
            goto label_338cd4;
        }
    }
    ctx->pc = 0x338CC0u;
    // 0x338cc0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x338cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338cc4: 0xc0ced8a  jal         func_33B628
    ctx->pc = 0x338CC4u;
    SET_GPR_U32(ctx, 31, 0x338CCCu);
    ctx->pc = 0x338CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338CC4u;
    // 0x338cc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B628u, 0x338CC4u, 0x338CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338CCCu;
label_338ccc:
    // 0x338ccc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x338CCCu;
    {
        const bool branch_taken_0x338ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338CCCu;
        // 0x338cd0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338ccc) {
            ctx->pc = 0x338CE4u;
            goto label_338ce4;
        }
    }
    ctx->pc = 0x338CD4u;
label_338cd4:
    // 0x338cd4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x338cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338cd8: 0xc0ced8a  jal         func_33B628
    ctx->pc = 0x338CD8u;
    SET_GPR_U32(ctx, 31, 0x338CE0u);
    ctx->pc = 0x338CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338CD8u;
    // 0x338cdc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B628u, 0x338CD8u, 0x338CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338CE0u;
label_338ce0:
    // 0x338ce0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x338ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_338ce4:
    // 0x338ce4: 0x8c43bfb8  lw          $v1, -0x4048($v0)
    ctx->pc = 0x338ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950840)));
    // 0x338ce8: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x338CE8u;
    {
        const bool branch_taken_0x338ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x338CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338CE8u;
        // 0x338cec: 0x3c03005b  lui         $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338ce8) {
            ctx->pc = 0x338D14u;
            goto label_338d14;
        }
    }
    ctx->pc = 0x338CF0u;
    // 0x338cf0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x338cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x338cf4: 0x8c626ec0  lw          $v0, 0x6EC0($v1)
    ctx->pc = 0x338cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28352)));
    // 0x338cf8: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x338cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x338cfc: 0x24636ec0  addiu       $v1, $v1, 0x6EC0
    ctx->pc = 0x338cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28352));
    // 0x338d00: 0x24a55ca0  addiu       $a1, $a1, 0x5CA0
    ctx->pc = 0x338d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23712));
    // 0x338d04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x338d04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x338d08: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x338d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x338d0c: 0xc09f59c  jal         func_27D670
    ctx->pc = 0x338D0Cu;
    SET_GPR_U32(ctx, 31, 0x338D14u);
    ctx->pc = 0x338D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338D0Cu;
    // 0x338d10: 0x8c660018  lw          $a2, 0x18($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D670u, 0x338D0Cu, 0x338D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338D14u;
label_338d14:
    // 0x338d14: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x338d14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
label_338d18:
    // 0x338d18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x338d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338d1c: 0x8c836ec0  lw          $v1, 0x6EC0($a0)
    ctx->pc = 0x338d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28352)));
    // 0x338d20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x338d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x338d24: 0xac836ec0  sw          $v1, 0x6EC0($a0)
    ctx->pc = 0x338d24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28352), GPR_U32(ctx, 3));
label_338d28:
    // 0x338d28: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x338d28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x338d2c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x338d2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x338d30: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x338d30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x338d34: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x338d34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x338d38: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x338d38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x338d3c: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x338d3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x338d40: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x338d40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x338d44: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x338d44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x338d48: 0x7bbe00e0  lq          $fp, 0xE0($sp)
    ctx->pc = 0x338d48u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x338d4c: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x338d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x338d50: 0x3e00008  jr          $ra
    ctx->pc = 0x338D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338D50u;
        // 0x338d54: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338D58u;
}

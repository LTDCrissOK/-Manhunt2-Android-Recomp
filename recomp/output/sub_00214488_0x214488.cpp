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

// Function: sub_00214488
// Address: 0x214488 - 0x214d10
void sub_00214488_0x214488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214488_0x214488");
#endif

    switch (ctx->pc) {
        case 0x2145e8u: goto label_2145e8;
        case 0x2145fcu: goto label_2145fc;
        case 0x21460cu: goto label_21460c;
        case 0x214878u: goto label_214878;
        case 0x21489cu: goto label_21489c;
        case 0x2148acu: goto label_2148ac;
        case 0x2148c0u: goto label_2148c0;
        case 0x214bd0u: goto label_214bd0;
        case 0x214bdcu: goto label_214bdc;
        case 0x214bfcu: goto label_214bfc;
        case 0x214c08u: goto label_214c08;
        case 0x214c14u: goto label_214c14;
        case 0x214c30u: goto label_214c30;
        case 0x214c38u: goto label_214c38;
        case 0x214c5cu: goto label_214c5c;
        case 0x214c68u: goto label_214c68;
        case 0x214c90u: goto label_214c90;
        case 0x214c9cu: goto label_214c9c;
        case 0x214cb8u: goto label_214cb8;
        case 0x214cc0u: goto label_214cc0;
        case 0x214cccu: goto label_214ccc;
        case 0x214cd4u: goto label_214cd4;
        default: break;
    }

    ctx->pc = 0x214488u;

    // 0x214488: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x214488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x21448c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x21448cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x214490: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x214490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x214494: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x214494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x214498: 0x8c52bd54  lw          $s2, -0x42AC($v0)
    ctx->pc = 0x214498u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x3FBD54u));
    // 0x21449c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21449cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2144a0: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x2144a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x2144a4: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x2144a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    // 0x2144a8: 0xffb40130  sd          $s4, 0x130($sp)
    ctx->pc = 0x2144a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 20));
    // 0x2144ac: 0xffb50138  sd          $s5, 0x138($sp)
    ctx->pc = 0x2144acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 21));
    // 0x2144b0: 0xffb60140  sd          $s6, 0x140($sp)
    ctx->pc = 0x2144b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 22));
    // 0x2144b4: 0xffb70148  sd          $s7, 0x148($sp)
    ctx->pc = 0x2144b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 23));
    // 0x2144b8: 0xffbe0150  sd          $fp, 0x150($sp)
    ctx->pc = 0x2144b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 30));
    // 0x2144bc: 0xffbf0158  sd          $ra, 0x158($sp)
    ctx->pc = 0x2144bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 31));
    // 0x2144c0: 0xe7b50168  swc1        $f21, 0x168($sp)
    ctx->pc = 0x2144c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x2144c4: 0x12400203  beqz        $s2, . + 4 + (0x203 << 2)
    ctx->pc = 0x2144C4u;
    {
        const bool branch_taken_0x2144c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2144C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2144C4u;
        // 0x2144c8: 0xe7b40160  swc1        $f20, 0x160($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2144c4) {
            ctx->pc = 0x214CD4u;
            goto label_214cd4;
        }
    }
    ctx->pc = 0x2144CCu;
    // 0x2144cc: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x2144ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2144d0: 0x26440020  addiu       $a0, $s2, 0x20
    ctx->pc = 0x2144d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x2144d4: 0x8e260104  lw          $a2, 0x104($s1)
    ctx->pc = 0x2144d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2144d8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2144d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2144dc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2144dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2144e0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2144e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2144e4: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2144e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2144e8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x2144e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x2144ec: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2144ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2144f0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2144f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2144f4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2144f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2144f8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2144f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2144fc: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x2144fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214500: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x214500u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x214504: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x214504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214508: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x214508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x21450c: 0x46020540  add.s       $f21, $f0, $f2
    ctx->pc = 0x21450cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x214510: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x214510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x214514: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x214514u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214518: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x214518u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21451c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x21451cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x214520: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x214520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x214524: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x214524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214528: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x214528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x21452c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x21452cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214530: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x214530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214534: 0xc7a5002c  lwc1        $f5, 0x2C($sp)
    ctx->pc = 0x214534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x214538: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x214538u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x21453c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x21453cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x214540: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x214540u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x214544: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x214544u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x214548: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x214548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21454c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x21454cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x214550: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x214550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x214554: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x214554u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x214558: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x214558u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x21455c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x21455cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x214560: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x214560u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214564: 0x0  nop
    ctx->pc = 0x214564u;
    // NOP
    // 0x214568: 0x450001da  bc1f        . + 4 + (0x1DA << 2)
    ctx->pc = 0x214568u;
    {
        const bool branch_taken_0x214568 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214568u;
        // 0x21456c: 0x26220020  addiu       $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214568) {
            ctx->pc = 0x214CD4u;
            goto label_214cd4;
        }
    }
    ctx->pc = 0x214570u;
    // 0x214570: 0x8e2500bc  lw          $a1, 0xBC($s1)
    ctx->pc = 0x214570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x214574: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x214574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x214578: 0xc6220020  lwc1        $f2, 0x20($s1)
    ctx->pc = 0x214578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21457c: 0x30a31001  andi        $v1, $a1, 0x1001
    ctx->pc = 0x21457cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4097);
    // 0x214580: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x214580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214584: 0x38631001  xori        $v1, $v1, 0x1001
    ctx->pc = 0x214584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4097);
    // 0x214588: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x214588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21458c: 0xc4940004  lwc1        $f20, 0x4($a0)
    ctx->pc = 0x21458cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x214590: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x214590u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x214594: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x214594u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x214598: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x214598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x21459c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x21459Cu;
    {
        const bool branch_taken_0x21459c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2145A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21459Cu;
        // 0x2145a0: 0xe7a3002c  swc1        $f3, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21459c) {
            ctx->pc = 0x2145B8u;
            goto label_2145b8;
        }
    }
    ctx->pc = 0x2145A4u;
    // 0x2145a4: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x2145a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x2145a8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2145a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2145ac: 0xa21824  and         $v1, $a1, $v0
    ctx->pc = 0x2145acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2145b0: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2145B0u;
    {
        const bool branch_taken_0x2145b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2145b0) {
            ctx->pc = 0x2145B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2145B0u;
            // 0x2145b4: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2145CCu;
            goto label_2145cc;
        }
    }
    ctx->pc = 0x2145B8u;
label_2145b8:
    // 0x2145b8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2145b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2145bc: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2145bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2145c0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2145c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2145c4: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2145c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2145c8: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x2145c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_2145cc:
    // 0x2145cc: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2145ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2145d0: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2145d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x2145d4: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2145D4u;
    {
        const bool branch_taken_0x2145d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2145d4) {
            ctx->pc = 0x2145D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2145D4u;
            // 0x2145d8: 0x4615a000  add.s       $f0, $f20, $f21 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21461Cu;
            goto label_21461c;
        }
    }
    ctx->pc = 0x2145DCu;
    // 0x2145dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2145dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2145e0: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x2145E0u;
    SET_GPR_U32(ctx, 31, 0x2145E8u);
    ctx->pc = 0x2145E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2145E0u;
    // 0x2145e4: 0x24050415  addiu       $a1, $zero, 0x415 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1045));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x2145E0u, 0x2145E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2145E8u;
label_2145e8:
    // 0x2145e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2145e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2145ec: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2145ECu;
    {
        const bool branch_taken_0x2145ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2145ec) {
            ctx->pc = 0x2145F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2145ECu;
            // 0x2145f0: 0x4615a000  add.s       $f0, $f20, $f21 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21461Cu;
            goto label_21461c;
        }
    }
    ctx->pc = 0x2145F4u;
    // 0x2145f4: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x2145F4u;
    SET_GPR_U32(ctx, 31, 0x2145FCu);
    ctx->pc = 0x2145F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2145F4u;
    // 0x2145f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2145F4u, 0x2145FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2145FCu;
label_2145fc:
    // 0x2145fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2145FCu;
    {
        const bool branch_taken_0x2145fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2145FCu;
        // 0x214600: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2145fc) {
            ctx->pc = 0x214610u;
            goto label_214610;
        }
    }
    ctx->pc = 0x214604u;
    // 0x214604: 0xc0c4900  jal         func_312400
    ctx->pc = 0x214604u;
    SET_GPR_U32(ctx, 31, 0x21460Cu);
    ctx->pc = 0x214608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214604u;
    // 0x214608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x214604u, 0x21460Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21460Cu;
label_21460c:
    // 0x21460c: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x21460cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_214610:
    // 0x214610: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x214610u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214614: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x214614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x214618: 0x4615a000  add.s       $f0, $f20, $f21
    ctx->pc = 0x214618u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
label_21461c:
    // 0x21461c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x21461cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214620: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x214620u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214624: 0x0  nop
    ctx->pc = 0x214624u;
    // NOP
    // 0x214628: 0x450001ab  bc1f        . + 4 + (0x1AB << 2)
    ctx->pc = 0x214628u;
    {
        const bool branch_taken_0x214628 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214628u;
        // 0x21462c: 0xdfb00110  ld          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214628) {
            ctx->pc = 0x214CD8u;
            goto label_214cd8;
        }
    }
    ctx->pc = 0x214630u;
    // 0x214630: 0x4615a001  sub.s       $f0, $f20, $f21
    ctx->pc = 0x214630u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x214634: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x214634u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214638: 0x0  nop
    ctx->pc = 0x214638u;
    // NOP
    // 0x21463c: 0x450001a6  bc1f        . + 4 + (0x1A6 << 2)
    ctx->pc = 0x21463Cu;
    {
        const bool branch_taken_0x21463c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x214640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21463Cu;
        // 0x214640: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21463c) {
            ctx->pc = 0x214CD8u;
            goto label_214cd8;
        }
    }
    ctx->pc = 0x214644u;
    // 0x214644: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x214644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x214648: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x214648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x21464c: 0x27b70050  addiu       $s7, $sp, 0x50
    ctx->pc = 0x21464cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x214650: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x214650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214654: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x214654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x214658: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x214658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x21465c: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x21465cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214660: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x214660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x214664: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x214664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x214668: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x214668u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x21466c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x21466cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214670: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x214670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x214674: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x214674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214678: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x214678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x21467c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x21467cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214680: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x214680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x214684: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x214684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x214688: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x214688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21468c: 0xc4610070  lwc1        $f1, 0x70($v1)
    ctx->pc = 0x21468cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214690: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x214690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x214694: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x214694u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x214698: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x214698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21469c: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x21469cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2146a0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2146a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2146a4: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x2146a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2146a8: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2146a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2146ac: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x2146acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x2146b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2146b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2146b4: 0xc4410070  lwc1        $f1, 0x70($v0)
    ctx->pc = 0x2146b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2146b8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2146b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2146bc: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x2146bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2146c0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2146c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2146c4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2146c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2146c8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2146c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2146cc: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x2146ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2146d0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2146d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2146d4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x2146d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2146d8: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x2146d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2146dc: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x2146dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2146e0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2146e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2146e4: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x2146e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2146e8: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2146e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2146ec: 0x27b60030  addiu       $s6, $sp, 0x30
    ctx->pc = 0x2146ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2146f0: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2146f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2146f4: 0x27be0060  addiu       $fp, $sp, 0x60
    ctx->pc = 0x2146f4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2146f8: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x2146f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2146fc: 0xc7a4007c  lwc1        $f4, 0x7C($sp)
    ctx->pc = 0x2146fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x214700: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x214700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x214704: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x214704u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x214708: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x214708u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x21470c: 0xe7a4006c  swc1        $f4, 0x6C($sp)
    ctx->pc = 0x21470cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x214710: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x214710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214714: 0xc7c30000  lwc1        $f3, 0x0($fp)
    ctx->pc = 0x214714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x214718: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x214718u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x21471c: 0xc6c20004  lwc1        $f2, 0x4($s6)
    ctx->pc = 0x21471cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214720: 0xc7c30004  lwc1        $f3, 0x4($fp)
    ctx->pc = 0x214720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x214724: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x214724u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x214728: 0xc6c20008  lwc1        $f2, 0x8($s6)
    ctx->pc = 0x214728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21472c: 0xc7c30008  lwc1        $f3, 0x8($fp)
    ctx->pc = 0x21472cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x214730: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x214730u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x214734: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x214734u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x214738: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x214738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21473c: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x21473cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214740: 0x27b50080  addiu       $s5, $sp, 0x80
    ctx->pc = 0x214740u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x214744: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x214744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x214748: 0xc7a4003c  lwc1        $f4, 0x3C($sp)
    ctx->pc = 0x214748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21474c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x21474cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x214750: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x214750u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x214754: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x214754u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x214758: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x214758u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x21475c: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x21475cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x214760: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x214760u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x214764: 0xe7a30078  swc1        $f3, 0x78($sp)
    ctx->pc = 0x214764u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x214768: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x214768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x21476c: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x21476cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x214770: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x214770u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x214774: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x214774u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x214778: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x214778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21477c: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x21477cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x214780: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x214780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x214784: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x214784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214788: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x214788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21478c: 0xc7a2008c  lwc1        $f2, 0x8C($sp)
    ctx->pc = 0x21478cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214790: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x214790u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x214794: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x214794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x214798: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x214798u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x21479c: 0xe7a2006c  swc1        $f2, 0x6C($sp)
    ctx->pc = 0x21479cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2147a0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2147a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2147a4: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x2147a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2147a8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2147a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2147ac: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x2147acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2147b0: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2147b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2147b4: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2147b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2147b8: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x2147b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2147bc: 0xc7a4008c  lwc1        $f4, 0x8C($sp)
    ctx->pc = 0x2147bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2147c0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2147c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2147c4: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x2147c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2147c8: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x2147c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2147cc: 0xe7a4007c  swc1        $f4, 0x7C($sp)
    ctx->pc = 0x2147ccu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2147d0: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x2147d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2147d4: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x2147d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2147d8: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2147d8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2147dc: 0xc6c20004  lwc1        $f2, 0x4($s6)
    ctx->pc = 0x2147dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2147e0: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x2147e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2147e4: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2147e4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x2147e8: 0xc6c20008  lwc1        $f2, 0x8($s6)
    ctx->pc = 0x2147e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2147ec: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x2147ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2147f0: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2147f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2147f4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2147f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2147f8: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x2147f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2147fc: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x2147fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x214800: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x214800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214804: 0xc7a40038  lwc1        $f4, 0x38($sp)
    ctx->pc = 0x214804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x214808: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x214808u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x21480c: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x21480cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x214810: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x214810u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x214814: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x214814u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x214818: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x214818u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x21481c: 0xe7a30084  swc1        $f3, 0x84($sp)
    ctx->pc = 0x21481cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x214820: 0xe7a1008c  swc1        $f1, 0x8C($sp)
    ctx->pc = 0x214820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x214824: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x214824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x214828: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x214828u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21482c: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x21482cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x214830: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x214830u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x214834: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x214834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x214838: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x214838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21483c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x21483cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x214840: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x214840u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x214844: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x214844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x214848: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x214848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21484c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21484cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x214850: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x214850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214854: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x214854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214858: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x214858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21485c: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x21485cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x214860: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x214860u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x214864: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x214864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x214868: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x214868u;
    {
        const bool branch_taken_0x214868 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214868u;
        // 0x21486c: 0xe7a1007c  swc1        $f1, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x214868) {
            ctx->pc = 0x214880u;
            goto label_214880;
        }
    }
    ctx->pc = 0x214870u;
    // 0x214870: 0xc085344  jal         func_214D10
    ctx->pc = 0x214870u;
    SET_GPR_U32(ctx, 31, 0x214878u);
    ctx->pc = 0x214874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214870u;
    // 0x214874: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214D10u, 0x214870u, 0x214878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214878u;
label_214878:
    // 0x214878: 0x10400117  beqz        $v0, . + 4 + (0x117 << 2)
    ctx->pc = 0x214878u;
    {
        const bool branch_taken_0x214878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21487Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214878u;
        // 0x21487c: 0xdfb00110  ld          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214878) {
            ctx->pc = 0x214CD8u;
            goto label_214cd8;
        }
    }
    ctx->pc = 0x214880u;
label_214880:
    // 0x214880: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x214880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x214884: 0x8e2301ac  lw          $v1, 0x1AC($s1)
    ctx->pc = 0x214884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
    // 0x214888: 0x8c540010  lw          $s4, 0x10($v0)
    ctx->pc = 0x214888u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x21488c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x21488Cu;
    {
        const bool branch_taken_0x21488c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x214890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21488Cu;
        // 0x214890: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21488c) {
            ctx->pc = 0x2148ACu;
            goto label_2148ac;
        }
    }
    ctx->pc = 0x214894u;
    // 0x214894: 0xc0c4946  jal         func_312518
    ctx->pc = 0x214894u;
    SET_GPR_U32(ctx, 31, 0x21489Cu);
    ctx->pc = 0x214898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214894u;
    // 0x214898: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312518u, 0x214894u, 0x21489Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21489Cu;
label_21489c:
    // 0x21489c: 0xae2201ac  sw          $v0, 0x1AC($s1)
    ctx->pc = 0x21489cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 428), GPR_U32(ctx, 2));
    // 0x2148a0: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x2148a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x2148a4: 0xc0c4970  jal         func_3125C0
    ctx->pc = 0x2148A4u;
    SET_GPR_U32(ctx, 31, 0x2148ACu);
    ctx->pc = 0x2148A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2148A4u;
    // 0x2148a8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3125C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3125C0u, 0x2148A4u, 0x2148ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2148ACu;
label_2148ac:
    // 0x2148ac: 0x8e3201ac  lw          $s2, 0x1AC($s1)
    ctx->pc = 0x2148acu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 428)));
    // 0x2148b0: 0x26650040  addiu       $a1, $s3, 0x40
    ctx->pc = 0x2148b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x2148b4: 0x26500040  addiu       $s0, $s2, 0x40
    ctx->pc = 0x2148b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x2148b8: 0xc0b1680  jal         func_2C5A00
    ctx->pc = 0x2148B8u;
    SET_GPR_U32(ctx, 31, 0x2148C0u);
    ctx->pc = 0x2148BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2148B8u;
    // 0x2148bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5A00u, 0x2148B8u, 0x2148C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2148C0u;
label_2148c0:
    // 0x2148c0: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x2148c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2148c4: 0xfa410070  sqc2        $vf1, 0x70($s2)
    ctx->pc = 0x2148c4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2148c8: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x2148c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2148cc: 0x26420060  addiu       $v0, $s2, 0x60
    ctx->pc = 0x2148ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x2148d0: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x2148d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2148d4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2148d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2148d8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2148d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2148dc: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x2148dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2148e0: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x2148e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2148e4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2148e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2148e8: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x2148e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2148ec: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x2148ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2148f0: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x2148f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2148f4: 0xe7a30080  swc1        $f3, 0x80($sp)
    ctx->pc = 0x2148f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2148f8: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x2148f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2148fc: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x2148fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x214900: 0xe7a2008c  swc1        $f2, 0x8C($sp)
    ctx->pc = 0x214900u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x214904: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x214904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x214908: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x214908u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x21490c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x21490cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214910: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x214910u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x214914: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x214914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x214918: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x214918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21491c: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x21491cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214920: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x214920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214924: 0xc7a400ac  lwc1        $f4, 0xAC($sp)
    ctx->pc = 0x214924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x214928: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x214928u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x21492c: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x21492cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x214930: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x214930u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x214934: 0xe7a4009c  swc1        $f4, 0x9C($sp)
    ctx->pc = 0x214934u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x214938: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x214938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21493c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x21493cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x214940: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x214940u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x214944: 0xc6c20004  lwc1        $f2, 0x4($s6)
    ctx->pc = 0x214944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214948: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x214948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21494c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x21494cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x214950: 0xc6c20008  lwc1        $f2, 0x8($s6)
    ctx->pc = 0x214950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214954: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x214954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x214958: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x214958u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x21495c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x21495cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x214960: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x214960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214964: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x214964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x214968: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x214968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x21496c: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x21496cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214970: 0xc7a40038  lwc1        $f4, 0x38($sp)
    ctx->pc = 0x214970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x214974: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x214974u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x214978: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x214978u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x21497c: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x21497cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x214980: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x214980u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x214984: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x214984u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x214988: 0xe7a300a4  swc1        $f3, 0xA4($sp)
    ctx->pc = 0x214988u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x21498c: 0xe7a100ac  swc1        $f1, 0xAC($sp)
    ctx->pc = 0x21498cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x214990: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x214990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x214994: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x214994u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x214998: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x214998u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21499c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x21499cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2149a0: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x2149a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2149a4: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2149a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2149a8: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x2149a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2149ac: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x2149acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2149b0: 0xc7a300bc  lwc1        $f3, 0xBC($sp)
    ctx->pc = 0x2149b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2149b4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x2149b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2149b8: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x2149b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2149bc: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x2149bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2149c0: 0xe7a3009c  swc1        $f3, 0x9C($sp)
    ctx->pc = 0x2149c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x2149c4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2149c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2149c8: 0xdbc20000  lqc2        $vf2, 0x0($fp)
    ctx->pc = 0x2149c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2149cc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2149ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2149d0: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x2149d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2149d4: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2149d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2149d8: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x2149d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2149dc: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x2149dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2149e0: 0xc7a300bc  lwc1        $f3, 0xBC($sp)
    ctx->pc = 0x2149e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2149e4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2149e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2149e8: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x2149e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x2149ec: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x2149ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2149f0: 0xe7a300ac  swc1        $f3, 0xAC($sp)
    ctx->pc = 0x2149f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x2149f4: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2149f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2149f8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2149f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2149fc: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2149fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x214a00: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x214a00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x214a04: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x214a04u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x214a08: 0x4a0003bf  vwaitq
    ctx->pc = 0x214a08u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x214a0c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x214a0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x214a10: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x214a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x214a14: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x214a14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x214a18: 0xfa410060  sqc2        $vf1, 0x60($s2)
    ctx->pc = 0x214a18u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x214a1c: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x214a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x214a20: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x214a20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x214a24: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x214a24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x214a28: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x214a28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x214a2c: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x214a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x214a30: 0xc7a300c0  lwc1        $f3, 0xC0($sp)
    ctx->pc = 0x214a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x214a34: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x214a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x214a38: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x214a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214a3c: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x214a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214a40: 0xc7a200cc  lwc1        $f2, 0xCC($sp)
    ctx->pc = 0x214a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214a44: 0xe7a300b0  swc1        $f3, 0xB0($sp)
    ctx->pc = 0x214a44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x214a48: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x214a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x214a4c: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x214a4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x214a50: 0xe7a200bc  swc1        $f2, 0xBC($sp)
    ctx->pc = 0x214a50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x214a54: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x214a54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x214a58: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x214a58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x214a5c: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x214a5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x214a60: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x214a60u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x214a64: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x214a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x214a68: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x214a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214a6c: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x214a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214a70: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x214a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214a74: 0xc7a400dc  lwc1        $f4, 0xDC($sp)
    ctx->pc = 0x214a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x214a78: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x214a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x214a7c: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x214a7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x214a80: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x214a80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x214a84: 0xe7a400cc  swc1        $f4, 0xCC($sp)
    ctx->pc = 0x214a84u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x214a88: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x214a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214a8c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x214a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x214a90: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x214a90u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x214a94: 0xc6c20004  lwc1        $f2, 0x4($s6)
    ctx->pc = 0x214a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214a98: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x214a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x214a9c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x214a9cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x214aa0: 0xc6c20008  lwc1        $f2, 0x8($s6)
    ctx->pc = 0x214aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214aa4: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x214aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x214aa8: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x214aa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x214aac: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x214aacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x214ab0: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x214ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214ab4: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x214ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x214ab8: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x214ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214abc: 0xc7a40038  lwc1        $f4, 0x38($sp)
    ctx->pc = 0x214abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x214ac0: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x214ac0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x214ac4: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x214ac4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x214ac8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x214ac8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x214acc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x214accu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x214ad0: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x214ad0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x214ad4: 0xe7a300d4  swc1        $f3, 0xD4($sp)
    ctx->pc = 0x214ad4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x214ad8: 0xe7a100dc  swc1        $f1, 0xDC($sp)
    ctx->pc = 0x214ad8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x214adc: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x214adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x214ae0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x214ae0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x214ae4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x214ae4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214ae8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x214ae8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x214aec: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x214aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x214af0: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x214af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214af4: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x214af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214af8: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x214af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214afc: 0xc7a300ec  lwc1        $f3, 0xEC($sp)
    ctx->pc = 0x214afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x214b00: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x214b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x214b04: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x214b04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x214b08: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x214b08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x214b0c: 0xe7a300cc  swc1        $f3, 0xCC($sp)
    ctx->pc = 0x214b0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x214b10: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x214b10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214b14: 0xdbc20000  lqc2        $vf2, 0x0($fp)
    ctx->pc = 0x214b14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x214b18: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x214b18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x214b1c: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x214b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x214b20: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x214b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214b24: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x214b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214b28: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x214b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x214b2c: 0xc7a300ec  lwc1        $f3, 0xEC($sp)
    ctx->pc = 0x214b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x214b30: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x214b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x214b34: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x214b34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x214b38: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x214b38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x214b3c: 0xe7a300dc  swc1        $f3, 0xDC($sp)
    ctx->pc = 0x214b3cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x214b40: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x214b40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214b44: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x214b44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x214b48: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x214b48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x214b4c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x214b4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x214b50: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x214b50u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x214b54: 0x4a0003bf  vwaitq
    ctx->pc = 0x214b54u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x214b58: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x214b58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x214b5c: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x214b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x214b60: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x214b60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214b64: 0xfa410040  sqc2        $vf1, 0x40($s2)
    ctx->pc = 0x214b64u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x214b68: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x214b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x214b6c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x214b6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x214b70: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x214b70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214b74: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x214b74u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x214b78: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x214b78u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x214b7c: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x214b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x214b80: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x214b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x214b84: 0xc7a500f4  lwc1        $f5, 0xF4($sp)
    ctx->pc = 0x214b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x214b88: 0xc7a600f8  lwc1        $f6, 0xF8($sp)
    ctx->pc = 0x214b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x214b8c: 0x460008c7  neg.s       $f3, $f1
    ctx->pc = 0x214b8cu;
    ctx->f[3] = FPU_NEG_S(ctx->f[1]);
    // 0x214b90: 0x46002907  neg.s       $f4, $f5
    ctx->pc = 0x214b90u;
    ctx->f[4] = FPU_NEG_S(ctx->f[5]);
    // 0x214b94: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x214b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x214b98: 0x46003087  neg.s       $f2, $f6
    ctx->pc = 0x214b98u;
    ctx->f[2] = FPU_NEG_S(ctx->f[6]);
    // 0x214b9c: 0xe7a100e0  swc1        $f1, 0xE0($sp)
    ctx->pc = 0x214b9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x214ba0: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x214ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x214ba4: 0xe7a300f0  swc1        $f3, 0xF0($sp)
    ctx->pc = 0x214ba4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x214ba8: 0xe7a400f4  swc1        $f4, 0xF4($sp)
    ctx->pc = 0x214ba8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x214bac: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x214bacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x214bb0: 0xe7a500e4  swc1        $f5, 0xE4($sp)
    ctx->pc = 0x214bb0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x214bb4: 0xe7a600e8  swc1        $f6, 0xE8($sp)
    ctx->pc = 0x214bb4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x214bb8: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x214bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
    // 0x214bbc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x214bbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214bc0: 0xfa410050  sqc2        $vf1, 0x50($s2)
    ctx->pc = 0x214bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x214bc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x214bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214bc8: 0xc0c48da  jal         func_312368
    ctx->pc = 0x214BC8u;
    SET_GPR_U32(ctx, 31, 0x214BD0u);
    ctx->pc = 0x214BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214BC8u;
    // 0x214bcc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x214BC8u, 0x214BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214BD0u;
label_214bd0:
    // 0x214bd0: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x214bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x214bd4: 0xc0c324e  jal         func_30C938
    ctx->pc = 0x214BD4u;
    SET_GPR_U32(ctx, 31, 0x214BDCu);
    ctx->pc = 0x214BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214BD4u;
    // 0x214bd8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C938u, 0x214BD4u, 0x214BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214BDCu;
label_214bdc:
    // 0x214bdc: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x214bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x214be0: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x214be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x214be4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x214be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x214be8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x214be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x214bec: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x214BECu;
    {
        const bool branch_taken_0x214bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x214bec) {
            ctx->pc = 0x214C14u;
            goto label_214c14;
        }
    }
    ctx->pc = 0x214BF4u;
    // 0x214bf4: 0xc0c3158  jal         func_30C560
    ctx->pc = 0x214BF4u;
    SET_GPR_U32(ctx, 31, 0x214BFCu);
    ctx->pc = 0x214BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214BF4u;
    // 0x214bf8: 0x8e240104  lw          $a0, 0x104($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C560u, 0x214BF4u, 0x214BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214BFCu;
label_214bfc:
    // 0x214bfc: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x214bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x214c00: 0xc0c3158  jal         func_30C560
    ctx->pc = 0x214C00u;
    SET_GPR_U32(ctx, 31, 0x214C08u);
    ctx->pc = 0x214C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214C00u;
    // 0x214c04: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C560u, 0x214C00u, 0x214C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214C08u;
label_214c08:
    // 0x214c08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x214c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214c0c: 0xc0c23a6  jal         func_308E98
    ctx->pc = 0x214C0Cu;
    SET_GPR_U32(ctx, 31, 0x214C14u);
    ctx->pc = 0x214C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214C0Cu;
    // 0x214c10: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308E98u, 0x214C0Cu, 0x214C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214C14u;
label_214c14:
    // 0x214c14: 0x52800009  beql        $s4, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x214C14u;
    {
        const bool branch_taken_0x214c14 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x214c14) {
            ctx->pc = 0x214C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214C14u;
            // 0x214c18: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214C3Cu;
            goto label_214c3c;
        }
    }
    ctx->pc = 0x214C1Cu;
    // 0x214c1c: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x214c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x214c20: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x214C20u;
    {
        const bool branch_taken_0x214c20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x214c20) {
            ctx->pc = 0x214C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x214C20u;
            // 0x214c24: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214C3Cu;
            goto label_214c3c;
        }
    }
    ctx->pc = 0x214C28u;
    // 0x214c28: 0xc07508a  jal         func_1D4228
    ctx->pc = 0x214C28u;
    SET_GPR_U32(ctx, 31, 0x214C30u);
    ctx->pc = 0x214C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214C28u;
    // 0x214c2c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4228u, 0x214C28u, 0x214C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214C30u;
label_214c30:
    // 0x214c30: 0xc07509e  jal         func_1D4278
    ctx->pc = 0x214C30u;
    SET_GPR_U32(ctx, 31, 0x214C38u);
    ctx->pc = 0x214C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214C30u;
    // 0x214c34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4278u, 0x214C30u, 0x214C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214C38u;
label_214c38:
    // 0x214c38: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x214c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_214c3c:
    // 0x214c3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x214c3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214c40: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x214c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x214c44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x214c44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214c48: 0x904600b1  lbu         $a2, 0xB1($v0)
    ctx->pc = 0x214c48u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 177)));
    // 0x214c4c: 0x92250144  lbu         $a1, 0x144($s1)
    ctx->pc = 0x214c4cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 324)));
    // 0x214c50: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x214c50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x214c54: 0xc0c2ecc  jal         func_30BB30
    ctx->pc = 0x214C54u;
    SET_GPR_U32(ctx, 31, 0x214C5Cu);
    ctx->pc = 0x214C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214C54u;
    // 0x214c58: 0x38c60001  xori        $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BB30u, 0x214C54u, 0x214C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214C5Cu;
label_214c5c:
    // 0x214c5c: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x214c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x214c60: 0xc0c324e  jal         func_30C938
    ctx->pc = 0x214C60u;
    SET_GPR_U32(ctx, 31, 0x214C68u);
    ctx->pc = 0x214C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214C60u;
    // 0x214c64: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C938u, 0x214C60u, 0x214C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214C68u;
label_214c68:
    // 0x214c68: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x214c68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x214c6c: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x214c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x214c70: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x214c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x214c74: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x214c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x214c78: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x214C78u;
    {
        const bool branch_taken_0x214c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x214c78) {
            ctx->pc = 0x214C9Cu;
            goto label_214c9c;
        }
    }
    ctx->pc = 0x214C80u;
    // 0x214c80: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x214C80u;
    {
        const bool branch_taken_0x214c80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x214c80) {
            ctx->pc = 0x214C9Cu;
            goto label_214c9c;
        }
    }
    ctx->pc = 0x214C88u;
    // 0x214c88: 0xc0c3158  jal         func_30C560
    ctx->pc = 0x214C88u;
    SET_GPR_U32(ctx, 31, 0x214C90u);
    ctx->pc = 0x214C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214C88u;
    // 0x214c8c: 0x8e240104  lw          $a0, 0x104($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C560u, 0x214C88u, 0x214C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214C90u;
label_214c90:
    // 0x214c90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x214c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214c94: 0xc0c23a6  jal         func_308E98
    ctx->pc = 0x214C94u;
    SET_GPR_U32(ctx, 31, 0x214C9Cu);
    ctx->pc = 0x214C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214C94u;
    // 0x214c98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x308E98u, 0x214C94u, 0x214C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214C9Cu;
label_214c9c:
    // 0x214c9c: 0x1280000e  beqz        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x214C9Cu;
    {
        const bool branch_taken_0x214c9c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x214CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214C9Cu;
        // 0x214ca0: 0xdfb00110  ld          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214c9c) {
            ctx->pc = 0x214CD8u;
            goto label_214cd8;
        }
    }
    ctx->pc = 0x214CA4u;
    // 0x214ca4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x214ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x214ca8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x214CA8u;
    {
        const bool branch_taken_0x214ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x214CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214CA8u;
        // 0x214cac: 0xdfb10118  ld          $s1, 0x118($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214ca8) {
            ctx->pc = 0x214CDCu;
            goto label_214cdc;
        }
    }
    ctx->pc = 0x214CB0u;
    // 0x214cb0: 0xc0c4970  jal         func_3125C0
    ctx->pc = 0x214CB0u;
    SET_GPR_U32(ctx, 31, 0x214CB8u);
    ctx->pc = 0x214CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214CB0u;
    // 0x214cb4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3125C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3125C0u, 0x214CB0u, 0x214CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214CB8u;
label_214cb8:
    // 0x214cb8: 0xc0c48da  jal         func_312368
    ctx->pc = 0x214CB8u;
    SET_GPR_U32(ctx, 31, 0x214CC0u);
    ctx->pc = 0x214CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214CB8u;
    // 0x214cbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x214CB8u, 0x214CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214CC0u;
label_214cc0:
    // 0x214cc0: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x214cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x214cc4: 0xc07508a  jal         func_1D4228
    ctx->pc = 0x214CC4u;
    SET_GPR_U32(ctx, 31, 0x214CCCu);
    ctx->pc = 0x214CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214CC4u;
    // 0x214cc8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4228u, 0x214CC4u, 0x214CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214CCCu;
label_214ccc:
    // 0x214ccc: 0xc07509e  jal         func_1D4278
    ctx->pc = 0x214CCCu;
    SET_GPR_U32(ctx, 31, 0x214CD4u);
    ctx->pc = 0x214CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214CCCu;
    // 0x214cd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4278u, 0x214CCCu, 0x214CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214CD4u;
label_214cd4:
    // 0x214cd4: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x214cd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_214cd8:
    // 0x214cd8: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x214cd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
label_214cdc:
    // 0x214cdc: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x214cdcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x214ce0: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x214ce0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x214ce4: 0xdfb40130  ld          $s4, 0x130($sp)
    ctx->pc = 0x214ce4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x214ce8: 0xdfb50138  ld          $s5, 0x138($sp)
    ctx->pc = 0x214ce8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x214cec: 0xdfb60140  ld          $s6, 0x140($sp)
    ctx->pc = 0x214cecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x214cf0: 0xdfb70148  ld          $s7, 0x148($sp)
    ctx->pc = 0x214cf0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x214cf4: 0xdfbe0150  ld          $fp, 0x150($sp)
    ctx->pc = 0x214cf4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x214cf8: 0xdfbf0158  ld          $ra, 0x158($sp)
    ctx->pc = 0x214cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x214cfc: 0xc7b50168  lwc1        $f21, 0x168($sp)
    ctx->pc = 0x214cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x214d00: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x214d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x214d04: 0x3e00008  jr          $ra
    ctx->pc = 0x214D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214D04u;
        // 0x214d08: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214D0Cu;
    // 0x214d0c: 0x0  nop
    ctx->pc = 0x214d0cu;
    // NOP
    ctx->pc = 0x214d10u;
}

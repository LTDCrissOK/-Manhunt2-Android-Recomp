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

// Function: sub_00346570
// Address: 0x346570 - 0x3466b8
void sub_00346570_0x346570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346570_0x346570");
#endif

    switch (ctx->pc) {
        case 0x3465ccu: goto label_3465cc;
        default: break;
    }

    ctx->pc = 0x346570u;

    // 0x346570: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x346570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x346574: 0x3c06005c  lui         $a2, 0x5C
    ctx->pc = 0x346574u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)92 << 16));
    // 0x346578: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x346578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x34657c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x34657cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x346580: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x346580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346584: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x346584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x346588: 0x3c11005c  lui         $s1, 0x5C
    ctx->pc = 0x346588u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)92 << 16));
    // 0x34658c: 0x8cc2b600  lw          $v0, -0x4A00($a2)
    ctx->pc = 0x34658cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BB600u));
    // 0x346590: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x346590u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346594: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x346594u;
    {
        const bool branch_taken_0x346594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x346598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346594u;
        // 0x346598: 0xffbf0058  sd          $ra, 0x58($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346594) {
            ctx->pc = 0x3465CCu;
            goto label_3465cc;
        }
    }
    ctx->pc = 0x34659Cu;
    // 0x34659c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34659cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3465a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3465a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3465a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3465a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3465a8: 0x2623b5f0  addiu       $v1, $s1, -0x4A10
    ctx->pc = 0x3465a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294948336));
    // 0x3465ac: 0xacc2b600  sw          $v0, -0x4A00($a2)
    ctx->pc = 0x3465acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294948352), GPR_U32(ctx, 2));
    // 0x3465b0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3465b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3465b4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x3465b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x3465b8: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x3465b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x3465bc: 0x24846568  addiu       $a0, $a0, 0x6568
    ctx->pc = 0x3465bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25960));
    // 0x3465c0: 0xe620b5f0  swc1        $f0, -0x4A10($s1)
    ctx->pc = 0x3465c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294948336), bits); }
    // 0x3465c4: 0xc0f0278  jal         func_3C09E0
    ctx->pc = 0x3465C4u;
    SET_GPR_U32(ctx, 31, 0x3465CCu);
    ctx->pc = 0x3465C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3465C4u;
    // 0x3465c8: 0xe4600004  swc1        $f0, 0x4($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C09E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09E0u, 0x3465C4u, 0x3465CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3465CCu;
label_3465cc:
    // 0x3465cc: 0x2622b5f0  addiu       $v0, $s1, -0x4A10
    ctx->pc = 0x3465ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294948336));
    // 0x3465d0: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x3465d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x3465d4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3465d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3465d8: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x3465d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3465dc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3465dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3465e0: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x3465e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3465e4: 0xc7a40030  lwc1        $f4, 0x30($sp)
    ctx->pc = 0x3465e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3465e8: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x3465e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x3465ec: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x3465ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3465f0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3465f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3465f4: 0xc7a50038  lwc1        $f5, 0x38($sp)
    ctx->pc = 0x3465f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3465f8: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x3465f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3465fc: 0x8e030118  lw          $v1, 0x118($s0)
    ctx->pc = 0x3465fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x346600: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x346600u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x346604: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x346604u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x346608: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x346608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x34660c: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x34660cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x346610: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x346610u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x346614: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x346614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x346618: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x346618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34661c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x34661cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346620: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x346620u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x346624: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x346624u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x346628: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x346628u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x34662c: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x34662cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x346630: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x346630u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x346634: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x346634u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x346638: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x346638u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x34663c: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x34663cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x346640: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x346640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x346644: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x346644u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x346648: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x346648u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x34664c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34664cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x346650: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x346650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x346654: 0xc7a40030  lwc1        $f4, 0x30($sp)
    ctx->pc = 0x346654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x346658: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x346658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34665c: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x34665cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x346660: 0xc7a3003c  lwc1        $f3, 0x3C($sp)
    ctx->pc = 0x346660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x346664: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x346664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x346668: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x346668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x34666c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x34666cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x346670: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x346670u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x346674: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x346674u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x346678: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x346678u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x34667c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x34667cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x346680: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x346680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x346684: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x346684u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x346688: 0xe441001c  swc1        $f1, 0x1C($v0)
    ctx->pc = 0x346688u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x34668c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x34668cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x346690: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x346690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
    // 0x346694: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x346694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x346698: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x346698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34669c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x34669cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3466a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3466a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3466a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3466a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3466a8: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3466a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3466ac: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x3466acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x3466b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3466B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3466B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3466B0u;
        // 0x3466b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3466B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3466B8u;
}

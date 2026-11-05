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

// Function: sub_00250600
// Address: 0x250600 - 0x250890
void sub_00250600_0x250600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250600_0x250600");
#endif

    switch (ctx->pc) {
        case 0x25062cu: goto label_25062c;
        case 0x250634u: goto label_250634;
        case 0x250698u: goto label_250698;
        case 0x250844u: goto label_250844;
        case 0x250860u: goto label_250860;
        default: break;
    }

    ctx->pc = 0x250600u;

    // 0x250600: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x250600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x250604: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x250604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x250608: 0xffb30128  sd          $s3, 0x128($sp)
    ctx->pc = 0x250608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 19));
    // 0x25060c: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x25060cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x250610: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x250610u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250614: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x250614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x250618: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x250618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x25061c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25061cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250620: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x250620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x250624: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x250624u;
    SET_GPR_U32(ctx, 31, 0x25062Cu);
    ctx->pc = 0x250628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250624u;
    // 0x250628: 0xe7b40140  swc1        $f20, 0x140($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x250624u, 0x25062Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25062Cu;
label_25062c:
    // 0x25062c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x25062Cu;
    SET_GPR_U32(ctx, 31, 0x250634u);
    ctx->pc = 0x250630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25062Cu;
    // 0x250630: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x25062Cu, 0x250634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250634u;
label_250634:
    // 0x250634: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x250634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x250638: 0x27b10060  addiu       $s1, $sp, 0x60
    ctx->pc = 0x250638u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x25063c: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x25063cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x250640: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x250640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x250644: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x250644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x250648: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x250648u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25064c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x25064cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x250650: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x250650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x250654: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x250654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x250658: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x250658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x25065c: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x25065cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x250660: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x250660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x250664: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x250664u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x250668: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x250668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x25066c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x25066cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x250670: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x250670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x250674: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x250674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x250678: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x250678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x25067c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x25067cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x250680: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x250680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x250684: 0x27b20070  addiu       $s2, $sp, 0x70
    ctx->pc = 0x250684u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x250688: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x250688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x25068c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x25068cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250690: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x250690u;
    SET_GPR_U32(ctx, 31, 0x250698u);
    ctx->pc = 0x250694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250690u;
    // 0x250694: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x250690u, 0x250698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250698u;
label_250698:
    // 0x250698: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x250698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x25069c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x25069cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2506a0: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x2506a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x2506a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2506a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2506a8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2506a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2506ac: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2506acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2506b0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2506b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2506b4: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x2506b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2506b8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2506b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2506bc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2506bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2506c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2506c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2506c4: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x2506c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x2506c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2506c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2506cc: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x2506ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2506d0: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x2506d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x2506d4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2506d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2506d8: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2506d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2506dc: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x2506dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2506e0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2506e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2506e4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2506e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2506e8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2506e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2506ec: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x2506ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2506f0: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x2506f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2506f4: 0xe7a2006c  swc1        $f2, 0x6C($sp)
    ctx->pc = 0x2506f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x2506f8: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x2506f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2506fc: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2506fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x250700: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x250700u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x250704: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x250704u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x250708: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x250708u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x25070c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x25070cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x250710: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x250710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x250714: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x250714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x250718: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x250718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x25071c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x25071cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x250720: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x250720u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x250724: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x250724u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x250728: 0x0  nop
    ctx->pc = 0x250728u;
    // NOP
    // 0x25072c: 0x0  nop
    ctx->pc = 0x25072cu;
    // NOP
    // 0x250730: 0x46000044  c1          0x44
    ctx->pc = 0x250730u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x250734: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x250734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x250738: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x250738u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x25073c: 0x0  nop
    ctx->pc = 0x25073cu;
    // NOP
    // 0x250740: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x250740u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x250744: 0x0  nop
    ctx->pc = 0x250744u;
    // NOP
    // 0x250748: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x250748u;
    {
        const bool branch_taken_0x250748 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250748u;
        // 0x25074c: 0xe7a10050  swc1        $f1, 0x50($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x250748) {
            ctx->pc = 0x250774u;
            goto label_250774;
        }
    }
    ctx->pc = 0x250750u;
    // 0x250750: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x250750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x250754: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x250754u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250758: 0x0  nop
    ctx->pc = 0x250758u;
    // NOP
    // 0x25075c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x25075cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x250760: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x250760u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x250764: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x250764u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x250768: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x250768u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x25076c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x25076cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x250770: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x250770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_250774:
    // 0x250774: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x250774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x250778: 0xe7a500e0  swc1        $f5, 0xE0($sp)
    ctx->pc = 0x250778u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x25077c: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x25077cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x250780: 0xe7a500e8  swc1        $f5, 0xE8($sp)
    ctx->pc = 0x250780u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x250784: 0xe7a500ec  swc1        $f5, 0xEC($sp)
    ctx->pc = 0x250784u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x250788: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x250788u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25078c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x25078cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x250790: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x250790u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x250794: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x250794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x250798: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x250798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25079c: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x25079cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2507a0: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x2507a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2507a4: 0xc7a300fc  lwc1        $f3, 0xFC($sp)
    ctx->pc = 0x2507a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2507a8: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2507a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2507ac: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x2507acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2507b0: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x2507b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2507b4: 0xe7a300dc  swc1        $f3, 0xDC($sp)
    ctx->pc = 0x2507b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2507b8: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x2507b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2507bc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2507bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2507c0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2507c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2507c4: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x2507c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2507c8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2507c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2507cc: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2507ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2507d0: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2507d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2507d4: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2507d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2507d8: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x2507d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2507dc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2507dcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2507e0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2507e0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2507e4: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x2507e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2507e8: 0x0  nop
    ctx->pc = 0x2507e8u;
    // NOP
    // 0x2507ec: 0x0  nop
    ctx->pc = 0x2507ecu;
    // NOP
    // 0x2507f0: 0x46000044  c1          0x44
    ctx->pc = 0x2507f0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x2507f4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2507f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2507f8: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x2507f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2507fc: 0x0  nop
    ctx->pc = 0x2507fcu;
    // NOP
    // 0x250800: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x250800u;
    {
        const bool branch_taken_0x250800 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x250804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250800u;
        // 0x250804: 0xe7a10050  swc1        $f1, 0x50($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x250800) {
            ctx->pc = 0x25082Cu;
            goto label_25082c;
        }
    }
    ctx->pc = 0x250808u;
    // 0x250808: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x250808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25080c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25080cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x250810: 0x0  nop
    ctx->pc = 0x250810u;
    // NOP
    // 0x250814: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x250814u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x250818: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x250818u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x25081c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x25081cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x250820: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x250820u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x250824: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x250824u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x250828: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x250828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_25082c:
    // 0x25082c: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x25082cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x250830: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x250830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250834: 0x34a57210  ori         $a1, $a1, 0x7210
    ctx->pc = 0x250834u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)29200);
    // 0x250838: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x250838u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25083c: 0xc077912  jal         func_1DE448
    ctx->pc = 0x25083Cu;
    SET_GPR_U32(ctx, 31, 0x250844u);
    ctx->pc = 0x250840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25083Cu;
    // 0x250840: 0x27a70100  addiu       $a3, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE448u, 0x25083Cu, 0x250844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250844u;
label_250844:
    // 0x250844: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x250844u;
    {
        const bool branch_taken_0x250844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250844u;
        // 0x250848: 0xc7a10064  lwc1        $f1, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x250844) {
            ctx->pc = 0x250860u;
            goto label_250860;
        }
    }
    ctx->pc = 0x25084Cu;
    // 0x25084c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x25084cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250850: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x250850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x250854: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x250854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x250858: 0xc0899d4  jal         func_226750
    ctx->pc = 0x250858u;
    SET_GPR_U32(ctx, 31, 0x250860u);
    ctx->pc = 0x25085Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250858u;
    // 0x25085c: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226750u, 0x250858u, 0x250860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250860u;
label_250860:
    // 0x250860: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x250860u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x250864: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x250864u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x250868: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x250868u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x25086c: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x25086cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x250870: 0xdfb30128  ld          $s3, 0x128($sp)
    ctx->pc = 0x250870u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x250874: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x250874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x250878: 0xc7b40140  lwc1        $f20, 0x140($sp)
    ctx->pc = 0x250878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x25087c: 0x3e00008  jr          $ra
    ctx->pc = 0x25087Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25087Cu;
        // 0x250880: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25087Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250884u;
    // 0x250884: 0x0  nop
    ctx->pc = 0x250884u;
    // NOP
    // 0x250888: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x250888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25088c: 0x0  nop
    ctx->pc = 0x25088cu;
    // NOP
    ctx->pc = 0x250890u;
}

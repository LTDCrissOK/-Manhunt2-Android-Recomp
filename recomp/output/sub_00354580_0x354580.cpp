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

// Function: sub_00354580
// Address: 0x354580 - 0x354720
void sub_00354580_0x354580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00354580_0x354580");
#endif

    switch (ctx->pc) {
        case 0x35459cu: goto label_35459c;
        case 0x3545a4u: goto label_3545a4;
        case 0x354624u: goto label_354624;
        case 0x35462cu: goto label_35462c;
        case 0x3546c4u: goto label_3546c4;
        default: break;
    }

    ctx->pc = 0x354580u;

    // 0x354580: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x354580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x354584: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x354584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x354588: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x354588u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35458c: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x35458cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x354590: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x354590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x354594: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x354594u;
    SET_GPR_U32(ctx, 31, 0x35459Cu);
    ctx->pc = 0x354598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354594u;
    // 0x354598: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x354594u, 0x35459Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35459Cu;
label_35459c:
    // 0x35459c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x35459Cu;
    SET_GPR_U32(ctx, 31, 0x3545A4u);
    ctx->pc = 0x3545A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35459Cu;
    // 0x3545a0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35459Cu, 0x3545A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3545A4u;
label_3545a4:
    // 0x3545a4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3545A4u;
    {
        const bool branch_taken_0x3545a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3545A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3545A4u;
        // 0x3545a8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3545a4) {
            ctx->pc = 0x3545C8u;
            goto label_3545c8;
        }
    }
    ctx->pc = 0x3545ACu;
    // 0x3545ac: 0x8c44bd48  lw          $a0, -0x42B8($v0)
    ctx->pc = 0x3545acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950216)));
    // 0x3545b0: 0x8c830100  lw          $v1, 0x100($a0)
    ctx->pc = 0x3545b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x3545b4: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x3545b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x3545b8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3545b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3545bc: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x3545bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3545c0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3545C0u;
    {
        const bool branch_taken_0x3545c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3545c0) {
            ctx->pc = 0x3545FCu;
            goto label_3545fc;
        }
    }
    ctx->pc = 0x3545C8u;
label_3545c8:
    // 0x3545c8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3545c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3545cc: 0x8c43bd50  lw          $v1, -0x42B0($v0)
    ctx->pc = 0x3545ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x3545d0: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x3545d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x3545d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3545d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3545d8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x3545d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x3545dc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3545dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3545e0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x3545e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3545e4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3545e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3545e8: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3545e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x3545ec: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3545ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3545f0: 0x0  nop
    ctx->pc = 0x3545f0u;
    // NOP
    // 0x3545f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3545f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3545f8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3545f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3545fc:
    // 0x3545fc: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x3545fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354600: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x354600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x354604: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x354604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x354608: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x354608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x35460c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x35460cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x354610: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x354610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x354614: 0x0  nop
    ctx->pc = 0x354614u;
    // NOP
    // 0x354618: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x354618u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x35461c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x35461Cu;
    SET_GPR_U32(ctx, 31, 0x354624u);
    ctx->pc = 0x354620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35461Cu;
    // 0x354620: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x35461Cu, 0x354624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x354624u;
label_354624:
    // 0x354624: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x354624u;
    SET_GPR_U32(ctx, 31, 0x35462Cu);
    ctx->pc = 0x354628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x354624u;
    // 0x354628: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x354624u, 0x35462Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35462Cu;
label_35462c:
    // 0x35462c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x35462cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x354630: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x354630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x354634: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x354634u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x354638: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x354638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x35463c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x35463cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x354640: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x354640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x354644: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x354644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x354648: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x354648u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35464c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x35464cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x354650: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x354650u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x354654: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x354654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x354658: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x354658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35465c: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x35465cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x354660: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x354660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x354664: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x354664u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x354668: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x354668u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x35466c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x35466cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x354670: 0x0  nop
    ctx->pc = 0x354670u;
    // NOP
    // 0x354674: 0x0  nop
    ctx->pc = 0x354674u;
    // NOP
    // 0x354678: 0x46000044  c1          0x44
    ctx->pc = 0x354678u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x35467c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x35467cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x354680: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x354680u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x354684: 0x0  nop
    ctx->pc = 0x354684u;
    // NOP
    // 0x354688: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x354688u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x35468c: 0x0  nop
    ctx->pc = 0x35468cu;
    // NOP
    // 0x354690: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x354690u;
    {
        const bool branch_taken_0x354690 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x354694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354690u;
        // 0x354694: 0xe7a10070  swc1        $f1, 0x70($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x354690) {
            ctx->pc = 0x3546BCu;
            goto label_3546bc;
        }
    }
    ctx->pc = 0x354698u;
    // 0x354698: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x354698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x35469c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x35469cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3546a0: 0x0  nop
    ctx->pc = 0x3546a0u;
    // NOP
    // 0x3546a4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3546a4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3546a8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3546a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3546ac: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x3546acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3546b0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x3546b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x3546b4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x3546b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3546b8: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x3546b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_3546bc:
    // 0x3546bc: 0xc0779a4  jal         func_1DE690
    ctx->pc = 0x3546BCu;
    SET_GPR_U32(ctx, 31, 0x3546C4u);
    ctx->pc = 0x3546C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3546BCu;
    // 0x3546c0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE690u, 0x3546BCu, 0x3546C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3546C4u;
label_3546c4:
    // 0x3546c4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3546C4u;
    {
        const bool branch_taken_0x3546c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3546C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3546C4u;
        // 0x3546c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3546c4) {
            ctx->pc = 0x3546F0u;
            goto label_3546f0;
        }
    }
    ctx->pc = 0x3546CCu;
    // 0x3546cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3546ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3546d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3546d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3546d4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3546d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3546d8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3546d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3546dc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3546dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3546e0: 0xa0642d10  sb          $a0, 0x2D10($v1)
    ctx->pc = 0x3546e0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x482D10u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x482D10u, _value); } while (0);
    // 0x3546e4: 0xe4402be4  swc1        $f0, 0x2BE4($v0)
    ctx->pc = 0x3546e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x482BE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482BE4u, _value); } while (0); }
    // 0x3546e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3546E8u;
    {
        const bool branch_taken_0x3546e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3546ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3546E8u;
        // 0x3546ec: 0xa0a42d11  sb          $a0, 0x2D11($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 11537), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3546e8) {
            ctx->pc = 0x354708u;
            goto label_354708;
        }
    }
    ctx->pc = 0x3546F0u;
label_3546f0:
    // 0x3546f0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3546f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3546f4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3546f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3546f8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3546f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3546fc: 0xa0602d11  sb          $zero, 0x2D11($v1)
    ctx->pc = 0x3546fcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482D11u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x482D11u, _value); } while (0);
    // 0x354700: 0xe4942be4  swc1        $f20, 0x2BE4($a0)
    ctx->pc = 0x354700u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x482BE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482BE4u, _value); } while (0); }
    // 0x354704: 0xa0402d10  sb          $zero, 0x2D10($v0)
    ctx->pc = 0x354704u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482D10u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x482D10u, _value); } while (0);
label_354708:
    // 0x354708: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x354708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x35470c: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x35470cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x354710: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x354710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x354714: 0x3e00008  jr          $ra
    ctx->pc = 0x354714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x354718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x354714u;
        // 0x354718: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x354714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35471Cu;
    // 0x35471c: 0x0  nop
    ctx->pc = 0x35471cu;
    // NOP
    ctx->pc = 0x354720u;
}

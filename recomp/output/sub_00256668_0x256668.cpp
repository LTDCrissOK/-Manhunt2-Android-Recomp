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

// Function: sub_00256668
// Address: 0x256668 - 0x256a60
void sub_00256668_0x256668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256668_0x256668");
#endif

    switch (ctx->pc) {
        case 0x256694u: goto label_256694;
        case 0x25669cu: goto label_25669c;
        case 0x2566a4u: goto label_2566a4;
        case 0x2566acu: goto label_2566ac;
        case 0x2566c0u: goto label_2566c0;
        case 0x2566c8u: goto label_2566c8;
        case 0x2566d0u: goto label_2566d0;
        case 0x2566dcu: goto label_2566dc;
        case 0x2566ecu: goto label_2566ec;
        case 0x256a38u: goto label_256a38;
        case 0x256a40u: goto label_256a40;
        default: break;
    }

    ctx->pc = 0x256668u;

    // 0x256668: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x256668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x25666c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x25666cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x256670: 0xffb000f0  sd          $s0, 0xF0($sp)
    ctx->pc = 0x256670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 16));
    // 0x256674: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x256674u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256678: 0xffb100f8  sd          $s1, 0xF8($sp)
    ctx->pc = 0x256678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 17));
    // 0x25667c: 0xffb20100  sd          $s2, 0x100($sp)
    ctx->pc = 0x25667cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 18));
    // 0x256680: 0x8c43bcf0  lw          $v1, -0x4310($v0)
    ctx->pc = 0x256680u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBCF0u));
    // 0x256684: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x256684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x256688: 0xffb30108  sd          $s3, 0x108($sp)
    ctx->pc = 0x256688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 19));
    // 0x25668c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x25668Cu;
    SET_GPR_U32(ctx, 31, 0x256694u);
    ctx->pc = 0x256690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25668Cu;
    // 0x256690: 0x8c730000  lw          $s3, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x25668Cu, 0x256694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256694u;
label_256694:
    // 0x256694: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x256694u;
    SET_GPR_U32(ctx, 31, 0x25669Cu);
    ctx->pc = 0x256698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256694u;
    // 0x256698: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x256694u, 0x25669Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25669Cu;
label_25669c:
    // 0x25669c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x25669Cu;
    SET_GPR_U32(ctx, 31, 0x2566A4u);
    ctx->pc = 0x2566A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25669Cu;
    // 0x2566a0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x25669Cu, 0x2566A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2566A4u;
label_2566a4:
    // 0x2566a4: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2566A4u;
    SET_GPR_U32(ctx, 31, 0x2566ACu);
    ctx->pc = 0x2566A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2566A4u;
    // 0x2566a8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2566A4u, 0x2566ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2566ACu;
label_2566ac:
    // 0x2566ac: 0x27b20070  addiu       $s2, $sp, 0x70
    ctx->pc = 0x2566acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2566b0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2566b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2566b4: 0x8c51bd48  lw          $s1, -0x42B8($v0)
    ctx->pc = 0x2566b4u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x2566b8: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2566B8u;
    SET_GPR_U32(ctx, 31, 0x2566C0u);
    ctx->pc = 0x2566BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2566B8u;
    // 0x2566bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2566B8u, 0x2566C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2566C0u;
label_2566c0:
    // 0x2566c0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2566C0u;
    SET_GPR_U32(ctx, 31, 0x2566C8u);
    ctx->pc = 0x2566C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2566C0u;
    // 0x2566c4: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2566C0u, 0x2566C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2566C8u;
label_2566c8:
    // 0x2566c8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2566C8u;
    SET_GPR_U32(ctx, 31, 0x2566D0u);
    ctx->pc = 0x2566CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2566C8u;
    // 0x2566cc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2566C8u, 0x2566D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2566D0u;
label_2566d0:
    // 0x2566d0: 0x8e300100  lw          $s0, 0x100($s1)
    ctx->pc = 0x2566d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x2566d4: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x2566D4u;
    SET_GPR_U32(ctx, 31, 0x2566DCu);
    ctx->pc = 0x2566D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2566D4u;
    // 0x2566d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2566D4u, 0x2566DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2566DCu;
label_2566dc:
    // 0x2566dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2566DCu;
    {
        const bool branch_taken_0x2566dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2566E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2566DCu;
        // 0x2566e0: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2566dc) {
            ctx->pc = 0x2566F0u;
            goto label_2566f0;
        }
    }
    ctx->pc = 0x2566E4u;
    // 0x2566e4: 0xc0c4900  jal         func_312400
    ctx->pc = 0x2566E4u;
    SET_GPR_U32(ctx, 31, 0x2566ECu);
    ctx->pc = 0x2566E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2566E4u;
    // 0x2566e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x2566E4u, 0x2566ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2566ECu;
label_2566ec:
    // 0x2566ec: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x2566ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_2566f0:
    // 0x2566f0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2566f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2566f4: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x2566f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2566f8: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2566f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2566fc: 0x26020090  addiu       $v0, $s0, 0x90
    ctx->pc = 0x2566fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x256700: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x256700u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256704: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x256704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x256708: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x256708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x25670c: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x25670cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x256710: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x256710u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256714: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x256714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x256718: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x256718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x25671c: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x25671cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x256720: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x256720u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x256724: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x256724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x256728: 0xc62000e0  lwc1        $f0, 0xE0($s1)
    ctx->pc = 0x256728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25672c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x25672cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x256730: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x256730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x256734: 0x0  nop
    ctx->pc = 0x256734u;
    // NOP
    // 0x256738: 0x460031c3  div.s       $f7, $f6, $f0
    ctx->pc = 0x256738u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[6], ctx->f[0]); }
    // 0x25673c: 0x44023800  mfc1        $v0, $f7
    ctx->pc = 0x25673cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x256740: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x256740u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x256744: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x256744u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x256748: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x256748u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x25674c: 0xfa410040  sqc2        $vf1, 0x40($s2)
    ctx->pc = 0x25674cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x256750: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x256750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x256754: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x256754u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x256758: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x256758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x25675c: 0x44083800  mfc1        $t0, $f7
    ctx->pc = 0x25675cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x256760: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x256760u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x256764: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x256764u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x256768: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x256768u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x25676c: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x25676cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x256770: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x256770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x256774: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x256774u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256778: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x256778u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25677c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x25677cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x256780: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x256780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x256784: 0xc7a300e0  lwc1        $f3, 0xE0($sp)
    ctx->pc = 0x256784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x256788: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x256788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x25678c: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x25678cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256790: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x256790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256794: 0xc7a200ec  lwc1        $f2, 0xEC($sp)
    ctx->pc = 0x256794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x256798: 0xe7a300d0  swc1        $f3, 0xD0($sp)
    ctx->pc = 0x256798u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x25679c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x25679cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2567a0: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x2567a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2567a4: 0xe7a200dc  swc1        $f2, 0xDC($sp)
    ctx->pc = 0x2567a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2567a8: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x2567a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2567ac: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x2567acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2567b0: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x2567b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2567b4: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x2567b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2567b8: 0xc7a400b8  lwc1        $f4, 0xB8($sp)
    ctx->pc = 0x2567b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2567bc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2567bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2567c0: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x2567c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2567c4: 0xe7a40050  swc1        $f4, 0x50($sp)
    ctx->pc = 0x2567c4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2567c8: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2567c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2567cc: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2567ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2567d0: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2567d0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2567d4: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2567d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2567d8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2567d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2567dc: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2567dcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x2567e0: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x2567e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2567e4: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2567e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2567e8: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2567e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2567ec: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x2567ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x2567f0: 0x46003946  mov.s       $f5, $f7
    ctx->pc = 0x2567f0u;
    ctx->f[5] = FPU_MOV_S(ctx->f[7]);
    // 0x2567f4: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x2567f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2567f8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2567f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2567fc: 0xc62100e4  lwc1        $f1, 0xE4($s1)
    ctx->pc = 0x2567fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256800: 0x0  nop
    ctx->pc = 0x256800u;
    // NOP
    // 0x256804: 0x460131c3  div.s       $f7, $f6, $f1
    ctx->pc = 0x256804u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[6], ctx->f[1]); }
    // 0x256808: 0x44083800  mfc1        $t0, $f7
    ctx->pc = 0x256808u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x25680c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x25680cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x256810: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x256810u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x256814: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x256814u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x256818: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x256818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x25681c: 0x44082800  mfc1        $t0, $f5
    ctx->pc = 0x25681cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x256820: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x256820u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x256824: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x256824u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x256828: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x256828u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x25682c: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x25682cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x256830: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x256830u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256834: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x256834u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x256838: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x256838u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x25683c: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x25683cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x256840: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x256840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256844: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x256844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256848: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x256848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25684c: 0xc7a300ec  lwc1        $f3, 0xEC($sp)
    ctx->pc = 0x25684cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x256850: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x256850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x256854: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x256854u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x256858: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x256858u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x25685c: 0xe7a300dc  swc1        $f3, 0xDC($sp)
    ctx->pc = 0x25685cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x256860: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x256860u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x256864: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x256864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x256868: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x256868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25686c: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x25686cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256870: 0xc7a400b8  lwc1        $f4, 0xB8($sp)
    ctx->pc = 0x256870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x256874: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x256874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x256878: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x256878u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x25687c: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x25687cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x256880: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x256880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x256884: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x256884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x256888: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x256888u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x25688c: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x25688cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x256890: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x256890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x256894: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x256894u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x256898: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x256898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x25689c: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x25689cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2568a0: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2568a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2568a4: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2568a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2568a8: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x2568a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2568ac: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x2568acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2568b0: 0xc7a30098  lwc1        $f3, 0x98($sp)
    ctx->pc = 0x2568b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2568b4: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x2568b4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2568b8: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x2568b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2568bc: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x2568bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2568c0: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x2568c0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2568c4: 0xe7a50064  swc1        $f5, 0x64($sp)
    ctx->pc = 0x2568c4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2568c8: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2568c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2568cc: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x2568ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2568d0: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2568d0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2568d4: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2568d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2568d8: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x2568d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2568dc: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2568dcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x2568e0: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x2568e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2568e4: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x2568e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2568e8: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2568e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2568ec: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2568ecu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2568f0: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2568f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2568f4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2568f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2568f8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2568f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2568fc: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2568fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x256900: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x256900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x256904: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x256904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x256908: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x256908u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25690c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x25690cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x256910: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x256910u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x256914: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x256914u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x256918: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x256918u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x25691c: 0x4a0003bf  vwaitq
    ctx->pc = 0x25691cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x256920: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x256920u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x256924: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x256924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x256928: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x256928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x25692c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x25692cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x256930: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x256930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x256934: 0xe4c40004  swc1        $f4, 0x4($a2)
    ctx->pc = 0x256934u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x256938: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x256938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x25693c: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x25693cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x256940: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x256940u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x256944: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x256944u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x256948: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x256948u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x25694c: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x25694cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x256950: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x256950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x256954: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x256954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x256958: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x256958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25695c: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x25695cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x256960: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x256960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x256964: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x256964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x256968: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x256968u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x25696c: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x25696cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x256970: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x256970u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x256974: 0xe7a2007c  swc1        $f2, 0x7C($sp)
    ctx->pc = 0x256974u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x256978: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x256978u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x25697c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x25697cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x256980: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x256980u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256984: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x256984u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x256988: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x256988u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x25698c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x25698cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x256990: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x256990u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x256994: 0x4a0003bf  vwaitq
    ctx->pc = 0x256994u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x256998: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x256998u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x25699c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x25699cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2569a0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2569a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2569a4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2569a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2569a8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2569a8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x2569ac: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2569acu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2569b0: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x2569b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2569b4: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x2569b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2569b8: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2569b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2569bc: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x2569bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2569c0: 0xc7a3008c  lwc1        $f3, 0x8C($sp)
    ctx->pc = 0x2569c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2569c4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2569c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2569c8: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x2569c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x2569cc: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x2569ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2569d0: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x2569d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x2569d4: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x2569d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2569d8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2569d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2569dc: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2569dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2569e0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2569e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2569e4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2569e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2569e8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2569e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2569ec: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2569ecu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x2569f0: 0x4a0003bf  vwaitq
    ctx->pc = 0x2569f0u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x2569f4: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2569f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2569f8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2569f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2569fc: 0x26640040  addiu       $a0, $s3, 0x40
    ctx->pc = 0x2569fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x256a00: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x256a00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x256a04: 0xfa610060  sqc2        $vf1, 0x60($s3)
    ctx->pc = 0x256a04u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x256a08: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x256a08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x256a0c: 0xfa610050  sqc2        $vf1, 0x50($s3)
    ctx->pc = 0x256a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x256a10: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x256a10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x256a14: 0xfa610040  sqc2        $vf1, 0x40($s3)
    ctx->pc = 0x256a14u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x256a18: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x256a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x256a1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x256a1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x256a20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x256a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256a24: 0xe7a40070  swc1        $f4, 0x70($sp)
    ctx->pc = 0x256a24u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x256a28: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x256a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x256a2c: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x256a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x256a30: 0xc0b15e8  jal         func_2C57A0
    ctx->pc = 0x256A30u;
    SET_GPR_U32(ctx, 31, 0x256A38u);
    ctx->pc = 0x256A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256A30u;
    // 0x256a34: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C57A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C57A0u, 0x256A30u, 0x256A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256A38u;
label_256a38:
    // 0x256a38: 0xc0c48da  jal         func_312368
    ctx->pc = 0x256A38u;
    SET_GPR_U32(ctx, 31, 0x256A40u);
    ctx->pc = 0x256A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256A38u;
    // 0x256a3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x256A38u, 0x256A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256A40u;
label_256a40:
    // 0x256a40: 0xdfb000f0  ld          $s0, 0xF0($sp)
    ctx->pc = 0x256a40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x256a44: 0xdfb100f8  ld          $s1, 0xF8($sp)
    ctx->pc = 0x256a44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x256a48: 0xdfb20100  ld          $s2, 0x100($sp)
    ctx->pc = 0x256a48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x256a4c: 0xdfb30108  ld          $s3, 0x108($sp)
    ctx->pc = 0x256a4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x256a50: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x256a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x256a54: 0x3e00008  jr          $ra
    ctx->pc = 0x256A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256A54u;
        // 0x256a58: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x256A5Cu;
    // 0x256a5c: 0x0  nop
    ctx->pc = 0x256a5cu;
    // NOP
    ctx->pc = 0x256a60u;
}

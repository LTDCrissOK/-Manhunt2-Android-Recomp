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

// Function: sub_001D9FC8
// Address: 0x1d9fc8 - 0x1da090
void sub_001D9FC8_0x1d9fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9FC8_0x1d9fc8");
#endif

    switch (ctx->pc) {
        case 0x1d9fdcu: goto label_1d9fdc;
        case 0x1da02cu: goto label_1da02c;
        case 0x1da034u: goto label_1da034;
        case 0x1da054u: goto label_1da054;
        case 0x1da074u: goto label_1da074;
        case 0x1da07cu: goto label_1da07c;
        default: break;
    }

    ctx->pc = 0x1d9fc8u;

    // 0x1d9fc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d9fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d9fcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9fd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d9fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d9fd4: 0xc076dd0  jal         func_1DB740
    ctx->pc = 0x1D9FD4u;
    SET_GPR_U32(ctx, 31, 0x1D9FDCu);
    ctx->pc = 0x1D9FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9FD4u;
    // 0x1d9fd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB740u, 0x1D9FD4u, 0x1D9FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9FDCu;
label_1d9fdc:
    // 0x1d9fdc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1d9fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1d9fe0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1d9fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1d9fe4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1d9fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d9fe8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1d9fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d9fec: 0x24a40010  addiu       $a0, $a1, 0x10
    ctx->pc = 0x1d9fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1d9ff0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1d9ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1d9ff4: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1d9ff4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d9ff8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1d9ff8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d9ffc: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x1d9ffcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1da000: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x1da000u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1da004: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x1da004u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1da008: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1da008u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1da00c: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1da00cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1da010: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x1da010u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1da014: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x1da014u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1da018: 0xf8c10010  sqc2        $vf1, 0x10($a2)
    ctx->pc = 0x1da018u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1da01c: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x1da01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1da020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1da020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da024: 0xc076580  jal         func_1D9600
    ctx->pc = 0x1DA024u;
    SET_GPR_U32(ctx, 31, 0x1DA02Cu);
    ctx->pc = 0x1DA028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA024u;
    // 0x1da028: 0xe4c00020  swc1        $f0, 0x20($a2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9600u, 0x1DA024u, 0x1DA02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA02Cu;
label_1da02c:
    // 0x1da02c: 0xc0763c2  jal         func_1D8F08
    ctx->pc = 0x1DA02Cu;
    SET_GPR_U32(ctx, 31, 0x1DA034u);
    ctx->pc = 0x1DA030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA02Cu;
    // 0x1da030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8F08u, 0x1DA02Cu, 0x1DA034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA034u;
label_1da034:
    // 0x1da034: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1da034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1da038: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x1da038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1da03c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DA03Cu;
    {
        const bool branch_taken_0x1da03c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da03c) {
            ctx->pc = 0x1DA040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA03Cu;
            // 0x1da040: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA058u;
            goto label_1da058;
        }
    }
    ctx->pc = 0x1DA044u;
    // 0x1da044: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1da044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1da048: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x1da048u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1da04c: 0xc0797ca  jal         func_1E5F28
    ctx->pc = 0x1DA04Cu;
    SET_GPR_U32(ctx, 31, 0x1DA054u);
    ctx->pc = 0x1DA050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA04Cu;
    // 0x1da050: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5F28u, 0x1DA04Cu, 0x1DA054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA054u;
label_1da054:
    // 0x1da054: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1da054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1da058:
    // 0x1da058: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x1da058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1da05c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DA05Cu;
    {
        const bool branch_taken_0x1da05c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da05c) {
            ctx->pc = 0x1DA074u;
            goto label_1da074;
        }
    }
    ctx->pc = 0x1DA064u;
    // 0x1da064: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1da064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1da068: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x1da068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1da06c: 0xc079482  jal         func_1E5208
    ctx->pc = 0x1DA06Cu;
    SET_GPR_U32(ctx, 31, 0x1DA074u);
    ctx->pc = 0x1DA070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA06Cu;
    // 0x1da070: 0x8c450014  lw          $a1, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5208u, 0x1DA06Cu, 0x1DA074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA074u;
label_1da074:
    // 0x1da074: 0xc0767e2  jal         func_1D9F88
    ctx->pc = 0x1DA074u;
    SET_GPR_U32(ctx, 31, 0x1DA07Cu);
    ctx->pc = 0x1DA078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA074u;
    // 0x1da078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9F88u, 0x1DA074u, 0x1DA07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA07Cu;
label_1da07c:
    // 0x1da07c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1da07cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da080: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1da080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1da084: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA084u;
        // 0x1da088: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA08Cu;
    // 0x1da08c: 0x0  nop
    ctx->pc = 0x1da08cu;
    // NOP
    ctx->pc = 0x1da090u;
}

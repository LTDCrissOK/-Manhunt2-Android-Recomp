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

// Function: sub_001C5F98
// Address: 0x1c5f98 - 0x1c6138
void sub_001C5F98_0x1c5f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5F98_0x1c5f98");
#endif

    switch (ctx->pc) {
        case 0x1c5fe0u: goto label_1c5fe0;
        case 0x1c5ff8u: goto label_1c5ff8;
        case 0x1c6014u: goto label_1c6014;
        case 0x1c6030u: goto label_1c6030;
        case 0x1c6038u: goto label_1c6038;
        case 0x1c6040u: goto label_1c6040;
        case 0x1c6058u: goto label_1c6058;
        case 0x1c6064u: goto label_1c6064;
        case 0x1c6078u: goto label_1c6078;
        case 0x1c60b8u: goto label_1c60b8;
        default: break;
    }

    ctx->pc = 0x1c5f98u;

    // 0x1c5f98: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c5f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c5f9c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c5f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c5fa0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c5fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c5fa4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c5fa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5fa8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1c5fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1c5fac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c5facu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5fb0: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1c5fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x1c5fb4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1c5fb4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5fb8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c5fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c5fbc: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1c5fbcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c5fc0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1c5fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1c5fc4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1c5fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1c5fc8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1c5fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x1c5fcc: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x1c5fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x1c5fd0: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1c5fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x1c5fd4: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x1c5fd4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1c5fd8: 0xc07173a  jal         func_1C5CE8
    ctx->pc = 0x1C5FD8u;
    SET_GPR_U32(ctx, 31, 0x1C5FE0u);
    ctx->pc = 0x1C5FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5FD8u;
    // 0x1c5fdc: 0xe7b40060  swc1        $f20, 0x60($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5CE8u, 0x1C5FD8u, 0x1C5FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5FE0u;
label_1c5fe0:
    // 0x1c5fe0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C5FE0u;
    {
        const bool branch_taken_0x1c5fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c5fe0) {
            ctx->pc = 0x1C5FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C5FE0u;
            // 0x1c5fe4: 0x8e220318  lw          $v0, 0x318($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C5FFCu;
            goto label_1c5ffc;
        }
    }
    ctx->pc = 0x1C5FE8u;
    // 0x1c5fe8: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5FE8u;
    {
        const bool branch_taken_0x1c5fe8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C5FE8u;
        // 0x1c5fec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5fe8) {
            ctx->pc = 0x1C5FF8u;
            goto label_1c5ff8;
        }
    }
    ctx->pc = 0x1C5FF0u;
    // 0x1c5ff0: 0xc0715aa  jal         func_1C56A8
    ctx->pc = 0x1C5FF0u;
    SET_GPR_U32(ctx, 31, 0x1C5FF8u);
    ctx->pc = 0x1C5FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C5FF0u;
    // 0x1c5ff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C56A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C56A8u, 0x1C5FF0u, 0x1C5FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C5FF8u;
label_1c5ff8:
    // 0x1c5ff8: 0x8e220318  lw          $v0, 0x318($s1)
    ctx->pc = 0x1c5ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 792)));
label_1c5ffc:
    // 0x1c5ffc: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1c5ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1c6000: 0xc475c744  lwc1        $f21, -0x38BC($v1)
    ctx->pc = 0x1c6000u;
    { uint32_t bits = FAST_READ32(0x45C744u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c6004: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c6004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6008: 0x8c560fe8  lw          $s6, 0xFE8($v0)
    ctx->pc = 0x1c6008u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4072)));
    // 0x1c600c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1C600Cu;
    SET_GPR_U32(ctx, 31, 0x1C6014u);
    ctx->pc = 0x1C6010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C600Cu;
    // 0x1c6010: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1C600Cu, 0x1C6014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6014u;
label_1c6014:
    // 0x1c6014: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1c6014u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6018: 0x8ec200c8  lw          $v0, 0xC8($s6)
    ctx->pc = 0x1c6018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 200)));
    // 0x1c601c: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1C601Cu;
    {
        const bool branch_taken_0x1c601c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C601Cu;
        // 0x1c6020: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c601c) {
            ctx->pc = 0x1C60FCu;
            goto label_1c60fc;
        }
    }
    ctx->pc = 0x1C6024u;
    // 0x1c6024: 0x26330070  addiu       $s3, $s1, 0x70
    ctx->pc = 0x1c6024u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x1c6028: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1c6028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1c602c: 0x0  nop
    ctx->pc = 0x1c602cu;
    // NOP
label_1c6030:
    // 0x1c6030: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1C6030u;
    {
        const bool branch_taken_0x1c6030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6030u;
        // 0x1c6034: 0x3c0802d  daddu       $s0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6030) {
            ctx->pc = 0x1C60C8u;
            goto label_1c60c8;
        }
    }
    ctx->pc = 0x1C6038u;
label_1c6038:
    // 0x1c6038: 0xc071746  jal         func_1C5D18
    ctx->pc = 0x1C6038u;
    SET_GPR_U32(ctx, 31, 0x1C6040u);
    ctx->pc = 0x1C603Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6038u;
    // 0x1c603c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5D18u, 0x1C6038u, 0x1C6040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6040u;
label_1c6040:
    // 0x1c6040: 0x54520027  bnel        $v0, $s2, . + 4 + (0x27 << 2)
    ctx->pc = 0x1C6040u;
    {
        const bool branch_taken_0x1c6040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1c6040) {
            ctx->pc = 0x1C6044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6040u;
            // 0x1c6044: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C60E0u;
            goto label_1c60e0;
        }
    }
    ctx->pc = 0x1C6048u;
    // 0x1c6048: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C6048u;
    {
        const bool branch_taken_0x1c6048 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6048u;
        // 0x1c604c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6048) {
            ctx->pc = 0x1C606Cu;
            goto label_1c606c;
        }
    }
    ctx->pc = 0x1C6050u;
    // 0x1c6050: 0xc071750  jal         func_1C5D40
    ctx->pc = 0x1C6050u;
    SET_GPR_U32(ctx, 31, 0x1C6058u);
    ctx->pc = 0x1C6054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6050u;
    // 0x1c6054: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5D40u, 0x1C6050u, 0x1C6058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6058u;
label_1c6058:
    // 0x1c6058: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1c6058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c605c: 0xc0f62ca  jal         func_3D8B28
    ctx->pc = 0x1C605Cu;
    SET_GPR_U32(ctx, 31, 0x1C6064u);
    ctx->pc = 0x1C6060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C605Cu;
    // 0x1c6060: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D8B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D8B28u, 0x1C605Cu, 0x1C6064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6064u;
label_1c6064:
    // 0x1c6064: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C6064u;
    {
        const bool branch_taken_0x1c6064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6064) {
            ctx->pc = 0x1C6068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C6064u;
            // 0x1c6068: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C60C4u;
            goto label_1c60c4;
        }
    }
    ctx->pc = 0x1C606Cu;
label_1c606c:
    // 0x1c606c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c606cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6070: 0xc071750  jal         func_1C5D40
    ctx->pc = 0x1C6070u;
    SET_GPR_U32(ctx, 31, 0x1C6078u);
    ctx->pc = 0x1C6074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C6070u;
    // 0x1c6074: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5D40u, 0x1C6070u, 0x1C6078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C6078u;
label_1c6078:
    // 0x1c6078: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1c6078u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c607c: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x1c607cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1c6080: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c6080u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1c6084: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1c6084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1c6088: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1c6088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c608c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1c608cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c6090: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1c6090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c6094: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c6094u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1c6098: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c6098u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1c609c: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x1c609cu;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1c60a0: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x1c60a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c60a4: 0x0  nop
    ctx->pc = 0x1c60a4u;
    // NOP
    // 0x1c60a8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1C60A8u;
    {
        const bool branch_taken_0x1c60a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C60ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C60A8u;
        // 0x1c60ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c60a8) {
            ctx->pc = 0x1C60C0u;
            goto label_1c60c0;
        }
    }
    ctx->pc = 0x1C60B0u;
    // 0x1c60b0: 0xc071750  jal         func_1C5D40
    ctx->pc = 0x1C60B0u;
    SET_GPR_U32(ctx, 31, 0x1C60B8u);
    ctx->pc = 0x1C60B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C60B0u;
    // 0x1c60b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C5D40u, 0x1C60B0u, 0x1C60B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C60B8u;
label_1c60b8:
    // 0x1c60b8: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x1c60b8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x1c60bc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1c60bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c60c0:
    // 0x1c60c0: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1c60c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1c60c4:
    // 0x1c60c4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1c60c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1c60c8:
    // 0x1c60c8: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x1c60c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x1c60cc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1c60ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c60d0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1c60d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1c60d4: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1c60d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1c60d8: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1C60D8u;
    {
        const bool branch_taken_0x1c60d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C60DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C60D8u;
        // 0x1c60dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c60d8) {
            ctx->pc = 0x1C6038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6038;
        }
    }
    ctx->pc = 0x1C60E0u;
label_1c60e0:
    // 0x1c60e0: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C60E0u;
    {
        const bool branch_taken_0x1c60e0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C60E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C60E0u;
        // 0x1c60e4: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c60e0) {
            ctx->pc = 0x1C6100u;
            goto label_1c6100;
        }
    }
    ctx->pc = 0x1C60E8u;
    // 0x1c60e8: 0x8ec200c8  lw          $v0, 0xC8($s6)
    ctx->pc = 0x1c60e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 200)));
    // 0x1c60ec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c60ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1c60f0: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x1c60f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1c60f4: 0x5040ffce  beql        $v0, $zero, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1C60F4u;
    {
        const bool branch_taken_0x1c60f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c60f4) {
            ctx->pc = 0x1C60F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C60F4u;
            // 0x1c60f8: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C6030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c6030;
        }
    }
    ctx->pc = 0x1C60FCu;
label_1c60fc:
    // 0x1c60fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c60fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c6100:
    // 0x1c6100: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c6100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6104: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c6104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c6108: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c6108u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c610c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1c610cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c6110: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1c6110u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c6114: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1c6114u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c6118: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1c6118u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c611c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1c611cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c6120: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x1c6120u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c6124: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1c6124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c6128: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x1c6128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c612c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1c612cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c6130: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C6130u;
        // 0x1c6134: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C6130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C6138u;
}

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

// Function: sub_001EF2F8
// Address: 0x1ef2f8 - 0x1f0420
void sub_001EF2F8_0x1ef2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF2F8_0x1ef2f8");
#endif

    switch (ctx->pc) {
        case 0x1ef344u: goto label_1ef344;
        case 0x1ef34cu: goto label_1ef34c;
        case 0x1ef354u: goto label_1ef354;
        case 0x1ef35cu: goto label_1ef35c;
        case 0x1ef364u: goto label_1ef364;
        case 0x1ef3c8u: goto label_1ef3c8;
        case 0x1ef3d0u: goto label_1ef3d0;
        case 0x1ef3ecu: goto label_1ef3ec;
        case 0x1ef578u: goto label_1ef578;
        case 0x1ef588u: goto label_1ef588;
        case 0x1ef69cu: goto label_1ef69c;
        case 0x1ef6acu: goto label_1ef6ac;
        case 0x1ef6c8u: goto label_1ef6c8;
        case 0x1ef6d8u: goto label_1ef6d8;
        case 0x1ef6f0u: goto label_1ef6f0;
        case 0x1ef804u: goto label_1ef804;
        case 0x1ef814u: goto label_1ef814;
        case 0x1ef830u: goto label_1ef830;
        case 0x1ef840u: goto label_1ef840;
        case 0x1ef858u: goto label_1ef858;
        case 0x1efa28u: goto label_1efa28;
        case 0x1efb3cu: goto label_1efb3c;
        case 0x1efb54u: goto label_1efb54;
        case 0x1efb70u: goto label_1efb70;
        case 0x1efb80u: goto label_1efb80;
        case 0x1efb98u: goto label_1efb98;
        case 0x1efbb4u: goto label_1efbb4;
        case 0x1efc70u: goto label_1efc70;
        case 0x1efe34u: goto label_1efe34;
        case 0x1effecu: goto label_1effec;
        case 0x1f00a4u: goto label_1f00a4;
        case 0x1f01f0u: goto label_1f01f0;
        case 0x1f02a0u: goto label_1f02a0;
        case 0x1f0318u: goto label_1f0318;
        case 0x1f0388u: goto label_1f0388;
        default: break;
    }

    ctx->pc = 0x1ef2f8u;

    // 0x1ef2f8: 0x27bdfcd0  addiu       $sp, $sp, -0x330
    ctx->pc = 0x1ef2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966480));
    // 0x1ef2fc: 0xffb702e8  sd          $s7, 0x2E8($sp)
    ctx->pc = 0x1ef2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 744), GPR_U64(ctx, 23));
    // 0x1ef300: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1ef300u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef304: 0xffb002b0  sd          $s0, 0x2B0($sp)
    ctx->pc = 0x1ef304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 16));
    // 0x1ef308: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ef308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef30c: 0xffb102b8  sd          $s1, 0x2B8($sp)
    ctx->pc = 0x1ef30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 696), GPR_U64(ctx, 17));
    // 0x1ef310: 0xffb202c0  sd          $s2, 0x2C0($sp)
    ctx->pc = 0x1ef310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 18));
    // 0x1ef314: 0xffb302c8  sd          $s3, 0x2C8($sp)
    ctx->pc = 0x1ef314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 712), GPR_U64(ctx, 19));
    // 0x1ef318: 0xffb402d0  sd          $s4, 0x2D0($sp)
    ctx->pc = 0x1ef318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 20));
    // 0x1ef31c: 0xffb502d8  sd          $s5, 0x2D8($sp)
    ctx->pc = 0x1ef31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 728), GPR_U64(ctx, 21));
    // 0x1ef320: 0xffb602e0  sd          $s6, 0x2E0($sp)
    ctx->pc = 0x1ef320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 736), GPR_U64(ctx, 22));
    // 0x1ef324: 0xffbe02f0  sd          $fp, 0x2F0($sp)
    ctx->pc = 0x1ef324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 752), GPR_U64(ctx, 30));
    // 0x1ef328: 0xffbf02f8  sd          $ra, 0x2F8($sp)
    ctx->pc = 0x1ef328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 760), GPR_U64(ctx, 31));
    // 0x1ef32c: 0xe7b80320  swc1        $f24, 0x320($sp)
    ctx->pc = 0x1ef32cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 800), bits); }
    // 0x1ef330: 0xe7b70318  swc1        $f23, 0x318($sp)
    ctx->pc = 0x1ef330u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 792), bits); }
    // 0x1ef334: 0xe7b60310  swc1        $f22, 0x310($sp)
    ctx->pc = 0x1ef334u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 784), bits); }
    // 0x1ef338: 0xe7b50308  swc1        $f21, 0x308($sp)
    ctx->pc = 0x1ef338u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 776), bits); }
    // 0x1ef33c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1EF33Cu;
    SET_GPR_U32(ctx, 31, 0x1EF344u);
    ctx->pc = 0x1EF340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF33Cu;
    // 0x1ef340: 0xe7b40300  swc1        $f20, 0x300($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 768), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1EF33Cu, 0x1EF344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF344u;
label_1ef344:
    // 0x1ef344: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1EF344u;
    SET_GPR_U32(ctx, 31, 0x1EF34Cu);
    ctx->pc = 0x1EF348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF344u;
    // 0x1ef348: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1EF344u, 0x1EF34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF34Cu;
label_1ef34c:
    // 0x1ef34c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1EF34Cu;
    SET_GPR_U32(ctx, 31, 0x1EF354u);
    ctx->pc = 0x1EF350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF34Cu;
    // 0x1ef350: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1EF34Cu, 0x1EF354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF354u;
label_1ef354:
    // 0x1ef354: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1EF354u;
    SET_GPR_U32(ctx, 31, 0x1EF35Cu);
    ctx->pc = 0x1EF358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF354u;
    // 0x1ef358: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1EF354u, 0x1EF35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF35Cu;
label_1ef35c:
    // 0x1ef35c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1EF35Cu;
    SET_GPR_U32(ctx, 31, 0x1EF364u);
    ctx->pc = 0x1EF360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF35Cu;
    // 0x1ef360: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1EF35Cu, 0x1EF364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF364u;
label_1ef364:
    // 0x1ef364: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x1ef364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x1ef368: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x1ef368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ef36c: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x1ef36cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x1ef370: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x1ef370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x1ef374: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x1ef374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x1ef378: 0x7ba30090  lq          $v1, 0x90($sp)
    ctx->pc = 0x1ef378u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ef37c: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x1ef37cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x1ef380: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x1ef380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x1ef384: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x1ef384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x1ef388: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x1ef388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x1ef38c: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x1ef38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x1ef390: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x1ef390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x1ef394: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1ef394u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ef398: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1ef398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef39c: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x1ef39cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x1ef3a0: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x1ef3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x1ef3a4: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x1ef3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x1ef3a8: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x1ef3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x1ef3ac: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1ef3acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ef3b0: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1ef3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef3b4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1ef3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1ef3b8: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x1ef3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x1ef3bc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1ef3bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef3c0: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x1EF3C0u;
    SET_GPR_U32(ctx, 31, 0x1EF3C8u);
    ctx->pc = 0x1EF3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF3C0u;
    // 0x1ef3c4: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x1EF3C0u, 0x1EF3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF3C8u;
label_1ef3c8:
    // 0x1ef3c8: 0xc0c580c  jal         func_316030
    ctx->pc = 0x1EF3C8u;
    SET_GPR_U32(ctx, 31, 0x1EF3D0u);
    ctx->pc = 0x1EF3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF3C8u;
    // 0x1ef3cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316030u, 0x1EF3C8u, 0x1EF3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF3D0u;
label_1ef3d0:
    // 0x1ef3d0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EF3D0u;
    {
        const bool branch_taken_0x1ef3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF3D0u;
        // 0x1ef3d4: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef3d0) {
            ctx->pc = 0x1EF3ECu;
            goto label_1ef3ec;
        }
    }
    ctx->pc = 0x1EF3D8u;
    // 0x1ef3d8: 0x2e23021  addu        $a2, $s7, $v0
    ctx->pc = 0x1ef3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1ef3dc: 0x8cc315f0  lw          $v1, 0x15F0($a2)
    ctx->pc = 0x1ef3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 5616)));
    // 0x1ef3e0: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1ef3e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1ef3e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF3E4u;
    {
        const bool branch_taken_0x1ef3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF3E4u;
        // 0x1ef3e8: 0x310c2  srl         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef3e4) {
            ctx->pc = 0x1EF3F4u;
            goto label_1ef3f4;
        }
    }
    ctx->pc = 0x1EF3ECu;
label_1ef3ec:
    // 0x1ef3ec: 0x100003fb  b           . + 4 + (0x3FB << 2)
    ctx->pc = 0x1EF3ECu;
    {
        const bool branch_taken_0x1ef3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF3ECu;
        // 0x1ef3f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef3ec) {
            ctx->pc = 0x1F03DCu;
            goto label_1f03dc;
        }
    }
    ctx->pc = 0x1EF3F4u;
label_1ef3f4:
    // 0x1ef3f4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1ef3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1ef3f8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1ef3f8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1ef3fc: 0x2010  mfhi        $a0
    ctx->pc = 0x1ef3fcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x1ef400: 0xafa40274  sw          $a0, 0x274($sp)
    ctx->pc = 0x1ef400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 4));
    // 0x1ef404: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1EF404u;
    {
        const bool branch_taken_0x1ef404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef404) {
            ctx->pc = 0x1EF408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF404u;
            // 0x1ef408: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF40Cu;
            goto label_1ef40c;
        }
    }
    ctx->pc = 0x1EF40Cu;
label_1ef40c:
    // 0x1ef40c: 0x14800128  bnez        $a0, . + 4 + (0x128 << 2)
    ctx->pc = 0x1EF40Cu;
    {
        const bool branch_taken_0x1ef40c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF40Cu;
        // 0x1ef410: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef40c) {
            ctx->pc = 0x1EF8B0u;
            goto label_1ef8b0;
        }
    }
    ctx->pc = 0x1EF414u;
    // 0x1ef414: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ef414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ef418: 0x8c42bd48  lw          $v0, -0x42B8($v0)
    ctx->pc = 0x1ef418u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x1ef41c: 0x504003ef  beql        $v0, $zero, . + 4 + (0x3EF << 2)
    ctx->pc = 0x1EF41Cu;
    {
        const bool branch_taken_0x1ef41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef41c) {
            ctx->pc = 0x1EF420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF41Cu;
            // 0x1ef420: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F03DCu;
            goto label_1f03dc;
        }
    }
    ctx->pc = 0x1EF424u;
    // 0x1ef424: 0x8c440100  lw          $a0, 0x100($v0)
    ctx->pc = 0x1ef424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x1ef428: 0x8cc515c8  lw          $a1, 0x15C8($a2)
    ctx->pc = 0x1ef428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 5576)));
    // 0x1ef42c: 0x24820040  addiu       $v0, $a0, 0x40
    ctx->pc = 0x1ef42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1ef430: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1ef430u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ef434: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1ef434u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef438: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x1ef438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x1ef43c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1ef43cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ef440: 0xf8a10010  sqc2        $vf1, 0x10($a1)
    ctx->pc = 0x1ef440u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef444: 0x24820060  addiu       $v0, $a0, 0x60
    ctx->pc = 0x1ef444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1ef448: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1ef448u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ef44c: 0xf8a10020  sqc2        $vf1, 0x20($a1)
    ctx->pc = 0x1ef44cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef450: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x1ef450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x1ef454: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1ef454u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ef458: 0xf8a10030  sqc2        $vf1, 0x30($a1)
    ctx->pc = 0x1ef458u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef45c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ef45cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ef460: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1ef460u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef464: 0x8c42bd50  lw          $v0, -0x42B0($v0)
    ctx->pc = 0x1ef464u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x1ef468: 0x1040ffe0  beqz        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1EF468u;
    {
        const bool branch_taken_0x1ef468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF468u;
        // 0x1ef46c: 0x3c030004  lui         $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef468) {
            ctx->pc = 0x1EF3ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef3ec;
        }
    }
    ctx->pc = 0x1EF470u;
    // 0x1ef470: 0x8c4211c0  lw          $v0, 0x11C0($v0)
    ctx->pc = 0x1ef470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4544)));
    // 0x1ef474: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1ef474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1ef478: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EF478u;
    {
        const bool branch_taken_0x1ef478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1EF47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF478u;
        // 0x1ef47c: 0x8cc2134c  lw          $v0, 0x134C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef478) {
            ctx->pc = 0x1EF498u;
            goto label_1ef498;
        }
    }
    ctx->pc = 0x1EF480u;
    // 0x1ef480: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EF480u;
    {
        const bool branch_taken_0x1ef480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF480u;
        // 0x1ef484: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef480) {
            ctx->pc = 0x1EF48Cu;
            goto label_1ef48c;
        }
    }
    ctx->pc = 0x1EF488u;
    // 0x1ef488: 0xacc21350  sw          $v0, 0x1350($a2)
    ctx->pc = 0x1ef488u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4944), GPR_U32(ctx, 2));
label_1ef48c:
    // 0x1ef48c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef490: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF490u;
    {
        const bool branch_taken_0x1ef490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF490u;
        // 0x1ef494: 0xacc2134c  sw          $v0, 0x134C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4940), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef490) {
            ctx->pc = 0x1EF4A4u;
            goto label_1ef4a4;
        }
    }
    ctx->pc = 0x1EF498u;
label_1ef498:
    // 0x1ef498: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1EF498u;
    {
        const bool branch_taken_0x1ef498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef498) {
            ctx->pc = 0x1EF49Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF498u;
            // 0x1ef49c: 0xacc01350  sw          $zero, 0x1350($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 4944), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF4A0u;
            goto label_1ef4a0;
        }
    }
    ctx->pc = 0x1EF4A0u;
label_1ef4a0:
    // 0x1ef4a0: 0xacc0134c  sw          $zero, 0x134C($a2)
    ctx->pc = 0x1ef4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4940), GPR_U32(ctx, 0));
label_1ef4a4:
    // 0x1ef4a4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1ef4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ef4a8: 0x2e22021  addu        $a0, $s7, $v0
    ctx->pc = 0x1ef4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1ef4ac: 0x8c83134c  lw          $v1, 0x134C($a0)
    ctx->pc = 0x1ef4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4940)));
    // 0x1ef4b0: 0x10600023  beqz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1EF4B0u;
    {
        const bool branch_taken_0x1ef4b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF4B0u;
        // 0x1ef4b4: 0x2e22821  addu        $a1, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef4b0) {
            ctx->pc = 0x1EF540u;
            goto label_1ef540;
        }
    }
    ctx->pc = 0x1EF4B8u;
    // 0x1ef4b8: 0x8c821350  lw          $v0, 0x1350($a0)
    ctx->pc = 0x1ef4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4944)));
    // 0x1ef4bc: 0x144002fb  bnez        $v0, . + 4 + (0x2FB << 2)
    ctx->pc = 0x1EF4BCu;
    {
        const bool branch_taken_0x1ef4bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF4BCu;
        // 0x1ef4c0: 0x8fa20274  lw          $v0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef4bc) {
            ctx->pc = 0x1F00ACu;
            goto label_1f00ac;
        }
    }
    ctx->pc = 0x1EF4C4u;
    // 0x1ef4c4: 0x8c8215c8  lw          $v0, 0x15C8($a0)
    ctx->pc = 0x1ef4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5576)));
    // 0x1ef4c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ef4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ef4cc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ef4ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ef4d0: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1ef4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef4d4: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1ef4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1ef4d8: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1ef4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1ef4dc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1ef4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef4e0: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x1ef4e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1ef4e4: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1ef4e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef4e8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1ef4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef4ec: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1ef4ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1ef4f0: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1ef4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef4f4: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1EF4F4u;
    {
        const bool branch_taken_0x1ef4f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EF4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF4F4u;
        // 0x1ef4f8: 0xe7a1009c  swc1        $f1, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef4f4) {
            ctx->pc = 0x1EF534u;
            goto label_1ef534;
        }
    }
    ctx->pc = 0x1EF4FCu;
    // 0x1ef4fc: 0x34029560  ori         $v0, $zero, 0x9560
    ctx->pc = 0x1ef4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38240);
    // 0x1ef500: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x1ef500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ef504: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1ef504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1ef508: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1ef508u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ef50c: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1ef50cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef510: 0xac801564  sw          $zero, 0x1564($a0)
    ctx->pc = 0x1ef510u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5476), GPR_U32(ctx, 0));
    // 0x1ef514: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1ef514u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ef518: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1ef518u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ef51c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1ef51cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ef520: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1ef520u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ef524: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1ef524u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1ef528: 0x4a0003bf  vwaitq
    ctx->pc = 0x1ef528u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1ef52c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1ef52cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ef530: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1ef530u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1ef534:
    // 0x1ef534: 0xac8013e4  sw          $zero, 0x13E4($a0)
    ctx->pc = 0x1ef534u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 5092), GPR_U32(ctx, 0));
    // 0x1ef538: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1ef538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ef53c: 0x2e22821  addu        $a1, $s7, $v0
    ctx->pc = 0x1ef53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_1ef540:
    // 0x1ef540: 0x8ca31350  lw          $v1, 0x1350($a1)
    ctx->pc = 0x1ef540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4944)));
    // 0x1ef544: 0x146002d9  bnez        $v1, . + 4 + (0x2D9 << 2)
    ctx->pc = 0x1EF544u;
    {
        const bool branch_taken_0x1ef544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF544u;
        // 0x1ef548: 0x8fa20274  lw          $v0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef544) {
            ctx->pc = 0x1F00ACu;
            goto label_1f00ac;
        }
    }
    ctx->pc = 0x1EF54Cu;
    // 0x1ef54c: 0x8ca215c8  lw          $v0, 0x15C8($a1)
    ctx->pc = 0x1ef54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5576)));
    // 0x1ef550: 0x34039550  ori         $v1, $zero, 0x9550
    ctx->pc = 0x1ef550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38224);
    // 0x1ef554: 0x2e33021  addu        $a2, $s7, $v1
    ctx->pc = 0x1ef554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1ef558: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1ef558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1ef55c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1ef55cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ef560: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1ef560u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef564: 0x8ce2bd50  lw          $v0, -0x42B0($a3)
    ctx->pc = 0x1ef564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294950224)));
    // 0x1ef568: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1EF568u;
    {
        const bool branch_taken_0x1ef568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef568) {
            ctx->pc = 0x1EF56Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF568u;
            // 0x1ef56c: 0x8c440104  lw          $a0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF598u;
            goto label_1ef598;
        }
    }
    ctx->pc = 0x1EF570u;
    // 0x1ef570: 0x1000039a  b           . + 4 + (0x39A << 2)
    ctx->pc = 0x1EF570u;
    {
        const bool branch_taken_0x1ef570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF570u;
        // 0x1ef574: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef570) {
            ctx->pc = 0x1F03DCu;
            goto label_1f03dc;
        }
    }
    ctx->pc = 0x1EF578u;
label_1ef578:
    // 0x1ef578: 0x8e622b20  lw          $v0, 0x2B20($s3)
    ctx->pc = 0x1ef578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
    // 0x1ef57c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ef57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ef580: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1EF580u;
    {
        const bool branch_taken_0x1ef580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF580u;
        // 0x1ef584: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef580) {
            ctx->pc = 0x1EF70Cu;
            goto label_1ef70c;
        }
    }
    ctx->pc = 0x1EF588u;
label_1ef588:
    // 0x1ef588: 0x8e622b20  lw          $v0, 0x2B20($s3)
    ctx->pc = 0x1ef588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
    // 0x1ef58c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ef58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ef590: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x1EF590u;
    {
        const bool branch_taken_0x1ef590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF590u;
        // 0x1ef594: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef590) {
            ctx->pc = 0x1EF874u;
            goto label_1ef874;
        }
    }
    ctx->pc = 0x1EF598u;
label_1ef598:
    // 0x1ef598: 0x34039540  ori         $v1, $zero, 0x9540
    ctx->pc = 0x1ef598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38208);
    // 0x1ef59c: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x1ef59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1ef5a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ef5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ef5a4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1ef5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1ef5a8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1ef5a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ef5ac: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1ef5acu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef5b0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1ef5b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ef5b4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1ef5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef5b8: 0xc4a01544  lwc1        $f0, 0x1544($a1)
    ctx->pc = 0x1ef5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 5444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef5bc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1ef5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ef5c0: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1ef5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x1ef5c4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1ef5c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1ef5c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ef5c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ef5cc: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1ef5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ef5d0: 0xafa40298  sw          $a0, 0x298($sp)
    ctx->pc = 0x1ef5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 4));
    // 0x1ef5d4: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x1ef5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ef5d8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ef5d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ef5dc: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x1ef5dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ef5e0: 0xc4a21554  lwc1        $f2, 0x1554($a1)
    ctx->pc = 0x1ef5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 5460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ef5e4: 0xafa20294  sw          $v0, 0x294($sp)
    ctx->pc = 0x1ef5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 2));
    // 0x1ef5e8: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x1ef5e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef5ec: 0xafa30290  sw          $v1, 0x290($sp)
    ctx->pc = 0x1ef5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 3));
    // 0x1ef5f0: 0x4501004e  bc1t        . + 4 + (0x4E << 2)
    ctx->pc = 0x1EF5F0u;
    {
        const bool branch_taken_0x1ef5f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EF5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF5F0u;
        // 0x1ef5f4: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef5f0) {
            ctx->pc = 0x1EF72Cu;
            goto label_1ef72c;
        }
    }
    ctx->pc = 0x1EF5F8u;
    // 0x1ef5f8: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x1ef5f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1ef5fc: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x1ef5fcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef600: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1ef600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1ef604: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x1ef604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x1ef608: 0x8fa20294  lw          $v0, 0x294($sp)
    ctx->pc = 0x1ef608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
    // 0x1ef60c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1ef60cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ef610: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1ef610u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ef614: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1ef614u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ef618: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1ef618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef61c: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x1ef61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ef620: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x1ef620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ef624: 0xc6a40008  lwc1        $f4, 0x8($s5)
    ctx->pc = 0x1ef624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1ef628: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1ef628u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1ef62c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1ef62cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1ef630: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1ef630u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1ef634: 0x0  nop
    ctx->pc = 0x1ef634u;
    // NOP
    // 0x1ef638: 0x0  nop
    ctx->pc = 0x1ef638u;
    // NOP
    // 0x1ef63c: 0x46000084  c1          0x84
    ctx->pc = 0x1ef63cu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x1ef640: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1ef640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1ef644: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1ef644u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ef648: 0x0  nop
    ctx->pc = 0x1ef648u;
    // NOP
    // 0x1ef64c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x1ef64cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef650: 0x0  nop
    ctx->pc = 0x1ef650u;
    // NOP
    // 0x1ef654: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1EF654u;
    {
        const bool branch_taken_0x1ef654 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EF658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF654u;
        // 0x1ef658: 0xe7a20080  swc1        $f2, 0x80($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef654) {
            ctx->pc = 0x1EF680u;
            goto label_1ef680;
        }
    }
    ctx->pc = 0x1EF65Cu;
    // 0x1ef65c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ef65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ef660: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ef660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef664: 0x0  nop
    ctx->pc = 0x1ef664u;
    // NOP
    // 0x1ef668: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1ef668u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1ef66c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1ef66cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1ef670: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1ef670u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1ef674: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x1ef674u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x1ef678: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1ef678u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ef67c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1ef67cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_1ef680:
    // 0x1ef680: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x1ef680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1ef684: 0x24053210  addiu       $a1, $zero, 0x3210
    ctx->pc = 0x1ef684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12816));
    // 0x1ef688: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ef688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef68c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ef68cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef690: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ef690u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef694: 0xc07797e  jal         func_1DE5F8
    ctx->pc = 0x1EF694u;
    SET_GPR_U32(ctx, 31, 0x1EF69Cu);
    ctx->pc = 0x1EF698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF694u;
    // 0x1ef698: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE5F8u, 0x1EF694u, 0x1EF69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF69Cu;
label_1ef69c:
    // 0x1ef69c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1EF69Cu;
    {
        const bool branch_taken_0x1ef69c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF69Cu;
        // 0x1ef6a0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef69c) {
            ctx->pc = 0x1EF70Cu;
            goto label_1ef70c;
        }
    }
    ctx->pc = 0x1EF6A4u;
    // 0x1ef6a4: 0xc07a25c  jal         func_1E8970
    ctx->pc = 0x1EF6A4u;
    SET_GPR_U32(ctx, 31, 0x1EF6ACu);
    ctx->pc = 0x1EF6A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF6A4u;
    // 0x1ef6a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8970u, 0x1EF6A4u, 0x1EF6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF6ACu;
label_1ef6ac:
    // 0x1ef6ac: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1ef6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1ef6b0: 0x8c432b1c  lw          $v1, 0x2B1C($v0)
    ctx->pc = 0x1ef6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482B1Cu));
    // 0x1ef6b4: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1EF6B4u;
    {
        const bool branch_taken_0x1ef6b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF6B4u;
        // 0x1ef6b8: 0x3c02005a  lui         $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef6b4) {
            ctx->pc = 0x1EF70Cu;
            goto label_1ef70c;
        }
    }
    ctx->pc = 0x1EF6BCu;
    // 0x1ef6bc: 0x3c130048  lui         $s3, 0x48
    ctx->pc = 0x1ef6bcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
    // 0x1ef6c0: 0x24547ee0  addiu       $s4, $v0, 0x7EE0
    ctx->pc = 0x1ef6c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 32480));
    // 0x1ef6c4: 0x8e622b20  lw          $v0, 0x2B20($s3)
    ctx->pc = 0x1ef6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B20u));
label_1ef6c8:
    // 0x1ef6c8: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x1ef6c8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ef6cc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ef6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ef6d0: 0xc07a8e4  jal         func_1EA390
    ctx->pc = 0x1EF6D0u;
    SET_GPR_U32(ctx, 31, 0x1EF6D8u);
    ctx->pc = 0x1EF6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF6D0u;
    // 0x1ef6d4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA390u, 0x1EF6D0u, 0x1EF6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF6D8u;
label_1ef6d8:
    // 0x1ef6d8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ef6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ef6dc: 0x542021  addu        $a0, $v0, $s4
    ctx->pc = 0x1ef6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1ef6e0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF6E0u;
    {
        const bool branch_taken_0x1ef6e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef6e0) {
            ctx->pc = 0x1EF6E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF6E0u;
            // 0x1ef6e4: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF6F8u;
            goto label_1ef6f8;
        }
    }
    ctx->pc = 0x1EF6E8u;
    // 0x1ef6e8: 0xc0c34fe  jal         func_30D3F8
    ctx->pc = 0x1EF6E8u;
    SET_GPR_U32(ctx, 31, 0x1EF6F0u);
    ctx->pc = 0x30D3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D3F8u, 0x1EF6E8u, 0x1EF6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF6F0u;
label_1ef6f0:
    // 0x1ef6f0: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x1EF6F0u;
    {
        const bool branch_taken_0x1ef6f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF6F0u;
        // 0x1ef6f4: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef6f0) {
            ctx->pc = 0x1EF578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef578;
        }
    }
    ctx->pc = 0x1EF6F8u;
label_1ef6f8:
    // 0x1ef6f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ef6f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ef6fc: 0x8c822b1c  lw          $v0, 0x2B1C($a0)
    ctx->pc = 0x1ef6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11036)));
    // 0x1ef700: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1ef700u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ef704: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1EF704u;
    {
        const bool branch_taken_0x1ef704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF704u;
        // 0x1ef708: 0x8e622b20  lw          $v0, 0x2B20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef704) {
            ctx->pc = 0x1EF6C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef6c8;
        }
    }
    ctx->pc = 0x1EF70Cu;
label_1ef70c:
    // 0x1ef70c: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF70Cu;
    {
        const bool branch_taken_0x1ef70c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF70Cu;
        // 0x1ef710: 0x34029550  ori         $v0, $zero, 0x9550 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38224);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef70c) {
            ctx->pc = 0x1EF720u;
            goto label_1ef720;
        }
    }
    ctx->pc = 0x1EF714u;
    // 0x1ef714: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x1ef714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1ef718: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF718u;
    {
        const bool branch_taken_0x1ef718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF718u;
        // 0x1ef71c: 0x34029550  ori         $v0, $zero, 0x9550 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38224);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef718) {
            ctx->pc = 0x1EF730u;
            goto label_1ef730;
        }
    }
    ctx->pc = 0x1EF720u;
label_1ef720:
    // 0x1ef720: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1ef720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1ef724: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1ef724u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ef728: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1ef728u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1ef72c:
    // 0x1ef72c: 0x34029550  ori         $v0, $zero, 0x9550
    ctx->pc = 0x1ef72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38224);
label_1ef730:
    // 0x1ef730: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1ef730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1ef734: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1ef734u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ef738: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1ef738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef73c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1ef73cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ef740: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1ef740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef744: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1ef744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef748: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1ef748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1ef74c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ef74cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ef750: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1ef750u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ef754: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1ef754u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1ef758: 0x8fa30294  lw          $v1, 0x294($sp)
    ctx->pc = 0x1ef758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
    // 0x1ef75c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1ef75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1ef760: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1ef760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1ef764: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1ef764u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ef768: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1ef768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x1ef76c: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x1ef76cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x1ef770: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1ef770u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ef774: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1ef774u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ef778: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1ef778u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ef77c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1ef77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef780: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x1ef780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ef784: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x1ef784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ef788: 0xc6a40008  lwc1        $f4, 0x8($s5)
    ctx->pc = 0x1ef788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1ef78c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1ef78cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1ef790: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1ef790u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1ef794: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1ef794u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1ef798: 0x0  nop
    ctx->pc = 0x1ef798u;
    // NOP
    // 0x1ef79c: 0x0  nop
    ctx->pc = 0x1ef79cu;
    // NOP
    // 0x1ef7a0: 0x46010084  c1          0x10084
    ctx->pc = 0x1ef7a0u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x1ef7a4: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x1ef7a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1ef7a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1ef7a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef7ac: 0x0  nop
    ctx->pc = 0x1ef7acu;
    // NOP
    // 0x1ef7b0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1ef7b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef7b4: 0x0  nop
    ctx->pc = 0x1ef7b4u;
    // NOP
    // 0x1ef7b8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1EF7B8u;
    {
        const bool branch_taken_0x1ef7b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EF7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF7B8u;
        // 0x1ef7bc: 0xe7a20080  swc1        $f2, 0x80($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef7b8) {
            ctx->pc = 0x1EF7E4u;
            goto label_1ef7e4;
        }
    }
    ctx->pc = 0x1EF7C0u;
    // 0x1ef7c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ef7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ef7c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ef7c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef7c8: 0x0  nop
    ctx->pc = 0x1ef7c8u;
    // NOP
    // 0x1ef7cc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1ef7ccu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1ef7d0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1ef7d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1ef7d4: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1ef7d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1ef7d8: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1ef7d8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1ef7dc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1ef7dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ef7e0: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1ef7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_1ef7e4:
    // 0x1ef7e4: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x1ef7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1ef7e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ef7e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef7ec: 0x24053210  addiu       $a1, $zero, 0x3210
    ctx->pc = 0x1ef7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12816));
    // 0x1ef7f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ef7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef7f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ef7f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef7f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ef7f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef7fc: 0xc07797e  jal         func_1DE5F8
    ctx->pc = 0x1EF7FCu;
    SET_GPR_U32(ctx, 31, 0x1EF804u);
    ctx->pc = 0x1EF800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF7FCu;
    // 0x1ef800: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE5F8u, 0x1EF7FCu, 0x1EF804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF804u;
label_1ef804:
    // 0x1ef804: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1EF804u;
    {
        const bool branch_taken_0x1ef804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ef804) {
            ctx->pc = 0x1EF874u;
            goto label_1ef874;
        }
    }
    ctx->pc = 0x1EF80Cu;
    // 0x1ef80c: 0xc07a25c  jal         func_1E8970
    ctx->pc = 0x1EF80Cu;
    SET_GPR_U32(ctx, 31, 0x1EF814u);
    ctx->pc = 0x1EF810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF80Cu;
    // 0x1ef810: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8970u, 0x1EF80Cu, 0x1EF814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF814u;
label_1ef814:
    // 0x1ef814: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1ef814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1ef818: 0x8c432b1c  lw          $v1, 0x2B1C($v0)
    ctx->pc = 0x1ef818u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482B1Cu));
    // 0x1ef81c: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1EF81Cu;
    {
        const bool branch_taken_0x1ef81c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF81Cu;
        // 0x1ef820: 0x3c02005a  lui         $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef81c) {
            ctx->pc = 0x1EF874u;
            goto label_1ef874;
        }
    }
    ctx->pc = 0x1EF824u;
    // 0x1ef824: 0x3c130048  lui         $s3, 0x48
    ctx->pc = 0x1ef824u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
    // 0x1ef828: 0x24547ee0  addiu       $s4, $v0, 0x7EE0
    ctx->pc = 0x1ef828u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 32480));
    // 0x1ef82c: 0x8e622b20  lw          $v0, 0x2B20($s3)
    ctx->pc = 0x1ef82cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B20u));
label_1ef830:
    // 0x1ef830: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x1ef830u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1ef834: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1ef834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1ef838: 0xc07a8e4  jal         func_1EA390
    ctx->pc = 0x1EF838u;
    SET_GPR_U32(ctx, 31, 0x1EF840u);
    ctx->pc = 0x1EF83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EF838u;
    // 0x1ef83c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA390u, 0x1EF838u, 0x1EF840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF840u;
label_1ef840:
    // 0x1ef840: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1ef840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1ef844: 0x542021  addu        $a0, $v0, $s4
    ctx->pc = 0x1ef844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1ef848: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EF848u;
    {
        const bool branch_taken_0x1ef848 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF848u;
        // 0x1ef84c: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef848) {
            ctx->pc = 0x1EF860u;
            goto label_1ef860;
        }
    }
    ctx->pc = 0x1EF850u;
    // 0x1ef850: 0xc0c34fe  jal         func_30D3F8
    ctx->pc = 0x1EF850u;
    SET_GPR_U32(ctx, 31, 0x1EF858u);
    ctx->pc = 0x30D3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D3F8u, 0x1EF850u, 0x1EF858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EF858u;
label_1ef858:
    // 0x1ef858: 0x1440ff4b  bnez        $v0, . + 4 + (-0xB5 << 2)
    ctx->pc = 0x1EF858u;
    {
        const bool branch_taken_0x1ef858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF858u;
        // 0x1ef85c: 0x3c030048  lui         $v1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef858) {
            ctx->pc = 0x1EF588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef588;
        }
    }
    ctx->pc = 0x1EF860u;
label_1ef860:
    // 0x1ef860: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ef860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1ef864: 0x8c622b1c  lw          $v0, 0x2B1C($v1)
    ctx->pc = 0x1ef864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11036)));
    // 0x1ef868: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1ef868u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ef86c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1EF86Cu;
    {
        const bool branch_taken_0x1ef86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF86Cu;
        // 0x1ef870: 0x8e622b20  lw          $v0, 0x2B20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef86c) {
            ctx->pc = 0x1EF830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef830;
        }
    }
    ctx->pc = 0x1EF874u;
label_1ef874:
    // 0x1ef874: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x1EF874u;
    {
        const bool branch_taken_0x1ef874 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF874u;
        // 0x1ef878: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef874) {
            ctx->pc = 0x1EF8A4u;
            goto label_1ef8a4;
        }
    }
    ctx->pc = 0x1EF87Cu;
    // 0x1ef87c: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x1ef87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1ef880: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EF880u;
    {
        const bool branch_taken_0x1ef880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF880u;
        // 0x1ef884: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef880) {
            ctx->pc = 0x1EF8A4u;
            goto label_1ef8a4;
        }
    }
    ctx->pc = 0x1EF888u;
    // 0x1ef888: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x1ef888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef88c: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1ef88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1ef890: 0x0  nop
    ctx->pc = 0x1ef890u;
    // NOP
    // 0x1ef894: 0x0  nop
    ctx->pc = 0x1ef894u;
    // NOP
    // 0x1ef898: 0x46000004  c1          0x4
    ctx->pc = 0x1ef898u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1ef89c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1EF89Cu;
    {
        const bool branch_taken_0x1ef89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF89Cu;
        // 0x1ef8a0: 0xe4401528  swc1        $f0, 0x1528($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5416), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef89c) {
            ctx->pc = 0x1EF8ACu;
            goto label_1ef8ac;
        }
    }
    ctx->pc = 0x1EF8A4u;
label_1ef8a4:
    // 0x1ef8a4: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1ef8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1ef8a8: 0xac401528  sw          $zero, 0x1528($v0)
    ctx->pc = 0x1ef8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5416), GPR_U32(ctx, 0));
label_1ef8ac:
    // 0x1ef8ac: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1ef8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1ef8b0:
    // 0x1ef8b0: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1ef8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1ef8b4: 0x8c431350  lw          $v1, 0x1350($v0)
    ctx->pc = 0x1ef8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4944)));
    // 0x1ef8b8: 0x546001fc  bnel        $v1, $zero, . + 4 + (0x1FC << 2)
    ctx->pc = 0x1EF8B8u;
    {
        const bool branch_taken_0x1ef8b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef8b8) {
            ctx->pc = 0x1EF8BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF8B8u;
            // 0x1ef8bc: 0x8fa20274  lw          $v0, 0x274($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F00ACu;
            goto label_1f00ac;
        }
    }
    ctx->pc = 0x1EF8C0u;
    // 0x1ef8c0: 0x8c4215c8  lw          $v0, 0x15C8($v0)
    ctx->pc = 0x1ef8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5576)));
    // 0x1ef8c4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ef8c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef8c8: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1ef8c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1ef8cc: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1ef8ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1ef8d0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ef8d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ef8d4: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1ef8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef8d8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1ef8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1ef8dc: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1ef8dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1ef8e0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1ef8e0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1ef8e4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1ef8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ef8e8: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x1ef8e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1ef8ec: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1ef8ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef8f0: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1ef8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ef8f4: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x1ef8f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1ef8f8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1ef8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ef8fc: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1EF8FCu;
    {
        const bool branch_taken_0x1ef8fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EF900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF8FCu;
        // 0x1ef900: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef8fc) {
            ctx->pc = 0x1EF92Cu;
            goto label_1ef92c;
        }
    }
    ctx->pc = 0x1EF904u;
    // 0x1ef904: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x1ef904u;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
    // 0x1ef908: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1ef908u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef90c: 0x0  nop
    ctx->pc = 0x1ef90cu;
    // NOP
    // 0x1ef910: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1EF910u;
    {
        const bool branch_taken_0x1ef910 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef910) {
            ctx->pc = 0x1EF92Cu;
            goto label_1ef92c;
        }
    }
    ctx->pc = 0x1EF918u;
    // 0x1ef918: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x1ef918u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x1ef91c: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1ef91cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef920: 0x0  nop
    ctx->pc = 0x1ef920u;
    // NOP
    // 0x1ef924: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1EF924u;
    {
        const bool branch_taken_0x1ef924 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef924) {
            ctx->pc = 0x1EF928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF924u;
            // 0x1ef928: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF92Cu;
            goto label_1ef92c;
        }
    }
    ctx->pc = 0x1EF92Cu;
label_1ef92c:
    // 0x1ef92c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EF92Cu;
    {
        const bool branch_taken_0x1ef92c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF92Cu;
        // 0x1ef930: 0xc7a00094  lwc1        $f0, 0x94($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef92c) {
            ctx->pc = 0x1EF94Cu;
            goto label_1ef94c;
        }
    }
    ctx->pc = 0x1EF934u;
    // 0x1ef934: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ef934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ef938: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ef938u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ef93c: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x1ef93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
    // 0x1ef940: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1ef940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1ef944: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x1ef944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x1ef948: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x1ef948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ef94c:
    // 0x1ef94c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ef94cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ef950: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ef950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ef954: 0x0  nop
    ctx->pc = 0x1ef954u;
    // NOP
    // 0x1ef958: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ef958u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ef95c: 0x0  nop
    ctx->pc = 0x1ef95cu;
    // NOP
    // 0x1ef960: 0x4500029e  bc1f        . + 4 + (0x29E << 2)
    ctx->pc = 0x1EF960u;
    {
        const bool branch_taken_0x1ef960 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EF964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF960u;
        // 0x1ef964: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef960) {
            ctx->pc = 0x1F03DCu;
            goto label_1f03dc;
        }
    }
    ctx->pc = 0x1EF968u;
    // 0x1ef968: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x1ef968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x1ef96c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ef96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ef970: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1ef970u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ef974: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1ef974u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ef978: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1ef978u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ef97c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1ef97cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1ef980: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1ef980u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1ef984: 0x4a0003bf  vwaitq
    ctx->pc = 0x1ef984u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1ef988: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1ef988u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1ef98c: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1ef98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ef990: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x1ef990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1ef994: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1ef994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ef998: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x1ef998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1ef99c: 0xafa202a4  sw          $v0, 0x2A4($sp)
    ctx->pc = 0x1ef99cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 2));
    // 0x1ef9a0: 0xafa3027c  sw          $v1, 0x27C($sp)
    ctx->pc = 0x1ef9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 3));
    // 0x1ef9a4: 0x27a20270  addiu       $v0, $sp, 0x270
    ctx->pc = 0x1ef9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x1ef9a8: 0xafa202a0  sw          $v0, 0x2A0($sp)
    ctx->pc = 0x1ef9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 2));
    // 0x1ef9ac: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1ef9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ef9b0: 0x8fa2027c  lw          $v0, 0x27C($sp)
    ctx->pc = 0x1ef9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
    // 0x1ef9b4: 0x24631438  addiu       $v1, $v1, 0x1438
    ctx->pc = 0x1ef9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5176));
    // 0x1ef9b8: 0xafa402a8  sw          $a0, 0x2A8($sp)
    ctx->pc = 0x1ef9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 680), GPR_U32(ctx, 4));
    // 0x1ef9bc: 0x46000e06  mov.s       $f24, $f1
    ctx->pc = 0x1ef9bcu;
    ctx->f[24] = FPU_MOV_S(ctx->f[1]);
    // 0x1ef9c0: 0x244214d8  addiu       $v0, $v0, 0x14D8
    ctx->pc = 0x1ef9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5336));
    // 0x1ef9c4: 0xafa30280  sw          $v1, 0x280($sp)
    ctx->pc = 0x1ef9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 3));
    // 0x1ef9c8: 0x8fa4027c  lw          $a0, 0x27C($sp)
    ctx->pc = 0x1ef9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
    // 0x1ef9cc: 0x34039550  ori         $v1, $zero, 0x9550
    ctx->pc = 0x1ef9ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38224);
    // 0x1ef9d0: 0xafa2028c  sw          $v0, 0x28C($sp)
    ctx->pc = 0x1ef9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 2));
    // 0x1ef9d4: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x1ef9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x1ef9d8: 0x24841488  addiu       $a0, $a0, 0x1488
    ctx->pc = 0x1ef9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5256));
    // 0x1ef9dc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ef9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ef9e0: 0xafa40288  sw          $a0, 0x288($sp)
    ctx->pc = 0x1ef9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 648), GPR_U32(ctx, 4));
    // 0x1ef9e4: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x1ef9e4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ef9e8: 0xc455ec8c  lwc1        $f21, -0x1374($v0)
    ctx->pc = 0x1ef9e8u;
    { uint32_t bits = FAST_READ32(0x45EC8Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ef9ec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1ef9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1ef9f0: 0xafa30278  sw          $v1, 0x278($sp)
    ctx->pc = 0x1ef9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 3));
    // 0x1ef9f4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1ef9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ef9f8: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1ef9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ef9fc: 0xafb60284  sw          $s6, 0x284($sp)
    ctx->pc = 0x1ef9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 22));
    // 0x1efa00: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1efa00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1efa04: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1efa04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1efa08: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1efa08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efa0c: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x1efa0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1efa10: 0x27be0100  addiu       $fp, $sp, 0x100
    ctx->pc = 0x1efa10u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1efa14: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1efa14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1efa18: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1efa18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1efa1c: 0xafa30298  sw          $v1, 0x298($sp)
    ctx->pc = 0x1efa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 3));
    // 0x1efa20: 0xafa40294  sw          $a0, 0x294($sp)
    ctx->pc = 0x1efa20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 4));
    // 0x1efa24: 0xafa20290  sw          $v0, 0x290($sp)
    ctx->pc = 0x1efa24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 2));
label_1efa28:
    // 0x1efa28: 0x8fa30278  lw          $v1, 0x278($sp)
    ctx->pc = 0x1efa28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x1efa2c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1efa2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1efa30: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1efa30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1efa34: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x1efa34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efa38: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x1efa38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1efa3c: 0xc7a30098  lwc1        $f3, 0x98($sp)
    ctx->pc = 0x1efa3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1efa40: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1efa40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1efa44: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x1efa44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efa48: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x1efa48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x1efa4c: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x1efa4cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x1efa50: 0x8fa402a4  lw          $a0, 0x2A4($sp)
    ctx->pc = 0x1efa50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
    // 0x1efa54: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1efa54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1efa58: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x1efa58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1efa5c: 0xe7a20114  swc1        $f2, 0x114($sp)
    ctx->pc = 0x1efa5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x1efa60: 0xe7a30118  swc1        $f3, 0x118($sp)
    ctx->pc = 0x1efa60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x1efa64: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x1efa64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x1efa68: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1efa68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1efa6c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1efa6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1efa70: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1efa70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1efa74: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x1efa74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1efa78: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x1efa78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efa7c: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x1efa7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efa80: 0xc7a20128  lwc1        $f2, 0x128($sp)
    ctx->pc = 0x1efa80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1efa84: 0xc7a3012c  lwc1        $f3, 0x12C($sp)
    ctx->pc = 0x1efa84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1efa88: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1efa88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1efa8c: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x1efa8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x1efa90: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x1efa90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x1efa94: 0xe7a3010c  swc1        $f3, 0x10C($sp)
    ctx->pc = 0x1efa94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x1efa98: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x1efa98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1efa9c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1efa9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1efaa0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1efaa0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1efaa4: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x1efaa4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1efaa8: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1efaa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1efaac: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x1efaacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x1efab0: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x1efab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x1efab4: 0x8fa30294  lw          $v1, 0x294($sp)
    ctx->pc = 0x1efab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
    // 0x1efab8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1efab8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1efabc: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1efabcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1efac0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1efac0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1efac4: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1efac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1efac8: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x1efac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1efacc: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x1efaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1efad0: 0xc6a40008  lwc1        $f4, 0x8($s5)
    ctx->pc = 0x1efad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1efad4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1efad4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1efad8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1efad8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1efadc: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1efadcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1efae0: 0x0  nop
    ctx->pc = 0x1efae0u;
    // NOP
    // 0x1efae4: 0x0  nop
    ctx->pc = 0x1efae4u;
    // NOP
    // 0x1efae8: 0x46000044  c1          0x44
    ctx->pc = 0x1efae8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1efaec: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1efaecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1efaf0: 0x4601b834  c.lt.s      $f23, $f1
    ctx->pc = 0x1efaf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1efaf4: 0x0  nop
    ctx->pc = 0x1efaf4u;
    // NOP
    // 0x1efaf8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1EFAF8u;
    {
        const bool branch_taken_0x1efaf8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EFAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFAF8u;
        // 0x1efafc: 0xe7a10080  swc1        $f1, 0x80($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efaf8) {
            ctx->pc = 0x1EFB20u;
            goto label_1efb20;
        }
    }
    ctx->pc = 0x1EFB00u;
    // 0x1efb00: 0x0  nop
    ctx->pc = 0x1efb00u;
    // NOP
    // 0x1efb04: 0x0  nop
    ctx->pc = 0x1efb04u;
    // NOP
    // 0x1efb08: 0x4601c003  div.s       $f0, $f24, $f1
    ctx->pc = 0x1efb08u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[24], ctx->f[1]); }
    // 0x1efb0c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1efb0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1efb10: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1efb10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1efb14: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1efb14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1efb18: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1efb18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1efb1c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1efb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_1efb20:
    // 0x1efb20: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x1efb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1efb24: 0x24053210  addiu       $a1, $zero, 0x3210
    ctx->pc = 0x1efb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12816));
    // 0x1efb28: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1efb28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efb2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1efb2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efb30: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1efb30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efb34: 0xc07797e  jal         func_1DE5F8
    ctx->pc = 0x1EFB34u;
    SET_GPR_U32(ctx, 31, 0x1EFB3Cu);
    ctx->pc = 0x1EFB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFB34u;
    // 0x1efb38: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE5F8u, 0x1EFB34u, 0x1EFB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFB3Cu;
label_1efb3c:
    // 0x1efb3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1efb3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efb40: 0x26c30001  addiu       $v1, $s6, 0x1
    ctx->pc = 0x1efb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1efb44: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1EFB44u;
    {
        const bool branch_taken_0x1efb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFB44u;
        // 0x1efb48: 0xafa3029c  sw          $v1, 0x29C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efb44) {
            ctx->pc = 0x1EFBB4u;
            goto label_1efbb4;
        }
    }
    ctx->pc = 0x1EFB4Cu;
    // 0x1efb4c: 0xc07a25c  jal         func_1E8970
    ctx->pc = 0x1EFB4Cu;
    SET_GPR_U32(ctx, 31, 0x1EFB54u);
    ctx->pc = 0x1EFB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFB4Cu;
    // 0x1efb50: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8970u, 0x1EFB4Cu, 0x1EFB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFB54u;
label_1efb54:
    // 0x1efb54: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1efb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1efb58: 0x8c432b1c  lw          $v1, 0x2B1C($v0)
    ctx->pc = 0x1efb58u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482B1Cu));
    // 0x1efb5c: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1EFB5Cu;
    {
        const bool branch_taken_0x1efb5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFB5Cu;
        // 0x1efb60: 0x3c02005a  lui         $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efb5c) {
            ctx->pc = 0x1EFBB4u;
            goto label_1efbb4;
        }
    }
    ctx->pc = 0x1EFB64u;
    // 0x1efb64: 0x3c130048  lui         $s3, 0x48
    ctx->pc = 0x1efb64u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
    // 0x1efb68: 0x24547ee0  addiu       $s4, $v0, 0x7EE0
    ctx->pc = 0x1efb68u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 32480));
    // 0x1efb6c: 0x8e622b20  lw          $v0, 0x2B20($s3)
    ctx->pc = 0x1efb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B20u));
label_1efb70:
    // 0x1efb70: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x1efb70u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1efb74: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1efb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1efb78: 0xc07a8e4  jal         func_1EA390
    ctx->pc = 0x1EFB78u;
    SET_GPR_U32(ctx, 31, 0x1EFB80u);
    ctx->pc = 0x1EFB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFB78u;
    // 0x1efb7c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA390u, 0x1EFB78u, 0x1EFB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFB80u;
label_1efb80:
    // 0x1efb80: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1efb80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1efb84: 0x542021  addu        $a0, $v0, $s4
    ctx->pc = 0x1efb84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1efb88: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EFB88u;
    {
        const bool branch_taken_0x1efb88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1efb88) {
            ctx->pc = 0x1EFB8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EFB88u;
            // 0x1efb8c: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EFBA0u;
            goto label_1efba0;
        }
    }
    ctx->pc = 0x1EFB90u;
    // 0x1efb90: 0xc0c34fe  jal         func_30D3F8
    ctx->pc = 0x1EFB90u;
    SET_GPR_U32(ctx, 31, 0x1EFB98u);
    ctx->pc = 0x30D3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D3F8u, 0x1EFB90u, 0x1EFB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFB98u;
label_1efb98:
    // 0x1efb98: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1EFB98u;
    {
        const bool branch_taken_0x1efb98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFB98u;
        // 0x1efb9c: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efb98) {
            ctx->pc = 0x1EFC98u;
            goto label_1efc98;
        }
    }
    ctx->pc = 0x1EFBA0u;
label_1efba0:
    // 0x1efba0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1efba0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1efba4: 0x8c822b1c  lw          $v0, 0x2B1C($a0)
    ctx->pc = 0x1efba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11036)));
    // 0x1efba8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1efba8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1efbac: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1EFBACu;
    {
        const bool branch_taken_0x1efbac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EFBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFBACu;
        // 0x1efbb0: 0x8e622b20  lw          $v0, 0x2B20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efbac) {
            ctx->pc = 0x1EFB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1efb70;
        }
    }
    ctx->pc = 0x1EFBB4u;
label_1efbb4:
    // 0x1efbb4: 0x1240003c  beqz        $s2, . + 4 + (0x3C << 2)
    ctx->pc = 0x1EFBB4u;
    {
        const bool branch_taken_0x1efbb4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFBB4u;
        // 0x1efbb8: 0x8fa30274  lw          $v1, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efbb4) {
            ctx->pc = 0x1EFCA8u;
            goto label_1efca8;
        }
    }
    ctx->pc = 0x1EFBBCu;
    // 0x1efbbc: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x1efbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1efbc0: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x1EFBC0u;
    {
        const bool branch_taken_0x1efbc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFBC0u;
        // 0x1efbc4: 0x8fa20274  lw          $v0, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efbc0) {
            ctx->pc = 0x1EFCA8u;
            goto label_1efca8;
        }
    }
    ctx->pc = 0x1EFBC8u;
    // 0x1efbc8: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x1efbc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1efbcc: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x1efbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efbd0: 0x2e48821  addu        $s1, $s7, $a0
    ctx->pc = 0x1efbd0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x1efbd4: 0x400013  mtlo        $v0
    ctx->pc = 0x1efbd4u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x1efbd8: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1efbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1efbdc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1efbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1efbe0: 0x0  nop
    ctx->pc = 0x1efbe0u;
    // NOP
    // 0x1efbe4: 0x0  nop
    ctx->pc = 0x1efbe4u;
    // NOP
    // 0x1efbe8: 0x46000004  c1          0x4
    ctx->pc = 0x1efbe8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1efbec: 0x72c21800  madd        $v1, $s6, $v0
    ctx->pc = 0x1efbecu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1efbf0: 0x38080  sll         $s0, $v1, 2
    ctx->pc = 0x1efbf0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1efbf4: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x1efbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1efbf8: 0xe44013e8  swc1        $f0, 0x13E8($v0)
    ctx->pc = 0x1efbf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5096), bits); }
    // 0x1efbfc: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x1efbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1efc00: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1efc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1efc04: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x1efc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1efc08: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1efc08u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1efc0c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1efc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1efc10: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x1efc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1efc14: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1efc14u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1efc18: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1efc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1efc1c: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x1efc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1efc20: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x1efc20u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1efc24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1efc24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1efc28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1efc28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1efc2c: 0x0  nop
    ctx->pc = 0x1efc2cu;
    // NOP
    // 0x1efc30: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x1efc30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1efc34: 0x0  nop
    ctx->pc = 0x1efc34u;
    // NOP
    // 0x1efc38: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1EFC38u;
    {
        const bool branch_taken_0x1efc38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1efc38) {
            ctx->pc = 0x1EFC3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EFC38u;
            // 0x1efc3c: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EFC40u;
            goto label_1efc40;
        }
    }
    ctx->pc = 0x1EFC40u;
label_1efc40:
    // 0x1efc40: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1efc40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1efc44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1efc44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1efc48: 0x0  nop
    ctx->pc = 0x1efc48u;
    // NOP
    // 0x1efc4c: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x1efc4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1efc50: 0x0  nop
    ctx->pc = 0x1efc50u;
    // NOP
    // 0x1efc54: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1EFC54u;
    {
        const bool branch_taken_0x1efc54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1efc54) {
            ctx->pc = 0x1EFC58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EFC54u;
            // 0x1efc58: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EFC5Cu;
            goto label_1efc5c;
        }
    }
    ctx->pc = 0x1EFC5Cu;
label_1efc5c:
    // 0x1efc5c: 0x460d6b02  mul.s       $f12, $f13, $f13
    ctx->pc = 0x1efc5cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1efc60: 0x460c0b01  sub.s       $f12, $f1, $f12
    ctx->pc = 0x1efc60u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x1efc64: 0x460c0304  c1          0xC0304
    ctx->pc = 0x1efc64u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x1efc68: 0xc0e404c  jal         func_390130
    ctx->pc = 0x1EFC68u;
    SET_GPR_U32(ctx, 31, 0x1EFC70u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x1EFC68u, 0x1EFC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFC70u;
label_1efc70:
    // 0x1efc70: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x1efc70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x1efc74: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x1efc74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x1efc78: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1efc78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1efc7c: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x1efc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1efc80: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1efc80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1efc84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1efc84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1efc88: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1efc88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1efc8c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1efc8cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1efc90: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1EFC90u;
    {
        const bool branch_taken_0x1efc90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC90u;
        // 0x1efc94: 0xe4411438  swc1        $f1, 0x1438($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5176), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efc90) {
            ctx->pc = 0x1EFCD0u;
            goto label_1efcd0;
        }
    }
    ctx->pc = 0x1EFC98u;
label_1efc98:
    // 0x1efc98: 0x8e622b20  lw          $v0, 0x2B20($s3)
    ctx->pc = 0x1efc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
    // 0x1efc9c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1efc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1efca0: 0x1000ffc4  b           . + 4 + (-0x3C << 2)
    ctx->pc = 0x1EFCA0u;
    {
        const bool branch_taken_0x1efca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFCA0u;
        // 0x1efca4: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efca0) {
            ctx->pc = 0x1EFBB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1efbb4;
        }
    }
    ctx->pc = 0x1EFCA8u;
label_1efca8:
    // 0x1efca8: 0x8fa4027c  lw          $a0, 0x27C($sp)
    ctx->pc = 0x1efca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
    // 0x1efcac: 0x600013  mtlo        $v1
    ctx->pc = 0x1efcacu;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x1efcb0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1efcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1efcb4: 0x72c31000  madd        $v0, $s6, $v1
    ctx->pc = 0x1efcb4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1efcb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1efcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1efcbc: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x1efcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1efcc0: 0x8fa40280  lw          $a0, 0x280($sp)
    ctx->pc = 0x1efcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x1efcc4: 0xac6013e8  sw          $zero, 0x13E8($v1)
    ctx->pc = 0x1efcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5096), GPR_U32(ctx, 0));
    // 0x1efcc8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1efcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1efccc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1efcccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1efcd0:
    // 0x1efcd0: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x1efcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efcd4: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x1efcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1efcd8: 0xc7a30098  lwc1        $f3, 0x98($sp)
    ctx->pc = 0x1efcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1efcdc: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x1efcdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x1efce0: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x1efce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efce4: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x1efce4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x1efce8: 0x461618c2  mul.s       $f3, $f3, $f22
    ctx->pc = 0x1efce8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[22]);
    // 0x1efcec: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x1efcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x1efcf0: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1efcf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1efcf4: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x1efcf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1efcf8: 0xe7a20114  swc1        $f2, 0x114($sp)
    ctx->pc = 0x1efcf8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x1efcfc: 0xe7a30118  swc1        $f3, 0x118($sp)
    ctx->pc = 0x1efcfcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x1efd00: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x1efd00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x1efd04: 0x8fa302a4  lw          $v1, 0x2A4($sp)
    ctx->pc = 0x1efd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
    // 0x1efd08: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1efd08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1efd0c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1efd0cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1efd10: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1efd10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1efd14: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x1efd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1efd18: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x1efd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efd1c: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x1efd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efd20: 0xc7a20128  lwc1        $f2, 0x128($sp)
    ctx->pc = 0x1efd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1efd24: 0xc7a3012c  lwc1        $f3, 0x12C($sp)
    ctx->pc = 0x1efd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1efd28: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1efd28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1efd2c: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x1efd2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x1efd30: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x1efd30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x1efd34: 0xe7a3010c  swc1        $f3, 0x10C($sp)
    ctx->pc = 0x1efd34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x1efd38: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x1efd38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1efd3c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1efd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1efd40: 0x8fa402a8  lw          $a0, 0x2A8($sp)
    ctx->pc = 0x1efd40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x1efd44: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1efd44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1efd48: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1efd48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1efd4c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1efd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efd50: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1efd50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1efd54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1efd54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1efd58: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1efd58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1efd5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1efd5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1efd60: 0x8fa30294  lw          $v1, 0x294($sp)
    ctx->pc = 0x1efd60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
    // 0x1efd64: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1efd64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1efd68: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1efd68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1efd6c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1efd6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1efd70: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1efd70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x1efd74: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x1efd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x1efd78: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1efd78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1efd7c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1efd7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1efd80: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1efd80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1efd84: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1efd84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1efd88: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x1efd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1efd8c: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x1efd8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1efd90: 0xc6a40008  lwc1        $f4, 0x8($s5)
    ctx->pc = 0x1efd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1efd94: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1efd94u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1efd98: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1efd98u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1efd9c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1efd9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1efda0: 0x0  nop
    ctx->pc = 0x1efda0u;
    // NOP
    // 0x1efda4: 0x0  nop
    ctx->pc = 0x1efda4u;
    // NOP
    // 0x1efda8: 0x46000044  c1          0x44
    ctx->pc = 0x1efda8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1efdac: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1efdacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1efdb0: 0x4601b834  c.lt.s      $f23, $f1
    ctx->pc = 0x1efdb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1efdb4: 0x0  nop
    ctx->pc = 0x1efdb4u;
    // NOP
    // 0x1efdb8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1EFDB8u;
    {
        const bool branch_taken_0x1efdb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EFDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFDB8u;
        // 0x1efdbc: 0xe7a10080  swc1        $f1, 0x80($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efdb8) {
            ctx->pc = 0x1EFDE0u;
            goto label_1efde0;
        }
    }
    ctx->pc = 0x1EFDC0u;
    // 0x1efdc0: 0x0  nop
    ctx->pc = 0x1efdc0u;
    // NOP
    // 0x1efdc4: 0x0  nop
    ctx->pc = 0x1efdc4u;
    // NOP
    // 0x1efdc8: 0x4601c003  div.s       $f0, $f24, $f1
    ctx->pc = 0x1efdc8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[24], ctx->f[1]); }
    // 0x1efdcc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1efdccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1efdd0: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1efdd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1efdd4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1efdd4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1efdd8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1efdd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1efddc: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1efddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_1efde0:
    // 0x1efde0: 0xe7b50270  swc1        $f21, 0x270($sp)
    ctx->pc = 0x1efde0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
    // 0x1efde4: 0x7fa000a0  sq          $zero, 0xA0($sp)
    ctx->pc = 0x1efde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 0));
    // 0x1efde8: 0x7fa000b0  sq          $zero, 0xB0($sp)
    ctx->pc = 0x1efde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 0));
    // 0x1efdec: 0x8fa50284  lw          $a1, 0x284($sp)
    ctx->pc = 0x1efdecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
    // 0x1efdf0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1efdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1efdf4: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x1efdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x1efdf8: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x1efdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x1efdfc: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1efdfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1efe00: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x1efe00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1efe04: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x1efe04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x1efe08: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x1efe08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x1efe0c: 0x8fa602a0  lw          $a2, 0x2A0($sp)
    ctx->pc = 0x1efe0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1efe10: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x1efe10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x1efe14: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x1efe14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x1efe18: 0xe7b500c0  swc1        $f21, 0xC0($sp)
    ctx->pc = 0x1efe18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1efe1c: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x1efe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x1efe20: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x1efe20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x1efe24: 0xac620044  sw          $v0, 0x44($v1)
    ctx->pc = 0x1efe24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
    // 0x1efe28: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x1efe28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x1efe2c: 0xc077824  jal         func_1DE090
    ctx->pc = 0x1EFE2Cu;
    SET_GPR_U32(ctx, 31, 0x1EFE34u);
    ctx->pc = 0x1EFE30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFE2Cu;
    // 0x1efe30: 0xafa000e8  sw          $zero, 0xE8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE090u, 0x1EFE2Cu, 0x1EFE34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFE34u;
label_1efe34:
    // 0x1efe34: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EFE34u;
    {
        const bool branch_taken_0x1efe34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFE34u;
        // 0x1efe38: 0x8fa30274  lw          $v1, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efe34) {
            ctx->pc = 0x1EFE6Cu;
            goto label_1efe6c;
        }
    }
    ctx->pc = 0x1EFE3Cu;
    // 0x1efe3c: 0xc7a00270  lwc1        $f0, 0x270($sp)
    ctx->pc = 0x1efe3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efe40: 0x600013  mtlo        $v1
    ctx->pc = 0x1efe40u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x1efe44: 0x8fa40288  lw          $a0, 0x288($sp)
    ctx->pc = 0x1efe44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
    // 0x1efe48: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1efe48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1efe4c: 0x0  nop
    ctx->pc = 0x1efe4cu;
    // NOP
    // 0x1efe50: 0x0  nop
    ctx->pc = 0x1efe50u;
    // NOP
    // 0x1efe54: 0x46000004  c1          0x4
    ctx->pc = 0x1efe54u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1efe58: 0x72c31000  madd        $v0, $s6, $v1
    ctx->pc = 0x1efe58u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1efe5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1efe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1efe60: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1efe60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1efe64: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1EFE64u;
    {
        const bool branch_taken_0x1efe64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFE64u;
        // 0x1efe68: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1efe64) {
            ctx->pc = 0x1EFE88u;
            goto label_1efe88;
        }
    }
    ctx->pc = 0x1EFE6Cu;
label_1efe6c:
    // 0x1efe6c: 0x8fa40288  lw          $a0, 0x288($sp)
    ctx->pc = 0x1efe6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 648)));
    // 0x1efe70: 0x600013  mtlo        $v1
    ctx->pc = 0x1efe70u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x1efe74: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1efe74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1efe78: 0x72c31000  madd        $v0, $s6, $v1
    ctx->pc = 0x1efe78u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1efe7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1efe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1efe80: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1efe80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1efe84: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1efe84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1efe88:
    // 0x1efe88: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x1efe88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efe8c: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x1efe8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1efe90: 0xc7a30098  lwc1        $f3, 0x98($sp)
    ctx->pc = 0x1efe90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1efe94: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1efe94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1efe98: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x1efe98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efe9c: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x1efe9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x1efea0: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x1efea0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x1efea4: 0x8fa20278  lw          $v0, 0x278($sp)
    ctx->pc = 0x1efea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x1efea8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1efea8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1efeac: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x1efeacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1efeb0: 0xe7a20114  swc1        $f2, 0x114($sp)
    ctx->pc = 0x1efeb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x1efeb4: 0xe7a30118  swc1        $f3, 0x118($sp)
    ctx->pc = 0x1efeb4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x1efeb8: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x1efeb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x1efebc: 0x8fa302a4  lw          $v1, 0x2A4($sp)
    ctx->pc = 0x1efebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 676)));
    // 0x1efec0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1efec0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1efec4: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1efec4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1efec8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1efec8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1efecc: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x1efeccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1efed0: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x1efed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efed4: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x1efed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1efed8: 0xc7a20128  lwc1        $f2, 0x128($sp)
    ctx->pc = 0x1efed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1efedc: 0xc7a3012c  lwc1        $f3, 0x12C($sp)
    ctx->pc = 0x1efedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1efee0: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x1efee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1efee4: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x1efee4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x1efee8: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x1efee8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x1efeec: 0xe7a3010c  swc1        $f3, 0x10C($sp)
    ctx->pc = 0x1efeecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x1efef0: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x1efef0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1efef4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1efef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1efef8: 0x8fa402a8  lw          $a0, 0x2A8($sp)
    ctx->pc = 0x1efef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 680)));
    // 0x1efefc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1efefcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1eff00: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1eff00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eff04: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1eff04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eff08: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1eff08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x1eff0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1eff0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1eff10: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1eff10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eff14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1eff14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1eff18: 0x8fa30294  lw          $v1, 0x294($sp)
    ctx->pc = 0x1eff18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 660)));
    // 0x1eff1c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1eff1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1eff20: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1eff20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1eff24: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1eff24u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1eff28: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x1eff28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x1eff2c: 0x8fa20298  lw          $v0, 0x298($sp)
    ctx->pc = 0x1eff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 664)));
    // 0x1eff30: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1eff30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1eff34: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1eff34u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1eff38: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1eff38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eff3c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1eff3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1eff40: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x1eff40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1eff44: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x1eff44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1eff48: 0xc6a40008  lwc1        $f4, 0x8($s5)
    ctx->pc = 0x1eff48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1eff4c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1eff4cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1eff50: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1eff50u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1eff54: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1eff54u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1eff58: 0x0  nop
    ctx->pc = 0x1eff58u;
    // NOP
    // 0x1eff5c: 0x0  nop
    ctx->pc = 0x1eff5cu;
    // NOP
    // 0x1eff60: 0x46000044  c1          0x44
    ctx->pc = 0x1eff60u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1eff64: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1eff64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1eff68: 0x4601b834  c.lt.s      $f23, $f1
    ctx->pc = 0x1eff68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1eff6c: 0x0  nop
    ctx->pc = 0x1eff6cu;
    // NOP
    // 0x1eff70: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1EFF70u;
    {
        const bool branch_taken_0x1eff70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EFF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFF70u;
        // 0x1eff74: 0xe7a10080  swc1        $f1, 0x80($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff70) {
            ctx->pc = 0x1EFF98u;
            goto label_1eff98;
        }
    }
    ctx->pc = 0x1EFF78u;
    // 0x1eff78: 0x0  nop
    ctx->pc = 0x1eff78u;
    // NOP
    // 0x1eff7c: 0x0  nop
    ctx->pc = 0x1eff7cu;
    // NOP
    // 0x1eff80: 0x4601c003  div.s       $f0, $f24, $f1
    ctx->pc = 0x1eff80u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[24], ctx->f[1]); }
    // 0x1eff84: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1eff84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1eff88: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x1eff88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1eff8c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x1eff8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x1eff90: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1eff90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1eff94: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1eff94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_1eff98:
    // 0x1eff98: 0xe7b50270  swc1        $f21, 0x270($sp)
    ctx->pc = 0x1eff98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
    // 0x1eff9c: 0x7fa000a0  sq          $zero, 0xA0($sp)
    ctx->pc = 0x1eff9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 0));
    // 0x1effa0: 0x7fa000b0  sq          $zero, 0xB0($sp)
    ctx->pc = 0x1effa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 0));
    // 0x1effa4: 0x8fa50284  lw          $a1, 0x284($sp)
    ctx->pc = 0x1effa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 644)));
    // 0x1effa8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1effa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1effac: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x1effacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x1effb0: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x1effb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x1effb4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1effb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1effb8: 0x8fa40290  lw          $a0, 0x290($sp)
    ctx->pc = 0x1effb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1effbc: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x1effbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x1effc0: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x1effc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x1effc4: 0x8fa602a0  lw          $a2, 0x2A0($sp)
    ctx->pc = 0x1effc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1effc8: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x1effc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x1effcc: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x1effccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x1effd0: 0xe7b500c0  swc1        $f21, 0xC0($sp)
    ctx->pc = 0x1effd0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1effd4: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x1effd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x1effd8: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x1effd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x1effdc: 0xac620044  sw          $v0, 0x44($v1)
    ctx->pc = 0x1effdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 2));
    // 0x1effe0: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x1effe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
    // 0x1effe4: 0xc077824  jal         func_1DE090
    ctx->pc = 0x1EFFE4u;
    SET_GPR_U32(ctx, 31, 0x1EFFECu);
    ctx->pc = 0x1EFFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EFFE4u;
    // 0x1effe8: 0xafa000e8  sw          $zero, 0xE8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE090u, 0x1EFFE4u, 0x1EFFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EFFECu;
label_1effec:
    // 0x1effec: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1EFFECu;
    {
        const bool branch_taken_0x1effec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFFECu;
        // 0x1efff0: 0x8fa30274  lw          $v1, 0x274($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1effec) {
            ctx->pc = 0x1F0024u;
            goto label_1f0024;
        }
    }
    ctx->pc = 0x1EFFF4u;
    // 0x1efff4: 0xc7a00270  lwc1        $f0, 0x270($sp)
    ctx->pc = 0x1efff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1efff8: 0x600013  mtlo        $v1
    ctx->pc = 0x1efff8u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x1efffc: 0x8fa4028c  lw          $a0, 0x28C($sp)
    ctx->pc = 0x1efffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
    // 0x1f0000: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1f0000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f0004: 0x0  nop
    ctx->pc = 0x1f0004u;
    // NOP
    // 0x1f0008: 0x0  nop
    ctx->pc = 0x1f0008u;
    // NOP
    // 0x1f000c: 0x46000004  c1          0x4
    ctx->pc = 0x1f000cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f0010: 0x72c31000  madd        $v0, $s6, $v1
    ctx->pc = 0x1f0010u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f0014: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f0014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f0018: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1f0018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f001c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F001Cu;
    {
        const bool branch_taken_0x1f001c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F001Cu;
        // 0x1f0020: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f001c) {
            ctx->pc = 0x1F0040u;
            goto label_1f0040;
        }
    }
    ctx->pc = 0x1F0024u;
label_1f0024:
    // 0x1f0024: 0x8fa4028c  lw          $a0, 0x28C($sp)
    ctx->pc = 0x1f0024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 652)));
    // 0x1f0028: 0x600013  mtlo        $v1
    ctx->pc = 0x1f0028u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x1f002c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1f002cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f0030: 0x72c31000  madd        $v0, $s6, $v1
    ctx->pc = 0x1f0030u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f0034: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f0034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f0038: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1f0038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f003c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f003cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1f0040:
    // 0x1f0040: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x1f0040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f0044: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x1f0044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0048: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x1f0048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f004c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1f004cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x1f0050: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1f0050u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x1f0054: 0x8fb6029c  lw          $s6, 0x29C($sp)
    ctx->pc = 0x1f0054u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 668)));
    // 0x1f0058: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1f0058u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1f005c: 0x2ac20002  slti        $v0, $s6, 0x2
    ctx->pc = 0x1f005cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f0060: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x1f0060u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1f0064: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x1f0064u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1f0068: 0x1440fe6f  bnez        $v0, . + 4 + (-0x191 << 2)
    ctx->pc = 0x1F0068u;
    {
        const bool branch_taken_0x1f0068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0068u;
        // 0x1f006c: 0xe7a00098  swc1        $f0, 0x98($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0068) {
            ctx->pc = 0x1EFA28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1efa28;
        }
    }
    ctx->pc = 0x1F0070u;
    // 0x1f0070: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f0070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f0074: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f0074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0078: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f0078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f007c: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x1f007cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x1f0080: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1f0080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1f0084: 0xe7c00004  swc1        $f0, 0x4($fp)
    ctx->pc = 0x1f0084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
    // 0x1f0088: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1f0088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f008c: 0x3c01c190  lui         $at, 0xC190
    ctx->pc = 0x1f008cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49552 << 16));
    // 0x1f0090: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f0090u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f0094: 0x8c4415c8  lw          $a0, 0x15C8($v0)
    ctx->pc = 0x1f0094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5576)));
    // 0x1f0098: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x1f0098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
    // 0x1f009c: 0xc0b15e8  jal         func_2C57A0
    ctx->pc = 0x1F009Cu;
    SET_GPR_U32(ctx, 31, 0x1F00A4u);
    ctx->pc = 0x1F00A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F009Cu;
    // 0x1f00a0: 0xafa0010c  sw          $zero, 0x10C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C57A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C57A0u, 0x1F009Cu, 0x1F00A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F00A4u;
label_1f00a4:
    // 0x1f00a4: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x1F00A4u;
    {
        const bool branch_taken_0x1f00a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F00A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F00A4u;
        // 0x1f00a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f00a4) {
            ctx->pc = 0x1F03DCu;
            goto label_1f03dc;
        }
    }
    ctx->pc = 0x1F00ACu;
label_1f00ac:
    // 0x1f00ac: 0x104000ca  beqz        $v0, . + 4 + (0xCA << 2)
    ctx->pc = 0x1F00ACu;
    {
        const bool branch_taken_0x1f00ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F00B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F00ACu;
        // 0x1f00b0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f00ac) {
            ctx->pc = 0x1F03D8u;
            goto label_1f03d8;
        }
    }
    ctx->pc = 0x1F00B4u;
    // 0x1f00b4: 0x8c43bd48  lw          $v1, -0x42B8($v0)
    ctx->pc = 0x1f00b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950216)));
    // 0x1f00b8: 0x106000c8  beqz        $v1, . + 4 + (0xC8 << 2)
    ctx->pc = 0x1F00B8u;
    {
        const bool branch_taken_0x1f00b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F00BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F00B8u;
        // 0x1f00bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f00b8) {
            ctx->pc = 0x1F03DCu;
            goto label_1f03dc;
        }
    }
    ctx->pc = 0x1F00C0u;
    // 0x1f00c0: 0x8c620100  lw          $v0, 0x100($v1)
    ctx->pc = 0x1f00c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x1f00c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f00c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f00c8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1f00c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1f00cc: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x1f00ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f00d0: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1f00d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1f00d4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1f00d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1f00d8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1f00d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f00dc: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x1f00dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1f00e0: 0x46012036  c.le.s      $f4, $f1
    ctx->pc = 0x1f00e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f00e4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1f00e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f00e8: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x1f00e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1f00ec: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1f00ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f00f0: 0x4501fcbe  bc1t        . + 4 + (-0x342 << 2)
    ctx->pc = 0x1F00F0u;
    {
        const bool branch_taken_0x1f00f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F00F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F00F0u;
        // 0x1f00f4: 0xe7a1009c  swc1        $f1, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f00f0) {
            ctx->pc = 0x1EF3ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ef3ec;
        }
    }
    ctx->pc = 0x1F00F8u;
    // 0x1f00f8: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x1f00f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
    // 0x1f00fc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1f00fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f0100: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1f0100u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f0104: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1f0104u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f0108: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1f0108u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f010c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1f010cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f0110: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1f0110u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1f0114: 0x4a0003bf  vwaitq
    ctx->pc = 0x1f0114u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1f0118: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1f0118u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f011c: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1f011cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f0120: 0x8c620100  lw          $v0, 0x100($v1)
    ctx->pc = 0x1f0120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x1f0124: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x1f0124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1f0128: 0xc4410040  lwc1        $f1, 0x40($v0)
    ctx->pc = 0x1f0128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f012c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1f012cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x1f0130: 0xe7a10100  swc1        $f1, 0x100($sp)
    ctx->pc = 0x1f0130u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1f0134: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1f0134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0138: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x1f0138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x1f013c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1f013cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f0140: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x1f0140u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x1f0144: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1f0144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0148: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x1f0148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
    // 0x1f014c: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x1f014cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x1f0150: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1f0150u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f0154: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1f0154u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f0158: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1f0158u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f015c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1f015cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f0160: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1f0160u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1f0164: 0x4a0003bf  vwaitq
    ctx->pc = 0x1f0164u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1f0168: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1f0168u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f016c: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x1f016cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f0170: 0x34029560  ori         $v0, $zero, 0x9560
    ctx->pc = 0x1f0170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38240);
    // 0x1f0174: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1f0174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1f0178: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1f0178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f017c: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x1f017cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f0180: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1f0180u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1f0184: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1f0184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f0188: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x1f0188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f018c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1f018cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1f0190: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1f0190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f0194: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x1f0194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f0198: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x1f0198u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1f019c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1f019cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1f01a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f01a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f01a4: 0x0  nop
    ctx->pc = 0x1f01a4u;
    // NOP
    // 0x1f01a8: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x1f01a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f01ac: 0x0  nop
    ctx->pc = 0x1f01acu;
    // NOP
    // 0x1f01b0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F01B0u;
    {
        const bool branch_taken_0x1f01b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F01B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F01B0u;
        // 0x1f01b4: 0x60f02d  daddu       $fp, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f01b0) {
            ctx->pc = 0x1F01C0u;
            goto label_1f01c0;
        }
    }
    ctx->pc = 0x1F01B8u;
    // 0x1f01b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F01B8u;
    {
        const bool branch_taken_0x1f01b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F01BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F01B8u;
        // 0x1f01bc: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f01b8) {
            ctx->pc = 0x1F01D0u;
            goto label_1f01d0;
        }
    }
    ctx->pc = 0x1F01C0u;
label_1f01c0:
    // 0x1f01c0: 0x460d2034  c.lt.s      $f4, $f13
    ctx->pc = 0x1f01c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f01c4: 0x0  nop
    ctx->pc = 0x1f01c4u;
    // NOP
    // 0x1f01c8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F01C8u;
    {
        const bool branch_taken_0x1f01c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f01c8) {
            ctx->pc = 0x1F01CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F01C8u;
            // 0x1f01cc: 0x46002346  mov.s       $f13, $f4 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F01D0u;
            goto label_1f01d0;
        }
    }
    ctx->pc = 0x1F01D0u;
label_1f01d0:
    // 0x1f01d0: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x1f01d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x1f01d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f01d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f01d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f01d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f01dc: 0x0  nop
    ctx->pc = 0x1f01dcu;
    // NOP
    // 0x1f01e0: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x1f01e0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1f01e4: 0x460c0304  c1          0xC0304
    ctx->pc = 0x1f01e4u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x1f01e8: 0xc0e404c  jal         func_390130
    ctx->pc = 0x1F01E8u;
    SET_GPR_U32(ctx, 31, 0x1F01F0u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x1F01E8u, 0x1F01F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F01F0u;
label_1f01f0:
    // 0x1f01f0: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x1f01f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x1f01f4: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x1f01f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x1f01f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f01f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f01fc: 0x34029560  ori         $v0, $zero, 0x9560
    ctx->pc = 0x1f01fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38240);
    // 0x1f0200: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1f0200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1f0204: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x1f0204u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f0208: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1f0208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f020c: 0xc7c30000  lwc1        $f3, 0x0($fp)
    ctx->pc = 0x1f020cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f0210: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1f0210u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1f0214: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1f0214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f0218: 0xc7c30004  lwc1        $f3, 0x4($fp)
    ctx->pc = 0x1f0218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f021c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1f021cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1f0220: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1f0220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f0224: 0xc7c30008  lwc1        $f3, 0x8($fp)
    ctx->pc = 0x1f0224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f0228: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x1f0228u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1f022c: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x1f022cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1f0230: 0x0  nop
    ctx->pc = 0x1f0230u;
    // NOP
    // 0x1f0234: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x1f0234u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0238: 0x0  nop
    ctx->pc = 0x1f0238u;
    // NOP
    // 0x1f023c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1F023Cu;
    {
        const bool branch_taken_0x1f023c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F0240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F023Cu;
        // 0x1f0240: 0x34028000  ori         $v0, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f023c) {
            ctx->pc = 0x1F0254u;
            goto label_1f0254;
        }
    }
    ctx->pc = 0x1F0244u;
    // 0x1f0244: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1f0244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x1f0248: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f0248u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f024c: 0x0  nop
    ctx->pc = 0x1f024cu;
    // NOP
    // 0x1f0250: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x1f0250u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1f0254:
    // 0x1f0254: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1f0254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x1f0258: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f0258u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f025c: 0x2e28021  addu        $s0, $s7, $v0
    ctx->pc = 0x1f025cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1f0260: 0xc60013e4  lwc1        $f0, 0x13E4($s0)
    ctx->pc = 0x1f0260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0264: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1f0264u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1f0268: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1f0268u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f026c: 0x0  nop
    ctx->pc = 0x1f026cu;
    // NOP
    // 0x1f0270: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F0270u;
    {
        const bool branch_taken_0x1f0270 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F0274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0270u;
        // 0x1f0274: 0xe60013e4  swc1        $f0, 0x13E4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5092), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0270) {
            ctx->pc = 0x1F0280u;
            goto label_1f0280;
        }
    }
    ctx->pc = 0x1F0278u;
    // 0x1f0278: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1f0278u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1f027c: 0xe60013e4  swc1        $f0, 0x13E4($s0)
    ctx->pc = 0x1f027cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5092), bits); }
label_1f0280:
    // 0x1f0280: 0xc60c13e4  lwc1        $f12, 0x13E4($s0)
    ctx->pc = 0x1f0280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f0284: 0x3c014190  lui         $at, 0x4190
    ctx->pc = 0x1f0284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16784 << 16));
    // 0x1f0288: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1f0288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1f028c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f028cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1f0290: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f0290u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f0294: 0x46156303  div.s       $f12, $f12, $f21
    ctx->pc = 0x1f0294u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[21]); }
    // 0x1f0298: 0xc0e3f5e  jal         func_38FD78
    ctx->pc = 0x1F0298u;
    SET_GPR_U32(ctx, 31, 0x1F02A0u);
    ctx->pc = 0x1F029Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0298u;
    // 0x1f029c: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x1F0298u, 0x1F02A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F02A0u;
label_1f02a0:
    // 0x1f02a0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f02a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f02a4: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x1f02a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1f02a8: 0x38e20014  xori        $v0, $a3, 0x14
    ctx->pc = 0x1f02a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)20);
    // 0x1f02ac: 0x2380a  movz        $a3, $zero, $v0
    ctx->pc = 0x1f02acu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 0));
    // 0x1f02b0: 0x18e00045  blez        $a3, . + 4 + (0x45 << 2)
    ctx->pc = 0x1F02B0u;
    {
        const bool branch_taken_0x1f02b0 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1F02B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F02B0u;
        // 0x1f02b4: 0x34029560  ori         $v0, $zero, 0x9560 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38240);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f02b0) {
            ctx->pc = 0x1F03C8u;
            goto label_1f03c8;
        }
    }
    ctx->pc = 0x1F02B8u;
    // 0x1f02b8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1f02b8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f02bc: 0x0  nop
    ctx->pc = 0x1f02bcu;
    // NOP
    // 0x1f02c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f02c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f02c4: 0xc60113e4  lwc1        $f1, 0x13E4($s0)
    ctx->pc = 0x1f02c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f02c8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1f02c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1f02cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f02ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f02d0: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x1f02d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f02d4: 0x0  nop
    ctx->pc = 0x1f02d4u;
    // NOP
    // 0x1f02d8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F02D8u;
    {
        const bool branch_taken_0x1f02d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F02DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F02D8u;
        // 0x1f02dc: 0xe60013e4  swc1        $f0, 0x13E4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5092), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f02d8) {
            ctx->pc = 0x1F02E8u;
            goto label_1f02e8;
        }
    }
    ctx->pc = 0x1F02E0u;
    // 0x1f02e0: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1f02e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1f02e4: 0xe60013e4  swc1        $f0, 0x13E4($s0)
    ctx->pc = 0x1f02e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5092), bits); }
label_1f02e8:
    // 0x1f02e8: 0x27ab0130  addiu       $t3, $sp, 0x130
    ctx->pc = 0x1f02e8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x1f02ec: 0x27aa0180  addiu       $t2, $sp, 0x180
    ctx->pc = 0x1f02ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x1f02f0: 0x27a901d0  addiu       $t1, $sp, 0x1D0
    ctx->pc = 0x1f02f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x1f02f4: 0x27a80220  addiu       $t0, $sp, 0x220
    ctx->pc = 0x1f02f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
    // 0x1f02f8: 0x340294d8  ori         $v0, $zero, 0x94D8
    ctx->pc = 0x1f02f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38104);
    // 0x1f02fc: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x1f02fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0300: 0x140782d  daddu       $t7, $t2, $zero
    ctx->pc = 0x1f0300u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0304: 0x120702d  daddu       $t6, $t1, $zero
    ctx->pc = 0x1f0304u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0308: 0x100682d  daddu       $t5, $t0, $zero
    ctx->pc = 0x1f0308u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f030c: 0x2e23021  addu        $a2, $s7, $v0
    ctx->pc = 0x1f030cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1f0310: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f0310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0314: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x1f0314u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f0318:
    // 0x1f0318: 0x2071823  subu        $v1, $s0, $a3
    ctx->pc = 0x1f0318u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x1f031c: 0xc4c0ff10  lwc1        $f0, -0xF0($a2)
    ctx->pc = 0x1f031cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0320: 0x24640014  addiu       $a0, $v1, 0x14
    ctx->pc = 0x1f0320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1f0324: 0x183102a  slt         $v0, $t4, $v1
    ctx->pc = 0x1f0324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f0328: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x1f0328u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1f032c: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x1f032cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f0330: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f0330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f0334: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f0334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f0338: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x1f0338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1f033c: 0x1e32021  addu        $a0, $t7, $v1
    ctx->pc = 0x1f033cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x1f0340: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1f0340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1f0344: 0x1c32821  addu        $a1, $t6, $v1
    ctx->pc = 0x1f0344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x1f0348: 0x1a31821  addu        $v1, $t5, $v1
    ctx->pc = 0x1f0348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x1f034c: 0x2a020014  slti        $v0, $s0, 0x14
    ctx->pc = 0x1f034cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1f0350: 0xc4c0ff60  lwc1        $f0, -0xA0($a2)
    ctx->pc = 0x1f0350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0354: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1f0354u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1f0358: 0xc4c1ffb0  lwc1        $f1, -0x50($a2)
    ctx->pc = 0x1f0358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f035c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1f035cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1f0360: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x1f0360u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1f0364: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1F0364u;
    {
        const bool branch_taken_0x1f0364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F0368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0364u;
        // 0x1f0368: 0xe4620000  swc1        $f2, 0x0($v1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0364) {
            ctx->pc = 0x1F0318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0318;
        }
    }
    ctx->pc = 0x1F036Cu;
    // 0x1f036c: 0x340294d8  ori         $v0, $zero, 0x94D8
    ctx->pc = 0x1f036cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38104);
    // 0x1f0370: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x1f0370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0374: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1f0374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1f0378: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1f0378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f037c: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x1f037cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0380: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x1f0380u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0384: 0x24100013  addiu       $s0, $zero, 0x13
    ctx->pc = 0x1f0384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1f0388:
    // 0x1f0388: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1f0388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f038c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1f038cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1f0390: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1f0390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1f0394: 0xe441ff10  swc1        $f1, -0xF0($v0)
    ctx->pc = 0x1f0394u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967056), bits); }
    // 0x1f0398: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1f0398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f039c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1f039cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1f03a0: 0xe440ff60  swc1        $f0, -0xA0($v0)
    ctx->pc = 0x1f03a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967136), bits); }
    // 0x1f03a4: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1f03a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f03a8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1f03a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1f03ac: 0xe441ffb0  swc1        $f1, -0x50($v0)
    ctx->pc = 0x1f03acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967216), bits); }
    // 0x1f03b0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1f03b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f03b4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1f03b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1f03b8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1f03b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1f03bc: 0x601fff2  bgez        $s0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1F03BCu;
    {
        const bool branch_taken_0x1f03bc = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1F03C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F03BCu;
        // 0x1f03c0: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f03bc) {
            ctx->pc = 0x1F0388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0388;
        }
    }
    ctx->pc = 0x1F03C4u;
    // 0x1f03c4: 0x34029560  ori         $v0, $zero, 0x9560
    ctx->pc = 0x1f03c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38240);
label_1f03c8:
    // 0x1f03c8: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x1f03c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1f03cc: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x1f03ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x1f03d0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1f03d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f03d4: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f03d4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1f03d8:
    // 0x1f03d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f03d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f03dc:
    // 0x1f03dc: 0xdfb002b0  ld          $s0, 0x2B0($sp)
    ctx->pc = 0x1f03dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1f03e0: 0xdfb102b8  ld          $s1, 0x2B8($sp)
    ctx->pc = 0x1f03e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 696)));
    // 0x1f03e4: 0xdfb202c0  ld          $s2, 0x2C0($sp)
    ctx->pc = 0x1f03e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x1f03e8: 0xdfb302c8  ld          $s3, 0x2C8($sp)
    ctx->pc = 0x1f03e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 712)));
    // 0x1f03ec: 0xdfb402d0  ld          $s4, 0x2D0($sp)
    ctx->pc = 0x1f03ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1f03f0: 0xdfb502d8  ld          $s5, 0x2D8($sp)
    ctx->pc = 0x1f03f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 728)));
    // 0x1f03f4: 0xdfb602e0  ld          $s6, 0x2E0($sp)
    ctx->pc = 0x1f03f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1f03f8: 0xdfb702e8  ld          $s7, 0x2E8($sp)
    ctx->pc = 0x1f03f8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 744)));
    // 0x1f03fc: 0xdfbe02f0  ld          $fp, 0x2F0($sp)
    ctx->pc = 0x1f03fcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x1f0400: 0xdfbf02f8  ld          $ra, 0x2F8($sp)
    ctx->pc = 0x1f0400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 760)));
    // 0x1f0404: 0xc7b80320  lwc1        $f24, 0x320($sp)
    ctx->pc = 0x1f0404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1f0408: 0xc7b70318  lwc1        $f23, 0x318($sp)
    ctx->pc = 0x1f0408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 792)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1f040c: 0xc7b60310  lwc1        $f22, 0x310($sp)
    ctx->pc = 0x1f040cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f0410: 0xc7b50308  lwc1        $f21, 0x308($sp)
    ctx->pc = 0x1f0410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f0414: 0xc7b40300  lwc1        $f20, 0x300($sp)
    ctx->pc = 0x1f0414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f0418: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0418u;
        // 0x1f041c: 0x27bd0330  addiu       $sp, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0420u;
}

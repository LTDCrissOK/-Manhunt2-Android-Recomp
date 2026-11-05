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

// Function: sub_001DE768
// Address: 0x1de768 - 0x1de940
void sub_001DE768_0x1de768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE768_0x1de768");
#endif

    switch (ctx->pc) {
        case 0x1de7a0u: goto label_1de7a0;
        case 0x1de7b8u: goto label_1de7b8;
        case 0x1de7ccu: goto label_1de7cc;
        case 0x1de800u: goto label_1de800;
        case 0x1de81cu: goto label_1de81c;
        case 0x1de868u: goto label_1de868;
        case 0x1de884u: goto label_1de884;
        case 0x1de8d0u: goto label_1de8d0;
        default: break;
    }

    ctx->pc = 0x1de768u;

    // 0x1de768: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1de768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1de76c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1de76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1de770: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1de770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1de774: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1de774u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de778: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1de778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1de77c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1de77cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de780: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1de780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1de784: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1de784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1de788: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1de788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x1de78c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1de78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x1de790: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1de790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x1de794: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1de794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1de798: 0xc077fee  jal         func_1DFFB8
    ctx->pc = 0x1DE798u;
    SET_GPR_U32(ctx, 31, 0x1DE7A0u);
    ctx->pc = 0x1DE79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE798u;
    // 0x1de79c: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFFB8u, 0x1DE798u, 0x1DE7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE7A0u;
label_1de7a0:
    // 0x1de7a0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE7A0u;
    {
        const bool branch_taken_0x1de7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7A0u;
        // 0x1de7a4: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de7a0) {
            ctx->pc = 0x1DE7B0u;
            goto label_1de7b0;
        }
    }
    ctx->pc = 0x1DE7A8u;
    // 0x1de7a8: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1DE7A8u;
    {
        const bool branch_taken_0x1de7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7A8u;
        // 0x1de7ac: 0x8c6291c0  lw          $v0, -0x6E40($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de7a8) {
            ctx->pc = 0x1DE910u;
            goto label_1de910;
        }
    }
    ctx->pc = 0x1DE7B0u;
label_1de7b0:
    // 0x1de7b0: 0xc0f75c2  jal         func_3DD708
    ctx->pc = 0x1DE7B0u;
    SET_GPR_U32(ctx, 31, 0x1DE7B8u);
    ctx->pc = 0x1DE7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE7B0u;
    // 0x1de7b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD708u, 0x1DE7B0u, 0x1DE7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE7B8u;
label_1de7b8:
    // 0x1de7b8: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1DE7B8u;
    {
        const bool branch_taken_0x1de7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7B8u;
        // 0x1de7bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de7b8) {
            ctx->pc = 0x1DE910u;
            goto label_1de910;
        }
    }
    ctx->pc = 0x1DE7C0u;
    // 0x1de7c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1de7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de7c4: 0xc077e7a  jal         func_1DF9E8
    ctx->pc = 0x1DE7C4u;
    SET_GPR_U32(ctx, 31, 0x1DE7CCu);
    ctx->pc = 0x1DE7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE7C4u;
    // 0x1de7c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF9E8u, 0x1DE7C4u, 0x1DE7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE7CCu;
label_1de7cc:
    // 0x1de7cc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1de7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x1de7d0: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1de7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de7d4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1de7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1de7d8: 0x8c8391f4  lw          $v1, -0x6E0C($a0)
    ctx->pc = 0x1de7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F91F4u));
    // 0x1de7dc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1de7dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de7e0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1de7e0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de7e4: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DE7E4u;
    {
        const bool branch_taken_0x1de7e4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1DE7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE7E4u;
        // 0x1de7e8: 0xe44091b0  swc1        $f0, -0x6E50($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294939056), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de7e4) {
            ctx->pc = 0x1DE82Cu;
            goto label_1de82c;
        }
    }
    ctx->pc = 0x1DE7ECu;
    // 0x1de7ec: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x1de7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x1de7f0: 0x3c15001e  lui         $s5, 0x1E
    ctx->pc = 0x1de7f0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)30 << 16));
    // 0x1de7f4: 0x2452c758  addiu       $s2, $v0, -0x38A8
    ctx->pc = 0x1de7f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952792));
    // 0x1de7f8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1de7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x66C758u));
    // 0x1de7fc: 0x0  nop
    ctx->pc = 0x1de7fcu;
    // NOP
label_1de800:
    // 0x1de800: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1de800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de804: 0x26a7dd38  addiu       $a3, $s5, -0x22C8
    ctx->pc = 0x1de804u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 4294958392));
    // 0x1de808: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1de808u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de80c: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x1de80cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1de810: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1de810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1de814: 0xc0dbdf4  jal         func_36F7D0
    ctx->pc = 0x1DE814u;
    SET_GPR_U32(ctx, 31, 0x1DE81Cu);
    ctx->pc = 0x1DE818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE814u;
    // 0x1de818: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F7D0u, 0x1DE814u, 0x1DE81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE81Cu;
label_1de81c:
    // 0x1de81c: 0x8ec391f4  lw          $v1, -0x6E0C($s6)
    ctx->pc = 0x1de81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294939124)));
    // 0x1de820: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1de820u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1de824: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1DE824u;
    {
        const bool branch_taken_0x1de824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de824) {
            ctx->pc = 0x1DE828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE824u;
            // 0x1de828: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1de800;
        }
    }
    ctx->pc = 0x1DE82Cu;
label_1de82c:
    // 0x1de82c: 0x8e320034  lw          $s2, 0x34($s1)
    ctx->pc = 0x1de82cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1de830: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DE830u;
    {
        const bool branch_taken_0x1de830 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE830u;
        // 0x1de834: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de830) {
            ctx->pc = 0x1DE840u;
            goto label_1de840;
        }
    }
    ctx->pc = 0x1DE838u;
    // 0x1de838: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1DE838u;
    {
        const bool branch_taken_0x1de838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE838u;
        // 0x1de83c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de838) {
            ctx->pc = 0x1DE910u;
            goto label_1de910;
        }
    }
    ctx->pc = 0x1DE840u;
label_1de840:
    // 0x1de840: 0xae330024  sw          $s3, 0x24($s1)
    ctx->pc = 0x1de840u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 19));
    // 0x1de844: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1de844u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x1de848: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x1de848u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x1de84c: 0x261000d0  addiu       $s0, $s0, 0xD0
    ctx->pc = 0x1de84cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x1de850: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1de850u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de854: 0x8e45001c  lw          $a1, 0x1C($s2)
    ctx->pc = 0x1de854u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x1de858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1de858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de85c: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x1de85cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1de860: 0xc07a814  jal         func_1EA050
    ctx->pc = 0x1DE860u;
    SET_GPR_U32(ctx, 31, 0x1DE868u);
    ctx->pc = 0x1DE864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE860u;
    // 0x1de864: 0x8e470014  lw          $a3, 0x14($s2) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA050u, 0x1DE860u, 0x1DE868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE868u;
label_1de868:
    // 0x1de868: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1de868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1de86c: 0xae30002c  sw          $s0, 0x2C($s1)
    ctx->pc = 0x1de86cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 16));
    // 0x1de870: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x1de870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x1de874: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1de874u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1de878: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x1de878u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1de87c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1DE87Cu;
    SET_GPR_U32(ctx, 31, 0x1DE884u);
    ctx->pc = 0x1DE880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE87Cu;
    // 0x1de880: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1DE87Cu, 0x1DE884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE884u;
label_1de884:
    // 0x1de884: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x1de884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1de888: 0x26620020  addiu       $v0, $s3, 0x20
    ctx->pc = 0x1de888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1de88c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1de88cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1de890: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1de890u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1de894: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1de894u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1de898: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1de898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1de89c: 0xc6e091b0  lwc1        $f0, -0x6E50($s7)
    ctx->pc = 0x1de89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4294939056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de8a0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1de8a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1de8a4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1de8a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de8a8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1de8a8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1de8ac: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1de8acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1de8b0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1de8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1de8b4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1de8b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de8b8: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x1de8b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1de8bc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1de8bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1de8c0: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1de8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1de8c4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1de8c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1de8c8: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x1DE8C8u;
    SET_GPR_U32(ctx, 31, 0x1DE8D0u);
    ctx->pc = 0x1DE8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE8C8u;
    // 0x1de8cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1DE8C8u, 0x1DE8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DE8D0u;
label_1de8d0:
    // 0x1de8d0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1de8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1de8d4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1de8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de8d8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1de8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1de8dc: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x1de8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1de8e0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1de8e0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1de8e4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1de8e4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1de8e8: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1de8e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1de8ec: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x1de8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x1de8f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1de8f4: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x1de8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x1de8f8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1de8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1de8fc: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1de8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de900: 0xae230038  sw          $v1, 0x38($s1)
    ctx->pc = 0x1de900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
    // 0x1de904: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x1de904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x1de908: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1de908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1de90c: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x1de90cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
label_1de910:
    // 0x1de910: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1de910u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1de914: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1de914u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1de918: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1de918u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1de91c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1de91cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1de920: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1de920u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1de924: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1de924u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1de928: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1de928u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1de92c: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1de92cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1de930: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1de930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1de934: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE934u;
        // 0x1de938: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE93Cu;
    // 0x1de93c: 0x0  nop
    ctx->pc = 0x1de93cu;
    // NOP
    ctx->pc = 0x1de940u;
}

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

// Function: sub_00230728
// Address: 0x230728 - 0x2316e0
void sub_00230728_0x230728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230728_0x230728");
#endif

    switch (ctx->pc) {
        case 0x2307b0u: goto label_2307b0;
        case 0x2307b8u: goto label_2307b8;
        case 0x23081cu: goto label_23081c;
        case 0x230828u: goto label_230828;
        case 0x230834u: goto label_230834;
        case 0x2308acu: goto label_2308ac;
        case 0x2309d4u: goto label_2309d4;
        case 0x230b50u: goto label_230b50;
        case 0x230c00u: goto label_230c00;
        case 0x230c08u: goto label_230c08;
        case 0x230ce4u: goto label_230ce4;
        case 0x230cf0u: goto label_230cf0;
        case 0x230d00u: goto label_230d00;
        case 0x230e54u: goto label_230e54;
        case 0x230f04u: goto label_230f04;
        case 0x230f0cu: goto label_230f0c;
        case 0x230fd8u: goto label_230fd8;
        case 0x230fe4u: goto label_230fe4;
        case 0x230ff4u: goto label_230ff4;
        case 0x23102cu: goto label_23102c;
        case 0x23103cu: goto label_23103c;
        case 0x23105cu: goto label_23105c;
        case 0x23106cu: goto label_23106c;
        case 0x23107cu: goto label_23107c;
        case 0x23122cu: goto label_23122c;
        case 0x231234u: goto label_231234;
        case 0x231308u: goto label_231308;
        case 0x23131cu: goto label_23131c;
        case 0x23133cu: goto label_23133c;
        case 0x23134cu: goto label_23134c;
        case 0x23135cu: goto label_23135c;
        case 0x23136cu: goto label_23136c;
        case 0x23137cu: goto label_23137c;
        case 0x23138cu: goto label_23138c;
        case 0x23139cu: goto label_23139c;
        case 0x2313e8u: goto label_2313e8;
        case 0x2314f0u: goto label_2314f0;
        case 0x2314f8u: goto label_2314f8;
        case 0x2315ccu: goto label_2315cc;
        case 0x2315e0u: goto label_2315e0;
        case 0x231600u: goto label_231600;
        case 0x231610u: goto label_231610;
        case 0x231620u: goto label_231620;
        case 0x231630u: goto label_231630;
        case 0x231640u: goto label_231640;
        case 0x231650u: goto label_231650;
        case 0x231660u: goto label_231660;
        case 0x2316acu: goto label_2316ac;
        default: break;
    }

    ctx->pc = 0x230728u;

    // 0x230728: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x230728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x23072c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x23072cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x230730: 0xffb201c0  sd          $s2, 0x1C0($sp)
    ctx->pc = 0x230730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 18));
    // 0x230734: 0xffb001b0  sd          $s0, 0x1B0($sp)
    ctx->pc = 0x230734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 16));
    // 0x230738: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x230738u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23073c: 0xffb101b8  sd          $s1, 0x1B8($sp)
    ctx->pc = 0x23073cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 17));
    // 0x230740: 0xffb301c8  sd          $s3, 0x1C8($sp)
    ctx->pc = 0x230740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 19));
    // 0x230744: 0xffb401d0  sd          $s4, 0x1D0($sp)
    ctx->pc = 0x230744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 20));
    // 0x230748: 0xffb501d8  sd          $s5, 0x1D8($sp)
    ctx->pc = 0x230748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 21));
    // 0x23074c: 0xffb601e0  sd          $s6, 0x1E0($sp)
    ctx->pc = 0x23074cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 22));
    // 0x230750: 0xffb701e8  sd          $s7, 0x1E8($sp)
    ctx->pc = 0x230750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 488), GPR_U64(ctx, 23));
    // 0x230754: 0xffbe01f0  sd          $fp, 0x1F0($sp)
    ctx->pc = 0x230754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 30));
    // 0x230758: 0xffbf01f8  sd          $ra, 0x1F8($sp)
    ctx->pc = 0x230758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 31));
    // 0x23075c: 0xe7b40200  swc1        $f20, 0x200($sp)
    ctx->pc = 0x23075cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x230760: 0x8e430418  lw          $v1, 0x418($s2)
    ctx->pc = 0x230760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1048)));
    // 0x230764: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x230764u;
    {
        const bool branch_taken_0x230764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x230768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230764u;
        // 0x230768: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230764) {
            ctx->pc = 0x230784u;
            goto label_230784;
        }
    }
    ctx->pc = 0x23076Cu;
    // 0x23076c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23076Cu;
    {
        const bool branch_taken_0x23076c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x230770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23076Cu;
        // 0x230770: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23076c) {
            ctx->pc = 0x230784u;
            goto label_230784;
        }
    }
    ctx->pc = 0x230774u;
    // 0x230774: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x230774u;
    {
        const bool branch_taken_0x230774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x230778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230774u;
        // 0x230778: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230774) {
            ctx->pc = 0x230784u;
            goto label_230784;
        }
    }
    ctx->pc = 0x23077Cu;
    // 0x23077c: 0x146203cc  bne         $v1, $v0, . + 4 + (0x3CC << 2)
    ctx->pc = 0x23077Cu;
    {
        const bool branch_taken_0x23077c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x230780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23077Cu;
        // 0x230780: 0xdfb001b0  ld          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23077c) {
            ctx->pc = 0x2316B0u;
            goto label_2316b0;
        }
    }
    ctx->pc = 0x230784u;
label_230784:
    // 0x230784: 0x8e420334  lw          $v0, 0x334($s2)
    ctx->pc = 0x230784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x230788: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x230788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x23078c: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x23078cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x230790: 0x106403c7  beq         $v1, $a0, . + 4 + (0x3C7 << 2)
    ctx->pc = 0x230790u;
    {
        const bool branch_taken_0x230790 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x230794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230790u;
        // 0x230794: 0xdfb001b0  ld          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230790) {
            ctx->pc = 0x2316B0u;
            goto label_2316b0;
        }
    }
    ctx->pc = 0x230798u;
    // 0x230798: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x230798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23079c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23079cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2307a0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2307a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2307a4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2307a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2307a8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2307A8u;
    SET_GPR_U32(ctx, 31, 0x2307B0u);
    ctx->pc = 0x2307ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2307A8u;
    // 0x2307ac: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2307A8u, 0x2307B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2307B0u;
label_2307b0:
    // 0x2307b0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2307B0u;
    SET_GPR_U32(ctx, 31, 0x2307B8u);
    ctx->pc = 0x2307B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2307B0u;
    // 0x2307b4: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2307B0u, 0x2307B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2307B8u;
label_2307b8:
    // 0x2307b8: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x2307b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x2307bc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x2307bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2307c0: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x2307c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x2307c4: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x2307c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x2307c8: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x2307c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x2307cc: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x2307ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2307d0: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x2307d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x2307d4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2307d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x2307d8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2307d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2307dc: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x2307dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x2307e0: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x2307e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x2307e4: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x2307e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x2307e8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2307e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2307ec: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2307ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2307f0: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x2307f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x2307f4: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x2307f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x2307f8: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x2307f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x2307fc: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x2307fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x230800: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x230800u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x230804: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x230804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x230808: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x230808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x23080c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x23080cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230810: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x230810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x230814: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x230814u;
    SET_GPR_U32(ctx, 31, 0x23081Cu);
    ctx->pc = 0x230818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230814u;
    // 0x230818: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x230814u, 0x23081Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23081Cu;
label_23081c:
    // 0x23081c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x23081cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230820: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x230820u;
    SET_GPR_U32(ctx, 31, 0x230828u);
    ctx->pc = 0x230824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230820u;
    // 0x230824: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x230820u, 0x230828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230828u;
label_230828:
    // 0x230828: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x230828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x23082c: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x23082Cu;
    SET_GPR_U32(ctx, 31, 0x230834u);
    ctx->pc = 0x230830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23082Cu;
    // 0x230830: 0xafa001a8  sw          $zero, 0x1A8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x23082Cu, 0x230834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230834u;
label_230834:
    // 0x230834: 0x8e450338  lw          $a1, 0x338($s2)
    ctx->pc = 0x230834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
    // 0x230838: 0x8e430418  lw          $v1, 0x418($s2)
    ctx->pc = 0x230838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1048)));
    // 0x23083c: 0x8ca40088  lw          $a0, 0x88($a1)
    ctx->pc = 0x23083cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x230840: 0x3863000e  xori        $v1, $v1, 0xE
    ctx->pc = 0x230840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)14);
    // 0x230844: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x230844u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x230848: 0x2482fff4  addiu       $v0, $a0, -0xC
    ctx->pc = 0x230848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
    // 0x23084c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x23084cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x230850: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x230850u;
    {
        const bool branch_taken_0x230850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230850u;
        // 0x230854: 0xafa301a4  sw          $v1, 0x1A4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230850) {
            ctx->pc = 0x230890u;
            goto label_230890;
        }
    }
    ctx->pc = 0x230858u;
    // 0x230858: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x230858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23085c: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x23085cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x230860: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x230860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x230864: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x230864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x230868: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x230868u;
    {
        const bool branch_taken_0x230868 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x23086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230868u;
        // 0x23086c: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230868) {
            ctx->pc = 0x230888u;
            goto label_230888;
        }
    }
    ctx->pc = 0x230870u;
    // 0x230870: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x230870u;
    {
        const bool branch_taken_0x230870 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x230874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230870u;
        // 0x230874: 0x2402010f  addiu       $v0, $zero, 0x10F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230870) {
            ctx->pc = 0x230888u;
            goto label_230888;
        }
    }
    ctx->pc = 0x230878u;
    // 0x230878: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x230878u;
    {
        const bool branch_taken_0x230878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x23087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230878u;
        // 0x23087c: 0x24020110  addiu       $v0, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230878) {
            ctx->pc = 0x230888u;
            goto label_230888;
        }
    }
    ctx->pc = 0x230880u;
    // 0x230880: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x230880u;
    {
        const bool branch_taken_0x230880 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x230880) {
            ctx->pc = 0x230884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230880u;
            // 0x230884: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230894u;
            goto label_230894;
        }
    }
    ctx->pc = 0x230888u;
label_230888:
    // 0x230888: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x230888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23088c: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x23088cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
label_230890:
    // 0x230890: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x230890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_230894:
    // 0x230894: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x230894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
    // 0x230898: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x230898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x23089c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x23089Cu;
    {
        const bool branch_taken_0x23089c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23089c) {
            ctx->pc = 0x2308A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23089Cu;
            // 0x2308a0: 0x8e42036c  lw          $v0, 0x36C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2308B8u;
            goto label_2308b8;
        }
    }
    ctx->pc = 0x2308A4u;
    // 0x2308a4: 0xc08da92  jal         func_236A48
    ctx->pc = 0x2308A4u;
    SET_GPR_U32(ctx, 31, 0x2308ACu);
    ctx->pc = 0x2308A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2308A4u;
    // 0x2308a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236A48u, 0x2308A4u, 0x2308ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2308ACu;
label_2308ac:
    // 0x2308ac: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2308ACu;
    {
        const bool branch_taken_0x2308ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2308ac) {
            ctx->pc = 0x2308B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2308ACu;
            // 0x2308b0: 0x8e430418  lw          $v1, 0x418($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2308DCu;
            goto label_2308dc;
        }
    }
    ctx->pc = 0x2308B4u;
    // 0x2308b4: 0x8e42036c  lw          $v0, 0x36C($s2)
    ctx->pc = 0x2308b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 876)));
label_2308b8:
    // 0x2308b8: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x2308b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x2308bc: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2308bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x2308c0: 0x451824  and         $v1, $v0, $a1
    ctx->pc = 0x2308c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2308c4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2308c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2308c8: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x2308c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x2308cc: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x2308ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x2308d0: 0x2c770001  sltiu       $s7, $v1, 0x1
    ctx->pc = 0x2308d0u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2308d4: 0x100001c7  b           . + 4 + (0x1C7 << 2)
    ctx->pc = 0x2308D4u;
    {
        const bool branch_taken_0x2308d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2308D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2308D4u;
        // 0x2308d8: 0x2c540001  sltiu       $s4, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2308d4) {
            ctx->pc = 0x230FF4u;
            goto label_230ff4;
        }
    }
    ctx->pc = 0x2308DCu;
label_2308dc:
    // 0x2308dc: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2308dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2308e0: 0x14620040  bne         $v1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2308E0u;
    {
        const bool branch_taken_0x2308e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2308E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2308E0u;
        // 0x2308e4: 0x8e450104  lw          $a1, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2308e0) {
            ctx->pc = 0x2309E4u;
            goto label_2309e4;
        }
    }
    ctx->pc = 0x2308E8u;
    // 0x2308e8: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x2308e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2308ec: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2308ECu;
    {
        const bool branch_taken_0x2308ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2308ec) {
            ctx->pc = 0x2309E4u;
            goto label_2309e4;
        }
    }
    ctx->pc = 0x2308F4u;
    // 0x2308f4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2308f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2308f8: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x2308f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x2308fc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2308fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x230900: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x230900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230904: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x230904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x230908: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x230908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x23090c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x23090cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x230910: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x230910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x230914: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x230914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
    // 0x230918: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x230918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
    // 0x23091c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x23091cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x230920: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x230920u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x230924: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x230924u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x230928: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x230928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23092c: 0xc7a30110  lwc1        $f3, 0x110($sp)
    ctx->pc = 0x23092cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x230930: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x230930u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x230934: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x230934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230938: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x230938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23093c: 0xc7a2011c  lwc1        $f2, 0x11C($sp)
    ctx->pc = 0x23093cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x230940: 0xe7a300f0  swc1        $f3, 0xF0($sp)
    ctx->pc = 0x230940u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x230944: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x230944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x230948: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x230948u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x23094c: 0xe7a200fc  swc1        $f2, 0xFC($sp)
    ctx->pc = 0x23094cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x230950: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x230950u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x230954: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x230954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x230958: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x230958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23095c: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x23095cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x230960: 0xc4620060  lwc1        $f2, 0x60($v1)
    ctx->pc = 0x230960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x230964: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x230964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x230968: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x230968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23096c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x23096cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230970: 0xe7a20100  swc1        $f2, 0x100($sp)
    ctx->pc = 0x230970u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x230974: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x230974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x230978: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x230978u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x23097c: 0xe7a3010c  swc1        $f3, 0x10C($sp)
    ctx->pc = 0x23097cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x230980: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x230980u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x230984: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x230984u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x230988: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x230988u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23098c: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x23098cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x230990: 0xc7a30110  lwc1        $f3, 0x110($sp)
    ctx->pc = 0x230990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x230994: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x230994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x230998: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x230998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23099c: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x23099cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2309a0: 0xc7a2011c  lwc1        $f2, 0x11C($sp)
    ctx->pc = 0x2309a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2309a4: 0xe7a300f0  swc1        $f3, 0xF0($sp)
    ctx->pc = 0x2309a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2309a8: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x2309a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2309ac: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x2309acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2309b0: 0xe7a200fc  swc1        $f2, 0xFC($sp)
    ctx->pc = 0x2309b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x2309b4: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x2309b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2309b8: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x2309b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2309bc: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x2309bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2309c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2309c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2309c4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2309c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2309c8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2309c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2309cc: 0xc08c5e8  jal         func_2317A0
    ctx->pc = 0x2309CCu;
    SET_GPR_U32(ctx, 31, 0x2309D4u);
    ctx->pc = 0x2309D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2309CCu;
    // 0x2309d0: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2317A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2317A0u, 0x2309CCu, 0x2309D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2309D4u;
label_2309d4:
    // 0x2309d4: 0x10400187  beqz        $v0, . + 4 + (0x187 << 2)
    ctx->pc = 0x2309D4u;
    {
        const bool branch_taken_0x2309d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2309D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2309D4u;
        // 0x2309d8: 0xdfb001b0  ld          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2309d4) {
            ctx->pc = 0x230FF4u;
            goto label_230ff4;
        }
    }
    ctx->pc = 0x2309DCu;
    // 0x2309dc: 0x10000335  b           . + 4 + (0x335 << 2)
    ctx->pc = 0x2309DCu;
    {
        const bool branch_taken_0x2309dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2309E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2309DCu;
        // 0x2309e0: 0xdfb101b8  ld          $s1, 0x1B8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2309dc) {
            ctx->pc = 0x2316B4u;
            goto label_2316b4;
        }
    }
    ctx->pc = 0x2309E4u;
label_2309e4:
    // 0x2309e4: 0x27a80110  addiu       $t0, $sp, 0x110
    ctx->pc = 0x2309e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2309e8: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x2309e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x2309ec: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2309ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2309f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2309f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2309f4: 0x27a90120  addiu       $t1, $sp, 0x120
    ctx->pc = 0x2309f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2309f8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2309f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2309fc: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x2309fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x230a00: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x230a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x230a04: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x230a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x230a08: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x230a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
    // 0x230a0c: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x230a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
    // 0x230a10: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x230a10u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x230a14: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x230a14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x230a18: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x230a18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x230a1c: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x230a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x230a20: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x230a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230a24: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x230a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x230a28: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x230a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230a2c: 0xc7a20128  lwc1        $f2, 0x128($sp)
    ctx->pc = 0x230a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x230a30: 0xc7a3012c  lwc1        $f3, 0x12C($sp)
    ctx->pc = 0x230a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x230a34: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x230a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x230a38: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x230a38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x230a3c: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x230a3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x230a40: 0xe7a3010c  swc1        $f3, 0x10C($sp)
    ctx->pc = 0x230a40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x230a44: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x230a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x230a48: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x230a48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x230a4c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x230a4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x230a50: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x230a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x230a54: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x230a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x230a58: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x230a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230a5c: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x230a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x230a60: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x230a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x230a64: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x230a64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x230a68: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x230a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230a6c: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x230a6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x230a70: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x230a70u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x230a74: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x230a74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x230a78: 0xe7a10120  swc1        $f1, 0x120($sp)
    ctx->pc = 0x230a78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x230a7c: 0xe7a2012c  swc1        $f2, 0x12C($sp)
    ctx->pc = 0x230a7cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x230a80: 0xe7a30124  swc1        $f3, 0x124($sp)
    ctx->pc = 0x230a80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x230a84: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x230a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x230a88: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x230a88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x230a8c: 0xd9220000  lqc2        $vf2, 0x0($t1)
    ctx->pc = 0x230a8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x230a90: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x230a90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x230a94: 0xfba10130  sqc2        $vf1, 0x130($sp)
    ctx->pc = 0x230a94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x230a98: 0xc7a30130  lwc1        $f3, 0x130($sp)
    ctx->pc = 0x230a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x230a9c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x230a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x230aa0: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x230aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230aa4: 0xc7a10138  lwc1        $f1, 0x138($sp)
    ctx->pc = 0x230aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230aa8: 0xc7a2013c  lwc1        $f2, 0x13C($sp)
    ctx->pc = 0x230aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x230aac: 0xe7a300f0  swc1        $f3, 0xF0($sp)
    ctx->pc = 0x230aacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x230ab0: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x230ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x230ab4: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x230ab4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x230ab8: 0xe7a200fc  swc1        $f2, 0xFC($sp)
    ctx->pc = 0x230ab8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x230abc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x230abcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x230ac0: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x230ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x230ac4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x230ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x230ac8: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x230ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x230acc: 0xc4620060  lwc1        $f2, 0x60($v1)
    ctx->pc = 0x230accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x230ad0: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x230ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x230ad4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x230ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230ad8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x230ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230adc: 0xe7a20100  swc1        $f2, 0x100($sp)
    ctx->pc = 0x230adcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x230ae0: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x230ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x230ae4: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x230ae4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x230ae8: 0xe7a3010c  swc1        $f3, 0x10C($sp)
    ctx->pc = 0x230ae8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x230aec: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x230aecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x230af0: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x230af0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x230af4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x230af4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x230af8: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x230af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x230afc: 0xc7a30110  lwc1        $f3, 0x110($sp)
    ctx->pc = 0x230afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x230b00: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x230b00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x230b04: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x230b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230b08: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x230b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230b0c: 0xc7a2011c  lwc1        $f2, 0x11C($sp)
    ctx->pc = 0x230b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x230b10: 0xe7a300f0  swc1        $f3, 0xF0($sp)
    ctx->pc = 0x230b10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x230b14: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x230b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x230b18: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x230b18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x230b1c: 0xe7a200fc  swc1        $f2, 0xFC($sp)
    ctx->pc = 0x230b1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x230b20: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x230b20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x230b24: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x230b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x230b28: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x230b28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230b2c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x230b2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230b30: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x230b30u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230b34: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x230b34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230b38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x230b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230b3c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x230b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230b40: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x230b40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x230b44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x230b44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230b48: 0xc08c5e8  jal         func_2317A0
    ctx->pc = 0x230B48u;
    SET_GPR_U32(ctx, 31, 0x230B50u);
    ctx->pc = 0x230B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230B48u;
    // 0x230b4c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2317A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2317A0u, 0x230B48u, 0x230B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230B50u;
label_230b50:
    // 0x230b50: 0x2a00b  movn        $s4, $zero, $v0
    ctx->pc = 0x230b50u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
    // 0x230b54: 0x1280006a  beqz        $s4, . + 4 + (0x6A << 2)
    ctx->pc = 0x230B54u;
    {
        const bool branch_taken_0x230b54 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x230B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B54u;
        // 0x230b58: 0x8fa201a8  lw          $v0, 0x1A8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b54) {
            ctx->pc = 0x230D00u;
            goto label_230d00;
        }
    }
    ctx->pc = 0x230B5Cu;
    // 0x230b5c: 0x54400069  bnel        $v0, $zero, . + 4 + (0x69 << 2)
    ctx->pc = 0x230B5Cu;
    {
        const bool branch_taken_0x230b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x230b5c) {
            ctx->pc = 0x230B60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230B5Cu;
            // 0x230b60: 0x8e440104  lw          $a0, 0x104($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230D04u;
            goto label_230d04;
        }
    }
    ctx->pc = 0x230B64u;
    // 0x230b64: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x230b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x230b68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x230b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x230b6c: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x230b6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x230b70: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x230b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x230b74: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x230b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x230b78: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x230b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
    // 0x230b7c: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x230b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
    // 0x230b80: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x230b80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x230b84: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x230b84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x230b88: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x230b88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x230b8c: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x230b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x230b90: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x230b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230b94: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x230b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230b98: 0xc7a20118  lwc1        $f2, 0x118($sp)
    ctx->pc = 0x230b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x230b9c: 0xc7a3011c  lwc1        $f3, 0x11C($sp)
    ctx->pc = 0x230b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x230ba0: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x230ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x230ba4: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x230ba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x230ba8: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x230ba8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x230bac: 0xe7a300fc  swc1        $f3, 0xFC($sp)
    ctx->pc = 0x230bacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x230bb0: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x230bb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x230bb4: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x230bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x230bb8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x230bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x230bbc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x230bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x230bc0: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x230bc0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x230bc4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x230bc4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x230bc8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x230bc8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x230bcc: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x230bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x230bd0: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x230bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230bd4: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x230bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230bd8: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x230bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x230bdc: 0xc7a3010c  lwc1        $f3, 0x10C($sp)
    ctx->pc = 0x230bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x230be0: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x230be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x230be4: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x230be4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x230be8: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x230be8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x230bec: 0xe7a300fc  swc1        $f3, 0xFC($sp)
    ctx->pc = 0x230becu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x230bf0: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x230bf0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x230bf4: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x230bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x230bf8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x230BF8u;
    SET_GPR_U32(ctx, 31, 0x230C00u);
    ctx->pc = 0x230BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230BF8u;
    // 0x230bfc: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x230BF8u, 0x230C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230C00u;
label_230c00:
    // 0x230c00: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x230C00u;
    SET_GPR_U32(ctx, 31, 0x230C08u);
    ctx->pc = 0x230C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230C00u;
    // 0x230c04: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x230C00u, 0x230C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230C08u;
label_230c08:
    // 0x230c08: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x230c08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x230c0c: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x230c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x230c10: 0x7ba30080  lq          $v1, 0x80($sp)
    ctx->pc = 0x230c10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x230c14: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x230c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x230c18: 0x7fa20150  sq          $v0, 0x150($sp)
    ctx->pc = 0x230c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 2));
    // 0x230c1c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x230c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x230c20: 0x7fa30160  sq          $v1, 0x160($sp)
    ctx->pc = 0x230c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 3));
    // 0x230c24: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x230c24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x230c28: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x230c28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x230c2c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x230c2cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x230c30: 0xfba10170  sqc2        $vf1, 0x170($sp)
    ctx->pc = 0x230c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x230c34: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x230c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x230c38: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x230c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x230c3c: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x230c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x230c40: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x230c40u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x230c44: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x230c44u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x230c48: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x230c48u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x230c4c: 0x0  nop
    ctx->pc = 0x230c4cu;
    // NOP
    // 0x230c50: 0x0  nop
    ctx->pc = 0x230c50u;
    // NOP
    // 0x230c54: 0x46010084  c1          0x10084
    ctx->pc = 0x230c54u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x230c58: 0xe7a10194  swc1        $f1, 0x194($sp)
    ctx->pc = 0x230c58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
    // 0x230c5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x230c5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230c60: 0x0  nop
    ctx->pc = 0x230c60u;
    // NOP
    // 0x230c64: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x230c64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230c68: 0x0  nop
    ctx->pc = 0x230c68u;
    // NOP
    // 0x230c6c: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x230C6Cu;
    {
        const bool branch_taken_0x230c6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x230C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C6Cu;
        // 0x230c70: 0xe7a20190  swc1        $f2, 0x190($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c6c) {
            ctx->pc = 0x230C98u;
            goto label_230c98;
        }
    }
    ctx->pc = 0x230C74u;
    // 0x230c74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x230c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x230c78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x230c78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230c7c: 0x0  nop
    ctx->pc = 0x230c7cu;
    // NOP
    // 0x230c80: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x230c80u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x230c84: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x230c84u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x230c88: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x230c88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x230c8c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x230c8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x230c90: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x230c90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x230c94: 0xfba10180  sqc2        $vf1, 0x180($sp)
    ctx->pc = 0x230c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[1]));
label_230c98:
    // 0x230c98: 0x93a40010  lbu         $a0, 0x10($sp)
    ctx->pc = 0x230c98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230c9c: 0x7ba20150  lq          $v0, 0x150($sp)
    ctx->pc = 0x230c9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x230ca0: 0x7ba30160  lq          $v1, 0x160($sp)
    ctx->pc = 0x230ca0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x230ca4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x230ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x230ca8: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x230ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x230cac: 0xa3a400f0  sb          $a0, 0xF0($sp)
    ctx->pc = 0x230cacu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 240), (uint8_t)GPR_U32(ctx, 4));
    // 0x230cb0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x230cb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x230cb4: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x230cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x230cb8: 0x27a20180  addiu       $v0, $sp, 0x180
    ctx->pc = 0x230cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x230cbc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x230cbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x230cc0: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x230cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x230cc4: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x230cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230cc8: 0x27b001a0  addiu       $s0, $sp, 0x1A0
    ctx->pc = 0x230cc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x230ccc: 0xc7a10194  lwc1        $f1, 0x194($sp)
    ctx->pc = 0x230cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230cd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230cd4: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x230cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x230cd8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x230cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230cdc: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x230CDCu;
    SET_GPR_U32(ctx, 31, 0x230CE4u);
    ctx->pc = 0x230CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230CDCu;
    // 0x230ce0: 0xe7a10064  swc1        $f1, 0x64($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x230CDCu, 0x230CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230CE4u;
label_230ce4:
    // 0x230ce4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x230ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x230ce8: 0xc07788a  jal         func_1DE228
    ctx->pc = 0x230CE8u;
    SET_GPR_U32(ctx, 31, 0x230CF0u);
    ctx->pc = 0x230CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230CE8u;
    // 0x230cec: 0x24053000  addiu       $a1, $zero, 0x3000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE228u, 0x230CE8u, 0x230CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230CF0u;
label_230cf0:
    // 0x230cf0: 0x2a00b  movn        $s4, $zero, $v0
    ctx->pc = 0x230cf0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
    // 0x230cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230cf8: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x230CF8u;
    SET_GPR_U32(ctx, 31, 0x230D00u);
    ctx->pc = 0x230CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230CF8u;
    // 0x230cfc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x230CF8u, 0x230D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230D00u;
label_230d00:
    // 0x230d00: 0x8e440104  lw          $a0, 0x104($s2)
    ctx->pc = 0x230d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_230d04:
    // 0x230d04: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x230d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x230d08: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x230d08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x230d0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x230d0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230d10: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x230d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x230d14: 0xe7c00004  swc1        $f0, 0x4($fp)
    ctx->pc = 0x230d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 4), bits); }
    // 0x230d18: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x230d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x230d1c: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x230d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x230d20: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x230d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
    // 0x230d24: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x230d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
    // 0x230d28: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x230d28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x230d2c: 0xdbc20000  lqc2        $vf2, 0x0($fp)
    ctx->pc = 0x230d2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x230d30: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x230d30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x230d34: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x230d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x230d38: 0xc7a00120  lwc1        $f0, 0x120($sp)
    ctx->pc = 0x230d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230d3c: 0x27b00130  addiu       $s0, $sp, 0x130
    ctx->pc = 0x230d3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x230d40: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x230d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230d44: 0xc7a20128  lwc1        $f2, 0x128($sp)
    ctx->pc = 0x230d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x230d48: 0xc7a3012c  lwc1        $f3, 0x12C($sp)
    ctx->pc = 0x230d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x230d4c: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x230d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x230d50: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x230d50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x230d54: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x230d54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x230d58: 0xe7a3010c  swc1        $f3, 0x10C($sp)
    ctx->pc = 0x230d58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x230d5c: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x230d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x230d60: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x230d60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x230d64: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x230d64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x230d68: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x230d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x230d6c: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x230d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x230d70: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x230d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230d74: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x230d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x230d78: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x230d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x230d7c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x230d7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x230d80: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x230d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230d84: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x230d84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x230d88: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x230d88u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x230d8c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x230d8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x230d90: 0xe7a10120  swc1        $f1, 0x120($sp)
    ctx->pc = 0x230d90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x230d94: 0xe7a2012c  swc1        $f2, 0x12C($sp)
    ctx->pc = 0x230d94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
    // 0x230d98: 0xe7a30124  swc1        $f3, 0x124($sp)
    ctx->pc = 0x230d98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x230d9c: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x230d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x230da0: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x230da0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x230da4: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x230da4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x230da8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x230da8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x230dac: 0xfba10130  sqc2        $vf1, 0x130($sp)
    ctx->pc = 0x230dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x230db0: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x230db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230db4: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x230db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230db8: 0xc7a20138  lwc1        $f2, 0x138($sp)
    ctx->pc = 0x230db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x230dbc: 0xc7a3013c  lwc1        $f3, 0x13C($sp)
    ctx->pc = 0x230dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x230dc0: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x230dc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x230dc4: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x230dc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x230dc8: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x230dc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x230dcc: 0xe7a300fc  swc1        $f3, 0xFC($sp)
    ctx->pc = 0x230dccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x230dd0: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x230dd0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x230dd4: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x230dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x230dd8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x230dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x230ddc: 0x24620060  addiu       $v0, $v1, 0x60
    ctx->pc = 0x230ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x230de0: 0xc4620060  lwc1        $f2, 0x60($v1)
    ctx->pc = 0x230de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x230de4: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x230de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x230de8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x230de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230dec: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x230decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230df0: 0xe7a20100  swc1        $f2, 0x100($sp)
    ctx->pc = 0x230df0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x230df4: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x230df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x230df8: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x230df8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x230dfc: 0xe7a3010c  swc1        $f3, 0x10C($sp)
    ctx->pc = 0x230dfcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x230e00: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x230e00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x230e04: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x230e04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x230e08: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x230e08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x230e0c: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x230e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x230e10: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x230e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230e14: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x230e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230e18: 0xc7a20118  lwc1        $f2, 0x118($sp)
    ctx->pc = 0x230e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x230e1c: 0xc7a3011c  lwc1        $f3, 0x11C($sp)
    ctx->pc = 0x230e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x230e20: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x230e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x230e24: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x230e24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x230e28: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x230e28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x230e2c: 0xe7a300fc  swc1        $f3, 0xFC($sp)
    ctx->pc = 0x230e2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x230e30: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x230e30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x230e34: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x230e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x230e38: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x230e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x230e3c: 0x27a70090  addiu       $a3, $sp, 0x90
    ctx->pc = 0x230e3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x230e40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x230e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230e44: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x230e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230e48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x230e48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230e4c: 0xc08c5e8  jal         func_2317A0
    ctx->pc = 0x230E4Cu;
    SET_GPR_U32(ctx, 31, 0x230E54u);
    ctx->pc = 0x230E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E4Cu;
    // 0x230e50: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2317A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2317A0u, 0x230E4Cu, 0x230E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230E54u;
label_230e54:
    // 0x230e54: 0x2b80b  movn        $s7, $zero, $v0
    ctx->pc = 0x230e54u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
    // 0x230e58: 0x12e00066  beqz        $s7, . + 4 + (0x66 << 2)
    ctx->pc = 0x230E58u;
    {
        const bool branch_taken_0x230e58 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x230E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E58u;
        // 0x230e5c: 0x8fa201a8  lw          $v0, 0x1A8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e58) {
            ctx->pc = 0x230FF4u;
            goto label_230ff4;
        }
    }
    ctx->pc = 0x230E60u;
    // 0x230e60: 0x14400065  bnez        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x230E60u;
    {
        const bool branch_taken_0x230e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E60u;
        // 0x230e64: 0x8fa201a4  lw          $v0, 0x1A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e60) {
            ctx->pc = 0x230FF8u;
            goto label_230ff8;
        }
    }
    ctx->pc = 0x230E68u;
    // 0x230e68: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x230e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x230e6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x230e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x230e70: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x230e70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x230e74: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x230e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x230e78: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x230e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x230e7c: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x230e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
    // 0x230e80: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x230e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
    // 0x230e84: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x230e84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x230e88: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x230e88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x230e8c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x230e8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x230e90: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x230e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x230e94: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x230e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230e98: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x230e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230e9c: 0xc7a20118  lwc1        $f2, 0x118($sp)
    ctx->pc = 0x230e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x230ea0: 0xc7a3011c  lwc1        $f3, 0x11C($sp)
    ctx->pc = 0x230ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x230ea4: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x230ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x230ea8: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x230ea8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x230eac: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x230eacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x230eb0: 0xe7a300fc  swc1        $f3, 0xFC($sp)
    ctx->pc = 0x230eb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x230eb4: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x230eb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x230eb8: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x230eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x230ebc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x230ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x230ec0: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x230ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x230ec4: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x230ec4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x230ec8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x230ec8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x230ecc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x230eccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x230ed0: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x230ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x230ed4: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x230ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230ed8: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x230ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230edc: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x230edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x230ee0: 0xc7a3010c  lwc1        $f3, 0x10C($sp)
    ctx->pc = 0x230ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x230ee4: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x230ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x230ee8: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x230ee8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x230eec: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x230eecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x230ef0: 0xe7a300fc  swc1        $f3, 0xFC($sp)
    ctx->pc = 0x230ef0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x230ef4: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x230ef4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x230ef8: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x230ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x230efc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x230EFCu;
    SET_GPR_U32(ctx, 31, 0x230F04u);
    ctx->pc = 0x230F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230EFCu;
    // 0x230f00: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x230EFCu, 0x230F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230F04u;
label_230f04:
    // 0x230f04: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x230F04u;
    SET_GPR_U32(ctx, 31, 0x230F0Cu);
    ctx->pc = 0x230F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230F04u;
    // 0x230f08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x230F04u, 0x230F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230F0Cu;
label_230f0c:
    // 0x230f0c: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x230f0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x230f10: 0x7ba30080  lq          $v1, 0x80($sp)
    ctx->pc = 0x230f10u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x230f14: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x230f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x230f18: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x230f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
    // 0x230f1c: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x230f1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x230f20: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x230f20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x230f24: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x230f24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x230f28: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x230f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x230f2c: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x230f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x230f30: 0xc6c30004  lwc1        $f3, 0x4($s6)
    ctx->pc = 0x230f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x230f34: 0xc6c40008  lwc1        $f4, 0x8($s6)
    ctx->pc = 0x230f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x230f38: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x230f38u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x230f3c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x230f3cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x230f40: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x230f40u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x230f44: 0x0  nop
    ctx->pc = 0x230f44u;
    // NOP
    // 0x230f48: 0x0  nop
    ctx->pc = 0x230f48u;
    // NOP
    // 0x230f4c: 0x46010084  c1          0x10084
    ctx->pc = 0x230f4cu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x230f50: 0xe7a10144  swc1        $f1, 0x144($sp)
    ctx->pc = 0x230f50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x230f54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x230f54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230f58: 0x0  nop
    ctx->pc = 0x230f58u;
    // NOP
    // 0x230f5c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x230f5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230f60: 0x0  nop
    ctx->pc = 0x230f60u;
    // NOP
    // 0x230f64: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x230F64u;
    {
        const bool branch_taken_0x230f64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x230F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230F64u;
        // 0x230f68: 0xe7a20140  swc1        $f2, 0x140($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x230f64) {
            ctx->pc = 0x230F90u;
            goto label_230f90;
        }
    }
    ctx->pc = 0x230F6Cu;
    // 0x230f6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x230f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x230f70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x230f70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230f74: 0x0  nop
    ctx->pc = 0x230f74u;
    // NOP
    // 0x230f78: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x230f78u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x230f7c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x230f7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x230f80: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x230f80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x230f84: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x230f84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x230f88: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x230f88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x230f8c: 0xfba10130  sqc2        $vf1, 0x130($sp)
    ctx->pc = 0x230f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[1]));
label_230f90:
    // 0x230f90: 0x93a40010  lbu         $a0, 0x10($sp)
    ctx->pc = 0x230f90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x230f94: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x230f94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x230f98: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x230f98u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x230f9c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x230f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x230fa0: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x230fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x230fa4: 0xa3a40150  sb          $a0, 0x150($sp)
    ctx->pc = 0x230fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 336), (uint8_t)GPR_U32(ctx, 4));
    // 0x230fa8: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x230fa8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x230fac: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x230facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x230fb0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x230fb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x230fb4: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x230fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x230fb8: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x230fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x230fbc: 0x27b001a0  addiu       $s0, $sp, 0x1A0
    ctx->pc = 0x230fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x230fc0: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x230fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230fc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230fc8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x230fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x230fcc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x230fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230fd0: 0xc076e46  jal         func_1DB918
    ctx->pc = 0x230FD0u;
    SET_GPR_U32(ctx, 31, 0x230FD8u);
    ctx->pc = 0x230FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230FD0u;
    // 0x230fd4: 0xe7a10064  swc1        $f1, 0x64($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x230FD0u, 0x230FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230FD8u;
label_230fd8:
    // 0x230fd8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x230fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x230fdc: 0xc07788a  jal         func_1DE228
    ctx->pc = 0x230FDCu;
    SET_GPR_U32(ctx, 31, 0x230FE4u);
    ctx->pc = 0x230FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230FDCu;
    // 0x230fe0: 0x24053000  addiu       $a1, $zero, 0x3000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE228u, 0x230FDCu, 0x230FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230FE4u;
label_230fe4:
    // 0x230fe4: 0x2b80b  movn        $s7, $zero, $v0
    ctx->pc = 0x230fe4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
    // 0x230fe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x230fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230fec: 0xc076e38  jal         func_1DB8E0
    ctx->pc = 0x230FECu;
    SET_GPR_U32(ctx, 31, 0x230FF4u);
    ctx->pc = 0x230FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230FECu;
    // 0x230ff0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x230FECu, 0x230FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x230FF4u;
label_230ff4:
    // 0x230ff4: 0x8fa201a4  lw          $v0, 0x1A4($sp)
    ctx->pc = 0x230ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
label_230ff8:
    // 0x230ff8: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x230FF8u;
    {
        const bool branch_taken_0x230ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230FF8u;
        // 0x230ffc: 0x8fa201a8  lw          $v0, 0x1A8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ff8) {
            ctx->pc = 0x2310A4u;
            goto label_2310a4;
        }
    }
    ctx->pc = 0x231000u;
    // 0x231000: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x231000u;
    {
        const bool branch_taken_0x231000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231000u;
        // 0x231004: 0x240207a1  addiu       $v0, $zero, 0x7A1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1953));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231000) {
            ctx->pc = 0x2310A4u;
            goto label_2310a4;
        }
    }
    ctx->pc = 0x231008u;
    // 0x231008: 0x8e450334  lw          $a1, 0x334($s2)
    ctx->pc = 0x231008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x23100c: 0x8ca30150  lw          $v1, 0x150($a1)
    ctx->pc = 0x23100cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x231010: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x231010u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x231014: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x231014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x231018: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x231018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23101c: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23101Cu;
    {
        const bool branch_taken_0x23101c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x231020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23101Cu;
        // 0x231020: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23101c) {
            ctx->pc = 0x231034u;
            goto label_231034;
        }
    }
    ctx->pc = 0x231024u;
    // 0x231024: 0xc069ce0  jal         func_1A7380
    ctx->pc = 0x231024u;
    SET_GPR_U32(ctx, 31, 0x23102Cu);
    ctx->pc = 0x231028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231024u;
    // 0x231028: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7380u, 0x231024u, 0x23102Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23102Cu;
label_23102c:
    // 0x23102c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23102Cu;
    {
        const bool branch_taken_0x23102c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23102Cu;
        // 0x231030: 0x8e420334  lw          $v0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23102c) {
            ctx->pc = 0x231040u;
            goto label_231040;
        }
    }
    ctx->pc = 0x231034u;
label_231034:
    // 0x231034: 0xc069ce0  jal         func_1A7380
    ctx->pc = 0x231034u;
    SET_GPR_U32(ctx, 31, 0x23103Cu);
    ctx->pc = 0x231038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231034u;
    // 0x231038: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7380u, 0x231034u, 0x23103Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23103Cu;
label_23103c:
    // 0x23103c: 0x8e420334  lw          $v0, 0x334($s2)
    ctx->pc = 0x23103cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_231040:
    // 0x231040: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x231040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231044: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x231044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231048: 0xe4410174  swc1        $f1, 0x174($v0)
    ctx->pc = 0x231048u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 372), bits); }
    // 0x23104c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x23104cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231050: 0xe4400178  swc1        $f0, 0x178($v0)
    ctx->pc = 0x231050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 376), bits); }
    // 0x231054: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x231054u;
    SET_GPR_U32(ctx, 31, 0x23105Cu);
    ctx->pc = 0x231058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231054u;
    // 0x231058: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x231054u, 0x23105Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23105Cu;
label_23105c:
    // 0x23105c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23105cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231060: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x231060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x231064: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x231064u;
    SET_GPR_U32(ctx, 31, 0x23106Cu);
    ctx->pc = 0x231068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231064u;
    // 0x231068: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x231064u, 0x23106Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23106Cu;
label_23106c:
    // 0x23106c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23106cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231070: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x231070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x231074: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x231074u;
    SET_GPR_U32(ctx, 31, 0x23107Cu);
    ctx->pc = 0x231078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231074u;
    // 0x231078: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x231074u, 0x23107Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23107Cu;
label_23107c:
    // 0x23107c: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x23107cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x231080: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x231080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x231084: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x231084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x231088: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x231088u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23108c: 0xfa4103e0  sqc2        $vf1, 0x3E0($s2)
    ctx->pc = 0x23108cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 992), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x231090: 0xc6400374  lwc1        $f0, 0x374($s2)
    ctx->pc = 0x231090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231094: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x231094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x231098: 0xae420408  sw          $v0, 0x408($s2)
    ctx->pc = 0x231098u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1032), GPR_U32(ctx, 2));
    // 0x23109c: 0x10000183  b           . + 4 + (0x183 << 2)
    ctx->pc = 0x23109Cu;
    {
        const bool branch_taken_0x23109c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2310A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23109Cu;
        // 0x2310a0: 0xe6400400  swc1        $f0, 0x400($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1024), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23109c) {
            ctx->pc = 0x2316ACu;
            goto label_2316ac;
        }
    }
    ctx->pc = 0x2310A4u;
label_2310a4:
    // 0x2310a4: 0x128000d2  beqz        $s4, . + 4 + (0xD2 << 2)
    ctx->pc = 0x2310A4u;
    {
        const bool branch_taken_0x2310a4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2310a4) {
            ctx->pc = 0x2313F0u;
            goto label_2313f0;
        }
    }
    ctx->pc = 0x2310ACu;
    // 0x2310ac: 0x12e00021  beqz        $s7, . + 4 + (0x21 << 2)
    ctx->pc = 0x2310ACu;
    {
        const bool branch_taken_0x2310ac = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2310B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2310ACu;
        // 0x2310b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2310ac) {
            ctx->pc = 0x231134u;
            goto label_231134;
        }
    }
    ctx->pc = 0x2310B4u;
    // 0x2310b4: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x2310b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x2310b8: 0x24030036  addiu       $v1, $zero, 0x36
    ctx->pc = 0x2310b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x2310bc: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x2310bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x2310c0: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2310C0u;
    {
        const bool branch_taken_0x2310c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2310C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2310C0u;
        // 0x2310c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2310c0) {
            ctx->pc = 0x2310ECu;
            goto label_2310ec;
        }
    }
    ctx->pc = 0x2310C8u;
    // 0x2310c8: 0x8c8300d8  lw          $v1, 0xD8($a0)
    ctx->pc = 0x2310c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x2310cc: 0x2462f858  addiu       $v0, $v1, -0x7A8
    ctx->pc = 0x2310ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965336));
    // 0x2310d0: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2310d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2310d4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2310D4u;
    {
        const bool branch_taken_0x2310d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2310d4) {
            ctx->pc = 0x2310D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2310D4u;
            // 0x2310d8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2310ECu;
            goto label_2310ec;
        }
    }
    ctx->pc = 0x2310DCu;
    // 0x2310dc: 0x2462f852  addiu       $v0, $v1, -0x7AE
    ctx->pc = 0x2310dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965330));
    // 0x2310e0: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2310e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2310e4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2310E4u;
    {
        const bool branch_taken_0x2310e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2310e4) {
            ctx->pc = 0x2310E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2310E4u;
            // 0x2310e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2310ECu;
            goto label_2310ec;
        }
    }
    ctx->pc = 0x2310ECu;
label_2310ec:
    // 0x2310ec: 0x54a0000f  bnel        $a1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2310ECu;
    {
        const bool branch_taken_0x2310ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2310ec) {
            ctx->pc = 0x2310F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2310ECu;
            // 0x2310f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23112Cu;
            goto label_23112c;
        }
    }
    ctx->pc = 0x2310F4u;
    // 0x2310f4: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x2310f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x2310f8: 0x2403079e  addiu       $v1, $zero, 0x79E
    ctx->pc = 0x2310f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1950));
    // 0x2310fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2310fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x231100: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x231100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x231104: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x231104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231108: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x231108u;
    {
        const bool branch_taken_0x231108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x23110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231108u;
        // 0x23110c: 0x240207a2  addiu       $v0, $zero, 0x7A2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1954));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231108) {
            ctx->pc = 0x231128u;
            goto label_231128;
        }
    }
    ctx->pc = 0x231110u;
    // 0x231110: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x231110u;
    {
        const bool branch_taken_0x231110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x231114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231110u;
        // 0x231114: 0x240207a4  addiu       $v0, $zero, 0x7A4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1956));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231110) {
            ctx->pc = 0x231128u;
            goto label_231128;
        }
    }
    ctx->pc = 0x231118u;
    // 0x231118: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x231118u;
    {
        const bool branch_taken_0x231118 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x23111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231118u;
        // 0x23111c: 0x240207a6  addiu       $v0, $zero, 0x7A6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1958));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231118) {
            ctx->pc = 0x231128u;
            goto label_231128;
        }
    }
    ctx->pc = 0x231120u;
    // 0x231120: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x231120u;
    {
        const bool branch_taken_0x231120 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x231120) {
            ctx->pc = 0x23112Cu;
            goto label_23112c;
        }
    }
    ctx->pc = 0x231128u;
label_231128:
    // 0x231128: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x231128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23112c:
    // 0x23112c: 0x14c000b0  bnez        $a2, . + 4 + (0xB0 << 2)
    ctx->pc = 0x23112Cu;
    {
        const bool branch_taken_0x23112c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x23112c) {
            ctx->pc = 0x2313F0u;
            goto label_2313f0;
        }
    }
    ctx->pc = 0x231134u;
label_231134:
    // 0x231134: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x231134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x231138: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x231138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
    // 0x23113c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23113cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x231140: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x231140u;
    {
        const bool branch_taken_0x231140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231140u;
        // 0x231144: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231140) {
            ctx->pc = 0x23130Cu;
            goto label_23130c;
        }
    }
    ctx->pc = 0x231148u;
    // 0x231148: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x231148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x23114c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23114cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x231150: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x231150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x231154: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x231154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x231158: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x231158u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x23115c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x23115cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231160: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x231160u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x231164: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x231164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x231168: 0xc7a30110  lwc1        $f3, 0x110($sp)
    ctx->pc = 0x231168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23116c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x23116cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x231170: 0xc7a20114  lwc1        $f2, 0x114($sp)
    ctx->pc = 0x231170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x231174: 0x24425b40  addiu       $v0, $v0, 0x5B40
    ctx->pc = 0x231174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    // 0x231178: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x231178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23117c: 0x27b10110  addiu       $s1, $sp, 0x110
    ctx->pc = 0x23117cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x231180: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x231180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231184: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x231184u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x231188: 0xe7a30100  swc1        $f3, 0x100($sp)
    ctx->pc = 0x231188u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x23118c: 0xe7a20104  swc1        $f2, 0x104($sp)
    ctx->pc = 0x23118cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x231190: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x231190u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x231194: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x231194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x231198: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x231198u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x23119c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x23119cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(FAST_READ128(0x575B40u));
    // 0x2311a0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2311a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2311a4: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x2311a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2311a8: 0xc7a30110  lwc1        $f3, 0x110($sp)
    ctx->pc = 0x2311a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2311ac: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x2311acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2311b0: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x2311b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2311b4: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x2311b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2311b8: 0xc7a2011c  lwc1        $f2, 0x11C($sp)
    ctx->pc = 0x2311b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2311bc: 0xe7a300f0  swc1        $f3, 0xF0($sp)
    ctx->pc = 0x2311bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2311c0: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x2311c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2311c4: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x2311c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2311c8: 0xe7a200fc  swc1        $f2, 0xFC($sp)
    ctx->pc = 0x2311c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x2311cc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2311ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2311d0: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x2311d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2311d4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2311d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2311d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2311d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2311dc: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x2311dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x2311e0: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2311e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2311e4: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x2311e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
    // 0x2311e8: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x2311e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
    // 0x2311ec: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x2311ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2311f0: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x2311f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2311f4: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2311f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2311f8: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x2311f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2311fc: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x2311fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231200: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x231200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231204: 0xc7a20118  lwc1        $f2, 0x118($sp)
    ctx->pc = 0x231204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x231208: 0xc7a3011c  lwc1        $f3, 0x11C($sp)
    ctx->pc = 0x231208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23120c: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x23120cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x231210: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x231210u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x231214: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x231214u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x231218: 0xe7a300fc  swc1        $f3, 0xFC($sp)
    ctx->pc = 0x231218u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x23121c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x23121cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231220: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x231220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x231224: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x231224u;
    SET_GPR_U32(ctx, 31, 0x23122Cu);
    ctx->pc = 0x231228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231224u;
    // 0x231228: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x231224u, 0x23122Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23122Cu;
label_23122c:
    // 0x23122c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x23122Cu;
    SET_GPR_U32(ctx, 31, 0x231234u);
    ctx->pc = 0x231230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23122Cu;
    // 0x231230: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x23122Cu, 0x231234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231234u;
label_231234:
    // 0x231234: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x231234u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x231238: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x231238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x23123c: 0x7ba30080  lq          $v1, 0x80($sp)
    ctx->pc = 0x23123cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x231240: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x231240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x231244: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x231244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
    // 0x231248: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x231248u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23124c: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x23124cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x231250: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x231250u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x231254: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x231254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x231258: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x231258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23125c: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x23125cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x231260: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x231260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x231264: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x231264u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x231268: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x231268u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x23126c: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x23126cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x231270: 0x0  nop
    ctx->pc = 0x231270u;
    // NOP
    // 0x231274: 0x0  nop
    ctx->pc = 0x231274u;
    // NOP
    // 0x231278: 0x46010084  c1          0x10084
    ctx->pc = 0x231278u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x23127c: 0xe7a10144  swc1        $f1, 0x144($sp)
    ctx->pc = 0x23127cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x231280: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x231280u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231284: 0x0  nop
    ctx->pc = 0x231284u;
    // NOP
    // 0x231288: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x231288u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23128c: 0x0  nop
    ctx->pc = 0x23128cu;
    // NOP
    // 0x231290: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x231290u;
    {
        const bool branch_taken_0x231290 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x231294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231290u;
        // 0x231294: 0xe7a20140  swc1        $f2, 0x140($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x231290) {
            ctx->pc = 0x2312BCu;
            goto label_2312bc;
        }
    }
    ctx->pc = 0x231298u;
    // 0x231298: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x231298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23129c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23129cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2312a0: 0x0  nop
    ctx->pc = 0x2312a0u;
    // NOP
    // 0x2312a4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2312a4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x2312a8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2312a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2312ac: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2312acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2312b0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2312b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2312b4: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2312b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2312b8: 0xfba10130  sqc2        $vf1, 0x130($sp)
    ctx->pc = 0x2312b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[1]));
label_2312bc:
    // 0x2312bc: 0x93a40010  lbu         $a0, 0x10($sp)
    ctx->pc = 0x2312bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2312c0: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x2312c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2312c4: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x2312c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2312c8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x2312c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x2312cc: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2312ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x2312d0: 0xa3a40150  sb          $a0, 0x150($sp)
    ctx->pc = 0x2312d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 336), (uint8_t)GPR_U32(ctx, 4));
    // 0x2312d4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2312d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2312d8: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x2312d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2312dc: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x2312dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2312e0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2312e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2312e4: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2312e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2312e8: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x2312e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2312ec: 0x3c05fbff  lui         $a1, 0xFBFF
    ctx->pc = 0x2312ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64511 << 16));
    // 0x2312f0: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x2312f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2312f4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2312f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2312f8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2312f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2312fc: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x2312fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x231300: 0xc07788a  jal         func_1DE228
    ctx->pc = 0x231300u;
    SET_GPR_U32(ctx, 31, 0x231308u);
    ctx->pc = 0x231304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231300u;
    // 0x231304: 0xe7a10064  swc1        $f1, 0x64($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE228u, 0x231300u, 0x231308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231308u;
label_231308:
    // 0x231308: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x231308u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23130c:
    // 0x23130c: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x23130Cu;
    {
        const bool branch_taken_0x23130c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x231310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23130Cu;
        // 0x231310: 0x8fa501a4  lw          $a1, 0x1A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23130c) {
            ctx->pc = 0x2313F0u;
            goto label_2313f0;
        }
    }
    ctx->pc = 0x231314u;
    // 0x231314: 0xc069caa  jal         func_1A72A8
    ctx->pc = 0x231314u;
    SET_GPR_U32(ctx, 31, 0x23131Cu);
    ctx->pc = 0x231318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231314u;
    // 0x231318: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A72A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A72A8u, 0x231314u, 0x23131Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23131Cu;
label_23131c:
    // 0x23131c: 0x8e420334  lw          $v0, 0x334($s2)
    ctx->pc = 0x23131cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x231320: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x231320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231324: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x231324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231328: 0xe4410174  swc1        $f1, 0x174($v0)
    ctx->pc = 0x231328u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 372), bits); }
    // 0x23132c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x23132cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231330: 0xe4400178  swc1        $f0, 0x178($v0)
    ctx->pc = 0x231330u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 376), bits); }
    // 0x231334: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x231334u;
    SET_GPR_U32(ctx, 31, 0x23133Cu);
    ctx->pc = 0x231338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231334u;
    // 0x231338: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x231334u, 0x23133Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23133Cu;
label_23133c:
    // 0x23133c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23133cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231340: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x231340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x231344: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x231344u;
    SET_GPR_U32(ctx, 31, 0x23134Cu);
    ctx->pc = 0x231348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231344u;
    // 0x231348: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x231344u, 0x23134Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23134Cu;
label_23134c:
    // 0x23134c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23134cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231350: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x231350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x231354: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x231354u;
    SET_GPR_U32(ctx, 31, 0x23135Cu);
    ctx->pc = 0x231358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231354u;
    // 0x231358: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x231354u, 0x23135Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23135Cu;
label_23135c:
    // 0x23135c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23135cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231360: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x231360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x231364: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x231364u;
    SET_GPR_U32(ctx, 31, 0x23136Cu);
    ctx->pc = 0x231368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231364u;
    // 0x231368: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x231364u, 0x23136Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23136Cu;
label_23136c:
    // 0x23136c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23136cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231370: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x231370u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x231374: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x231374u;
    SET_GPR_U32(ctx, 31, 0x23137Cu);
    ctx->pc = 0x231378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231374u;
    // 0x231378: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x231374u, 0x23137Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23137Cu;
label_23137c:
    // 0x23137c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23137cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231380: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x231380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x231384: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x231384u;
    SET_GPR_U32(ctx, 31, 0x23138Cu);
    ctx->pc = 0x231388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231384u;
    // 0x231388: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x231384u, 0x23138Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23138Cu;
label_23138c:
    // 0x23138c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23138cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231390: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x231390u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x231394: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x231394u;
    SET_GPR_U32(ctx, 31, 0x23139Cu);
    ctx->pc = 0x231398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231394u;
    // 0x231398: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x231394u, 0x23139Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23139Cu;
label_23139c:
    // 0x23139c: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x23139cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x2313a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2313a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2313a4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2313a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2313a8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2313a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2313ac: 0xfa4103e0  sqc2        $vf1, 0x3E0($s2)
    ctx->pc = 0x2313acu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 992), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2313b0: 0xc6400374  lwc1        $f0, 0x374($s2)
    ctx->pc = 0x2313b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2313b4: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x2313b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x2313b8: 0xe6400400  swc1        $f0, 0x400($s2)
    ctx->pc = 0x2313b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1024), bits); }
    // 0x2313bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2313bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2313c0: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2313c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x2313c4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2313c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2313c8: 0xfa4103f0  sqc2        $vf1, 0x3F0($s2)
    ctx->pc = 0x2313c8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 1008), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2313cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2313ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2313d0: 0xae430408  sw          $v1, 0x408($s2)
    ctx->pc = 0x2313d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1032), GPR_U32(ctx, 3));
    // 0x2313d4: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x2313d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x2313d8: 0x104000b5  beqz        $v0, . + 4 + (0xB5 << 2)
    ctx->pc = 0x2313D8u;
    {
        const bool branch_taken_0x2313d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2313DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313D8u;
        // 0x2313dc: 0xdfb001b0  ld          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2313d8) {
            ctx->pc = 0x2316B0u;
            goto label_2316b0;
        }
    }
    ctx->pc = 0x2313E0u;
    // 0x2313e0: 0xc08bd98  jal         func_22F660
    ctx->pc = 0x2313E0u;
    SET_GPR_U32(ctx, 31, 0x2313E8u);
    ctx->pc = 0x2313E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2313E0u;
    // 0x2313e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F660u, 0x2313E0u, 0x2313E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2313E8u;
label_2313e8:
    // 0x2313e8: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x2313E8u;
    {
        const bool branch_taken_0x2313e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2313ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313E8u;
        // 0x2313ec: 0xdfb001b0  ld          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2313e8) {
            ctx->pc = 0x2316B0u;
            goto label_2316b0;
        }
    }
    ctx->pc = 0x2313F0u;
label_2313f0:
    // 0x2313f0: 0x12e000af  beqz        $s7, . + 4 + (0xAF << 2)
    ctx->pc = 0x2313F0u;
    {
        const bool branch_taken_0x2313f0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2313F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2313F0u;
        // 0x2313f4: 0xdfb001b0  ld          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2313f0) {
            ctx->pc = 0x2316B0u;
            goto label_2316b0;
        }
    }
    ctx->pc = 0x2313F8u;
    // 0x2313f8: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x2313f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
    // 0x2313fc: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x2313fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
    // 0x231400: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x231400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x231404: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x231404u;
    {
        const bool branch_taken_0x231404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231404u;
        // 0x231408: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231404) {
            ctx->pc = 0x2315D0u;
            goto label_2315d0;
        }
    }
    ctx->pc = 0x23140Cu;
    // 0x23140c: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x23140cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x231410: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x231410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x231414: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x231414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x231418: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x231418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x23141c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x23141cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x231420: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x231420u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231424: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x231424u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x231428: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x231428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23142c: 0xc7a30110  lwc1        $f3, 0x110($sp)
    ctx->pc = 0x23142cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x231430: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x231430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x231434: 0xc7a20114  lwc1        $f2, 0x114($sp)
    ctx->pc = 0x231434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x231438: 0x24425b40  addiu       $v0, $v0, 0x5B40
    ctx->pc = 0x231438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
    // 0x23143c: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x23143cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231440: 0x27b10110  addiu       $s1, $sp, 0x110
    ctx->pc = 0x231440u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x231444: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x231444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231448: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x231448u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x23144c: 0xe7a30100  swc1        $f3, 0x100($sp)
    ctx->pc = 0x23144cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x231450: 0xe7a20104  swc1        $f2, 0x104($sp)
    ctx->pc = 0x231450u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    // 0x231454: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x231454u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x231458: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x231458u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x23145c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x23145cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x231460: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x231460u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(FAST_READ128(0x575B40u));
    // 0x231464: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x231464u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x231468: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x231468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23146c: 0xc7a30110  lwc1        $f3, 0x110($sp)
    ctx->pc = 0x23146cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x231470: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x231470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x231474: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x231474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231478: 0xc7a10118  lwc1        $f1, 0x118($sp)
    ctx->pc = 0x231478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23147c: 0xc7a2011c  lwc1        $f2, 0x11C($sp)
    ctx->pc = 0x23147cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x231480: 0xe7a300f0  swc1        $f3, 0xF0($sp)
    ctx->pc = 0x231480u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x231484: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x231484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x231488: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x231488u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x23148c: 0xe7a200fc  swc1        $f2, 0xFC($sp)
    ctx->pc = 0x23148cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x231490: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x231490u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231494: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x231494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x231498: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x231498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x23149c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23149cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2314a0: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x2314a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x2314a4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2314a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2314a8: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x2314a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
    // 0x2314ac: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x2314acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
    // 0x2314b0: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x2314b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2314b4: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x2314b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2314b8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2314b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2314bc: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x2314bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2314c0: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x2314c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2314c4: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x2314c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2314c8: 0xc7a20118  lwc1        $f2, 0x118($sp)
    ctx->pc = 0x2314c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2314cc: 0xc7a3011c  lwc1        $f3, 0x11C($sp)
    ctx->pc = 0x2314ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2314d0: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2314d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2314d4: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x2314d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2314d8: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x2314d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2314dc: 0xe7a300fc  swc1        $f3, 0xFC($sp)
    ctx->pc = 0x2314dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x2314e0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2314e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2314e4: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x2314e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2314e8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2314E8u;
    SET_GPR_U32(ctx, 31, 0x2314F0u);
    ctx->pc = 0x2314ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2314E8u;
    // 0x2314ec: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2314E8u, 0x2314F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2314F0u;
label_2314f0:
    // 0x2314f0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2314F0u;
    SET_GPR_U32(ctx, 31, 0x2314F8u);
    ctx->pc = 0x2314F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2314F0u;
    // 0x2314f4: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2314F0u, 0x2314F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2314F8u;
label_2314f8:
    // 0x2314f8: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x2314f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2314fc: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2314fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x231500: 0x7ba30080  lq          $v1, 0x80($sp)
    ctx->pc = 0x231500u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x231504: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x231504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x231508: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x231508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
    // 0x23150c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x23150cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x231510: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x231510u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x231514: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x231514u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x231518: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x231518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23151c: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x23151cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x231520: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x231520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x231524: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x231524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x231528: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x231528u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x23152c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x23152cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x231530: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x231530u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x231534: 0x0  nop
    ctx->pc = 0x231534u;
    // NOP
    // 0x231538: 0x0  nop
    ctx->pc = 0x231538u;
    // NOP
    // 0x23153c: 0x46010084  c1          0x10084
    ctx->pc = 0x23153cu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x231540: 0xe7a10144  swc1        $f1, 0x144($sp)
    ctx->pc = 0x231540u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x231544: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x231544u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231548: 0x0  nop
    ctx->pc = 0x231548u;
    // NOP
    // 0x23154c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x23154cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231550: 0x0  nop
    ctx->pc = 0x231550u;
    // NOP
    // 0x231554: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x231554u;
    {
        const bool branch_taken_0x231554 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x231558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231554u;
        // 0x231558: 0xe7a20140  swc1        $f2, 0x140($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x231554) {
            ctx->pc = 0x231580u;
            goto label_231580;
        }
    }
    ctx->pc = 0x23155Cu;
    // 0x23155c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23155cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x231560: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x231560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231564: 0x0  nop
    ctx->pc = 0x231564u;
    // NOP
    // 0x231568: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x231568u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x23156c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x23156cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x231570: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x231570u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x231574: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x231574u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x231578: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x231578u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23157c: 0xfba10130  sqc2        $vf1, 0x130($sp)
    ctx->pc = 0x23157cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[1]));
label_231580:
    // 0x231580: 0x93a40010  lbu         $a0, 0x10($sp)
    ctx->pc = 0x231580u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231584: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x231584u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x231588: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x231588u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x23158c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x23158cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x231590: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x231590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x231594: 0xa3a40150  sb          $a0, 0x150($sp)
    ctx->pc = 0x231594u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 336), (uint8_t)GPR_U32(ctx, 4));
    // 0x231598: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x231598u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x23159c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x23159cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2315a0: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x2315a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2315a4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2315a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2315a8: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2315a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2315ac: 0xc7a00140  lwc1        $f0, 0x140($sp)
    ctx->pc = 0x2315acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2315b0: 0x3c05fbff  lui         $a1, 0xFBFF
    ctx->pc = 0x2315b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64511 << 16));
    // 0x2315b4: 0xc7a10144  lwc1        $f1, 0x144($sp)
    ctx->pc = 0x2315b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2315b8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2315b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2315bc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x2315bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2315c0: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x2315c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x2315c4: 0xc07788a  jal         func_1DE228
    ctx->pc = 0x2315C4u;
    SET_GPR_U32(ctx, 31, 0x2315CCu);
    ctx->pc = 0x2315C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2315C4u;
    // 0x2315c8: 0xe7a10064  swc1        $f1, 0x64($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE228u, 0x2315C4u, 0x2315CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2315CCu;
label_2315cc:
    // 0x2315cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2315ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2315d0:
    // 0x2315d0: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
    ctx->pc = 0x2315D0u;
    {
        const bool branch_taken_0x2315d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2315D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2315D0u;
        // 0x2315d4: 0x8fa501a4  lw          $a1, 0x1A4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2315d0) {
            ctx->pc = 0x2316ACu;
            goto label_2316ac;
        }
    }
    ctx->pc = 0x2315D8u;
    // 0x2315d8: 0xc069c74  jal         func_1A71D0
    ctx->pc = 0x2315D8u;
    SET_GPR_U32(ctx, 31, 0x2315E0u);
    ctx->pc = 0x2315DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2315D8u;
    // 0x2315dc: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A71D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A71D0u, 0x2315D8u, 0x2315E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2315E0u;
label_2315e0:
    // 0x2315e0: 0x8e420334  lw          $v0, 0x334($s2)
    ctx->pc = 0x2315e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x2315e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2315e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2315e8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2315e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2315ec: 0xe4410174  swc1        $f1, 0x174($v0)
    ctx->pc = 0x2315ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 372), bits); }
    // 0x2315f0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2315f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2315f4: 0xe4400178  swc1        $f0, 0x178($v0)
    ctx->pc = 0x2315f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 376), bits); }
    // 0x2315f8: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x2315F8u;
    SET_GPR_U32(ctx, 31, 0x231600u);
    ctx->pc = 0x2315FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2315F8u;
    // 0x2315fc: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x2315F8u, 0x231600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231600u;
label_231600:
    // 0x231600: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x231600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231604: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x231604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x231608: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x231608u;
    SET_GPR_U32(ctx, 31, 0x231610u);
    ctx->pc = 0x23160Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231608u;
    // 0x23160c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x231608u, 0x231610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231610u;
label_231610:
    // 0x231610: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x231610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231614: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x231614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x231618: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x231618u;
    SET_GPR_U32(ctx, 31, 0x231620u);
    ctx->pc = 0x23161Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231618u;
    // 0x23161c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x231618u, 0x231620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231620u;
label_231620:
    // 0x231620: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x231620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231624: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x231624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x231628: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x231628u;
    SET_GPR_U32(ctx, 31, 0x231630u);
    ctx->pc = 0x23162Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231628u;
    // 0x23162c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x231628u, 0x231630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231630u;
label_231630:
    // 0x231630: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x231630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231634: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x231634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x231638: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x231638u;
    SET_GPR_U32(ctx, 31, 0x231640u);
    ctx->pc = 0x23163Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231638u;
    // 0x23163c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x231638u, 0x231640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231640u;
label_231640:
    // 0x231640: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x231640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231644: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x231644u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
    // 0x231648: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x231648u;
    SET_GPR_U32(ctx, 31, 0x231650u);
    ctx->pc = 0x23164Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231648u;
    // 0x23164c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x231648u, 0x231650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231650u;
label_231650:
    // 0x231650: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x231650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231654: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x231654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x231658: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x231658u;
    SET_GPR_U32(ctx, 31, 0x231660u);
    ctx->pc = 0x23165Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231658u;
    // 0x23165c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x231658u, 0x231660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231660u;
label_231660:
    // 0x231660: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x231660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x231664: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x231664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x231668: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x231668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x23166c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x23166cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x231670: 0xfa4103e0  sqc2        $vf1, 0x3E0($s2)
    ctx->pc = 0x231670u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 992), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x231674: 0xc6400374  lwc1        $f0, 0x374($s2)
    ctx->pc = 0x231674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 884)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231678: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x231678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x23167c: 0xe6400400  swc1        $f0, 0x400($s2)
    ctx->pc = 0x23167cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1024), bits); }
    // 0x231680: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x231680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x231684: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x231684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x231688: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x231688u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23168c: 0xfa4103f0  sqc2        $vf1, 0x3F0($s2)
    ctx->pc = 0x23168cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 1008), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x231690: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x231690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x231694: 0xae430408  sw          $v1, 0x408($s2)
    ctx->pc = 0x231694u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1032), GPR_U32(ctx, 3));
    // 0x231698: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x231698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x23169c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23169Cu;
    {
        const bool branch_taken_0x23169c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2316A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23169Cu;
        // 0x2316a0: 0xdfb001b0  ld          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23169c) {
            ctx->pc = 0x2316B0u;
            goto label_2316b0;
        }
    }
    ctx->pc = 0x2316A4u;
    // 0x2316a4: 0xc08bd98  jal         func_22F660
    ctx->pc = 0x2316A4u;
    SET_GPR_U32(ctx, 31, 0x2316ACu);
    ctx->pc = 0x2316A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2316A4u;
    // 0x2316a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F660u, 0x2316A4u, 0x2316ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2316ACu;
label_2316ac:
    // 0x2316ac: 0xdfb001b0  ld          $s0, 0x1B0($sp)
    ctx->pc = 0x2316acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 432)));
label_2316b0:
    // 0x2316b0: 0xdfb101b8  ld          $s1, 0x1B8($sp)
    ctx->pc = 0x2316b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 440)));
label_2316b4:
    // 0x2316b4: 0xdfb201c0  ld          $s2, 0x1C0($sp)
    ctx->pc = 0x2316b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x2316b8: 0xdfb301c8  ld          $s3, 0x1C8($sp)
    ctx->pc = 0x2316b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x2316bc: 0xdfb401d0  ld          $s4, 0x1D0($sp)
    ctx->pc = 0x2316bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x2316c0: 0xdfb501d8  ld          $s5, 0x1D8($sp)
    ctx->pc = 0x2316c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x2316c4: 0xdfb601e0  ld          $s6, 0x1E0($sp)
    ctx->pc = 0x2316c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x2316c8: 0xdfb701e8  ld          $s7, 0x1E8($sp)
    ctx->pc = 0x2316c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x2316cc: 0xdfbe01f0  ld          $fp, 0x1F0($sp)
    ctx->pc = 0x2316ccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x2316d0: 0xdfbf01f8  ld          $ra, 0x1F8($sp)
    ctx->pc = 0x2316d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x2316d4: 0xc7b40200  lwc1        $f20, 0x200($sp)
    ctx->pc = 0x2316d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2316d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2316D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2316DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2316D8u;
        // 0x2316dc: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2316D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2316E0u;
}

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

// Function: sub_002FFD60
// Address: 0x2ffd60 - 0x300858
void sub_002FFD60_0x2ffd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FFD60_0x2ffd60");
#endif

    switch (ctx->pc) {
        case 0x2ffdc8u: goto label_2ffdc8;
        case 0x2ffdd4u: goto label_2ffdd4;
        case 0x2ffe00u: goto label_2ffe00;
        case 0x2ffee8u: goto label_2ffee8;
        case 0x2ffff0u: goto label_2ffff0;
        case 0x300000u: goto label_300000;
        case 0x300008u: goto label_300008;
        case 0x30014cu: goto label_30014c;
        case 0x3001e8u: goto label_3001e8;
        case 0x300228u: goto label_300228;
        case 0x300268u: goto label_300268;
        case 0x300278u: goto label_300278;
        case 0x3002e0u: goto label_3002e0;
        case 0x3002fcu: goto label_3002fc;
        case 0x30031cu: goto label_30031c;
        case 0x30032cu: goto label_30032c;
        case 0x30034cu: goto label_30034c;
        case 0x300394u: goto label_300394;
        case 0x300464u: goto label_300464;
        case 0x30074cu: goto label_30074c;
        case 0x300754u: goto label_300754;
        case 0x300768u: goto label_300768;
        case 0x300774u: goto label_300774;
        case 0x300784u: goto label_300784;
        case 0x300790u: goto label_300790;
        case 0x3007a0u: goto label_3007a0;
        case 0x3007b0u: goto label_3007b0;
        case 0x300800u: goto label_300800;
        default: break;
    }

    ctx->pc = 0x2ffd60u;

    // 0x2ffd60: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2ffd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2ffd64: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2ffd64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x2ffd68: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2ffd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2ffd6c: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x2ffd6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x2ffd70: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x2ffd70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffd74: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2ffd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2ffd78: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2ffd78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ffd7c: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x2ffd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x2ffd80: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2ffd80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ffd84: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2ffd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x2ffd88: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2ffd88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffd8c: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x2ffd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x2ffd90: 0x24545870  addiu       $s4, $v0, 0x5870
    ctx->pc = 0x2ffd90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
    // 0x2ffd94: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x2ffd94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x2ffd98: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2ffd98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffd9c: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x2ffd9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x2ffda0: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x2ffda0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2ffda4: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x2ffda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x2ffda8: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2ffda8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffdac: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x2ffdacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x2ffdb0: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2ffdb0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffdb4: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x2ffdb4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2ffdb8: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x2ffdb8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x2ffdbc: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2ffdbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2ffdc0: 0xafa70050  sw          $a3, 0x50($sp)
    ctx->pc = 0x2ffdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 7));
    // 0x2ffdc4: 0x0  nop
    ctx->pc = 0x2ffdc4u;
    // NOP
label_2ffdc8:
    // 0x2ffdc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ffdc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffdcc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2FFDCCu;
    SET_GPR_U32(ctx, 31, 0x2FFDD4u);
    ctx->pc = 0x2FFDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFDCCu;
    // 0x2ffdd0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2FFDCCu, 0x2FFDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFDD4u;
label_2ffdd4:
    // 0x2ffdd4: 0x0  nop
    ctx->pc = 0x2ffdd4u;
    // NOP
    // 0x2ffdd8: 0x1632fffb  bne         $s1, $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2FFDD8u;
    {
        const bool branch_taken_0x2ffdd8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x2FFDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFDD8u;
        // 0x2ffddc: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffdd8) {
            ctx->pc = 0x2FFDC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ffdc8;
        }
    }
    ctx->pc = 0x2FFDE0u;
    // 0x2ffde0: 0x268200b0  addiu       $v0, $s4, 0xB0
    ctx->pc = 0x2ffde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
    // 0x2ffde4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2ffde4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ffde8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2ffde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2ffdec: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x2ffdecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
    // 0x2ffdf0: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x2ffdf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x2ffdf4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2ffdf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2ffdf8: 0xc0b8f52  jal         func_2E3D48
    ctx->pc = 0x2FFDF8u;
    SET_GPR_U32(ctx, 31, 0x2FFE00u);
    ctx->pc = 0x2FFDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFDF8u;
    // 0x2ffdfc: 0x26a45870  addiu       $a0, $s5, 0x5870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 22640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3D48u, 0x2FFDF8u, 0x2FFE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFE00u;
label_2ffe00:
    // 0x2ffe00: 0x3c013e75  lui         $at, 0x3E75
    ctx->pc = 0x2ffe00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15989 << 16));
    // 0x2ffe04: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2ffe04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2ffe08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ffe08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ffe0c: 0x0  nop
    ctx->pc = 0x2ffe0cu;
    // NOP
    // 0x2ffe10: 0xe68100e0  swc1        $f1, 0xE0($s4)
    ctx->pc = 0x2ffe10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 224), bits); }
    // 0x2ffe14: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2ffe14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ffe18: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FFE18u;
    {
        const bool branch_taken_0x2ffe18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE18u;
        // 0x2ffe1c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffe18) {
            ctx->pc = 0x2FFE34u;
            goto label_2ffe34;
        }
    }
    ctx->pc = 0x2FFE20u;
    // 0x2ffe20: 0x8e620334  lw          $v0, 0x334($s3)
    ctx->pc = 0x2ffe20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
    // 0x2ffe24: 0xc6800098  lwc1        $f0, 0x98($s4)
    ctx->pc = 0x2ffe24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ffe28: 0x8c42014c  lw          $v0, 0x14C($v0)
    ctx->pc = 0x2ffe28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 332)));
    // 0x2ffe2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2FFE2Cu;
    {
        const bool branch_taken_0x2ffe2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE2Cu;
        // 0x2ffe30: 0xe680009c  swc1        $f0, 0x9C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffe2c) {
            ctx->pc = 0x2FFE3Cu;
            goto label_2ffe3c;
        }
    }
    ctx->pc = 0x2FFE34u;
label_2ffe34:
    // 0x2ffe34: 0x8e620334  lw          $v0, 0x334($s3)
    ctx->pc = 0x2ffe34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
    // 0x2ffe38: 0x8c420150  lw          $v0, 0x150($v0)
    ctx->pc = 0x2ffe38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_2ffe3c:
    // 0x2ffe3c: 0x2443fffa  addiu       $v1, $v0, -0x6
    ctx->pc = 0x2ffe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
    // 0x2ffe40: 0x2c620031  sltiu       $v0, $v1, 0x31
    ctx->pc = 0x2ffe40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)49) ? 1 : 0);
    // 0x2ffe44: 0x104000cf  beqz        $v0, . + 4 + (0xCF << 2)
    ctx->pc = 0x2FFE44u;
    {
        const bool branch_taken_0x2ffe44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE44u;
        // 0x2ffe48: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffe44) {
            ctx->pc = 0x300184u;
            goto label_300184;
        }
    }
    ctx->pc = 0x2FFE4Cu;
    // 0x2ffe4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ffe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2ffe50: 0x24421ca0  addiu       $v0, $v0, 0x1CA0
    ctx->pc = 0x2ffe50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7328));
    // 0x2ffe54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ffe54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ffe58: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ffe58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ffe5c: 0x800008  jr          $a0
    ctx->pc = 0x2FFE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2FFE64u: goto label_2ffe64;
            case 0x2FFECCu: goto label_2ffecc;
            case 0x2FFFD8u: goto label_2fffd8;
            case 0x2FFFE8u: goto label_2fffe8;
            case 0x300154u: goto label_300154;
            case 0x300184u: goto label_300184;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFE5Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2FFE64u;
label_2ffe64:
    // 0x2ffe64: 0x8e620334  lw          $v0, 0x334($s3)
    ctx->pc = 0x2ffe64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
    // 0x2ffe68: 0x24030451  addiu       $v1, $zero, 0x451
    ctx->pc = 0x2ffe68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1105));
    // 0x2ffe6c: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x2ffe6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2ffe70: 0x1083003f  beq         $a0, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x2FFE70u;
    {
        const bool branch_taken_0x2ffe70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2FFE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE70u;
        // 0x2ffe74: 0x28820452  slti        $v0, $a0, 0x452 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1106) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffe70) {
            ctx->pc = 0x2FFF70u;
            goto label_2fff70;
        }
    }
    ctx->pc = 0x2FFE78u;
    // 0x2ffe78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FFE78u;
    {
        const bool branch_taken_0x2ffe78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE78u;
        // 0x2ffe7c: 0x24020450  addiu       $v0, $zero, 0x450 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffe78) {
            ctx->pc = 0x2FFE90u;
            goto label_2ffe90;
        }
    }
    ctx->pc = 0x2FFE80u;
    // 0x2ffe80: 0x10820033  beq         $a0, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2FFE80u;
    {
        const bool branch_taken_0x2ffe80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FFE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE80u;
        // 0x2ffe84: 0x3c02005a  lui         $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffe80) {
            ctx->pc = 0x2FFF50u;
            goto label_2fff50;
        }
    }
    ctx->pc = 0x2FFE88u;
    // 0x2ffe88: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FFE88u;
    {
        const bool branch_taken_0x2ffe88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffe88) {
            ctx->pc = 0x2FFEA4u;
            goto label_2ffea4;
        }
    }
    ctx->pc = 0x2FFE90u;
label_2ffe90:
    // 0x2ffe90: 0x24020452  addiu       $v0, $zero, 0x452
    ctx->pc = 0x2ffe90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1106));
    // 0x2ffe94: 0x1082002d  beq         $a0, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2FFE94u;
    {
        const bool branch_taken_0x2ffe94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FFE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE94u;
        // 0x2ffe98: 0x24020453  addiu       $v0, $zero, 0x453 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffe94) {
            ctx->pc = 0x2FFF4Cu;
            goto label_2fff4c;
        }
    }
    ctx->pc = 0x2FFE9Cu;
    // 0x2ffe9c: 0x10820035  beq         $a0, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2FFE9Cu;
    {
        const bool branch_taken_0x2ffe9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FFEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFE9Cu;
        // 0x2ffea0: 0x3c02005a  lui         $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffe9c) {
            ctx->pc = 0x2FFF74u;
            goto label_2fff74;
        }
    }
    ctx->pc = 0x2FFEA4u;
label_2ffea4:
    // 0x2ffea4: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x2ffea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
    // 0x2ffea8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2ffea8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2ffeac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ffeacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ffeb0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2ffeb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2ffeb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ffeb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ffeb8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2ffeb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2ffebc: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x2ffebcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x2ffec0: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x2ffec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x2ffec4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2FFEC4u;
    {
        const bool branch_taken_0x2ffec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFEC4u;
        // 0x2ffec8: 0xafa0002c  sw          $zero, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffec4) {
            ctx->pc = 0x2FFFB8u;
            goto label_2fffb8;
        }
    }
    ctx->pc = 0x2FFECCu;
label_2ffecc:
    // 0x2ffecc: 0x8e650334  lw          $a1, 0x334($s3)
    ctx->pc = 0x2ffeccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
    // 0x2ffed0: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x2ffed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
    // 0x2ffed4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FFED4u;
    {
        const bool branch_taken_0x2ffed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFED4u;
        // 0x2ffed8: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffed4) {
            ctx->pc = 0x2FFF04u;
            goto label_2fff04;
        }
    }
    ctx->pc = 0x2FFEDCu;
    // 0x2ffedc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2ffedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ffee0: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x2ffee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
    // 0x2ffee4: 0x0  nop
    ctx->pc = 0x2ffee4u;
    // NOP
label_2ffee8:
    // 0x2ffee8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ffee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ffeec: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FFEECu;
    {
        const bool branch_taken_0x2ffeec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFEECu;
        // 0x2ffef0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffeec) {
            ctx->pc = 0x2FFF04u;
            goto label_2fff04;
        }
    }
    ctx->pc = 0x2FFEF4u;
    // 0x2ffef4: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x2ffef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2ffef8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2FFEF8u;
    {
        const bool branch_taken_0x2ffef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FFEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFEF8u;
        // 0x2ffefc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffef8) {
            ctx->pc = 0x2FFEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ffee8;
        }
    }
    ctx->pc = 0x2FFF00u;
    // 0x2fff00: 0x8ca201e8  lw          $v0, 0x1E8($a1)
    ctx->pc = 0x2fff00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 488)));
label_2fff04:
    // 0x2fff04: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x2fff04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fff08: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2fff08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2fff0c: 0x0  nop
    ctx->pc = 0x2fff0cu;
    // NOP
    // 0x2fff10: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x2fff10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fff14: 0x0  nop
    ctx->pc = 0x2fff14u;
    // NOP
    // 0x2fff18: 0x4502009b  bc1fl       . + 4 + (0x9B << 2)
    ctx->pc = 0x2FFF18u;
    {
        const bool branch_taken_0x2fff18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fff18) {
            ctx->pc = 0x2FFF1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFF18u;
            // 0x2fff1c: 0x8e620418  lw          $v0, 0x418($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300188u;
            goto label_300188;
        }
    }
    ctx->pc = 0x2FFF20u;
    // 0x2fff20: 0x8cc200d8  lw          $v0, 0xD8($a2)
    ctx->pc = 0x2fff20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 216)));
    // 0x2fff24: 0x2444f858  addiu       $a0, $v0, -0x7A8
    ctx->pc = 0x2fff24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965336));
    // 0x2fff28: 0x2c83000c  sltiu       $v1, $a0, 0xC
    ctx->pc = 0x2fff28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x2fff2c: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FFF2Cu;
    {
        const bool branch_taken_0x2fff2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF2Cu;
        // 0x2fff30: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fff2c) {
            ctx->pc = 0x2FFF94u;
            goto label_2fff94;
        }
    }
    ctx->pc = 0x2FFF34u;
    // 0x2fff34: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2fff34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2fff38: 0x24421d70  addiu       $v0, $v0, 0x1D70
    ctx->pc = 0x2fff38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7536));
    // 0x2fff3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2fff3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2fff40: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2fff40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fff44: 0x800008  jr          $a0
    ctx->pc = 0x2FFF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2FFF4Cu: goto label_2fff4c;
            case 0x2FFF70u: goto label_2fff70;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FFF44u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2FFF4Cu;
label_2fff4c:
    // 0x2fff4c: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x2fff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_2fff50:
    // 0x2fff50: 0x24426520  addiu       $v0, $v0, 0x6520
    ctx->pc = 0x2fff50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25888));
    // 0x2fff54: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fff54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fff58: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2fff58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fff5c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2fff5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2fff60: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fff60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2fff64: 0xc476baf8  lwc1        $f22, -0x4508($v1)
    ctx->pc = 0x2fff64u;
    { uint32_t bits = FAST_READ32(0x3FBAF8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2fff68: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x2FFF68u;
    {
        const bool branch_taken_0x2fff68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF68u;
        // 0x2fff6c: 0xc454baf0  lwc1        $f20, -0x4510($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fff68) {
            ctx->pc = 0x300184u;
            goto label_300184;
        }
    }
    ctx->pc = 0x2FFF70u;
label_2fff70:
    // 0x2fff70: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x2fff70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
label_2fff74:
    // 0x2fff74: 0x24426530  addiu       $v0, $v0, 0x6530
    ctx->pc = 0x2fff74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25904));
    // 0x2fff78: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fff78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fff7c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2fff7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fff80: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2fff80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2fff84: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fff84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2fff88: 0xc476bafc  lwc1        $f22, -0x4504($v1)
    ctx->pc = 0x2fff88u;
    { uint32_t bits = FAST_READ32(0x3FBAFCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2fff8c: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x2FFF8Cu;
    {
        const bool branch_taken_0x2fff8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFF8Cu;
        // 0x2fff90: 0xc454baf4  lwc1        $f20, -0x450C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fff8c) {
            ctx->pc = 0x300184u;
            goto label_300184;
        }
    }
    ctx->pc = 0x2FFF94u;
label_2fff94:
    // 0x2fff94: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x2fff94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
    // 0x2fff98: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2fff98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2fff9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fff9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fffa0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2fffa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2fffa4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2fffa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fffa8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x2fffa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2fffac: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x2fffacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x2fffb0: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x2fffb0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2fffb4: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2fffb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2fffb8:
    // 0x2fffb8: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x2fffb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2fffbc: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2fffbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2fffc0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2fffc4: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x2fffc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
    // 0x2fffc8: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x2fffc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x2fffcc: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2fffccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2fffd0: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2FFFD0u;
    {
        const bool branch_taken_0x2fffd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FFFD0u;
        // 0x2fffd4: 0xc454baec  lwc1        $f20, -0x4514($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fffd0) {
            ctx->pc = 0x300184u;
            goto label_300184;
        }
    }
    ctx->pc = 0x2FFFD8u;
label_2fffd8:
    // 0x2fffd8: 0x8e62036c  lw          $v0, 0x36C($s3)
    ctx->pc = 0x2fffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 876)));
    // 0x2fffdc: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2fffdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2fffe0: 0x50400069  beql        $v0, $zero, . + 4 + (0x69 << 2)
    ctx->pc = 0x2FFFE0u;
    {
        const bool branch_taken_0x2fffe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fffe0) {
            ctx->pc = 0x2FFFE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFFE0u;
            // 0x2fffe4: 0x8e620418  lw          $v0, 0x418($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300188u;
            goto label_300188;
        }
    }
    ctx->pc = 0x2FFFE8u;
label_2fffe8:
    // 0x2fffe8: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x2FFFE8u;
    SET_GPR_U32(ctx, 31, 0x2FFFF0u);
    ctx->pc = 0x2FFFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFFE8u;
    // 0x2fffec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2FFFE8u, 0x2FFFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FFFF0u;
label_2ffff0:
    // 0x2ffff0: 0x50400065  beql        $v0, $zero, . + 4 + (0x65 << 2)
    ctx->pc = 0x2FFFF0u;
    {
        const bool branch_taken_0x2ffff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffff0) {
            ctx->pc = 0x2FFFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FFFF0u;
            // 0x2ffff4: 0x8e620418  lw          $v0, 0x418($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300188u;
            goto label_300188;
        }
    }
    ctx->pc = 0x2FFFF8u;
    // 0x2ffff8: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x2FFFF8u;
    SET_GPR_U32(ctx, 31, 0x300000u);
    ctx->pc = 0x2FFFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FFFF8u;
    // 0x2ffffc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2FFFF8u, 0x300000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300000u;
label_300000:
    // 0x300000: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x300000u;
    SET_GPR_U32(ctx, 31, 0x300008u);
    ctx->pc = 0x300004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300000u;
    // 0x300004: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x300000u, 0x300008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300008u;
label_300008:
    // 0x300008: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x300008u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30000c: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x30000cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x300010: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x300010u;
    {
        const bool branch_taken_0x300010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x300014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300010u;
        // 0x300014: 0x28620032  slti        $v0, $v1, 0x32 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x300010) {
            ctx->pc = 0x3000E8u;
            goto label_3000e8;
        }
    }
    ctx->pc = 0x300018u;
    // 0x300018: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x300018u;
    {
        const bool branch_taken_0x300018 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300018u;
        // 0x30001c: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300018) {
            ctx->pc = 0x30004Cu;
            goto label_30004c;
        }
    }
    ctx->pc = 0x300020u;
    // 0x300020: 0x10620039  beq         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x300020u;
    {
        const bool branch_taken_0x300020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x300024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300020u;
        // 0x300024: 0x28620029  slti        $v0, $v1, 0x29 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x300020) {
            ctx->pc = 0x300108u;
            goto label_300108;
        }
    }
    ctx->pc = 0x300028u;
    // 0x300028: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x300028u;
    {
        const bool branch_taken_0x300028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30002Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300028u;
        // 0x30002c: 0x268200c0  addiu       $v0, $s4, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300028) {
            ctx->pc = 0x30012Cu;
            goto label_30012c;
        }
    }
    ctx->pc = 0x300030u;
    // 0x300030: 0x28620030  slti        $v0, $v1, 0x30
    ctx->pc = 0x300030u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x300034: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x300034u;
    {
        const bool branch_taken_0x300034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x300038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300034u;
        // 0x300038: 0x2862002e  slti        $v0, $v1, 0x2E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)46) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x300034) {
            ctx->pc = 0x300128u;
            goto label_300128;
        }
    }
    ctx->pc = 0x30003Cu;
    // 0x30003c: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x30003Cu;
    {
        const bool branch_taken_0x30003c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x300040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30003Cu;
        // 0x300040: 0x268200c0  addiu       $v0, $s4, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30003c) {
            ctx->pc = 0x30012Cu;
            goto label_30012c;
        }
    }
    ctx->pc = 0x300044u;
    // 0x300044: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x300044u;
    {
        const bool branch_taken_0x300044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300044) {
            ctx->pc = 0x3000ECu;
            goto label_3000ec;
        }
    }
    ctx->pc = 0x30004Cu;
label_30004c:
    // 0x30004c: 0x24020082  addiu       $v0, $zero, 0x82
    ctx->pc = 0x30004cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x300050: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x300050u;
    {
        const bool branch_taken_0x300050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x300054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300050u;
        // 0x300054: 0x28620083  slti        $v0, $v1, 0x83 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)131) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x300050) {
            ctx->pc = 0x300084u;
            goto label_300084;
        }
    }
    ctx->pc = 0x300058u;
    // 0x300058: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x300058u;
    {
        const bool branch_taken_0x300058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300058u;
        // 0x30005c: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300058) {
            ctx->pc = 0x300070u;
            goto label_300070;
        }
    }
    ctx->pc = 0x300060u;
    // 0x300060: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x300060u;
    {
        const bool branch_taken_0x300060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x300064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300060u;
        // 0x300064: 0x268200c0  addiu       $v0, $s4, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300060) {
            ctx->pc = 0x3000A4u;
            goto label_3000a4;
        }
    }
    ctx->pc = 0x300068u;
    // 0x300068: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x300068u;
    {
        const bool branch_taken_0x300068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300068) {
            ctx->pc = 0x30012Cu;
            goto label_30012c;
        }
    }
    ctx->pc = 0x300070u;
label_300070:
    // 0x300070: 0x24020083  addiu       $v0, $zero, 0x83
    ctx->pc = 0x300070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x300074: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x300074u;
    {
        const bool branch_taken_0x300074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x300078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300074u;
        // 0x300078: 0x268200c0  addiu       $v0, $s4, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300074) {
            ctx->pc = 0x3000A4u;
            goto label_3000a4;
        }
    }
    ctx->pc = 0x30007Cu;
    // 0x30007c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x30007Cu;
    {
        const bool branch_taken_0x30007c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30007c) {
            ctx->pc = 0x30012Cu;
            goto label_30012c;
        }
    }
    ctx->pc = 0x300084u;
label_300084:
    // 0x300084: 0x268200d0  addiu       $v0, $s4, 0xD0
    ctx->pc = 0x300084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 208));
    // 0x300088: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x300088u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30008c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x30008cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x300090: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x300090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x300094: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x300094u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x300098: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x300098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x30009c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x30009Cu;
    {
        const bool branch_taken_0x30009c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3000A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30009Cu;
        // 0x3000a0: 0x26a45870  addiu       $a0, $s5, 0x5870 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 22640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30009c) {
            ctx->pc = 0x300144u;
            goto label_300144;
        }
    }
    ctx->pc = 0x3000A4u;
label_3000a4:
    // 0x3000a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3000a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3000a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3000a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3000ac: 0x268200c0  addiu       $v0, $s4, 0xC0
    ctx->pc = 0x3000acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    // 0x3000b0: 0xe68000e0  swc1        $f0, 0xE0($s4)
    ctx->pc = 0x3000b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 224), bits); }
    // 0x3000b4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3000b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3000b8: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x3000b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3000bc: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x3000bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3000c0: 0x26a45870  addiu       $a0, $s5, 0x5870
    ctx->pc = 0x3000c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 22640));
    // 0x3000c4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3000c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x3000c8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3000c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3000cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3000ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3000d0: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3000d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x3000d4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3000d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3000d8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3000d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x3000dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3000dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3000e0: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3000E0u;
    {
        const bool branch_taken_0x3000e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3000E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3000E0u;
        // 0x3000e4: 0xe7a00010  swc1        $f0, 0x10($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3000e0) {
            ctx->pc = 0x300144u;
            goto label_300144;
        }
    }
    ctx->pc = 0x3000E8u;
label_3000e8:
    // 0x3000e8: 0x268200c0  addiu       $v0, $s4, 0xC0
    ctx->pc = 0x3000e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
label_3000ec:
    // 0x3000ec: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x3000ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3000f0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x3000f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3000f4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x3000f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x3000f8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3000f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3000fc: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3000fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x300100: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x300100u;
    {
        const bool branch_taken_0x300100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300100u;
        // 0x300104: 0x26a45870  addiu       $a0, $s5, 0x5870 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 22640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300100) {
            ctx->pc = 0x300144u;
            goto label_300144;
        }
    }
    ctx->pc = 0x300108u;
label_300108:
    // 0x300108: 0x268200c0  addiu       $v0, $s4, 0xC0
    ctx->pc = 0x300108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    // 0x30010c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x30010cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x300110: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x300110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x300114: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x300114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x300118: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x300118u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x30011c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x30011cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x300120: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x300120u;
    {
        const bool branch_taken_0x300120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300120u;
        // 0x300124: 0x26a45870  addiu       $a0, $s5, 0x5870 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 22640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300120) {
            ctx->pc = 0x300144u;
            goto label_300144;
        }
    }
    ctx->pc = 0x300128u;
label_300128:
    // 0x300128: 0x268200c0  addiu       $v0, $s4, 0xC0
    ctx->pc = 0x300128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
label_30012c:
    // 0x30012c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x30012cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x300130: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x300130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x300134: 0x26a45870  addiu       $a0, $s5, 0x5870
    ctx->pc = 0x300134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 22640));
    // 0x300138: 0x3c013c54  lui         $at, 0x3C54
    ctx->pc = 0x300138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15444 << 16));
    // 0x30013c: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x30013cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
    // 0x300140: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x300140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_300144:
    // 0x300144: 0xc0b8f52  jal         func_2E3D48
    ctx->pc = 0x300144u;
    SET_GPR_U32(ctx, 31, 0x30014Cu);
    ctx->pc = 0x2E3D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3D48u, 0x300144u, 0x30014Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30014Cu;
label_30014c:
    // 0x30014c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x30014Cu;
    {
        const bool branch_taken_0x30014c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30014Cu;
        // 0x300150: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x30014c) {
            ctx->pc = 0x300184u;
            goto label_300184;
        }
    }
    ctx->pc = 0x300154u;
label_300154:
    // 0x300154: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x300154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
    // 0x300158: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x300158u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x30015c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30015cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x300160: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x300160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x300164: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x300164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x300168: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x300168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x30016c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x30016cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x300170: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x300170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x300174: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x300174u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x300178: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x300178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30017c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x30017cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x300180: 0xfa611110  sqc2        $vf1, 0x1110($s3)
    ctx->pc = 0x300180u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 4368), _mm_castps_si128(ctx->vu0_vf[1]));
label_300184:
    // 0x300184: 0x8e620418  lw          $v0, 0x418($s3)
    ctx->pc = 0x300184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1048)));
label_300188:
    // 0x300188: 0x2444fffb  addiu       $a0, $v0, -0x5
    ctx->pc = 0x300188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x30018c: 0x2c83000d  sltiu       $v1, $a0, 0xD
    ctx->pc = 0x30018cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x300190: 0x1060006f  beqz        $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x300190u;
    {
        const bool branch_taken_0x300190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x300194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300190u;
        // 0x300194: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300190) {
            ctx->pc = 0x300350u;
            goto label_300350;
        }
    }
    ctx->pc = 0x300198u;
    // 0x300198: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x300198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x30019c: 0x24421da0  addiu       $v0, $v0, 0x1DA0
    ctx->pc = 0x30019cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7584));
    // 0x3001a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3001a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3001a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3001a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3001a8: 0x800008  jr          $a0
    ctx->pc = 0x3001A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3001B0u: goto label_3001b0;
            case 0x3002C4u: goto label_3002c4;
            case 0x300304u: goto label_300304;
            case 0x300324u: goto label_300324;
            case 0x300334u: goto label_300334;
            case 0x300350u: goto label_300350;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3001A8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3001B0u;
label_3001b0:
    // 0x3001b0: 0x8e650334  lw          $a1, 0x334($s3)
    ctx->pc = 0x3001b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
    // 0x3001b4: 0x24030037  addiu       $v1, $zero, 0x37
    ctx->pc = 0x3001b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x3001b8: 0x8ca20150  lw          $v0, 0x150($a1)
    ctx->pc = 0x3001b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
    // 0x3001bc: 0x1443003c  bne         $v0, $v1, . + 4 + (0x3C << 2)
    ctx->pc = 0x3001BCu;
    {
        const bool branch_taken_0x3001bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3001C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3001BCu;
        // 0x3001c0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3001bc) {
            ctx->pc = 0x3002B0u;
            goto label_3002b0;
        }
    }
    ctx->pc = 0x3001C4u;
    // 0x3001c4: 0x8cc200dc  lw          $v0, 0xDC($a2)
    ctx->pc = 0x3001c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 220)));
    // 0x3001c8: 0x284207bc  slti        $v0, $v0, 0x7BC
    ctx->pc = 0x3001c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1980) ? 1 : 0);
    // 0x3001cc: 0x54400061  bnel        $v0, $zero, . + 4 + (0x61 << 2)
    ctx->pc = 0x3001CCu;
    {
        const bool branch_taken_0x3001cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3001cc) {
            ctx->pc = 0x3001D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3001CCu;
            // 0x3001d0: 0x8e620590  lw          $v0, 0x590($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300354u;
            goto label_300354;
        }
    }
    ctx->pc = 0x3001D4u;
    // 0x3001d4: 0x8cc201e4  lw          $v0, 0x1E4($a2)
    ctx->pc = 0x3001d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
    // 0x3001d8: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x3001D8u;
    {
        const bool branch_taken_0x3001d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3001d8) {
            ctx->pc = 0x3001DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3001D8u;
            // 0x3001dc: 0x8cc301e4  lw          $v1, 0x1E4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30020Cu;
            goto label_30020c;
        }
    }
    ctx->pc = 0x3001E0u;
    // 0x3001e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3001e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3001e4: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x3001e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
label_3001e8:
    // 0x3001e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3001e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3001ec: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3001ECu;
    {
        const bool branch_taken_0x3001ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3001ec) {
            ctx->pc = 0x3001F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3001ECu;
            // 0x3001f0: 0x8cc301e4  lw          $v1, 0x1E4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30020Cu;
            goto label_30020c;
        }
    }
    ctx->pc = 0x3001F4u;
    // 0x3001f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3001f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3001f8: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x3001f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3001fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3001FCu;
    {
        const bool branch_taken_0x3001fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x300200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3001FCu;
        // 0x300200: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3001fc) {
            ctx->pc = 0x3001E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3001e8;
        }
    }
    ctx->pc = 0x300204u;
    // 0x300204: 0x8ca201e8  lw          $v0, 0x1E8($a1)
    ctx->pc = 0x300204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 488)));
    // 0x300208: 0x8cc301e4  lw          $v1, 0x1E4($a2)
    ctx->pc = 0x300208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
label_30020c:
    // 0x30020c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x30020Cu;
    {
        const bool branch_taken_0x30020c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x300210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30020Cu;
        // 0x300210: 0xc441001c  lwc1        $f1, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30020c) {
            ctx->pc = 0x30021Cu;
            goto label_30021c;
        }
    }
    ctx->pc = 0x300214u;
    // 0x300214: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x300214u;
    {
        const bool branch_taken_0x300214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300214u;
        // 0x300218: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300214) {
            ctx->pc = 0x300244u;
            goto label_300244;
        }
    }
    ctx->pc = 0x30021Cu;
label_30021c:
    // 0x30021c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x30021cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300220: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x300220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
    // 0x300224: 0x0  nop
    ctx->pc = 0x300224u;
    // NOP
label_300228:
    // 0x300228: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x300228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30022c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30022Cu;
    {
        const bool branch_taken_0x30022c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x300230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30022Cu;
        // 0x300230: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30022c) {
            ctx->pc = 0x300244u;
            goto label_300244;
        }
    }
    ctx->pc = 0x300234u;
    // 0x300234: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x300234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x300238: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x300238u;
    {
        const bool branch_taken_0x300238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300238u;
        // 0x30023c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300238) {
            ctx->pc = 0x300228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300228;
        }
    }
    ctx->pc = 0x300240u;
    // 0x300240: 0x8cc201e8  lw          $v0, 0x1E8($a2)
    ctx->pc = 0x300240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_300244:
    // 0x300244: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x300244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x300248: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x300248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x30024c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x30024cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x300250: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x300250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300254: 0x0  nop
    ctx->pc = 0x300254u;
    // NOP
    // 0x300258: 0x0  nop
    ctx->pc = 0x300258u;
    // NOP
    // 0x30025c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x30025cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x300260: 0xc0e3f5e  jal         func_38FD78
    ctx->pc = 0x300260u;
    SET_GPR_U32(ctx, 31, 0x300268u);
    ctx->pc = 0x300264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300260u;
    // 0x300264: 0x460c0b02  mul.s       $f12, $f1, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x300260u, 0x300268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300268u;
label_300268:
    // 0x300268: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x300268u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x30026c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x30026cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x300270: 0xc0b1250  jal         func_2C4940
    ctx->pc = 0x300270u;
    SET_GPR_U32(ctx, 31, 0x300278u);
    ctx->pc = 0x300274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300270u;
    // 0x300274: 0x2484005a  addiu       $a0, $a0, 0x5A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 90));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4940u, 0x300270u, 0x300278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300278u;
label_300278:
    // 0x300278: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x300278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30027c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30027cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x300280: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x300280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x300284: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x300284u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x300288: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x300288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x30028c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x30028cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x300290: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x300290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x300294: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x300294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x300298: 0xc68000c4  lwc1        $f0, 0xC4($s4)
    ctx->pc = 0x300298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x30029c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x30029cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3002a0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3002a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3002a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3002a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3002a8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x3002A8u;
    {
        const bool branch_taken_0x3002a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3002ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002A8u;
        // 0x3002ac: 0x46030000  add.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3002a8) {
            ctx->pc = 0x30034Cu;
            goto label_30034c;
        }
    }
    ctx->pc = 0x3002B0u;
label_3002b0:
    // 0x3002b0: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x3002b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x3002b4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3002b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x3002b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3002b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3002bc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x3002BCu;
    {
        const bool branch_taken_0x3002bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3002C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002BCu;
        // 0x3002c0: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3002bc) {
            ctx->pc = 0x300350u;
            goto label_300350;
        }
    }
    ctx->pc = 0x3002C4u;
label_3002c4:
    // 0x3002c4: 0x8e620334  lw          $v0, 0x334($s3)
    ctx->pc = 0x3002c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
    // 0x3002c8: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x3002c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x3002cc: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x3002ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x3002d0: 0x1064000d  beq         $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x3002D0u;
    {
        const bool branch_taken_0x3002d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x3002D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002D0u;
        // 0x3002d4: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3002d0) {
            ctx->pc = 0x300308u;
            goto label_300308;
        }
    }
    ctx->pc = 0x3002D8u;
    // 0x3002d8: 0xc08f672  jal         func_23D9C8
    ctx->pc = 0x3002D8u;
    SET_GPR_U32(ctx, 31, 0x3002E0u);
    ctx->pc = 0x3002DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3002D8u;
    // 0x3002dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x3002D8u, 0x3002E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3002E0u;
label_3002e0:
    // 0x3002e0: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x3002E0u;
    {
        const bool branch_taken_0x3002e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3002e0) {
            ctx->pc = 0x3002E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3002E0u;
            // 0x3002e4: 0x8e620590  lw          $v0, 0x590($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1424)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300354u;
            goto label_300354;
        }
    }
    ctx->pc = 0x3002E8u;
    // 0x3002e8: 0x92620299  lbu         $v0, 0x299($s3)
    ctx->pc = 0x3002e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 665)));
    // 0x3002ec: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x3002ECu;
    {
        const bool branch_taken_0x3002ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3002ec) {
            ctx->pc = 0x3002F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3002ECu;
            // 0x3002f0: 0xc6800610  lwc1        $f0, 0x610($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x30034Cu;
            goto label_30034c;
        }
    }
    ctx->pc = 0x3002F4u;
    // 0x3002f4: 0xc0927a8  jal         func_249EA0
    ctx->pc = 0x3002F4u;
    SET_GPR_U32(ctx, 31, 0x3002FCu);
    ctx->pc = 0x3002F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3002F4u;
    // 0x3002f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249EA0u, 0x3002F4u, 0x3002FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3002FCu;
label_3002fc:
    // 0x3002fc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3002FCu;
    {
        const bool branch_taken_0x3002fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3002FCu;
        // 0x300300: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3002fc) {
            ctx->pc = 0x300350u;
            goto label_300350;
        }
    }
    ctx->pc = 0x300304u;
label_300304:
    // 0x300304: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x300304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_300308:
    // 0x300308: 0x24425b60  addiu       $v0, $v0, 0x5B60
    ctx->pc = 0x300308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23392));
    // 0x30030c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x30030cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x300310: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x300310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x300314: 0xc0924f2  jal         func_2493C8
    ctx->pc = 0x300314u;
    SET_GPR_U32(ctx, 31, 0x30031Cu);
    ctx->pc = 0x2493C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2493C8u, 0x300314u, 0x30031Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30031Cu;
label_30031c:
    // 0x30031c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x30031Cu;
    {
        const bool branch_taken_0x30031c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30031Cu;
        // 0x300320: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30031c) {
            ctx->pc = 0x300350u;
            goto label_300350;
        }
    }
    ctx->pc = 0x300324u;
label_300324:
    // 0x300324: 0xc0927a8  jal         func_249EA0
    ctx->pc = 0x300324u;
    SET_GPR_U32(ctx, 31, 0x30032Cu);
    ctx->pc = 0x300328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300324u;
    // 0x300328: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249EA0u, 0x300324u, 0x30032Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30032Cu;
label_30032c:
    // 0x30032c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x30032Cu;
    {
        const bool branch_taken_0x30032c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30032Cu;
        // 0x300330: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30032c) {
            ctx->pc = 0x300350u;
            goto label_300350;
        }
    }
    ctx->pc = 0x300334u;
label_300334:
    // 0x300334: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x300334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x300338: 0x24425b60  addiu       $v0, $v0, 0x5B60
    ctx->pc = 0x300338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23392));
    // 0x30033c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x30033cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(FAST_READ128(0x575B60u));
    // 0x300340: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x300340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x300344: 0xc092c78  jal         func_24B1E0
    ctx->pc = 0x300344u;
    SET_GPR_U32(ctx, 31, 0x30034Cu);
    ctx->pc = 0x24B1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B1E0u, 0x300344u, 0x30034Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30034Cu;
label_30034c:
    // 0x30034c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x30034cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_300350:
    // 0x300350: 0x8e620590  lw          $v0, 0x590($s3)
    ctx->pc = 0x300350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1424)));
label_300354:
    // 0x300354: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x300354u;
    {
        const bool branch_taken_0x300354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x300358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300354u;
        // 0x300358: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300354) {
            ctx->pc = 0x30045Cu;
            goto label_30045c;
        }
    }
    ctx->pc = 0x30035Cu;
    // 0x30035c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x30035cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x300360: 0x24432458  addiu       $v1, $v0, 0x2458
    ctx->pc = 0x300360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9304));
    // 0x300364: 0xc4402458  lwc1        $f0, 0x2458($v0)
    ctx->pc = 0x300364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300368: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x300368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30036c: 0x46000082  mul.s       $f2, $f0, $f0
    ctx->pc = 0x30036cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x300370: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x300370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x300374: 0x460108c2  mul.s       $f3, $f1, $f1
    ctx->pc = 0x300374u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x300378: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x300378u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x30037c: 0x4602a834  c.lt.s      $f21, $f2
    ctx->pc = 0x30037cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x300380: 0x0  nop
    ctx->pc = 0x300380u;
    // NOP
    // 0x300384: 0x45000035  bc1f        . + 4 + (0x35 << 2)
    ctx->pc = 0x300384u;
    {
        const bool branch_taken_0x300384 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x300388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300384u;
        // 0x300388: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x300384) {
            ctx->pc = 0x30045Cu;
            goto label_30045c;
        }
    }
    ctx->pc = 0x30038Cu;
    // 0x30038c: 0xc0f735c  jal         func_3DCD70
    ctx->pc = 0x30038Cu;
    SET_GPR_U32(ctx, 31, 0x300394u);
    ctx->pc = 0x300390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30038Cu;
    // 0x300390: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCD70u, 0x30038Cu, 0x300394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300394u;
label_300394:
    // 0x300394: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x300394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x300398: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x300398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30039c: 0x0  nop
    ctx->pc = 0x30039cu;
    // NOP
    // 0x3003a0: 0x0  nop
    ctx->pc = 0x3003a0u;
    // NOP
    // 0x3003a4: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x3003a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x3003a8: 0x0  nop
    ctx->pc = 0x3003a8u;
    // NOP
    // 0x3003ac: 0x0  nop
    ctx->pc = 0x3003acu;
    // NOP
    // 0x3003b0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x3003b0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3003b4: 0x4602a834  c.lt.s      $f21, $f2
    ctx->pc = 0x3003b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3003b8: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x3003b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3003bc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x3003BCu;
    {
        const bool branch_taken_0x3003bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3003C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3003BCu;
        // 0x3003c0: 0xe7a10024  swc1        $f1, 0x24($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3003bc) {
            ctx->pc = 0x3003DCu;
            goto label_3003dc;
        }
    }
    ctx->pc = 0x3003C4u;
    // 0x3003c4: 0x3c02005a  lui         $v0, 0x5A
    ctx->pc = 0x3003c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
    // 0x3003c8: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x3003c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3003cc: 0xc4406540  lwc1        $f0, 0x6540($v0)
    ctx->pc = 0x3003ccu;
    { uint32_t bits = FAST_READ32(0x5A6540u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3003d0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3003d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3003d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3003D4u;
    {
        const bool branch_taken_0x3003d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3003D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3003D4u;
        // 0x3003d8: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3003d4) {
            ctx->pc = 0x3003FCu;
            goto label_3003fc;
        }
    }
    ctx->pc = 0x3003DCu;
label_3003dc:
    // 0x3003dc: 0x46151034  c.lt.s      $f2, $f21
    ctx->pc = 0x3003dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3003e0: 0x0  nop
    ctx->pc = 0x3003e0u;
    // NOP
    // 0x3003e4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x3003E4u;
    {
        const bool branch_taken_0x3003e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3003E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3003E4u;
        // 0x3003e8: 0x3c02005a  lui         $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3003e4) {
            ctx->pc = 0x300400u;
            goto label_300400;
        }
    }
    ctx->pc = 0x3003ECu;
    // 0x3003ec: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x3003ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3003f0: 0xc4406548  lwc1        $f0, 0x6548($v0)
    ctx->pc = 0x3003f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 25928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3003f4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3003f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3003f8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3003f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3003fc:
    // 0x3003fc: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x3003fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_300400:
    // 0x300400: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x300400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x300404: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x300404u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x300408: 0x0  nop
    ctx->pc = 0x300408u;
    // NOP
    // 0x30040c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x30040cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x300410: 0x0  nop
    ctx->pc = 0x300410u;
    // NOP
    // 0x300414: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x300414u;
    {
        const bool branch_taken_0x300414 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x300418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300414u;
        // 0x300418: 0x3c02005a  lui         $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300414) {
            ctx->pc = 0x300430u;
            goto label_300430;
        }
    }
    ctx->pc = 0x30041Cu;
    // 0x30041c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x30041cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x300420: 0xc4406544  lwc1        $f0, 0x6544($v0)
    ctx->pc = 0x300420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 25924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300424: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x300424u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x300428: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x300428u;
    {
        const bool branch_taken_0x300428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300428u;
        // 0x30042c: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x300428) {
            ctx->pc = 0x300450u;
            goto label_300450;
        }
    }
    ctx->pc = 0x300430u;
label_300430:
    // 0x300430: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x300430u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x300434: 0x0  nop
    ctx->pc = 0x300434u;
    // NOP
    // 0x300438: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x300438u;
    {
        const bool branch_taken_0x300438 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300438u;
        // 0x30043c: 0x3c02005a  lui         $v0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300438) {
            ctx->pc = 0x300454u;
            goto label_300454;
        }
    }
    ctx->pc = 0x300440u;
    // 0x300440: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x300440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x300444: 0xc440654c  lwc1        $f0, 0x654C($v0)
    ctx->pc = 0x300444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 25932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300448: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x300448u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x30044c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x30044cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_300450:
    // 0x300450: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x300450u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_300454:
    // 0x300454: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x300454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x300458: 0xc456bb04  lwc1        $f22, -0x44FC($v0)
    ctx->pc = 0x300458u;
    { uint32_t bits = FAST_READ32(0x3FBB04u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_30045c:
    // 0x30045c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x30045Cu;
    SET_GPR_U32(ctx, 31, 0x300464u);
    ctx->pc = 0x300460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30045Cu;
    // 0x300460: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x30045Cu, 0x300464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300464u;
label_300464:
    // 0x300464: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x300464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x300468: 0x9062bb00  lbu         $v0, -0x4500($v1)
    ctx->pc = 0x300468u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3FBB00u));
    // 0x30046c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x30046Cu;
    {
        const bool branch_taken_0x30046c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x300470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30046Cu;
        // 0x300470: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x30046c) {
            ctx->pc = 0x3004B4u;
            goto label_3004b4;
        }
    }
    ctx->pc = 0x300474u;
    // 0x300474: 0x26621110  addiu       $v0, $s3, 0x1110
    ctx->pc = 0x300474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4368));
    // 0x300478: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x300478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30047c: 0xe6601110  swc1        $f0, 0x1110($s3)
    ctx->pc = 0x30047cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4368), bits); }
    // 0x300480: 0xe6611114  swc1        $f1, 0x1114($s3)
    ctx->pc = 0x300480u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4372), bits); }
    // 0x300484: 0xe69400e4  swc1        $f20, 0xE4($s4)
    ctx->pc = 0x300484u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 228), bits); }
    // 0x300488: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x300488u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x30048c: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x30048cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x300490: 0xdae30010  lqc2        $vf3, 0x10($s7)
    ctx->pc = 0x300490u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x300494: 0xdae40020  lqc2        $vf4, 0x20($s7)
    ctx->pc = 0x300494u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x300498: 0xdae50030  lqc2        $vf5, 0x30($s7)
    ctx->pc = 0x300498u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 48)));
    // 0x30049c: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x30049cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3004a0: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x3004a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3004a4: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x3004a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3004a8: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x3004a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x3004ac: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x3004ACu;
    {
        const bool branch_taken_0x3004ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3004B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3004ACu;
        // 0x3004b0: 0xa060bb00  sb          $zero, -0x4500($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294949632), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3004ac) {
            ctx->pc = 0x300734u;
            goto label_300734;
        }
    }
    ctx->pc = 0x3004B4u;
label_3004b4:
    // 0x3004b4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x3004b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3004b8: 0x10a00023  beqz        $a1, . + 4 + (0x23 << 2)
    ctx->pc = 0x3004B8u;
    {
        const bool branch_taken_0x3004b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3004BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3004B8u;
        // 0x3004bc: 0xc7a30010  lwc1        $f3, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3004b8) {
            ctx->pc = 0x300548u;
            goto label_300548;
        }
    }
    ctx->pc = 0x3004C0u;
    // 0x3004c0: 0xc680009c  lwc1        $f0, 0x9C($s4)
    ctx->pc = 0x3004c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3004c4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3004c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3004c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3004c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3004cc: 0x0  nop
    ctx->pc = 0x3004ccu;
    // NOP
    // 0x3004d0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3004d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3004d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3004d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3004d8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3004d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3004dc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3004dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3004e0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3004e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3004e4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3004e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3004e8: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x3004e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3004ec: 0x0  nop
    ctx->pc = 0x3004ecu;
    // NOP
    // 0x3004f0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3004F0u;
    {
        const bool branch_taken_0x3004f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3004F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3004F0u;
        // 0x3004f4: 0xe7a30010  swc1        $f3, 0x10($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3004f0) {
            ctx->pc = 0x300500u;
            goto label_300500;
        }
    }
    ctx->pc = 0x3004F8u;
    // 0x3004f8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3004f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x3004fc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3004fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_300500:
    // 0x300500: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x300500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x300504: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x300504u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x300508: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x300508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30050c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x30050cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x300510: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x300510u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x300514: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x300514u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x300518: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x300518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x30051c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x30051cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x300520: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x300520u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x300524: 0xdae30010  lqc2        $vf3, 0x10($s7)
    ctx->pc = 0x300524u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x300528: 0xdae40020  lqc2        $vf4, 0x20($s7)
    ctx->pc = 0x300528u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x30052c: 0xdae50030  lqc2        $vf5, 0x30($s7)
    ctx->pc = 0x30052cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 48)));
    // 0x300530: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x300530u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x300534: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x300534u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x300538: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x300538u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x30053c: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x30053cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x300540: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x300540u;
    {
        const bool branch_taken_0x300540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300540u;
        // 0x300544: 0x8e62010c  lw          $v0, 0x10C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300540) {
            ctx->pc = 0x300738u;
            goto label_300738;
        }
    }
    ctx->pc = 0x300548u;
label_300548:
    // 0x300548: 0xe6761120  swc1        $f22, 0x1120($s3)
    ctx->pc = 0x300548u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4384), bits); }
    // 0x30054c: 0x26621110  addiu       $v0, $s3, 0x1110
    ctx->pc = 0x30054cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4368));
    // 0x300550: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x300550u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x300554: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x300554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x300558: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x300558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30055c: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x30055cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x300560: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x300560u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x300564: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x300564u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x300568: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x300568u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x30056c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x30056cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x300570: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x300570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300574: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x300574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x300578: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x300578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30057c: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x30057cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x300580: 0xc7a5004c  lwc1        $f5, 0x4C($sp)
    ctx->pc = 0x300580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x300584: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x300584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x300588: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x300588u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x30058c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x30058cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x300590: 0xe7a5003c  swc1        $f5, 0x3C($sp)
    ctx->pc = 0x300590u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x300594: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x300594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x300598: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x300598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x30059c: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x30059cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3005a0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x3005a0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x3005a4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x3005a4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x3005a8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x3005a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x3005ac: 0x46010044  c1          0x10044
    ctx->pc = 0x3005acu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x3005b0: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x3005b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x3005b4: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x3005b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x3005b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3005b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3005bc: 0x0  nop
    ctx->pc = 0x3005bcu;
    // NOP
    // 0x3005c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3005c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3005c4: 0x0  nop
    ctx->pc = 0x3005c4u;
    // NOP
    // 0x3005c8: 0x45020023  bc1fl       . + 4 + (0x23 << 2)
    ctx->pc = 0x3005C8u;
    {
        const bool branch_taken_0x3005c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3005c8) {
            ctx->pc = 0x3005CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3005C8u;
            // 0x3005cc: 0xc68300e4  lwc1        $f3, 0xE4($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x300658u;
            goto label_300658;
        }
    }
    ctx->pc = 0x3005D0u;
    // 0x3005d0: 0x46160834  c.lt.s      $f1, $f22
    ctx->pc = 0x3005d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3005d4: 0x0  nop
    ctx->pc = 0x3005d4u;
    // NOP
    // 0x3005d8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3005D8u;
    {
        const bool branch_taken_0x3005d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3005d8) {
            ctx->pc = 0x3005F0u;
            goto label_3005f0;
        }
    }
    ctx->pc = 0x3005E0u;
    // 0x3005e0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x3005e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3005e4: 0xfa611110  sqc2        $vf1, 0x1110($s3)
    ctx->pc = 0x3005e4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 4368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3005e8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3005E8u;
    {
        const bool branch_taken_0x3005e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3005ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3005E8u;
        // 0x3005ec: 0xc68300e4  lwc1        $f3, 0xE4($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3005e8) {
            ctx->pc = 0x300658u;
            goto label_300658;
        }
    }
    ctx->pc = 0x3005F0u;
label_3005f0:
    // 0x3005f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3005f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3005f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3005f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3005f8: 0x0  nop
    ctx->pc = 0x3005f8u;
    // NOP
    // 0x3005fc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3005fcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x300600: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x300600u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x300604: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x300604u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x300608: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x300608u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x30060c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x30060cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x300610: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x300610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x300614: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x300614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x300618: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x300618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x30061c: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x30061cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x300620: 0x4601b042  mul.s       $f1, $f22, $f1
    ctx->pc = 0x300620u;
    ctx->f[1] = FPU_MUL_S(ctx->f[22], ctx->f[1]);
    // 0x300624: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x300624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300628: 0x4602b082  mul.s       $f2, $f22, $f2
    ctx->pc = 0x300628u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
    // 0x30062c: 0x4603b0c2  mul.s       $f3, $f22, $f3
    ctx->pc = 0x30062cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[22], ctx->f[3]);
    // 0x300630: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x300630u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x300634: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x300634u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x300638: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x300638u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x30063c: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x30063cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x300640: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x300640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x300644: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x300644u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x300648: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x300648u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x30064c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x30064cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x300650: 0xfa611110  sqc2        $vf1, 0x1110($s3)
    ctx->pc = 0x300650u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 4368), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x300654: 0xc68300e4  lwc1        $f3, 0xE4($s4)
    ctx->pc = 0x300654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_300658:
    // 0x300658: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x300658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x30065c: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x30065cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x300660: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x300660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x300664: 0x4603a081  sub.s       $f2, $f20, $f3
    ctx->pc = 0x300664u;
    ctx->f[2] = FPU_SUB_S(ctx->f[20], ctx->f[3]);
    // 0x300668: 0x46001005  abs.s       $f0, $f2
    ctx->pc = 0x300668u;
    ctx->f[0] = FPU_ABS_S(ctx->f[2]);
    // 0x30066c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x30066cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x300670: 0x0  nop
    ctx->pc = 0x300670u;
    // NOP
    // 0x300674: 0x4502001b  bc1fl       . + 4 + (0x1B << 2)
    ctx->pc = 0x300674u;
    {
        const bool branch_taken_0x300674 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x300674) {
            ctx->pc = 0x300678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300674u;
            // 0x300678: 0xc442000c  lwc1        $f2, 0xC($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3006E4u;
            goto label_3006e4;
        }
    }
    ctx->pc = 0x30067Cu;
    // 0x30067c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x30067cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x300680: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x300680u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x300684: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x300684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x300688: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x300688u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30068c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x30068cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x300690: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x300690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x300694: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x300694u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x300698: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x300698u;
    {
        const bool branch_taken_0x300698 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x30069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300698u;
        // 0x30069c: 0xe68000e4  swc1        $f0, 0xE4($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 228), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x300698) {
            ctx->pc = 0x3006B0u;
            goto label_3006b0;
        }
    }
    ctx->pc = 0x3006A0u;
    // 0x3006a0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x3006a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3006a4: 0x0  nop
    ctx->pc = 0x3006a4u;
    // NOP
    // 0x3006a8: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
    ctx->pc = 0x3006A8u;
    {
        const bool branch_taken_0x3006a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3006a8) {
            ctx->pc = 0x3006ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3006A8u;
            // 0x3006ac: 0xe69400e4  swc1        $f20, 0xE4($s4) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 228), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3006E0u;
            goto label_3006e0;
        }
    }
    ctx->pc = 0x3006B0u;
label_3006b0:
    // 0x3006b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3006b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3006b4: 0x0  nop
    ctx->pc = 0x3006b4u;
    // NOP
    // 0x3006b8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x3006b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3006bc: 0x0  nop
    ctx->pc = 0x3006bcu;
    // NOP
    // 0x3006c0: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x3006C0u;
    {
        const bool branch_taken_0x3006c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3006c0) {
            ctx->pc = 0x3006C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3006C0u;
            // 0x3006c4: 0xc442000c  lwc1        $f2, 0xC($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3006E4u;
            goto label_3006e4;
        }
    }
    ctx->pc = 0x3006C8u;
    // 0x3006c8: 0xc68000e4  lwc1        $f0, 0xE4($s4)
    ctx->pc = 0x3006c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3006cc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3006ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3006d0: 0x0  nop
    ctx->pc = 0x3006d0u;
    // NOP
    // 0x3006d4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3006D4u;
    {
        const bool branch_taken_0x3006d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3006d4) {
            ctx->pc = 0x3006D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3006D4u;
            // 0x3006d8: 0xc442000c  lwc1        $f2, 0xC($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3006E4u;
            goto label_3006e4;
        }
    }
    ctx->pc = 0x3006DCu;
    // 0x3006dc: 0xe69400e4  swc1        $f20, 0xE4($s4)
    ctx->pc = 0x3006dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 228), bits); }
label_3006e0:
    // 0x3006e0: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x3006e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3006e4:
    // 0x3006e4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3006e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3006e8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x3006e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3006ec: 0xc6631110  lwc1        $f3, 0x1110($s3)
    ctx->pc = 0x3006ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3006f0: 0x8e62053c  lw          $v0, 0x53C($s3)
    ctx->pc = 0x3006f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1340)));
    // 0x3006f4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x3006f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x3006f8: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x3006f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3006fc: 0xe7a2004c  swc1        $f2, 0x4C($sp)
    ctx->pc = 0x3006fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x300700: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x300700u;
    {
        const bool branch_taken_0x300700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x300704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300700u;
        // 0x300704: 0xe7a30040  swc1        $f3, 0x40($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x300700) {
            ctx->pc = 0x300710u;
            goto label_300710;
        }
    }
    ctx->pc = 0x300708u;
    // 0x300708: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x300708u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x30070c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x30070cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_300710:
    // 0x300710: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x300710u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x300714: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x300714u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x300718: 0xdae30010  lqc2        $vf3, 0x10($s7)
    ctx->pc = 0x300718u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x30071c: 0xdae40020  lqc2        $vf4, 0x20($s7)
    ctx->pc = 0x30071cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x300720: 0xdae50030  lqc2        $vf5, 0x30($s7)
    ctx->pc = 0x300720u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 48)));
    // 0x300724: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x300724u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x300728: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x300728u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x30072c: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x30072cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x300730: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x300730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
label_300734:
    // 0x300734: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x300734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_300738:
    // 0x300738: 0x904300a8  lbu         $v1, 0xA8($v0)
    ctx->pc = 0x300738u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x30073c: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
    ctx->pc = 0x30073Cu;
    {
        const bool branch_taken_0x30073c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30073c) {
            ctx->pc = 0x3007E0u;
            goto label_3007e0;
        }
    }
    ctx->pc = 0x300744u;
    // 0x300744: 0xc08fde2  jal         func_23F788
    ctx->pc = 0x300744u;
    SET_GPR_U32(ctx, 31, 0x30074Cu);
    ctx->pc = 0x300748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300744u;
    // 0x300748: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F788u, 0x300744u, 0x30074Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30074Cu;
label_30074c:
    // 0x30074c: 0xc0942a0  jal         func_250A80
    ctx->pc = 0x30074Cu;
    SET_GPR_U32(ctx, 31, 0x300754u);
    ctx->pc = 0x300750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30074Cu;
    // 0x300750: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250A80u, 0x30074Cu, 0x300754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300754u;
label_300754:
    // 0x300754: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x300754u;
    {
        const bool branch_taken_0x300754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300754) {
            ctx->pc = 0x3007E0u;
            goto label_3007e0;
        }
    }
    ctx->pc = 0x30075Cu;
    // 0x30075c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x30075cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300760: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x300760u;
    SET_GPR_U32(ctx, 31, 0x300768u);
    ctx->pc = 0x300764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300760u;
    // 0x300764: 0x240503fb  addiu       $a1, $zero, 0x3FB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1019));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x300760u, 0x300768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300768u;
label_300768:
    // 0x300768: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x300768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30076c: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x30076Cu;
    SET_GPR_U32(ctx, 31, 0x300774u);
    ctx->pc = 0x300770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30076Cu;
    // 0x300770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x30076Cu, 0x300774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300774u;
label_300774:
    // 0x300774: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x300774u;
    {
        const bool branch_taken_0x300774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300774) {
            ctx->pc = 0x300778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300774u;
            // 0x300778: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300788u;
            goto label_300788;
        }
    }
    ctx->pc = 0x30077Cu;
    // 0x30077c: 0xc0c4900  jal         func_312400
    ctx->pc = 0x30077Cu;
    SET_GPR_U32(ctx, 31, 0x300784u);
    ctx->pc = 0x300780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30077Cu;
    // 0x300780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x30077Cu, 0x300784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300784u;
label_300784:
    // 0x300784: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x300784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_300788:
    // 0x300788: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x300788u;
    SET_GPR_U32(ctx, 31, 0x300790u);
    ctx->pc = 0x30078Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300788u;
    // 0x30078c: 0x24050431  addiu       $a1, $zero, 0x431 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1073));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x300788u, 0x300790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300790u;
label_300790:
    // 0x300790: 0x261100b0  addiu       $s1, $s0, 0xB0
    ctx->pc = 0x300790u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x300794: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x300794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300798: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x300798u;
    SET_GPR_U32(ctx, 31, 0x3007A0u);
    ctx->pc = 0x30079Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300798u;
    // 0x30079c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x300798u, 0x3007A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3007A0u;
label_3007a0:
    // 0x3007a0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3007A0u;
    {
        const bool branch_taken_0x3007a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3007a0) {
            ctx->pc = 0x3007A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3007A0u;
            // 0x3007a4: 0xc60000b4  lwc1        $f0, 0xB4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3007B4u;
            goto label_3007b4;
        }
    }
    ctx->pc = 0x3007A8u;
    // 0x3007a8: 0xc0c4900  jal         func_312400
    ctx->pc = 0x3007A8u;
    SET_GPR_U32(ctx, 31, 0x3007B0u);
    ctx->pc = 0x3007ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3007A8u;
    // 0x3007ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x3007A8u, 0x3007B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3007B0u;
label_3007b0:
    // 0x3007b0: 0xc60000b4  lwc1        $f0, 0xB4($s0)
    ctx->pc = 0x3007b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3007b4:
    // 0x3007b4: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x3007b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3007b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3007b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3007bc: 0x0  nop
    ctx->pc = 0x3007bcu;
    // NOP
    // 0x3007c0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3007C0u;
    {
        const bool branch_taken_0x3007c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3007C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3007C0u;
        // 0x3007c4: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3007c0) {
            ctx->pc = 0x3007CCu;
            goto label_3007cc;
        }
    }
    ctx->pc = 0x3007C8u;
    // 0x3007c8: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x3007c8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_3007cc:
    // 0x3007cc: 0xc7c00004  lwc1        $f0, 0x4($fp)
    ctx->pc = 0x3007ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3007d0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x3007d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3007d4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3007d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x3007d8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3007d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3007dc: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x3007dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3007e0:
    // 0x3007e0: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x3007e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3007e4: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x3007e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x3007e8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x3007e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3007ec: 0xfbc10000  sqc2        $vf1, 0x0($fp)
    ctx->pc = 0x3007ecu;
    WRITE128(ADD32(GPR_U32(ctx, 30), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x3007f0: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x3007f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3007f4: 0x13a20009  beq         $sp, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3007F4u;
    {
        const bool branch_taken_0x3007f4 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        ctx->pc = 0x3007F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3007F4u;
        // 0x3007f8: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3007f4) {
            ctx->pc = 0x30081Cu;
            goto label_30081c;
        }
    }
    ctx->pc = 0x3007FCu;
    // 0x3007fc: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x3007fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_300800:
    // 0x300800: 0x0  nop
    ctx->pc = 0x300800u;
    // NOP
    // 0x300804: 0x0  nop
    ctx->pc = 0x300804u;
    // NOP
    // 0x300808: 0x0  nop
    ctx->pc = 0x300808u;
    // NOP
    // 0x30080c: 0x0  nop
    ctx->pc = 0x30080cu;
    // NOP
    // 0x300810: 0x57a2fffb  bnel        $sp, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x300810u;
    {
        const bool branch_taken_0x300810 = (GPR_U64(ctx, 29) != GPR_U64(ctx, 2));
        if (branch_taken_0x300810) {
            ctx->pc = 0x300814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300810u;
            // 0x300814: 0x2442fff0  addiu       $v0, $v0, -0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300800;
        }
    }
    ctx->pc = 0x300818u;
    // 0x300818: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x300818u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_30081c:
    // 0x30081c: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x30081cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300820: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x300820u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x300824: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x300824u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x300828: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x300828u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30082c: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x30082cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x300830: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x300830u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x300834: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x300834u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x300838: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x300838u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x30083c: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x30083cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x300840: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x300840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x300844: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x300844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x300848: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x300848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x30084c: 0x3e00008  jr          $ra
    ctx->pc = 0x30084Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30084Cu;
        // 0x300850: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30084Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300854u;
    // 0x300854: 0x0  nop
    ctx->pc = 0x300854u;
    // NOP
    ctx->pc = 0x300858u;
}

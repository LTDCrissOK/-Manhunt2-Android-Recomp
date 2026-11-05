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

// Function: sub_002BE468
// Address: 0x2be468 - 0x2be5a8
void sub_002BE468_0x2be468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE468_0x2be468");
#endif

    switch (ctx->pc) {
        case 0x2be468u: goto label_2be468;
        case 0x2be46cu: goto label_2be46c;
        case 0x2be470u: goto label_2be470;
        case 0x2be474u: goto label_2be474;
        case 0x2be478u: goto label_2be478;
        case 0x2be47cu: goto label_2be47c;
        case 0x2be480u: goto label_2be480;
        case 0x2be484u: goto label_2be484;
        case 0x2be488u: goto label_2be488;
        case 0x2be48cu: goto label_2be48c;
        case 0x2be490u: goto label_2be490;
        case 0x2be494u: goto label_2be494;
        case 0x2be498u: goto label_2be498;
        case 0x2be49cu: goto label_2be49c;
        case 0x2be4a0u: goto label_2be4a0;
        case 0x2be4a4u: goto label_2be4a4;
        case 0x2be4a8u: goto label_2be4a8;
        case 0x2be4acu: goto label_2be4ac;
        case 0x2be4b0u: goto label_2be4b0;
        case 0x2be4b4u: goto label_2be4b4;
        case 0x2be4b8u: goto label_2be4b8;
        case 0x2be4bcu: goto label_2be4bc;
        case 0x2be4c0u: goto label_2be4c0;
        case 0x2be4c4u: goto label_2be4c4;
        case 0x2be4c8u: goto label_2be4c8;
        case 0x2be4ccu: goto label_2be4cc;
        case 0x2be4d0u: goto label_2be4d0;
        case 0x2be4d4u: goto label_2be4d4;
        case 0x2be4d8u: goto label_2be4d8;
        case 0x2be4dcu: goto label_2be4dc;
        case 0x2be4e0u: goto label_2be4e0;
        case 0x2be4e4u: goto label_2be4e4;
        case 0x2be4e8u: goto label_2be4e8;
        case 0x2be4ecu: goto label_2be4ec;
        case 0x2be4f0u: goto label_2be4f0;
        case 0x2be4f4u: goto label_2be4f4;
        case 0x2be4f8u: goto label_2be4f8;
        case 0x2be4fcu: goto label_2be4fc;
        case 0x2be500u: goto label_2be500;
        case 0x2be504u: goto label_2be504;
        case 0x2be508u: goto label_2be508;
        case 0x2be50cu: goto label_2be50c;
        case 0x2be510u: goto label_2be510;
        case 0x2be514u: goto label_2be514;
        case 0x2be518u: goto label_2be518;
        case 0x2be51cu: goto label_2be51c;
        case 0x2be520u: goto label_2be520;
        case 0x2be524u: goto label_2be524;
        case 0x2be528u: goto label_2be528;
        case 0x2be52cu: goto label_2be52c;
        case 0x2be530u: goto label_2be530;
        case 0x2be534u: goto label_2be534;
        case 0x2be538u: goto label_2be538;
        case 0x2be53cu: goto label_2be53c;
        case 0x2be540u: goto label_2be540;
        case 0x2be544u: goto label_2be544;
        case 0x2be548u: goto label_2be548;
        case 0x2be54cu: goto label_2be54c;
        case 0x2be550u: goto label_2be550;
        case 0x2be554u: goto label_2be554;
        case 0x2be558u: goto label_2be558;
        case 0x2be55cu: goto label_2be55c;
        case 0x2be560u: goto label_2be560;
        case 0x2be564u: goto label_2be564;
        case 0x2be568u: goto label_2be568;
        case 0x2be56cu: goto label_2be56c;
        case 0x2be570u: goto label_2be570;
        case 0x2be574u: goto label_2be574;
        case 0x2be578u: goto label_2be578;
        case 0x2be57cu: goto label_2be57c;
        case 0x2be580u: goto label_2be580;
        case 0x2be584u: goto label_2be584;
        case 0x2be588u: goto label_2be588;
        case 0x2be58cu: goto label_2be58c;
        case 0x2be590u: goto label_2be590;
        case 0x2be594u: goto label_2be594;
        case 0x2be598u: goto label_2be598;
        case 0x2be59cu: goto label_2be59c;
        case 0x2be5a0u: goto label_2be5a0;
        case 0x2be5a4u: goto label_2be5a4;
        default: break;
    }

    ctx->pc = 0x2be468u;

label_2be468:
    // 0x2be468: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2be468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2be46c:
    // 0x2be46c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2be46cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_2be470:
    // 0x2be470: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2be470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2be474:
    // 0x2be474: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2be474u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2be478:
    // 0x2be478: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x2be478u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
label_2be47c:
    // 0x2be47c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2be47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2be480:
    // 0x2be480: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2be480u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2be484:
    // 0x2be484: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2be484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2be488:
    // 0x2be488: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2be488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2be48c:
    // 0x2be48c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2be48cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2be490:
    // 0x2be490: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2be490u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2be494:
    // 0x2be494: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2be494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2be498:
    // 0x2be498: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2be498u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2be49c:
    // 0x2be49c: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x2be49cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2be4a0:
    // 0x2be4a0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2be4a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2be4a4:
    // 0x2be4a4: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x2be4a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2be4a8:
    // 0x2be4a8: 0x46006586  mov.s       $f22, $f12
    ctx->pc = 0x2be4a8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[12]);
label_2be4ac:
    // 0x2be4ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2be4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2be4b0:
    // 0x2be4b0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2be4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2be4b4:
    // 0x2be4b4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2be4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2be4b8:
    // 0x2be4b8: 0xe6010058  swc1        $f1, 0x58($s0)
    ctx->pc = 0x2be4b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_2be4bc:
    // 0x2be4bc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2be4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_2be4c0:
    // 0x2be4c0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2be4c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_2be4c4:
    // 0x2be4c4: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2be4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_2be4c8:
    // 0x2be4c8: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2be4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_2be4cc:
    // 0x2be4cc: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2be4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_2be4d0:
    // 0x2be4d0: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x2be4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_2be4d4:
    // 0x2be4d4: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x2be4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_2be4d8:
    // 0x2be4d8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x2be4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_2be4dc:
    // 0x2be4dc: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x2be4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_2be4e0:
    // 0x2be4e0: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x2be4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_2be4e4:
    // 0x2be4e4: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x2be4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_2be4e8:
    // 0x2be4e8: 0xe6010048  swc1        $f1, 0x48($s0)
    ctx->pc = 0x2be4e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_2be4ec:
    // 0x2be4ec: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2be4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_2be4f0:
    // 0x2be4f0: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x2be4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_2be4f4:
    // 0x2be4f4: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x2be4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_2be4f8:
    // 0x2be4f8: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x2be4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_2be4fc:
    // 0x2be4fc: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x2be4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_2be500:
    // 0x2be500: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x2be500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_2be504:
    // 0x2be504: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x2be504u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2be508:
    // 0x2be508: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2be508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2be50c:
    // 0x2be50c: 0x1222000e  beq         $s1, $v0, . + 4 + (0xE << 2)
label_2be510:
    if (ctx->pc == 0x2BE510u) {
        ctx->pc = 0x2BE510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE50Cu;
        // 0x2be510: 0x46007546  mov.s       $f21, $f14 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE514u;
        goto label_2be514;
    }
    ctx->pc = 0x2BE50Cu;
    {
        const bool branch_taken_0x2be50c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BE510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE50Cu;
        // 0x2be510: 0x46007546  mov.s       $f21, $f14 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2be50c) {
            ctx->pc = 0x2BE548u;
            goto label_2be548;
        }
    }
    ctx->pc = 0x2BE514u;
label_2be514:
    // 0x2be514: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2be514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2be518:
    // 0x2be518: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x2be518u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_2be51c:
    // 0x2be51c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2be51cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2be520:
    // 0x2be520: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x2be520u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_2be524:
    // 0x2be524: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2be524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2be528:
    // 0x2be528: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2be528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2be52c:
    // 0x2be52c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2be52cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2be530:
    // 0x2be530: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2be530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2be534:
    // 0x2be534: 0x60f809  jalr        $v1
label_2be538:
    if (ctx->pc == 0x2BE538u) {
        ctx->pc = 0x2BE538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE534u;
        // 0x2be538: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE53Cu;
        goto label_2be53c;
    }
    ctx->pc = 0x2BE534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2BE53Cu);
        ctx->pc = 0x2BE538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE534u;
        // 0x2be538: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE534u, 0x2BE53Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BE53Cu;
label_2be53c:
    // 0x2be53c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2be53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2be540:
    // 0x2be540: 0x5622fff5  bnel        $s1, $v0, . + 4 + (-0xB << 2)
label_2be544:
    if (ctx->pc == 0x2BE544u) {
        ctx->pc = 0x2BE544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE540u;
        // 0x2be544: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE548u;
        goto label_2be548;
    }
    ctx->pc = 0x2BE540u;
    {
        const bool branch_taken_0x2be540 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2be540) {
            ctx->pc = 0x2BE544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE540u;
            // 0x2be544: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2be518;
        }
    }
    ctx->pc = 0x2BE548u;
label_2be548:
    // 0x2be548: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x2be548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2be54c:
    // 0x2be54c: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x2be54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2be550:
    // 0x2be550: 0xc6030048  lwc1        $f3, 0x48($s0)
    ctx->pc = 0x2be550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2be554:
    // 0x2be554: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2be554u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2be558:
    // 0x2be558: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2be558u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2be55c:
    // 0x2be55c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2be55cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_2be560:
    // 0x2be560: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x2be560u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2be564:
    // 0x2be564: 0x0  nop
    ctx->pc = 0x2be564u;
    // NOP
label_2be568:
    // 0x2be568: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_2be56c:
    if (ctx->pc == 0x2BE56Cu) {
        ctx->pc = 0x2BE56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE568u;
        // 0x2be56c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE570u;
        goto label_2be570;
    }
    ctx->pc = 0x2BE568u;
    {
        const bool branch_taken_0x2be568 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2be568) {
            ctx->pc = 0x2BE56Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BE568u;
            // 0x2be56c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BE584u;
            goto label_2be584;
        }
    }
    ctx->pc = 0x2BE570u;
label_2be570:
    // 0x2be570: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2be570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2be574:
    // 0x2be574: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2be574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2be578:
    // 0x2be578: 0x0  nop
    ctx->pc = 0x2be578u;
    // NOP
label_2be57c:
    // 0x2be57c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x2be57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_2be580:
    // 0x2be580: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2be580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2be584:
    // 0x2be584: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2be584u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2be588:
    // 0x2be588: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2be588u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2be58c:
    // 0x2be58c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2be58cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2be590:
    // 0x2be590: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2be590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2be594:
    // 0x2be594: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x2be594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2be598:
    // 0x2be598: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x2be598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2be59c:
    // 0x2be59c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2be59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2be5a0:
    // 0x2be5a0: 0x3e00008  jr          $ra
label_2be5a4:
    if (ctx->pc == 0x2BE5A4u) {
        ctx->pc = 0x2BE5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE5A0u;
        // 0x2be5a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BE5A8u;
        goto label_fallthrough_0x2be5a0;
    }
    ctx->pc = 0x2BE5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE5A0u;
        // 0x2be5a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2be5a0:
    ctx->pc = 0x2BE5A8u;
}

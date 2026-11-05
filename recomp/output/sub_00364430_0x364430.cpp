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

// Function: sub_00364430
// Address: 0x364430 - 0x3645d8
void sub_00364430_0x364430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364430_0x364430");
#endif

    switch (ctx->pc) {
        case 0x364430u: goto label_364430;
        case 0x364434u: goto label_364434;
        case 0x364438u: goto label_364438;
        case 0x36443cu: goto label_36443c;
        case 0x364440u: goto label_364440;
        case 0x364444u: goto label_364444;
        case 0x364448u: goto label_364448;
        case 0x36444cu: goto label_36444c;
        case 0x364450u: goto label_364450;
        case 0x364454u: goto label_364454;
        case 0x364458u: goto label_364458;
        case 0x36445cu: goto label_36445c;
        case 0x364460u: goto label_364460;
        case 0x364464u: goto label_364464;
        case 0x364468u: goto label_364468;
        case 0x36446cu: goto label_36446c;
        case 0x364470u: goto label_364470;
        case 0x364474u: goto label_364474;
        case 0x364478u: goto label_364478;
        case 0x36447cu: goto label_36447c;
        case 0x364480u: goto label_364480;
        case 0x364484u: goto label_364484;
        case 0x364488u: goto label_364488;
        case 0x36448cu: goto label_36448c;
        case 0x364490u: goto label_364490;
        case 0x364494u: goto label_364494;
        case 0x364498u: goto label_364498;
        case 0x36449cu: goto label_36449c;
        case 0x3644a0u: goto label_3644a0;
        case 0x3644a4u: goto label_3644a4;
        case 0x3644a8u: goto label_3644a8;
        case 0x3644acu: goto label_3644ac;
        case 0x3644b0u: goto label_3644b0;
        case 0x3644b4u: goto label_3644b4;
        case 0x3644b8u: goto label_3644b8;
        case 0x3644bcu: goto label_3644bc;
        case 0x3644c0u: goto label_3644c0;
        case 0x3644c4u: goto label_3644c4;
        case 0x3644c8u: goto label_3644c8;
        case 0x3644ccu: goto label_3644cc;
        case 0x3644d0u: goto label_3644d0;
        case 0x3644d4u: goto label_3644d4;
        case 0x3644d8u: goto label_3644d8;
        case 0x3644dcu: goto label_3644dc;
        case 0x3644e0u: goto label_3644e0;
        case 0x3644e4u: goto label_3644e4;
        case 0x3644e8u: goto label_3644e8;
        case 0x3644ecu: goto label_3644ec;
        case 0x3644f0u: goto label_3644f0;
        case 0x3644f4u: goto label_3644f4;
        case 0x3644f8u: goto label_3644f8;
        case 0x3644fcu: goto label_3644fc;
        case 0x364500u: goto label_364500;
        case 0x364504u: goto label_364504;
        case 0x364508u: goto label_364508;
        case 0x36450cu: goto label_36450c;
        case 0x364510u: goto label_364510;
        case 0x364514u: goto label_364514;
        case 0x364518u: goto label_364518;
        case 0x36451cu: goto label_36451c;
        case 0x364520u: goto label_364520;
        case 0x364524u: goto label_364524;
        case 0x364528u: goto label_364528;
        case 0x36452cu: goto label_36452c;
        case 0x364530u: goto label_364530;
        case 0x364534u: goto label_364534;
        case 0x364538u: goto label_364538;
        case 0x36453cu: goto label_36453c;
        case 0x364540u: goto label_364540;
        case 0x364544u: goto label_364544;
        case 0x364548u: goto label_364548;
        case 0x36454cu: goto label_36454c;
        case 0x364550u: goto label_364550;
        case 0x364554u: goto label_364554;
        case 0x364558u: goto label_364558;
        case 0x36455cu: goto label_36455c;
        case 0x364560u: goto label_364560;
        case 0x364564u: goto label_364564;
        case 0x364568u: goto label_364568;
        case 0x36456cu: goto label_36456c;
        case 0x364570u: goto label_364570;
        case 0x364574u: goto label_364574;
        case 0x364578u: goto label_364578;
        case 0x36457cu: goto label_36457c;
        case 0x364580u: goto label_364580;
        case 0x364584u: goto label_364584;
        case 0x364588u: goto label_364588;
        case 0x36458cu: goto label_36458c;
        case 0x364590u: goto label_364590;
        case 0x364594u: goto label_364594;
        case 0x364598u: goto label_364598;
        case 0x36459cu: goto label_36459c;
        case 0x3645a0u: goto label_3645a0;
        case 0x3645a4u: goto label_3645a4;
        case 0x3645a8u: goto label_3645a8;
        case 0x3645acu: goto label_3645ac;
        case 0x3645b0u: goto label_3645b0;
        case 0x3645b4u: goto label_3645b4;
        case 0x3645b8u: goto label_3645b8;
        case 0x3645bcu: goto label_3645bc;
        case 0x3645c0u: goto label_3645c0;
        case 0x3645c4u: goto label_3645c4;
        case 0x3645c8u: goto label_3645c8;
        case 0x3645ccu: goto label_3645cc;
        case 0x3645d0u: goto label_3645d0;
        case 0x3645d4u: goto label_3645d4;
        default: break;
    }

    ctx->pc = 0x364430u;

label_364430:
    // 0x364430: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x364430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_364434:
    // 0x364434: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x364434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_364438:
    // 0x364438: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x364438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_36443c:
    // 0x36443c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36443cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_364440:
    // 0x364440: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x364440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_364444:
    // 0x364444: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x364444u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_364448:
    // 0x364448: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x364448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_36444c:
    // 0x36444c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x36444cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_364450:
    // 0x364450: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_364454:
    if (ctx->pc == 0x364454u) {
        ctx->pc = 0x364454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364450u;
        // 0x364454: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x364458u;
        goto label_364458;
    }
    ctx->pc = 0x364450u;
    {
        const bool branch_taken_0x364450 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x364454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364450u;
        // 0x364454: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x364450) {
            ctx->pc = 0x364470u;
            goto label_364470;
        }
    }
    ctx->pc = 0x364458u;
label_364458:
    // 0x364458: 0x8e23005c  lw          $v1, 0x5C($s1)
    ctx->pc = 0x364458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_36445c:
    // 0x36445c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x36445cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_364460:
    // 0x364460: 0x40f809  jalr        $v0
label_364464:
    if (ctx->pc == 0x364464u) {
        ctx->pc = 0x364468u;
        goto label_364468;
    }
    ctx->pc = 0x364460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x364468u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364460u, 0x364468u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x364468u;
label_364468:
    // 0x364468: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_36446c:
    if (ctx->pc == 0x36446Cu) {
        ctx->pc = 0x36446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364468u;
        // 0x36446c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x364470u;
        goto label_364470;
    }
    ctx->pc = 0x364468u;
    {
        const bool branch_taken_0x364468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x36446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364468u;
        // 0x36446c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364468) {
            ctx->pc = 0x3645B4u;
            goto label_3645b4;
        }
    }
    ctx->pc = 0x364470u;
label_364470:
    // 0x364470: 0xc0f6a96  jal         func_3DAA58
label_364474:
    if (ctx->pc == 0x364474u) {
        ctx->pc = 0x364474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364470u;
        // 0x364474: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x364478u;
        goto label_364478;
    }
    ctx->pc = 0x364470u;
    SET_GPR_U32(ctx, 31, 0x364478u);
    ctx->pc = 0x364474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364470u;
    // 0x364474: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x364470u, 0x364478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364478u;
label_364478:
    // 0x364478: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x364478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_36447c:
    // 0x36447c: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x36447cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_364480:
    // 0x364480: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
label_364484:
    if (ctx->pc == 0x364484u) {
        ctx->pc = 0x364484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364480u;
        // 0x364484: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x364488u;
        goto label_364488;
    }
    ctx->pc = 0x364480u;
    {
        const bool branch_taken_0x364480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x364480) {
            ctx->pc = 0x364484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x364480u;
            // 0x364484: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36452Cu;
            goto label_36452c;
        }
    }
    ctx->pc = 0x364488u;
label_364488:
    // 0x364488: 0x18600049  blez        $v1, . + 4 + (0x49 << 2)
label_36448c:
    if (ctx->pc == 0x36448Cu) {
        ctx->pc = 0x36448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364488u;
        // 0x36448c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x364490u;
        goto label_364490;
    }
    ctx->pc = 0x364488u;
    {
        const bool branch_taken_0x364488 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x36448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364488u;
        // 0x36448c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364488) {
            ctx->pc = 0x3645B0u;
            goto label_3645b0;
        }
    }
    ctx->pc = 0x364490u;
label_364490:
    // 0x364490: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x364490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_364494:
    // 0x364494: 0x0  nop
    ctx->pc = 0x364494u;
    // NOP
label_364498:
    // 0x364498: 0x8e220078  lw          $v0, 0x78($s1)
    ctx->pc = 0x364498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
label_36449c:
    // 0x36449c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x36449cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3644a0:
    // 0x3644a0: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x3644a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_3644a4:
    // 0x3644a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3644a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3644a8:
    // 0x3644a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3644a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3644ac:
    // 0x3644ac: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x3644acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3644b0:
    // 0x3644b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3644b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3644b4:
    // 0x3644b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3644b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3644b8:
    // 0x3644b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3644b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3644bc:
    // 0x3644bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3644bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3644c0:
    // 0x3644c0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3644c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3644c4:
    // 0x3644c4: 0xc0d92c8  jal         func_364B20
label_3644c8:
    if (ctx->pc == 0x3644C8u) {
        ctx->pc = 0x3644C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3644C4u;
        // 0x3644c8: 0xae230038  sw          $v1, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3644CCu;
        goto label_3644cc;
    }
    ctx->pc = 0x3644C4u;
    SET_GPR_U32(ctx, 31, 0x3644CCu);
    ctx->pc = 0x3644C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3644C4u;
    // 0x3644c8: 0xae230038  sw          $v1, 0x38($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364B20u, 0x3644C4u, 0x3644CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3644CCu;
label_3644cc:
    // 0x3644cc: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x3644ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_3644d0:
    // 0x3644d0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x3644d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_3644d4:
    // 0x3644d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3644d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3644d8:
    // 0x3644d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3644d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3644dc:
    // 0x3644dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3644dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3644e0:
    // 0x3644e0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x3644e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3644e4:
    // 0x3644e4: 0xc0d92c8  jal         func_364B20
label_3644e8:
    if (ctx->pc == 0x3644E8u) {
        ctx->pc = 0x3644E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3644E4u;
        // 0x3644e8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3644ECu;
        goto label_3644ec;
    }
    ctx->pc = 0x3644E4u;
    SET_GPR_U32(ctx, 31, 0x3644ECu);
    ctx->pc = 0x3644E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3644E4u;
    // 0x3644e8: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364B20u, 0x3644E4u, 0x3644ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3644ECu;
label_3644ec:
    // 0x3644ec: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x3644ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_3644f0:
    // 0x3644f0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x3644f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_3644f4:
    // 0x3644f4: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x3644f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_3644f8:
    // 0x3644f8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x3644f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3644fc:
    // 0x3644fc: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x3644fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_364500:
    // 0x364500: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x364500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_364504:
    // 0x364504: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x364504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_364508:
    // 0x364508: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x364508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_36450c:
    // 0x36450c: 0x40f809  jalr        $v0
label_364510:
    if (ctx->pc == 0x364510u) {
        ctx->pc = 0x364510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36450Cu;
        // 0x364510: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x364514u;
        goto label_364514;
    }
    ctx->pc = 0x36450Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x364514u);
        ctx->pc = 0x364510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36450Cu;
        // 0x364510: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36450Cu, 0x364514u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x364514u;
label_364514:
    // 0x364514: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x364514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_364518:
    // 0x364518: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x364518u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_36451c:
    // 0x36451c: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
label_364520:
    if (ctx->pc == 0x364520u) {
        ctx->pc = 0x364520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36451Cu;
        // 0x364520: 0x2982b  sltu        $s3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x364524u;
        goto label_364524;
    }
    ctx->pc = 0x36451Cu;
    {
        const bool branch_taken_0x36451c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x364520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36451Cu;
        // 0x364520: 0x2982b  sltu        $s3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36451c) {
            ctx->pc = 0x364498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364498;
        }
    }
    ctx->pc = 0x364524u;
label_364524:
    // 0x364524: 0x10000023  b           . + 4 + (0x23 << 2)
label_364528:
    if (ctx->pc == 0x364528u) {
        ctx->pc = 0x364528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364524u;
        // 0x364528: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36452Cu;
        goto label_36452c;
    }
    ctx->pc = 0x364524u;
    {
        const bool branch_taken_0x364524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x364528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364524u;
        // 0x364528: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364524) {
            ctx->pc = 0x3645B4u;
            goto label_3645b4;
        }
    }
    ctx->pc = 0x36452Cu;
label_36452c:
    // 0x36452c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_364530:
    if (ctx->pc == 0x364530u) {
        ctx->pc = 0x364530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36452Cu;
        // 0x364530: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x364534u;
        goto label_364534;
    }
    ctx->pc = 0x36452Cu;
    {
        const bool branch_taken_0x36452c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x364530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36452Cu;
        // 0x364530: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36452c) {
            ctx->pc = 0x364564u;
            goto label_364564;
        }
    }
    ctx->pc = 0x364534u;
label_364534:
    // 0x364534: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x364534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_364538:
    // 0x364538: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x364538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
label_36453c:
    // 0x36453c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x36453cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_364540:
    // 0x364540: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_364544:
    if (ctx->pc == 0x364544u) {
        ctx->pc = 0x364544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364540u;
        // 0x364544: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x364548u;
        goto label_364548;
    }
    ctx->pc = 0x364540u;
    {
        const bool branch_taken_0x364540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x364544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364540u;
        // 0x364544: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364540) {
            ctx->pc = 0x364564u;
            goto label_364564;
        }
    }
    ctx->pc = 0x364548u;
label_364548:
    // 0x364548: 0xc4601260  lwc1        $f0, 0x1260($v1)
    ctx->pc = 0x364548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_36454c:
    // 0x36454c: 0xc44cb7dc  lwc1        $f12, -0x4824($v0)
    ctx->pc = 0x36454cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_364550:
    // 0x364550: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x364550u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_364554:
    // 0x364554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x364554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_364558:
    // 0x364558: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x364558u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36455c:
    // 0x36455c: 0x10000004  b           . + 4 + (0x4 << 2)
label_364560:
    if (ctx->pc == 0x364560u) {
        ctx->pc = 0x364560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36455Cu;
        // 0x364560: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x364564u;
        goto label_364564;
    }
    ctx->pc = 0x36455Cu;
    {
        const bool branch_taken_0x36455c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x364560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36455Cu;
        // 0x364560: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36455c) {
            ctx->pc = 0x364570u;
            goto label_364570;
        }
    }
    ctx->pc = 0x364564u;
label_364564:
    // 0x364564: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x364564u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_364568:
    // 0x364568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x364568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36456c:
    // 0x36456c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x36456cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_364570:
    // 0x364570: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x364570u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_364574:
    // 0x364574: 0xc0d92c8  jal         func_364B20
label_364578:
    if (ctx->pc == 0x364578u) {
        ctx->pc = 0x364578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364574u;
        // 0x364578: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36457Cu;
        goto label_36457c;
    }
    ctx->pc = 0x364574u;
    SET_GPR_U32(ctx, 31, 0x36457Cu);
    ctx->pc = 0x364578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364574u;
    // 0x364578: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364B20u, 0x364574u, 0x36457Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36457Cu;
label_36457c:
    // 0x36457c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x36457cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_364580:
    // 0x364580: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x364580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_364584:
    // 0x364584: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x364584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_364588:
    // 0x364588: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x364588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36458c:
    // 0x36458c: 0xae230038  sw          $v1, 0x38($s1)
    ctx->pc = 0x36458cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
label_364590:
    // 0x364590: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x364590u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_364594:
    // 0x364594: 0xf8610010  sqc2        $vf1, 0x10($v1)
    ctx->pc = 0x364594u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_364598:
    // 0x364598: 0x8e240038  lw          $a0, 0x38($s1)
    ctx->pc = 0x364598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_36459c:
    // 0x36459c: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x36459cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_3645a0:
    // 0x3645a0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x3645a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_3645a4:
    // 0x3645a4: 0x40f809  jalr        $v0
label_3645a8:
    if (ctx->pc == 0x3645A8u) {
        ctx->pc = 0x3645ACu;
        goto label_3645ac;
    }
    ctx->pc = 0x3645A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3645ACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3645A4u, 0x3645ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3645ACu;
label_3645ac:
    // 0x3645ac: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x3645acu;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3645b0:
    // 0x3645b0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3645b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3645b4:
    // 0x3645b4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3645b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3645b8:
    // 0x3645b8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x3645b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3645bc:
    // 0x3645bc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3645bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3645c0:
    // 0x3645c0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x3645c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_3645c4:
    // 0x3645c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3645c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3645c8:
    // 0x3645c8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x3645c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3645cc:
    // 0x3645cc: 0x3e00008  jr          $ra
label_3645d0:
    if (ctx->pc == 0x3645D0u) {
        ctx->pc = 0x3645D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3645CCu;
        // 0x3645d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3645D4u;
        goto label_3645d4;
    }
    ctx->pc = 0x3645CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3645D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3645CCu;
        // 0x3645d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3645CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3645D4u;
label_3645d4:
    // 0x3645d4: 0x0  nop
    ctx->pc = 0x3645d4u;
    // NOP
    ctx->pc = 0x3645d8u;
}

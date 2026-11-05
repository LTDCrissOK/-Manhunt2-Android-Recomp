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

// Function: sub_001A4498
// Address: 0x1a4498 - 0x1a45a8
void sub_001A4498_0x1a4498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4498_0x1a4498");
#endif

    switch (ctx->pc) {
        case 0x1a4498u: goto label_1a4498;
        case 0x1a449cu: goto label_1a449c;
        case 0x1a44a0u: goto label_1a44a0;
        case 0x1a44a4u: goto label_1a44a4;
        case 0x1a44a8u: goto label_1a44a8;
        case 0x1a44acu: goto label_1a44ac;
        case 0x1a44b0u: goto label_1a44b0;
        case 0x1a44b4u: goto label_1a44b4;
        case 0x1a44b8u: goto label_1a44b8;
        case 0x1a44bcu: goto label_1a44bc;
        case 0x1a44c0u: goto label_1a44c0;
        case 0x1a44c4u: goto label_1a44c4;
        case 0x1a44c8u: goto label_1a44c8;
        case 0x1a44ccu: goto label_1a44cc;
        case 0x1a44d0u: goto label_1a44d0;
        case 0x1a44d4u: goto label_1a44d4;
        case 0x1a44d8u: goto label_1a44d8;
        case 0x1a44dcu: goto label_1a44dc;
        case 0x1a44e0u: goto label_1a44e0;
        case 0x1a44e4u: goto label_1a44e4;
        case 0x1a44e8u: goto label_1a44e8;
        case 0x1a44ecu: goto label_1a44ec;
        case 0x1a44f0u: goto label_1a44f0;
        case 0x1a44f4u: goto label_1a44f4;
        case 0x1a44f8u: goto label_1a44f8;
        case 0x1a44fcu: goto label_1a44fc;
        case 0x1a4500u: goto label_1a4500;
        case 0x1a4504u: goto label_1a4504;
        case 0x1a4508u: goto label_1a4508;
        case 0x1a450cu: goto label_1a450c;
        case 0x1a4510u: goto label_1a4510;
        case 0x1a4514u: goto label_1a4514;
        case 0x1a4518u: goto label_1a4518;
        case 0x1a451cu: goto label_1a451c;
        case 0x1a4520u: goto label_1a4520;
        case 0x1a4524u: goto label_1a4524;
        case 0x1a4528u: goto label_1a4528;
        case 0x1a452cu: goto label_1a452c;
        case 0x1a4530u: goto label_1a4530;
        case 0x1a4534u: goto label_1a4534;
        case 0x1a4538u: goto label_1a4538;
        case 0x1a453cu: goto label_1a453c;
        case 0x1a4540u: goto label_1a4540;
        case 0x1a4544u: goto label_1a4544;
        case 0x1a4548u: goto label_1a4548;
        case 0x1a454cu: goto label_1a454c;
        case 0x1a4550u: goto label_1a4550;
        case 0x1a4554u: goto label_1a4554;
        case 0x1a4558u: goto label_1a4558;
        case 0x1a455cu: goto label_1a455c;
        case 0x1a4560u: goto label_1a4560;
        case 0x1a4564u: goto label_1a4564;
        case 0x1a4568u: goto label_1a4568;
        case 0x1a456cu: goto label_1a456c;
        case 0x1a4570u: goto label_1a4570;
        case 0x1a4574u: goto label_1a4574;
        case 0x1a4578u: goto label_1a4578;
        case 0x1a457cu: goto label_1a457c;
        case 0x1a4580u: goto label_1a4580;
        case 0x1a4584u: goto label_1a4584;
        case 0x1a4588u: goto label_1a4588;
        case 0x1a458cu: goto label_1a458c;
        case 0x1a4590u: goto label_1a4590;
        case 0x1a4594u: goto label_1a4594;
        case 0x1a4598u: goto label_1a4598;
        case 0x1a459cu: goto label_1a459c;
        case 0x1a45a0u: goto label_1a45a0;
        case 0x1a45a4u: goto label_1a45a4;
        default: break;
    }

    ctx->pc = 0x1a4498u;

label_1a4498:
    // 0x1a4498: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a4498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a449c:
    // 0x1a449c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a449cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a44a0:
    // 0x1a44a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a44a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a44a4:
    // 0x1a44a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a44a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a44a8:
    // 0x1a44a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a44a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a44ac:
    // 0x1a44ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1a44acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a44b0:
    // 0x1a44b0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1a44b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1a44b4:
    // 0x1a44b4: 0x24110016  addiu       $s1, $zero, 0x16
    ctx->pc = 0x1a44b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1a44b8:
    // 0x1a44b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a44b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a44bc:
    // 0x1a44bc: 0x8c430ff4  lw          $v1, 0xFF4($v0)
    ctx->pc = 0x1a44bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4084)));
label_1a44c0:
    // 0x1a44c0: 0xac64003c  sw          $a0, 0x3C($v1)
    ctx->pc = 0x1a44c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 4));
label_1a44c4:
    // 0x1a44c4: 0xac640038  sw          $a0, 0x38($v1)
    ctx->pc = 0x1a44c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 4));
label_1a44c8:
    // 0x1a44c8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a44c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a44cc:
    // 0x1a44cc: 0x50510031  beql        $v0, $s1, . + 4 + (0x31 << 2)
label_1a44d0:
    if (ctx->pc == 0x1A44D0u) {
        ctx->pc = 0x1A44D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A44CCu;
        // 0x1a44d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A44D4u;
        goto label_1a44d4;
    }
    ctx->pc = 0x1A44CCu;
    {
        const bool branch_taken_0x1a44cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1a44cc) {
            ctx->pc = 0x1A44D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A44CCu;
            // 0x1a44d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4594u;
            goto label_1a4594;
        }
    }
    ctx->pc = 0x1A44D4u;
label_1a44d4:
    // 0x1a44d4: 0xc0691d6  jal         func_1A4758
label_1a44d8:
    if (ctx->pc == 0x1A44D8u) {
        ctx->pc = 0x1A44D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A44D4u;
        // 0x1a44d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A44DCu;
        goto label_1a44dc;
    }
    ctx->pc = 0x1A44D4u;
    SET_GPR_U32(ctx, 31, 0x1A44DCu);
    ctx->pc = 0x1A44D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A44D4u;
    // 0x1a44d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4758u, 0x1A44D4u, 0x1A44DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A44DCu;
label_1a44dc:
    // 0x1a44dc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a44dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a44e0:
    // 0x1a44e0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1a44e4:
    if (ctx->pc == 0x1A44E4u) {
        ctx->pc = 0x1A44E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A44E0u;
        // 0x1a44e4: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A44E8u;
        goto label_1a44e8;
    }
    ctx->pc = 0x1A44E0u;
    {
        const bool branch_taken_0x1a44e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A44E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A44E0u;
        // 0x1a44e4: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a44e0) {
            ctx->pc = 0x1A44F8u;
            goto label_1a44f8;
        }
    }
    ctx->pc = 0x1A44E8u;
label_1a44e8:
    // 0x1a44e8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a44e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1a44ec:
    // 0x1a44ec: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1a44ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1a44f0:
    // 0x1a44f0: 0x40f809  jalr        $v0
label_1a44f4:
    if (ctx->pc == 0x1A44F4u) {
        ctx->pc = 0x1A44F8u;
        goto label_1a44f8;
    }
    ctx->pc = 0x1A44F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A44F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A44F0u, 0x1A44F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A44F8u;
label_1a44f8:
    // 0x1a44f8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1a44f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1a44fc:
    // 0x1a44fc: 0xc061a12  jal         func_186848
label_1a4500:
    if (ctx->pc == 0x1A4500u) {
        ctx->pc = 0x1A4500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A44FCu;
        // 0x1a4500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4504u;
        goto label_1a4504;
    }
    ctx->pc = 0x1A44FCu;
    SET_GPR_U32(ctx, 31, 0x1A4504u);
    ctx->pc = 0x1A4500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A44FCu;
    // 0x1a4500: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1A44FCu, 0x1A4504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4504u;
label_1a4504:
    // 0x1a4504: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x1a4504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_1a4508:
    // 0x1a4508: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4508u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a450c:
    // 0x1a450c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1a450cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1a4510:
    // 0x1a4510: 0x40f809  jalr        $v0
label_1a4514:
    if (ctx->pc == 0x1A4514u) {
        ctx->pc = 0x1A4514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4510u;
        // 0x1a4514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4518u;
        goto label_1a4518;
    }
    ctx->pc = 0x1A4510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4518u);
        ctx->pc = 0x1A4514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4510u;
        // 0x1a4514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4510u, 0x1A4518u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4518u;
label_1a4518:
    // 0x1a4518: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1a4518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_1a451c:
    // 0x1a451c: 0x8c622b00  lw          $v0, 0x2B00($v1)
    ctx->pc = 0x1a451cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11008)));
label_1a4520:
    // 0x1a4520: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1a4524:
    if (ctx->pc == 0x1A4524u) {
        ctx->pc = 0x1A4524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4520u;
        // 0x1a4524: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4528u;
        goto label_1a4528;
    }
    ctx->pc = 0x1A4520u;
    {
        const bool branch_taken_0x1a4520 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A4524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4520u;
        // 0x1a4524: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4520) {
            ctx->pc = 0x1A453Cu;
            goto label_1a453c;
        }
    }
    ctx->pc = 0x1A4528u;
label_1a4528:
    // 0x1a4528: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a452c:
    // 0x1a452c: 0x0  nop
    ctx->pc = 0x1a452cu;
    // NOP
label_1a4530:
    // 0x1a4530: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a4530u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a4534:
    // 0x1a4534: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a4538:
    if (ctx->pc == 0x1A4538u) {
        ctx->pc = 0x1A453Cu;
        goto label_1a453c;
    }
    ctx->pc = 0x1A4534u;
    {
        const bool branch_taken_0x1a4534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4534) {
            ctx->pc = 0x1A4554u;
            goto label_1a4554;
        }
    }
    ctx->pc = 0x1A453Cu;
label_1a453c:
    // 0x1a453c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a453cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a4540:
    // 0x1a4540: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a4540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a4544:
    // 0x1a4544: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a4544u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4548:
    // 0x1a4548: 0x0  nop
    ctx->pc = 0x1a4548u;
    // NOP
label_1a454c:
    // 0x1a454c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a454cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a4550:
    // 0x1a4550: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1a4550u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1a4554:
    // 0x1a4554: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a4554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1a4558:
    // 0x1a4558: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a4558u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1a455c:
    // 0x1a455c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a455cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a4560:
    // 0x1a4560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4564:
    // 0x1a4564: 0xc061a22  jal         func_186888
label_1a4568:
    if (ctx->pc == 0x1A4568u) {
        ctx->pc = 0x1A4568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4564u;
        // 0x1a4568: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A456Cu;
        goto label_1a456c;
    }
    ctx->pc = 0x1A4564u;
    SET_GPR_U32(ctx, 31, 0x1A456Cu);
    ctx->pc = 0x1A4568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4564u;
    // 0x1a4568: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x186888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186888u, 0x1A4564u, 0x1A456Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A456Cu;
label_1a456c:
    // 0x1a456c: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1a456cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1a4570:
    // 0x1a4570: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x1a4570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_1a4574:
    // 0x1a4574: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1a4574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_1a4578:
    // 0x1a4578: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1a4578u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1a457c:
    // 0x1a457c: 0x2442bdc0  addiu       $v0, $v0, -0x4240
    ctx->pc = 0x1a457cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950336));
label_1a4580:
    // 0x1a4580: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a4580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a4584:
    // 0x1a4584: 0xc4600154  lwc1        $f0, 0x154($v1)
    ctx->pc = 0x1a4584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a4588:
    // 0x1a4588: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1a4588u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1a458c:
    // 0x1a458c: 0xe6140038  swc1        $f20, 0x38($s0)
    ctx->pc = 0x1a458cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1a4590:
    // 0x1a4590: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4590u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4594:
    // 0x1a4594: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a4594u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a4598:
    // 0x1a4598: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4598u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a459c:
    // 0x1a459c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1a459cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a45a0:
    // 0x1a45a0: 0x3e00008  jr          $ra
label_1a45a4:
    if (ctx->pc == 0x1A45A4u) {
        ctx->pc = 0x1A45A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45A0u;
        // 0x1a45a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A45A8u;
        goto label_fallthrough_0x1a45a0;
    }
    ctx->pc = 0x1A45A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A45A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45A0u;
        // 0x1a45a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A45A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a45a0:
    ctx->pc = 0x1A45A8u;
}

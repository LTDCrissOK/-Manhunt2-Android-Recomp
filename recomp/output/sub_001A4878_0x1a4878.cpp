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

// Function: sub_001A4878
// Address: 0x1a4878 - 0x1a4938
void sub_001A4878_0x1a4878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4878_0x1a4878");
#endif

    switch (ctx->pc) {
        case 0x1a4878u: goto label_1a4878;
        case 0x1a487cu: goto label_1a487c;
        case 0x1a4880u: goto label_1a4880;
        case 0x1a4884u: goto label_1a4884;
        case 0x1a4888u: goto label_1a4888;
        case 0x1a488cu: goto label_1a488c;
        case 0x1a4890u: goto label_1a4890;
        case 0x1a4894u: goto label_1a4894;
        case 0x1a4898u: goto label_1a4898;
        case 0x1a489cu: goto label_1a489c;
        case 0x1a48a0u: goto label_1a48a0;
        case 0x1a48a4u: goto label_1a48a4;
        case 0x1a48a8u: goto label_1a48a8;
        case 0x1a48acu: goto label_1a48ac;
        case 0x1a48b0u: goto label_1a48b0;
        case 0x1a48b4u: goto label_1a48b4;
        case 0x1a48b8u: goto label_1a48b8;
        case 0x1a48bcu: goto label_1a48bc;
        case 0x1a48c0u: goto label_1a48c0;
        case 0x1a48c4u: goto label_1a48c4;
        case 0x1a48c8u: goto label_1a48c8;
        case 0x1a48ccu: goto label_1a48cc;
        case 0x1a48d0u: goto label_1a48d0;
        case 0x1a48d4u: goto label_1a48d4;
        case 0x1a48d8u: goto label_1a48d8;
        case 0x1a48dcu: goto label_1a48dc;
        case 0x1a48e0u: goto label_1a48e0;
        case 0x1a48e4u: goto label_1a48e4;
        case 0x1a48e8u: goto label_1a48e8;
        case 0x1a48ecu: goto label_1a48ec;
        case 0x1a48f0u: goto label_1a48f0;
        case 0x1a48f4u: goto label_1a48f4;
        case 0x1a48f8u: goto label_1a48f8;
        case 0x1a48fcu: goto label_1a48fc;
        case 0x1a4900u: goto label_1a4900;
        case 0x1a4904u: goto label_1a4904;
        case 0x1a4908u: goto label_1a4908;
        case 0x1a490cu: goto label_1a490c;
        case 0x1a4910u: goto label_1a4910;
        case 0x1a4914u: goto label_1a4914;
        case 0x1a4918u: goto label_1a4918;
        case 0x1a491cu: goto label_1a491c;
        case 0x1a4920u: goto label_1a4920;
        case 0x1a4924u: goto label_1a4924;
        case 0x1a4928u: goto label_1a4928;
        case 0x1a492cu: goto label_1a492c;
        case 0x1a4930u: goto label_1a4930;
        case 0x1a4934u: goto label_1a4934;
        default: break;
    }

    ctx->pc = 0x1a4878u;

label_1a4878:
    // 0x1a4878: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a4878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a487c:
    // 0x1a487c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a487cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a4880:
    // 0x1a4880: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a4880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a4884:
    // 0x1a4884: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a4884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a4888:
    // 0x1a4888: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a4888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1a488c:
    // 0x1a488c: 0x24110015  addiu       $s1, $zero, 0x15
    ctx->pc = 0x1a488cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1a4890:
    // 0x1a4890: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a4890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1a4894:
    // 0x1a4894: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a4894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a4898:
    // 0x1a4898: 0x1051001e  beq         $v0, $s1, . + 4 + (0x1E << 2)
label_1a489c:
    if (ctx->pc == 0x1A489Cu) {
        ctx->pc = 0x1A489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4898u;
        // 0x1a489c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A48A0u;
        goto label_1a48a0;
    }
    ctx->pc = 0x1A4898u;
    {
        const bool branch_taken_0x1a4898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1A489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4898u;
        // 0x1a489c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4898) {
            ctx->pc = 0x1A4914u;
            goto label_1a4914;
        }
    }
    ctx->pc = 0x1A48A0u;
label_1a48a0:
    // 0x1a48a0: 0xc0691d6  jal         func_1A4758
label_1a48a4:
    if (ctx->pc == 0x1A48A4u) {
        ctx->pc = 0x1A48A8u;
        goto label_1a48a8;
    }
    ctx->pc = 0x1A48A0u;
    SET_GPR_U32(ctx, 31, 0x1A48A8u);
    ctx->pc = 0x1A4758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4758u, 0x1A48A0u, 0x1A48A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A48A8u;
label_1a48a8:
    // 0x1a48a8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a48a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a48ac:
    // 0x1a48ac: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1a48b0:
    if (ctx->pc == 0x1A48B0u) {
        ctx->pc = 0x1A48B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A48ACu;
        // 0x1a48b0: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A48B4u;
        goto label_1a48b4;
    }
    ctx->pc = 0x1A48ACu;
    {
        const bool branch_taken_0x1a48ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A48B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A48ACu;
        // 0x1a48b0: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a48ac) {
            ctx->pc = 0x1A48C4u;
            goto label_1a48c4;
        }
    }
    ctx->pc = 0x1A48B4u;
label_1a48b4:
    // 0x1a48b4: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a48b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1a48b8:
    // 0x1a48b8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1a48b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1a48bc:
    // 0x1a48bc: 0x40f809  jalr        $v0
label_1a48c0:
    if (ctx->pc == 0x1A48C0u) {
        ctx->pc = 0x1A48C4u;
        goto label_1a48c4;
    }
    ctx->pc = 0x1A48BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A48C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A48BCu, 0x1A48C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A48C4u;
label_1a48c4:
    // 0x1a48c4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1a48c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1a48c8:
    // 0x1a48c8: 0xc061a16  jal         func_186858
label_1a48cc:
    if (ctx->pc == 0x1A48CCu) {
        ctx->pc = 0x1A48CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A48C8u;
        // 0x1a48cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A48D0u;
        goto label_1a48d0;
    }
    ctx->pc = 0x1A48C8u;
    SET_GPR_U32(ctx, 31, 0x1A48D0u);
    ctx->pc = 0x1A48CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A48C8u;
    // 0x1a48cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A48C8u, 0x1A48D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A48D0u;
label_1a48d0:
    // 0x1a48d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a48d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a48d4:
    // 0x1a48d4: 0xc061a16  jal         func_186858
label_1a48d8:
    if (ctx->pc == 0x1A48D8u) {
        ctx->pc = 0x1A48D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A48D4u;
        // 0x1a48d8: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A48DCu;
        goto label_1a48dc;
    }
    ctx->pc = 0x1A48D4u;
    SET_GPR_U32(ctx, 31, 0x1A48DCu);
    ctx->pc = 0x1A48D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A48D4u;
    // 0x1a48d8: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A48D4u, 0x1A48DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A48DCu;
label_1a48dc:
    // 0x1a48dc: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1a48dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_1a48e0:
    // 0x1a48e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a48e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a48e4:
    // 0x1a48e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a48e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a48e8:
    // 0x1a48e8: 0xc061a12  jal         func_186848
label_1a48ec:
    if (ctx->pc == 0x1A48ECu) {
        ctx->pc = 0x1A48ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A48E8u;
        // 0x1a48ec: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A48F0u;
        goto label_1a48f0;
    }
    ctx->pc = 0x1A48E8u;
    SET_GPR_U32(ctx, 31, 0x1A48F0u);
    ctx->pc = 0x1A48ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A48E8u;
    // 0x1a48ec: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1A48E8u, 0x1A48F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A48F0u;
label_1a48f0:
    // 0x1a48f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a48f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a48f4:
    // 0x1a48f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a48f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a48f8:
    // 0x1a48f8: 0xc07023a  jal         func_1C08E8
label_1a48fc:
    if (ctx->pc == 0x1A48FCu) {
        ctx->pc = 0x1A48FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A48F8u;
        // 0x1a48fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4900u;
        goto label_1a4900;
    }
    ctx->pc = 0x1A48F8u;
    SET_GPR_U32(ctx, 31, 0x1A4900u);
    ctx->pc = 0x1A48FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A48F8u;
    // 0x1a48fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C08E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C08E8u, 0x1A48F8u, 0x1A4900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4900u;
label_1a4900:
    // 0x1a4900: 0xc061a16  jal         func_186858
label_1a4904:
    if (ctx->pc == 0x1A4904u) {
        ctx->pc = 0x1A4904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4900u;
        // 0x1a4904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4908u;
        goto label_1a4908;
    }
    ctx->pc = 0x1A4900u;
    SET_GPR_U32(ctx, 31, 0x1A4908u);
    ctx->pc = 0x1A4904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4900u;
    // 0x1a4904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A4900u, 0x1A4908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4908u;
label_1a4908:
    // 0x1a4908: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a490c:
    // 0x1a490c: 0xc06ee5c  jal         func_1BB970
label_1a4910:
    if (ctx->pc == 0x1A4910u) {
        ctx->pc = 0x1A4910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A490Cu;
        // 0x1a4910: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4914u;
        goto label_1a4914;
    }
    ctx->pc = 0x1A490Cu;
    SET_GPR_U32(ctx, 31, 0x1A4914u);
    ctx->pc = 0x1A4910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A490Cu;
    // 0x1a4910: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB970u, 0x1A490Cu, 0x1A4914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4914u;
label_1a4914:
    // 0x1a4914: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4914u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4918:
    // 0x1a4918: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a4918u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a491c:
    // 0x1a491c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a491cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a4920:
    // 0x1a4920: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a4920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a4924:
    // 0x1a4924: 0x3e00008  jr          $ra
label_1a4928:
    if (ctx->pc == 0x1A4928u) {
        ctx->pc = 0x1A4928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4924u;
        // 0x1a4928: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A492Cu;
        goto label_1a492c;
    }
    ctx->pc = 0x1A4924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4924u;
        // 0x1a4928: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A492Cu;
label_1a492c:
    // 0x1a492c: 0x0  nop
    ctx->pc = 0x1a492cu;
    // NOP
label_1a4930:
    // 0x1a4930: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1a4930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1a4934:
    // 0x1a4934: 0x0  nop
    ctx->pc = 0x1a4934u;
    // NOP
    ctx->pc = 0x1a4938u;
}

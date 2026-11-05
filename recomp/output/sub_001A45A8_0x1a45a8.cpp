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

// Function: sub_001A45A8
// Address: 0x1a45a8 - 0x1a4688
void sub_001A45A8_0x1a45a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A45A8_0x1a45a8");
#endif

    switch (ctx->pc) {
        case 0x1a45a8u: goto label_1a45a8;
        case 0x1a45acu: goto label_1a45ac;
        case 0x1a45b0u: goto label_1a45b0;
        case 0x1a45b4u: goto label_1a45b4;
        case 0x1a45b8u: goto label_1a45b8;
        case 0x1a45bcu: goto label_1a45bc;
        case 0x1a45c0u: goto label_1a45c0;
        case 0x1a45c4u: goto label_1a45c4;
        case 0x1a45c8u: goto label_1a45c8;
        case 0x1a45ccu: goto label_1a45cc;
        case 0x1a45d0u: goto label_1a45d0;
        case 0x1a45d4u: goto label_1a45d4;
        case 0x1a45d8u: goto label_1a45d8;
        case 0x1a45dcu: goto label_1a45dc;
        case 0x1a45e0u: goto label_1a45e0;
        case 0x1a45e4u: goto label_1a45e4;
        case 0x1a45e8u: goto label_1a45e8;
        case 0x1a45ecu: goto label_1a45ec;
        case 0x1a45f0u: goto label_1a45f0;
        case 0x1a45f4u: goto label_1a45f4;
        case 0x1a45f8u: goto label_1a45f8;
        case 0x1a45fcu: goto label_1a45fc;
        case 0x1a4600u: goto label_1a4600;
        case 0x1a4604u: goto label_1a4604;
        case 0x1a4608u: goto label_1a4608;
        case 0x1a460cu: goto label_1a460c;
        case 0x1a4610u: goto label_1a4610;
        case 0x1a4614u: goto label_1a4614;
        case 0x1a4618u: goto label_1a4618;
        case 0x1a461cu: goto label_1a461c;
        case 0x1a4620u: goto label_1a4620;
        case 0x1a4624u: goto label_1a4624;
        case 0x1a4628u: goto label_1a4628;
        case 0x1a462cu: goto label_1a462c;
        case 0x1a4630u: goto label_1a4630;
        case 0x1a4634u: goto label_1a4634;
        case 0x1a4638u: goto label_1a4638;
        case 0x1a463cu: goto label_1a463c;
        case 0x1a4640u: goto label_1a4640;
        case 0x1a4644u: goto label_1a4644;
        case 0x1a4648u: goto label_1a4648;
        case 0x1a464cu: goto label_1a464c;
        case 0x1a4650u: goto label_1a4650;
        case 0x1a4654u: goto label_1a4654;
        case 0x1a4658u: goto label_1a4658;
        case 0x1a465cu: goto label_1a465c;
        case 0x1a4660u: goto label_1a4660;
        case 0x1a4664u: goto label_1a4664;
        case 0x1a4668u: goto label_1a4668;
        case 0x1a466cu: goto label_1a466c;
        case 0x1a4670u: goto label_1a4670;
        case 0x1a4674u: goto label_1a4674;
        case 0x1a4678u: goto label_1a4678;
        case 0x1a467cu: goto label_1a467c;
        case 0x1a4680u: goto label_1a4680;
        case 0x1a4684u: goto label_1a4684;
        default: break;
    }

    ctx->pc = 0x1a45a8u;

label_1a45a8:
    // 0x1a45a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a45a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1a45ac:
    // 0x1a45ac: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a45acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1a45b0:
    // 0x1a45b0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1a45b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1a45b4:
    // 0x1a45b4: 0x24100013  addiu       $s0, $zero, 0x13
    ctx->pc = 0x1a45b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1a45b8:
    // 0x1a45b8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a45b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1a45bc:
    // 0x1a45bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a45bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a45c0:
    // 0x1a45c0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1a45c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1a45c4:
    // 0x1a45c4: 0x5050002c  beql        $v0, $s0, . + 4 + (0x2C << 2)
label_1a45c8:
    if (ctx->pc == 0x1A45C8u) {
        ctx->pc = 0x1A45C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45C4u;
        // 0x1a45c8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A45CCu;
        goto label_1a45cc;
    }
    ctx->pc = 0x1A45C4u;
    {
        const bool branch_taken_0x1a45c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x1a45c4) {
            ctx->pc = 0x1A45C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A45C4u;
            // 0x1a45c8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4678u;
            goto label_1a4678;
        }
    }
    ctx->pc = 0x1A45CCu;
label_1a45cc:
    // 0x1a45cc: 0xc0691d6  jal         func_1A4758
label_1a45d0:
    if (ctx->pc == 0x1A45D0u) {
        ctx->pc = 0x1A45D4u;
        goto label_1a45d4;
    }
    ctx->pc = 0x1A45CCu;
    SET_GPR_U32(ctx, 31, 0x1A45D4u);
    ctx->pc = 0x1A4758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4758u, 0x1A45CCu, 0x1A45D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A45D4u;
label_1a45d4:
    // 0x1a45d4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1a45d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1a45d8:
    // 0x1a45d8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1a45dc:
    if (ctx->pc == 0x1A45DCu) {
        ctx->pc = 0x1A45DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45D8u;
        // 0x1a45dc: 0xae300010  sw          $s0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A45E0u;
        goto label_1a45e0;
    }
    ctx->pc = 0x1A45D8u;
    {
        const bool branch_taken_0x1a45d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A45DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A45D8u;
        // 0x1a45dc: 0xae300010  sw          $s0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a45d8) {
            ctx->pc = 0x1A45F0u;
            goto label_1a45f0;
        }
    }
    ctx->pc = 0x1A45E0u;
label_1a45e0:
    // 0x1a45e0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a45e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1a45e4:
    // 0x1a45e4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1a45e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1a45e8:
    // 0x1a45e8: 0x40f809  jalr        $v0
label_1a45ec:
    if (ctx->pc == 0x1A45ECu) {
        ctx->pc = 0x1A45F0u;
        goto label_1a45f0;
    }
    ctx->pc = 0x1A45E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A45F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A45E8u, 0x1A45F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A45F0u;
label_1a45f0:
    // 0x1a45f0: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x1a45f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_1a45f4:
    // 0x1a45f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a45f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a45f8:
    // 0x1a45f8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1a45f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a45fc:
    // 0x1a45fc: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x1a45fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_1a4600:
    // 0x1a4600: 0xc06faee  jal         func_1BEBB8
label_1a4604:
    if (ctx->pc == 0x1A4604u) {
        ctx->pc = 0x1A4604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4600u;
        // 0x1a4604: 0x8c451004  lw          $a1, 0x1004($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4608u;
        goto label_1a4608;
    }
    ctx->pc = 0x1A4600u;
    SET_GPR_U32(ctx, 31, 0x1A4608u);
    ctx->pc = 0x1A4604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4600u;
    // 0x1a4604: 0x8c451004  lw          $a1, 0x1004($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBB8u, 0x1A4600u, 0x1A4608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4608u;
label_1a4608:
    // 0x1a4608: 0x8e2400d8  lw          $a0, 0xD8($s1)
    ctx->pc = 0x1a4608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_1a460c:
    // 0x1a460c: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x1a460cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
label_1a4610:
    // 0x1a4610: 0x3c014019  lui         $at, 0x4019
    ctx->pc = 0x1a4610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16409 << 16));
label_1a4614:
    // 0x1a4614: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1a4614u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1a4618:
    // 0x1a4618: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a4618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a461c:
    // 0x1a461c: 0x2610f030  addiu       $s0, $s0, -0xFD0
    ctx->pc = 0x1a461cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963248));
label_1a4620:
    // 0x1a4620: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a4620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1a4624:
    // 0x1a4624: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a4624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a4628:
    // 0x1a4628: 0x3c01400c  lui         $at, 0x400C
    ctx->pc = 0x1a4628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16396 << 16));
label_1a462c:
    // 0x1a462c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1a462cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1a4630:
    // 0x1a4630: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a4630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a4634:
    // 0x1a4634: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a4634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1a4638:
    // 0x1a4638: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x1a4638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
label_1a463c:
    // 0x1a463c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1a463cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1a4640:
    // 0x1a4640: 0x40f809  jalr        $v0
label_1a4644:
    if (ctx->pc == 0x1A4644u) {
        ctx->pc = 0x1A4644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4640u;
        // 0x1a4644: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4648u;
        goto label_1a4648;
    }
    ctx->pc = 0x1A4640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4648u);
        ctx->pc = 0x1A4644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4640u;
        // 0x1a4644: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4640u, 0x1A4648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4648u;
label_1a4648:
    // 0x1a4648: 0xc061a16  jal         func_186858
label_1a464c:
    if (ctx->pc == 0x1A464Cu) {
        ctx->pc = 0x1A464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4648u;
        // 0x1a464c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4650u;
        goto label_1a4650;
    }
    ctx->pc = 0x1A4648u;
    SET_GPR_U32(ctx, 31, 0x1A4650u);
    ctx->pc = 0x1A464Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4648u;
    // 0x1a464c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A4648u, 0x1A4650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4650u;
label_1a4650:
    // 0x1a4650: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4654:
    // 0x1a4654: 0xc06ee66  jal         func_1BB998
label_1a4658:
    if (ctx->pc == 0x1A4658u) {
        ctx->pc = 0x1A4658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4654u;
        // 0x1a4658: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A465Cu;
        goto label_1a465c;
    }
    ctx->pc = 0x1A4654u;
    SET_GPR_U32(ctx, 31, 0x1A465Cu);
    ctx->pc = 0x1A4658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4654u;
    // 0x1a4658: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB998u, 0x1A4654u, 0x1A465Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A465Cu;
label_1a465c:
    // 0x1a465c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1a465cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a4660:
    // 0x1a4660: 0xc0f71b8  jal         func_3DC6E0
label_1a4664:
    if (ctx->pc == 0x1A4664u) {
        ctx->pc = 0x1A4664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4660u;
        // 0x1a4664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4668u;
        goto label_1a4668;
    }
    ctx->pc = 0x1A4660u;
    SET_GPR_U32(ctx, 31, 0x1A4668u);
    ctx->pc = 0x1A4664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4660u;
    // 0x1a4664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC6E0u, 0x1A4660u, 0x1A4668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4668u;
label_1a4668:
    // 0x1a4668: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1a4668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_1a466c:
    // 0x1a466c: 0x24630f90  addiu       $v1, $v1, 0xF90
    ctx->pc = 0x1a466cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3984));
label_1a4670:
    // 0x1a4670: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1a4670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_1a4674:
    // 0x1a4674: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a4674u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a4678:
    // 0x1a4678: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1a4678u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1a467c:
    // 0x1a467c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a467cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a4680:
    // 0x1a4680: 0x3e00008  jr          $ra
label_1a4684:
    if (ctx->pc == 0x1A4684u) {
        ctx->pc = 0x1A4684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4680u;
        // 0x1a4684: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4688u;
        goto label_fallthrough_0x1a4680;
    }
    ctx->pc = 0x1A4680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4680u;
        // 0x1a4684: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a4680:
    ctx->pc = 0x1A4688u;
}

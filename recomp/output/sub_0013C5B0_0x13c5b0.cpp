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

// Function: sub_0013C5B0
// Address: 0x13c5b0 - 0x13c6a0
void sub_0013C5B0_0x13c5b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C5B0_0x13c5b0");
#endif

    switch (ctx->pc) {
        case 0x13c5b0u: goto label_13c5b0;
        case 0x13c5b4u: goto label_13c5b4;
        case 0x13c5b8u: goto label_13c5b8;
        case 0x13c5bcu: goto label_13c5bc;
        case 0x13c5c0u: goto label_13c5c0;
        case 0x13c5c4u: goto label_13c5c4;
        case 0x13c5c8u: goto label_13c5c8;
        case 0x13c5ccu: goto label_13c5cc;
        case 0x13c5d0u: goto label_13c5d0;
        case 0x13c5d4u: goto label_13c5d4;
        case 0x13c5d8u: goto label_13c5d8;
        case 0x13c5dcu: goto label_13c5dc;
        case 0x13c5e0u: goto label_13c5e0;
        case 0x13c5e4u: goto label_13c5e4;
        case 0x13c5e8u: goto label_13c5e8;
        case 0x13c5ecu: goto label_13c5ec;
        case 0x13c5f0u: goto label_13c5f0;
        case 0x13c5f4u: goto label_13c5f4;
        case 0x13c5f8u: goto label_13c5f8;
        case 0x13c5fcu: goto label_13c5fc;
        case 0x13c600u: goto label_13c600;
        case 0x13c604u: goto label_13c604;
        case 0x13c608u: goto label_13c608;
        case 0x13c60cu: goto label_13c60c;
        case 0x13c610u: goto label_13c610;
        case 0x13c614u: goto label_13c614;
        case 0x13c618u: goto label_13c618;
        case 0x13c61cu: goto label_13c61c;
        case 0x13c620u: goto label_13c620;
        case 0x13c624u: goto label_13c624;
        case 0x13c628u: goto label_13c628;
        case 0x13c62cu: goto label_13c62c;
        case 0x13c630u: goto label_13c630;
        case 0x13c634u: goto label_13c634;
        case 0x13c638u: goto label_13c638;
        case 0x13c63cu: goto label_13c63c;
        case 0x13c640u: goto label_13c640;
        case 0x13c644u: goto label_13c644;
        case 0x13c648u: goto label_13c648;
        case 0x13c64cu: goto label_13c64c;
        case 0x13c650u: goto label_13c650;
        case 0x13c654u: goto label_13c654;
        case 0x13c658u: goto label_13c658;
        case 0x13c65cu: goto label_13c65c;
        case 0x13c660u: goto label_13c660;
        case 0x13c664u: goto label_13c664;
        case 0x13c668u: goto label_13c668;
        case 0x13c66cu: goto label_13c66c;
        case 0x13c670u: goto label_13c670;
        case 0x13c674u: goto label_13c674;
        case 0x13c678u: goto label_13c678;
        case 0x13c67cu: goto label_13c67c;
        case 0x13c680u: goto label_13c680;
        case 0x13c684u: goto label_13c684;
        case 0x13c688u: goto label_13c688;
        case 0x13c68cu: goto label_13c68c;
        case 0x13c690u: goto label_13c690;
        case 0x13c694u: goto label_13c694;
        case 0x13c698u: goto label_13c698;
        case 0x13c69cu: goto label_13c69c;
        default: break;
    }

    ctx->pc = 0x13c5b0u;

label_13c5b0:
    // 0x13c5b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13c5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_13c5b4:
    // 0x13c5b4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13c5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_13c5b8:
    // 0x13c5b8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x13c5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_13c5bc:
    // 0x13c5bc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x13c5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_13c5c0:
    // 0x13c5c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13c5c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13c5c4:
    // 0x13c5c4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x13c5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_13c5c8:
    // 0x13c5c8: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x13c5c8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_13c5cc:
    // 0x13c5cc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13c5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_13c5d0:
    // 0x13c5d0: 0x128140  sll         $s0, $s2, 5
    ctx->pc = 0x13c5d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
label_13c5d4:
    // 0x13c5d4: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x13c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_13c5d8:
    // 0x13c5d8: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x13c5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_13c5dc:
    // 0x13c5dc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x13c5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_13c5e0:
    // 0x13c5e0: 0x8c650024  lw          $a1, 0x24($v1)
    ctx->pc = 0x13c5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_13c5e4:
    // 0x13c5e4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13c5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_13c5e8:
    // 0x13c5e8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13c5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13c5ec:
    // 0x13c5ec: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x13c5ecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_13c5f0:
    // 0x13c5f0: 0xc04b2b6  jal         func_12CAD8
label_13c5f4:
    if (ctx->pc == 0x13C5F4u) {
        ctx->pc = 0x13C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C5F0u;
        // 0x13c5f4: 0x2484b530  addiu       $a0, $a0, -0x4AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C5F8u;
        goto label_13c5f8;
    }
    ctx->pc = 0x13C5F0u;
    SET_GPR_U32(ctx, 31, 0x13C5F8u);
    ctx->pc = 0x13C5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C5F0u;
    // 0x13c5f4: 0x2484b530  addiu       $a0, $a0, -0x4AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CAD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CAD8u, 0x13C5F0u, 0x13C5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C5F8u;
label_13c5f8:
    // 0x13c5f8: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_13c5fc:
    if (ctx->pc == 0x13C5FCu) {
        ctx->pc = 0x13C5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C5F8u;
        // 0x13c5fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C600u;
        goto label_13c600;
    }
    ctx->pc = 0x13C5F8u;
    {
        const bool branch_taken_0x13c5f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c5f8) {
            ctx->pc = 0x13C5FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C5F8u;
            // 0x13c5fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C65Cu;
            goto label_13c65c;
        }
    }
    ctx->pc = 0x13C600u;
label_13c600:
    // 0x13c600: 0x26220028  addiu       $v0, $s1, 0x28
    ctx->pc = 0x13c600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_13c604:
    // 0x13c604: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13c604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13c608:
    // 0x13c608: 0x509821  addu        $s3, $v0, $s0
    ctx->pc = 0x13c608u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_13c60c:
    // 0x13c60c: 0xc0aafa6  jal         func_2ABE98
label_13c610:
    if (ctx->pc == 0x13C610u) {
        ctx->pc = 0x13C610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C60Cu;
        // 0x13c610: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C614u;
        goto label_13c614;
    }
    ctx->pc = 0x13C60Cu;
    SET_GPR_U32(ctx, 31, 0x13C614u);
    ctx->pc = 0x13C610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C60Cu;
    // 0x13c610: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x13C60Cu, 0x13C614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C614u;
label_13c614:
    // 0x13c614: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13c614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13c618:
    // 0x13c618: 0xc0aafd2  jal         func_2ABF48
label_13c61c:
    if (ctx->pc == 0x13C61Cu) {
        ctx->pc = 0x13C61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C618u;
        // 0x13c61c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C620u;
        goto label_13c620;
    }
    ctx->pc = 0x13C618u;
    SET_GPR_U32(ctx, 31, 0x13C620u);
    ctx->pc = 0x13C61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C618u;
    // 0x13c61c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x13C618u, 0x13C620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C620u;
label_13c620:
    // 0x13c620: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_13c624:
    if (ctx->pc == 0x13C624u) {
        ctx->pc = 0x13C624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C620u;
        // 0x13c624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C628u;
        goto label_13c628;
    }
    ctx->pc = 0x13C620u;
    {
        const bool branch_taken_0x13c620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C620u;
        // 0x13c624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c620) {
            ctx->pc = 0x13C648u;
            goto label_13c648;
        }
    }
    ctx->pc = 0x13C628u;
label_13c628:
    // 0x13c628: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x13c628u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_13c62c:
    // 0x13c62c: 0xc04f166  jal         func_13C598
label_13c630:
    if (ctx->pc == 0x13C630u) {
        ctx->pc = 0x13C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C62Cu;
        // 0x13c630: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C634u;
        goto label_13c634;
    }
    ctx->pc = 0x13C62Cu;
    SET_GPR_U32(ctx, 31, 0x13C634u);
    ctx->pc = 0x13C630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C62Cu;
    // 0x13c630: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C598u, 0x13C62Cu, 0x13C634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C634u;
label_13c634:
    // 0x13c634: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x13c634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_13c638:
    // 0x13c638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13c638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13c63c:
    // 0x13c63c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x13c63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_13c640:
    // 0x13c640: 0x40f809  jalr        $v0
label_13c644:
    if (ctx->pc == 0x13C644u) {
        ctx->pc = 0x13C644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C640u;
        // 0x13c644: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C648u;
        goto label_13c648;
    }
    ctx->pc = 0x13C640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13C648u);
        ctx->pc = 0x13C644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C640u;
        // 0x13c644: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C640u, 0x13C648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13C648u;
label_13c648:
    // 0x13c648: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13c648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_13c64c:
    // 0x13c64c: 0xc0aafac  jal         func_2ABEB0
label_13c650:
    if (ctx->pc == 0x13C650u) {
        ctx->pc = 0x13C650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C64Cu;
        // 0x13c650: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C654u;
        goto label_13c654;
    }
    ctx->pc = 0x13C64Cu;
    SET_GPR_U32(ctx, 31, 0x13C654u);
    ctx->pc = 0x13C650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C64Cu;
    // 0x13c650: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x13C64Cu, 0x13C654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C654u;
label_13c654:
    // 0x13c654: 0x1000000c  b           . + 4 + (0xC << 2)
label_13c658:
    if (ctx->pc == 0x13C658u) {
        ctx->pc = 0x13C658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C654u;
        // 0x13c658: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C65Cu;
        goto label_13c65c;
    }
    ctx->pc = 0x13C654u;
    {
        const bool branch_taken_0x13c654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C654u;
        // 0x13c658: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c654) {
            ctx->pc = 0x13C688u;
            goto label_13c688;
        }
    }
    ctx->pc = 0x13C65Cu;
label_13c65c:
    // 0x13c65c: 0xc04f166  jal         func_13C598
label_13c660:
    if (ctx->pc == 0x13C660u) {
        ctx->pc = 0x13C660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C65Cu;
        // 0x13c660: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C664u;
        goto label_13c664;
    }
    ctx->pc = 0x13C65Cu;
    SET_GPR_U32(ctx, 31, 0x13C664u);
    ctx->pc = 0x13C660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C65Cu;
    // 0x13c660: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C598u, 0x13C65Cu, 0x13C664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C664u;
label_13c664:
    // 0x13c664: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x13c664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_13c668:
    // 0x13c668: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13c668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13c66c:
    // 0x13c66c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x13c66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_13c670:
    // 0x13c670: 0xc04f130  jal         func_13C4C0
label_13c674:
    if (ctx->pc == 0x13C674u) {
        ctx->pc = 0x13C674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C670u;
        // 0x13c674: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C678u;
        goto label_13c678;
    }
    ctx->pc = 0x13C670u;
    SET_GPR_U32(ctx, 31, 0x13C678u);
    ctx->pc = 0x13C674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C670u;
    // 0x13c674: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4C0u, 0x13C670u, 0x13C678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C678u;
label_13c678:
    // 0x13c678: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13c678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13c67c:
    // 0x13c67c: 0xc04d734  jal         func_135CD0
label_13c680:
    if (ctx->pc == 0x13C680u) {
        ctx->pc = 0x13C680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C67Cu;
        // 0x13c680: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C684u;
        goto label_13c684;
    }
    ctx->pc = 0x13C67Cu;
    SET_GPR_U32(ctx, 31, 0x13C684u);
    ctx->pc = 0x13C680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C67Cu;
    // 0x13c680: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135CD0u, 0x13C67Cu, 0x13C684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C684u;
label_13c684:
    // 0x13c684: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13c684u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_13c688:
    // 0x13c688: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x13c688u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_13c68c:
    // 0x13c68c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x13c68cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_13c690:
    // 0x13c690: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x13c690u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_13c694:
    // 0x13c694: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13c694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_13c698:
    // 0x13c698: 0x3e00008  jr          $ra
label_13c69c:
    if (ctx->pc == 0x13C69Cu) {
        ctx->pc = 0x13C69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C698u;
        // 0x13c69c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13C6A0u;
        goto label_fallthrough_0x13c698;
    }
    ctx->pc = 0x13C698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C698u;
        // 0x13c69c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x13c698:
    ctx->pc = 0x13C6A0u;
}

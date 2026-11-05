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

// Function: sub_0015C540
// Address: 0x15c540 - 0x15c718
void sub_0015C540_0x15c540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C540_0x15c540");
#endif

    switch (ctx->pc) {
        case 0x15c540u: goto label_15c540;
        case 0x15c544u: goto label_15c544;
        case 0x15c548u: goto label_15c548;
        case 0x15c54cu: goto label_15c54c;
        case 0x15c550u: goto label_15c550;
        case 0x15c554u: goto label_15c554;
        case 0x15c558u: goto label_15c558;
        case 0x15c55cu: goto label_15c55c;
        case 0x15c560u: goto label_15c560;
        case 0x15c564u: goto label_15c564;
        case 0x15c568u: goto label_15c568;
        case 0x15c56cu: goto label_15c56c;
        case 0x15c570u: goto label_15c570;
        case 0x15c574u: goto label_15c574;
        case 0x15c578u: goto label_15c578;
        case 0x15c57cu: goto label_15c57c;
        case 0x15c580u: goto label_15c580;
        case 0x15c584u: goto label_15c584;
        case 0x15c588u: goto label_15c588;
        case 0x15c58cu: goto label_15c58c;
        case 0x15c590u: goto label_15c590;
        case 0x15c594u: goto label_15c594;
        case 0x15c598u: goto label_15c598;
        case 0x15c59cu: goto label_15c59c;
        case 0x15c5a0u: goto label_15c5a0;
        case 0x15c5a4u: goto label_15c5a4;
        case 0x15c5a8u: goto label_15c5a8;
        case 0x15c5acu: goto label_15c5ac;
        case 0x15c5b0u: goto label_15c5b0;
        case 0x15c5b4u: goto label_15c5b4;
        case 0x15c5b8u: goto label_15c5b8;
        case 0x15c5bcu: goto label_15c5bc;
        case 0x15c5c0u: goto label_15c5c0;
        case 0x15c5c4u: goto label_15c5c4;
        case 0x15c5c8u: goto label_15c5c8;
        case 0x15c5ccu: goto label_15c5cc;
        case 0x15c5d0u: goto label_15c5d0;
        case 0x15c5d4u: goto label_15c5d4;
        case 0x15c5d8u: goto label_15c5d8;
        case 0x15c5dcu: goto label_15c5dc;
        case 0x15c5e0u: goto label_15c5e0;
        case 0x15c5e4u: goto label_15c5e4;
        case 0x15c5e8u: goto label_15c5e8;
        case 0x15c5ecu: goto label_15c5ec;
        case 0x15c5f0u: goto label_15c5f0;
        case 0x15c5f4u: goto label_15c5f4;
        case 0x15c5f8u: goto label_15c5f8;
        case 0x15c5fcu: goto label_15c5fc;
        case 0x15c600u: goto label_15c600;
        case 0x15c604u: goto label_15c604;
        case 0x15c608u: goto label_15c608;
        case 0x15c60cu: goto label_15c60c;
        case 0x15c610u: goto label_15c610;
        case 0x15c614u: goto label_15c614;
        case 0x15c618u: goto label_15c618;
        case 0x15c61cu: goto label_15c61c;
        case 0x15c620u: goto label_15c620;
        case 0x15c624u: goto label_15c624;
        case 0x15c628u: goto label_15c628;
        case 0x15c62cu: goto label_15c62c;
        case 0x15c630u: goto label_15c630;
        case 0x15c634u: goto label_15c634;
        case 0x15c638u: goto label_15c638;
        case 0x15c63cu: goto label_15c63c;
        case 0x15c640u: goto label_15c640;
        case 0x15c644u: goto label_15c644;
        case 0x15c648u: goto label_15c648;
        case 0x15c64cu: goto label_15c64c;
        case 0x15c650u: goto label_15c650;
        case 0x15c654u: goto label_15c654;
        case 0x15c658u: goto label_15c658;
        case 0x15c65cu: goto label_15c65c;
        case 0x15c660u: goto label_15c660;
        case 0x15c664u: goto label_15c664;
        case 0x15c668u: goto label_15c668;
        case 0x15c66cu: goto label_15c66c;
        case 0x15c670u: goto label_15c670;
        case 0x15c674u: goto label_15c674;
        case 0x15c678u: goto label_15c678;
        case 0x15c67cu: goto label_15c67c;
        case 0x15c680u: goto label_15c680;
        case 0x15c684u: goto label_15c684;
        case 0x15c688u: goto label_15c688;
        case 0x15c68cu: goto label_15c68c;
        case 0x15c690u: goto label_15c690;
        case 0x15c694u: goto label_15c694;
        case 0x15c698u: goto label_15c698;
        case 0x15c69cu: goto label_15c69c;
        case 0x15c6a0u: goto label_15c6a0;
        case 0x15c6a4u: goto label_15c6a4;
        case 0x15c6a8u: goto label_15c6a8;
        case 0x15c6acu: goto label_15c6ac;
        case 0x15c6b0u: goto label_15c6b0;
        case 0x15c6b4u: goto label_15c6b4;
        case 0x15c6b8u: goto label_15c6b8;
        case 0x15c6bcu: goto label_15c6bc;
        case 0x15c6c0u: goto label_15c6c0;
        case 0x15c6c4u: goto label_15c6c4;
        case 0x15c6c8u: goto label_15c6c8;
        case 0x15c6ccu: goto label_15c6cc;
        case 0x15c6d0u: goto label_15c6d0;
        case 0x15c6d4u: goto label_15c6d4;
        case 0x15c6d8u: goto label_15c6d8;
        case 0x15c6dcu: goto label_15c6dc;
        case 0x15c6e0u: goto label_15c6e0;
        case 0x15c6e4u: goto label_15c6e4;
        case 0x15c6e8u: goto label_15c6e8;
        case 0x15c6ecu: goto label_15c6ec;
        case 0x15c6f0u: goto label_15c6f0;
        case 0x15c6f4u: goto label_15c6f4;
        case 0x15c6f8u: goto label_15c6f8;
        case 0x15c6fcu: goto label_15c6fc;
        case 0x15c700u: goto label_15c700;
        case 0x15c704u: goto label_15c704;
        case 0x15c708u: goto label_15c708;
        case 0x15c70cu: goto label_15c70c;
        case 0x15c710u: goto label_15c710;
        case 0x15c714u: goto label_15c714;
        default: break;
    }

    ctx->pc = 0x15c540u;

label_15c540:
    // 0x15c540: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x15c540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_15c544:
    // 0x15c544: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x15c544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_15c548:
    // 0x15c548: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x15c548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_15c54c:
    // 0x15c54c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15c54cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15c550:
    // 0x15c550: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x15c550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_15c554:
    // 0x15c554: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x15c554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_15c558:
    // 0x15c558: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x15c558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_15c55c:
    // 0x15c55c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x15c55cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_15c560:
    // 0x15c560: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x15c560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_15c564:
    // 0x15c564: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x15c564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_15c568:
    // 0x15c568: 0xc04f02a  jal         func_13C0A8
label_15c56c:
    if (ctx->pc == 0x15C56Cu) {
        ctx->pc = 0x15C56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C568u;
        // 0x15c56c: 0x30b500ff  andi        $s5, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C570u;
        goto label_15c570;
    }
    ctx->pc = 0x15C568u;
    SET_GPR_U32(ctx, 31, 0x15C570u);
    ctx->pc = 0x15C56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C568u;
    // 0x15c56c: 0x30b500ff  andi        $s5, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C0A8u, 0x15C568u, 0x15C570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C570u;
label_15c570:
    // 0x15c570: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15c570u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c574:
    // 0x15c574: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_15c578:
    if (ctx->pc == 0x15C578u) {
        ctx->pc = 0x15C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C574u;
        // 0x15c578: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C57Cu;
        goto label_15c57c;
    }
    ctx->pc = 0x15C574u;
    {
        const bool branch_taken_0x15c574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C574u;
        // 0x15c578: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c574) {
            ctx->pc = 0x15C590u;
            goto label_15c590;
        }
    }
    ctx->pc = 0x15C57Cu;
label_15c57c:
    // 0x15c57c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_15c580:
    if (ctx->pc == 0x15C580u) {
        ctx->pc = 0x15C580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C57Cu;
        // 0x15c580: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C584u;
        goto label_15c584;
    }
    ctx->pc = 0x15C57Cu;
    {
        const bool branch_taken_0x15c57c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15C580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C57Cu;
        // 0x15c580: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c57c) {
            ctx->pc = 0x15C594u;
            goto label_15c594;
        }
    }
    ctx->pc = 0x15C584u;
label_15c584:
    // 0x15c584: 0x8e620318  lw          $v0, 0x318($s3)
    ctx->pc = 0x15c584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 792)));
label_15c588:
    // 0x15c588: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_15c58c:
    if (ctx->pc == 0x15C58Cu) {
        ctx->pc = 0x15C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C588u;
        // 0x15c58c: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C590u;
        goto label_15c590;
    }
    ctx->pc = 0x15C588u;
    {
        const bool branch_taken_0x15c588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C588u;
        // 0x15c58c: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c588) {
            ctx->pc = 0x15C5B0u;
            goto label_15c5b0;
        }
    }
    ctx->pc = 0x15C590u;
label_15c590:
    // 0x15c590: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15c590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15c594:
    // 0x15c594: 0xc0571c6  jal         func_15C718
label_15c598:
    if (ctx->pc == 0x15C598u) {
        ctx->pc = 0x15C598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C594u;
        // 0x15c598: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C59Cu;
        goto label_15c59c;
    }
    ctx->pc = 0x15C594u;
    SET_GPR_U32(ctx, 31, 0x15C59Cu);
    ctx->pc = 0x15C598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C594u;
    // 0x15c598: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C718u, 0x15C594u, 0x15C59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C59Cu;
label_15c59c:
    // 0x15c59c: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x15c59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_15c5a0:
    // 0x15c5a0: 0x2a21818  mult        $v1, $s5, $v0
    ctx->pc = 0x15c5a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_15c5a4:
    // 0x15c5a4: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x15c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15c5a8:
    // 0x15c5a8: 0x10000050  b           . + 4 + (0x50 << 2)
label_15c5ac:
    if (ctx->pc == 0x15C5ACu) {
        ctx->pc = 0x15C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5A8u;
        // 0x15c5ac: 0xac400384  sw          $zero, 0x384($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 900), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C5B0u;
        goto label_15c5b0;
    }
    ctx->pc = 0x15C5A8u;
    {
        const bool branch_taken_0x15c5a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5A8u;
        // 0x15c5ac: 0xac400384  sw          $zero, 0x384($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 900), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c5a8) {
            ctx->pc = 0x15C6ECu;
            goto label_15c6ec;
        }
    }
    ctx->pc = 0x15C5B0u;
label_15c5b0:
    // 0x15c5b0: 0x2a21818  mult        $v1, $s5, $v0
    ctx->pc = 0x15c5b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_15c5b4:
    // 0x15c5b4: 0x73b021  addu        $s6, $v1, $s3
    ctx->pc = 0x15c5b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_15c5b8:
    // 0x15c5b8: 0x8ed40320  lw          $s4, 0x320($s6)
    ctx->pc = 0x15c5b8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 800)));
label_15c5bc:
    // 0x15c5bc: 0xc057c5a  jal         func_15F168
label_15c5c0:
    if (ctx->pc == 0x15C5C0u) {
        ctx->pc = 0x15C5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5BCu;
        // 0x15c5c0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C5C4u;
        goto label_15c5c4;
    }
    ctx->pc = 0x15C5BCu;
    SET_GPR_U32(ctx, 31, 0x15C5C4u);
    ctx->pc = 0x15C5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C5BCu;
    // 0x15c5c0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15F168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F168u, 0x15C5BCu, 0x15C5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C5C4u;
label_15c5c4:
    // 0x15c5c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15c5c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15c5c8:
    // 0x15c5c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15c5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15c5cc:
    // 0x15c5cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x15c5ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15c5d0:
    // 0x15c5d0: 0xc057c98  jal         func_15F260
label_15c5d4:
    if (ctx->pc == 0x15C5D4u) {
        ctx->pc = 0x15C5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5D0u;
        // 0x15c5d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C5D8u;
        goto label_15c5d8;
    }
    ctx->pc = 0x15C5D0u;
    SET_GPR_U32(ctx, 31, 0x15C5D8u);
    ctx->pc = 0x15C5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C5D0u;
    // 0x15c5d4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15F260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F260u, 0x15C5D0u, 0x15C5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C5D8u;
label_15c5d8:
    // 0x15c5d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15c5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15c5dc:
    // 0x15c5dc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x15c5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15c5e0:
    // 0x15c5e0: 0xc057d1c  jal         func_15F470
label_15c5e4:
    if (ctx->pc == 0x15C5E4u) {
        ctx->pc = 0x15C5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5E0u;
        // 0x15c5e4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C5E8u;
        goto label_15c5e8;
    }
    ctx->pc = 0x15C5E0u;
    SET_GPR_U32(ctx, 31, 0x15C5E8u);
    ctx->pc = 0x15C5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C5E0u;
    // 0x15c5e4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F470u, 0x15C5E0u, 0x15C5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C5E8u;
label_15c5e8:
    // 0x15c5e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15c5e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c5ec:
    // 0x15c5ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15c5ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15c5f0:
    // 0x15c5f0: 0xc057d9c  jal         func_15F670
label_15c5f4:
    if (ctx->pc == 0x15C5F4u) {
        ctx->pc = 0x15C5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C5F0u;
        // 0x15c5f4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C5F8u;
        goto label_15c5f8;
    }
    ctx->pc = 0x15C5F0u;
    SET_GPR_U32(ctx, 31, 0x15C5F8u);
    ctx->pc = 0x15C5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C5F0u;
    // 0x15c5f4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15F670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F670u, 0x15C5F0u, 0x15C5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C5F8u;
label_15c5f8:
    // 0x15c5f8: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
label_15c5fc:
    if (ctx->pc == 0x15C5FCu) {
        ctx->pc = 0x15C600u;
        goto label_15c600;
    }
    ctx->pc = 0x15C5F8u;
    {
        const bool branch_taken_0x15c5f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c5f8) {
            ctx->pc = 0x15C62Cu;
            goto label_15c62c;
        }
    }
    ctx->pc = 0x15C600u;
label_15c600:
    // 0x15c600: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
label_15c604:
    if (ctx->pc == 0x15C604u) {
        ctx->pc = 0x15C608u;
        goto label_15c608;
    }
    ctx->pc = 0x15C600u;
    {
        const bool branch_taken_0x15c600 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c600) {
            ctx->pc = 0x15C62Cu;
            goto label_15c62c;
        }
    }
    ctx->pc = 0x15C608u;
label_15c608:
    // 0x15c608: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
label_15c60c:
    if (ctx->pc == 0x15C60Cu) {
        ctx->pc = 0x15C610u;
        goto label_15c610;
    }
    ctx->pc = 0x15C608u;
    {
        const bool branch_taken_0x15c608 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c608) {
            ctx->pc = 0x15C62Cu;
            goto label_15c62c;
        }
    }
    ctx->pc = 0x15C610u;
label_15c610:
    // 0x15c610: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_15c614:
    if (ctx->pc == 0x15C614u) {
        ctx->pc = 0x15C618u;
        goto label_15c618;
    }
    ctx->pc = 0x15C610u;
    {
        const bool branch_taken_0x15c610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c610) {
            ctx->pc = 0x15C62Cu;
            goto label_15c62c;
        }
    }
    ctx->pc = 0x15C618u;
label_15c618:
    // 0x15c618: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15c618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15c61c:
    // 0x15c61c: 0xc0571c6  jal         func_15C718
label_15c620:
    if (ctx->pc == 0x15C620u) {
        ctx->pc = 0x15C620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C61Cu;
        // 0x15c620: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C624u;
        goto label_15c624;
    }
    ctx->pc = 0x15C61Cu;
    SET_GPR_U32(ctx, 31, 0x15C624u);
    ctx->pc = 0x15C620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C61Cu;
    // 0x15c620: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C718u, 0x15C61Cu, 0x15C624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C624u;
label_15c624:
    // 0x15c624: 0x10000031  b           . + 4 + (0x31 << 2)
label_15c628:
    if (ctx->pc == 0x15C628u) {
        ctx->pc = 0x15C628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C624u;
        // 0x15c628: 0xaec00384  sw          $zero, 0x384($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 900), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C62Cu;
        goto label_15c62c;
    }
    ctx->pc = 0x15C624u;
    {
        const bool branch_taken_0x15c624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C624u;
        // 0x15c628: 0xaec00384  sw          $zero, 0x384($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 900), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c624) {
            ctx->pc = 0x15C6ECu;
            goto label_15c6ec;
        }
    }
    ctx->pc = 0x15C62Cu;
label_15c62c:
    // 0x15c62c: 0xc04f244  jal         func_13C910
label_15c630:
    if (ctx->pc == 0x15C630u) {
        ctx->pc = 0x15C630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C62Cu;
        // 0x15c630: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C634u;
        goto label_15c634;
    }
    ctx->pc = 0x15C62Cu;
    SET_GPR_U32(ctx, 31, 0x15C634u);
    ctx->pc = 0x15C630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C62Cu;
    // 0x15c630: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C910u, 0x15C62Cu, 0x15C634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C634u;
label_15c634:
    // 0x15c634: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15c634u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c638:
    // 0x15c638: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x15c638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_15c63c:
    // 0x15c63c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15c63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15c640:
    // 0x15c640: 0xc04f33e  jal         func_13CCF8
label_15c644:
    if (ctx->pc == 0x15C644u) {
        ctx->pc = 0x15C644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C640u;
        // 0x15c644: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C648u;
        goto label_15c648;
    }
    ctx->pc = 0x15C640u;
    SET_GPR_U32(ctx, 31, 0x15C648u);
    ctx->pc = 0x15C644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C640u;
    // 0x15c644: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x15C640u, 0x15C648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C648u;
label_15c648:
    // 0x15c648: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15c648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15c64c:
    // 0x15c64c: 0xc04f0b6  jal         func_13C2D8
label_15c650:
    if (ctx->pc == 0x15C650u) {
        ctx->pc = 0x15C650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C64Cu;
        // 0x15c650: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C654u;
        goto label_15c654;
    }
    ctx->pc = 0x15C64Cu;
    SET_GPR_U32(ctx, 31, 0x15C654u);
    ctx->pc = 0x15C650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C64Cu;
    // 0x15c650: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x15C64Cu, 0x15C654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C654u;
label_15c654:
    // 0x15c654: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15c654u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c658:
    // 0x15c658: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x15c658u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_15c65c:
    // 0x15c65c: 0xc0461e8  jal         func_1187A0
label_15c660:
    if (ctx->pc == 0x15C660u) {
        ctx->pc = 0x15C660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C65Cu;
        // 0x15c660: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C664u;
        goto label_15c664;
    }
    ctx->pc = 0x15C65Cu;
    SET_GPR_U32(ctx, 31, 0x15C664u);
    ctx->pc = 0x15C660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C65Cu;
    // 0x15c660: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x15C65Cu, 0x15C664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C664u;
label_15c664:
    // 0x15c664: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15c664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15c668:
    // 0x15c668: 0xc046226  jal         func_118898
label_15c66c:
    if (ctx->pc == 0x15C66Cu) {
        ctx->pc = 0x15C66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C668u;
        // 0x15c66c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C670u;
        goto label_15c670;
    }
    ctx->pc = 0x15C668u;
    SET_GPR_U32(ctx, 31, 0x15C670u);
    ctx->pc = 0x15C66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C668u;
    // 0x15c66c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118898u, 0x15C668u, 0x15C670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C670u;
label_15c670:
    // 0x15c670: 0x8e6502e0  lw          $a1, 0x2E0($s3)
    ctx->pc = 0x15c670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 736)));
label_15c674:
    // 0x15c674: 0xc045fea  jal         func_117FA8
label_15c678:
    if (ctx->pc == 0x15C678u) {
        ctx->pc = 0x15C678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C674u;
        // 0x15c678: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C67Cu;
        goto label_15c67c;
    }
    ctx->pc = 0x15C674u;
    SET_GPR_U32(ctx, 31, 0x15C67Cu);
    ctx->pc = 0x15C678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C674u;
    // 0x15c678: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x15C674u, 0x15C67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C67Cu;
label_15c67c:
    // 0x15c67c: 0xc66c02ec  lwc1        $f12, 0x2EC($s3)
    ctx->pc = 0x15c67cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_15c680:
    // 0x15c680: 0xc046290  jal         func_118A40
label_15c684:
    if (ctx->pc == 0x15C684u) {
        ctx->pc = 0x15C684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C680u;
        // 0x15c684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C688u;
        goto label_15c688;
    }
    ctx->pc = 0x15C680u;
    SET_GPR_U32(ctx, 31, 0x15C688u);
    ctx->pc = 0x15C684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C680u;
    // 0x15c684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x15C680u, 0x15C688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C688u;
label_15c688:
    // 0x15c688: 0x24100070  addiu       $s0, $zero, 0x70
    ctx->pc = 0x15c688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_15c68c:
    // 0x15c68c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x15c68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_15c690:
    // 0x15c690: 0x2b01018  mult        $v0, $s5, $s0
    ctx->pc = 0x15c690u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_15c694:
    // 0x15c694: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15c694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15c698:
    // 0x15c698: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x15c698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15c69c:
    // 0x15c69c: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x15c69cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_15c6a0:
    // 0x15c6a0: 0xae030324  sw          $v1, 0x324($s0)
    ctx->pc = 0x15c6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 804), GPR_U32(ctx, 3));
label_15c6a4:
    // 0x15c6a4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x15c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_15c6a8:
    // 0x15c6a8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x15c6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_15c6ac:
    // 0x15c6ac: 0x60f809  jalr        $v1
label_15c6b0:
    if (ctx->pc == 0x15C6B0u) {
        ctx->pc = 0x15C6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6ACu;
        // 0x15c6b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C6B4u;
        goto label_15c6b4;
    }
    ctx->pc = 0x15C6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x15C6B4u);
        ctx->pc = 0x15C6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6ACu;
        // 0x15c6b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C6ACu, 0x15C6B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C6B4u;
label_15c6b4:
    // 0x15c6b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15c6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15c6b8:
    // 0x15c6b8: 0xae12032c  sw          $s2, 0x32C($s0)
    ctx->pc = 0x15c6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 18));
label_15c6bc:
    // 0x15c6bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15c6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15c6c0:
    // 0x15c6c0: 0xae020330  sw          $v0, 0x330($s0)
    ctx->pc = 0x15c6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 2));
label_15c6c4:
    // 0x15c6c4: 0xc0aafa6  jal         func_2ABE98
label_15c6c8:
    if (ctx->pc == 0x15C6C8u) {
        ctx->pc = 0x15C6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6C4u;
        // 0x15c6c8: 0xae020328  sw          $v0, 0x328($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 808), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C6CCu;
        goto label_15c6cc;
    }
    ctx->pc = 0x15C6C4u;
    SET_GPR_U32(ctx, 31, 0x15C6CCu);
    ctx->pc = 0x15C6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C6C4u;
    // 0x15c6c8: 0xae020328  sw          $v0, 0x328($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 808), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x15C6C4u, 0x15C6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C6CCu;
label_15c6cc:
    // 0x15c6cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15c6ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15c6d0:
    // 0x15c6d0: 0xc0aafc8  jal         func_2ABF20
label_15c6d4:
    if (ctx->pc == 0x15C6D4u) {
        ctx->pc = 0x15C6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6D0u;
        // 0x15c6d4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C6D8u;
        goto label_15c6d8;
    }
    ctx->pc = 0x15C6D0u;
    SET_GPR_U32(ctx, 31, 0x15C6D8u);
    ctx->pc = 0x15C6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C6D0u;
    // 0x15c6d4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x15C6D0u, 0x15C6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C6D8u;
label_15c6d8:
    // 0x15c6d8: 0xae000340  sw          $zero, 0x340($s0)
    ctx->pc = 0x15c6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 0));
label_15c6dc:
    // 0x15c6dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15c6dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15c6e0:
    // 0x15c6e0: 0xae02033c  sw          $v0, 0x33C($s0)
    ctx->pc = 0x15c6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 2));
label_15c6e4:
    // 0x15c6e4: 0xc0aafac  jal         func_2ABEB0
label_15c6e8:
    if (ctx->pc == 0x15C6E8u) {
        ctx->pc = 0x15C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C6E4u;
        // 0x15c6e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C6ECu;
        goto label_15c6ec;
    }
    ctx->pc = 0x15C6E4u;
    SET_GPR_U32(ctx, 31, 0x15C6ECu);
    ctx->pc = 0x15C6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C6E4u;
    // 0x15c6e8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x15C6E4u, 0x15C6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C6ECu;
label_15c6ec:
    // 0x15c6ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x15c6ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15c6f0:
    // 0x15c6f0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x15c6f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15c6f4:
    // 0x15c6f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x15c6f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15c6f8:
    // 0x15c6f8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x15c6f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_15c6fc:
    // 0x15c6fc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x15c6fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15c700:
    // 0x15c700: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x15c700u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_15c704:
    // 0x15c704: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x15c704u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15c708:
    // 0x15c708: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x15c708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_15c70c:
    // 0x15c70c: 0x3e00008  jr          $ra
label_15c710:
    if (ctx->pc == 0x15C710u) {
        ctx->pc = 0x15C710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C70Cu;
        // 0x15c710: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C714u;
        goto label_15c714;
    }
    ctx->pc = 0x15C70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C70Cu;
        // 0x15c710: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C714u;
label_15c714:
    // 0x15c714: 0x0  nop
    ctx->pc = 0x15c714u;
    // NOP
    ctx->pc = 0x15c718u;
}

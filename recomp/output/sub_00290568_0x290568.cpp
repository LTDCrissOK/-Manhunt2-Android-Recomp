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

// Function: sub_00290568
// Address: 0x290568 - 0x2906c0
void sub_00290568_0x290568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290568_0x290568");
#endif

    switch (ctx->pc) {
        case 0x290568u: goto label_290568;
        case 0x29056cu: goto label_29056c;
        case 0x290570u: goto label_290570;
        case 0x290574u: goto label_290574;
        case 0x290578u: goto label_290578;
        case 0x29057cu: goto label_29057c;
        case 0x290580u: goto label_290580;
        case 0x290584u: goto label_290584;
        case 0x290588u: goto label_290588;
        case 0x29058cu: goto label_29058c;
        case 0x290590u: goto label_290590;
        case 0x290594u: goto label_290594;
        case 0x290598u: goto label_290598;
        case 0x29059cu: goto label_29059c;
        case 0x2905a0u: goto label_2905a0;
        case 0x2905a4u: goto label_2905a4;
        case 0x2905a8u: goto label_2905a8;
        case 0x2905acu: goto label_2905ac;
        case 0x2905b0u: goto label_2905b0;
        case 0x2905b4u: goto label_2905b4;
        case 0x2905b8u: goto label_2905b8;
        case 0x2905bcu: goto label_2905bc;
        case 0x2905c0u: goto label_2905c0;
        case 0x2905c4u: goto label_2905c4;
        case 0x2905c8u: goto label_2905c8;
        case 0x2905ccu: goto label_2905cc;
        case 0x2905d0u: goto label_2905d0;
        case 0x2905d4u: goto label_2905d4;
        case 0x2905d8u: goto label_2905d8;
        case 0x2905dcu: goto label_2905dc;
        case 0x2905e0u: goto label_2905e0;
        case 0x2905e4u: goto label_2905e4;
        case 0x2905e8u: goto label_2905e8;
        case 0x2905ecu: goto label_2905ec;
        case 0x2905f0u: goto label_2905f0;
        case 0x2905f4u: goto label_2905f4;
        case 0x2905f8u: goto label_2905f8;
        case 0x2905fcu: goto label_2905fc;
        case 0x290600u: goto label_290600;
        case 0x290604u: goto label_290604;
        case 0x290608u: goto label_290608;
        case 0x29060cu: goto label_29060c;
        case 0x290610u: goto label_290610;
        case 0x290614u: goto label_290614;
        case 0x290618u: goto label_290618;
        case 0x29061cu: goto label_29061c;
        case 0x290620u: goto label_290620;
        case 0x290624u: goto label_290624;
        case 0x290628u: goto label_290628;
        case 0x29062cu: goto label_29062c;
        case 0x290630u: goto label_290630;
        case 0x290634u: goto label_290634;
        case 0x290638u: goto label_290638;
        case 0x29063cu: goto label_29063c;
        case 0x290640u: goto label_290640;
        case 0x290644u: goto label_290644;
        case 0x290648u: goto label_290648;
        case 0x29064cu: goto label_29064c;
        case 0x290650u: goto label_290650;
        case 0x290654u: goto label_290654;
        case 0x290658u: goto label_290658;
        case 0x29065cu: goto label_29065c;
        case 0x290660u: goto label_290660;
        case 0x290664u: goto label_290664;
        case 0x290668u: goto label_290668;
        case 0x29066cu: goto label_29066c;
        case 0x290670u: goto label_290670;
        case 0x290674u: goto label_290674;
        case 0x290678u: goto label_290678;
        case 0x29067cu: goto label_29067c;
        case 0x290680u: goto label_290680;
        case 0x290684u: goto label_290684;
        case 0x290688u: goto label_290688;
        case 0x29068cu: goto label_29068c;
        case 0x290690u: goto label_290690;
        case 0x290694u: goto label_290694;
        case 0x290698u: goto label_290698;
        case 0x29069cu: goto label_29069c;
        case 0x2906a0u: goto label_2906a0;
        case 0x2906a4u: goto label_2906a4;
        case 0x2906a8u: goto label_2906a8;
        case 0x2906acu: goto label_2906ac;
        case 0x2906b0u: goto label_2906b0;
        case 0x2906b4u: goto label_2906b4;
        case 0x2906b8u: goto label_2906b8;
        case 0x2906bcu: goto label_2906bc;
        default: break;
    }

    ctx->pc = 0x290568u;

label_290568:
    // 0x290568: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x290568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_29056c:
    // 0x29056c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x29056cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_290570:
    // 0x290570: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x290570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_290574:
    // 0x290574: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x290574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_290578:
    // 0x290578: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x290578u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29057c:
    // 0x29057c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x29057cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_290580:
    // 0x290580: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x290580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_290584:
    // 0x290584: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x290584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_290588:
    // 0x290588: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x290588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_29058c:
    // 0x29058c: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x29058cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_290590:
    // 0x290590: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x290590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_290594:
    // 0x290594: 0x3c150047  lui         $s5, 0x47
    ctx->pc = 0x290594u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)71 << 16));
label_290598:
    // 0x290598: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x290598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_29059c:
    // 0x29059c: 0x3c16004c  lui         $s6, 0x4C
    ctx->pc = 0x29059cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)76 << 16));
label_2905a0:
    // 0x2905a0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2905a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_2905a4:
    // 0x2905a4: 0xc0d7384  jal         func_35CE10
label_2905a8:
    if (ctx->pc == 0x2905A8u) {
        ctx->pc = 0x2905A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2905A4u;
        // 0x2905a8: 0x3c140047  lui         $s4, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2905ACu;
        goto label_2905ac;
    }
    ctx->pc = 0x2905A4u;
    SET_GPR_U32(ctx, 31, 0x2905ACu);
    ctx->pc = 0x2905A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2905A4u;
    // 0x2905a8: 0x3c140047  lui         $s4, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)71 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x2905A4u, 0x2905ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2905ACu;
label_2905ac:
    // 0x2905ac: 0x10000030  b           . + 4 + (0x30 << 2)
label_2905b0:
    if (ctx->pc == 0x2905B0u) {
        ctx->pc = 0x2905B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2905ACu;
        // 0x2905b0: 0x3c130047  lui         $s3, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2905B4u;
        goto label_2905b4;
    }
    ctx->pc = 0x2905ACu;
    {
        const bool branch_taken_0x2905ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2905B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2905ACu;
        // 0x2905b0: 0x3c130047  lui         $s3, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2905ac) {
            ctx->pc = 0x290670u;
            goto label_290670;
        }
    }
    ctx->pc = 0x2905B4u;
label_2905b4:
    // 0x2905b4: 0x0  nop
    ctx->pc = 0x2905b4u;
    // NOP
label_2905b8:
    // 0x2905b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2905b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2905bc:
    // 0x2905bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2905bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2905c0:
    // 0x2905c0: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2905c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2905c4:
    // 0x2905c4: 0x40f809  jalr        $v0
label_2905c8:
    if (ctx->pc == 0x2905C8u) {
        ctx->pc = 0x2905C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2905C4u;
        // 0x2905c8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2905CCu;
        goto label_2905cc;
    }
    ctx->pc = 0x2905C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2905CCu);
        ctx->pc = 0x2905C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2905C4u;
        // 0x2905c8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2905C4u, 0x2905CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2905CCu;
label_2905cc:
    // 0x2905cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2905ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2905d0:
    // 0x2905d0: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_2905d4:
    if (ctx->pc == 0x2905D4u) {
        ctx->pc = 0x2905D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2905D0u;
        // 0x2905d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2905D8u;
        goto label_2905d8;
    }
    ctx->pc = 0x2905D0u;
    {
        const bool branch_taken_0x2905d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2905D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2905D0u;
        // 0x2905d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2905d0) {
            ctx->pc = 0x290670u;
            goto label_290670;
        }
    }
    ctx->pc = 0x2905D8u;
label_2905d8:
    // 0x2905d8: 0xc0a7ca2  jal         func_29F288
label_2905dc:
    if (ctx->pc == 0x2905DCu) {
        ctx->pc = 0x2905DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2905D8u;
        // 0x2905dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2905E0u;
        goto label_2905e0;
    }
    ctx->pc = 0x2905D8u;
    SET_GPR_U32(ctx, 31, 0x2905E0u);
    ctx->pc = 0x2905DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2905D8u;
    // 0x2905dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29F288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29F288u, 0x2905D8u, 0x2905E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2905E0u;
label_2905e0:
    // 0x2905e0: 0x8ec51168  lw          $a1, 0x1168($s6)
    ctx->pc = 0x2905e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4456)));
label_2905e4:
    // 0x2905e4: 0xc0d73cc  jal         func_35CF30
label_2905e8:
    if (ctx->pc == 0x2905E8u) {
        ctx->pc = 0x2905E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2905E4u;
        // 0x2905e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2905ECu;
        goto label_2905ec;
    }
    ctx->pc = 0x2905E4u;
    SET_GPR_U32(ctx, 31, 0x2905ECu);
    ctx->pc = 0x2905E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2905E4u;
    // 0x2905e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2905E4u, 0x2905ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2905ECu;
label_2905ec:
    // 0x2905ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2905ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2905f0:
    // 0x2905f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2905f4:
    if (ctx->pc == 0x2905F4u) {
        ctx->pc = 0x2905F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2905F0u;
        // 0x2905f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2905F8u;
        goto label_2905f8;
    }
    ctx->pc = 0x2905F0u;
    {
        const bool branch_taken_0x2905f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2905F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2905F0u;
        // 0x2905f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2905f0) {
            ctx->pc = 0x29060Cu;
            goto label_29060c;
        }
    }
    ctx->pc = 0x2905F8u;
label_2905f8:
    // 0x2905f8: 0xae300304  sw          $s0, 0x304($s1)
    ctx->pc = 0x2905f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 772), GPR_U32(ctx, 16));
label_2905fc:
    // 0x2905fc: 0xc0a76c4  jal         func_29DB10
label_290600:
    if (ctx->pc == 0x290600u) {
        ctx->pc = 0x290600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2905FCu;
        // 0x290600: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290604u;
        goto label_290604;
    }
    ctx->pc = 0x2905FCu;
    SET_GPR_U32(ctx, 31, 0x290604u);
    ctx->pc = 0x290600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2905FCu;
    // 0x290600: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29DB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DB10u, 0x2905FCu, 0x290604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290604u;
label_290604:
    // 0x290604: 0x1000001b  b           . + 4 + (0x1B << 2)
label_290608:
    if (ctx->pc == 0x290608u) {
        ctx->pc = 0x290608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290604u;
        // 0x290608: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29060Cu;
        goto label_29060c;
    }
    ctx->pc = 0x290604u;
    {
        const bool branch_taken_0x290604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290604u;
        // 0x290608: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290604) {
            ctx->pc = 0x290674u;
            goto label_290674;
        }
    }
    ctx->pc = 0x29060Cu;
label_29060c:
    // 0x29060c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29060cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_290610:
    // 0x290610: 0xc0d758e  jal         func_35D638
label_290614:
    if (ctx->pc == 0x290614u) {
        ctx->pc = 0x290614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290610u;
        // 0x290614: 0x26a5b410  addiu       $a1, $s5, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290618u;
        goto label_290618;
    }
    ctx->pc = 0x290610u;
    SET_GPR_U32(ctx, 31, 0x290618u);
    ctx->pc = 0x290614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290610u;
    // 0x290614: 0x26a5b410  addiu       $a1, $s5, -0x4BF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D638u, 0x290610u, 0x290618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290618u;
label_290618:
    // 0x290618: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_29061c:
    if (ctx->pc == 0x29061Cu) {
        ctx->pc = 0x29061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290618u;
        // 0x29061c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290620u;
        goto label_290620;
    }
    ctx->pc = 0x290618u;
    {
        const bool branch_taken_0x290618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29061Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290618u;
        // 0x29061c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290618) {
            ctx->pc = 0x290664u;
            goto label_290664;
        }
    }
    ctx->pc = 0x290620u;
label_290620:
    // 0x290620: 0xc0d758e  jal         func_35D638
label_290624:
    if (ctx->pc == 0x290624u) {
        ctx->pc = 0x290624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290620u;
        // 0x290624: 0x2685b418  addiu       $a1, $s4, -0x4BE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294947864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290628u;
        goto label_290628;
    }
    ctx->pc = 0x290620u;
    SET_GPR_U32(ctx, 31, 0x290628u);
    ctx->pc = 0x290624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290620u;
    // 0x290624: 0x2685b418  addiu       $a1, $s4, -0x4BE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294947864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D638u, 0x290620u, 0x290628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290628u;
label_290628:
    // 0x290628: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_29062c:
    if (ctx->pc == 0x29062Cu) {
        ctx->pc = 0x29062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290628u;
        // 0x29062c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290630u;
        goto label_290630;
    }
    ctx->pc = 0x290628u;
    {
        const bool branch_taken_0x290628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290628u;
        // 0x29062c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290628) {
            ctx->pc = 0x290640u;
            goto label_290640;
        }
    }
    ctx->pc = 0x290630u;
label_290630:
    // 0x290630: 0xc0f862e  jal         func_3E18B8
label_290634:
    if (ctx->pc == 0x290634u) {
        ctx->pc = 0x290634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290630u;
        // 0x290634: 0x262402e0  addiu       $a0, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290638u;
        goto label_290638;
    }
    ctx->pc = 0x290630u;
    SET_GPR_U32(ctx, 31, 0x290638u);
    ctx->pc = 0x290634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290630u;
    // 0x290634: 0x262402e0  addiu       $a0, $s1, 0x2E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E18B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E18B8u, 0x290630u, 0x290638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290638u;
label_290638:
    // 0x290638: 0x1000000e  b           . + 4 + (0xE << 2)
label_29063c:
    if (ctx->pc == 0x29063Cu) {
        ctx->pc = 0x29063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290638u;
        // 0x29063c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290640u;
        goto label_290640;
    }
    ctx->pc = 0x290638u;
    {
        const bool branch_taken_0x290638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290638u;
        // 0x29063c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290638) {
            ctx->pc = 0x290674u;
            goto label_290674;
        }
    }
    ctx->pc = 0x290640u;
label_290640:
    // 0x290640: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x290640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_290644:
    // 0x290644: 0xc0d758e  jal         func_35D638
label_290648:
    if (ctx->pc == 0x290648u) {
        ctx->pc = 0x290648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290644u;
        // 0x290648: 0x2665b420  addiu       $a1, $s3, -0x4BE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294947872));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29064Cu;
        goto label_29064c;
    }
    ctx->pc = 0x290644u;
    SET_GPR_U32(ctx, 31, 0x29064Cu);
    ctx->pc = 0x290648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290644u;
    // 0x290648: 0x2665b420  addiu       $a1, $s3, -0x4BE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294947872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D638u, 0x290644u, 0x29064Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29064Cu;
label_29064c:
    // 0x29064c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_290650:
    if (ctx->pc == 0x290650u) {
        ctx->pc = 0x290650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29064Cu;
        // 0x290650: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290654u;
        goto label_290654;
    }
    ctx->pc = 0x29064Cu;
    {
        const bool branch_taken_0x29064c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29064Cu;
        // 0x290650: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29064c) {
            ctx->pc = 0x290670u;
            goto label_290670;
        }
    }
    ctx->pc = 0x290654u;
label_290654:
    // 0x290654: 0xc0f862e  jal         func_3E18B8
label_290658:
    if (ctx->pc == 0x290658u) {
        ctx->pc = 0x290658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290654u;
        // 0x290658: 0x262402f0  addiu       $a0, $s1, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29065Cu;
        goto label_29065c;
    }
    ctx->pc = 0x290654u;
    SET_GPR_U32(ctx, 31, 0x29065Cu);
    ctx->pc = 0x290658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290654u;
    // 0x290658: 0x262402f0  addiu       $a0, $s1, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E18B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E18B8u, 0x290654u, 0x29065Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29065Cu;
label_29065c:
    // 0x29065c: 0x10000005  b           . + 4 + (0x5 << 2)
label_290660:
    if (ctx->pc == 0x290660u) {
        ctx->pc = 0x290660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29065Cu;
        // 0x290660: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290664u;
        goto label_290664;
    }
    ctx->pc = 0x29065Cu;
    {
        const bool branch_taken_0x29065c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29065Cu;
        // 0x290660: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29065c) {
            ctx->pc = 0x290674u;
            goto label_290674;
        }
    }
    ctx->pc = 0x290664u;
label_290664:
    // 0x290664: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x290664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_290668:
    // 0x290668: 0xc0a76c4  jal         func_29DB10
label_29066c:
    if (ctx->pc == 0x29066Cu) {
        ctx->pc = 0x29066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290668u;
        // 0x29066c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290670u;
        goto label_290670;
    }
    ctx->pc = 0x290668u;
    SET_GPR_U32(ctx, 31, 0x290670u);
    ctx->pc = 0x29066Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290668u;
    // 0x29066c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29DB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DB10u, 0x290668u, 0x290670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290670u;
label_290670:
    // 0x290670: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x290670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_290674:
    // 0x290674: 0xc09de68  jal         func_2779A0
label_290678:
    if (ctx->pc == 0x290678u) {
        ctx->pc = 0x290678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290674u;
        // 0x290678: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29067Cu;
        goto label_29067c;
    }
    ctx->pc = 0x290674u;
    SET_GPR_U32(ctx, 31, 0x29067Cu);
    ctx->pc = 0x290678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290674u;
    // 0x290678: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x290674u, 0x29067Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29067Cu;
label_29067c:
    // 0x29067c: 0x5440ffce  bnel        $v0, $zero, . + 4 + (-0x32 << 2)
label_290680:
    if (ctx->pc == 0x290680u) {
        ctx->pc = 0x290680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29067Cu;
        // 0x290680: 0x8e230278  lw          $v1, 0x278($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290684u;
        goto label_290684;
    }
    ctx->pc = 0x29067Cu;
    {
        const bool branch_taken_0x29067c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29067c) {
            ctx->pc = 0x290680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29067Cu;
            // 0x290680: 0x8e230278  lw          $v1, 0x278($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2905B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2905b8;
        }
    }
    ctx->pc = 0x290684u;
label_290684:
    // 0x290684: 0xc0a7a82  jal         func_29EA08
label_290688:
    if (ctx->pc == 0x290688u) {
        ctx->pc = 0x290688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290684u;
        // 0x290688: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29068Cu;
        goto label_29068c;
    }
    ctx->pc = 0x290684u;
    SET_GPR_U32(ctx, 31, 0x29068Cu);
    ctx->pc = 0x290688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290684u;
    // 0x290688: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29EA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EA08u, 0x290684u, 0x29068Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29068Cu;
label_29068c:
    // 0x29068c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29068cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_290690:
    // 0x290690: 0xc0d7412  jal         func_35D048
label_290694:
    if (ctx->pc == 0x290694u) {
        ctx->pc = 0x290694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290690u;
        // 0x290694: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x290698u;
        goto label_290698;
    }
    ctx->pc = 0x290690u;
    SET_GPR_U32(ctx, 31, 0x290698u);
    ctx->pc = 0x290694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290690u;
    // 0x290694: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x290690u, 0x290698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290698u;
label_290698:
    // 0x290698: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x290698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29069c:
    // 0x29069c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x29069cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2906a0:
    // 0x2906a0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2906a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2906a4:
    // 0x2906a4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2906a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2906a8:
    // 0x2906a8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2906a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2906ac:
    // 0x2906ac: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2906acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2906b0:
    // 0x2906b0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2906b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2906b4:
    // 0x2906b4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2906b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2906b8:
    // 0x2906b8: 0x3e00008  jr          $ra
label_2906bc:
    if (ctx->pc == 0x2906BCu) {
        ctx->pc = 0x2906BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2906B8u;
        // 0x2906bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2906C0u;
        goto label_fallthrough_0x2906b8;
    }
    ctx->pc = 0x2906B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2906BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2906B8u;
        // 0x2906bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2906B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2906b8:
    ctx->pc = 0x2906C0u;
}

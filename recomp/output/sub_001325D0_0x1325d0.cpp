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

// Function: sub_001325D0
// Address: 0x1325d0 - 0x1326c8
void sub_001325D0_0x1325d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001325D0_0x1325d0");
#endif

    switch (ctx->pc) {
        case 0x1325d0u: goto label_1325d0;
        case 0x1325d4u: goto label_1325d4;
        case 0x1325d8u: goto label_1325d8;
        case 0x1325dcu: goto label_1325dc;
        case 0x1325e0u: goto label_1325e0;
        case 0x1325e4u: goto label_1325e4;
        case 0x1325e8u: goto label_1325e8;
        case 0x1325ecu: goto label_1325ec;
        case 0x1325f0u: goto label_1325f0;
        case 0x1325f4u: goto label_1325f4;
        case 0x1325f8u: goto label_1325f8;
        case 0x1325fcu: goto label_1325fc;
        case 0x132600u: goto label_132600;
        case 0x132604u: goto label_132604;
        case 0x132608u: goto label_132608;
        case 0x13260cu: goto label_13260c;
        case 0x132610u: goto label_132610;
        case 0x132614u: goto label_132614;
        case 0x132618u: goto label_132618;
        case 0x13261cu: goto label_13261c;
        case 0x132620u: goto label_132620;
        case 0x132624u: goto label_132624;
        case 0x132628u: goto label_132628;
        case 0x13262cu: goto label_13262c;
        case 0x132630u: goto label_132630;
        case 0x132634u: goto label_132634;
        case 0x132638u: goto label_132638;
        case 0x13263cu: goto label_13263c;
        case 0x132640u: goto label_132640;
        case 0x132644u: goto label_132644;
        case 0x132648u: goto label_132648;
        case 0x13264cu: goto label_13264c;
        case 0x132650u: goto label_132650;
        case 0x132654u: goto label_132654;
        case 0x132658u: goto label_132658;
        case 0x13265cu: goto label_13265c;
        case 0x132660u: goto label_132660;
        case 0x132664u: goto label_132664;
        case 0x132668u: goto label_132668;
        case 0x13266cu: goto label_13266c;
        case 0x132670u: goto label_132670;
        case 0x132674u: goto label_132674;
        case 0x132678u: goto label_132678;
        case 0x13267cu: goto label_13267c;
        case 0x132680u: goto label_132680;
        case 0x132684u: goto label_132684;
        case 0x132688u: goto label_132688;
        case 0x13268cu: goto label_13268c;
        case 0x132690u: goto label_132690;
        case 0x132694u: goto label_132694;
        case 0x132698u: goto label_132698;
        case 0x13269cu: goto label_13269c;
        case 0x1326a0u: goto label_1326a0;
        case 0x1326a4u: goto label_1326a4;
        case 0x1326a8u: goto label_1326a8;
        case 0x1326acu: goto label_1326ac;
        case 0x1326b0u: goto label_1326b0;
        case 0x1326b4u: goto label_1326b4;
        case 0x1326b8u: goto label_1326b8;
        case 0x1326bcu: goto label_1326bc;
        case 0x1326c0u: goto label_1326c0;
        case 0x1326c4u: goto label_1326c4;
        default: break;
    }

    ctx->pc = 0x1325d0u;

label_1325d0:
    // 0x1325d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1325d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1325d4:
    // 0x1325d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1325d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1325d8:
    // 0x1325d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1325d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1325dc:
    // 0x1325dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1325dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1325e0:
    // 0x1325e0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1325e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1325e4:
    // 0x1325e4: 0x8e020218  lw          $v0, 0x218($s0)
    ctx->pc = 0x1325e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_1325e8:
    // 0x1325e8: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
label_1325ec:
    if (ctx->pc == 0x1325ECu) {
        ctx->pc = 0x1325ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1325E8u;
        // 0x1325ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1325F0u;
        goto label_1325f0;
    }
    ctx->pc = 0x1325E8u;
    {
        const bool branch_taken_0x1325e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1325e8) {
            ctx->pc = 0x1325ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1325E8u;
            // 0x1325ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1326B8u;
            goto label_1326b8;
        }
    }
    ctx->pc = 0x1325F0u;
label_1325f0:
    // 0x1325f0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1325f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1325f4:
    // 0x1325f4: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x1325f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1325f8:
    // 0x1325f8: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1325f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_1325fc:
    // 0x1325fc: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x1325fcu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_132600:
    // 0x132600: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_132604:
    if (ctx->pc == 0x132604u) {
        ctx->pc = 0x132604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132600u;
        // 0x132604: 0x2c630001  sltiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x132608u;
        goto label_132608;
    }
    ctx->pc = 0x132600u;
    {
        const bool branch_taken_0x132600 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x132604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132600u;
        // 0x132604: 0x2c630001  sltiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x132600) {
            ctx->pc = 0x132610u;
            goto label_132610;
        }
    }
    ctx->pc = 0x132608u;
label_132608:
    // 0x132608: 0x5060002b  beql        $v1, $zero, . + 4 + (0x2B << 2)
label_13260c:
    if (ctx->pc == 0x13260Cu) {
        ctx->pc = 0x13260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132608u;
        // 0x13260c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132610u;
        goto label_132610;
    }
    ctx->pc = 0x132608u;
    {
        const bool branch_taken_0x132608 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x132608) {
            ctx->pc = 0x13260Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132608u;
            // 0x13260c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1326B8u;
            goto label_1326b8;
        }
    }
    ctx->pc = 0x132610u;
label_132610:
    // 0x132610: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x132610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_132614:
    // 0x132614: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_132618:
    // 0x132618: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_13261c:
    if (ctx->pc == 0x13261Cu) {
        ctx->pc = 0x13261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132618u;
        // 0x13261c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x132620u;
        goto label_132620;
    }
    ctx->pc = 0x132618u;
    {
        const bool branch_taken_0x132618 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132618u;
        // 0x13261c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x132618) {
            ctx->pc = 0x132668u;
            goto label_132668;
        }
    }
    ctx->pc = 0x132620u;
label_132620:
    // 0x132620: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_132624:
    if (ctx->pc == 0x132624u) {
        ctx->pc = 0x132624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132620u;
        // 0x132624: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132628u;
        goto label_132628;
    }
    ctx->pc = 0x132620u;
    {
        const bool branch_taken_0x132620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132620u;
        // 0x132624: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132620) {
            ctx->pc = 0x132638u;
            goto label_132638;
        }
    }
    ctx->pc = 0x132628u;
label_132628:
    // 0x132628: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_13262c:
    if (ctx->pc == 0x13262Cu) {
        ctx->pc = 0x13262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132628u;
        // 0x13262c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132630u;
        goto label_132630;
    }
    ctx->pc = 0x132628u;
    {
        const bool branch_taken_0x132628 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x132628) {
            ctx->pc = 0x13262Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132628u;
            // 0x13262c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132648u;
            goto label_132648;
        }
    }
    ctx->pc = 0x132630u;
label_132630:
    // 0x132630: 0x1000001a  b           . + 4 + (0x1A << 2)
label_132634:
    if (ctx->pc == 0x132634u) {
        ctx->pc = 0x132634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132630u;
        // 0x132634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132638u;
        goto label_132638;
    }
    ctx->pc = 0x132630u;
    {
        const bool branch_taken_0x132630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132630u;
        // 0x132634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132630) {
            ctx->pc = 0x13269Cu;
            goto label_13269c;
        }
    }
    ctx->pc = 0x132638u;
label_132638:
    // 0x132638: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_13263c:
    if (ctx->pc == 0x13263Cu) {
        ctx->pc = 0x13263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132638u;
        // 0x13263c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132640u;
        goto label_132640;
    }
    ctx->pc = 0x132638u;
    {
        const bool branch_taken_0x132638 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132638u;
        // 0x13263c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132638) {
            ctx->pc = 0x132684u;
            goto label_132684;
        }
    }
    ctx->pc = 0x132640u;
label_132640:
    // 0x132640: 0x10000016  b           . + 4 + (0x16 << 2)
label_132644:
    if (ctx->pc == 0x132644u) {
        ctx->pc = 0x132648u;
        goto label_132648;
    }
    ctx->pc = 0x132640u;
    {
        const bool branch_taken_0x132640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x132640) {
            ctx->pc = 0x13269Cu;
            goto label_13269c;
        }
    }
    ctx->pc = 0x132648u;
label_132648:
    // 0x132648: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x132648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_13264c:
    // 0x13264c: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x13264cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_132650:
    // 0x132650: 0x40f809  jalr        $v0
label_132654:
    if (ctx->pc == 0x132654u) {
        ctx->pc = 0x132654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132650u;
        // 0x132654: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132658u;
        goto label_132658;
    }
    ctx->pc = 0x132650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x132658u);
        ctx->pc = 0x132654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132650u;
        // 0x132654: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132650u, 0x132658u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x132658u;
label_132658:
    // 0x132658: 0xc04b3f0  jal         func_12CFC0
label_13265c:
    if (ctx->pc == 0x13265Cu) {
        ctx->pc = 0x13265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132658u;
        // 0x13265c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132660u;
        goto label_132660;
    }
    ctx->pc = 0x132658u;
    SET_GPR_U32(ctx, 31, 0x132660u);
    ctx->pc = 0x13265Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132658u;
    // 0x13265c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CFC0u, 0x132658u, 0x132660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132660u;
label_132660:
    // 0x132660: 0x1000000e  b           . + 4 + (0xE << 2)
label_132664:
    if (ctx->pc == 0x132664u) {
        ctx->pc = 0x132664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132660u;
        // 0x132664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132668u;
        goto label_132668;
    }
    ctx->pc = 0x132660u;
    {
        const bool branch_taken_0x132660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132660u;
        // 0x132664: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132660) {
            ctx->pc = 0x13269Cu;
            goto label_13269c;
        }
    }
    ctx->pc = 0x132668u;
label_132668:
    // 0x132668: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x132668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_13266c:
    // 0x13266c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x13266cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_132670:
    // 0x132670: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x132670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_132674:
    // 0x132674: 0x40f809  jalr        $v0
label_132678:
    if (ctx->pc == 0x132678u) {
        ctx->pc = 0x132678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132674u;
        // 0x132678: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13267Cu;
        goto label_13267c;
    }
    ctx->pc = 0x132674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13267Cu);
        ctx->pc = 0x132678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132674u;
        // 0x132678: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132674u, 0x13267Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13267Cu;
label_13267c:
    // 0x13267c: 0x10000007  b           . + 4 + (0x7 << 2)
label_132680:
    if (ctx->pc == 0x132680u) {
        ctx->pc = 0x132680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13267Cu;
        // 0x132680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132684u;
        goto label_132684;
    }
    ctx->pc = 0x13267Cu;
    {
        const bool branch_taken_0x13267c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13267Cu;
        // 0x132680: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13267c) {
            ctx->pc = 0x13269Cu;
            goto label_13269c;
        }
    }
    ctx->pc = 0x132684u;
label_132684:
    // 0x132684: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x132684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_132688:
    // 0x132688: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x132688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_13268c:
    // 0x13268c: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x13268cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_132690:
    // 0x132690: 0x40f809  jalr        $v0
label_132694:
    if (ctx->pc == 0x132694u) {
        ctx->pc = 0x132694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132690u;
        // 0x132694: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132698u;
        goto label_132698;
    }
    ctx->pc = 0x132690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x132698u);
        ctx->pc = 0x132694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132690u;
        // 0x132694: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132690u, 0x132698u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x132698u;
label_132698:
    // 0x132698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13269c:
    // 0x13269c: 0xc04c7c8  jal         func_131F20
label_1326a0:
    if (ctx->pc == 0x1326A0u) {
        ctx->pc = 0x1326A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13269Cu;
        // 0x1326a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1326A4u;
        goto label_1326a4;
    }
    ctx->pc = 0x13269Cu;
    SET_GPR_U32(ctx, 31, 0x1326A4u);
    ctx->pc = 0x1326A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13269Cu;
    // 0x1326a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131F20u, 0x13269Cu, 0x1326A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1326A4u;
label_1326a4:
    // 0x1326a4: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
label_1326a8:
    if (ctx->pc == 0x1326A8u) {
        ctx->pc = 0x1326A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1326A4u;
        // 0x1326a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1326ACu;
        goto label_1326ac;
    }
    ctx->pc = 0x1326A4u;
    {
        const bool branch_taken_0x1326a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1326a4) {
            ctx->pc = 0x1326A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1326A4u;
            // 0x1326a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1326B8u;
            goto label_1326b8;
        }
    }
    ctx->pc = 0x1326ACu;
label_1326ac:
    // 0x1326ac: 0xc04c974  jal         func_1325D0
label_1326b0:
    if (ctx->pc == 0x1326B0u) {
        ctx->pc = 0x1326B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1326ACu;
        // 0x1326b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1326B4u;
        goto label_1326b4;
    }
    ctx->pc = 0x1326ACu;
    SET_GPR_U32(ctx, 31, 0x1326B4u);
    ctx->pc = 0x1326B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1326ACu;
    // 0x1326b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1325D0u;
    goto label_1325d0;
    ctx->pc = 0x1326B4u;
label_1326b4:
    // 0x1326b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1326b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1326b8:
    // 0x1326b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1326b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1326bc:
    // 0x1326bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1326bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1326c0:
    // 0x1326c0: 0x3e00008  jr          $ra
label_1326c4:
    if (ctx->pc == 0x1326C4u) {
        ctx->pc = 0x1326C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1326C0u;
        // 0x1326c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1326C8u;
        goto label_fallthrough_0x1326c0;
    }
    ctx->pc = 0x1326C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1326C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1326C0u;
        // 0x1326c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1326C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1326c0:
    ctx->pc = 0x1326C8u;
}

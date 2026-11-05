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

// Function: sub_002777F0
// Address: 0x2777f0 - 0x2778e8
void sub_002777F0_0x2777f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002777F0_0x2777f0");
#endif

    switch (ctx->pc) {
        case 0x27780cu: goto label_27780c;
        case 0x277830u: goto label_277830;
        case 0x277858u: goto label_277858;
        default: break;
    }

    ctx->pc = 0x2777f0u;

    // 0x2777f0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2777f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2777f4: 0x8cc2011c  lw          $v0, 0x11C($a2)
    ctx->pc = 0x2777f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 284)));
    // 0x2777f8: 0x8cc30110  lw          $v1, 0x110($a2)
    ctx->pc = 0x2777f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 272)));
    // 0x2777fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2777fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x277800: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x277800u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x277804: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x277804u;
    {
        const bool branch_taken_0x277804 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x277808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277804u;
        // 0x277808: 0x24ca0004  addiu       $t2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277804) {
            ctx->pc = 0x277814u;
            goto label_277814;
        }
    }
    ctx->pc = 0x27780Cu;
label_27780c:
    // 0x27780c: 0x3e00008  jr          $ra
    ctx->pc = 0x27780Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27780Cu;
        // 0x277810: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27780Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277814u;
label_277814:
    // 0x277814: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x277814u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277818: 0x140602d  daddu       $t4, $t2, $zero
    ctx->pc = 0x277818u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27781c: 0x240f000a  addiu       $t7, $zero, 0xA
    ctx->pc = 0x27781cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x277820: 0x240e0023  addiu       $t6, $zero, 0x23
    ctx->pc = 0x277820u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x277824: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x277824u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277828: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x277828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x27782c: 0x0  nop
    ctx->pc = 0x27782cu;
    // NOP
label_277830:
    // 0x277830: 0x8cc50110  lw          $a1, 0x110($a2)
    ctx->pc = 0x277830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 272)));
    // 0x277834: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x277834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x277838: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x277838u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27783c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x27783Cu;
    {
        const bool branch_taken_0x27783c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27783Cu;
        // 0x277840: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27783c) {
            ctx->pc = 0x277890u;
            goto label_277890;
        }
    }
    ctx->pc = 0x277844u;
    // 0x277844: 0x104f0013  beq         $v0, $t7, . + 4 + (0x13 << 2)
    ctx->pc = 0x277844u;
    {
        const bool branch_taken_0x277844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        ctx->pc = 0x277848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277844u;
        // 0x277848: 0x1871021  addu        $v0, $t4, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277844) {
            ctx->pc = 0x277894u;
            goto label_277894;
        }
    }
    ctx->pc = 0x27784Cu;
    // 0x27784c: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x27784cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277850: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x277850u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x277854: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x277854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_277858:
    // 0x277858: 0x1072021  addu        $a0, $t0, $a3
    ctx->pc = 0x277858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x27785c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x27785cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x277860: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x277860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x277864: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x277864u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x277868: 0xacc50110  sw          $a1, 0x110($a2)
    ctx->pc = 0x277868u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 272), GPR_U32(ctx, 5));
    // 0x27786c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x27786cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x277870: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x277870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x277874: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x277874u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x277878: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x277878u;
    {
        const bool branch_taken_0x277878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277878u;
        // 0x27787c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277878) {
            ctx->pc = 0x277890u;
            goto label_277890;
        }
    }
    ctx->pc = 0x277880u;
    // 0x277880: 0x10490003  beq         $v0, $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x277880u;
    {
        const bool branch_taken_0x277880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x277884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277880u;
        // 0x277884: 0x28e20100  slti        $v0, $a3, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x277880) {
            ctx->pc = 0x277890u;
            goto label_277890;
        }
    }
    ctx->pc = 0x277888u;
    // 0x277888: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x277888u;
    {
        const bool branch_taken_0x277888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27788Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277888u;
        // 0x27788c: 0x651021  addu        $v0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277888) {
            ctx->pc = 0x277858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277858;
        }
    }
    ctx->pc = 0x277890u;
label_277890:
    // 0x277890: 0x1871021  addu        $v0, $t4, $a3
    ctx->pc = 0x277890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 7)));
label_277894:
    // 0x277894: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x277894u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x277898: 0x8cc20120  lw          $v0, 0x120($a2)
    ctx->pc = 0x277898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 288)));
    // 0x27789c: 0x8cc30110  lw          $v1, 0x110($a2)
    ctx->pc = 0x27789cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 272)));
    // 0x2778a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2778a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2778a4: 0x80c40004  lb          $a0, 0x4($a2)
    ctx->pc = 0x2778a4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2778a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2778a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2778ac: 0xacc20120  sw          $v0, 0x120($a2)
    ctx->pc = 0x2778acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 288), GPR_U32(ctx, 2));
    // 0x2778b0: 0x108e0003  beq         $a0, $t6, . + 4 + (0x3 << 2)
    ctx->pc = 0x2778B0u;
    {
        const bool branch_taken_0x2778b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 14));
        ctx->pc = 0x2778B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2778B0u;
        // 0x2778b4: 0xacc30110  sw          $v1, 0x110($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 272), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2778b0) {
            ctx->pc = 0x2778C0u;
            goto label_2778c0;
        }
    }
    ctx->pc = 0x2778B8u;
    // 0x2778b8: 0x3882000d  xori        $v0, $a0, 0xD
    ctx->pc = 0x2778b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)13);
    // 0x2778bc: 0x1a2580b  movn        $t3, $t5, $v0
    ctx->pc = 0x2778bcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 11, GPR_VEC(ctx, 13));
label_2778c0:
    // 0x2778c0: 0x8cc2011c  lw          $v0, 0x11C($a2)
    ctx->pc = 0x2778c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 284)));
    // 0x2778c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2778c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2778c8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2778c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2778cc: 0x1040ffcf  beqz        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x2778CCu;
    {
        const bool branch_taken_0x2778cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2778cc) {
            ctx->pc = 0x27780Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27780c;
        }
    }
    ctx->pc = 0x2778D4u;
    // 0x2778d4: 0x5160ffd6  beql        $t3, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x2778D4u;
    {
        const bool branch_taken_0x2778d4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        if (branch_taken_0x2778d4) {
            ctx->pc = 0x2778D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2778D4u;
            // 0x2778d8: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x277830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277830;
        }
    }
    ctx->pc = 0x2778DCu;
    // 0x2778dc: 0xacc00114  sw          $zero, 0x114($a2)
    ctx->pc = 0x2778dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 276), GPR_U32(ctx, 0));
    // 0x2778e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2778E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2778E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2778E0u;
        // 0x2778e4: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2778E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2778E8u;
}

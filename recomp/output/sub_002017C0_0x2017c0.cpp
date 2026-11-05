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

// Function: sub_002017C0
// Address: 0x2017c0 - 0x201850
void sub_002017C0_0x2017c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002017C0_0x2017c0");
#endif

    switch (ctx->pc) {
        case 0x2017e0u: goto label_2017e0;
        case 0x2017f8u: goto label_2017f8;
        default: break;
    }

    ctx->pc = 0x2017c0u;

    // 0x2017c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2017c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2017c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2017c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2017c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2017c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2017cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2017ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2017d0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2017d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2017d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2017d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2017d8: 0xc0b6750  jal         func_2D9D40
    ctx->pc = 0x2017D8u;
    SET_GPR_U32(ctx, 31, 0x2017E0u);
    ctx->pc = 0x2017DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2017D8u;
    // 0x2017dc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9D40u, 0x2017D8u, 0x2017E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2017E0u;
label_2017e0:
    // 0x2017e0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2017e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2017e4: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x2017e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x2017e8: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2017E8u;
    {
        const bool branch_taken_0x2017e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2017ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2017E8u;
        // 0x2017ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2017e8) {
            ctx->pc = 0x201834u;
            goto label_201834;
        }
    }
    ctx->pc = 0x2017F0u;
    // 0x2017f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2017f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2017f4: 0x0  nop
    ctx->pc = 0x2017f4u;
    // NOP
label_2017f8:
    // 0x2017f8: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x2017f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2017fc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2017fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x201800: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x201800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x201804: 0x54c30007  bnel        $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x201804u;
    {
        const bool branch_taken_0x201804 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x201804) {
            ctx->pc = 0x201808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x201804u;
            // 0x201808: 0x8e020108  lw          $v0, 0x108($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x201824u;
            goto label_201824;
        }
    }
    ctx->pc = 0x20180Cu;
    // 0x20180c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x20180cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x201810: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x201810u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x201814: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x201814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x201818: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x201818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x20181c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20181Cu;
    {
        const bool branch_taken_0x20181c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20181Cu;
        // 0x201820: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20181c) {
            ctx->pc = 0x20183Cu;
            goto label_20183c;
        }
    }
    ctx->pc = 0x201824u;
label_201824:
    // 0x201824: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x201824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x201828: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x201828u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x20182c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x20182Cu;
    {
        const bool branch_taken_0x20182c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20182Cu;
        // 0x201830: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20182c) {
            ctx->pc = 0x2017F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2017f8;
        }
    }
    ctx->pc = 0x201834u;
label_201834:
    // 0x201834: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x201834u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x201838: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x201838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20183c:
    // 0x20183c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20183cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201840: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x201840u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x201844: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x201844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201848: 0x3e00008  jr          $ra
    ctx->pc = 0x201848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20184Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201848u;
        // 0x20184c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201850u;
}

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

// Function: sub_003A6530
// Address: 0x3a6530 - 0x3a65a0
void sub_003A6530_0x3a6530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6530_0x3a6530");
#endif

    switch (ctx->pc) {
        case 0x3a6544u: goto label_3a6544;
        case 0x3a6568u: goto label_3a6568;
        default: break;
    }

    ctx->pc = 0x3a6530u;

    // 0x3a6530: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a6530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a6534: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a6534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a6538: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3a6538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3a653c: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3A653Cu;
    SET_GPR_U32(ctx, 31, 0x3A6544u);
    ctx->pc = 0x3A6540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A653Cu;
    // 0x3a6540: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3A653Cu, 0x3A6544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6544u;
label_3a6544:
    // 0x3a6544: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3a6544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6548: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3a6548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3a654c: 0x2cc30011  sltiu       $v1, $a2, 0x11
    ctx->pc = 0x3a654cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x3a6550: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x3a6550u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x3a6554: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x3A6554u;
    {
        const bool branch_taken_0x3a6554 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6554u;
        // 0x3a6558: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6554) {
            ctx->pc = 0x3A658Cu;
            goto label_3a658c;
        }
    }
    ctx->pc = 0x3A655Cu;
    // 0x3a655c: 0x2407003a  addiu       $a3, $zero, 0x3A
    ctx->pc = 0x3a655cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x3a6560: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x3a6560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x3a6564: 0x0  nop
    ctx->pc = 0x3a6564u;
    // NOP
label_3a6568:
    // 0x3a6568: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3a6568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a656c: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x3a656cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a6570: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a6570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a6574: 0x10670006  beq         $v1, $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A6574u;
    {
        const bool branch_taken_0x3a6574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x3A6578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6574u;
        // 0x3a6578: 0xa6202b  sltu        $a0, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6574) {
            ctx->pc = 0x3A6590u;
            goto label_3a6590;
        }
    }
    ctx->pc = 0x3A657Cu;
    // 0x3a657c: 0x0  nop
    ctx->pc = 0x3a657cu;
    // NOP
    // 0x3a6580: 0x0  nop
    ctx->pc = 0x3a6580u;
    // NOP
    // 0x3a6584: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3A6584u;
    {
        const bool branch_taken_0x3a6584 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6584u;
        // 0x3a6588: 0x2051021  addu        $v0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6584) {
            ctx->pc = 0x3A6568u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6568;
        }
    }
    ctx->pc = 0x3A658Cu;
label_3a658c:
    // 0x3a658c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a658cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a6590:
    // 0x3a6590: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a6590u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a6594: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a6594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a6598: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6598u;
        // 0x3a659c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A65A0u;
}

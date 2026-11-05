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

// Function: sub_00394908
// Address: 0x394908 - 0x394968
void sub_00394908_0x394908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00394908_0x394908");
#endif

    switch (ctx->pc) {
        case 0x39492cu: goto label_39492c;
        default: break;
    }

    ctx->pc = 0x394908u;

    // 0x394908: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x394908u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x39490c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x39490cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x394910: 0x24c3e208  addiu       $v1, $a2, -0x1DF8
    ctx->pc = 0x394910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959624));
    // 0x394914: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x394914u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x3FE208u));
    // 0x394918: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x394918u;
    {
        const bool branch_taken_0x394918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394918u;
        // 0x39491c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394918) {
            ctx->pc = 0x394928u;
            goto label_394928;
        }
    }
    ctx->pc = 0x394920u;
    // 0x394920: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x394920u;
    {
        const bool branch_taken_0x394920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394920u;
        // 0x394924: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394920) {
            ctx->pc = 0x394960u;
            goto label_394960;
        }
    }
    ctx->pc = 0x394928u;
label_394928:
    // 0x394928: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x394928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_39492c:
    // 0x39492c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x39492cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x394930: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x394930u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x394934: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x394934u;
    {
        const bool branch_taken_0x394934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x394938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394934u;
        // 0x394938: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394934) {
            ctx->pc = 0x394960u;
            goto label_394960;
        }
    }
    ctx->pc = 0x39493Cu;
    // 0x39493c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x39493cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x394940: 0x24c4e208  addiu       $a0, $a2, -0x1DF8
    ctx->pc = 0x394940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959624));
    // 0x394944: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x394944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x394948: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x394948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x39494c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x39494cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x394950: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x394950u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x394954: 0x5460fff5  bnel        $v1, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x394954u;
    {
        const bool branch_taken_0x394954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x394954) {
            ctx->pc = 0x394958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394954u;
            // 0x394958: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39492Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39492c;
        }
    }
    ctx->pc = 0x39495Cu;
    // 0x39495c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x39495cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_394960:
    // 0x394960: 0x3e00008  jr          $ra
    ctx->pc = 0x394960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394960u;
        // 0x394964: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x394968u;
}

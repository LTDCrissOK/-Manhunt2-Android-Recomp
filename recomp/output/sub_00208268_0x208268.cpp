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

// Function: sub_00208268
// Address: 0x208268 - 0x2082d0
void sub_00208268_0x208268(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208268_0x208268");
#endif

    switch (ctx->pc) {
        case 0x208278u: goto label_208278;
        case 0x208298u: goto label_208298;
        default: break;
    }

    ctx->pc = 0x208268u;

    // 0x208268: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x208268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20826c: 0x248b338c  addiu       $t3, $a0, 0x338C
    ctx->pc = 0x20826cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 13196));
    // 0x208270: 0x248a3384  addiu       $t2, $a0, 0x3384
    ctx->pc = 0x208270u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 13188));
    // 0x208274: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x208274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_208278:
    // 0x208278: 0x24a90001  addiu       $t1, $a1, 0x1
    ctx->pc = 0x208278u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x20827c: 0x1431021  addu        $v0, $t2, $v1
    ctx->pc = 0x20827cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x208280: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x208280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x208284: 0x18c0000b  blez        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x208284u;
    {
        const bool branch_taken_0x208284 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x208288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208284u;
        // 0x208288: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208284) {
            ctx->pc = 0x2082B4u;
            goto label_2082b4;
        }
    }
    ctx->pc = 0x20828Cu;
    // 0x20828c: 0x1633821  addu        $a3, $t3, $v1
    ctx->pc = 0x20828cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x208290: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x208290u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x208294: 0x0  nop
    ctx->pc = 0x208294u;
    // NOP
label_208298:
    // 0x208298: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x208298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x20829c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x20829cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2082a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2082a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2082a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2082a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2082a8: 0xa6202a  slt         $a0, $a1, $a2
    ctx->pc = 0x2082a8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2082ac: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2082ACu;
    {
        const bool branch_taken_0x2082ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2082B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082ACu;
        // 0x2082b0: 0xa068000c  sb          $t0, 0xC($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2082ac) {
            ctx->pc = 0x208298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208298;
        }
    }
    ctx->pc = 0x2082B4u;
label_2082b4:
    // 0x2082b4: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x2082b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2082b8: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x2082b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2082bc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2082BCu;
    {
        const bool branch_taken_0x2082bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2082C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082BCu;
        // 0x2082c0: 0x51900  sll         $v1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2082bc) {
            ctx->pc = 0x208278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208278;
        }
    }
    ctx->pc = 0x2082C4u;
    // 0x2082c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2082C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2082C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2082CCu;
    // 0x2082cc: 0x0  nop
    ctx->pc = 0x2082ccu;
    // NOP
    ctx->pc = 0x2082d0u;
}

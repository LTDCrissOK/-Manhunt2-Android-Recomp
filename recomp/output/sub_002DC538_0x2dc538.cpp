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

// Function: sub_002DC538
// Address: 0x2dc538 - 0x2dc570
void sub_002DC538_0x2dc538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC538_0x2dc538");
#endif

    switch (ctx->pc) {
        case 0x2dc550u: goto label_2dc550;
        default: break;
    }

    ctx->pc = 0x2dc538u;

    // 0x2dc538: 0x94820490  lhu         $v0, 0x490($a0)
    ctx->pc = 0x2dc538u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1168)));
    // 0x2dc53c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2DC53Cu;
    {
        const bool branch_taken_0x2dc53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC53Cu;
        // 0x2dc540: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc53c) {
            ctx->pc = 0x2DC568u;
            goto label_2dc568;
        }
    }
    ctx->pc = 0x2DC544u;
    // 0x2dc544: 0x24840490  addiu       $a0, $a0, 0x490
    ctx->pc = 0x2dc544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1168));
    // 0x2dc548: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2dc548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2dc54c: 0x0  nop
    ctx->pc = 0x2dc54cu;
    // NOP
label_2dc550:
    // 0x2dc550: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x2dc550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2dc554: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DC554u;
    {
        const bool branch_taken_0x2dc554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC554u;
        // 0x2dc558: 0x24840400  addiu       $a0, $a0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc554) {
            ctx->pc = 0x2DC568u;
            goto label_2dc568;
        }
    }
    ctx->pc = 0x2DC55Cu;
    // 0x2dc55c: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2dc55cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dc560: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2DC560u;
    {
        const bool branch_taken_0x2dc560 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc560) {
            ctx->pc = 0x2DC564u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC560u;
            // 0x2dc564: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc550;
        }
    }
    ctx->pc = 0x2DC568u;
label_2dc568:
    // 0x2dc568: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC568u;
        // 0x2dc56c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC570u;
}

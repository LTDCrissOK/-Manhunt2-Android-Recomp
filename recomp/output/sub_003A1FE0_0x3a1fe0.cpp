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

// Function: sub_003A1FE0
// Address: 0x3a1fe0 - 0x3a2048
void sub_003A1FE0_0x3a1fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1FE0_0x3a1fe0");
#endif

    switch (ctx->pc) {
        case 0x3a2000u: goto label_3a2000;
        default: break;
    }

    ctx->pc = 0x3a1fe0u;

    // 0x3a1fe0: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3a1fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x3a1fe4: 0x24a26628  addiu       $v0, $a1, 0x6628
    ctx->pc = 0x3a1fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 26152));
    // 0x3a1fe8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x3a1fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x3a1fec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3a1fecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x65662Cu));
    // 0x3a1ff0: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x3A1FF0u;
    {
        const bool branch_taken_0x3a1ff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1FF0u;
        // 0x3a1ff4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1ff0) {
            ctx->pc = 0x3A2024u;
            goto label_3a2024;
        }
    }
    ctx->pc = 0x3A1FF8u;
    // 0x3a1ff8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3a1ff8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1ffc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a1ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3a2000:
    // 0x3a2000: 0x28820028  slti        $v0, $a0, 0x28
    ctx->pc = 0x3a2000u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)40) ? 1 : 0);
    // 0x3a2004: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A2004u;
    {
        const bool branch_taken_0x3a2004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2004u;
        // 0x3a2008: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2004) {
            ctx->pc = 0x3A2024u;
            goto label_3a2024;
        }
    }
    ctx->pc = 0x3A200Cu;
    // 0x3a200c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3a200cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a2010: 0x0  nop
    ctx->pc = 0x3a2010u;
    // NOP
    // 0x3a2014: 0x0  nop
    ctx->pc = 0x3a2014u;
    // NOP
    // 0x3a2018: 0x0  nop
    ctx->pc = 0x3a2018u;
    // NOP
    // 0x3a201c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3A201Cu;
    {
        const bool branch_taken_0x3a201c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a201c) {
            ctx->pc = 0x3A2020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A201Cu;
            // 0x3a2020: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A2000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a2000;
        }
    }
    ctx->pc = 0x3A2024u;
label_3a2024:
    // 0x3a2024: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x3a2024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3a2028: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A2028u;
    {
        const bool branch_taken_0x3a2028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A202Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2028u;
        // 0x3a202c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2028) {
            ctx->pc = 0x3A203Cu;
            goto label_3a203c;
        }
    }
    ctx->pc = 0x3A2030u;
    // 0x3a2030: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3a2030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3a2034: 0x24a26628  addiu       $v0, $a1, 0x6628
    ctx->pc = 0x3a2034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 26152));
    // 0x3a2038: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3a2038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3a203c:
    // 0x3a203c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A203Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A203Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2044u;
    // 0x3a2044: 0x0  nop
    ctx->pc = 0x3a2044u;
    // NOP
    ctx->pc = 0x3a2048u;
}

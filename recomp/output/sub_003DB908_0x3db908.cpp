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

// Function: sub_003DB908
// Address: 0x3db908 - 0x3db968
void sub_003DB908_0x3db908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB908_0x3db908");
#endif

    switch (ctx->pc) {
        case 0x3db920u: goto label_3db920;
        default: break;
    }

    ctx->pc = 0x3db908u;

    // 0x3db908: 0x9487000c  lhu         $a3, 0xC($a0)
    ctx->pc = 0x3db908u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3db90c: 0x10e00013  beqz        $a3, . + 4 + (0x13 << 2)
    ctx->pc = 0x3DB90Cu;
    {
        const bool branch_taken_0x3db90c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB90Cu;
        // 0x3db910: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db90c) {
            ctx->pc = 0x3DB95Cu;
            goto label_3db95c;
        }
    }
    ctx->pc = 0x3DB914u;
    // 0x3db914: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x3db914u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3db918: 0x24090050  addiu       $t1, $zero, 0x50
    ctx->pc = 0x3db918u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x3db91c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x3db91cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3db920:
    // 0x3db920: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x3db920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3db924: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3db924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3db928: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3DB928u;
    {
        const bool branch_taken_0x3db928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB928u;
        // 0x3db92c: 0xc91818  mult        $v1, $a2, $t1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db928) {
            ctx->pc = 0x3DB948u;
            goto label_3db948;
        }
    }
    ctx->pc = 0x3DB930u;
    // 0x3db930: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3db930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3db934: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3db934u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3db938: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DB938u;
    {
        const bool branch_taken_0x3db938 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3DB93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB938u;
        // 0x3db93c: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db938) {
            ctx->pc = 0x3DB94Cu;
            goto label_3db94c;
        }
    }
    ctx->pc = 0x3DB940u;
    // 0x3db940: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB940u;
        // 0x3db944: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB948u;
label_3db948:
    // 0x3db948: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x3db948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3db94c:
    // 0x3db94c: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x3db94cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3db950: 0xc7182b  sltu        $v1, $a2, $a3
    ctx->pc = 0x3db950u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x3db954: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x3DB954u;
    {
        const bool branch_taken_0x3db954 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DB958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB954u;
        // 0x3db958: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db954) {
            ctx->pc = 0x3DB920u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3db920;
        }
    }
    ctx->pc = 0x3DB95Cu;
label_3db95c:
    // 0x3db95c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB95Cu;
        // 0x3db960: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB95Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB964u;
    // 0x3db964: 0x0  nop
    ctx->pc = 0x3db964u;
    // NOP
    ctx->pc = 0x3db968u;
}

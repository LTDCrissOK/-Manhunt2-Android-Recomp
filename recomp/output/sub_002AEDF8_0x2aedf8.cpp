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

// Function: sub_002AEDF8
// Address: 0x2aedf8 - 0x2aee58
void sub_002AEDF8_0x2aedf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AEDF8_0x2aedf8");
#endif

    switch (ctx->pc) {
        case 0x2aee08u: goto label_2aee08;
        case 0x2aee18u: goto label_2aee18;
        default: break;
    }

    ctx->pc = 0x2aedf8u;

    // 0x2aedf8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2aedf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2aedfc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2aedfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee00: 0x2446cb60  addiu       $a2, $v0, -0x34A0
    ctx->pc = 0x2aee00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953824));
    // 0x2aee04: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x2aee04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_2aee08:
    // 0x2aee08: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x2aee08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2aee0c: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x2aee0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2aee10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2aee10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee14: 0x0  nop
    ctx->pc = 0x2aee14u;
    // NOP
label_2aee18:
    // 0x2aee18: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2aee18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2aee1c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2aee1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2aee20: 0x2c820008  sltiu       $v0, $a0, 0x8
    ctx->pc = 0x2aee20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2aee24: 0x0  nop
    ctx->pc = 0x2aee24u;
    // NOP
    // 0x2aee28: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2AEE28u;
    {
        const bool branch_taken_0x2aee28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AEE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEE28u;
        // 0x2aee2c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aee28) {
            ctx->pc = 0x2AEE18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aee18;
        }
    }
    ctx->pc = 0x2AEE30u;
    // 0x2aee30: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2aee30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee34: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2aee34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2aee38: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2AEE38u;
    {
        const bool branch_taken_0x2aee38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AEE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEE38u;
        // 0x2aee3c: 0x31140  sll         $v0, $v1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aee38) {
            ctx->pc = 0x2AEE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aee08;
        }
    }
    ctx->pc = 0x2AEE40u;
    // 0x2aee40: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2aee40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2aee44: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2aee44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2aee48: 0xac40aa78  sw          $zero, -0x5588($v0)
    ctx->pc = 0x2aee48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FAA78u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FAA78u, _value); } while (0);
    // 0x2aee4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEE4Cu;
        // 0x2aee50: 0xa060aa84  sb          $zero, -0x557C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294945412), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEE4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEE54u;
    // 0x2aee54: 0x0  nop
    ctx->pc = 0x2aee54u;
    // NOP
    ctx->pc = 0x2aee58u;
}

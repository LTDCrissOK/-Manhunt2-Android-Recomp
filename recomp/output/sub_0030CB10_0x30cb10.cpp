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

// Function: sub_0030CB10
// Address: 0x30cb10 - 0x30cb60
void sub_0030CB10_0x30cb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030CB10_0x30cb10");
#endif

    switch (ctx->pc) {
        case 0x30cb30u: goto label_30cb30;
        case 0x30cb38u: goto label_30cb38;
        default: break;
    }

    ctx->pc = 0x30cb10u;

    // 0x30cb10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30cb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30cb14: 0x24820014  addiu       $v0, $a0, 0x14
    ctx->pc = 0x30cb14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x30cb18: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30cb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30cb1c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30cb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30cb20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30cb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30cb24: 0x8c900014  lw          $s0, 0x14($a0)
    ctx->pc = 0x30cb24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x30cb28: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30CB28u;
    {
        const bool branch_taken_0x30cb28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x30CB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB28u;
        // 0x30cb2c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cb28) {
            ctx->pc = 0x30CB48u;
            goto label_30cb48;
        }
    }
    ctx->pc = 0x30CB30u;
label_30cb30:
    // 0x30cb30: 0xc0c24e0  jal         func_309380
    ctx->pc = 0x30CB30u;
    SET_GPR_U32(ctx, 31, 0x30CB38u);
    ctx->pc = 0x30CB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CB30u;
    // 0x30cb34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x309380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309380u, 0x30CB30u, 0x30CB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CB38u;
label_30cb38:
    // 0x30cb38: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x30cb38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30cb3c: 0x0  nop
    ctx->pc = 0x30cb3cu;
    // NOP
    // 0x30cb40: 0x1611fffb  bne         $s0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x30CB40u;
    {
        const bool branch_taken_0x30cb40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x30cb40) {
            ctx->pc = 0x30CB30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30cb30;
        }
    }
    ctx->pc = 0x30CB48u;
label_30cb48:
    // 0x30cb48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30cb48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30cb4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30cb4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30cb50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30cb50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30cb54: 0x3e00008  jr          $ra
    ctx->pc = 0x30CB54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30CB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CB54u;
        // 0x30cb58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CB54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CB5Cu;
    // 0x30cb5c: 0x0  nop
    ctx->pc = 0x30cb5cu;
    // NOP
    ctx->pc = 0x30cb60u;
}

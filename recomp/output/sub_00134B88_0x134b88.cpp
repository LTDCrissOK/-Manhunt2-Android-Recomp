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

// Function: sub_00134B88
// Address: 0x134b88 - 0x134be8
void sub_00134B88_0x134b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134B88_0x134b88");
#endif

    switch (ctx->pc) {
        case 0x134ba8u: goto label_134ba8;
        case 0x134bb0u: goto label_134bb0;
        default: break;
    }

    ctx->pc = 0x134b88u;

    // 0x134b88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x134b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x134b8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x134b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x134b90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x134b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x134b94: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x134b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134b98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x134b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x134b9c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x134b9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134ba0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x134ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134ba4: 0x0  nop
    ctx->pc = 0x134ba4u;
    // NOP
label_134ba8:
    // 0x134ba8: 0xc04d2fa  jal         func_134BE8
    ctx->pc = 0x134BA8u;
    SET_GPR_U32(ctx, 31, 0x134BB0u);
    ctx->pc = 0x134BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134BA8u;
    // 0x134bac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134BE8u, 0x134BA8u, 0x134BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134BB0u;
label_134bb0:
    // 0x134bb0: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x134bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x134bb4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x134bb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x134bb8: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x134bb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x134bbc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x134BBCu;
    {
        const bool branch_taken_0x134bbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x134BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134BBCu;
        // 0x134bc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134bbc) {
            ctx->pc = 0x134BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134ba8;
        }
    }
    ctx->pc = 0x134BC4u;
    // 0x134bc4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x134bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134bc8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x134bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x134bcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x134bccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134bd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x134bd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x134bd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x134bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134bd8: 0xac430774  sw          $v1, 0x774($v0)
    ctx->pc = 0x134bd8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3F0774u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F0774u, _value); } while (0);
    // 0x134bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x134BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134BDCu;
        // 0x134be0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134BE4u;
    // 0x134be4: 0x0  nop
    ctx->pc = 0x134be4u;
    // NOP
    ctx->pc = 0x134be8u;
}

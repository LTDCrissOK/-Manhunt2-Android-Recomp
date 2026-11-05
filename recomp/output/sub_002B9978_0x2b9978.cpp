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

// Function: sub_002B9978
// Address: 0x2b9978 - 0x2b99c0
void sub_002B9978_0x2b9978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9978_0x2b9978");
#endif

    switch (ctx->pc) {
        case 0x2b9990u: goto label_2b9990;
        case 0x2b999cu: goto label_2b999c;
        default: break;
    }

    ctx->pc = 0x2b9978u;

    // 0x2b9978: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b9978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b997c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b997cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b9980: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b9980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b9984: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b9984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9988: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b9988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b998c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b998cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9990:
    // 0x2b9990: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b9990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9994: 0xc0ae700  jal         func_2B9C00
    ctx->pc = 0x2B9994u;
    SET_GPR_U32(ctx, 31, 0x2B999Cu);
    ctx->pc = 0x2B9998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9994u;
    // 0x2b9998: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9C00u, 0x2B9994u, 0x2B999Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B999Cu;
label_2b999c:
    // 0x2b999c: 0x0  nop
    ctx->pc = 0x2b999cu;
    // NOP
    // 0x2b99a0: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2B99A0u;
    {
        const bool branch_taken_0x2b99a0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2B99A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99A0u;
        // 0x2b99a4: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b99a0) {
            ctx->pc = 0x2B9990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b9990;
        }
    }
    ctx->pc = 0x2B99A8u;
    // 0x2b99a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b99a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b99ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b99acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b99b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b99b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b99b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B99B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B99B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B99B4u;
        // 0x2b99b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B99B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B99BCu;
    // 0x2b99bc: 0x0  nop
    ctx->pc = 0x2b99bcu;
    // NOP
    ctx->pc = 0x2b99c0u;
}

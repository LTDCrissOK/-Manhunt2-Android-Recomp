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

// Function: sub_0010EDB8
// Address: 0x10edb8 - 0x10ee00
void sub_0010EDB8_0x10edb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EDB8_0x10edb8");
#endif

    switch (ctx->pc) {
        case 0x10ede8u: goto label_10ede8;
        default: break;
    }

    ctx->pc = 0x10edb8u;

    // 0x10edb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10edb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10edbc: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x10edbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x10edc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10edc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10edc4: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x10edc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x10edc8: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x10edc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x10edcc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10edccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x10edd0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10edd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x10edd4: 0x8c440108  lw          $a0, 0x108($v0)
    ctx->pc = 0x10edd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x10edd8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10EDD8u;
    {
        const bool branch_taken_0x10edd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDD8u;
        // 0x10eddc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10edd8) {
            ctx->pc = 0x10EDF0u;
            goto label_10edf0;
        }
    }
    ctx->pc = 0x10EDE0u;
    // 0x10ede0: 0xc08dacc  jal         func_236B30
    ctx->pc = 0x10EDE0u;
    SET_GPR_U32(ctx, 31, 0x10EDE8u);
    ctx->pc = 0x236B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236B30u, 0x10EDE0u, 0x10EDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10EDE8u;
label_10ede8:
    // 0x10ede8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10EDE8u;
    {
        const bool branch_taken_0x10ede8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDE8u;
        // 0x10edec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ede8) {
            ctx->pc = 0x10EDF4u;
            goto label_10edf4;
        }
    }
    ctx->pc = 0x10EDF0u;
label_10edf0:
    // 0x10edf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10edf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10edf4:
    // 0x10edf4: 0x3e00008  jr          $ra
    ctx->pc = 0x10EDF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EDF4u;
        // 0x10edf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EDF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EDFCu;
    // 0x10edfc: 0x0  nop
    ctx->pc = 0x10edfcu;
    // NOP
    ctx->pc = 0x10ee00u;
}

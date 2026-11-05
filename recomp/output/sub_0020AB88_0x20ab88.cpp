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

// Function: sub_0020AB88
// Address: 0x20ab88 - 0x20abd0
void sub_0020AB88_0x20ab88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020AB88_0x20ab88");
#endif

    switch (ctx->pc) {
        case 0x20abb0u: goto label_20abb0;
        case 0x20abc0u: goto label_20abc0;
        default: break;
    }

    ctx->pc = 0x20ab88u;

    // 0x20ab88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20ab88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20ab8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20ab8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20ab90: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x20ab90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20ab94: 0x41027  nor         $v0, $zero, $a0
    ctx->pc = 0x20ab94u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x20ab98: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x20AB98u;
    {
        const bool branch_taken_0x20ab98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AB98u;
        // 0x20ab9c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ab98) {
            ctx->pc = 0x20ABC4u;
            goto label_20abc4;
        }
    }
    ctx->pc = 0x20ABA0u;
    // 0x20aba0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x20ABA0u;
    {
        const bool branch_taken_0x20aba0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x20aba0) {
            ctx->pc = 0x20ABB8u;
            goto label_20abb8;
        }
    }
    ctx->pc = 0x20ABA8u;
    // 0x20aba8: 0xc0e12fc  jal         func_384BF0
    ctx->pc = 0x20ABA8u;
    SET_GPR_U32(ctx, 31, 0x20ABB0u);
    ctx->pc = 0x384BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384BF0u, 0x20ABA8u, 0x20ABB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ABB0u;
label_20abb0:
    // 0x20abb0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20ABB0u;
    {
        const bool branch_taken_0x20abb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABB0u;
        // 0x20abb4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20abb0) {
            ctx->pc = 0x20ABC4u;
            goto label_20abc4;
        }
    }
    ctx->pc = 0x20ABB8u;
label_20abb8:
    // 0x20abb8: 0xc0e132e  jal         func_384CB8
    ctx->pc = 0x20ABB8u;
    SET_GPR_U32(ctx, 31, 0x20ABC0u);
    ctx->pc = 0x384CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x384CB8u, 0x20ABB8u, 0x20ABC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20ABC0u;
label_20abc0:
    // 0x20abc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20abc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20abc4:
    // 0x20abc4: 0x3e00008  jr          $ra
    ctx->pc = 0x20ABC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20ABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20ABC4u;
        // 0x20abc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20ABC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20ABCCu;
    // 0x20abcc: 0x0  nop
    ctx->pc = 0x20abccu;
    // NOP
    ctx->pc = 0x20abd0u;
}

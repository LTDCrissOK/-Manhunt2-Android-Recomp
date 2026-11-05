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

// Function: sub_0022A608
// Address: 0x22a608 - 0x22a650
void sub_0022A608_0x22a608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A608_0x22a608");
#endif

    switch (ctx->pc) {
        case 0x22a62cu: goto label_22a62c;
        default: break;
    }

    ctx->pc = 0x22a608u;

    // 0x22a608: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22a608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22a60c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22a60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22a610: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x22a610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x22a614: 0x8c82036c  lw          $v0, 0x36C($a0)
    ctx->pc = 0x22a614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 876)));
    // 0x22a618: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x22a618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x22a61c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22A61Cu;
    {
        const bool branch_taken_0x22a61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A61Cu;
        // 0x22a620: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a61c) {
            ctx->pc = 0x22A634u;
            goto label_22a634;
        }
    }
    ctx->pc = 0x22A624u;
    // 0x22a624: 0xc08f972  jal         func_23E5C8
    ctx->pc = 0x22A624u;
    SET_GPR_U32(ctx, 31, 0x22A62Cu);
    ctx->pc = 0x23E5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E5C8u, 0x22A624u, 0x22A62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22A62Cu;
label_22a62c:
    // 0x22a62c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22A62Cu;
    {
        const bool branch_taken_0x22a62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A62Cu;
        // 0x22a630: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a62c) {
            ctx->pc = 0x22A63Cu;
            goto label_22a63c;
        }
    }
    ctx->pc = 0x22A634u;
label_22a634:
    // 0x22a634: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x22a634u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22a638: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22a638u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22a63c:
    // 0x22a63c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x22a63cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22a640: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22a640u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a644: 0x3e00008  jr          $ra
    ctx->pc = 0x22A644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A644u;
        // 0x22a648: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22A64Cu;
    // 0x22a64c: 0x0  nop
    ctx->pc = 0x22a64cu;
    // NOP
    ctx->pc = 0x22a650u;
}

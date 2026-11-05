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

// Function: sub_0028E930
// Address: 0x28e930 - 0x28e968
void sub_0028E930_0x28e930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028E930_0x28e930");
#endif

    switch (ctx->pc) {
        case 0x28e940u: goto label_28e940;
        case 0x28e958u: goto label_28e958;
        default: break;
    }

    ctx->pc = 0x28e930u;

    // 0x28e930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28e930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28e934: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28e934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28e938: 0xc0a3948  jal         func_28E520
    ctx->pc = 0x28E938u;
    SET_GPR_U32(ctx, 31, 0x28E940u);
    ctx->pc = 0x28E520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E520u, 0x28E938u, 0x28E940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E940u;
label_28e940:
    // 0x28e940: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28E940u;
    {
        const bool branch_taken_0x28e940 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e940) {
            ctx->pc = 0x28E950u;
            goto label_28e950;
        }
    }
    ctx->pc = 0x28E948u;
    // 0x28e948: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28E948u;
    {
        const bool branch_taken_0x28e948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E948u;
        // 0x28e94c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e948) {
            ctx->pc = 0x28E958u;
            goto label_28e958;
        }
    }
    ctx->pc = 0x28E950u;
label_28e950:
    // 0x28e950: 0xc0a3782  jal         func_28DE08
    ctx->pc = 0x28E950u;
    SET_GPR_U32(ctx, 31, 0x28E958u);
    ctx->pc = 0x28E954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28E950u;
    // 0x28e954: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE08u, 0x28E950u, 0x28E958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28E958u;
label_28e958:
    // 0x28e958: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28e958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28e95c: 0x3e00008  jr          $ra
    ctx->pc = 0x28E95Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28E95Cu;
        // 0x28e960: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28E95Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28E964u;
    // 0x28e964: 0x0  nop
    ctx->pc = 0x28e964u;
    // NOP
    ctx->pc = 0x28e968u;
}

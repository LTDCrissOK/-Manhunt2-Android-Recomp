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

// Function: sub_0010E950
// Address: 0x10e950 - 0x10e980
void sub_0010E950_0x10e950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E950_0x10e950");
#endif

    switch (ctx->pc) {
        case 0x10e96cu: goto label_10e96c;
        default: break;
    }

    ctx->pc = 0x10e950u;

    // 0x10e950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10e950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10e954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10e958: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x10e958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x10e95c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10E95Cu;
    {
        const bool branch_taken_0x10e95c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E95Cu;
        // 0x10e960: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e95c) {
            ctx->pc = 0x10E974u;
            goto label_10e974;
        }
    }
    ctx->pc = 0x10E964u;
    // 0x10e964: 0xc042380  jal         func_108E00
    ctx->pc = 0x10E964u;
    SET_GPR_U32(ctx, 31, 0x10E96Cu);
    ctx->pc = 0x108E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108E00u, 0x10E964u, 0x10E96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E96Cu;
label_10e96c:
    // 0x10e96c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10E96Cu;
    {
        const bool branch_taken_0x10e96c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E96Cu;
        // 0x10e970: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e96c) {
            ctx->pc = 0x10E978u;
            goto label_10e978;
        }
    }
    ctx->pc = 0x10E974u;
label_10e974:
    // 0x10e974: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10e978:
    // 0x10e978: 0x3e00008  jr          $ra
    ctx->pc = 0x10E978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E978u;
        // 0x10e97c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E980u;
}

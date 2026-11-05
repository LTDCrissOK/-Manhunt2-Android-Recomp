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

// Function: sub_0039B938
// Address: 0x39b938 - 0x39b980
void sub_0039B938_0x39b938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039B938_0x39b938");
#endif

    switch (ctx->pc) {
        case 0x39b950u: goto label_39b950;
        default: break;
    }

    ctx->pc = 0x39b938u;

    // 0x39b938: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39b938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39b93c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39B93Cu;
    {
        const bool branch_taken_0x39b93c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x39B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B93Cu;
        // 0x39b940: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b93c) {
            ctx->pc = 0x39B958u;
            goto label_39b958;
        }
    }
    ctx->pc = 0x39B944u;
    // 0x39b944: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39b944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39b948: 0xc0ec0fe  jal         func_3B03F8
    ctx->pc = 0x39B948u;
    SET_GPR_U32(ctx, 31, 0x39B950u);
    ctx->pc = 0x39B94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B948u;
    // 0x39b94c: 0x2484b358  addiu       $a0, $a0, -0x4CA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x39B948u, 0x39B950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B950u;
label_39b950:
    // 0x39b950: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x39B950u;
    {
        const bool branch_taken_0x39b950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B950u;
        // 0x39b954: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b950) {
            ctx->pc = 0x39B95Cu;
            goto label_39b95c;
        }
    }
    ctx->pc = 0x39B958u;
label_39b958:
    // 0x39b958: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x39b958u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_39b95c:
    // 0x39b95c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39b95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39b960: 0x3e00008  jr          $ra
    ctx->pc = 0x39B960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39B964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B960u;
        // 0x39b964: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39B968u;
    // 0x39b968: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39b968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39b96c: 0x0  nop
    ctx->pc = 0x39b96cu;
    // NOP
    // 0x39b970: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x39b970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39b974: 0x0  nop
    ctx->pc = 0x39b974u;
    // NOP
    // 0x39b978: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x39b978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39b97c: 0x0  nop
    ctx->pc = 0x39b97cu;
    // NOP
    ctx->pc = 0x39b980u;
}

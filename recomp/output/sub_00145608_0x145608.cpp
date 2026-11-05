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

// Function: sub_00145608
// Address: 0x145608 - 0x145638
void sub_00145608_0x145608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00145608_0x145608");
#endif

    switch (ctx->pc) {
        case 0x145628u: goto label_145628;
        default: break;
    }

    ctx->pc = 0x145608u;

    // 0x145608: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x145608u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14560c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14560cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x145610: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x145610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x145614: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x145614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x145618: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x145618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14561c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x14561cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x145620: 0xc04d8b4  jal         func_1362D0
    ctx->pc = 0x145620u;
    SET_GPR_U32(ctx, 31, 0x145628u);
    ctx->pc = 0x145624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145620u;
    // 0x145624: 0xac4304e0  sw          $v1, 0x4E0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1248), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1362D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362D0u, 0x145620u, 0x145628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x145628u;
label_145628:
    // 0x145628: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x145628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14562c: 0x3e00008  jr          $ra
    ctx->pc = 0x14562Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14562Cu;
        // 0x145630: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14562Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x145634u;
    // 0x145634: 0x0  nop
    ctx->pc = 0x145634u;
    // NOP
    ctx->pc = 0x145638u;
}

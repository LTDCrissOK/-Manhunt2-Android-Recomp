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

// Function: sub_00291AA0
// Address: 0x291aa0 - 0x291ae0
void sub_00291AA0_0x291aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291AA0_0x291aa0");
#endif

    switch (ctx->pc) {
        case 0x291ab4u: goto label_291ab4;
        default: break;
    }

    ctx->pc = 0x291aa0u;

    // 0x291aa0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x291aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x291aa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x291aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x291aa8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x291aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x291aac: 0xc0a42a6  jal         func_290A98
    ctx->pc = 0x291AACu;
    SET_GPR_U32(ctx, 31, 0x291AB4u);
    ctx->pc = 0x291AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291AACu;
    // 0x291ab0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290A98u, 0x291AACu, 0x291AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291AB4u;
label_291ab4:
    // 0x291ab4: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x291ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x291ab8: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x291ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x291abc: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x291abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x291ac0: 0x24632ef0  addiu       $v1, $v1, 0x2EF0
    ctx->pc = 0x291ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12016));
    // 0x291ac4: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x291ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    // 0x291ac8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x291ac8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291acc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x291accu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291ad0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x291ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x291ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x291AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291AD4u;
        // 0x291ad8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291ADCu;
    // 0x291adc: 0x0  nop
    ctx->pc = 0x291adcu;
    // NOP
    ctx->pc = 0x291ae0u;
}

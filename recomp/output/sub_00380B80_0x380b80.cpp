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

// Function: sub_00380B80
// Address: 0x380b80 - 0x380bb0
void sub_00380B80_0x380b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380B80_0x380b80");
#endif

    switch (ctx->pc) {
        case 0x380b88u: goto label_380b88;
        case 0x380b98u: goto label_380b98;
        default: break;
    }

    ctx->pc = 0x380b80u;

    // 0x380b80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x380b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x380b84: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x380b84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_380b88:
    // 0x380b88: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x380B88u;
    {
        const bool branch_taken_0x380b88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x380B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380B88u;
        // 0x380b8c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380b88) {
            ctx->pc = 0x380B98u;
            goto label_380b98;
        }
    }
    ctx->pc = 0x380B90u;
    // 0x380b90: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x380B90u;
    SET_GPR_U32(ctx, 31, 0x380B98u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x380B90u, 0x380B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380B98u;
label_380b98:
    // 0x380b98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x380b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x380b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x380B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380B9Cu;
        // 0x380ba0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380BA4u;
    // 0x380ba4: 0x0  nop
    ctx->pc = 0x380ba4u;
    // NOP
    // 0x380ba8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x380ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x380bac: 0x0  nop
    ctx->pc = 0x380bacu;
    // NOP
    ctx->pc = 0x380bb0u;
}

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

// Function: sub_00137E50
// Address: 0x137e50 - 0x137e90
void sub_00137E50_0x137e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137E50_0x137e50");
#endif

    switch (ctx->pc) {
        case 0x137e84u: goto label_137e84;
        default: break;
    }

    ctx->pc = 0x137e50u;

    // 0x137e50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x137e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x137e54: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x137e54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
    // 0x137e58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x137e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x137e5c: 0x24a59a08  addiu       $a1, $a1, -0x65F8
    ctx->pc = 0x137e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941192));
    // 0x137e60: 0x9083046c  lbu         $v1, 0x46C($a0)
    ctx->pc = 0x137e60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    // 0x137e64: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x137e64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x137e68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x137e68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x137e6c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x137e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x137e70: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x137e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x137e74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x137e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x137e78: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x137e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x137e7c: 0xc094ed4  jal         func_253B50
    ctx->pc = 0x137E7Cu;
    SET_GPR_U32(ctx, 31, 0x137E84u);
    ctx->pc = 0x137E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137E7Cu;
    // 0x137e80: 0x8ca40108  lw          $a0, 0x108($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253B50u, 0x137E7Cu, 0x137E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x137E84u;
label_137e84:
    // 0x137e84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137e88: 0x3e00008  jr          $ra
    ctx->pc = 0x137E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137E88u;
        // 0x137e8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137E90u;
}

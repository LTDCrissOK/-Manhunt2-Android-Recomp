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

// Function: sub_00133B40
// Address: 0x133b40 - 0x133b98
void sub_00133B40_0x133b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133B40_0x133b40");
#endif

    switch (ctx->pc) {
        case 0x133b60u: goto label_133b60;
        case 0x133b6cu: goto label_133b6c;
        case 0x133b78u: goto label_133b78;
        case 0x133b84u: goto label_133b84;
        default: break;
    }

    ctx->pc = 0x133b40u;

    // 0x133b40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x133b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x133b44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x133b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x133b48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x133b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x133b4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x133b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133b50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x133b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x133b54: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x133b54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133b58: 0xc04c406  jal         func_131018
    ctx->pc = 0x133B58u;
    SET_GPR_U32(ctx, 31, 0x133B60u);
    ctx->pc = 0x133B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133B58u;
    // 0x133b5c: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131018u, 0x133B58u, 0x133B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133B60u;
label_133b60:
    // 0x133b60: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x133b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x133b64: 0xc04c42a  jal         func_1310A8
    ctx->pc = 0x133B64u;
    SET_GPR_U32(ctx, 31, 0x133B6Cu);
    ctx->pc = 0x133B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133B64u;
    // 0x133b68: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1310A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1310A8u, 0x133B64u, 0x133B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133B6Cu;
label_133b6c:
    // 0x133b6c: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x133b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x133b70: 0xc04c460  jal         func_131180
    ctx->pc = 0x133B70u;
    SET_GPR_U32(ctx, 31, 0x133B78u);
    ctx->pc = 0x133B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133B70u;
    // 0x133b74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131180u, 0x133B70u, 0x133B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133B78u;
label_133b78:
    // 0x133b78: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x133b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x133b7c: 0xc04c480  jal         func_131200
    ctx->pc = 0x133B7Cu;
    SET_GPR_U32(ctx, 31, 0x133B84u);
    ctx->pc = 0x133B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133B7Cu;
    // 0x133b80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131200u, 0x133B7Cu, 0x133B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133B84u;
label_133b84:
    // 0x133b84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x133b84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133b88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x133b88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x133b8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x133b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133b90: 0x3e00008  jr          $ra
    ctx->pc = 0x133B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133B90u;
        // 0x133b94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133B98u;
}

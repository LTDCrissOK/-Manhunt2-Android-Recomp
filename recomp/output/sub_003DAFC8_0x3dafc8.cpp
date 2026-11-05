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

// Function: sub_003DAFC8
// Address: 0x3dafc8 - 0x3daff0
void sub_003DAFC8_0x3dafc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DAFC8_0x3dafc8");
#endif

    switch (ctx->pc) {
        case 0x3dafd8u: goto label_3dafd8;
        case 0x3dafe0u: goto label_3dafe0;
        default: break;
    }

    ctx->pc = 0x3dafc8u;

    // 0x3dafc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dafc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dafcc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dafccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dafd0: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DAFD0u;
    SET_GPR_U32(ctx, 31, 0x3DAFD8u);
    ctx->pc = 0x3DAFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAFD0u;
    // 0x3dafd4: 0x2404052c  addiu       $a0, $zero, 0x52C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1324));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DAFD0u, 0x3DAFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAFD8u;
label_3dafd8:
    // 0x3dafd8: 0xc054a58  jal         func_152960
    ctx->pc = 0x3DAFD8u;
    SET_GPR_U32(ctx, 31, 0x3DAFE0u);
    ctx->pc = 0x3DAFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DAFD8u;
    // 0x3dafdc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152960u, 0x3DAFD8u, 0x3DAFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DAFE0u;
label_3dafe0:
    // 0x3dafe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dafe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dafe4: 0x3e00008  jr          $ra
    ctx->pc = 0x3DAFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DAFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DAFE4u;
        // 0x3dafe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DAFE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DAFECu;
    // 0x3dafec: 0x0  nop
    ctx->pc = 0x3dafecu;
    // NOP
    ctx->pc = 0x3daff0u;
}

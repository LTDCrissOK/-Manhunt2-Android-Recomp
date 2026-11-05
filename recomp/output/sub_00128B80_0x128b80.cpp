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

// Function: sub_00128B80
// Address: 0x128b80 - 0x128bb8
void sub_00128B80_0x128b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128B80_0x128b80");
#endif

    switch (ctx->pc) {
        case 0x128b98u: goto label_128b98;
        case 0x128ba4u: goto label_128ba4;
        default: break;
    }

    ctx->pc = 0x128b80u;

    // 0x128b80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x128b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x128b84: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x128b84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x128b88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x128b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x128b8c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x128b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x128b90: 0xc041e0c  jal         func_107830
    ctx->pc = 0x128B90u;
    SET_GPR_U32(ctx, 31, 0x128B98u);
    ctx->pc = 0x128B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128B90u;
    // 0x128b94: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107830u, 0x128B90u, 0x128B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128B98u;
label_128b98:
    // 0x128b98: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x128b98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b9c: 0xc05a68e  jal         func_169A38
    ctx->pc = 0x128B9Cu;
    SET_GPR_U32(ctx, 31, 0x128BA4u);
    ctx->pc = 0x128BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128B9Cu;
    // 0x128ba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169A38u, 0x128B9Cu, 0x128BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128BA4u;
label_128ba4:
    // 0x128ba4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x128ba4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128ba8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x128ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x128bac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x128bacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x128BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128BB0u;
        // 0x128bb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128BB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128BB8u;
}

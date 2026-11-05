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

// Function: sub_00169A38
// Address: 0x169a38 - 0x169a70
void sub_00169A38_0x169a38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169A38_0x169a38");
#endif

    switch (ctx->pc) {
        case 0x169a4cu: goto label_169a4c;
        case 0x169a54u: goto label_169a54;
        default: break;
    }

    ctx->pc = 0x169a38u;

    // 0x169a38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x169a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x169a3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x169a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x169a40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x169a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x169a44: 0xc05a78a  jal         func_169E28
    ctx->pc = 0x169A44u;
    SET_GPR_U32(ctx, 31, 0x169A4Cu);
    ctx->pc = 0x169A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169A44u;
    // 0x169a48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169E28u, 0x169A44u, 0x169A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169A4Cu;
label_169a4c:
    // 0x169a4c: 0xc05a7aa  jal         func_169EA8
    ctx->pc = 0x169A4Cu;
    SET_GPR_U32(ctx, 31, 0x169A54u);
    ctx->pc = 0x169A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x169A4Cu;
    // 0x169a50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169EA8u, 0x169A4Cu, 0x169A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x169A54u;
label_169a54:
    // 0x169a54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x169a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x169a58: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x169a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x169a5c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x169a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x169a60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x169a60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169a64: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x169a64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169a68: 0x3e00008  jr          $ra
    ctx->pc = 0x169A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169A68u;
        // 0x169a6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169A70u;
}

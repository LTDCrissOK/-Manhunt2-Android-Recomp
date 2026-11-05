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

// Function: sub_00152C28
// Address: 0x152c28 - 0x152c70
void sub_00152C28_0x152c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152C28_0x152c28");
#endif

    switch (ctx->pc) {
        case 0x152c4cu: goto label_152c4c;
        case 0x152c5cu: goto label_152c5c;
        default: break;
    }

    ctx->pc = 0x152c28u;

    // 0x152c28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x152c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x152c2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x152c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x152c30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x152c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x152c34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x152c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x152c38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x152c38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c3c: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x152c3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x152c40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x152c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x152c44: 0xc054bcc  jal         func_152F30
    ctx->pc = 0x152C44u;
    SET_GPR_U32(ctx, 31, 0x152C4Cu);
    ctx->pc = 0x152C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152C44u;
    // 0x152c48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152F30u, 0x152C44u, 0x152C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152C4Cu;
label_152c4c:
    // 0x152c4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x152c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x152c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152c54: 0xc04d88a  jal         func_136228
    ctx->pc = 0x152C54u;
    SET_GPR_U32(ctx, 31, 0x152C5Cu);
    ctx->pc = 0x152C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x152C54u;
    // 0x152c58: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136228u, 0x152C54u, 0x152C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x152C5Cu;
label_152c5c:
    // 0x152c5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x152c5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152c60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x152c60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x152c64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x152c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152c68: 0x3e00008  jr          $ra
    ctx->pc = 0x152C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152C68u;
        // 0x152c6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152C70u;
}

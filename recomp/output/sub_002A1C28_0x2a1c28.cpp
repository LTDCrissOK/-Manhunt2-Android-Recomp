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

// Function: sub_002A1C28
// Address: 0x2a1c28 - 0x2a1c80
void sub_002A1C28_0x2a1c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1C28_0x2a1c28");
#endif

    switch (ctx->pc) {
        case 0x2a1c4cu: goto label_2a1c4c;
        case 0x2a1c60u: goto label_2a1c60;
        case 0x2a1c68u: goto label_2a1c68;
        default: break;
    }

    ctx->pc = 0x2a1c28u;

    // 0x2a1c28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a1c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a1c2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a1c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a1c30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a1c30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1c34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a1c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a1c38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a1c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a1c3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a1c3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1c40: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2a1c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2a1c44: 0xc0a9b7c  jal         func_2A6DF0
    ctx->pc = 0x2A1C44u;
    SET_GPR_U32(ctx, 31, 0x2A1C4Cu);
    ctx->pc = 0x2A1C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1C44u;
    // 0x2a1c48: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6DF0u, 0x2A1C44u, 0x2A1C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1C4Cu;
label_2a1c4c:
    // 0x2a1c4c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2a1c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a1c50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a1c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1c54: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a1c54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1c58: 0xc0a790c  jal         func_29E430
    ctx->pc = 0x2A1C58u;
    SET_GPR_U32(ctx, 31, 0x2A1C60u);
    ctx->pc = 0x2A1C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1C58u;
    // 0x2a1c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E430u, 0x2A1C58u, 0x2A1C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1C60u;
label_2a1c60:
    // 0x2a1c60: 0xc0a9b70  jal         func_2A6DC0
    ctx->pc = 0x2A1C60u;
    SET_GPR_U32(ctx, 31, 0x2A1C68u);
    ctx->pc = 0x2A1C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1C60u;
    // 0x2a1c64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A6DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A6DC0u, 0x2A1C60u, 0x2A1C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1C68u;
label_2a1c68:
    // 0x2a1c68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a1c68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1c6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a1c6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a1c70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a1c70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1c74: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2a1c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a1c78: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C78u;
        // 0x2a1c7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1C80u;
}

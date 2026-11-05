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

// Function: sub_00399BE0
// Address: 0x399be0 - 0x399c18
void sub_00399BE0_0x399be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399BE0_0x399be0");
#endif

    switch (ctx->pc) {
        case 0x399bf4u: goto label_399bf4;
        case 0x399bfcu: goto label_399bfc;
        case 0x399c04u: goto label_399c04;
        default: break;
    }

    ctx->pc = 0x399be0u;

    // 0x399be0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x399be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x399be4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x399be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x399be8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x399be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x399bec: 0xc0e6a72  jal         func_39A9C8
    ctx->pc = 0x399BECu;
    SET_GPR_U32(ctx, 31, 0x399BF4u);
    ctx->pc = 0x399BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399BECu;
    // 0x399bf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A9C8u, 0x399BECu, 0x399BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399BF4u;
label_399bf4:
    // 0x399bf4: 0xc0e6706  jal         func_399C18
    ctx->pc = 0x399BF4u;
    SET_GPR_U32(ctx, 31, 0x399BFCu);
    ctx->pc = 0x399BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399BF4u;
    // 0x399bf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399C18u, 0x399BF4u, 0x399BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399BFCu;
label_399bfc:
    // 0x399bfc: 0xc0e6a78  jal         func_39A9E0
    ctx->pc = 0x399BFCu;
    SET_GPR_U32(ctx, 31, 0x399C04u);
    ctx->pc = 0x399C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399BFCu;
    // 0x399c00: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A9E0u, 0x399BFCu, 0x399C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399C04u;
label_399c04:
    // 0x399c04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x399c04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x399c08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x399c08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399c0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x399c0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x399c10: 0x3e00008  jr          $ra
    ctx->pc = 0x399C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399C10u;
        // 0x399c14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399C18u;
}

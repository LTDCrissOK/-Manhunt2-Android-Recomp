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

// Function: sub_00399CA0
// Address: 0x399ca0 - 0x399ce8
void sub_00399CA0_0x399ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399CA0_0x399ca0");
#endif

    switch (ctx->pc) {
        case 0x399cbcu: goto label_399cbc;
        case 0x399cc4u: goto label_399cc4;
        case 0x399cccu: goto label_399ccc;
        default: break;
    }

    ctx->pc = 0x399ca0u;

    // 0x399ca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x399ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x399ca4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x399ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x399ca8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x399ca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399cac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x399cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x399cb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x399cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x399cb4: 0xc0e6a60  jal         func_39A980
    ctx->pc = 0x399CB4u;
    SET_GPR_U32(ctx, 31, 0x399CBCu);
    ctx->pc = 0x399CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399CB4u;
    // 0x399cb8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A980u, 0x399CB4u, 0x399CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399CBCu;
label_399cbc:
    // 0x399cbc: 0xc0e66ea  jal         func_399BA8
    ctx->pc = 0x399CBCu;
    SET_GPR_U32(ctx, 31, 0x399CC4u);
    ctx->pc = 0x399CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399CBCu;
    // 0x399cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BA8u, 0x399CBCu, 0x399CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399CC4u;
label_399cc4:
    // 0x399cc4: 0xc0e6a66  jal         func_39A998
    ctx->pc = 0x399CC4u;
    SET_GPR_U32(ctx, 31, 0x399CCCu);
    ctx->pc = 0x399CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399CC4u;
    // 0x399cc8: 0xae110060  sw          $s1, 0x60($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A998u, 0x399CC4u, 0x399CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399CCCu;
label_399ccc:
    // 0x399ccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x399cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x399cd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x399cd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x399cd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x399cd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x399cd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x399cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x399cdc: 0x3e00008  jr          $ra
    ctx->pc = 0x399CDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399CDCu;
        // 0x399ce0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399CDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399CE4u;
    // 0x399ce4: 0x0  nop
    ctx->pc = 0x399ce4u;
    // NOP
    ctx->pc = 0x399ce8u;
}

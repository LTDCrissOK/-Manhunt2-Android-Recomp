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

// Function: sub_00205AF8
// Address: 0x205af8 - 0x205b28
void sub_00205AF8_0x205af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205AF8_0x205af8");
#endif

    switch (ctx->pc) {
        case 0x205b14u: goto label_205b14;
        default: break;
    }

    ctx->pc = 0x205af8u;

    // 0x205af8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x205afc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x205afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x205b00: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x205b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x205b04: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x205B04u;
    {
        const bool branch_taken_0x205b04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x205b04) {
            ctx->pc = 0x205B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205B04u;
            // 0x205b08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205B18u;
            goto label_205b18;
        }
    }
    ctx->pc = 0x205B0Cu;
    // 0x205b0c: 0xc0e7dbe  jal         func_39F6F8
    ctx->pc = 0x205B0Cu;
    SET_GPR_U32(ctx, 31, 0x205B14u);
    ctx->pc = 0x39F6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39F6F8u, 0x205B0Cu, 0x205B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205B14u;
label_205b14:
    // 0x205b14: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x205b14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_205b18:
    // 0x205b18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x205B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205B1Cu;
        // 0x205b20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205B24u;
    // 0x205b24: 0x0  nop
    ctx->pc = 0x205b24u;
    // NOP
    ctx->pc = 0x205b28u;
}

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

// Function: sub_0016BC28
// Address: 0x16bc28 - 0x16bc70
void sub_0016BC28_0x16bc28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BC28_0x16bc28");
#endif

    switch (ctx->pc) {
        case 0x16bc54u: goto label_16bc54;
        case 0x16bc64u: goto label_16bc64;
        default: break;
    }

    ctx->pc = 0x16bc28u;

    // 0x16bc28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16bc28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16bc2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16bc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16bc30: 0x90820194  lbu         $v0, 0x194($a0)
    ctx->pc = 0x16bc30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 404)));
    // 0x16bc34: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x16BC34u;
    {
        const bool branch_taken_0x16bc34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16bc34) {
            ctx->pc = 0x16BC38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16BC34u;
            // 0x16bc38: 0x8ca20020  lw          $v0, 0x20($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16BC44u;
            goto label_16bc44;
        }
    }
    ctx->pc = 0x16BC3Cu;
    // 0x16bc3c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x16BC3Cu;
    {
        const bool branch_taken_0x16bc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BC3Cu;
        // 0x16bc40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bc3c) {
            ctx->pc = 0x16BC64u;
            goto label_16bc64;
        }
    }
    ctx->pc = 0x16BC44u;
label_16bc44:
    // 0x16bc44: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16BC44u;
    {
        const bool branch_taken_0x16bc44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16bc44) {
            ctx->pc = 0x16BC5Cu;
            goto label_16bc5c;
        }
    }
    ctx->pc = 0x16BC4Cu;
    // 0x16bc4c: 0xc05af62  jal         func_16BD88
    ctx->pc = 0x16BC4Cu;
    SET_GPR_U32(ctx, 31, 0x16BC54u);
    ctx->pc = 0x16BD88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BD88u, 0x16BC4Cu, 0x16BC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BC54u;
label_16bc54:
    // 0x16bc54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16BC54u;
    {
        const bool branch_taken_0x16bc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BC54u;
        // 0x16bc58: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bc54) {
            ctx->pc = 0x16BC68u;
            goto label_16bc68;
        }
    }
    ctx->pc = 0x16BC5Cu;
label_16bc5c:
    // 0x16bc5c: 0xc05af1c  jal         func_16BC70
    ctx->pc = 0x16BC5Cu;
    SET_GPR_U32(ctx, 31, 0x16BC64u);
    ctx->pc = 0x16BC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16BC70u, 0x16BC5Cu, 0x16BC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16BC64u;
label_16bc64:
    // 0x16bc64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16bc64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16bc68:
    // 0x16bc68: 0x3e00008  jr          $ra
    ctx->pc = 0x16BC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BC68u;
        // 0x16bc6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BC68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BC70u;
}

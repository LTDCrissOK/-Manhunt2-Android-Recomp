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

// Function: sub_002A4B40
// Address: 0x2a4b40 - 0x2a4b80
void sub_002A4B40_0x2a4b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4B40_0x2a4b40");
#endif

    switch (ctx->pc) {
        case 0x2a4b64u: goto label_2a4b64;
        case 0x2a4b6cu: goto label_2a4b6c;
        default: break;
    }

    ctx->pc = 0x2a4b40u;

    // 0x2a4b40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a4b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a4b44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a4b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a4b48: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a4b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a4b4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a4b4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4b50: 0x8e0201ac  lw          $v0, 0x1AC($s0)
    ctx->pc = 0x2a4b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x2a4b54: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A4B54u;
    {
        const bool branch_taken_0x2a4b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4b54) {
            ctx->pc = 0x2A4B58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4B54u;
            // 0x2a4b58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4B74u;
            goto label_2a4b74;
        }
    }
    ctx->pc = 0x2A4B5Cu;
    // 0x2a4b5c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2A4B5Cu;
    SET_GPR_U32(ctx, 31, 0x2A4B64u);
    ctx->pc = 0x2A4B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4B5Cu;
    // 0x2a4b60: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2A4B5Cu, 0x2A4B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4B64u;
label_2a4b64:
    // 0x2a4b64: 0xc0aa226  jal         func_2A8898
    ctx->pc = 0x2A4B64u;
    SET_GPR_U32(ctx, 31, 0x2A4B6Cu);
    ctx->pc = 0x2A4B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4B64u;
    // 0x2a4b68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8898u, 0x2A4B64u, 0x2A4B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4B6Cu;
label_2a4b6c:
    // 0x2a4b6c: 0xae0201ac  sw          $v0, 0x1AC($s0)
    ctx->pc = 0x2a4b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 2));
    // 0x2a4b70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a4b70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a4b74:
    // 0x2a4b74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a4b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a4b78: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4B78u;
        // 0x2a4b7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4B80u;
}

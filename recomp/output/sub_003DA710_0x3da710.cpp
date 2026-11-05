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

// Function: sub_003DA710
// Address: 0x3da710 - 0x3da758
void sub_003DA710_0x3da710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA710_0x3da710");
#endif

    switch (ctx->pc) {
        case 0x3da740u: goto label_3da740;
        default: break;
    }

    ctx->pc = 0x3da710u;

    // 0x3da710: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3da710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3da714: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3da714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3da718: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3da718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3da71c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3da71cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da720: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x3da720u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3da724: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DA724u;
    {
        const bool branch_taken_0x3da724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da724) {
            ctx->pc = 0x3DA728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA724u;
            // 0x3da728: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA748u;
            goto label_3da748;
        }
    }
    ctx->pc = 0x3DA72Cu;
    // 0x3da72c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x3da72cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3da730: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3DA730u;
    {
        const bool branch_taken_0x3da730 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3da730) {
            ctx->pc = 0x3DA734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DA730u;
            // 0x3da734: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DA748u;
            goto label_3da748;
        }
    }
    ctx->pc = 0x3DA738u;
    // 0x3da738: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x3DA738u;
    SET_GPR_U32(ctx, 31, 0x3DA740u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3DA738u, 0x3DA740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA740u;
label_3da740:
    // 0x3da740: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3da740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x3da744: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3da744u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3da748:
    // 0x3da748: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3da748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3da74c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA74Cu;
        // 0x3da750: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA74Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA754u;
    // 0x3da754: 0x0  nop
    ctx->pc = 0x3da754u;
    // NOP
    ctx->pc = 0x3da758u;
}

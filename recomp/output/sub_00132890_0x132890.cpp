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

// Function: sub_00132890
// Address: 0x132890 - 0x1328d0
void sub_00132890_0x132890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132890_0x132890");
#endif

    switch (ctx->pc) {
        case 0x1328a4u: goto label_1328a4;
        case 0x1328b8u: goto label_1328b8;
        default: break;
    }

    ctx->pc = 0x132890u;

    // 0x132890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x132890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x132894: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x132894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x132898: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x132898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13289c: 0xc04cbdc  jal         func_132F70
    ctx->pc = 0x13289Cu;
    SET_GPR_U32(ctx, 31, 0x1328A4u);
    ctx->pc = 0x1328A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13289Cu;
    // 0x1328a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132F70u, 0x13289Cu, 0x1328A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1328A4u;
label_1328a4:
    // 0x1328a4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1328a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1328a8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1328A8u;
    {
        const bool branch_taken_0x1328a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1328a8) {
            ctx->pc = 0x1328ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1328A8u;
            // 0x1328ac: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1328BCu;
            goto label_1328bc;
        }
    }
    ctx->pc = 0x1328B0u;
    // 0x1328b0: 0xc04cc10  jal         func_133040
    ctx->pc = 0x1328B0u;
    SET_GPR_U32(ctx, 31, 0x1328B8u);
    ctx->pc = 0x1328B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1328B0u;
    // 0x1328b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133040u, 0x1328B0u, 0x1328B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1328B8u;
label_1328b8:
    // 0x1328b8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1328b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1328bc:
    // 0x1328bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1328bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1328c0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1328c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1328c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1328C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1328C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1328C4u;
        // 0x1328c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1328C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1328CCu;
    // 0x1328cc: 0x0  nop
    ctx->pc = 0x1328ccu;
    // NOP
    ctx->pc = 0x1328d0u;
}

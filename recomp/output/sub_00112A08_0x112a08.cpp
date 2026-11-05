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

// Function: sub_00112A08
// Address: 0x112a08 - 0x112a50
void sub_00112A08_0x112a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112A08_0x112a08");
#endif

    switch (ctx->pc) {
        case 0x112a2cu: goto label_112a2c;
        case 0x112a3cu: goto label_112a3c;
        default: break;
    }

    ctx->pc = 0x112a08u;

    // 0x112a08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x112a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x112a0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x112a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x112a10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x112a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x112a14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x112a14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a18: 0x8e0400b4  lw          $a0, 0xB4($s0)
    ctx->pc = 0x112a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x112a1c: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x112A1Cu;
    {
        const bool branch_taken_0x112a1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x112a1c) {
            ctx->pc = 0x112A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112A1Cu;
            // 0x112a20: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112A44u;
            goto label_112a44;
        }
    }
    ctx->pc = 0x112A24u;
    // 0x112a24: 0xc05a81a  jal         func_16A068
    ctx->pc = 0x112A24u;
    SET_GPR_U32(ctx, 31, 0x112A2Cu);
    ctx->pc = 0x16A068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A068u, 0x112A24u, 0x112A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A2Cu;
label_112a2c:
    // 0x112a2c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x112a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x112a30: 0x8e0500b4  lw          $a1, 0xB4($s0)
    ctx->pc = 0x112a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x112a34: 0xc042076  jal         func_1081D8
    ctx->pc = 0x112A34u;
    SET_GPR_U32(ctx, 31, 0x112A3Cu);
    ctx->pc = 0x112A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112A34u;
    // 0x112a38: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1081D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1081D8u, 0x112A34u, 0x112A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112A3Cu;
label_112a3c:
    // 0x112a3c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x112a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x112a40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x112a40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_112a44:
    // 0x112a44: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x112a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x112a48: 0x3e00008  jr          $ra
    ctx->pc = 0x112A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A48u;
        // 0x112a4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112A50u;
}

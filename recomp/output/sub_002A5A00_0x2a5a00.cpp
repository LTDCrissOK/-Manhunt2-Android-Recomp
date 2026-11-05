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

// Function: sub_002A5A00
// Address: 0x2a5a00 - 0x2a5a58
void sub_002A5A00_0x2a5a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A5A00_0x2a5a00");
#endif

    switch (ctx->pc) {
        case 0x2a5a24u: goto label_2a5a24;
        case 0x2a5a30u: goto label_2a5a30;
        case 0x2a5a3cu: goto label_2a5a3c;
        case 0x2a5a48u: goto label_2a5a48;
        default: break;
    }

    ctx->pc = 0x2a5a00u;

    // 0x2a5a00: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2a5a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2a5a04: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a5a04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a5a08: 0x9043a988  lbu         $v1, -0x5678($v0)
    ctx->pc = 0x2a5a08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FA988u));
    // 0x2a5a0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2a5a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a5a10: 0x1464000d  bne         $v1, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A5A10u;
    {
        const bool branch_taken_0x2a5a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2A5A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A10u;
        // 0x2a5a14: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a5a10) {
            ctx->pc = 0x2A5A48u;
            goto label_2a5a48;
        }
    }
    ctx->pc = 0x2A5A18u;
    // 0x2a5a18: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2a5a18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2a5a1c: 0xc0a9ed0  jal         func_2A7B40
    ctx->pc = 0x2A5A1Cu;
    SET_GPR_U32(ctx, 31, 0x2A5A24u);
    ctx->pc = 0x2A5A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5A1Cu;
    // 0x2a5a20: 0x24842330  addiu       $a0, $a0, 0x2330 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7B40u, 0x2A5A1Cu, 0x2A5A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5A24u;
label_2a5a24:
    // 0x2a5a24: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2a5a24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2a5a28: 0xc0a9ed0  jal         func_2A7B40
    ctx->pc = 0x2A5A28u;
    SET_GPR_U32(ctx, 31, 0x2A5A30u);
    ctx->pc = 0x2A5A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5A28u;
    // 0x2a5a2c: 0x24842348  addiu       $a0, $a0, 0x2348 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7B40u, 0x2A5A28u, 0x2A5A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5A30u;
label_2a5a30:
    // 0x2a5a30: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2a5a30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2a5a34: 0xc0a9ed0  jal         func_2A7B40
    ctx->pc = 0x2A5A34u;
    SET_GPR_U32(ctx, 31, 0x2A5A3Cu);
    ctx->pc = 0x2A5A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5A34u;
    // 0x2a5a38: 0x24842360  addiu       $a0, $a0, 0x2360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7B40u, 0x2A5A34u, 0x2A5A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5A3Cu;
label_2a5a3c:
    // 0x2a5a3c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2a5a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2a5a40: 0xc0a9ed0  jal         func_2A7B40
    ctx->pc = 0x2A5A40u;
    SET_GPR_U32(ctx, 31, 0x2A5A48u);
    ctx->pc = 0x2A5A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A5A40u;
    // 0x2a5a44: 0x24842378  addiu       $a0, $a0, 0x2378 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7B40u, 0x2A5A40u, 0x2A5A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A5A48u;
label_2a5a48:
    // 0x2a5a48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a5a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a5a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A5A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A5A4Cu;
        // 0x2a5a50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A5A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A5A54u;
    // 0x2a5a54: 0x0  nop
    ctx->pc = 0x2a5a54u;
    // NOP
    ctx->pc = 0x2a5a58u;
}

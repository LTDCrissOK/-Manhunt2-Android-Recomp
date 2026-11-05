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

// Function: sub_00311B08
// Address: 0x311b08 - 0x311b70
void sub_00311B08_0x311b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311B08_0x311b08");
#endif

    switch (ctx->pc) {
        case 0x311b24u: goto label_311b24;
        case 0x311b30u: goto label_311b30;
        case 0x311b3cu: goto label_311b3c;
        case 0x311b44u: goto label_311b44;
        case 0x311b50u: goto label_311b50;
        case 0x311b5cu: goto label_311b5c;
        default: break;
    }

    ctx->pc = 0x311b08u;

    // 0x311b08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x311b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x311b0c: 0x2404004a  addiu       $a0, $zero, 0x4A
    ctx->pc = 0x311b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x311b10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x311b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x311b14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x311b14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311b18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x311b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x311b1c: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x311B1Cu;
    SET_GPR_U32(ctx, 31, 0x311B24u);
    ctx->pc = 0x311B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311B1Cu;
    // 0x311b20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x311B1Cu, 0x311B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311B24u;
label_311b24:
    // 0x311b24: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x311b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x311b28: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x311B28u;
    SET_GPR_U32(ctx, 31, 0x311B30u);
    ctx->pc = 0x311B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311B28u;
    // 0x311b2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x311B28u, 0x311B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311B30u;
label_311b30:
    // 0x311b30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x311b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311b34: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x311B34u;
    SET_GPR_U32(ctx, 31, 0x311B3Cu);
    ctx->pc = 0x311B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311B34u;
    // 0x311b38: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x311B34u, 0x311B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311B3Cu;
label_311b3c:
    // 0x311b3c: 0xc0c3c40  jal         func_30F100
    ctx->pc = 0x311B3Cu;
    SET_GPR_U32(ctx, 31, 0x311B44u);
    ctx->pc = 0x311B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311B3Cu;
    // 0x311b40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F100u, 0x311B3Cu, 0x311B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311B44u;
label_311b44:
    // 0x311b44: 0x2404004a  addiu       $a0, $zero, 0x4A
    ctx->pc = 0x311b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x311b48: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x311B48u;
    SET_GPR_U32(ctx, 31, 0x311B50u);
    ctx->pc = 0x311B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311B48u;
    // 0x311b4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x311B48u, 0x311B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311B50u;
label_311b50:
    // 0x311b50: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x311b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x311b54: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x311B54u;
    SET_GPR_U32(ctx, 31, 0x311B5Cu);
    ctx->pc = 0x311B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311B54u;
    // 0x311b58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x311B54u, 0x311B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311B5Cu;
label_311b5c:
    // 0x311b5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x311b5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x311b60: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x311b60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x311b64: 0x3e00008  jr          $ra
    ctx->pc = 0x311B64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311B64u;
        // 0x311b68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311B64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311B6Cu;
    // 0x311b6c: 0x0  nop
    ctx->pc = 0x311b6cu;
    // NOP
    ctx->pc = 0x311b70u;
}

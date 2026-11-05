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

// Function: sub_00123B30
// Address: 0x123b30 - 0x123b90
void sub_00123B30_0x123b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123B30_0x123b30");
#endif

    switch (ctx->pc) {
        case 0x123b58u: goto label_123b58;
        case 0x123b6cu: goto label_123b6c;
        default: break;
    }

    ctx->pc = 0x123b30u;

    // 0x123b30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x123b34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x123b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123b38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x123b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x123b3c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x123b3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123b40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x123b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x123b44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x123b44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123b48: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x123b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x123b4c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x123b4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123b50: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x123B50u;
    SET_GPR_U32(ctx, 31, 0x123B58u);
    ctx->pc = 0x123B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123B50u;
    // 0x123b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x123B50u, 0x123B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123B58u;
label_123b58:
    // 0x123b58: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x123B58u;
    {
        const bool branch_taken_0x123b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B58u;
        // 0x123b5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b58) {
            ctx->pc = 0x123B74u;
            goto label_123b74;
        }
    }
    ctx->pc = 0x123B60u;
    // 0x123b60: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x123b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x123b64: 0xc042e22  jal         func_10B888
    ctx->pc = 0x123B64u;
    SET_GPR_U32(ctx, 31, 0x123B6Cu);
    ctx->pc = 0x123B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123B64u;
    // 0x123b68: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B888u, 0x123B64u, 0x123B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123B6Cu;
label_123b6c:
    // 0x123b6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x123B6Cu;
    {
        const bool branch_taken_0x123b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B6Cu;
        // 0x123b70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123b6c) {
            ctx->pc = 0x123B7Cu;
            goto label_123b7c;
        }
    }
    ctx->pc = 0x123B74u;
label_123b74:
    // 0x123b74: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x123b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x123b78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123b78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_123b7c:
    // 0x123b7c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123b7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123b80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x123b80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123b84: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x123b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x123b88: 0x3e00008  jr          $ra
    ctx->pc = 0x123B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123B88u;
        // 0x123b8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123B90u;
}

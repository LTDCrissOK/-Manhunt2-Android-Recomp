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

// Function: sub_00123C50
// Address: 0x123c50 - 0x123cc8
void sub_00123C50_0x123c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123C50_0x123c50");
#endif

    switch (ctx->pc) {
        case 0x123c78u: goto label_123c78;
        case 0x123c8cu: goto label_123c8c;
        default: break;
    }

    ctx->pc = 0x123c50u;

    // 0x123c50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x123c54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x123c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123c58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x123c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x123c5c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x123c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123c60: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x123c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x123c64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x123c64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123c68: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x123c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x123c6c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x123c6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123c70: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x123C70u;
    SET_GPR_U32(ctx, 31, 0x123C78u);
    ctx->pc = 0x123C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123C70u;
    // 0x123c74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x123C70u, 0x123C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123C78u;
label_123c78:
    // 0x123c78: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x123C78u;
    {
        const bool branch_taken_0x123c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C78u;
        // 0x123c7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c78) {
            ctx->pc = 0x123C94u;
            goto label_123c94;
        }
    }
    ctx->pc = 0x123C80u;
    // 0x123c80: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x123c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x123c84: 0xc042e78  jal         func_10B9E0
    ctx->pc = 0x123C84u;
    SET_GPR_U32(ctx, 31, 0x123C8Cu);
    ctx->pc = 0x123C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123C84u;
    // 0x123c88: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B9E0u, 0x123C84u, 0x123C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123C8Cu;
label_123c8c:
    // 0x123c8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x123C8Cu;
    {
        const bool branch_taken_0x123c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123C8Cu;
        // 0x123c90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123c8c) {
            ctx->pc = 0x123C9Cu;
            goto label_123c9c;
        }
    }
    ctx->pc = 0x123C94u;
label_123c94:
    // 0x123c94: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x123c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x123c98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123c98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_123c9c:
    // 0x123c9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123c9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123ca0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x123ca0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123ca4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x123ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x123ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x123CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123CA8u;
        // 0x123cac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123CB0u;
    // 0x123cb0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x123cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x123cb4: 0x0  nop
    ctx->pc = 0x123cb4u;
    // NOP
    // 0x123cb8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x123cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x123cbc: 0x0  nop
    ctx->pc = 0x123cbcu;
    // NOP
    // 0x123cc0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x123cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x123cc4: 0x0  nop
    ctx->pc = 0x123cc4u;
    // NOP
    ctx->pc = 0x123cc8u;
}

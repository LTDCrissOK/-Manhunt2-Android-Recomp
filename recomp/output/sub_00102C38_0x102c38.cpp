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

// Function: sub_00102C38
// Address: 0x102c38 - 0x102cd0
void sub_00102C38_0x102c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102C38_0x102c38");
#endif

    switch (ctx->pc) {
        case 0x102c84u: goto label_102c84;
        case 0x102c9cu: goto label_102c9c;
        default: break;
    }

    ctx->pc = 0x102c38u;

    // 0x102c38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x102c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x102c3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x102c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x102c40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x102c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x102c44: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x102c44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c48: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x102c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x102c4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x102c4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c50: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x102c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x102c54: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x102c54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x102c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x102c5c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x102c5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c60: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x102C60u;
    {
        const bool branch_taken_0x102c60 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x102C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C60u;
        // 0x102c64: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102c60) {
            ctx->pc = 0x102C70u;
            goto label_102c70;
        }
    }
    ctx->pc = 0x102C68u;
    // 0x102c68: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x102C68u;
    {
        const bool branch_taken_0x102c68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x102C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C68u;
        // 0x102c6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102c68) {
            ctx->pc = 0x102C78u;
            goto label_102c78;
        }
    }
    ctx->pc = 0x102C70u;
label_102c70:
    // 0x102c70: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x102C70u;
    {
        const bool branch_taken_0x102c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C70u;
        // 0x102c74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102c70) {
            ctx->pc = 0x102CACu;
            goto label_102cac;
        }
    }
    ctx->pc = 0x102C78u;
label_102c78:
    // 0x102c78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x102c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c7c: 0xc041a6c  jal         func_1069B0
    ctx->pc = 0x102C7Cu;
    SET_GPR_U32(ctx, 31, 0x102C84u);
    ctx->pc = 0x102C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102C7Cu;
    // 0x102c80: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1069B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069B0u, 0x102C7Cu, 0x102C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102C84u;
label_102c84:
    // 0x102c84: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x102C84u;
    {
        const bool branch_taken_0x102c84 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x102C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C84u;
        // 0x102c88: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102c84) {
            ctx->pc = 0x102CACu;
            goto label_102cac;
        }
    }
    ctx->pc = 0x102C8Cu;
    // 0x102c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x102c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x102c90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c94: 0xc041a6c  jal         func_1069B0
    ctx->pc = 0x102C94u;
    SET_GPR_U32(ctx, 31, 0x102C9Cu);
    ctx->pc = 0x102C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102C94u;
    // 0x102c98: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1069B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069B0u, 0x102C94u, 0x102C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x102C9Cu;
label_102c9c:
    // 0x102c9c: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x102C9Cu;
    {
        const bool branch_taken_0x102c9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x102CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102C9Cu;
        // 0x102ca0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102c9c) {
            ctx->pc = 0x102CA8u;
            goto label_102ca8;
        }
    }
    ctx->pc = 0x102CA4u;
    // 0x102ca4: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x102ca4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_102ca8:
    // 0x102ca8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x102ca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_102cac:
    // 0x102cac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x102cacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102cb0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x102cb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x102cb4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x102cb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102cb8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x102cb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x102cbc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x102cbcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102cc0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x102cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x102cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x102CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102CC4u;
        // 0x102cc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102CCCu;
    // 0x102ccc: 0x0  nop
    ctx->pc = 0x102cccu;
    // NOP
    ctx->pc = 0x102cd0u;
}

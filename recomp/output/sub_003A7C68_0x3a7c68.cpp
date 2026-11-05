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

// Function: sub_003A7C68
// Address: 0x3a7c68 - 0x3a7cc0
void sub_003A7C68_0x3a7c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7C68_0x3a7c68");
#endif

    switch (ctx->pc) {
        case 0x3a7c88u: goto label_3a7c88;
        case 0x3a7c9cu: goto label_3a7c9c;
        default: break;
    }

    ctx->pc = 0x3a7c68u;

    // 0x3a7c68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a7c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a7c6c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a7c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3a7c70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a7c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a7c74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a7c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a7c78: 0x24508730  addiu       $s0, $v0, -0x78D0
    ctx->pc = 0x3a7c78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936368));
    // 0x3a7c7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a7c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a7c80: 0x24110027  addiu       $s1, $zero, 0x27
    ctx->pc = 0x3a7c80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x3a7c84: 0x0  nop
    ctx->pc = 0x3a7c84u;
    // NOP
label_3a7c88:
    // 0x3a7c88: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x3a7c88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a7c8c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A7C8Cu;
    {
        const bool branch_taken_0x3a7c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7c8c) {
            ctx->pc = 0x3A7C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7C8Cu;
            // 0x3a7c90: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7CA0u;
            goto label_3a7ca0;
        }
    }
    ctx->pc = 0x3A7C94u;
    // 0x3a7c94: 0xc0e9f18  jal         func_3A7C60
    ctx->pc = 0x3A7C94u;
    SET_GPR_U32(ctx, 31, 0x3A7C9Cu);
    ctx->pc = 0x3A7C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7C94u;
    // 0x3a7c98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C60u, 0x3A7C94u, 0x3A7C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7C9Cu;
label_3a7c9c:
    // 0x3a7c9c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3a7c9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3a7ca0:
    // 0x3a7ca0: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3A7CA0u;
    {
        const bool branch_taken_0x3a7ca0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x3A7CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7CA0u;
        // 0x3a7ca4: 0x26100038  addiu       $s0, $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7ca0) {
            ctx->pc = 0x3A7C88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a7c88;
        }
    }
    ctx->pc = 0x3A7CA8u;
    // 0x3a7ca8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a7ca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a7cac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a7cacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a7cb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a7cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a7cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7CB4u;
        // 0x3a7cb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7CBCu;
    // 0x3a7cbc: 0x0  nop
    ctx->pc = 0x3a7cbcu;
    // NOP
    ctx->pc = 0x3a7cc0u;
}

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

// Function: sub_00132A28
// Address: 0x132a28 - 0x132a70
void sub_00132A28_0x132a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132A28_0x132a28");
#endif

    switch (ctx->pc) {
        case 0x132a44u: goto label_132a44;
        case 0x132a58u: goto label_132a58;
        default: break;
    }

    ctx->pc = 0x132a28u;

    // 0x132a28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x132a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x132a2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x132a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x132a30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x132a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x132a34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x132a34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132a38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x132a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x132a3c: 0xc04cc26  jal         func_133098
    ctx->pc = 0x132A3Cu;
    SET_GPR_U32(ctx, 31, 0x132A44u);
    ctx->pc = 0x132A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132A3Cu;
    // 0x132a40: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133098u, 0x132A3Cu, 0x132A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A44u;
label_132a44:
    // 0x132a44: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x132A44u;
    {
        const bool branch_taken_0x132a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132a44) {
            ctx->pc = 0x132A48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132A44u;
            // 0x132a48: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132A5Cu;
            goto label_132a5c;
        }
    }
    ctx->pc = 0x132A4Cu;
    // 0x132a4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132a50: 0xc04cc3c  jal         func_1330F0
    ctx->pc = 0x132A50u;
    SET_GPR_U32(ctx, 31, 0x132A58u);
    ctx->pc = 0x132A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132A50u;
    // 0x132a54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1330F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1330F0u, 0x132A50u, 0x132A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132A58u;
label_132a58:
    // 0x132a58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x132a58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_132a5c:
    // 0x132a5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x132a5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x132a60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x132a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132a64: 0x3e00008  jr          $ra
    ctx->pc = 0x132A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132A64u;
        // 0x132a68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132A6Cu;
    // 0x132a6c: 0x0  nop
    ctx->pc = 0x132a6cu;
    // NOP
    ctx->pc = 0x132a70u;
}

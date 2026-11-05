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

// Function: sub_00132E20
// Address: 0x132e20 - 0x132e68
void sub_00132E20_0x132e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132E20_0x132e20");
#endif

    switch (ctx->pc) {
        case 0x132e3cu: goto label_132e3c;
        case 0x132e50u: goto label_132e50;
        default: break;
    }

    ctx->pc = 0x132e20u;

    // 0x132e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x132e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x132e24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x132e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x132e28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x132e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x132e2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x132e2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132e30: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x132e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x132e34: 0xc04cc84  jal         func_133210
    ctx->pc = 0x132E34u;
    SET_GPR_U32(ctx, 31, 0x132E3Cu);
    ctx->pc = 0x132E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132E34u;
    // 0x132e38: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133210u, 0x132E34u, 0x132E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132E3Cu;
label_132e3c:
    // 0x132e3c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x132E3Cu;
    {
        const bool branch_taken_0x132e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132e3c) {
            ctx->pc = 0x132E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132E3Cu;
            // 0x132e40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132E54u;
            goto label_132e54;
        }
    }
    ctx->pc = 0x132E44u;
    // 0x132e44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132e44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132e48: 0xc04cc9c  jal         func_133270
    ctx->pc = 0x132E48u;
    SET_GPR_U32(ctx, 31, 0x132E50u);
    ctx->pc = 0x132E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132E48u;
    // 0x132e4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133270u, 0x132E48u, 0x132E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132E50u;
label_132e50:
    // 0x132e50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x132e50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_132e54:
    // 0x132e54: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x132e54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x132e58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x132e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x132E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132E5Cu;
        // 0x132e60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132E64u;
    // 0x132e64: 0x0  nop
    ctx->pc = 0x132e64u;
    // NOP
    ctx->pc = 0x132e68u;
}

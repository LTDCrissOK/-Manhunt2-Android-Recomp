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

// Function: sub_00311E78
// Address: 0x311e78 - 0x311ec8
void sub_00311E78_0x311e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311E78_0x311e78");
#endif

    switch (ctx->pc) {
        case 0x311e90u: goto label_311e90;
        case 0x311e9cu: goto label_311e9c;
        default: break;
    }

    ctx->pc = 0x311e78u;

    // 0x311e78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x311e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x311e7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x311e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x311e80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x311e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x311e84: 0x24900580  addiu       $s0, $a0, 0x580
    ctx->pc = 0x311e84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 1408));
    // 0x311e88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x311e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x311e8c: 0x24110009  addiu       $s1, $zero, 0x9
    ctx->pc = 0x311e8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_311e90:
    // 0x311e90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x311e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311e94: 0xc0c9a76  jal         func_3269D8
    ctx->pc = 0x311E94u;
    SET_GPR_U32(ctx, 31, 0x311E9Cu);
    ctx->pc = 0x311E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311E94u;
    // 0x311e98: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3269D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3269D8u, 0x311E94u, 0x311E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311E9Cu;
label_311e9c:
    // 0x311e9c: 0x0  nop
    ctx->pc = 0x311e9cu;
    // NOP
    // 0x311ea0: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x311EA0u;
    {
        const bool branch_taken_0x311ea0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x311EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311EA0u;
        // 0x311ea4: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311ea0) {
            ctx->pc = 0x311E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_311e90;
        }
    }
    ctx->pc = 0x311EA8u;
    // 0x311ea8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x311ea8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x311eac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x311eacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x311eb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x311eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x311eb4: 0x3e00008  jr          $ra
    ctx->pc = 0x311EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311EB4u;
        // 0x311eb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311EBCu;
    // 0x311ebc: 0x0  nop
    ctx->pc = 0x311ebcu;
    // NOP
    // 0x311ec0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x311ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x311ec4: 0x0  nop
    ctx->pc = 0x311ec4u;
    // NOP
    ctx->pc = 0x311ec8u;
}

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

// Function: sub_003D7258
// Address: 0x3d7258 - 0x3d7298
void sub_003D7258_0x3d7258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D7258_0x3d7258");
#endif

    switch (ctx->pc) {
        case 0x3d7278u: goto label_3d7278;
        default: break;
    }

    ctx->pc = 0x3d7258u;

    // 0x3d7258: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d7258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d725c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3d725cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3d7260: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d7260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d7264: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D7264u;
    {
        const bool branch_taken_0x3d7264 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x3D7268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7264u;
        // 0x3d7268: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7264) {
            ctx->pc = 0x3D7280u;
            goto label_3d7280;
        }
    }
    ctx->pc = 0x3D726Cu;
    // 0x3d726c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3d726cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d7270: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x3D7270u;
    SET_GPR_U32(ctx, 31, 0x3D7278u);
    ctx->pc = 0x3D7274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D7270u;
    // 0x3d7274: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x3D7270u, 0x3D7278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D7278u;
label_3d7278:
    // 0x3d7278: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D7278u;
    {
        const bool branch_taken_0x3d7278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7278u;
        // 0x3d727c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d7278) {
            ctx->pc = 0x3D7288u;
            goto label_3d7288;
        }
    }
    ctx->pc = 0x3D7280u;
label_3d7280:
    // 0x3d7280: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3d7280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d7284: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d7284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d7288:
    // 0x3d7288: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d7288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d728c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3d728cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d7290: 0x3e00008  jr          $ra
    ctx->pc = 0x3D7290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D7294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D7290u;
        // 0x3d7294: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D7290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D7298u;
}

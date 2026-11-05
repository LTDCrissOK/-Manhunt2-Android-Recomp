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

// Function: sub_003D0120
// Address: 0x3d0120 - 0x3d0160
void sub_003D0120_0x3d0120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D0120_0x3d0120");
#endif

    switch (ctx->pc) {
        case 0x3d0138u: goto label_3d0138;
        default: break;
    }

    ctx->pc = 0x3d0120u;

    // 0x3d0120: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3d0120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d0124: 0x1046000b  beq         $v0, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x3D0124u;
    {
        const bool branch_taken_0x3d0124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x3D0128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0124u;
        // 0x3d0128: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d0124) {
            ctx->pc = 0x3D0154u;
            goto label_3d0154;
        }
    }
    ctx->pc = 0x3D012Cu;
    // 0x3d012c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3D012Cu;
    {
        const bool branch_taken_0x3d012c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d012c) {
            ctx->pc = 0x3D0130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D012Cu;
            // 0x3d0130: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
            if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D0158u;
            goto label_3d0158;
        }
    }
    ctx->pc = 0x3D0134u;
    // 0x3d0134: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x3d0134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_3d0138:
    // 0x3d0138: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3d0138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d013c: 0x10460005  beq         $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D013Cu;
    {
        const bool branch_taken_0x3d013c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x3D0140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D013Cu;
        // 0x3d0140: 0x85102b  sltu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d013c) {
            ctx->pc = 0x3D0154u;
            goto label_3d0154;
        }
    }
    ctx->pc = 0x3D0144u;
    // 0x3d0144: 0x5440fffc  bnel        $v0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x3D0144u;
    {
        const bool branch_taken_0x3d0144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d0144) {
            ctx->pc = 0x3D0148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D0144u;
            // 0x3d0148: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D0138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d0138;
        }
    }
    ctx->pc = 0x3D014Cu;
    // 0x3d014c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3D014Cu;
    {
        const bool branch_taken_0x3d014c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D0150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D014Cu;
        // 0x3d0150: 0x2200a  movz        $a0, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d014c) {
            ctx->pc = 0x3D0158u;
            goto label_3d0158;
        }
    }
    ctx->pc = 0x3D0154u;
label_3d0154:
    // 0x3d0154: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x3d0154u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
label_3d0158:
    // 0x3d0158: 0x3e00008  jr          $ra
    ctx->pc = 0x3D0158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D0158u;
        // 0x3d015c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D0158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D0160u;
}

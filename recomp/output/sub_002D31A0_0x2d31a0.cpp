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

// Function: sub_002D31A0
// Address: 0x2d31a0 - 0x2d3200
void sub_002D31A0_0x2d31a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D31A0_0x2d31a0");
#endif

    switch (ctx->pc) {
        case 0x2d31bcu: goto label_2d31bc;
        case 0x2d31c8u: goto label_2d31c8;
        case 0x2d31d0u: goto label_2d31d0;
        case 0x2d31d8u: goto label_2d31d8;
        default: break;
    }

    ctx->pc = 0x2d31a0u;

    // 0x2d31a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d31a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d31a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d31a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d31a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d31a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d31ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d31acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d31b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d31b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d31b4: 0xc0e512a  jal         func_3944A8
    ctx->pc = 0x2D31B4u;
    SET_GPR_U32(ctx, 31, 0x2D31BCu);
    ctx->pc = 0x2D31B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D31B4u;
    // 0x2d31b8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3944A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3944A8u, 0x2D31B4u, 0x2D31BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D31BCu;
label_2d31bc:
    // 0x2d31bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2d31bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d31c0: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D31C0u;
    {
        const bool branch_taken_0x2d31c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2D31C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D31C0u;
        // 0x2d31c4: 0x24110003  addiu       $s1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d31c0) {
            ctx->pc = 0x2D31E0u;
            goto label_2d31e0;
        }
    }
    ctx->pc = 0x2D31C8u;
label_2d31c8:
    // 0x2d31c8: 0xc0e5e44  jal         func_397910
    ctx->pc = 0x2D31C8u;
    SET_GPR_U32(ctx, 31, 0x2D31D0u);
    ctx->pc = 0x397910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397910u, 0x2D31C8u, 0x2D31D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D31D0u;
label_2d31d0:
    // 0x2d31d0: 0xc0e512a  jal         func_3944A8
    ctx->pc = 0x2D31D0u;
    SET_GPR_U32(ctx, 31, 0x2D31D8u);
    ctx->pc = 0x2D31D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D31D0u;
    // 0x2d31d4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3944A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3944A8u, 0x2D31D0u, 0x2D31D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D31D8u;
label_2d31d8:
    // 0x2d31d8: 0x1451fffb  bne         $v0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D31D8u;
    {
        const bool branch_taken_0x2d31d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2d31d8) {
            ctx->pc = 0x2D31C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d31c8;
        }
    }
    ctx->pc = 0x2D31E0u;
label_2d31e0:
    // 0x2d31e0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2d31e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d31e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d31e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d31e8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2d31e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d31ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d31ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d31f0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2d31f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x2d31f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d31f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d31f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D31F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D31FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D31F8u;
        // 0x2d31fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D31F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3200u;
}

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

// Function: sub_002D3318
// Address: 0x2d3318 - 0x2d3380
void sub_002D3318_0x2d3318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3318_0x2d3318");
#endif

    switch (ctx->pc) {
        case 0x2d3340u: goto label_2d3340;
        case 0x2d334cu: goto label_2d334c;
        case 0x2d3360u: goto label_2d3360;
        default: break;
    }

    ctx->pc = 0x2d3318u;

    // 0x2d3318: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d3318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d331c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d331cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d3320: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d3320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d3324: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d3324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3328: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d3328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d332c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d332cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d3330: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3330u;
    {
        const bool branch_taken_0x2d3330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3330u;
        // 0x2d3334: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3330) {
            ctx->pc = 0x2D3340u;
            goto label_2d3340;
        }
    }
    ctx->pc = 0x2D3338u;
    // 0x2d3338: 0xc0b4cf8  jal         func_2D33E0
    ctx->pc = 0x2D3338u;
    SET_GPR_U32(ctx, 31, 0x2D3340u);
    ctx->pc = 0x2D33E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D33E0u, 0x2D3338u, 0x2D3340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3340u;
label_2d3340:
    // 0x2d3340: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d3340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3344: 0xc0e52ae  jal         func_394AB8
    ctx->pc = 0x2D3344u;
    SET_GPR_U32(ctx, 31, 0x2D334Cu);
    ctx->pc = 0x2D3348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3344u;
    // 0x2d3348: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394AB8u, 0x2D3344u, 0x2D334Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D334Cu;
label_2d334c:
    // 0x2d334c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D334Cu;
    {
        const bool branch_taken_0x2d334c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D334Cu;
        // 0x2d3350: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d334c) {
            ctx->pc = 0x2D3368u;
            goto label_2d3368;
        }
    }
    ctx->pc = 0x2D3354u;
    // 0x2d3354: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x2d3354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2d3358: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x2D3358u;
    SET_GPR_U32(ctx, 31, 0x2D3360u);
    ctx->pc = 0x2D335Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3358u;
    // 0x2d335c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x2D3358u, 0x2D3360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3360u;
label_2d3360:
    // 0x2d3360: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D3360u;
    {
        const bool branch_taken_0x2d3360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3360u;
        // 0x2d3364: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3360) {
            ctx->pc = 0x2D336Cu;
            goto label_2d336c;
        }
    }
    ctx->pc = 0x2D3368u;
label_2d3368:
    // 0x2d3368: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d3368u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d336c:
    // 0x2d336c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d336cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3370: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d3370u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d3374: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d3374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3378: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3378u;
        // 0x2d337c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3380u;
}

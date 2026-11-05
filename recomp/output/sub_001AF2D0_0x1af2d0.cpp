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

// Function: sub_001AF2D0
// Address: 0x1af2d0 - 0x1af340
void sub_001AF2D0_0x1af2d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF2D0_0x1af2d0");
#endif

    switch (ctx->pc) {
        case 0x1af2e4u: goto label_1af2e4;
        case 0x1af2f8u: goto label_1af2f8;
        case 0x1af31cu: goto label_1af31c;
        case 0x1af32cu: goto label_1af32c;
        default: break;
    }

    ctx->pc = 0x1af2d0u;

    // 0x1af2d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1af2d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af2d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1af2d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1af2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1af2dc: 0xc06c11c  jal         func_1B0470
    ctx->pc = 0x1AF2DCu;
    SET_GPR_U32(ctx, 31, 0x1AF2E4u);
    ctx->pc = 0x1AF2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF2DCu;
    // 0x1af2e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0470u, 0x1AF2DCu, 0x1AF2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF2E4u;
label_1af2e4:
    // 0x1af2e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1af2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1af2e8: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1AF2E8u;
    {
        const bool branch_taken_0x1af2e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1af2e8) {
            ctx->pc = 0x1AF324u;
            goto label_1af324;
        }
    }
    ctx->pc = 0x1AF2F0u;
    // 0x1af2f0: 0xc08f672  jal         func_23D9C8
    ctx->pc = 0x1AF2F0u;
    SET_GPR_U32(ctx, 31, 0x1AF2F8u);
    ctx->pc = 0x1AF2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF2F0u;
    // 0x1af2f4: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x1AF2F0u, 0x1AF2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF2F8u;
label_1af2f8:
    // 0x1af2f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF2F8u;
    {
        const bool branch_taken_0x1af2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF2F8u;
        // 0x1af2fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af2f8) {
            ctx->pc = 0x1AF30Cu;
            goto label_1af30c;
        }
    }
    ctx->pc = 0x1AF300u;
    // 0x1af300: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1af300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1af304: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF304u;
    {
        const bool branch_taken_0x1af304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF304u;
        // 0x1af308: 0x24060113  addiu       $a2, $zero, 0x113 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af304) {
            ctx->pc = 0x1AF314u;
            goto label_1af314;
        }
    }
    ctx->pc = 0x1AF30Cu;
label_1af30c:
    // 0x1af30c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1af30cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1af310: 0x24060111  addiu       $a2, $zero, 0x111
    ctx->pc = 0x1af310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 273));
label_1af314:
    // 0x1af314: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AF314u;
    SET_GPR_U32(ctx, 31, 0x1AF31Cu);
    ctx->pc = 0x1AF318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF314u;
    // 0x1af318: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AF314u, 0x1AF31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF31Cu;
label_1af31c:
    // 0x1af31c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1AF31Cu;
    {
        const bool branch_taken_0x1af31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF31Cu;
        // 0x1af320: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af31c) {
            ctx->pc = 0x1AF334u;
            goto label_1af334;
        }
    }
    ctx->pc = 0x1AF324u;
label_1af324:
    // 0x1af324: 0xc06bd02  jal         func_1AF408
    ctx->pc = 0x1AF324u;
    SET_GPR_U32(ctx, 31, 0x1AF32Cu);
    ctx->pc = 0x1AF328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF324u;
    // 0x1af328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF408u, 0x1AF324u, 0x1AF32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF32Cu;
label_1af32c:
    // 0x1af32c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1af32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af330: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af330u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1af334:
    // 0x1af334: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1af334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1af338: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF338u;
        // 0x1af33c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF340u;
}

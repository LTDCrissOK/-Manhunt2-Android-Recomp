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

// Function: sub_0020E2C8
// Address: 0x20e2c8 - 0x20e340
void sub_0020E2C8_0x20e2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020E2C8_0x20e2c8");
#endif

    switch (ctx->pc) {
        case 0x20e2f0u: goto label_20e2f0;
        case 0x20e2f8u: goto label_20e2f8;
        case 0x20e30cu: goto label_20e30c;
        case 0x20e314u: goto label_20e314;
        case 0x20e324u: goto label_20e324;
        case 0x20e32cu: goto label_20e32c;
        default: break;
    }

    ctx->pc = 0x20e2c8u;

    // 0x20e2c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20e2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20e2cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20e2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20e2d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20e2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20e2d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20e2d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e2d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20e2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20e2dc: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x20e2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x20e2e0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20E2E0u;
    {
        const bool branch_taken_0x20e2e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E2E0u;
        // 0x20e2e4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e2e0) {
            ctx->pc = 0x20E2F0u;
            goto label_20e2f0;
        }
    }
    ctx->pc = 0x20E2E8u;
    // 0x20e2e8: 0xc0c3212  jal         func_30C848
    ctx->pc = 0x20E2E8u;
    SET_GPR_U32(ctx, 31, 0x20E2F0u);
    ctx->pc = 0x30C848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C848u, 0x20E2E8u, 0x20E2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E2F0u;
label_20e2f0:
    // 0x20e2f0: 0xc0c31d0  jal         func_30C740
    ctx->pc = 0x20E2F0u;
    SET_GPR_U32(ctx, 31, 0x20E2F8u);
    ctx->pc = 0x20E2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E2F0u;
    // 0x20e2f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C740u, 0x20E2F0u, 0x20E2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E2F8u;
label_20e2f8:
    // 0x20e2f8: 0xae020104  sw          $v0, 0x104($s0)
    ctx->pc = 0x20e2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 2));
    // 0x20e2fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20e2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20e300: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x20e300u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x20e304: 0xc083938  jal         func_20E4E0
    ctx->pc = 0x20E304u;
    SET_GPR_U32(ctx, 31, 0x20E30Cu);
    ctx->pc = 0x20E308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E304u;
    // 0x20e308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E4E0u, 0x20E304u, 0x20E30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E30Cu;
label_20e30c:
    // 0x20e30c: 0xc085ea2  jal         func_217A88
    ctx->pc = 0x20E30Cu;
    SET_GPR_U32(ctx, 31, 0x20E314u);
    ctx->pc = 0x20E310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E30Cu;
    // 0x20e310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217A88u, 0x20E30Cu, 0x20E314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E314u;
label_20e314:
    // 0x20e314: 0x8e050104  lw          $a1, 0x104($s0)
    ctx->pc = 0x20e314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x20e318: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20e318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20e31c: 0xc0849de  jal         func_212778
    ctx->pc = 0x20E31Cu;
    SET_GPR_U32(ctx, 31, 0x20E324u);
    ctx->pc = 0x20E320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E31Cu;
    // 0x20e320: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212778u, 0x20E31Cu, 0x20E324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E324u;
label_20e324:
    // 0x20e324: 0xc083892  jal         func_20E248
    ctx->pc = 0x20E324u;
    SET_GPR_U32(ctx, 31, 0x20E32Cu);
    ctx->pc = 0x20E328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20E324u;
    // 0x20e328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E248u, 0x20E324u, 0x20E32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20E32Cu;
label_20e32c:
    // 0x20e32c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20e32cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20e330: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20e330u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20e334: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20e334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20e338: 0x3e00008  jr          $ra
    ctx->pc = 0x20E338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20E33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20E338u;
        // 0x20e33c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20E338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20E340u;
}

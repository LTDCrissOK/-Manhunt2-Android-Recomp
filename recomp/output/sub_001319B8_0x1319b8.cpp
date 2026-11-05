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

// Function: sub_001319B8
// Address: 0x1319b8 - 0x131a48
void sub_001319B8_0x1319b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001319B8_0x1319b8");
#endif

    switch (ctx->pc) {
        case 0x1319dcu: goto label_1319dc;
        case 0x1319e4u: goto label_1319e4;
        case 0x1319ecu: goto label_1319ec;
        case 0x131a00u: goto label_131a00;
        case 0x131a10u: goto label_131a10;
        case 0x131a24u: goto label_131a24;
        case 0x131a34u: goto label_131a34;
        default: break;
    }

    ctx->pc = 0x1319b8u;

    // 0x1319b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1319b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1319bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1319bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1319c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1319c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1319c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1319c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1319c8: 0x8e020218  lw          $v0, 0x218($s0)
    ctx->pc = 0x1319c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
    // 0x1319cc: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1319CCu;
    {
        const bool branch_taken_0x1319cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1319cc) {
            ctx->pc = 0x1319D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1319CCu;
            // 0x1319d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131A3Cu;
            goto label_131a3c;
        }
    }
    ctx->pc = 0x1319D4u;
    // 0x1319d4: 0xc04c974  jal         func_1325D0
    ctx->pc = 0x1319D4u;
    SET_GPR_U32(ctx, 31, 0x1319DCu);
    ctx->pc = 0x1325D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1325D0u, 0x1319D4u, 0x1319DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1319DCu;
label_1319dc:
    // 0x1319dc: 0xc04c7b6  jal         func_131ED8
    ctx->pc = 0x1319DCu;
    SET_GPR_U32(ctx, 31, 0x1319E4u);
    ctx->pc = 0x1319E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1319DCu;
    // 0x1319e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131ED8u, 0x1319DCu, 0x1319E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1319E4u;
label_1319e4:
    // 0x1319e4: 0xc04c9de  jal         func_132778
    ctx->pc = 0x1319E4u;
    SET_GPR_U32(ctx, 31, 0x1319ECu);
    ctx->pc = 0x1319E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1319E4u;
    // 0x1319e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132778u, 0x1319E4u, 0x1319ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1319ECu;
label_1319ec:
    // 0x1319ec: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1319ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1319f0: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1319F0u;
    {
        const bool branch_taken_0x1319f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1319f0) {
            ctx->pc = 0x1319F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1319F0u;
            // 0x1319f4: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131A14u;
            goto label_131a14;
        }
    }
    ctx->pc = 0x1319F8u;
    // 0x1319f8: 0xc04b39e  jal         func_12CE78
    ctx->pc = 0x1319F8u;
    SET_GPR_U32(ctx, 31, 0x131A00u);
    ctx->pc = 0x12CE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CE78u, 0x1319F8u, 0x131A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A00u;
label_131a00:
    // 0x131a00: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x131A00u;
    {
        const bool branch_taken_0x131a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x131a00) {
            ctx->pc = 0x131A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131A00u;
            // 0x131a04: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131A14u;
            goto label_131a14;
        }
    }
    ctx->pc = 0x131A08u;
    // 0x131a08: 0xc04b39a  jal         func_12CE68
    ctx->pc = 0x131A08u;
    SET_GPR_U32(ctx, 31, 0x131A10u);
    ctx->pc = 0x131A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131A08u;
    // 0x131a0c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CE68u, 0x131A08u, 0x131A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A10u;
label_131a10:
    // 0x131a10: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x131a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_131a14:
    // 0x131a14: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x131A14u;
    {
        const bool branch_taken_0x131a14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x131a14) {
            ctx->pc = 0x131A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131A14u;
            // 0x131a18: 0xae00021c  sw          $zero, 0x21C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131A38u;
            goto label_131a38;
        }
    }
    ctx->pc = 0x131A1Cu;
    // 0x131a1c: 0xc04b39e  jal         func_12CE78
    ctx->pc = 0x131A1Cu;
    SET_GPR_U32(ctx, 31, 0x131A24u);
    ctx->pc = 0x12CE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CE78u, 0x131A1Cu, 0x131A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A24u;
label_131a24:
    // 0x131a24: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x131A24u;
    {
        const bool branch_taken_0x131a24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x131a24) {
            ctx->pc = 0x131A28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131A24u;
            // 0x131a28: 0xae00021c  sw          $zero, 0x21C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131A38u;
            goto label_131a38;
        }
    }
    ctx->pc = 0x131A2Cu;
    // 0x131a2c: 0xc04b39a  jal         func_12CE68
    ctx->pc = 0x131A2Cu;
    SET_GPR_U32(ctx, 31, 0x131A34u);
    ctx->pc = 0x131A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131A2Cu;
    // 0x131a30: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CE68u, 0x131A2Cu, 0x131A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A34u;
label_131a34:
    // 0x131a34: 0xae00021c  sw          $zero, 0x21C($s0)
    ctx->pc = 0x131a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 0));
label_131a38:
    // 0x131a38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x131a38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_131a3c:
    // 0x131a3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x131a3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x131a40: 0x3e00008  jr          $ra
    ctx->pc = 0x131A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131A40u;
        // 0x131a44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131A40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131A48u;
}

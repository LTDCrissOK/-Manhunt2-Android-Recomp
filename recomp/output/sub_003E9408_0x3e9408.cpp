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

// Function: sub_003E9408
// Address: 0x3e9408 - 0x3e94b0
void sub_003E9408_0x3e9408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9408_0x3e9408");
#endif

    switch (ctx->pc) {
        case 0x3e9428u: goto label_3e9428;
        case 0x3e9440u: goto label_3e9440;
        case 0x3e9450u: goto label_3e9450;
        case 0x3e9468u: goto label_3e9468;
        case 0x3e9480u: goto label_3e9480;
        case 0x3e9490u: goto label_3e9490;
        default: break;
    }

    ctx->pc = 0x3e9408u;

    // 0x3e9408: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e9408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e940c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e940cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e9410: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e9410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e9414: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e9414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e9418: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e9418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e941c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e941cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e9420: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3E9420u;
    {
        const bool branch_taken_0x3e9420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9420) {
            ctx->pc = 0x3E9424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9420u;
            // 0x3e9424: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E945Cu;
            goto label_3e945c;
        }
    }
    ctx->pc = 0x3E9428u;
label_3e9428:
    // 0x3e9428: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e9428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e942c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e942cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e9430: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E9430u;
    {
        const bool branch_taken_0x3e9430 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9430) {
            ctx->pc = 0x3E9434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9430u;
            // 0x3e9434: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9448u;
            goto label_3e9448;
        }
    }
    ctx->pc = 0x3E9438u;
    // 0x3e9438: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x3E9438u;
    SET_GPR_U32(ctx, 31, 0x3E9440u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3E9438u, 0x3E9440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9440u;
label_3e9440:
    // 0x3e9440: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e9440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e9444: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3e9444u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e9448:
    // 0x3e9448: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E9448u;
    SET_GPR_U32(ctx, 31, 0x3E9450u);
    ctx->pc = 0x3E944Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9448u;
    // 0x3e944c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E9448u, 0x3E9450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9450u;
label_3e9450:
    // 0x3e9450: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3E9450u;
    {
        const bool branch_taken_0x3e9450 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9450u;
        // 0x3e9454: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9450) {
            ctx->pc = 0x3E9428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9428;
        }
    }
    ctx->pc = 0x3E9458u;
    // 0x3e9458: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e945c:
    // 0x3e945c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3E945Cu;
    {
        const bool branch_taken_0x3e945c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e945c) {
            ctx->pc = 0x3E9460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E945Cu;
            // 0x3e9460: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E949Cu;
            goto label_3e949c;
        }
    }
    ctx->pc = 0x3E9464u;
    // 0x3e9464: 0x0  nop
    ctx->pc = 0x3e9464u;
    // NOP
label_3e9468:
    // 0x3e9468: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e946c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e946cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e9470: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E9470u;
    {
        const bool branch_taken_0x3e9470 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9470) {
            ctx->pc = 0x3E9474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9470u;
            // 0x3e9474: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9488u;
            goto label_3e9488;
        }
    }
    ctx->pc = 0x3E9478u;
    // 0x3e9478: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x3E9478u;
    SET_GPR_U32(ctx, 31, 0x3E9480u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3E9478u, 0x3E9480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9480u;
label_3e9480:
    // 0x3e9480: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e9484: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3e9484u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e9488:
    // 0x3e9488: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E9488u;
    SET_GPR_U32(ctx, 31, 0x3E9490u);
    ctx->pc = 0x3E948Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9488u;
    // 0x3e948c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E9488u, 0x3E9490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9490u;
label_3e9490:
    // 0x3e9490: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3E9490u;
    {
        const bool branch_taken_0x3e9490 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9490u;
        // 0x3e9494: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9490) {
            ctx->pc = 0x3E9468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9468;
        }
    }
    ctx->pc = 0x3E9498u;
    // 0x3e9498: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3e9498u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_3e949c:
    // 0x3e949c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e949cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e94a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e94a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e94a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e94a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e94a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E94A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E94ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E94A8u;
        // 0x3e94ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E94A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E94B0u;
}

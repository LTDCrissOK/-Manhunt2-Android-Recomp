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

// Function: sub_003E94C8
// Address: 0x3e94c8 - 0x3e9570
void sub_003E94C8_0x3e94c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E94C8_0x3e94c8");
#endif

    switch (ctx->pc) {
        case 0x3e94e8u: goto label_3e94e8;
        case 0x3e9500u: goto label_3e9500;
        case 0x3e9510u: goto label_3e9510;
        case 0x3e9528u: goto label_3e9528;
        case 0x3e9540u: goto label_3e9540;
        case 0x3e9550u: goto label_3e9550;
        default: break;
    }

    ctx->pc = 0x3e94c8u;

    // 0x3e94c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e94c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e94cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e94ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e94d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e94d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e94d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e94d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e94d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e94d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e94dc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e94dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e94e0: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x3E94E0u;
    {
        const bool branch_taken_0x3e94e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e94e0) {
            ctx->pc = 0x3E94E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E94E0u;
            // 0x3e94e4: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E951Cu;
            goto label_3e951c;
        }
    }
    ctx->pc = 0x3E94E8u;
label_3e94e8:
    // 0x3e94e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e94e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e94ec: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e94ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e94f0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E94F0u;
    {
        const bool branch_taken_0x3e94f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e94f0) {
            ctx->pc = 0x3E94F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E94F0u;
            // 0x3e94f4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9508u;
            goto label_3e9508;
        }
    }
    ctx->pc = 0x3E94F8u;
    // 0x3e94f8: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x3E94F8u;
    SET_GPR_U32(ctx, 31, 0x3E9500u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3E94F8u, 0x3E9500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9500u;
label_3e9500:
    // 0x3e9500: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e9500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3e9504: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3e9504u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e9508:
    // 0x3e9508: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E9508u;
    SET_GPR_U32(ctx, 31, 0x3E9510u);
    ctx->pc = 0x3E950Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9508u;
    // 0x3e950c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E9508u, 0x3E9510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9510u;
label_3e9510:
    // 0x3e9510: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3E9510u;
    {
        const bool branch_taken_0x3e9510 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9510u;
        // 0x3e9514: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9510) {
            ctx->pc = 0x3E94E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e94e8;
        }
    }
    ctx->pc = 0x3E9518u;
    // 0x3e9518: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e951c:
    // 0x3e951c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3E951Cu;
    {
        const bool branch_taken_0x3e951c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e951c) {
            ctx->pc = 0x3E9520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E951Cu;
            // 0x3e9520: 0xae200048  sw          $zero, 0x48($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E955Cu;
            goto label_3e955c;
        }
    }
    ctx->pc = 0x3E9524u;
    // 0x3e9524: 0x0  nop
    ctx->pc = 0x3e9524u;
    // NOP
label_3e9528:
    // 0x3e9528: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e952c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e952cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3e9530: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3E9530u;
    {
        const bool branch_taken_0x3e9530 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9530) {
            ctx->pc = 0x3E9534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9530u;
            // 0x3e9534: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9548u;
            goto label_3e9548;
        }
    }
    ctx->pc = 0x3E9538u;
    // 0x3e9538: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x3E9538u;
    SET_GPR_U32(ctx, 31, 0x3E9540u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3E9538u, 0x3E9540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9540u;
label_3e9540:
    // 0x3e9540: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3e9544: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3e9544u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e9548:
    // 0x3e9548: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E9548u;
    SET_GPR_U32(ctx, 31, 0x3E9550u);
    ctx->pc = 0x3E954Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9548u;
    // 0x3e954c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E9548u, 0x3E9550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9550u;
label_3e9550:
    // 0x3e9550: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3E9550u;
    {
        const bool branch_taken_0x3e9550 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9550u;
        // 0x3e9554: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9550) {
            ctx->pc = 0x3E9528u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9528;
        }
    }
    ctx->pc = 0x3E9558u;
    // 0x3e9558: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3e9558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_3e955c:
    // 0x3e955c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e955cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e9560: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e9560u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e9564: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e9564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e9568: 0x3e00008  jr          $ra
    ctx->pc = 0x3E9568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9568u;
        // 0x3e956c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E9570u;
}

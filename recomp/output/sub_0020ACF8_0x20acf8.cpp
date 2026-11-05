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

// Function: sub_0020ACF8
// Address: 0x20acf8 - 0x20ad78
void sub_0020ACF8_0x20acf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020ACF8_0x20acf8");
#endif

    switch (ctx->pc) {
        case 0x20ad14u: goto label_20ad14;
        case 0x20ad20u: goto label_20ad20;
        case 0x20ad28u: goto label_20ad28;
        case 0x20ad30u: goto label_20ad30;
        case 0x20ad3cu: goto label_20ad3c;
        case 0x20ad44u: goto label_20ad44;
        case 0x20ad54u: goto label_20ad54;
        case 0x20ad64u: goto label_20ad64;
        default: break;
    }

    ctx->pc = 0x20acf8u;

    // 0x20acf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20acf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20acfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20acfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20ad00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20ad00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ad04: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20ad04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20ad08: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x20ad08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x20ad0c: 0xc0acc1a  jal         func_2B3068
    ctx->pc = 0x20AD0Cu;
    SET_GPR_U32(ctx, 31, 0x20AD14u);
    ctx->pc = 0x20AD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AD0Cu;
    // 0x20ad10: 0x24842508  addiu       $a0, $a0, 0x2508 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3068u, 0x20AD0Cu, 0x20AD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AD14u;
label_20ad14:
    // 0x20ad14: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x20ad14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x20ad18: 0xc0aea7c  jal         func_2BA9F0
    ctx->pc = 0x20AD18u;
    SET_GPR_U32(ctx, 31, 0x20AD20u);
    ctx->pc = 0x20AD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AD18u;
    // 0x20ad1c: 0x24844ec0  addiu       $a0, $a0, 0x4EC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA9F0u, 0x20AD18u, 0x20AD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AD20u;
label_20ad20:
    // 0x20ad20: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x20AD20u;
    SET_GPR_U32(ctx, 31, 0x20AD28u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x20AD20u, 0x20AD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AD28u;
label_20ad28:
    // 0x20ad28: 0xc0a6ee6  jal         func_29BB98
    ctx->pc = 0x20AD28u;
    SET_GPR_U32(ctx, 31, 0x20AD30u);
    ctx->pc = 0x20AD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AD28u;
    // 0x20ad2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29BB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29BB98u, 0x20AD28u, 0x20AD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AD30u;
label_20ad30:
    // 0x20ad30: 0x3c040052  lui         $a0, 0x52
    ctx->pc = 0x20ad30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)82 << 16));
    // 0x20ad34: 0xc0ad600  jal         func_2B5800
    ctx->pc = 0x20AD34u;
    SET_GPR_U32(ctx, 31, 0x20AD3Cu);
    ctx->pc = 0x20AD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AD34u;
    // 0x20ad38: 0x2484ac80  addiu       $a0, $a0, -0x5380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5800u, 0x20AD34u, 0x20AD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AD3Cu;
label_20ad3c:
    // 0x20ad3c: 0xc075984  jal         func_1D6610
    ctx->pc = 0x20AD3Cu;
    SET_GPR_U32(ctx, 31, 0x20AD44u);
    ctx->pc = 0x1D6610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6610u, 0x20AD3Cu, 0x20AD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AD44u;
label_20ad44:
    // 0x20ad44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20AD44u;
    {
        const bool branch_taken_0x20ad44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ad44) {
            ctx->pc = 0x20AD5Cu;
            goto label_20ad5c;
        }
    }
    ctx->pc = 0x20AD4Cu;
    // 0x20ad4c: 0xc0cd7f0  jal         func_335FC0
    ctx->pc = 0x20AD4Cu;
    SET_GPR_U32(ctx, 31, 0x20AD54u);
    ctx->pc = 0x335FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335FC0u, 0x20AD4Cu, 0x20AD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AD54u;
label_20ad54:
    // 0x20ad54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x20AD54u;
    {
        const bool branch_taken_0x20ad54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20AD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD54u;
        // 0x20ad58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ad54) {
            ctx->pc = 0x20AD68u;
            goto label_20ad68;
        }
    }
    ctx->pc = 0x20AD5Cu;
label_20ad5c:
    // 0x20ad5c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x20AD5Cu;
    SET_GPR_U32(ctx, 31, 0x20AD64u);
    ctx->pc = 0x20AD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20AD5Cu;
    // 0x20ad60: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x20AD5Cu, 0x20AD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20AD64u;
label_20ad64:
    // 0x20ad64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x20ad64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20ad68:
    // 0x20ad68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20ad68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ad6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20ad6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20ad70: 0x3e00008  jr          $ra
    ctx->pc = 0x20AD70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20AD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20AD70u;
        // 0x20ad74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20AD70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20AD78u;
}

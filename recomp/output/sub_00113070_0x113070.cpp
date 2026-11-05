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

// Function: sub_00113070
// Address: 0x113070 - 0x1130e0
void sub_00113070_0x113070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113070_0x113070");
#endif

    switch (ctx->pc) {
        case 0x11308cu: goto label_11308c;
        case 0x11309cu: goto label_11309c;
        case 0x1130a8u: goto label_1130a8;
        case 0x1130b4u: goto label_1130b4;
        case 0x1130c4u: goto label_1130c4;
        default: break;
    }

    ctx->pc = 0x113070u;

    // 0x113070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x113070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x113074: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x113074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x113078: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x113078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11307c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11307cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x113080: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x113080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x113084: 0xc0449d6  jal         func_112758
    ctx->pc = 0x113084u;
    SET_GPR_U32(ctx, 31, 0x11308Cu);
    ctx->pc = 0x113088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113084u;
    // 0x113088: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x112758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x112758u, 0x113084u, 0x11308Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11308Cu;
label_11308c:
    // 0x11308c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11308cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113090: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x113090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x113094: 0xc046138  jal         func_1184E0
    ctx->pc = 0x113094u;
    SET_GPR_U32(ctx, 31, 0x11309Cu);
    ctx->pc = 0x113098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113094u;
    // 0x113098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1184E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1184E0u, 0x113094u, 0x11309Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11309Cu;
label_11309c:
    // 0x11309c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11309cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1130a0: 0xc046154  jal         func_118550
    ctx->pc = 0x1130A0u;
    SET_GPR_U32(ctx, 31, 0x1130A8u);
    ctx->pc = 0x1130A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1130A0u;
    // 0x1130a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118550u, 0x1130A0u, 0x1130A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1130A8u;
label_1130a8:
    // 0x1130a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1130a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1130ac: 0xc046256  jal         func_118958
    ctx->pc = 0x1130ACu;
    SET_GPR_U32(ctx, 31, 0x1130B4u);
    ctx->pc = 0x1130B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1130ACu;
    // 0x1130b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x1130ACu, 0x1130B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1130B4u;
label_1130b4:
    // 0x1130b4: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x1130b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1130b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1130b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1130bc: 0xc044e28  jal         func_1138A0
    ctx->pc = 0x1130BCu;
    SET_GPR_U32(ctx, 31, 0x1130C4u);
    ctx->pc = 0x1130C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1130BCu;
    // 0x1130c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1138A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1138A0u, 0x1130BCu, 0x1130C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1130C4u;
label_1130c4:
    // 0x1130c4: 0xae2201e8  sw          $v0, 0x1E8($s1)
    ctx->pc = 0x1130c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 2));
    // 0x1130c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1130c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1130cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1130ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1130d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1130d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1130d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1130D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1130D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130D4u;
        // 0x1130d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1130D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1130DCu;
    // 0x1130dc: 0x0  nop
    ctx->pc = 0x1130dcu;
    // NOP
    ctx->pc = 0x1130e0u;
}

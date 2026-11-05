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

// Function: sub_00308270
// Address: 0x308270 - 0x3082d8
void sub_00308270_0x308270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308270_0x308270");
#endif

    switch (ctx->pc) {
        case 0x30828cu: goto label_30828c;
        case 0x308298u: goto label_308298;
        case 0x3082a8u: goto label_3082a8;
        case 0x3082c4u: goto label_3082c4;
        default: break;
    }

    ctx->pc = 0x308270u;

    // 0x308270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x308270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x308274: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x308274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308278: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x308278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30827c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x30827cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x308280: 0x8c840060  lw          $a0, 0x60($a0)
    ctx->pc = 0x308280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x308284: 0xc0989a0  jal         func_262680
    ctx->pc = 0x308284u;
    SET_GPR_U32(ctx, 31, 0x30828Cu);
    ctx->pc = 0x308288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308284u;
    // 0x308288: 0x8c900234  lw          $s0, 0x234($a0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 564)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262680u, 0x308284u, 0x30828Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30828Cu;
label_30828c:
    // 0x30828c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30828cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308290: 0xc08a15a  jal         func_228568
    ctx->pc = 0x308290u;
    SET_GPR_U32(ctx, 31, 0x308298u);
    ctx->pc = 0x308294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308290u;
    // 0x308294: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228568u, 0x308290u, 0x308298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308298u;
label_308298:
    // 0x308298: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x308298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30829c: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x30829cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3082a0: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x3082A0u;
    SET_GPR_U32(ctx, 31, 0x3082A8u);
    ctx->pc = 0x3082A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3082A0u;
    // 0x3082a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x3082A0u, 0x3082A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3082A8u;
label_3082a8:
    // 0x3082a8: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x3082a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x3082ac: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x3082acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x3082b0: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x3082b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x3082b4: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3082B4u;
    {
        const bool branch_taken_0x3082b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x3082b4) {
            ctx->pc = 0x3082B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3082B4u;
            // 0x3082b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3082C8u;
            goto label_3082c8;
        }
    }
    ctx->pc = 0x3082BCu;
    // 0x3082bc: 0xc08c5b8  jal         func_2316E0
    ctx->pc = 0x3082BCu;
    SET_GPR_U32(ctx, 31, 0x3082C4u);
    ctx->pc = 0x3082C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3082BCu;
    // 0x3082c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2316E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2316E0u, 0x3082BCu, 0x3082C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3082C4u;
label_3082c4:
    // 0x3082c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3082c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3082c8:
    // 0x3082c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3082c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3082cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3082CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3082D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3082CCu;
        // 0x3082d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3082CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3082D4u;
    // 0x3082d4: 0x0  nop
    ctx->pc = 0x3082d4u;
    // NOP
    ctx->pc = 0x3082d8u;
}

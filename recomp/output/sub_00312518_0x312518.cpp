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

// Function: sub_00312518
// Address: 0x312518 - 0x312588
void sub_00312518_0x312518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312518_0x312518");
#endif

    switch (ctx->pc) {
        case 0x31253cu: goto label_31253c;
        case 0x312544u: goto label_312544;
        case 0x312554u: goto label_312554;
        case 0x31256cu: goto label_31256c;
        default: break;
    }

    ctx->pc = 0x312518u;

    // 0x312518: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x312518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31251c: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x31251cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x312520: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x312520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x312524: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x312524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312528: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x312528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31252c: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x31252cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
    // 0x312530: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x312530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x312534: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x312534u;
    SET_GPR_U32(ctx, 31, 0x31253Cu);
    ctx->pc = 0x312538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312534u;
    // 0x312538: 0x24842170  addiu       $a0, $a0, 0x2170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x312534u, 0x31253Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31253Cu;
label_31253c:
    // 0x31253c: 0xc0c4808  jal         func_312020
    ctx->pc = 0x31253Cu;
    SET_GPR_U32(ctx, 31, 0x312544u);
    ctx->pc = 0x312540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31253Cu;
    // 0x312540: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312020u, 0x31253Cu, 0x312544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312544u;
label_312544:
    // 0x312544: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x312544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312548: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x312548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31254c: 0xc0c4828  jal         func_3120A0
    ctx->pc = 0x31254Cu;
    SET_GPR_U32(ctx, 31, 0x312554u);
    ctx->pc = 0x312550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31254Cu;
    // 0x312550: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3120A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3120A0u, 0x31254Cu, 0x312554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312554u;
label_312554:
    // 0x312554: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x312554u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
    // 0x312558: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x312558u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x31255c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31255cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312560: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x312560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312564: 0xc0c4898  jal         func_312260
    ctx->pc = 0x312564u;
    SET_GPR_U32(ctx, 31, 0x31256Cu);
    ctx->pc = 0x312568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312564u;
    // 0x312568: 0x24a52490  addiu       $a1, $a1, 0x2490 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312260u, 0x312564u, 0x31256Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31256Cu;
label_31256c:
    // 0x31256c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x31256cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312570: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x312570u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x312574: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x312574u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312578: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x312578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31257c: 0x3e00008  jr          $ra
    ctx->pc = 0x31257Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31257Cu;
        // 0x312580: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31257Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312584u;
    // 0x312584: 0x0  nop
    ctx->pc = 0x312584u;
    // NOP
    ctx->pc = 0x312588u;
}

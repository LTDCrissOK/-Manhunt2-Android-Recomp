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

// Function: sub_0017F518
// Address: 0x17f518 - 0x17f568
void sub_0017F518_0x17f518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F518_0x17f518");
#endif

    switch (ctx->pc) {
        case 0x17f534u: goto label_17f534;
        case 0x17f53cu: goto label_17f53c;
        case 0x17f548u: goto label_17f548;
        default: break;
    }

    ctx->pc = 0x17f518u;

    // 0x17f518: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17f518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17f51c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17f51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17f520: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17f520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f524: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17f524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17f528: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17f528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17f52c: 0xc05fe58  jal         func_17F960
    ctx->pc = 0x17F52Cu;
    SET_GPR_U32(ctx, 31, 0x17F534u);
    ctx->pc = 0x17F530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F52Cu;
    // 0x17f530: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F960u, 0x17F52Cu, 0x17F534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F534u;
label_17f534:
    // 0x17f534: 0xc060140  jal         func_180500
    ctx->pc = 0x17F534u;
    SET_GPR_U32(ctx, 31, 0x17F53Cu);
    ctx->pc = 0x17F538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F534u;
    // 0x17f538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180500u, 0x17F534u, 0x17F53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F53Cu;
label_17f53c:
    // 0x17f53c: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x17f53cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x17f540: 0xc0601b8  jal         func_1806E0
    ctx->pc = 0x17F540u;
    SET_GPR_U32(ctx, 31, 0x17F548u);
    ctx->pc = 0x17F544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F540u;
    // 0x17f544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1806E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1806E0u, 0x17F540u, 0x17F548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F548u;
label_17f548:
    // 0x17f548: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17f548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f54c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17f54cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17f550: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x17f550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x17f554: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17f554u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f558: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17f558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f55c: 0x3e00008  jr          $ra
    ctx->pc = 0x17F55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F55Cu;
        // 0x17f560: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F55Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F564u;
    // 0x17f564: 0x0  nop
    ctx->pc = 0x17f564u;
    // NOP
    ctx->pc = 0x17f568u;
}

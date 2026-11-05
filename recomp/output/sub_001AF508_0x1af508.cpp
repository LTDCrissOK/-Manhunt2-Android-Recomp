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

// Function: sub_001AF508
// Address: 0x1af508 - 0x1af570
void sub_001AF508_0x1af508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF508_0x1af508");
#endif

    switch (ctx->pc) {
        case 0x1af51cu: goto label_1af51c;
        case 0x1af530u: goto label_1af530;
        case 0x1af554u: goto label_1af554;
        default: break;
    }

    ctx->pc = 0x1af508u;

    // 0x1af508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1af508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af50c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1af510: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1af510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1af514: 0xc06c11c  jal         func_1B0470
    ctx->pc = 0x1AF514u;
    SET_GPR_U32(ctx, 31, 0x1AF51Cu);
    ctx->pc = 0x1AF518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF514u;
    // 0x1af518: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0470u, 0x1AF514u, 0x1AF51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF51Cu;
label_1af51c:
    // 0x1af51c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1af51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1af520: 0x1043000e  beq         $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1AF520u;
    {
        const bool branch_taken_0x1af520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1AF524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF520u;
        // 0x1af524: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af520) {
            ctx->pc = 0x1AF55Cu;
            goto label_1af55c;
        }
    }
    ctx->pc = 0x1AF528u;
    // 0x1af528: 0xc08f672  jal         func_23D9C8
    ctx->pc = 0x1AF528u;
    SET_GPR_U32(ctx, 31, 0x1AF530u);
    ctx->pc = 0x1AF52Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF528u;
    // 0x1af52c: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x1AF528u, 0x1AF530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF530u;
label_1af530:
    // 0x1af530: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF530u;
    {
        const bool branch_taken_0x1af530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF530u;
        // 0x1af534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af530) {
            ctx->pc = 0x1AF544u;
            goto label_1af544;
        }
    }
    ctx->pc = 0x1AF538u;
    // 0x1af538: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1af538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1af53c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AF53Cu;
    {
        const bool branch_taken_0x1af53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF53Cu;
        // 0x1af540: 0x24060115  addiu       $a2, $zero, 0x115 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 277));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af53c) {
            ctx->pc = 0x1AF54Cu;
            goto label_1af54c;
        }
    }
    ctx->pc = 0x1AF544u;
label_1af544:
    // 0x1af544: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1af544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1af548: 0x24060117  addiu       $a2, $zero, 0x117
    ctx->pc = 0x1af548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 279));
label_1af54c:
    // 0x1af54c: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AF54Cu;
    SET_GPR_U32(ctx, 31, 0x1AF554u);
    ctx->pc = 0x1AF550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF54Cu;
    // 0x1af550: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AF54Cu, 0x1AF554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF554u;
label_1af554:
    // 0x1af554: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF554u;
    {
        const bool branch_taken_0x1af554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF554u;
        // 0x1af558: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af554) {
            ctx->pc = 0x1AF560u;
            goto label_1af560;
        }
    }
    ctx->pc = 0x1AF55Cu;
label_1af55c:
    // 0x1af55c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af55cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1af560:
    // 0x1af560: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1af560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1af564: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF564u;
        // 0x1af568: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF56Cu;
    // 0x1af56c: 0x0  nop
    ctx->pc = 0x1af56cu;
    // NOP
    ctx->pc = 0x1af570u;
}

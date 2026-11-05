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

// Function: sub_0013F500
// Address: 0x13f500 - 0x13f548
void sub_0013F500_0x13f500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F500_0x13f500");
#endif

    switch (ctx->pc) {
        case 0x13f518u: goto label_13f518;
        case 0x13f534u: goto label_13f534;
        default: break;
    }

    ctx->pc = 0x13f500u;

    // 0x13f500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13f500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13f504: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13f504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13f508: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x13f508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13f50c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13f50cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f510: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x13F510u;
    SET_GPR_U32(ctx, 31, 0x13F518u);
    ctx->pc = 0x13F514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F510u;
    // 0x13f514: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x13F510u, 0x13F518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F518u;
label_13f518:
    // 0x13f518: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x13f518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13f51c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13F51Cu;
    {
        const bool branch_taken_0x13f51c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x13F520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F51Cu;
        // 0x13f520: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f51c) {
            ctx->pc = 0x13F538u;
            goto label_13f538;
        }
    }
    ctx->pc = 0x13F524u;
    // 0x13f524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13f524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f528: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13f528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f52c: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x13F52Cu;
    SET_GPR_U32(ctx, 31, 0x13F534u);
    ctx->pc = 0x13F530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F52Cu;
    // 0x13f530: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x13F52Cu, 0x13F534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F534u;
label_13f534:
    // 0x13f534: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13f534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13f538:
    // 0x13f538: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13f538u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f53c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x13f53cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13f540: 0x3e00008  jr          $ra
    ctx->pc = 0x13F540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F540u;
        // 0x13f544: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F548u;
}

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

// Function: sub_00143FC0
// Address: 0x143fc0 - 0x144020
void sub_00143FC0_0x143fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143FC0_0x143fc0");
#endif

    switch (ctx->pc) {
        case 0x143fdcu: goto label_143fdc;
        case 0x143fe8u: goto label_143fe8;
        case 0x143ff8u: goto label_143ff8;
        case 0x144008u: goto label_144008;
        default: break;
    }

    ctx->pc = 0x143fc0u;

    // 0x143fc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x143fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x143fc4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x143fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x143fc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x143fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x143fcc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x143fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x143fd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x143fd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143fd4: 0xc04e86c  jal         func_13A1B0
    ctx->pc = 0x143FD4u;
    SET_GPR_U32(ctx, 31, 0x143FDCu);
    ctx->pc = 0x143FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143FD4u;
    // 0x143fd8: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A1B0u, 0x143FD4u, 0x143FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143FDCu;
label_143fdc:
    // 0x143fdc: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x143fdcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x143fe0: 0xc04d930  jal         func_1364C0
    ctx->pc = 0x143FE0u;
    SET_GPR_U32(ctx, 31, 0x143FE8u);
    ctx->pc = 0x143FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143FE0u;
    // 0x143fe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1364C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1364C0u, 0x143FE0u, 0x143FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143FE8u;
label_143fe8:
    // 0x143fe8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x143FE8u;
    {
        const bool branch_taken_0x143fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143fe8) {
            ctx->pc = 0x144000u;
            goto label_144000;
        }
    }
    ctx->pc = 0x143FF0u;
    // 0x143ff0: 0xc051098  jal         func_144260
    ctx->pc = 0x143FF0u;
    SET_GPR_U32(ctx, 31, 0x143FF8u);
    ctx->pc = 0x143FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143FF0u;
    // 0x143ff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144260u, 0x143FF0u, 0x143FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143FF8u;
label_143ff8:
    // 0x143ff8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x143FF8u;
    {
        const bool branch_taken_0x143ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FF8u;
        // 0x143ffc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143ff8) {
            ctx->pc = 0x14400Cu;
            goto label_14400c;
        }
    }
    ctx->pc = 0x144000u;
label_144000:
    // 0x144000: 0xc051098  jal         func_144260
    ctx->pc = 0x144000u;
    SET_GPR_U32(ctx, 31, 0x144008u);
    ctx->pc = 0x144004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144000u;
    // 0x144004: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144260u, 0x144000u, 0x144008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144008u;
label_144008:
    // 0x144008: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x144008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14400c:
    // 0x14400c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14400cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x144010: 0x3e00008  jr          $ra
    ctx->pc = 0x144010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144010u;
        // 0x144014: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144018u;
    // 0x144018: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x144018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14401c: 0x0  nop
    ctx->pc = 0x14401cu;
    // NOP
    ctx->pc = 0x144020u;
}

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

// Function: sub_001462D8
// Address: 0x1462d8 - 0x146330
void sub_001462D8_0x1462d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001462D8_0x1462d8");
#endif

    switch (ctx->pc) {
        case 0x1462ecu: goto label_1462ec;
        case 0x1462fcu: goto label_1462fc;
        case 0x14630cu: goto label_14630c;
        case 0x14631cu: goto label_14631c;
        default: break;
    }

    ctx->pc = 0x1462d8u;

    // 0x1462d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1462d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1462dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1462dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1462e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1462e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1462e4: 0xc0518cc  jal         func_146330
    ctx->pc = 0x1462E4u;
    SET_GPR_U32(ctx, 31, 0x1462ECu);
    ctx->pc = 0x1462E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1462E4u;
    // 0x1462e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146330u, 0x1462E4u, 0x1462ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1462ECu;
label_1462ec:
    // 0x1462ec: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1462ECu;
    {
        const bool branch_taken_0x1462ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1462ec) {
            ctx->pc = 0x1462F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1462ECu;
            // 0x1462f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146320u;
            goto label_146320;
        }
    }
    ctx->pc = 0x1462F4u;
    // 0x1462f4: 0xc0518fa  jal         func_1463E8
    ctx->pc = 0x1462F4u;
    SET_GPR_U32(ctx, 31, 0x1462FCu);
    ctx->pc = 0x1462F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1462F4u;
    // 0x1462f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1463E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1463E8u, 0x1462F4u, 0x1462FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1462FCu;
label_1462fc:
    // 0x1462fc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1462FCu;
    {
        const bool branch_taken_0x1462fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1462fc) {
            ctx->pc = 0x146300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1462FCu;
            // 0x146300: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146320u;
            goto label_146320;
        }
    }
    ctx->pc = 0x146304u;
    // 0x146304: 0xc051948  jal         func_146520
    ctx->pc = 0x146304u;
    SET_GPR_U32(ctx, 31, 0x14630Cu);
    ctx->pc = 0x146308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146304u;
    // 0x146308: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146520u, 0x146304u, 0x14630Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14630Cu;
label_14630c:
    // 0x14630c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x14630Cu;
    {
        const bool branch_taken_0x14630c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14630c) {
            ctx->pc = 0x146310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14630Cu;
            // 0x146310: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x146320u;
            goto label_146320;
        }
    }
    ctx->pc = 0x146314u;
    // 0x146314: 0xc0519a0  jal         func_146680
    ctx->pc = 0x146314u;
    SET_GPR_U32(ctx, 31, 0x14631Cu);
    ctx->pc = 0x146318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146314u;
    // 0x146318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146680u, 0x146314u, 0x14631Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14631Cu;
label_14631c:
    // 0x14631c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14631cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_146320:
    // 0x146320: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x146320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x146324: 0x3e00008  jr          $ra
    ctx->pc = 0x146324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146324u;
        // 0x146328: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14632Cu;
    // 0x14632c: 0x0  nop
    ctx->pc = 0x14632cu;
    // NOP
    ctx->pc = 0x146330u;
}

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

// Function: sub_00278FB8
// Address: 0x278fb8 - 0x279028
void sub_00278FB8_0x278fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00278FB8_0x278fb8");
#endif

    switch (ctx->pc) {
        case 0x278fd4u: goto label_278fd4;
        case 0x278fe0u: goto label_278fe0;
        case 0x279014u: goto label_279014;
        default: break;
    }

    ctx->pc = 0x278fb8u;

    // 0x278fb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x278fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x278fbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x278fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x278fc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x278fc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278fc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x278fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x278fc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x278fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x278fcc: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x278FCCu;
    SET_GPR_U32(ctx, 31, 0x278FD4u);
    ctx->pc = 0x278FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278FCCu;
    // 0x278fd0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x278FCCu, 0x278FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278FD4u;
label_278fd4:
    // 0x278fd4: 0x8e020114  lw          $v0, 0x114($s0)
    ctx->pc = 0x278fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
    // 0x278fd8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x278FD8u;
    {
        const bool branch_taken_0x278fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278FD8u;
        // 0x278fdc: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278fd8) {
            ctx->pc = 0x278FECu;
            goto label_278fec;
        }
    }
    ctx->pc = 0x278FE0u;
label_278fe0:
    // 0x278fe0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x278fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x278fe4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x278fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x278fe8: 0xae020114  sw          $v0, 0x114($s0)
    ctx->pc = 0x278fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 2));
label_278fec:
    // 0x278fec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x278fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x278ff0: 0x80440004  lb          $a0, 0x4($v0)
    ctx->pc = 0x278ff0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x278ff4: 0x5083fffa  beql        $a0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x278FF4u;
    {
        const bool branch_taken_0x278ff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x278ff4) {
            ctx->pc = 0x278FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278FF4u;
            // 0x278ff8: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278fe0;
        }
    }
    ctx->pc = 0x278FFCu;
    // 0x278ffc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x278ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x279000: 0x5082fff7  beql        $a0, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x279000u;
    {
        const bool branch_taken_0x279000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x279000) {
            ctx->pc = 0x279004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x279000u;
            // 0x279004: 0x8e020114  lw          $v0, 0x114($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278fe0;
        }
    }
    ctx->pc = 0x279008u;
    // 0x279008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x279008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27900c: 0xc09e2c2  jal         func_278B08
    ctx->pc = 0x27900Cu;
    SET_GPR_U32(ctx, 31, 0x279014u);
    ctx->pc = 0x279010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27900Cu;
    // 0x279010: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x27900Cu, 0x279014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279014u;
label_279014:
    // 0x279014: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x279014u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279018: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x279018u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27901c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27901cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279020: 0x3e00008  jr          $ra
    ctx->pc = 0x279020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x279020u;
        // 0x279024: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279028u;
}

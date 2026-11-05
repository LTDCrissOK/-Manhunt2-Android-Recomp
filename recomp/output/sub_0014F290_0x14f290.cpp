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

// Function: sub_0014F290
// Address: 0x14f290 - 0x14f310
void sub_0014F290_0x14f290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F290_0x14f290");
#endif

    switch (ctx->pc) {
        case 0x14f2c8u: goto label_14f2c8;
        case 0x14f2d4u: goto label_14f2d4;
        case 0x14f2e8u: goto label_14f2e8;
        case 0x14f2f8u: goto label_14f2f8;
        default: break;
    }

    ctx->pc = 0x14f290u;

    // 0x14f290: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x14f290u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14f294: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x14f294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14f298: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x14f298u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x14f29c: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14f29cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14f2a0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x14f2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x14f2a4: 0x24840504  addiu       $a0, $a0, 0x504
    ctx->pc = 0x14f2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1284));
    // 0x14f2a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14f2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14f2ac: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14f2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14f2b0: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x14f2b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14f2b4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x14f2b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14f2b8: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14F2B8u;
    {
        const bool branch_taken_0x14f2b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2B8u;
        // 0x14f2bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f2b8) {
            ctx->pc = 0x14F2FCu;
            goto label_14f2fc;
        }
    }
    ctx->pc = 0x14F2C0u;
    // 0x14f2c0: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x14F2C0u;
    SET_GPR_U32(ctx, 31, 0x14F2C8u);
    ctx->pc = 0x14F2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F2C0u;
    // 0x14f2c4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x14F2C0u, 0x14F2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F2C8u;
label_14f2c8:
    // 0x14f2c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14f2c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f2cc: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x14F2CCu;
    SET_GPR_U32(ctx, 31, 0x14F2D4u);
    ctx->pc = 0x14F2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F2CCu;
    // 0x14f2d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x14F2CCu, 0x14F2D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F2D4u;
label_14f2d4:
    // 0x14f2d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14F2D4u;
    {
        const bool branch_taken_0x14f2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2D4u;
        // 0x14f2d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f2d4) {
            ctx->pc = 0x14F2F0u;
            goto label_14f2f0;
        }
    }
    ctx->pc = 0x14F2DCu;
    // 0x14f2dc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x14f2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x14f2e0: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14F2E0u;
    SET_GPR_U32(ctx, 31, 0x14F2E8u);
    ctx->pc = 0x14F2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F2E0u;
    // 0x14f2e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14F2E0u, 0x14F2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F2E8u;
label_14f2e8:
    // 0x14f2e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14F2E8u;
    {
        const bool branch_taken_0x14f2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F2E8u;
        // 0x14f2ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f2e8) {
            ctx->pc = 0x14F2FCu;
            goto label_14f2fc;
        }
    }
    ctx->pc = 0x14F2F0u;
label_14f2f0:
    // 0x14f2f0: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14F2F0u;
    SET_GPR_U32(ctx, 31, 0x14F2F8u);
    ctx->pc = 0x14F2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F2F0u;
    // 0x14f2f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14F2F0u, 0x14F2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F2F8u;
label_14f2f8:
    // 0x14f2f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14f2f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f2fc:
    // 0x14f2fc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14f2fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f300: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14f300u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14f304: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14f304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f308: 0x3e00008  jr          $ra
    ctx->pc = 0x14F308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F308u;
        // 0x14f30c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F310u;
}

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

// Function: sub_002B91B0
// Address: 0x2b91b0 - 0x2b9218
void sub_002B91B0_0x2b91b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B91B0_0x2b91b0");
#endif

    switch (ctx->pc) {
        case 0x2b91d8u: goto label_2b91d8;
        case 0x2b91f8u: goto label_2b91f8;
        case 0x2b9204u: goto label_2b9204;
        default: break;
    }

    ctx->pc = 0x2b91b0u;

    // 0x2b91b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b91b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b91b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b91b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b91b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b91b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b91bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b91bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b91c0: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x2b91c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2b91c4: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B91C4u;
    {
        const bool branch_taken_0x2b91c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b91c4) {
            ctx->pc = 0x2B91C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B91C4u;
            // 0x2b91c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B920Cu;
            goto label_2b920c;
        }
    }
    ctx->pc = 0x2B91CCu;
    // 0x2b91cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b91ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b91d0: 0xc0ae458  jal         func_2B9160
    ctx->pc = 0x2B91D0u;
    SET_GPR_U32(ctx, 31, 0x2B91D8u);
    ctx->pc = 0x2B91D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B91D0u;
    // 0x2b91d4: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9160u, 0x2B91D0u, 0x2B91D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B91D8u;
label_2b91d8:
    // 0x2b91d8: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2b91d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2b91dc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2b91dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x2b91e0: 0x2442dce0  addiu       $v0, $v0, -0x2320
    ctx->pc = 0x2b91e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
    // 0x2b91e4: 0xac60a320  sw          $zero, -0x5CE0($v1)
    ctx->pc = 0x2b91e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x66A320u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66A320u, _value); } while (0);
    // 0x2b91e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b91e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b91ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b91ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b91f0: 0xc0b7082  jal         func_2DC208
    ctx->pc = 0x2B91F0u;
    SET_GPR_U32(ctx, 31, 0x2B91F8u);
    ctx->pc = 0x2B91F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B91F0u;
    // 0x2b91f4: 0xac406394  sw          $zero, 0x6394($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 25492), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC208u, 0x2B91F0u, 0x2B91F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B91F8u;
label_2b91f8:
    // 0x2b91f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b91f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b91fc: 0xc0ae422  jal         func_2B9088
    ctx->pc = 0x2B91FCu;
    SET_GPR_U32(ctx, 31, 0x2B9204u);
    ctx->pc = 0x2B9200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B91FCu;
    // 0x2b9200: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9088u, 0x2B91FCu, 0x2B9204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9204u;
label_2b9204:
    // 0x2b9204: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2b9204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2b9208: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b9208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b920c:
    // 0x2b920c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b920cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9210: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9210u;
        // 0x2b9214: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9218u;
}

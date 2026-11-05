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

// Function: sub_001571B0
// Address: 0x1571b0 - 0x157228
void sub_001571B0_0x1571b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001571B0_0x1571b0");
#endif

    switch (ctx->pc) {
        case 0x1571d0u: goto label_1571d0;
        case 0x1571e8u: goto label_1571e8;
        case 0x1571f4u: goto label_1571f4;
        case 0x157204u: goto label_157204;
        case 0x157214u: goto label_157214;
        default: break;
    }

    ctx->pc = 0x1571b0u;

    // 0x1571b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1571b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1571b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1571b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1571b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1571b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1571bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1571bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1571c0: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x1571c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1571c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1571c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1571c8: 0xc04f130  jal         func_13C4C0
    ctx->pc = 0x1571C8u;
    SET_GPR_U32(ctx, 31, 0x1571D0u);
    ctx->pc = 0x1571CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1571C8u;
    // 0x1571cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4C0u, 0x1571C8u, 0x1571D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1571D0u;
label_1571d0:
    // 0x1571d0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1571d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1571d4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1571d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1571d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1571d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1571dc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1571dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1571e0: 0xc04d74a  jal         func_135D28
    ctx->pc = 0x1571E0u;
    SET_GPR_U32(ctx, 31, 0x1571E8u);
    ctx->pc = 0x1571E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1571E0u;
    // 0x1571e4: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135D28u, 0x1571E0u, 0x1571E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1571E8u;
label_1571e8:
    // 0x1571e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1571e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1571ec: 0xc04f12a  jal         func_13C4A8
    ctx->pc = 0x1571ECu;
    SET_GPR_U32(ctx, 31, 0x1571F4u);
    ctx->pc = 0x1571F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1571ECu;
    // 0x1571f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4A8u, 0x1571ECu, 0x1571F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1571F4u;
label_1571f4:
    // 0x1571f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1571f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1571f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1571f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1571fc: 0xc04f10c  jal         func_13C430
    ctx->pc = 0x1571FCu;
    SET_GPR_U32(ctx, 31, 0x157204u);
    ctx->pc = 0x157200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1571FCu;
    // 0x157200: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C430u, 0x1571FCu, 0x157204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157204u;
label_157204:
    // 0x157204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x157204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157208: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x157208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15720c: 0xc04f118  jal         func_13C460
    ctx->pc = 0x15720Cu;
    SET_GPR_U32(ctx, 31, 0x157214u);
    ctx->pc = 0x157210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15720Cu;
    // 0x157210: 0x2406001a  addiu       $a2, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C460u, 0x15720Cu, 0x157214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157214u;
label_157214:
    // 0x157214: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x157214u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157218: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x157218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15721c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15721cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157220: 0x3e00008  jr          $ra
    ctx->pc = 0x157220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157220u;
        // 0x157224: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157228u;
}

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

// Function: sub_00103450
// Address: 0x103450 - 0x1034d0
void sub_00103450_0x103450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103450_0x103450");
#endif

    switch (ctx->pc) {
        case 0x103488u: goto label_103488;
        case 0x1034a0u: goto label_1034a0;
        default: break;
    }

    ctx->pc = 0x103450u;

    // 0x103450: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x103450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x103454: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x103454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x103458: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x103458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10345c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10345cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x103460: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x103460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103464: 0x8c620724  lw          $v0, 0x724($v1)
    ctx->pc = 0x103464u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F0724u));
    // 0x103468: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x103468u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10346c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10346cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x103470: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x103470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x103474: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x103474u;
    {
        const bool branch_taken_0x103474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x103478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103474u;
        // 0x103478: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103474) {
            ctx->pc = 0x1034B4u;
            goto label_1034b4;
        }
    }
    ctx->pc = 0x10347Cu;
    // 0x10347c: 0x3c12003f  lui         $s2, 0x3F
    ctx->pc = 0x10347cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)63 << 16));
    // 0x103480: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x103480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103484: 0x0  nop
    ctx->pc = 0x103484u;
    // NOP
label_103488:
    // 0x103488: 0x8e420720  lw          $v0, 0x720($s2)
    ctx->pc = 0x103488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1824)));
    // 0x10348c: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x10348cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x103490: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x103490u;
    {
        const bool branch_taken_0x103490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x103494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103490u;
        // 0x103494: 0x8e620724  lw          $v0, 0x724($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103490) {
            ctx->pc = 0x1034A4u;
            goto label_1034a4;
        }
    }
    ctx->pc = 0x103498u;
    // 0x103498: 0xc041360  jal         func_104D80
    ctx->pc = 0x103498u;
    SET_GPR_U32(ctx, 31, 0x1034A0u);
    ctx->pc = 0x104D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104D80u, 0x103498u, 0x1034A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1034A0u;
label_1034a0:
    // 0x1034a0: 0x8e620724  lw          $v0, 0x724($s3)
    ctx->pc = 0x1034a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1828)));
label_1034a4:
    // 0x1034a4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1034a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1034a8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1034a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1034ac: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1034ACu;
    {
        const bool branch_taken_0x1034ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1034B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034ACu;
        // 0x1034b0: 0x2631004c  addiu       $s1, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1034ac) {
            ctx->pc = 0x103488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_103488;
        }
    }
    ctx->pc = 0x1034B4u;
label_1034b4:
    // 0x1034b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1034b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1034b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1034b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1034bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1034bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1034c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1034c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1034c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1034c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1034c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1034C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1034CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1034C8u;
        // 0x1034cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1034C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1034D0u;
}

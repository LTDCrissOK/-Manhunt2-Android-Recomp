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

// Function: sub_001D2480
// Address: 0x1d2480 - 0x1d24e8
void sub_001D2480_0x1d2480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2480_0x1d2480");
#endif

    switch (ctx->pc) {
        case 0x1d24c0u: goto label_1d24c0;
        case 0x1d24ccu: goto label_1d24cc;
        case 0x1d24d8u: goto label_1d24d8;
        default: break;
    }

    ctx->pc = 0x1d2480u;

    // 0x1d2480: 0x27bdef80  addiu       $sp, $sp, -0x1080
    ctx->pc = 0x1d2480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963072));
    // 0x1d2484: 0xffb01070  sd          $s0, 0x1070($sp)
    ctx->pc = 0x1d2484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4208), GPR_U64(ctx, 16));
    // 0x1d2488: 0xffbf1078  sd          $ra, 0x1078($sp)
    ctx->pc = 0x1d2488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4216), GPR_U64(ctx, 31));
    // 0x1d248c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d248cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2490: 0x8e05001c  lw          $a1, 0x1C($s0)
    ctx->pc = 0x1d2490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1d2494: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D2494u;
    {
        const bool branch_taken_0x1d2494 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2494u;
        // 0x1d2498: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2494) {
            ctx->pc = 0x1D24D8u;
            goto label_1d24d8;
        }
    }
    ctx->pc = 0x1D249Cu;
    // 0x1d249c: 0x9202001a  lbu         $v0, 0x1A($s0)
    ctx->pc = 0x1d249cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 26)));
    // 0x1d24a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d24a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d24a4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1d24a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1d24a8: 0x1464000b  bne         $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D24A8u;
    {
        const bool branch_taken_0x1d24a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D24ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D24A8u;
        // 0x1d24ac: 0xa202001a  sb          $v0, 0x1A($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d24a8) {
            ctx->pc = 0x1D24D8u;
            goto label_1d24d8;
        }
    }
    ctx->pc = 0x1D24B0u;
    // 0x1d24b0: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x1d24b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1d24b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d24b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d24b8: 0xc09e844  jal         func_27A110
    ctx->pc = 0x1D24B8u;
    SET_GPR_U32(ctx, 31, 0x1D24C0u);
    ctx->pc = 0x1D24BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D24B8u;
    // 0x1d24bc: 0x8e070024  lw          $a3, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A110u, 0x1D24B8u, 0x1D24C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D24C0u;
label_1d24c0:
    // 0x1d24c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d24c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d24c4: 0xc074802  jal         func_1D2008
    ctx->pc = 0x1D24C4u;
    SET_GPR_U32(ctx, 31, 0x1D24CCu);
    ctx->pc = 0x1D24C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D24C4u;
    // 0x1d24c8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2008u, 0x1D24C4u, 0x1D24CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D24CCu;
label_1d24cc:
    // 0x1d24cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d24ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d24d0: 0xc09e866  jal         func_27A198
    ctx->pc = 0x1D24D0u;
    SET_GPR_U32(ctx, 31, 0x1D24D8u);
    ctx->pc = 0x1D24D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D24D0u;
    // 0x1d24d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27A198u, 0x1D24D0u, 0x1D24D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D24D8u;
label_1d24d8:
    // 0x1d24d8: 0xdfb01070  ld          $s0, 0x1070($sp)
    ctx->pc = 0x1d24d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 4208)));
    // 0x1d24dc: 0xdfbf1078  ld          $ra, 0x1078($sp)
    ctx->pc = 0x1d24dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 4216)));
    // 0x1d24e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D24E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D24E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D24E0u;
        // 0x1d24e4: 0x27bd1080  addiu       $sp, $sp, 0x1080 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D24E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D24E8u;
}

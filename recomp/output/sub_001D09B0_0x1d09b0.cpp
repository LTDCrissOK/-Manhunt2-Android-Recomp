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

// Function: sub_001D09B0
// Address: 0x1d09b0 - 0x1d0a18
void sub_001D09B0_0x1d09b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D09B0_0x1d09b0");
#endif

    switch (ctx->pc) {
        case 0x1d09d8u: goto label_1d09d8;
        case 0x1d09f8u: goto label_1d09f8;
        default: break;
    }

    ctx->pc = 0x1d09b0u;

    // 0x1d09b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d09b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d09b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d09b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d09b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d09b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d09bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d09bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d09c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d09c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d09c4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d09c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d09c8: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D09C8u;
    {
        const bool branch_taken_0x1d09c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D09CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D09C8u;
        // 0x1d09cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d09c8) {
            ctx->pc = 0x1D0A08u;
            goto label_1d0a08;
        }
    }
    ctx->pc = 0x1D09D0u;
    // 0x1d09d0: 0x9482002a  lhu         $v0, 0x2A($a0)
    ctx->pc = 0x1d09d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x1d09d4: 0x0  nop
    ctx->pc = 0x1d09d4u;
    // NOP
label_1d09d8:
    // 0x1d09d8: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1d09d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1d09dc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D09DCu;
    {
        const bool branch_taken_0x1d09dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D09E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D09DCu;
        // 0x1d09e0: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d09dc) {
            ctx->pc = 0x1D09F8u;
            goto label_1d09f8;
        }
    }
    ctx->pc = 0x1D09E4u;
    // 0x1d09e4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d09e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d09e8: 0x50820001  beql        $a0, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D09E8u;
    {
        const bool branch_taken_0x1d09e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d09e8) {
            ctx->pc = 0x1D09ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D09E8u;
            // 0x1d09ec: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D09F0u;
            goto label_1d09f0;
        }
    }
    ctx->pc = 0x1D09F0u;
label_1d09f0:
    // 0x1d09f0: 0xc073e76  jal         func_1CF9D8
    ctx->pc = 0x1D09F0u;
    SET_GPR_U32(ctx, 31, 0x1D09F8u);
    ctx->pc = 0x1CF9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF9D8u, 0x1D09F0u, 0x1D09F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D09F8u;
label_1d09f8:
    // 0x1d09f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d09f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d09fc: 0x5480fff6  bnel        $a0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D09FCu;
    {
        const bool branch_taken_0x1d09fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d09fc) {
            ctx->pc = 0x1D0A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D09FCu;
            // 0x1d0a00: 0x9482002a  lhu         $v0, 0x2A($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D09D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d09d8;
        }
    }
    ctx->pc = 0x1D0A04u;
    // 0x1d0a04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0a04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0a08:
    // 0x1d0a08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0a08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0a0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0a10: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0A10u;
        // 0x1d0a14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0A18u;
}

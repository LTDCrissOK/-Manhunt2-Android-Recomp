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

// Function: sub_001D0A18
// Address: 0x1d0a18 - 0x1d0a80
void sub_001D0A18_0x1d0a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0A18_0x1d0a18");
#endif

    switch (ctx->pc) {
        case 0x1d0a40u: goto label_1d0a40;
        case 0x1d0a60u: goto label_1d0a60;
        default: break;
    }

    ctx->pc = 0x1d0a18u;

    // 0x1d0a18: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0a18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d0a1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d0a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d0a20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d0a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d0a24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d0a24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0a28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d0a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d0a2c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d0a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d0a30: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D0A30u;
    {
        const bool branch_taken_0x1d0a30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0A30u;
        // 0x1d0a34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0a30) {
            ctx->pc = 0x1D0A70u;
            goto label_1d0a70;
        }
    }
    ctx->pc = 0x1D0A38u;
    // 0x1d0a38: 0x9482002a  lhu         $v0, 0x2A($a0)
    ctx->pc = 0x1d0a38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x1d0a3c: 0x0  nop
    ctx->pc = 0x1d0a3cu;
    // NOP
label_1d0a40:
    // 0x1d0a40: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1d0a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1d0a44: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D0A44u;
    {
        const bool branch_taken_0x1d0a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0A44u;
        // 0x1d0a48: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0a44) {
            ctx->pc = 0x1D0A60u;
            goto label_1d0a60;
        }
    }
    ctx->pc = 0x1D0A4Cu;
    // 0x1d0a4c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d0a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d0a50: 0x50820001  beql        $a0, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1D0A50u;
    {
        const bool branch_taken_0x1d0a50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d0a50) {
            ctx->pc = 0x1D0A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0A50u;
            // 0x1d0a54: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0A58u;
            goto label_1d0a58;
        }
    }
    ctx->pc = 0x1D0A58u;
label_1d0a58:
    // 0x1d0a58: 0xc073e76  jal         func_1CF9D8
    ctx->pc = 0x1D0A58u;
    SET_GPR_U32(ctx, 31, 0x1D0A60u);
    ctx->pc = 0x1CF9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CF9D8u, 0x1D0A58u, 0x1D0A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D0A60u;
label_1d0a60:
    // 0x1d0a60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d0a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0a64: 0x5480fff6  bnel        $a0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1D0A64u;
    {
        const bool branch_taken_0x1d0a64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0a64) {
            ctx->pc = 0x1D0A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D0A64u;
            // 0x1d0a68: 0x9482002a  lhu         $v0, 0x2A($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D0A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d0a40;
        }
    }
    ctx->pc = 0x1D0A6Cu;
    // 0x1d0a6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d0a6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d0a70:
    // 0x1d0a70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d0a70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d0a74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d0a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0a78: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D0A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0A78u;
        // 0x1d0a7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0A80u;
}

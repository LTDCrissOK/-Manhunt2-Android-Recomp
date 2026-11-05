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

// Function: sub_002ABEB0
// Address: 0x2abeb0 - 0x2abf10
void sub_002ABEB0_0x2abeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABEB0_0x2abeb0");
#endif

    switch (ctx->pc) {
        case 0x2abed8u: goto label_2abed8;
        case 0x2abeecu: goto label_2abeec;
        default: break;
    }

    ctx->pc = 0x2abeb0u;

    // 0x2abeb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2abeb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2abeb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2abeb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2abeb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2abeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2abebc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2abebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2abec0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2abec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2abec4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2abec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2abec8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABEC8u;
    {
        const bool branch_taken_0x2abec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ABECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABEC8u;
        // 0x2abecc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2abec8) {
            ctx->pc = 0x2ABED8u;
            goto label_2abed8;
        }
    }
    ctx->pc = 0x2ABED0u;
    // 0x2abed0: 0xc0aafd8  jal         func_2ABF60
    ctx->pc = 0x2ABED0u;
    SET_GPR_U32(ctx, 31, 0x2ABED8u);
    ctx->pc = 0x2ABF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF60u, 0x2ABED0u, 0x2ABED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABED8u;
label_2abed8:
    // 0x2abed8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2abed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2abedc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ABEDCu;
    {
        const bool branch_taken_0x2abedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2abedc) {
            ctx->pc = 0x2ABEE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2ABEDCu;
            // 0x2abee0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2ABEF0u;
            goto label_2abef0;
        }
    }
    ctx->pc = 0x2ABEE4u;
    // 0x2abee4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2ABEE4u;
    SET_GPR_U32(ctx, 31, 0x2ABEECu);
    ctx->pc = 0x2ABEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ABEE4u;
    // 0x2abee8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2ABEE4u, 0x2ABEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABEECu;
label_2abeec:
    // 0x2abeec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2abeecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2abef0:
    // 0x2abef0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2abef0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2abef4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2abef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2abef8: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABEF8u;
        // 0x2abefc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABF00u;
    // 0x2abf00: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2abf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2abf04: 0x0  nop
    ctx->pc = 0x2abf04u;
    // NOP
    // 0x2abf08: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2abf08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2abf0c: 0x0  nop
    ctx->pc = 0x2abf0cu;
    // NOP
    ctx->pc = 0x2abf10u;
}

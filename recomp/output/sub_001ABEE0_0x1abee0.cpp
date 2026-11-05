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

// Function: sub_001ABEE0
// Address: 0x1abee0 - 0x1abf68
void sub_001ABEE0_0x1abee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABEE0_0x1abee0");
#endif

    switch (ctx->pc) {
        case 0x1abefcu: goto label_1abefc;
        case 0x1abf58u: goto label_1abf58;
        default: break;
    }

    ctx->pc = 0x1abee0u;

    // 0x1abee0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1abee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1abee4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1abee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1abee8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1abee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1abeec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1abeecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1abef0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1abef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1abef4: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1ABEF4u;
    SET_GPR_U32(ctx, 31, 0x1ABEFCu);
    ctx->pc = 0x1ABEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABEF4u;
    // 0x1abef8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1ABEF4u, 0x1ABEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABEFCu;
label_1abefc:
    // 0x1abefc: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x1abefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x1abf00: 0x240207ce  addiu       $v0, $zero, 0x7CE
    ctx->pc = 0x1abf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1998));
    // 0x1abf04: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1ABF04u;
    {
        const bool branch_taken_0x1abf04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1abf04) {
            ctx->pc = 0x1ABF08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABF04u;
            // 0x1abf08: 0x8e03014c  lw          $v1, 0x14C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABF30u;
            goto label_1abf30;
        }
    }
    ctx->pc = 0x1ABF0Cu;
    // 0x1abf0c: 0x8e0401e4  lw          $a0, 0x1E4($s0)
    ctx->pc = 0x1abf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x1abf10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1abf10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1abf14: 0x9482002a  lhu         $v0, 0x2A($a0)
    ctx->pc = 0x1abf14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x1abf18: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1abf18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1abf1c: 0xa482002a  sh          $v0, 0x2A($a0)
    ctx->pc = 0x1abf1cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x1abf20: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x1abf20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x1abf24: 0x8c620110  lw          $v0, 0x110($v1)
    ctx->pc = 0x1abf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x1abf28: 0xa0450030  sb          $a1, 0x30($v0)
    ctx->pc = 0x1abf28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x1abf2c: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x1abf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
label_1abf30:
    // 0x1abf30: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x1abf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1abf34: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ABF34u;
    {
        const bool branch_taken_0x1abf34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1abf34) {
            ctx->pc = 0x1ABF38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABF34u;
            // 0x1abf38: 0x8e020160  lw          $v0, 0x160($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABF48u;
            goto label_1abf48;
        }
    }
    ctx->pc = 0x1ABF3Cu;
    // 0x1abf3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1abf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1abf40: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x1abf40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    // 0x1abf44: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x1abf44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_1abf48:
    // 0x1abf48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ABF48u;
    {
        const bool branch_taken_0x1abf48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF48u;
        // 0x1abf4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abf48) {
            ctx->pc = 0x1ABF58u;
            goto label_1abf58;
        }
    }
    ctx->pc = 0x1ABF50u;
    // 0x1abf50: 0xc069b78  jal         func_1A6DE0
    ctx->pc = 0x1ABF50u;
    SET_GPR_U32(ctx, 31, 0x1ABF58u);
    ctx->pc = 0x1ABF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABF50u;
    // 0x1abf54: 0x240505af  addiu       $a1, $zero, 0x5AF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1455));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6DE0u, 0x1ABF50u, 0x1ABF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABF58u;
label_1abf58:
    // 0x1abf58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1abf58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1abf5c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1abf5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1abf60: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABF60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF60u;
        // 0x1abf64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABF60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABF68u;
}

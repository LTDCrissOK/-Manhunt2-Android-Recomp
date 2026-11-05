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

// Function: sub_00195CC8
// Address: 0x195cc8 - 0x195d40
void sub_00195CC8_0x195cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195CC8_0x195cc8");
#endif

    switch (ctx->pc) {
        case 0x195cc8u: goto label_195cc8;
        case 0x195cccu: goto label_195ccc;
        case 0x195cd0u: goto label_195cd0;
        case 0x195cd4u: goto label_195cd4;
        case 0x195cd8u: goto label_195cd8;
        case 0x195cdcu: goto label_195cdc;
        case 0x195ce0u: goto label_195ce0;
        case 0x195ce4u: goto label_195ce4;
        case 0x195ce8u: goto label_195ce8;
        case 0x195cecu: goto label_195cec;
        case 0x195cf0u: goto label_195cf0;
        case 0x195cf4u: goto label_195cf4;
        case 0x195cf8u: goto label_195cf8;
        case 0x195cfcu: goto label_195cfc;
        case 0x195d00u: goto label_195d00;
        case 0x195d04u: goto label_195d04;
        case 0x195d08u: goto label_195d08;
        case 0x195d0cu: goto label_195d0c;
        case 0x195d10u: goto label_195d10;
        case 0x195d14u: goto label_195d14;
        case 0x195d18u: goto label_195d18;
        case 0x195d1cu: goto label_195d1c;
        case 0x195d20u: goto label_195d20;
        case 0x195d24u: goto label_195d24;
        case 0x195d28u: goto label_195d28;
        case 0x195d2cu: goto label_195d2c;
        case 0x195d30u: goto label_195d30;
        case 0x195d34u: goto label_195d34;
        case 0x195d38u: goto label_195d38;
        case 0x195d3cu: goto label_195d3c;
        default: break;
    }

    ctx->pc = 0x195cc8u;

label_195cc8:
    // 0x195cc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x195cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_195ccc:
    // 0x195ccc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x195cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_195cd0:
    // 0x195cd0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x195cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_195cd4:
    // 0x195cd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x195cd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_195cd8:
    // 0x195cd8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x195cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_195cdc:
    // 0x195cdc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x195cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_195ce0:
    // 0x195ce0: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x195ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_195ce4:
    // 0x195ce4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x195ce4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_195ce8:
    // 0x195ce8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x195ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_195cec:
    // 0x195cec: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x195cecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_195cf0:
    // 0x195cf0: 0xc06faee  jal         func_1BEBB8
label_195cf4:
    if (ctx->pc == 0x195CF4u) {
        ctx->pc = 0x195CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195CF0u;
        // 0x195cf4: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195CF8u;
        goto label_195cf8;
    }
    ctx->pc = 0x195CF0u;
    SET_GPR_U32(ctx, 31, 0x195CF8u);
    ctx->pc = 0x195CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x195CF0u;
    // 0x195cf4: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBB8u, 0x195CF0u, 0x195CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195CF8u;
label_195cf8:
    // 0x195cf8: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x195cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_195cfc:
    // 0x195cfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_195d00:
    // 0x195d00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x195d00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_195d04:
    // 0x195d04: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x195d04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_195d08:
    // 0x195d08: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x195d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_195d0c:
    // 0x195d0c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x195d0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_195d10:
    // 0x195d10: 0x60f809  jalr        $v1
label_195d14:
    if (ctx->pc == 0x195D14u) {
        ctx->pc = 0x195D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D10u;
        // 0x195d14: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195D18u;
        goto label_195d18;
    }
    ctx->pc = 0x195D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x195D18u);
        ctx->pc = 0x195D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D10u;
        // 0x195d14: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195D10u, 0x195D18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x195D18u;
label_195d18:
    // 0x195d18: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x195d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_195d1c:
    // 0x195d1c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x195d1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_195d20:
    // 0x195d20: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x195d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
label_195d24:
    // 0x195d24: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x195d24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_195d28:
    // 0x195d28: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x195d28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_195d2c:
    // 0x195d2c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x195d2cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_195d30:
    // 0x195d30: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x195d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_195d34:
    // 0x195d34: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x195d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_195d38:
    // 0x195d38: 0x3e00008  jr          $ra
label_195d3c:
    if (ctx->pc == 0x195D3Cu) {
        ctx->pc = 0x195D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D38u;
        // 0x195d3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x195D40u;
        goto label_fallthrough_0x195d38;
    }
    ctx->pc = 0x195D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x195D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x195D38u;
        // 0x195d3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x195d38:
    ctx->pc = 0x195D40u;
}

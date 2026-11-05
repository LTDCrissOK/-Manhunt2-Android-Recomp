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

// Function: sub_00291CB8
// Address: 0x291cb8 - 0x291d38
void sub_00291CB8_0x291cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291CB8_0x291cb8");
#endif

    switch (ctx->pc) {
        case 0x291cb8u: goto label_291cb8;
        case 0x291cbcu: goto label_291cbc;
        case 0x291cc0u: goto label_291cc0;
        case 0x291cc4u: goto label_291cc4;
        case 0x291cc8u: goto label_291cc8;
        case 0x291cccu: goto label_291ccc;
        case 0x291cd0u: goto label_291cd0;
        case 0x291cd4u: goto label_291cd4;
        case 0x291cd8u: goto label_291cd8;
        case 0x291cdcu: goto label_291cdc;
        case 0x291ce0u: goto label_291ce0;
        case 0x291ce4u: goto label_291ce4;
        case 0x291ce8u: goto label_291ce8;
        case 0x291cecu: goto label_291cec;
        case 0x291cf0u: goto label_291cf0;
        case 0x291cf4u: goto label_291cf4;
        case 0x291cf8u: goto label_291cf8;
        case 0x291cfcu: goto label_291cfc;
        case 0x291d00u: goto label_291d00;
        case 0x291d04u: goto label_291d04;
        case 0x291d08u: goto label_291d08;
        case 0x291d0cu: goto label_291d0c;
        case 0x291d10u: goto label_291d10;
        case 0x291d14u: goto label_291d14;
        case 0x291d18u: goto label_291d18;
        case 0x291d1cu: goto label_291d1c;
        case 0x291d20u: goto label_291d20;
        case 0x291d24u: goto label_291d24;
        case 0x291d28u: goto label_291d28;
        case 0x291d2cu: goto label_291d2c;
        case 0x291d30u: goto label_291d30;
        case 0x291d34u: goto label_291d34;
        default: break;
    }

    ctx->pc = 0x291cb8u;

label_291cb8:
    // 0x291cb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x291cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_291cbc:
    // 0x291cbc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x291cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_291cc0:
    // 0x291cc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x291cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_291cc4:
    // 0x291cc4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x291cc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_291cc8:
    // 0x291cc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x291cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_291ccc:
    // 0x291ccc: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x291cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_291cd0:
    // 0x291cd0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x291cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_291cd4:
    // 0x291cd4: 0x2411000b  addiu       $s1, $zero, 0xB
    ctx->pc = 0x291cd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_291cd8:
    // 0x291cd8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x291cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_291cdc:
    // 0x291cdc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x291cdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_291ce0:
    // 0x291ce0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x291ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_291ce4:
    // 0x291ce4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_291ce8:
    if (ctx->pc == 0x291CE8u) {
        ctx->pc = 0x291CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291CE4u;
        // 0x291ce8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291CECu;
        goto label_291cec;
    }
    ctx->pc = 0x291CE4u;
    {
        const bool branch_taken_0x291ce4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x291ce4) {
            ctx->pc = 0x291CE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x291CE4u;
            // 0x291ce8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x291D00u;
            goto label_291d00;
        }
    }
    ctx->pc = 0x291CECu;
label_291cec:
    // 0x291cec: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x291cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_291cf0:
    // 0x291cf0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x291cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_291cf4:
    // 0x291cf4: 0x40f809  jalr        $v0
label_291cf8:
    if (ctx->pc == 0x291CF8u) {
        ctx->pc = 0x291CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291CF4u;
        // 0x291cf8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291CFCu;
        goto label_291cfc;
    }
    ctx->pc = 0x291CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x291CFCu);
        ctx->pc = 0x291CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291CF4u;
        // 0x291cf8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291CF4u, 0x291CFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x291CFCu;
label_291cfc:
    // 0x291cfc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x291cfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_291d00:
    // 0x291d00: 0x621fff7  bgez        $s1, . + 4 + (-0x9 << 2)
label_291d04:
    if (ctx->pc == 0x291D04u) {
        ctx->pc = 0x291D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D00u;
        // 0x291d04: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291D08u;
        goto label_291d08;
    }
    ctx->pc = 0x291D00u;
    {
        const bool branch_taken_0x291d00 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x291D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D00u;
        // 0x291d04: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291d00) {
            ctx->pc = 0x291CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_291ce0;
        }
    }
    ctx->pc = 0x291D08u;
label_291d08:
    // 0x291d08: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x291d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_291d0c:
    // 0x291d0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_291d10:
    if (ctx->pc == 0x291D10u) {
        ctx->pc = 0x291D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D0Cu;
        // 0x291d10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291D14u;
        goto label_291d14;
    }
    ctx->pc = 0x291D0Cu;
    {
        const bool branch_taken_0x291d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x291D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D0Cu;
        // 0x291d10: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291d0c) {
            ctx->pc = 0x291D20u;
            goto label_291d20;
        }
    }
    ctx->pc = 0x291D14u;
label_291d14:
    // 0x291d14: 0xc0f5222  jal         func_3D4888
label_291d18:
    if (ctx->pc == 0x291D18u) {
        ctx->pc = 0x291D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D14u;
        // 0x291d18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291D1Cu;
        goto label_291d1c;
    }
    ctx->pc = 0x291D14u;
    SET_GPR_U32(ctx, 31, 0x291D1Cu);
    ctx->pc = 0x291D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291D14u;
    // 0x291d18: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x291D14u, 0x291D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291D1Cu;
label_291d1c:
    // 0x291d1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x291d1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_291d20:
    // 0x291d20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x291d20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_291d24:
    // 0x291d24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x291d24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_291d28:
    // 0x291d28: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x291d28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_291d2c:
    // 0x291d2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x291d2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_291d30:
    // 0x291d30: 0x3e00008  jr          $ra
label_291d34:
    if (ctx->pc == 0x291D34u) {
        ctx->pc = 0x291D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D30u;
        // 0x291d34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x291D38u;
        goto label_fallthrough_0x291d30;
    }
    ctx->pc = 0x291D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291D30u;
        // 0x291d34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x291d30:
    ctx->pc = 0x291D38u;
}

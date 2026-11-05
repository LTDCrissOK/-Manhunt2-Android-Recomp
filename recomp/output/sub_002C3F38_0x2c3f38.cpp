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

// Function: sub_002C3F38
// Address: 0x2c3f38 - 0x2c3fc8
void sub_002C3F38_0x2c3f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3F38_0x2c3f38");
#endif

    switch (ctx->pc) {
        case 0x2c3f38u: goto label_2c3f38;
        case 0x2c3f3cu: goto label_2c3f3c;
        case 0x2c3f40u: goto label_2c3f40;
        case 0x2c3f44u: goto label_2c3f44;
        case 0x2c3f48u: goto label_2c3f48;
        case 0x2c3f4cu: goto label_2c3f4c;
        case 0x2c3f50u: goto label_2c3f50;
        case 0x2c3f54u: goto label_2c3f54;
        case 0x2c3f58u: goto label_2c3f58;
        case 0x2c3f5cu: goto label_2c3f5c;
        case 0x2c3f60u: goto label_2c3f60;
        case 0x2c3f64u: goto label_2c3f64;
        case 0x2c3f68u: goto label_2c3f68;
        case 0x2c3f6cu: goto label_2c3f6c;
        case 0x2c3f70u: goto label_2c3f70;
        case 0x2c3f74u: goto label_2c3f74;
        case 0x2c3f78u: goto label_2c3f78;
        case 0x2c3f7cu: goto label_2c3f7c;
        case 0x2c3f80u: goto label_2c3f80;
        case 0x2c3f84u: goto label_2c3f84;
        case 0x2c3f88u: goto label_2c3f88;
        case 0x2c3f8cu: goto label_2c3f8c;
        case 0x2c3f90u: goto label_2c3f90;
        case 0x2c3f94u: goto label_2c3f94;
        case 0x2c3f98u: goto label_2c3f98;
        case 0x2c3f9cu: goto label_2c3f9c;
        case 0x2c3fa0u: goto label_2c3fa0;
        case 0x2c3fa4u: goto label_2c3fa4;
        case 0x2c3fa8u: goto label_2c3fa8;
        case 0x2c3facu: goto label_2c3fac;
        case 0x2c3fb0u: goto label_2c3fb0;
        case 0x2c3fb4u: goto label_2c3fb4;
        case 0x2c3fb8u: goto label_2c3fb8;
        case 0x2c3fbcu: goto label_2c3fbc;
        case 0x2c3fc0u: goto label_2c3fc0;
        case 0x2c3fc4u: goto label_2c3fc4;
        default: break;
    }

    ctx->pc = 0x2c3f38u;

label_2c3f38:
    // 0x2c3f38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c3f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2c3f3c:
    // 0x2c3f3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c3f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c3f40:
    // 0x2c3f40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c3f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2c3f44:
    // 0x2c3f44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c3f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2c3f48:
    // 0x2c3f48: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c3f48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c3f4c:
    // 0x2c3f4c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2c3f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c3f50:
    // 0x2c3f50: 0x80430018  lb          $v1, 0x18($v0)
    ctx->pc = 0x2c3f50u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
label_2c3f54:
    // 0x2c3f54: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
label_2c3f58:
    if (ctx->pc == 0x2C3F58u) {
        ctx->pc = 0x2C3F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F54u;
        // 0x2c3f58: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3F5Cu;
        goto label_2c3f5c;
    }
    ctx->pc = 0x2C3F54u;
    {
        const bool branch_taken_0x2c3f54 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2C3F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F54u;
        // 0x2c3f58: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3f54) {
            ctx->pc = 0x2C3F9Cu;
            goto label_2c3f9c;
        }
    }
    ctx->pc = 0x2C3F5Cu;
label_2c3f5c:
    // 0x2c3f5c: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x2c3f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_2c3f60:
    // 0x2c3f60: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c3f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2c3f64:
    // 0x2c3f64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c3f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c3f68:
    // 0x2c3f68: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c3f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c3f6c:
    // 0x2c3f6c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2c3f70:
    if (ctx->pc == 0x2C3F70u) {
        ctx->pc = 0x2C3F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F6Cu;
        // 0x2c3f70: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3F74u;
        goto label_2c3f74;
    }
    ctx->pc = 0x2C3F6Cu;
    {
        const bool branch_taken_0x2c3f6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3f6c) {
            ctx->pc = 0x2C3F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3F6Cu;
            // 0x2c3f70: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3F88u;
            goto label_2c3f88;
        }
    }
    ctx->pc = 0x2C3F74u;
label_2c3f74:
    // 0x2c3f74: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2c3f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2c3f78:
    // 0x2c3f78: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2c3f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2c3f7c:
    // 0x2c3f7c: 0x40f809  jalr        $v0
label_2c3f80:
    if (ctx->pc == 0x2C3F80u) {
        ctx->pc = 0x2C3F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F7Cu;
        // 0x2c3f80: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3F84u;
        goto label_2c3f84;
    }
    ctx->pc = 0x2C3F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C3F84u);
        ctx->pc = 0x2C3F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F7Cu;
        // 0x2c3f80: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3F7Cu, 0x2C3F84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C3F84u;
label_2c3f84:
    // 0x2c3f84: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2c3f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2c3f88:
    // 0x2c3f88: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2c3f88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2c3f8c:
    // 0x2c3f8c: 0x80620018  lb          $v0, 0x18($v1)
    ctx->pc = 0x2c3f8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
label_2c3f90:
    // 0x2c3f90: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2c3f90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2c3f94:
    // 0x2c3f94: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
label_2c3f98:
    if (ctx->pc == 0x2C3F98u) {
        ctx->pc = 0x2C3F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F94u;
        // 0x2c3f98: 0x8e230084  lw          $v1, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3F9Cu;
        goto label_2c3f9c;
    }
    ctx->pc = 0x2C3F94u;
    {
        const bool branch_taken_0x2c3f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3f94) {
            ctx->pc = 0x2C3F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3F94u;
            // 0x2c3f98: 0x8e230084  lw          $v1, 0x84($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3F60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3f60;
        }
    }
    ctx->pc = 0x2C3F9Cu;
label_2c3f9c:
    // 0x2c3f9c: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x2c3f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_2c3fa0:
    // 0x2c3fa0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2c3fa4:
    if (ctx->pc == 0x2C3FA4u) {
        ctx->pc = 0x2C3FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3FA0u;
        // 0x2c3fa4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3FA8u;
        goto label_2c3fa8;
    }
    ctx->pc = 0x2C3FA0u;
    {
        const bool branch_taken_0x2c3fa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C3FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3FA0u;
        // 0x2c3fa4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3fa0) {
            ctx->pc = 0x2C3FB4u;
            goto label_2c3fb4;
        }
    }
    ctx->pc = 0x2C3FA8u;
label_2c3fa8:
    // 0x2c3fa8: 0xc0f528a  jal         func_3D4A28
label_2c3fac:
    if (ctx->pc == 0x2C3FACu) {
        ctx->pc = 0x2C3FB0u;
        goto label_2c3fb0;
    }
    ctx->pc = 0x2C3FA8u;
    SET_GPR_U32(ctx, 31, 0x2C3FB0u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x2C3FA8u, 0x2C3FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3FB0u;
label_2c3fb0:
    // 0x2c3fb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c3fb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c3fb4:
    // 0x2c3fb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c3fb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c3fb8:
    // 0x2c3fb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c3fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c3fbc:
    // 0x2c3fbc: 0x3e00008  jr          $ra
label_2c3fc0:
    if (ctx->pc == 0x2C3FC0u) {
        ctx->pc = 0x2C3FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3FBCu;
        // 0x2c3fc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3FC4u;
        goto label_2c3fc4;
    }
    ctx->pc = 0x2C3FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3FBCu;
        // 0x2c3fc0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C3FC4u;
label_2c3fc4:
    // 0x2c3fc4: 0x0  nop
    ctx->pc = 0x2c3fc4u;
    // NOP
    ctx->pc = 0x2c3fc8u;
}

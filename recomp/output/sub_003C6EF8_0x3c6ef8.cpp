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

// Function: sub_003C6EF8
// Address: 0x3c6ef8 - 0x3c6f90
void sub_003C6EF8_0x3c6ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C6EF8_0x3c6ef8");
#endif

    switch (ctx->pc) {
        case 0x3c6ef8u: goto label_3c6ef8;
        case 0x3c6efcu: goto label_3c6efc;
        case 0x3c6f00u: goto label_3c6f00;
        case 0x3c6f04u: goto label_3c6f04;
        case 0x3c6f08u: goto label_3c6f08;
        case 0x3c6f0cu: goto label_3c6f0c;
        case 0x3c6f10u: goto label_3c6f10;
        case 0x3c6f14u: goto label_3c6f14;
        case 0x3c6f18u: goto label_3c6f18;
        case 0x3c6f1cu: goto label_3c6f1c;
        case 0x3c6f20u: goto label_3c6f20;
        case 0x3c6f24u: goto label_3c6f24;
        case 0x3c6f28u: goto label_3c6f28;
        case 0x3c6f2cu: goto label_3c6f2c;
        case 0x3c6f30u: goto label_3c6f30;
        case 0x3c6f34u: goto label_3c6f34;
        case 0x3c6f38u: goto label_3c6f38;
        case 0x3c6f3cu: goto label_3c6f3c;
        case 0x3c6f40u: goto label_3c6f40;
        case 0x3c6f44u: goto label_3c6f44;
        case 0x3c6f48u: goto label_3c6f48;
        case 0x3c6f4cu: goto label_3c6f4c;
        case 0x3c6f50u: goto label_3c6f50;
        case 0x3c6f54u: goto label_3c6f54;
        case 0x3c6f58u: goto label_3c6f58;
        case 0x3c6f5cu: goto label_3c6f5c;
        case 0x3c6f60u: goto label_3c6f60;
        case 0x3c6f64u: goto label_3c6f64;
        case 0x3c6f68u: goto label_3c6f68;
        case 0x3c6f6cu: goto label_3c6f6c;
        case 0x3c6f70u: goto label_3c6f70;
        case 0x3c6f74u: goto label_3c6f74;
        case 0x3c6f78u: goto label_3c6f78;
        case 0x3c6f7cu: goto label_3c6f7c;
        case 0x3c6f80u: goto label_3c6f80;
        case 0x3c6f84u: goto label_3c6f84;
        case 0x3c6f88u: goto label_3c6f88;
        case 0x3c6f8cu: goto label_3c6f8c;
        default: break;
    }

    ctx->pc = 0x3c6ef8u;

label_3c6ef8:
    // 0x3c6ef8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3c6ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3c6efc:
    // 0x3c6efc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3c6efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3c6f00:
    // 0x3c6f00: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3c6f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3c6f04:
    // 0x3c6f04: 0x249201d8  addiu       $s2, $a0, 0x1D8
    ctx->pc = 0x3c6f04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 472));
label_3c6f08:
    // 0x3c6f08: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3c6f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_3c6f0c:
    // 0x3c6f0c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3c6f0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c6f10:
    // 0x3c6f10: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3c6f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3c6f14:
    // 0x3c6f14: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3c6f14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c6f18:
    // 0x3c6f18: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3c6f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3c6f1c:
    // 0x3c6f1c: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
label_3c6f20:
    if (ctx->pc == 0x3C6F20u) {
        ctx->pc = 0x3C6F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6F1Cu;
        // 0x3c6f20: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6F24u;
        goto label_3c6f24;
    }
    ctx->pc = 0x3C6F1Cu;
    {
        const bool branch_taken_0x3c6f1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C6F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6F1Cu;
        // 0x3c6f20: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6f1c) {
            ctx->pc = 0x3C6F68u;
            goto label_3c6f68;
        }
    }
    ctx->pc = 0x3C6F24u;
label_3c6f24:
    // 0x3c6f24: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x3c6f24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3c6f28:
    // 0x3c6f28: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3c6f28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3c6f2c:
    // 0x3c6f2c: 0x600000b  bltz        $s0, . + 4 + (0xB << 2)
label_3c6f30:
    if (ctx->pc == 0x3C6F30u) {
        ctx->pc = 0x3C6F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6F2Cu;
        // 0x3c6f30: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6F34u;
        goto label_3c6f34;
    }
    ctx->pc = 0x3C6F2Cu;
    {
        const bool branch_taken_0x3c6f2c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3C6F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6F2Cu;
        // 0x3c6f30: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6f2c) {
            ctx->pc = 0x3C6F5Cu;
            goto label_3c6f5c;
        }
    }
    ctx->pc = 0x3C6F34u;
label_3c6f34:
    // 0x3c6f34: 0x0  nop
    ctx->pc = 0x3c6f34u;
    // NOP
label_3c6f38:
    // 0x3c6f38: 0x8622000c  lh          $v0, 0xC($s1)
    ctx->pc = 0x3c6f38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_3c6f3c:
    // 0x3c6f3c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3c6f40:
    if (ctx->pc == 0x3C6F40u) {
        ctx->pc = 0x3C6F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6F3Cu;
        // 0x3c6f40: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6F44u;
        goto label_3c6f44;
    }
    ctx->pc = 0x3C6F3Cu;
    {
        const bool branch_taken_0x3c6f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c6f3c) {
            ctx->pc = 0x3C6F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C6F3Cu;
            // 0x3c6f40: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C6F54u;
            goto label_3c6f54;
        }
    }
    ctx->pc = 0x3C6F44u;
label_3c6f44:
    // 0x3c6f44: 0x280f809  jalr        $s4
label_3c6f48:
    if (ctx->pc == 0x3C6F48u) {
        ctx->pc = 0x3C6F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6F44u;
        // 0x3c6f48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6F4Cu;
        goto label_3c6f4c;
    }
    ctx->pc = 0x3C6F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x3C6F4Cu);
        ctx->pc = 0x3C6F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6F44u;
        // 0x3c6f48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6F44u, 0x3C6F4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C6F4Cu;
label_3c6f4c:
    // 0x3c6f4c: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x3c6f4cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_3c6f50:
    // 0x3c6f50: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3c6f50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3c6f54:
    // 0x3c6f54: 0x601fff8  bgez        $s0, . + 4 + (-0x8 << 2)
label_3c6f58:
    if (ctx->pc == 0x3C6F58u) {
        ctx->pc = 0x3C6F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6F54u;
        // 0x3c6f58: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6F5Cu;
        goto label_3c6f5c;
    }
    ctx->pc = 0x3C6F54u;
    {
        const bool branch_taken_0x3c6f54 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3C6F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6F54u;
        // 0x3c6f58: 0x26310058  addiu       $s1, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c6f54) {
            ctx->pc = 0x3C6F38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c6f38;
        }
    }
    ctx->pc = 0x3C6F5Cu;
label_3c6f5c:
    // 0x3c6f5c: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x3c6f5cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c6f60:
    // 0x3c6f60: 0x5640fff1  bnel        $s2, $zero, . + 4 + (-0xF << 2)
label_3c6f64:
    if (ctx->pc == 0x3C6F64u) {
        ctx->pc = 0x3C6F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6F60u;
        // 0x3c6f64: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6F68u;
        goto label_3c6f68;
    }
    ctx->pc = 0x3C6F60u;
    {
        const bool branch_taken_0x3c6f60 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c6f60) {
            ctx->pc = 0x3C6F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C6F60u;
            // 0x3c6f64: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C6F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c6f28;
        }
    }
    ctx->pc = 0x3C6F68u;
label_3c6f68:
    // 0x3c6f68: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3c6f68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3c6f6c:
    // 0x3c6f6c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3c6f6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c6f70:
    // 0x3c6f70: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3c6f70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c6f74:
    // 0x3c6f74: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3c6f74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c6f78:
    // 0x3c6f78: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3c6f78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c6f7c:
    // 0x3c6f7c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3c6f7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c6f80:
    // 0x3c6f80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c6f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3c6f84:
    // 0x3c6f84: 0x3e00008  jr          $ra
label_3c6f88:
    if (ctx->pc == 0x3C6F88u) {
        ctx->pc = 0x3C6F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6F84u;
        // 0x3c6f88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C6F8Cu;
        goto label_3c6f8c;
    }
    ctx->pc = 0x3C6F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C6F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C6F84u;
        // 0x3c6f88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C6F84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C6F8Cu;
label_3c6f8c:
    // 0x3c6f8c: 0x0  nop
    ctx->pc = 0x3c6f8cu;
    // NOP
    ctx->pc = 0x3c6f90u;
}

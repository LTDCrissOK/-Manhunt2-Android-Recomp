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

// Function: sub_003E9EB0
// Address: 0x3e9eb0 - 0x3e9fe8
void sub_003E9EB0_0x3e9eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9EB0_0x3e9eb0");
#endif

    switch (ctx->pc) {
        case 0x3e9eb0u: goto label_3e9eb0;
        case 0x3e9eb4u: goto label_3e9eb4;
        case 0x3e9eb8u: goto label_3e9eb8;
        case 0x3e9ebcu: goto label_3e9ebc;
        case 0x3e9ec0u: goto label_3e9ec0;
        case 0x3e9ec4u: goto label_3e9ec4;
        case 0x3e9ec8u: goto label_3e9ec8;
        case 0x3e9eccu: goto label_3e9ecc;
        case 0x3e9ed0u: goto label_3e9ed0;
        case 0x3e9ed4u: goto label_3e9ed4;
        case 0x3e9ed8u: goto label_3e9ed8;
        case 0x3e9edcu: goto label_3e9edc;
        case 0x3e9ee0u: goto label_3e9ee0;
        case 0x3e9ee4u: goto label_3e9ee4;
        case 0x3e9ee8u: goto label_3e9ee8;
        case 0x3e9eecu: goto label_3e9eec;
        case 0x3e9ef0u: goto label_3e9ef0;
        case 0x3e9ef4u: goto label_3e9ef4;
        case 0x3e9ef8u: goto label_3e9ef8;
        case 0x3e9efcu: goto label_3e9efc;
        case 0x3e9f00u: goto label_3e9f00;
        case 0x3e9f04u: goto label_3e9f04;
        case 0x3e9f08u: goto label_3e9f08;
        case 0x3e9f0cu: goto label_3e9f0c;
        case 0x3e9f10u: goto label_3e9f10;
        case 0x3e9f14u: goto label_3e9f14;
        case 0x3e9f18u: goto label_3e9f18;
        case 0x3e9f1cu: goto label_3e9f1c;
        case 0x3e9f20u: goto label_3e9f20;
        case 0x3e9f24u: goto label_3e9f24;
        case 0x3e9f28u: goto label_3e9f28;
        case 0x3e9f2cu: goto label_3e9f2c;
        case 0x3e9f30u: goto label_3e9f30;
        case 0x3e9f34u: goto label_3e9f34;
        case 0x3e9f38u: goto label_3e9f38;
        case 0x3e9f3cu: goto label_3e9f3c;
        case 0x3e9f40u: goto label_3e9f40;
        case 0x3e9f44u: goto label_3e9f44;
        case 0x3e9f48u: goto label_3e9f48;
        case 0x3e9f4cu: goto label_3e9f4c;
        case 0x3e9f50u: goto label_3e9f50;
        case 0x3e9f54u: goto label_3e9f54;
        case 0x3e9f58u: goto label_3e9f58;
        case 0x3e9f5cu: goto label_3e9f5c;
        case 0x3e9f60u: goto label_3e9f60;
        case 0x3e9f64u: goto label_3e9f64;
        case 0x3e9f68u: goto label_3e9f68;
        case 0x3e9f6cu: goto label_3e9f6c;
        case 0x3e9f70u: goto label_3e9f70;
        case 0x3e9f74u: goto label_3e9f74;
        case 0x3e9f78u: goto label_3e9f78;
        case 0x3e9f7cu: goto label_3e9f7c;
        case 0x3e9f80u: goto label_3e9f80;
        case 0x3e9f84u: goto label_3e9f84;
        case 0x3e9f88u: goto label_3e9f88;
        case 0x3e9f8cu: goto label_3e9f8c;
        case 0x3e9f90u: goto label_3e9f90;
        case 0x3e9f94u: goto label_3e9f94;
        case 0x3e9f98u: goto label_3e9f98;
        case 0x3e9f9cu: goto label_3e9f9c;
        case 0x3e9fa0u: goto label_3e9fa0;
        case 0x3e9fa4u: goto label_3e9fa4;
        case 0x3e9fa8u: goto label_3e9fa8;
        case 0x3e9facu: goto label_3e9fac;
        case 0x3e9fb0u: goto label_3e9fb0;
        case 0x3e9fb4u: goto label_3e9fb4;
        case 0x3e9fb8u: goto label_3e9fb8;
        case 0x3e9fbcu: goto label_3e9fbc;
        case 0x3e9fc0u: goto label_3e9fc0;
        case 0x3e9fc4u: goto label_3e9fc4;
        case 0x3e9fc8u: goto label_3e9fc8;
        case 0x3e9fccu: goto label_3e9fcc;
        case 0x3e9fd0u: goto label_3e9fd0;
        case 0x3e9fd4u: goto label_3e9fd4;
        case 0x3e9fd8u: goto label_3e9fd8;
        case 0x3e9fdcu: goto label_3e9fdc;
        case 0x3e9fe0u: goto label_3e9fe0;
        case 0x3e9fe4u: goto label_3e9fe4;
        default: break;
    }

    ctx->pc = 0x3e9eb0u;

label_3e9eb0:
    // 0x3e9eb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e9eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3e9eb4:
    // 0x3e9eb4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e9eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3e9eb8:
    // 0x3e9eb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e9eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3e9ebc:
    // 0x3e9ebc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e9ebcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e9ec0:
    // 0x3e9ec0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e9ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3e9ec4:
    // 0x3e9ec4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3e9ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3e9ec8:
    // 0x3e9ec8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e9ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e9ecc:
    // 0x3e9ecc: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3e9ed0:
    if (ctx->pc == 0x3E9ED0u) {
        ctx->pc = 0x3E9ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9ECCu;
        // 0x3e9ed0: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9ED4u;
        goto label_3e9ed4;
    }
    ctx->pc = 0x3E9ECCu;
    {
        const bool branch_taken_0x3e9ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9ECCu;
        // 0x3e9ed0: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9ecc) {
            ctx->pc = 0x3E9F4Cu;
            goto label_3e9f4c;
        }
    }
    ctx->pc = 0x3E9ED4u;
label_3e9ed4:
    // 0x3e9ed4: 0x0  nop
    ctx->pc = 0x3e9ed4u;
    // NOP
label_3e9ed8:
    // 0x3e9ed8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e9ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e9edc:
    // 0x3e9edc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3e9edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e9ee0:
    // 0x3e9ee0: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3e9ee4:
    if (ctx->pc == 0x3E9EE4u) {
        ctx->pc = 0x3E9EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9EE0u;
        // 0x3e9ee4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9EE8u;
        goto label_3e9ee8;
    }
    ctx->pc = 0x3E9EE0u;
    {
        const bool branch_taken_0x3e9ee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9ee0) {
            ctx->pc = 0x3E9EE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9EE0u;
            // 0x3e9ee4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9F3Cu;
            goto label_3e9f3c;
        }
    }
    ctx->pc = 0x3E9EE8u;
label_3e9ee8:
    // 0x3e9ee8: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3e9ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3e9eec:
    // 0x3e9eec: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3e9eecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3e9ef0:
    // 0x3e9ef0: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3e9ef0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3e9ef4:
    // 0x3e9ef4: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3e9ef8:
    if (ctx->pc == 0x3E9EF8u) {
        ctx->pc = 0x3E9EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9EF4u;
        // 0x3e9ef8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9EFCu;
        goto label_3e9efc;
    }
    ctx->pc = 0x3E9EF4u;
    {
        const bool branch_taken_0x3e9ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3e9ef4) {
            ctx->pc = 0x3E9EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9EF4u;
            // 0x3e9ef8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9F28u;
            goto label_3e9f28;
        }
    }
    ctx->pc = 0x3E9EFCu;
label_3e9efc:
    // 0x3e9efc: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3e9efcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3e9f00:
    // 0x3e9f00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e9f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e9f04:
    // 0x3e9f04: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3e9f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e9f08:
    // 0x3e9f08: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3e9f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3e9f0c:
    // 0x3e9f0c: 0x40f809  jalr        $v0
label_3e9f10:
    if (ctx->pc == 0x3E9F10u) {
        ctx->pc = 0x3E9F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F0Cu;
        // 0x3e9f10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9F14u;
        goto label_3e9f14;
    }
    ctx->pc = 0x3E9F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E9F14u);
        ctx->pc = 0x3E9F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F0Cu;
        // 0x3e9f10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9F0Cu, 0x3E9F14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E9F14u;
label_3e9f14:
    // 0x3e9f14: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e9f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e9f18:
    // 0x3e9f18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3e9f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3e9f1c:
    // 0x3e9f1c: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3e9f20:
    if (ctx->pc == 0x3E9F20u) {
        ctx->pc = 0x3E9F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F1Cu;
        // 0x3e9f20: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9F24u;
        goto label_3e9f24;
    }
    ctx->pc = 0x3E9F1Cu;
    {
        const bool branch_taken_0x3e9f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3E9F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F1Cu;
        // 0x3e9f20: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9f1c) {
            ctx->pc = 0x3E9F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9f00;
        }
    }
    ctx->pc = 0x3E9F24u;
label_3e9f24:
    // 0x3e9f24: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e9f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e9f28:
    // 0x3e9f28: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e9f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e9f2c:
    // 0x3e9f2c: 0xc0f528a  jal         func_3D4A28
label_3e9f30:
    if (ctx->pc == 0x3E9F30u) {
        ctx->pc = 0x3E9F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F2Cu;
        // 0x3e9f30: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9F34u;
        goto label_3e9f34;
    }
    ctx->pc = 0x3E9F2Cu;
    SET_GPR_U32(ctx, 31, 0x3E9F34u);
    ctx->pc = 0x3E9F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9F2Cu;
    // 0x3e9f30: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3E9F2Cu, 0x3E9F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9F34u;
label_3e9f34:
    // 0x3e9f34: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e9f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e9f38:
    // 0x3e9f38: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3e9f38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e9f3c:
    // 0x3e9f3c: 0xc0f5222  jal         func_3D4888
label_3e9f40:
    if (ctx->pc == 0x3E9F40u) {
        ctx->pc = 0x3E9F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F3Cu;
        // 0x3e9f40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9F44u;
        goto label_3e9f44;
    }
    ctx->pc = 0x3E9F3Cu;
    SET_GPR_U32(ctx, 31, 0x3E9F44u);
    ctx->pc = 0x3E9F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9F3Cu;
    // 0x3e9f40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E9F3Cu, 0x3E9F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9F44u;
label_3e9f44:
    // 0x3e9f44: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3e9f48:
    if (ctx->pc == 0x3E9F48u) {
        ctx->pc = 0x3E9F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F44u;
        // 0x3e9f48: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9F4Cu;
        goto label_3e9f4c;
    }
    ctx->pc = 0x3E9F44u;
    {
        const bool branch_taken_0x3e9f44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F44u;
        // 0x3e9f48: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9f44) {
            ctx->pc = 0x3E9ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9ed8;
        }
    }
    ctx->pc = 0x3E9F4Cu;
label_3e9f4c:
    // 0x3e9f4c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e9f50:
    // 0x3e9f50: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3e9f54:
    if (ctx->pc == 0x3E9F54u) {
        ctx->pc = 0x3E9F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F50u;
        // 0x3e9f54: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9F58u;
        goto label_3e9f58;
    }
    ctx->pc = 0x3E9F50u;
    {
        const bool branch_taken_0x3e9f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F50u;
        // 0x3e9f54: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9f50) {
            ctx->pc = 0x3E9FCCu;
            goto label_3e9fcc;
        }
    }
    ctx->pc = 0x3E9F58u;
label_3e9f58:
    // 0x3e9f58: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e9f5c:
    // 0x3e9f5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3e9f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e9f60:
    // 0x3e9f60: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3e9f64:
    if (ctx->pc == 0x3E9F64u) {
        ctx->pc = 0x3E9F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F60u;
        // 0x3e9f64: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9F68u;
        goto label_3e9f68;
    }
    ctx->pc = 0x3E9F60u;
    {
        const bool branch_taken_0x3e9f60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9f60) {
            ctx->pc = 0x3E9F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9F60u;
            // 0x3e9f64: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9FBCu;
            goto label_3e9fbc;
        }
    }
    ctx->pc = 0x3E9F68u;
label_3e9f68:
    // 0x3e9f68: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3e9f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3e9f6c:
    // 0x3e9f6c: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3e9f6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3e9f70:
    // 0x3e9f70: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3e9f70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3e9f74:
    // 0x3e9f74: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3e9f78:
    if (ctx->pc == 0x3E9F78u) {
        ctx->pc = 0x3E9F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F74u;
        // 0x3e9f78: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9F7Cu;
        goto label_3e9f7c;
    }
    ctx->pc = 0x3E9F74u;
    {
        const bool branch_taken_0x3e9f74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3e9f74) {
            ctx->pc = 0x3E9F78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9F74u;
            // 0x3e9f78: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9FA8u;
            goto label_3e9fa8;
        }
    }
    ctx->pc = 0x3E9F7Cu;
label_3e9f7c:
    // 0x3e9f7c: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3e9f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3e9f80:
    // 0x3e9f80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e9f80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e9f84:
    // 0x3e9f84: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3e9f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e9f88:
    // 0x3e9f88: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3e9f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3e9f8c:
    // 0x3e9f8c: 0x40f809  jalr        $v0
label_3e9f90:
    if (ctx->pc == 0x3E9F90u) {
        ctx->pc = 0x3E9F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F8Cu;
        // 0x3e9f90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9F94u;
        goto label_3e9f94;
    }
    ctx->pc = 0x3E9F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E9F94u);
        ctx->pc = 0x3E9F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F8Cu;
        // 0x3e9f90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9F8Cu, 0x3E9F94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E9F94u;
label_3e9f94:
    // 0x3e9f94: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3e9f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e9f98:
    // 0x3e9f98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3e9f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3e9f9c:
    // 0x3e9f9c: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3e9fa0:
    if (ctx->pc == 0x3E9FA0u) {
        ctx->pc = 0x3E9FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F9Cu;
        // 0x3e9fa0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9FA4u;
        goto label_3e9fa4;
    }
    ctx->pc = 0x3E9F9Cu;
    {
        const bool branch_taken_0x3e9f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3E9FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9F9Cu;
        // 0x3e9fa0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9f9c) {
            ctx->pc = 0x3E9F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9f80;
        }
    }
    ctx->pc = 0x3E9FA4u;
label_3e9fa4:
    // 0x3e9fa4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e9fa8:
    // 0x3e9fa8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e9fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e9fac:
    // 0x3e9fac: 0xc0f528a  jal         func_3D4A28
label_3e9fb0:
    if (ctx->pc == 0x3E9FB0u) {
        ctx->pc = 0x3E9FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9FACu;
        // 0x3e9fb0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9FB4u;
        goto label_3e9fb4;
    }
    ctx->pc = 0x3E9FACu;
    SET_GPR_U32(ctx, 31, 0x3E9FB4u);
    ctx->pc = 0x3E9FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9FACu;
    // 0x3e9fb0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3E9FACu, 0x3E9FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9FB4u;
label_3e9fb4:
    // 0x3e9fb4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e9fb8:
    // 0x3e9fb8: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3e9fb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e9fbc:
    // 0x3e9fbc: 0xc0f5222  jal         func_3D4888
label_3e9fc0:
    if (ctx->pc == 0x3E9FC0u) {
        ctx->pc = 0x3E9FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9FBCu;
        // 0x3e9fc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9FC4u;
        goto label_3e9fc4;
    }
    ctx->pc = 0x3E9FBCu;
    SET_GPR_U32(ctx, 31, 0x3E9FC4u);
    ctx->pc = 0x3E9FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9FBCu;
    // 0x3e9fc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E9FBCu, 0x3E9FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9FC4u;
label_3e9fc4:
    // 0x3e9fc4: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3e9fc8:
    if (ctx->pc == 0x3E9FC8u) {
        ctx->pc = 0x3E9FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9FC4u;
        // 0x3e9fc8: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9FCCu;
        goto label_3e9fcc;
    }
    ctx->pc = 0x3E9FC4u;
    {
        const bool branch_taken_0x3e9fc4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9FC4u;
        // 0x3e9fc8: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9fc4) {
            ctx->pc = 0x3E9F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9f58;
        }
    }
    ctx->pc = 0x3E9FCCu;
label_3e9fcc:
    // 0x3e9fcc: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3e9fccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_3e9fd0:
    // 0x3e9fd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e9fd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e9fd4:
    // 0x3e9fd4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e9fd4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3e9fd8:
    // 0x3e9fd8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e9fd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3e9fdc:
    // 0x3e9fdc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3e9fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3e9fe0:
    // 0x3e9fe0: 0x3e00008  jr          $ra
label_3e9fe4:
    if (ctx->pc == 0x3E9FE4u) {
        ctx->pc = 0x3E9FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9FE0u;
        // 0x3e9fe4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9FE8u;
        goto label_fallthrough_0x3e9fe0;
    }
    ctx->pc = 0x3E9FE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E9FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9FE0u;
        // 0x3e9fe4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9FE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e9fe0:
    ctx->pc = 0x3E9FE8u;
}

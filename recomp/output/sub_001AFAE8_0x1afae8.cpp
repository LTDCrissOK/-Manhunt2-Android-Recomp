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

// Function: sub_001AFAE8
// Address: 0x1afae8 - 0x1afbc0
void sub_001AFAE8_0x1afae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AFAE8_0x1afae8");
#endif

    switch (ctx->pc) {
        case 0x1afb60u: goto label_1afb60;
        case 0x1afb90u: goto label_1afb90;
        case 0x1afba0u: goto label_1afba0;
        case 0x1afba8u: goto label_1afba8;
        default: break;
    }

    ctx->pc = 0x1afae8u;

    // 0x1afae8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1afae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1afaec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1afaecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1afaf0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1afaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1afaf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1afaf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afaf8: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x1afaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1afafc: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x1afafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x1afb00: 0x1064002a  beq         $v1, $a0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1AFB00u;
    {
        const bool branch_taken_0x1afb00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1AFB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB00u;
        // 0x1afb04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afb00) {
            ctx->pc = 0x1AFBACu;
            goto label_1afbac;
        }
    }
    ctx->pc = 0x1AFB08u;
    // 0x1afb08: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x1afb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1afb0c: 0x1044000d  beq         $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1AFB0Cu;
    {
        const bool branch_taken_0x1afb0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1AFB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB0Cu;
        // 0x1afb10: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afb0c) {
            ctx->pc = 0x1AFB44u;
            goto label_1afb44;
        }
    }
    ctx->pc = 0x1AFB14u;
    // 0x1afb14: 0x50640025  beql        $v1, $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1AFB14u;
    {
        const bool branch_taken_0x1afb14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1afb14) {
            ctx->pc = 0x1AFB18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AFB14u;
            // 0x1afb18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AFBACu;
            goto label_1afbac;
        }
    }
    ctx->pc = 0x1AFB1Cu;
    // 0x1afb1c: 0x10440009  beq         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AFB1Cu;
    {
        const bool branch_taken_0x1afb1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1AFB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB1Cu;
        // 0x1afb20: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afb1c) {
            ctx->pc = 0x1AFB44u;
            goto label_1afb44;
        }
    }
    ctx->pc = 0x1AFB24u;
    // 0x1afb24: 0x50640021  beql        $v1, $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1AFB24u;
    {
        const bool branch_taken_0x1afb24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1afb24) {
            ctx->pc = 0x1AFB28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AFB24u;
            // 0x1afb28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AFBACu;
            goto label_1afbac;
        }
    }
    ctx->pc = 0x1AFB2Cu;
    // 0x1afb2c: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AFB2Cu;
    {
        const bool branch_taken_0x1afb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1AFB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB2Cu;
        // 0x1afb30: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afb2c) {
            ctx->pc = 0x1AFB44u;
            goto label_1afb44;
        }
    }
    ctx->pc = 0x1AFB34u;
    // 0x1afb34: 0x5064001d  beql        $v1, $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1AFB34u;
    {
        const bool branch_taken_0x1afb34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x1afb34) {
            ctx->pc = 0x1AFB38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AFB34u;
            // 0x1afb38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AFBACu;
            goto label_1afbac;
        }
    }
    ctx->pc = 0x1AFB3Cu;
    // 0x1afb3c: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AFB3Cu;
    {
        const bool branch_taken_0x1afb3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1AFB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB3Cu;
        // 0x1afb40: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afb3c) {
            ctx->pc = 0x1AFB4Cu;
            goto label_1afb4c;
        }
    }
    ctx->pc = 0x1AFB44u;
label_1afb44:
    // 0x1afb44: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1AFB44u;
    {
        const bool branch_taken_0x1afb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB44u;
        // 0x1afb48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afb44) {
            ctx->pc = 0x1AFBACu;
            goto label_1afbac;
        }
    }
    ctx->pc = 0x1AFB4Cu;
label_1afb4c:
    // 0x1afb4c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x1afb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x1afb50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1afb50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1afb54: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1afb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1afb58: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AFB58u;
    SET_GPR_U32(ctx, 31, 0x1AFB60u);
    ctx->pc = 0x1AFB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFB58u;
    // 0x1afb5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AFB58u, 0x1AFB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFB60u;
label_1afb60:
    // 0x1afb60: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x1afb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x1afb64: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1afb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1afb68: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1AFB68u;
    {
        const bool branch_taken_0x1afb68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AFB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB68u;
        // 0x1afb6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afb68) {
            ctx->pc = 0x1AFB98u;
            goto label_1afb98;
        }
    }
    ctx->pc = 0x1AFB70u;
    // 0x1afb70: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x1afb70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1afb74: 0x9482002a  lhu         $v0, 0x2A($a0)
    ctx->pc = 0x1afb74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x1afb78: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1afb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1afb7c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AFB7Cu;
    {
        const bool branch_taken_0x1afb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1afb7c) {
            ctx->pc = 0x1AFB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AFB7Cu;
            // 0x1afb80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AFB98u;
            goto label_1afb98;
        }
    }
    ctx->pc = 0x1AFB84u;
    // 0x1afb84: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1afb84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1afb88: 0xc073ef8  jal         func_1CFBE0
    ctx->pc = 0x1AFB88u;
    SET_GPR_U32(ctx, 31, 0x1AFB90u);
    ctx->pc = 0x1CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFBE0u, 0x1AFB88u, 0x1AFB90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFB90u;
label_1afb90:
    // 0x1afb90: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AFB90u;
    {
        const bool branch_taken_0x1afb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AFB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFB90u;
        // 0x1afb94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afb90) {
            ctx->pc = 0x1AFBACu;
            goto label_1afbac;
        }
    }
    ctx->pc = 0x1AFB98u;
label_1afb98:
    // 0x1afb98: 0xc06c546  jal         func_1B1518
    ctx->pc = 0x1AFB98u;
    SET_GPR_U32(ctx, 31, 0x1AFBA0u);
    ctx->pc = 0x1AFB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFB98u;
    // 0x1afb9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x1AFB98u, 0x1AFBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFBA0u;
label_1afba0:
    // 0x1afba0: 0xc06c61a  jal         func_1B1868
    ctx->pc = 0x1AFBA0u;
    SET_GPR_U32(ctx, 31, 0x1AFBA8u);
    ctx->pc = 0x1AFBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFBA0u;
    // 0x1afba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1868u, 0x1AFBA0u, 0x1AFBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFBA8u;
label_1afba8:
    // 0x1afba8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1afba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1afbac:
    // 0x1afbac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1afbacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afbb0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1afbb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1afbb4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFBB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFBB4u;
        // 0x1afbb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFBB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFBBCu;
    // 0x1afbbc: 0x0  nop
    ctx->pc = 0x1afbbcu;
    // NOP
    ctx->pc = 0x1afbc0u;
}

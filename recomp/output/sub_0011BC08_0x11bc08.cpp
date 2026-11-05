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

// Function: sub_0011BC08
// Address: 0x11bc08 - 0x11bdc0
void sub_0011BC08_0x11bc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BC08_0x11bc08");
#endif

    switch (ctx->pc) {
        case 0x11bc50u: goto label_11bc50;
        case 0x11bc5cu: goto label_11bc5c;
        case 0x11bca8u: goto label_11bca8;
        case 0x11bcbcu: goto label_11bcbc;
        case 0x11bcd0u: goto label_11bcd0;
        case 0x11bce0u: goto label_11bce0;
        case 0x11bd60u: goto label_11bd60;
        default: break;
    }

    ctx->pc = 0x11bc08u;

    // 0x11bc08: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x11bc08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11bc0c: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x11bc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x11bc10: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x11bc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x11bc14: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x11bc14u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc18: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x11bc18u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc1c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x11bc1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x11bc20: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x11bc20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc24: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x11bc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x11bc28: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x11bc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x11bc2c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x11bc2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc30: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x11bc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x11bc34: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x11bc34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc38: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x11bc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x11bc3c: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x11bc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x11bc40: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x11bc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x11bc44: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x11bc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x11bc48: 0xc045530  jal         func_1154C0
    ctx->pc = 0x11BC48u;
    SET_GPR_U32(ctx, 31, 0x11BC50u);
    ctx->pc = 0x11BC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BC48u;
    // 0x11bc4c: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1154C0u, 0x11BC48u, 0x11BC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BC50u;
label_11bc50:
    // 0x11bc50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bc50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc54: 0xc04569e  jal         func_115A78
    ctx->pc = 0x11BC54u;
    SET_GPR_U32(ctx, 31, 0x11BC5Cu);
    ctx->pc = 0x11BC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BC54u;
    // 0x11bc58: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115A78u, 0x11BC54u, 0x11BC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BC5Cu;
label_11bc5c:
    // 0x11bc5c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x11bc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11bc60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11bc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11bc64: 0x82202b  sltu        $a0, $a0, $v0
    ctx->pc = 0x11bc64u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11bc68: 0x2c470002  sltiu       $a3, $v0, 0x2
    ctx->pc = 0x11bc68u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11bc6c: 0x38460001  xori        $a2, $v0, 0x1
    ctx->pc = 0x11bc6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x11bc70: 0x96e5000c  lhu         $a1, 0xC($s7)
    ctx->pc = 0x11bc70u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x11bc74: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x11bc74u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc78: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x11bc78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc7c: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x11bc7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x11bc80: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x11bc80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc84: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x11bc84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc88: 0x6a80b  movn        $s5, $zero, $a2
    ctx->pc = 0x11bc88u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
    // 0x11bc8c: 0x4a00b  movn        $s4, $zero, $a0
    ctx->pc = 0x11bc8cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
    // 0x11bc90: 0x7980b  movn        $s3, $zero, $a3
    ctx->pc = 0x11bc90u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
    // 0x11bc94: 0x225282b  sltu        $a1, $s1, $a1
    ctx->pc = 0x11bc94u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x11bc98: 0x10a0002d  beqz        $a1, . + 4 + (0x2D << 2)
    ctx->pc = 0x11BC98u;
    {
        const bool branch_taken_0x11bc98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BC98u;
        // 0x11bc9c: 0x2b00b  movn        $s6, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc98) {
            ctx->pc = 0x11BD50u;
            goto label_11bd50;
        }
    }
    ctx->pc = 0x11BCA0u;
    // 0x11bca0: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x11bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x11bca4: 0x0  nop
    ctx->pc = 0x11bca4u;
    // NOP
label_11bca8:
    // 0x11bca8: 0x2421818  mult        $v1, $s2, $v0
    ctx->pc = 0x11bca8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11bcac: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x11bcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x11bcb0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x11bcb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x11bcb4: 0xc0455bc  jal         func_1156F0
    ctx->pc = 0x11BCB4u;
    SET_GPR_U32(ctx, 31, 0x11BCBCu);
    ctx->pc = 0x11BCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BCB4u;
    // 0x11bcb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1156F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1156F0u, 0x11BCB4u, 0x11BCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BCBCu;
label_11bcbc:
    // 0x11bcbc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x11bcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11bcc0: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x11BCC0u;
    {
        const bool branch_taken_0x11bcc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11BCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BCC0u;
        // 0x11bcc4: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bcc0) {
            ctx->pc = 0x11BD3Cu;
            goto label_11bd3c;
        }
    }
    ctx->pc = 0x11BCC8u;
    // 0x11bcc8: 0xc0455c0  jal         func_115700
    ctx->pc = 0x11BCC8u;
    SET_GPR_U32(ctx, 31, 0x11BCD0u);
    ctx->pc = 0x11BCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BCC8u;
    // 0x11bccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115700u, 0x11BCC8u, 0x11BCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BCD0u;
label_11bcd0:
    // 0x11bcd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11bcd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bcd4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x11bcd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bcd8: 0xc045540  jal         func_115500
    ctx->pc = 0x11BCD8u;
    SET_GPR_U32(ctx, 31, 0x11BCE0u);
    ctx->pc = 0x11BCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BCD8u;
    // 0x11bcdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115500u, 0x11BCD8u, 0x11BCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BCE0u;
label_11bce0:
    // 0x11bce0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x11BCE0u;
    {
        const bool branch_taken_0x11bce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BCE0u;
        // 0x11bce4: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bce0) {
            ctx->pc = 0x11BD3Cu;
            goto label_11bd3c;
        }
    }
    ctx->pc = 0x11BCE8u;
    // 0x11bce8: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BCE8u;
    {
        const bool branch_taken_0x11bce8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BCE8u;
        // 0x11bcec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bce8) {
            ctx->pc = 0x11BCF8u;
            goto label_11bcf8;
        }
    }
    ctx->pc = 0x11BCF0u;
    // 0x11bcf0: 0x52a00013  beql        $s5, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x11BCF0u;
    {
        const bool branch_taken_0x11bcf0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x11bcf0) {
            ctx->pc = 0x11BCF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11BCF0u;
            // 0x11bcf4: 0x96e2000c  lhu         $v0, 0xC($s7) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11BD40u;
            goto label_11bd40;
        }
    }
    ctx->pc = 0x11BCF8u;
label_11bcf8:
    // 0x11bcf8: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BCF8u;
    {
        const bool branch_taken_0x11bcf8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x11BCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BCF8u;
        // 0x11bcfc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bcf8) {
            ctx->pc = 0x11BD08u;
            goto label_11bd08;
        }
    }
    ctx->pc = 0x11BD00u;
    // 0x11bd00: 0x5280000e  beql        $s4, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x11BD00u;
    {
        const bool branch_taken_0x11bd00 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x11bd00) {
            ctx->pc = 0x11BD04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11BD00u;
            // 0x11bd04: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11BD3Cu;
            goto label_11bd3c;
        }
    }
    ctx->pc = 0x11BD08u;
label_11bd08:
    // 0x11bd08: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BD08u;
    {
        const bool branch_taken_0x11bd08 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x11BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD08u;
        // 0x11bd0c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd08) {
            ctx->pc = 0x11BD18u;
            goto label_11bd18;
        }
    }
    ctx->pc = 0x11BD10u;
    // 0x11bd10: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x11BD10u;
    {
        const bool branch_taken_0x11bd10 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD10u;
        // 0x11bd14: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd10) {
            ctx->pc = 0x11BD3Cu;
            goto label_11bd3c;
        }
    }
    ctx->pc = 0x11BD18u;
label_11bd18:
    // 0x11bd18: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BD18u;
    {
        const bool branch_taken_0x11bd18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x11BD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD18u;
        // 0x11bd1c: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd18) {
            ctx->pc = 0x11BD28u;
            goto label_11bd28;
        }
    }
    ctx->pc = 0x11BD20u;
    // 0x11bd20: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x11BD20u;
    {
        const bool branch_taken_0x11bd20 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD20u;
        // 0x11bd24: 0x26430001  addiu       $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd20) {
            ctx->pc = 0x11BD3Cu;
            goto label_11bd3c;
        }
    }
    ctx->pc = 0x11BD28u;
label_11bd28:
    // 0x11bd28: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x11bd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x11bd2c: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x11bd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11bd30: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x11bd30u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x11bd34: 0xa4920000  sh          $s2, 0x0($a0)
    ctx->pc = 0x11bd34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x11bd38: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x11bd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_11bd3c:
    // 0x11bd3c: 0x96e2000c  lhu         $v0, 0xC($s7)
    ctx->pc = 0x11bd3cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 12)));
label_11bd40:
    // 0x11bd40: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x11bd40u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x11bd44: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x11bd44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11bd48: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x11BD48u;
    {
        const bool branch_taken_0x11bd48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11BD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BD48u;
        // 0x11bd4c: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bd48) {
            ctx->pc = 0x11BCA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11bca8;
        }
    }
    ctx->pc = 0x11BD50u;
label_11bd50:
    // 0x11bd50: 0x5220000f  beql        $s1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x11BD50u;
    {
        const bool branch_taken_0x11bd50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x11bd50) {
            ctx->pc = 0x11BD54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11BD50u;
            // 0x11bd54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11BD90u;
            goto label_11bd90;
        }
    }
    ctx->pc = 0x11BD58u;
    // 0x11bd58: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x11BD58u;
    SET_GPR_U32(ctx, 31, 0x11BD60u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x11BD58u, 0x11BD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11BD60u;
label_11bd60:
    // 0x11bd60: 0x51001b  divu        $zero, $v0, $s1
    ctx->pc = 0x11bd60u;
    { uint32_t divisor = GPR_U32(ctx, 17); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x11bd64: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11BD64u;
    {
        const bool branch_taken_0x11bd64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x11bd64) {
            ctx->pc = 0x11BD68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11BD64u;
            // 0x11bd68: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11BD6Cu;
            goto label_11bd6c;
        }
    }
    ctx->pc = 0x11BD6Cu;
label_11bd6c:
    // 0x11bd6c: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x11bd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x11bd70: 0x8ee60008  lw          $a2, 0x8($s7)
    ctx->pc = 0x11bd70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x11bd74: 0x1810  mfhi        $v1
    ctx->pc = 0x11bd74u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x11bd78: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x11bd78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x11bd7c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x11bd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x11bd80: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x11bd80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x11bd84: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x11bd84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11bd88: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x11bd88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x11bd8c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x11bd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_11bd90:
    // 0x11bd90: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x11bd90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11bd94: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x11bd94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x11bd98: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x11bd98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11bd9c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x11bd9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x11bda0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x11bda0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11bda4: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x11bda4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x11bda8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x11bda8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11bdac: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x11bdacu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x11bdb0: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x11bdb0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11bdb4: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x11bdb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x11bdb8: 0x3e00008  jr          $ra
    ctx->pc = 0x11BDB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BDB8u;
        // 0x11bdbc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BDB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BDC0u;
}

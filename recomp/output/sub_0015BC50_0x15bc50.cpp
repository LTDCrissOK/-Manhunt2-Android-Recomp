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

// Function: sub_0015BC50
// Address: 0x15bc50 - 0x15bd10
void sub_0015BC50_0x15bc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015BC50_0x15bc50");
#endif

    switch (ctx->pc) {
        case 0x15bc50u: goto label_15bc50;
        case 0x15bc54u: goto label_15bc54;
        case 0x15bc58u: goto label_15bc58;
        case 0x15bc5cu: goto label_15bc5c;
        case 0x15bc60u: goto label_15bc60;
        case 0x15bc64u: goto label_15bc64;
        case 0x15bc68u: goto label_15bc68;
        case 0x15bc6cu: goto label_15bc6c;
        case 0x15bc70u: goto label_15bc70;
        case 0x15bc74u: goto label_15bc74;
        case 0x15bc78u: goto label_15bc78;
        case 0x15bc7cu: goto label_15bc7c;
        case 0x15bc80u: goto label_15bc80;
        case 0x15bc84u: goto label_15bc84;
        case 0x15bc88u: goto label_15bc88;
        case 0x15bc8cu: goto label_15bc8c;
        case 0x15bc90u: goto label_15bc90;
        case 0x15bc94u: goto label_15bc94;
        case 0x15bc98u: goto label_15bc98;
        case 0x15bc9cu: goto label_15bc9c;
        case 0x15bca0u: goto label_15bca0;
        case 0x15bca4u: goto label_15bca4;
        case 0x15bca8u: goto label_15bca8;
        case 0x15bcacu: goto label_15bcac;
        case 0x15bcb0u: goto label_15bcb0;
        case 0x15bcb4u: goto label_15bcb4;
        case 0x15bcb8u: goto label_15bcb8;
        case 0x15bcbcu: goto label_15bcbc;
        case 0x15bcc0u: goto label_15bcc0;
        case 0x15bcc4u: goto label_15bcc4;
        case 0x15bcc8u: goto label_15bcc8;
        case 0x15bcccu: goto label_15bccc;
        case 0x15bcd0u: goto label_15bcd0;
        case 0x15bcd4u: goto label_15bcd4;
        case 0x15bcd8u: goto label_15bcd8;
        case 0x15bcdcu: goto label_15bcdc;
        case 0x15bce0u: goto label_15bce0;
        case 0x15bce4u: goto label_15bce4;
        case 0x15bce8u: goto label_15bce8;
        case 0x15bcecu: goto label_15bcec;
        case 0x15bcf0u: goto label_15bcf0;
        case 0x15bcf4u: goto label_15bcf4;
        case 0x15bcf8u: goto label_15bcf8;
        case 0x15bcfcu: goto label_15bcfc;
        case 0x15bd00u: goto label_15bd00;
        case 0x15bd04u: goto label_15bd04;
        case 0x15bd08u: goto label_15bd08;
        case 0x15bd0cu: goto label_15bd0c;
        default: break;
    }

    ctx->pc = 0x15bc50u;

label_15bc50:
    // 0x15bc50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15bc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_15bc54:
    // 0x15bc54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15bc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_15bc58:
    // 0x15bc58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15bc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_15bc5c:
    // 0x15bc5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15bc5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15bc60:
    // 0x15bc60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15bc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_15bc64:
    // 0x15bc64: 0x92020a20  lbu         $v0, 0xA20($s0)
    ctx->pc = 0x15bc64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2592)));
label_15bc68:
    // 0x15bc68: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_15bc6c:
    if (ctx->pc == 0x15BC6Cu) {
        ctx->pc = 0x15BC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC68u;
        // 0x15bc6c: 0x30b100ff  andi        $s1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BC70u;
        goto label_15bc70;
    }
    ctx->pc = 0x15BC68u;
    {
        const bool branch_taken_0x15bc68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC68u;
        // 0x15bc6c: 0x30b100ff  andi        $s1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bc68) {
            ctx->pc = 0x15BC9Cu;
            goto label_15bc9c;
        }
    }
    ctx->pc = 0x15BC70u;
label_15bc70:
    // 0x15bc70: 0xc04f452  jal         func_13D148
label_15bc74:
    if (ctx->pc == 0x15BC74u) {
        ctx->pc = 0x15BC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC70u;
        // 0x15bc74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BC78u;
        goto label_15bc78;
    }
    ctx->pc = 0x15BC70u;
    SET_GPR_U32(ctx, 31, 0x15BC78u);
    ctx->pc = 0x15BC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BC70u;
    // 0x15bc74: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D148u, 0x15BC70u, 0x15BC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BC78u;
label_15bc78:
    // 0x15bc78: 0x10000021  b           . + 4 + (0x21 << 2)
label_15bc7c:
    if (ctx->pc == 0x15BC7Cu) {
        ctx->pc = 0x15BC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC78u;
        // 0x15bc7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BC80u;
        goto label_15bc80;
    }
    ctx->pc = 0x15BC78u;
    {
        const bool branch_taken_0x15bc78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC78u;
        // 0x15bc7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bc78) {
            ctx->pc = 0x15BD00u;
            goto label_15bd00;
        }
    }
    ctx->pc = 0x15BC80u;
label_15bc80:
    // 0x15bc80: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x15bc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_15bc84:
    // 0x15bc84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15bc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15bc88:
    // 0x15bc88: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x15bc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_15bc8c:
    // 0x15bc8c: 0x40f809  jalr        $v0
label_15bc90:
    if (ctx->pc == 0x15BC90u) {
        ctx->pc = 0x15BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC8Cu;
        // 0x15bc90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BC94u;
        goto label_15bc94;
    }
    ctx->pc = 0x15BC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15BC94u);
        ctx->pc = 0x15BC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC8Cu;
        // 0x15bc90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BC8Cu, 0x15BC94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15BC94u;
label_15bc94:
    // 0x15bc94: 0x1000001a  b           . + 4 + (0x1A << 2)
label_15bc98:
    if (ctx->pc == 0x15BC98u) {
        ctx->pc = 0x15BC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC94u;
        // 0x15bc98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BC9Cu;
        goto label_15bc9c;
    }
    ctx->pc = 0x15BC94u;
    {
        const bool branch_taken_0x15bc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BC94u;
        // 0x15bc98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bc94) {
            ctx->pc = 0x15BD00u;
            goto label_15bd00;
        }
    }
    ctx->pc = 0x15BC9Cu;
label_15bc9c:
    // 0x15bc9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15bc9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15bca0:
    // 0x15bca0: 0xc04f130  jal         func_13C4C0
label_15bca4:
    if (ctx->pc == 0x15BCA4u) {
        ctx->pc = 0x15BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BCA0u;
        // 0x15bca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BCA8u;
        goto label_15bca8;
    }
    ctx->pc = 0x15BCA0u;
    SET_GPR_U32(ctx, 31, 0x15BCA8u);
    ctx->pc = 0x15BCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BCA0u;
    // 0x15bca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4C0u, 0x15BCA0u, 0x15BCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BCA8u;
label_15bca8:
    // 0x15bca8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x15bca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15bcac:
    // 0x15bcac: 0x50a00014  beql        $a1, $zero, . + 4 + (0x14 << 2)
label_15bcb0:
    if (ctx->pc == 0x15BCB0u) {
        ctx->pc = 0x15BCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BCACu;
        // 0x15bcb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BCB4u;
        goto label_15bcb4;
    }
    ctx->pc = 0x15BCACu;
    {
        const bool branch_taken_0x15bcac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bcac) {
            ctx->pc = 0x15BCB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15BCACu;
            // 0x15bcb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15BD00u;
            goto label_15bd00;
        }
    }
    ctx->pc = 0x15BCB4u;
label_15bcb4:
    // 0x15bcb4: 0x92020a20  lbu         $v0, 0xA20($s0)
    ctx->pc = 0x15bcb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2592)));
label_15bcb8:
    // 0x15bcb8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_15bcbc:
    if (ctx->pc == 0x15BCBCu) {
        ctx->pc = 0x15BCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BCB8u;
        // 0x15bcbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BCC0u;
        goto label_15bcc0;
    }
    ctx->pc = 0x15BCB8u;
    {
        const bool branch_taken_0x15bcb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BCB8u;
        // 0x15bcbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bcb8) {
            ctx->pc = 0x15BCF0u;
            goto label_15bcf0;
        }
    }
    ctx->pc = 0x15BCC0u;
label_15bcc0:
    // 0x15bcc0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x15bcc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15bcc4:
    // 0x15bcc4: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x15bcc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_15bcc8:
    // 0x15bcc8: 0x871818  mult        $v1, $a0, $a3
    ctx->pc = 0x15bcc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_15bccc:
    // 0x15bccc: 0x0  nop
    ctx->pc = 0x15bcccu;
    // NOP
label_15bcd0:
    // 0x15bcd0: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x15bcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_15bcd4:
    // 0x15bcd4: 0x8c43032c  lw          $v1, 0x32C($v0)
    ctx->pc = 0x15bcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 812)));
label_15bcd8:
    // 0x15bcd8: 0x1065ffe9  beq         $v1, $a1, . + 4 + (-0x17 << 2)
label_15bcdc:
    if (ctx->pc == 0x15BCDCu) {
        ctx->pc = 0x15BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BCD8u;
        // 0x15bcdc: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BCE0u;
        goto label_15bce0;
    }
    ctx->pc = 0x15BCD8u;
    {
        const bool branch_taken_0x15bcd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x15BCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BCD8u;
        // 0x15bcdc: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bcd8) {
            ctx->pc = 0x15BC80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15bc80;
        }
    }
    ctx->pc = 0x15BCE0u;
label_15bce0:
    // 0x15bce0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x15bce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_15bce4:
    // 0x15bce4: 0x86182b  sltu        $v1, $a0, $a2
    ctx->pc = 0x15bce4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_15bce8:
    // 0x15bce8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_15bcec:
    if (ctx->pc == 0x15BCECu) {
        ctx->pc = 0x15BCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BCE8u;
        // 0x15bcec: 0x871818  mult        $v1, $a0, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BCF0u;
        goto label_15bcf0;
    }
    ctx->pc = 0x15BCE8u;
    {
        const bool branch_taken_0x15bce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15BCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BCE8u;
        // 0x15bcec: 0x871818  mult        $v1, $a0, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15bce8) {
            ctx->pc = 0x15BCD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15bcd0;
        }
    }
    ctx->pc = 0x15BCF0u;
label_15bcf0:
    // 0x15bcf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15bcf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15bcf4:
    // 0x15bcf4: 0xc04f452  jal         func_13D148
label_15bcf8:
    if (ctx->pc == 0x15BCF8u) {
        ctx->pc = 0x15BCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BCF4u;
        // 0x15bcf8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BCFCu;
        goto label_15bcfc;
    }
    ctx->pc = 0x15BCF4u;
    SET_GPR_U32(ctx, 31, 0x15BCFCu);
    ctx->pc = 0x15BCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15BCF4u;
    // 0x15bcf8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D148u, 0x15BCF4u, 0x15BCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15BCFCu;
label_15bcfc:
    // 0x15bcfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15bcfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15bd00:
    // 0x15bd00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15bd00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_15bd04:
    // 0x15bd04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15bd04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15bd08:
    // 0x15bd08: 0x3e00008  jr          $ra
label_15bd0c:
    if (ctx->pc == 0x15BD0Cu) {
        ctx->pc = 0x15BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD08u;
        // 0x15bd0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15BD10u;
        goto label_fallthrough_0x15bd08;
    }
    ctx->pc = 0x15BD08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15BD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15BD08u;
        // 0x15bd0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15BD08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x15bd08:
    ctx->pc = 0x15BD10u;
}

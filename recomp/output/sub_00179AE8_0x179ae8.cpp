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

// Function: sub_00179AE8
// Address: 0x179ae8 - 0x179c90
void sub_00179AE8_0x179ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179AE8_0x179ae8");
#endif

    switch (ctx->pc) {
        case 0x179ae8u: goto label_179ae8;
        case 0x179aecu: goto label_179aec;
        case 0x179af0u: goto label_179af0;
        case 0x179af4u: goto label_179af4;
        case 0x179af8u: goto label_179af8;
        case 0x179afcu: goto label_179afc;
        case 0x179b00u: goto label_179b00;
        case 0x179b04u: goto label_179b04;
        case 0x179b08u: goto label_179b08;
        case 0x179b0cu: goto label_179b0c;
        case 0x179b10u: goto label_179b10;
        case 0x179b14u: goto label_179b14;
        case 0x179b18u: goto label_179b18;
        case 0x179b1cu: goto label_179b1c;
        case 0x179b20u: goto label_179b20;
        case 0x179b24u: goto label_179b24;
        case 0x179b28u: goto label_179b28;
        case 0x179b2cu: goto label_179b2c;
        case 0x179b30u: goto label_179b30;
        case 0x179b34u: goto label_179b34;
        case 0x179b38u: goto label_179b38;
        case 0x179b3cu: goto label_179b3c;
        case 0x179b40u: goto label_179b40;
        case 0x179b44u: goto label_179b44;
        case 0x179b48u: goto label_179b48;
        case 0x179b4cu: goto label_179b4c;
        case 0x179b50u: goto label_179b50;
        case 0x179b54u: goto label_179b54;
        case 0x179b58u: goto label_179b58;
        case 0x179b5cu: goto label_179b5c;
        case 0x179b60u: goto label_179b60;
        case 0x179b64u: goto label_179b64;
        case 0x179b68u: goto label_179b68;
        case 0x179b6cu: goto label_179b6c;
        case 0x179b70u: goto label_179b70;
        case 0x179b74u: goto label_179b74;
        case 0x179b78u: goto label_179b78;
        case 0x179b7cu: goto label_179b7c;
        case 0x179b80u: goto label_179b80;
        case 0x179b84u: goto label_179b84;
        case 0x179b88u: goto label_179b88;
        case 0x179b8cu: goto label_179b8c;
        case 0x179b90u: goto label_179b90;
        case 0x179b94u: goto label_179b94;
        case 0x179b98u: goto label_179b98;
        case 0x179b9cu: goto label_179b9c;
        case 0x179ba0u: goto label_179ba0;
        case 0x179ba4u: goto label_179ba4;
        case 0x179ba8u: goto label_179ba8;
        case 0x179bacu: goto label_179bac;
        case 0x179bb0u: goto label_179bb0;
        case 0x179bb4u: goto label_179bb4;
        case 0x179bb8u: goto label_179bb8;
        case 0x179bbcu: goto label_179bbc;
        case 0x179bc0u: goto label_179bc0;
        case 0x179bc4u: goto label_179bc4;
        case 0x179bc8u: goto label_179bc8;
        case 0x179bccu: goto label_179bcc;
        case 0x179bd0u: goto label_179bd0;
        case 0x179bd4u: goto label_179bd4;
        case 0x179bd8u: goto label_179bd8;
        case 0x179bdcu: goto label_179bdc;
        case 0x179be0u: goto label_179be0;
        case 0x179be4u: goto label_179be4;
        case 0x179be8u: goto label_179be8;
        case 0x179becu: goto label_179bec;
        case 0x179bf0u: goto label_179bf0;
        case 0x179bf4u: goto label_179bf4;
        case 0x179bf8u: goto label_179bf8;
        case 0x179bfcu: goto label_179bfc;
        case 0x179c00u: goto label_179c00;
        case 0x179c04u: goto label_179c04;
        case 0x179c08u: goto label_179c08;
        case 0x179c0cu: goto label_179c0c;
        case 0x179c10u: goto label_179c10;
        case 0x179c14u: goto label_179c14;
        case 0x179c18u: goto label_179c18;
        case 0x179c1cu: goto label_179c1c;
        case 0x179c20u: goto label_179c20;
        case 0x179c24u: goto label_179c24;
        case 0x179c28u: goto label_179c28;
        case 0x179c2cu: goto label_179c2c;
        case 0x179c30u: goto label_179c30;
        case 0x179c34u: goto label_179c34;
        case 0x179c38u: goto label_179c38;
        case 0x179c3cu: goto label_179c3c;
        case 0x179c40u: goto label_179c40;
        case 0x179c44u: goto label_179c44;
        case 0x179c48u: goto label_179c48;
        case 0x179c4cu: goto label_179c4c;
        case 0x179c50u: goto label_179c50;
        case 0x179c54u: goto label_179c54;
        case 0x179c58u: goto label_179c58;
        case 0x179c5cu: goto label_179c5c;
        case 0x179c60u: goto label_179c60;
        case 0x179c64u: goto label_179c64;
        case 0x179c68u: goto label_179c68;
        case 0x179c6cu: goto label_179c6c;
        case 0x179c70u: goto label_179c70;
        case 0x179c74u: goto label_179c74;
        case 0x179c78u: goto label_179c78;
        case 0x179c7cu: goto label_179c7c;
        case 0x179c80u: goto label_179c80;
        case 0x179c84u: goto label_179c84;
        case 0x179c88u: goto label_179c88;
        case 0x179c8cu: goto label_179c8c;
        default: break;
    }

    ctx->pc = 0x179ae8u;

label_179ae8:
    // 0x179ae8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x179ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_179aec:
    // 0x179aec: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x179aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_179af0:
    // 0x179af0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x179af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_179af4:
    // 0x179af4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x179af4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_179af8:
    // 0x179af8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x179af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_179afc:
    // 0x179afc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x179afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_179b00:
    // 0x179b00: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x179b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_179b04:
    // 0x179b04: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x179b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_179b08:
    // 0x179b08: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x179b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_179b0c:
    // 0x179b0c: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x179b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_179b10:
    // 0x179b10: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x179b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_179b14:
    // 0x179b14: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x179b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_179b18:
    // 0x179b18: 0x92620530  lbu         $v0, 0x530($s3)
    ctx->pc = 0x179b18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1328)));
label_179b1c:
    // 0x179b1c: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
label_179b20:
    if (ctx->pc == 0x179B20u) {
        ctx->pc = 0x179B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B1Cu;
        // 0x179b20: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179B24u;
        goto label_179b24;
    }
    ctx->pc = 0x179B1Cu;
    {
        const bool branch_taken_0x179b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B1Cu;
        // 0x179b20: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179b1c) {
            ctx->pc = 0x179C60u;
            goto label_179c60;
        }
    }
    ctx->pc = 0x179B24u;
label_179b24:
    // 0x179b24: 0x92620009  lbu         $v0, 0x9($s3)
    ctx->pc = 0x179b24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 9)));
label_179b28:
    // 0x179b28: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
label_179b2c:
    if (ctx->pc == 0x179B2Cu) {
        ctx->pc = 0x179B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B28u;
        // 0x179b2c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179B30u;
        goto label_179b30;
    }
    ctx->pc = 0x179B28u;
    {
        const bool branch_taken_0x179b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B28u;
        // 0x179b2c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179b28) {
            ctx->pc = 0x179C60u;
            goto label_179c60;
        }
    }
    ctx->pc = 0x179B30u;
label_179b30:
    // 0x179b30: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x179b30u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_179b34:
    // 0x179b34: 0x2c0a82d  daddu       $s5, $s6, $zero
    ctx->pc = 0x179b34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_179b38:
    // 0x179b38: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x179b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_179b3c:
    // 0x179b3c: 0x0  nop
    ctx->pc = 0x179b3cu;
    // NOP
label_179b40:
    // 0x179b40: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x179b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_179b44:
    // 0x179b44: 0x2a31018  mult        $v0, $s5, $v1
    ctx->pc = 0x179b44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_179b48:
    // 0x179b48: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x179b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
label_179b4c:
    // 0x179b4c: 0x2629021  addu        $s2, $s3, $v0
    ctx->pc = 0x179b4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_179b50:
    // 0x179b50: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x179b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_179b54:
    // 0x179b54: 0x10640031  beq         $v1, $a0, . + 4 + (0x31 << 2)
label_179b58:
    if (ctx->pc == 0x179B58u) {
        ctx->pc = 0x179B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B54u;
        // 0x179b58: 0x26c20001  addiu       $v0, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179B5Cu;
        goto label_179b5c;
    }
    ctx->pc = 0x179B54u;
    {
        const bool branch_taken_0x179b54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x179B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B54u;
        // 0x179b58: 0x26c20001  addiu       $v0, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179b54) {
            ctx->pc = 0x179C1Cu;
            goto label_179c1c;
        }
    }
    ctx->pc = 0x179B5Cu;
label_179b5c:
    // 0x179b5c: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x179b5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_179b60:
    // 0x179b60: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x179b60u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_179b64:
    // 0x179b64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x179b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_179b68:
    // 0x179b68: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x179b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_179b6c:
    // 0x179b6c: 0xc05ebac  jal         func_17AEB0
label_179b70:
    if (ctx->pc == 0x179B70u) {
        ctx->pc = 0x179B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B6Cu;
        // 0x179b70: 0x24170009  addiu       $s7, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179B74u;
        goto label_179b74;
    }
    ctx->pc = 0x179B6Cu;
    SET_GPR_U32(ctx, 31, 0x179B74u);
    ctx->pc = 0x179B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179B6Cu;
    // 0x179b70: 0x24170009  addiu       $s7, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AEB0u, 0x179B6Cu, 0x179B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179B74u;
label_179b74:
    // 0x179b74: 0xafb70004  sw          $s7, 0x4($sp)
    ctx->pc = 0x179b74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 23));
label_179b78:
    // 0x179b78: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x179b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_179b7c:
    // 0x179b7c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x179b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_179b80:
    // 0x179b80: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x179b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_179b84:
    // 0x179b84: 0x40f809  jalr        $v0
label_179b88:
    if (ctx->pc == 0x179B88u) {
        ctx->pc = 0x179B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B84u;
        // 0x179b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179B8Cu;
        goto label_179b8c;
    }
    ctx->pc = 0x179B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x179B8Cu);
        ctx->pc = 0x179B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179B84u;
        // 0x179b88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179B84u, 0x179B8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x179B8Cu;
label_179b8c:
    // 0x179b8c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x179b8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_179b90:
    // 0x179b90: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x179b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_179b94:
    // 0x179b94: 0xae540010  sw          $s4, 0x10($s2)
    ctx->pc = 0x179b94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 20));
label_179b98:
    // 0x179b98: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x179b98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_179b9c:
    // 0x179b9c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x179b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_179ba0:
    // 0x179ba0: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x179ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_179ba4:
    // 0x179ba4: 0x40f809  jalr        $v0
label_179ba8:
    if (ctx->pc == 0x179BA8u) {
        ctx->pc = 0x179BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BA4u;
        // 0x179ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179BACu;
        goto label_179bac;
    }
    ctx->pc = 0x179BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x179BACu);
        ctx->pc = 0x179BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BA4u;
        // 0x179ba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179BA4u, 0x179BACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x179BACu;
label_179bac:
    // 0x179bac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x179bacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_179bb0:
    // 0x179bb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_179bb4:
    // 0x179bb4: 0xc04f844  jal         func_13E110
label_179bb8:
    if (ctx->pc == 0x179BB8u) {
        ctx->pc = 0x179BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BB4u;
        // 0x179bb8: 0xae510018  sw          $s1, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179BBCu;
        goto label_179bbc;
    }
    ctx->pc = 0x179BB4u;
    SET_GPR_U32(ctx, 31, 0x179BBCu);
    ctx->pc = 0x179BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179BB4u;
    // 0x179bb8: 0xae510018  sw          $s1, 0x18($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E110u, 0x179BB4u, 0x179BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179BBCu;
label_179bbc:
    // 0x179bbc: 0xa242001c  sb          $v0, 0x1C($s2)
    ctx->pc = 0x179bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 28), (uint8_t)GPR_U32(ctx, 2));
label_179bc0:
    // 0x179bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_179bc4:
    // 0x179bc4: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x179bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
label_179bc8:
    // 0x179bc8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x179bc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_179bcc:
    // 0x179bcc: 0xa3a00001  sb          $zero, 0x1($sp)
    ctx->pc = 0x179bccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 0));
label_179bd0:
    // 0x179bd0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x179bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_179bd4:
    // 0x179bd4: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x179bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_179bd8:
    // 0x179bd8: 0x60f809  jalr        $v1
label_179bdc:
    if (ctx->pc == 0x179BDCu) {
        ctx->pc = 0x179BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BD8u;
        // 0x179bdc: 0x27a60001  addiu       $a2, $sp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179BE0u;
        goto label_179be0;
    }
    ctx->pc = 0x179BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x179BE0u);
        ctx->pc = 0x179BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BD8u;
        // 0x179bdc: 0x27a60001  addiu       $a2, $sp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179BD8u, 0x179BE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x179BE0u;
label_179be0:
    // 0x179be0: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x179be0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_179be4:
    // 0x179be4: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x179be4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_179be8:
    // 0x179be8: 0xa242001e  sb          $v0, 0x1E($s2)
    ctx->pc = 0x179be8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 30), (uint8_t)GPR_U32(ctx, 2));
label_179bec:
    // 0x179bec: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_179bf0:
    if (ctx->pc == 0x179BF0u) {
        ctx->pc = 0x179BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BECu;
        // 0x179bf0: 0xa243001f  sb          $v1, 0x1F($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 31), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179BF4u;
        goto label_179bf4;
    }
    ctx->pc = 0x179BECu;
    {
        const bool branch_taken_0x179bec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x179BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179BECu;
        // 0x179bf0: 0xa243001f  sb          $v1, 0x1F($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 31), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179bec) {
            ctx->pc = 0x179BFCu;
            goto label_179bfc;
        }
    }
    ctx->pc = 0x179BF4u;
label_179bf4:
    // 0x179bf4: 0xa3be0000  sb          $fp, 0x0($sp)
    ctx->pc = 0x179bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 30));
label_179bf8:
    // 0x179bf8: 0xa3be0001  sb          $fp, 0x1($sp)
    ctx->pc = 0x179bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 30));
label_179bfc:
    // 0x179bfc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x179bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_179c00:
    // 0x179c00: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_179c04:
    if (ctx->pc == 0x179C04u) {
        ctx->pc = 0x179C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C00u;
        // 0x179c04: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179C08u;
        goto label_179c08;
    }
    ctx->pc = 0x179C00u;
    {
        const bool branch_taken_0x179c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C00u;
        // 0x179c04: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179c00) {
            ctx->pc = 0x179C20u;
            goto label_179c20;
        }
    }
    ctx->pc = 0x179C08u;
label_179c08:
    // 0x179c08: 0x52970006  beql        $s4, $s7, . + 4 + (0x6 << 2)
label_179c0c:
    if (ctx->pc == 0x179C0Cu) {
        ctx->pc = 0x179C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C08u;
        // 0x179c0c: 0x305500ff  andi        $s5, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x179C10u;
        goto label_179c10;
    }
    ctx->pc = 0x179C08u;
    {
        const bool branch_taken_0x179c08 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 23));
        if (branch_taken_0x179c08) {
            ctx->pc = 0x179C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179C08u;
            // 0x179c0c: 0x305500ff  andi        $s5, $v0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x179C24u;
            goto label_179c24;
        }
    }
    ctx->pc = 0x179C10u;
label_179c10:
    // 0x179c10: 0xc05a5fe  jal         func_1697F8
label_179c14:
    if (ctx->pc == 0x179C14u) {
        ctx->pc = 0x179C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C10u;
        // 0x179c14: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179C18u;
        goto label_179c18;
    }
    ctx->pc = 0x179C10u;
    SET_GPR_U32(ctx, 31, 0x179C18u);
    ctx->pc = 0x179C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179C10u;
    // 0x179c14: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x179C10u, 0x179C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179C18u;
label_179c18:
    // 0x179c18: 0xae420024  sw          $v0, 0x24($s2)
    ctx->pc = 0x179c18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 2));
label_179c1c:
    // 0x179c1c: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x179c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_179c20:
    // 0x179c20: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x179c20u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_179c24:
    // 0x179c24: 0x2ea30014  sltiu       $v1, $s5, 0x14
    ctx->pc = 0x179c24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_179c28:
    // 0x179c28: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_179c2c:
    if (ctx->pc == 0x179C2Cu) {
        ctx->pc = 0x179C30u;
        goto label_179c30;
    }
    ctx->pc = 0x179C28u;
    {
        const bool branch_taken_0x179c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x179c28) {
            ctx->pc = 0x179C3Cu;
            goto label_179c3c;
        }
    }
    ctx->pc = 0x179C30u;
label_179c30:
    // 0x179c30: 0x92620530  lbu         $v0, 0x530($s3)
    ctx->pc = 0x179c30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1328)));
label_179c34:
    // 0x179c34: 0x16c2ffc2  bne         $s6, $v0, . + 4 + (-0x3E << 2)
label_179c38:
    if (ctx->pc == 0x179C38u) {
        ctx->pc = 0x179C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C34u;
        // 0x179c38: 0x24030028  addiu       $v1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179C3Cu;
        goto label_179c3c;
    }
    ctx->pc = 0x179C34u;
    {
        const bool branch_taken_0x179c34 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x179C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C34u;
        // 0x179c38: 0x24030028  addiu       $v1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179c34) {
            ctx->pc = 0x179B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179b40;
        }
    }
    ctx->pc = 0x179C3Cu;
label_179c3c:
    // 0x179c3c: 0xc05e724  jal         func_179C90
label_179c40:
    if (ctx->pc == 0x179C40u) {
        ctx->pc = 0x179C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C3Cu;
        // 0x179c40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179C44u;
        goto label_179c44;
    }
    ctx->pc = 0x179C3Cu;
    SET_GPR_U32(ctx, 31, 0x179C44u);
    ctx->pc = 0x179C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179C3Cu;
    // 0x179c40: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179C90u, 0x179C3Cu, 0x179C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179C44u;
label_179c44:
    // 0x179c44: 0xc05e760  jal         func_179D80
label_179c48:
    if (ctx->pc == 0x179C48u) {
        ctx->pc = 0x179C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C44u;
        // 0x179c48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179C4Cu;
        goto label_179c4c;
    }
    ctx->pc = 0x179C44u;
    SET_GPR_U32(ctx, 31, 0x179C4Cu);
    ctx->pc = 0x179C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179C44u;
    // 0x179c48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179D80u, 0x179C44u, 0x179C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179C4Cu;
label_179c4c:
    // 0x179c4c: 0xc05e7a2  jal         func_179E88
label_179c50:
    if (ctx->pc == 0x179C50u) {
        ctx->pc = 0x179C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C4Cu;
        // 0x179c50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179C54u;
        goto label_179c54;
    }
    ctx->pc = 0x179C4Cu;
    SET_GPR_U32(ctx, 31, 0x179C54u);
    ctx->pc = 0x179C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179C4Cu;
    // 0x179c50: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179E88u, 0x179C4Cu, 0x179C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179C54u;
label_179c54:
    // 0x179c54: 0xc05e7f6  jal         func_179FD8
label_179c58:
    if (ctx->pc == 0x179C58u) {
        ctx->pc = 0x179C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C54u;
        // 0x179c58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179C5Cu;
        goto label_179c5c;
    }
    ctx->pc = 0x179C54u;
    SET_GPR_U32(ctx, 31, 0x179C5Cu);
    ctx->pc = 0x179C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179C54u;
    // 0x179c58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179FD8u, 0x179C54u, 0x179C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179C5Cu;
label_179c5c:
    // 0x179c5c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x179c5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_179c60:
    // 0x179c60: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x179c60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_179c64:
    // 0x179c64: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x179c64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_179c68:
    // 0x179c68: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x179c68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_179c6c:
    // 0x179c6c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x179c6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_179c70:
    // 0x179c70: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x179c70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_179c74:
    // 0x179c74: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x179c74u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_179c78:
    // 0x179c78: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x179c78u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_179c7c:
    // 0x179c7c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x179c7cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_179c80:
    // 0x179c80: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x179c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_179c84:
    // 0x179c84: 0x3e00008  jr          $ra
label_179c88:
    if (ctx->pc == 0x179C88u) {
        ctx->pc = 0x179C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C84u;
        // 0x179c88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x179C8Cu;
        goto label_179c8c;
    }
    ctx->pc = 0x179C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179C84u;
        // 0x179c88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179C8Cu;
label_179c8c:
    // 0x179c8c: 0x0  nop
    ctx->pc = 0x179c8cu;
    // NOP
    ctx->pc = 0x179c90u;
}

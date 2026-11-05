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

// Function: sub_00321AC8
// Address: 0x321ac8 - 0x321c58
void sub_00321AC8_0x321ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00321AC8_0x321ac8");
#endif

    switch (ctx->pc) {
        case 0x321b28u: goto label_321b28;
        case 0x321bb0u: goto label_321bb0;
        case 0x321bd8u: goto label_321bd8;
        case 0x321bf8u: goto label_321bf8;
        case 0x321c24u: goto label_321c24;
        default: break;
    }

    ctx->pc = 0x321ac8u;

    // 0x321ac8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x321ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x321acc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x321accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321ad0: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x321ad0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x321ad4: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x321ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x321ad8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x321ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x321adc: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x321adcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
    // 0x321ae0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x321ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x321ae4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x321ae4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321ae8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x321ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x321aec: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x321aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x321af0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x321af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x321af4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x321af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x321af8: 0xacc2bce4  sw          $v0, -0x431C($a2)
    ctx->pc = 0x321af8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FBCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBCE4u, _value); } while (0);
    // 0x321afc: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x321afcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x321b00: 0x246458e0  addiu       $a0, $v1, 0x58E0
    ctx->pc = 0x321b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 22752));
    // 0x321b04: 0x8c6358e0  lw          $v1, 0x58E0($v1)
    ctx->pc = 0x321b04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5B58E0u));
    // 0x321b08: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x321b08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5B58E4u));
    // 0x321b0c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x321b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x321b10: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x321b10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x321b14: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x321B14u;
    {
        const bool branch_taken_0x321b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x321B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B14u;
        // 0x321b18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321b14) {
            ctx->pc = 0x321B40u;
            goto label_321b40;
        }
    }
    ctx->pc = 0x321B1Cu;
    // 0x321b1c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x321b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x321b20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x321b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321b24: 0x0  nop
    ctx->pc = 0x321b24u;
    // NOP
label_321b28:
    // 0x321b28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x321b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x321b2c: 0x10460041  beq         $v0, $a2, . + 4 + (0x41 << 2)
    ctx->pc = 0x321B2Cu;
    {
        const bool branch_taken_0x321b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x321B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B2Cu;
        // 0x321b30: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321b2c) {
            ctx->pc = 0x321C34u;
            goto label_321c34;
        }
    }
    ctx->pc = 0x321B34u;
    // 0x321b34: 0xa4102b  sltu        $v0, $a1, $a0
    ctx->pc = 0x321b34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x321b38: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x321B38u;
    {
        const bool branch_taken_0x321b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x321B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B38u;
        // 0x321b3c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321b38) {
            ctx->pc = 0x321B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321b28;
        }
    }
    ctx->pc = 0x321B40u;
label_321b40:
    // 0x321b40: 0x24f258e0  addiu       $s2, $a3, 0x58E0
    ctx->pc = 0x321b40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 22752));
    // 0x321b44: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x321b44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x321b48: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x321b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x321b4c: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x321B4Cu;
    {
        const bool branch_taken_0x321b4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x321B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B4Cu;
        // 0x321b50: 0x3a0a02d  daddu       $s4, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321b4c) {
            ctx->pc = 0x321B70u;
            goto label_321b70;
        }
    }
    ctx->pc = 0x321B54u;
    // 0x321b54: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x321B54u;
    {
        const bool branch_taken_0x321b54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x321B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B54u;
        // 0x321b58: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321b54) {
            ctx->pc = 0x321B60u;
            goto label_321b60;
        }
    }
    ctx->pc = 0x321B5Cu;
    // 0x321b5c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x321b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_321b60:
    // 0x321b60: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x321b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x321b64: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x321b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x321b68: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x321B68u;
    {
        const bool branch_taken_0x321b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B68u;
        // 0x321b6c: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321b68) {
            ctx->pc = 0x321C34u;
            goto label_321c34;
        }
    }
    ctx->pc = 0x321B70u;
label_321b70:
    // 0x321b70: 0x8ce358e0  lw          $v1, 0x58E0($a3)
    ctx->pc = 0x321b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 22752)));
    // 0x321b74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x321b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x321b78: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x321b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x321b7c: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x321b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x321b80: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x321b80u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x321b84: 0x27a20008  addiu       $v0, $sp, 0x8
    ctx->pc = 0x321b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x321b88: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x321b88u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x321b8c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x321b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x321b90: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x321b90u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x321b94: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x321b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x321b98: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x321b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x321b9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x321B9Cu;
    {
        const bool branch_taken_0x321b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x321BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321B9Cu;
        // 0x321ba0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321b9c) {
            ctx->pc = 0x321BB8u;
            goto label_321bb8;
        }
    }
    ctx->pc = 0x321BA4u;
    // 0x321ba4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x321ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321ba8: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x321BA8u;
    SET_GPR_U32(ctx, 31, 0x321BB0u);
    ctx->pc = 0x321BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321BA8u;
    // 0x321bac: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x321BA8u, 0x321BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321BB0u;
label_321bb0:
    // 0x321bb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x321BB0u;
    {
        const bool branch_taken_0x321bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321BB0u;
        // 0x321bb4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321bb0) {
            ctx->pc = 0x321BC0u;
            goto label_321bc0;
        }
    }
    ctx->pc = 0x321BB8u;
label_321bb8:
    // 0x321bb8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x321bb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321bbc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x321bbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_321bc0:
    // 0x321bc0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x321bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x321bc4: 0x12050006  beq         $s0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x321BC4u;
    {
        const bool branch_taken_0x321bc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x321BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321BC4u;
        // 0x321bc8: 0x2058023  subu        $s0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321bc4) {
            ctx->pc = 0x321BE0u;
            goto label_321be0;
        }
    }
    ctx->pc = 0x321BCCu;
    // 0x321bcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x321bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321bd0: 0xc0efa74  jal         func_3BE9D0
    ctx->pc = 0x321BD0u;
    SET_GPR_U32(ctx, 31, 0x321BD8u);
    ctx->pc = 0x321BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x321BD0u;
    // 0x321bd4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE9D0u, 0x321BD0u, 0x321BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321BD8u;
label_321bd8:
    // 0x321bd8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x321BD8u;
    {
        const bool branch_taken_0x321bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x321BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321BD8u;
        // 0x321bdc: 0x501821  addu        $v1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321bd8) {
            ctx->pc = 0x321BE4u;
            goto label_321be4;
        }
    }
    ctx->pc = 0x321BE0u;
label_321be0:
    // 0x321be0: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x321be0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_321be4:
    // 0x321be4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x321be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x321be8: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x321be8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321bec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x321becu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x321bf0: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x321BF0u;
    {
        const bool branch_taken_0x321bf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x321bf0) {
            ctx->pc = 0x321BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x321BF0u;
            // 0x321bf4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x321C14u;
            goto label_321c14;
        }
    }
    ctx->pc = 0x321BF8u;
label_321bf8:
    // 0x321bf8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x321bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x321bfc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x321bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x321c00: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x321c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x321c04: 0x0  nop
    ctx->pc = 0x321c04u;
    // NOP
    // 0x321c08: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x321C08u;
    {
        const bool branch_taken_0x321c08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x321C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321C08u;
        // 0x321c0c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321c08) {
            ctx->pc = 0x321BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_321bf8;
        }
    }
    ctx->pc = 0x321C10u;
    // 0x321c10: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x321c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_321c14:
    // 0x321c14: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x321C14u;
    {
        const bool branch_taken_0x321c14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x321C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321C14u;
        // 0x321c18: 0x2711021  addu        $v0, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321c14) {
            ctx->pc = 0x321C28u;
            goto label_321c28;
        }
    }
    ctx->pc = 0x321C1Cu;
    // 0x321c1c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x321C1Cu;
    SET_GPR_U32(ctx, 31, 0x321C24u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x321C1Cu, 0x321C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321C24u;
label_321c24:
    // 0x321c24: 0x2711021  addu        $v0, $s3, $s1
    ctx->pc = 0x321c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_321c28:
    // 0x321c28: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x321c28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x321c2c: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x321c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x321c30: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x321c30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_321c34:
    // 0x321c34: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x321c34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x321c38: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x321c38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x321c3c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x321c3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x321c40: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x321c40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x321c44: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x321c44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x321c48: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x321c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x321c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x321C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x321C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321C4Cu;
        // 0x321c50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x321C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x321C54u;
    // 0x321c54: 0x0  nop
    ctx->pc = 0x321c54u;
    // NOP
    ctx->pc = 0x321c58u;
}

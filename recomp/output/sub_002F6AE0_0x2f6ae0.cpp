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

// Function: sub_002F6AE0
// Address: 0x2f6ae0 - 0x2f6c58
void sub_002F6AE0_0x2f6ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6AE0_0x2f6ae0");
#endif

    switch (ctx->pc) {
        case 0x2f6b14u: goto label_2f6b14;
        case 0x2f6b38u: goto label_2f6b38;
        case 0x2f6b48u: goto label_2f6b48;
        case 0x2f6b68u: goto label_2f6b68;
        case 0x2f6b78u: goto label_2f6b78;
        case 0x2f6b94u: goto label_2f6b94;
        case 0x2f6c04u: goto label_2f6c04;
        case 0x2f6c0cu: goto label_2f6c0c;
        default: break;
    }

    ctx->pc = 0x2f6ae0u;

    // 0x2f6ae0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f6ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f6ae4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f6ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f6ae8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f6ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f6aec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f6aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6af0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f6af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2f6af4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2f6af4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6af8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2f6af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2f6afc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f6afcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6b00: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2f6b00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2f6b04: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2f6b04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6b08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f6b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f6b0c: 0xc08f672  jal         func_23D9C8
    ctx->pc = 0x2F6B0Cu;
    SET_GPR_U32(ctx, 31, 0x2F6B14u);
    ctx->pc = 0x2F6B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6B0Cu;
    // 0x2f6b10: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x2F6B0Cu, 0x2F6B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6B14u;
label_2f6b14:
    // 0x2f6b14: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2F6B14u;
    {
        const bool branch_taken_0x2f6b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B14u;
        // 0x2f6b18: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6b14) {
            ctx->pc = 0x2F6B4Cu;
            goto label_2f6b4c;
        }
    }
    ctx->pc = 0x2F6B1Cu;
    // 0x2f6b1c: 0x92021385  lbu         $v0, 0x1385($s0)
    ctx->pc = 0x2f6b1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4997)));
    // 0x2f6b20: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F6B20u;
    {
        const bool branch_taken_0x2f6b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B20u;
        // 0x2f6b24: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6b20) {
            ctx->pc = 0x2F6B4Cu;
            goto label_2f6b4c;
        }
    }
    ctx->pc = 0x2F6B28u;
    // 0x2f6b28: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F6B28u;
    {
        const bool branch_taken_0x2f6b28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B28u;
        // 0x2f6b2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6b28) {
            ctx->pc = 0x2F6B4Cu;
            goto label_2f6b4c;
        }
    }
    ctx->pc = 0x2F6B30u;
    // 0x2f6b30: 0xc08fc7c  jal         func_23F1F0
    ctx->pc = 0x2F6B30u;
    SET_GPR_U32(ctx, 31, 0x2F6B38u);
    ctx->pc = 0x2F6B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6B30u;
    // 0x2f6b34: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F1F0u, 0x2F6B30u, 0x2F6B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6B38u;
label_2f6b38:
    // 0x2f6b38: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F6B38u;
    {
        const bool branch_taken_0x2f6b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B38u;
        // 0x2f6b3c: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6b38) {
            ctx->pc = 0x2F6B4Cu;
            goto label_2f6b4c;
        }
    }
    ctx->pc = 0x2F6B40u;
    // 0x2f6b40: 0xc092aa2  jal         func_24AA88
    ctx->pc = 0x2F6B40u;
    SET_GPR_U32(ctx, 31, 0x2F6B48u);
    ctx->pc = 0x2F6B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6B40u;
    // 0x2f6b44: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AA88u, 0x2F6B40u, 0x2F6B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6B48u;
label_2f6b48:
    // 0x2f6b48: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x2f6b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_2f6b4c:
    // 0x2f6b4c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2f6b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2f6b50: 0x24420480  addiu       $v0, $v0, 0x480
    ctx->pc = 0x2f6b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
    // 0x2f6b54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6b58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f6b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f6b5c: 0xc44c1664  lwc1        $f12, 0x1664($v0)
    ctx->pc = 0x2f6b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f6b60: 0xc0ba550  jal         func_2E9540
    ctx->pc = 0x2F6B60u;
    SET_GPR_U32(ctx, 31, 0x2F6B68u);
    ctx->pc = 0x2F6B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6B60u;
    // 0x2f6b64: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E9540u, 0x2F6B60u, 0x2F6B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6B68u;
label_2f6b68:
    // 0x2f6b68: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2f6b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2f6b6c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2f6b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2f6b70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F6B70u;
    {
        const bool branch_taken_0x2f6b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B70u;
        // 0x2f6b74: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6b70) {
            ctx->pc = 0x2F6B80u;
            goto label_2f6b80;
        }
    }
    ctx->pc = 0x2F6B78u;
label_2f6b78:
    // 0x2f6b78: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2F6B78u;
    {
        const bool branch_taken_0x2f6b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B78u;
        // 0x2f6b7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6b78) {
            ctx->pc = 0x2F6C38u;
            goto label_2f6c38;
        }
    }
    ctx->pc = 0x2F6B80u;
label_2f6b80:
    // 0x2f6b80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2f6b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6b84: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f6b84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6b88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f6b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6b8c: 0xc084904  jal         func_212410
    ctx->pc = 0x2F6B8Cu;
    SET_GPR_U32(ctx, 31, 0x2F6B94u);
    ctx->pc = 0x2F6B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6B8Cu;
    // 0x2f6b90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212410u, 0x2F6B8Cu, 0x2F6B94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6B94u;
label_2f6b94:
    // 0x2f6b94: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2F6B94u;
    {
        const bool branch_taken_0x2f6b94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6B94u;
        // 0x2f6b98: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6b94) {
            ctx->pc = 0x2F6C34u;
            goto label_2f6c34;
        }
    }
    ctx->pc = 0x2F6B9Cu;
    // 0x2f6b9c: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x2f6b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2f6ba0: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x2f6ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x2f6ba4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F6BA4u;
    {
        const bool branch_taken_0x2f6ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F6BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6BA4u;
        // 0x2f6ba8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6ba4) {
            ctx->pc = 0x2F6BC0u;
            goto label_2f6bc0;
        }
    }
    ctx->pc = 0x2F6BACu;
    // 0x2f6bac: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2f6bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2f6bb0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F6BB0u;
    {
        const bool branch_taken_0x2f6bb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F6BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6BB0u;
        // 0x2f6bb4: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6bb0) {
            ctx->pc = 0x2F6BC0u;
            goto label_2f6bc0;
        }
    }
    ctx->pc = 0x2F6BB8u;
    // 0x2f6bb8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F6BB8u;
    {
        const bool branch_taken_0x2f6bb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f6bb8) {
            ctx->pc = 0x2F6BC4u;
            goto label_2f6bc4;
        }
    }
    ctx->pc = 0x2F6BC0u;
label_2f6bc0:
    // 0x2f6bc0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f6bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f6bc4:
    // 0x2f6bc4: 0x1480001c  bnez        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2F6BC4u;
    {
        const bool branch_taken_0x2f6bc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F6BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6BC4u;
        // 0x2f6bc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6bc4) {
            ctx->pc = 0x2F6C38u;
            goto label_2f6c38;
        }
    }
    ctx->pc = 0x2F6BCCu;
    // 0x2f6bcc: 0xc60100d0  lwc1        $f1, 0xD0($s0)
    ctx->pc = 0x2f6bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f6bd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f6bd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f6bd4: 0x0  nop
    ctx->pc = 0x2f6bd4u;
    // NOP
    // 0x2f6bd8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2f6bd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f6bdc: 0x0  nop
    ctx->pc = 0x2f6bdcu;
    // NOP
    // 0x2f6be0: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x2F6BE0u;
    {
        const bool branch_taken_0x2f6be0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F6BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6BE0u;
        // 0x2f6be4: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6be0) {
            ctx->pc = 0x2F6C38u;
            goto label_2f6c38;
        }
    }
    ctx->pc = 0x2F6BE8u;
    // 0x2f6be8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f6be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f6bec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f6becu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f6bf0: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x2f6bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2f6bf4: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x2f6bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x2f6bf8: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x2f6bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2f6bfc: 0xc07f4c2  jal         func_1FD308
    ctx->pc = 0x2F6BFCu;
    SET_GPR_U32(ctx, 31, 0x2F6C04u);
    ctx->pc = 0x2F6C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6BFCu;
    // 0x2f6c00: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x2F6BFCu, 0x2F6C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6C04u;
label_2f6c04:
    // 0x2f6c04: 0xc0b93e0  jal         func_2E4F80
    ctx->pc = 0x2F6C04u;
    SET_GPR_U32(ctx, 31, 0x2F6C0Cu);
    ctx->pc = 0x2F6C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6C04u;
    // 0x2f6c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4F80u, 0x2F6C04u, 0x2F6C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6C0Cu;
label_2f6c0c:
    // 0x2f6c0c: 0x1040ffda  beqz        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x2F6C0Cu;
    {
        const bool branch_taken_0x2f6c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C0Cu;
        // 0x2f6c10: 0x2602117c  addiu       $v0, $s0, 0x117C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4476));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6c0c) {
            ctx->pc = 0x2F6B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6b78;
        }
    }
    ctx->pc = 0x2F6C14u;
    // 0x2f6c14: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2f6c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2f6c18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f6c18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f6c1c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2f6c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2f6c20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f6c20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f6c24: 0xe4540020  swc1        $f20, 0x20($v0)
    ctx->pc = 0x2f6c24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2f6c28: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x2f6c28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x2f6c2c: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
    ctx->pc = 0x2F6C2Cu;
    {
        const bool branch_taken_0x2f6c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F6C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C2Cu;
        // 0x2f6c30: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6c2c) {
            ctx->pc = 0x2F6B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f6b78;
        }
    }
    ctx->pc = 0x2F6C34u;
label_2f6c34:
    // 0x2f6c34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f6c34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f6c38:
    // 0x2f6c38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f6c38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6c3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f6c3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f6c40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f6c40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f6c44: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2f6c44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f6c48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f6c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f6c4c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2f6c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f6c50: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F6C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6C50u;
        // 0x2f6c54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F6C58u;
}

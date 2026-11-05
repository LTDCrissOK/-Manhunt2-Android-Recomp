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

// Function: sub_003E0AC8
// Address: 0x3e0ac8 - 0x3e0cc0
void sub_003E0AC8_0x3e0ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0AC8_0x3e0ac8");
#endif

    switch (ctx->pc) {
        case 0x3e0ad8u: goto label_3e0ad8;
        case 0x3e0ae0u: goto label_3e0ae0;
        case 0x3e0bb0u: goto label_3e0bb0;
        default: break;
    }

    ctx->pc = 0x3e0ac8u;

    // 0x3e0ac8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e0ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e0acc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x3e0accu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3e0ad0: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x3e0ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    // 0x3e0ad4: 0x0  nop
    ctx->pc = 0x3e0ad4u;
    // NOP
label_3e0ad8:
    // 0x3e0ad8: 0x24a5fff8  addiu       $a1, $a1, -0x8
    ctx->pc = 0x3e0ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
    // 0x3e0adc: 0x8fa90000  lw          $t1, 0x0($sp)
    ctx->pc = 0x3e0adcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3e0ae0:
    // 0x3e0ae0: 0x8d2200bc  lw          $v0, 0xBC($t1)
    ctx->pc = 0x3e0ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 188)));
    // 0x3e0ae4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x3e0ae4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0ae8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3e0ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3e0aec: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x3e0aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x3e0af0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E0AF0u;
    {
        const bool branch_taken_0x3e0af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0AF0u;
        // 0x3e0af4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0af0) {
            ctx->pc = 0x3E0B0Cu;
            goto label_3e0b0c;
        }
    }
    ctx->pc = 0x3E0AF8u;
    // 0x3e0af8: 0xc52000d0  lwc1        $f0, 0xD0($t1)
    ctx->pc = 0x3e0af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e0afc: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x3e0afcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e0b00: 0x0  nop
    ctx->pc = 0x3e0b00u;
    // NOP
    // 0x3e0b04: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3E0B04u;
    {
        const bool branch_taken_0x3e0b04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e0b04) {
            ctx->pc = 0x3E0B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0B04u;
            // 0x3e0b08: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0B0Cu;
            goto label_3e0b0c;
        }
    }
    ctx->pc = 0x3E0B0Cu;
label_3e0b0c:
    // 0x3e0b0c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3e0b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e0b10: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x3e0b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x3e0b14: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3e0b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3e0b18: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x3e0b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x3e0b1c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E0B1Cu;
    {
        const bool branch_taken_0x3e0b1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0B1Cu;
        // 0x3e0b20: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0b1c) {
            ctx->pc = 0x3E0B38u;
            goto label_3e0b38;
        }
    }
    ctx->pc = 0x3E0B24u;
    // 0x3e0b24: 0xc4c000d0  lwc1        $f0, 0xD0($a2)
    ctx->pc = 0x3e0b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e0b28: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x3e0b28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e0b2c: 0x0  nop
    ctx->pc = 0x3e0b2cu;
    // NOP
    // 0x3e0b30: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x3E0B30u;
    {
        const bool branch_taken_0x3e0b30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E0B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0B30u;
        // 0x3e0b34: 0x39020001  xori        $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0b30) {
            ctx->pc = 0x3E0B9Cu;
            goto label_3e0b9c;
        }
    }
    ctx->pc = 0x3E0B38u;
label_3e0b38:
    // 0x3e0b38: 0x8cc300bc  lw          $v1, 0xBC($a2)
    ctx->pc = 0x3e0b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 188)));
    // 0x3e0b3c: 0x3862020f  xori        $v0, $v1, 0x20F
    ctx->pc = 0x3e0b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
    // 0x3e0b40: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E0B40u;
    {
        const bool branch_taken_0x3e0b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e0b40) {
            ctx->pc = 0x3E0B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0B40u;
            // 0x3e0b44: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0B64u;
            goto label_3e0b64;
        }
    }
    ctx->pc = 0x3E0B48u;
    // 0x3e0b48: 0x15000014  bnez        $t0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3E0B48u;
    {
        const bool branch_taken_0x3e0b48 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0B48u;
        // 0x3e0b4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0b48) {
            ctx->pc = 0x3E0B9Cu;
            goto label_3e0b9c;
        }
    }
    ctx->pc = 0x3E0B50u;
    // 0x3e0b50: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x3e0b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3e0b54: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x3e0b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x3e0b58: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x3e0b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x3e0b5c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3E0B5Cu;
    {
        const bool branch_taken_0x3e0b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0B5Cu;
        // 0x3e0b60: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0b5c) {
            ctx->pc = 0x3E0B9Cu;
            goto label_3e0b9c;
        }
    }
    ctx->pc = 0x3E0B64u;
label_3e0b64:
    // 0x3e0b64: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x3e0b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x3e0b68: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3E0B68u;
    {
        const bool branch_taken_0x3e0b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0B68u;
        // 0x3e0b6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0b68) {
            ctx->pc = 0x3E0B9Cu;
            goto label_3e0b9c;
        }
    }
    ctx->pc = 0x3E0B70u;
    // 0x3e0b70: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3E0B70u;
    {
        const bool branch_taken_0x3e0b70 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0B70u;
        // 0x3e0b74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0b70) {
            ctx->pc = 0x3E0B98u;
            goto label_3e0b98;
        }
    }
    ctx->pc = 0x3E0B78u;
    // 0x3e0b78: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3e0b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3e0b7c: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x3e0b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x3e0b80: 0x3843020f  xori        $v1, $v0, 0x20F
    ctx->pc = 0x3e0b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x3e0b84: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E0B84u;
    {
        const bool branch_taken_0x3e0b84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0B84u;
        // 0x3e0b88: 0x30420007  andi        $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0b84) {
            ctx->pc = 0x3E0B98u;
            goto label_3e0b98;
        }
    }
    ctx->pc = 0x3E0B8Cu;
    // 0x3e0b8c: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x3e0b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x3e0b90: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3e0b90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3e0b94: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3e0b94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0b98:
    // 0x3e0b98: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3e0b98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e0b9c:
    // 0x3e0b9c: 0x5440ffd0  bnel        $v0, $zero, . + 4 + (-0x30 << 2)
    ctx->pc = 0x3E0B9Cu;
    {
        const bool branch_taken_0x3e0b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e0b9c) {
            ctx->pc = 0x3E0BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0B9Cu;
            // 0x3e0ba0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0AE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e0ae0;
        }
    }
    ctx->pc = 0x3E0BA4u;
    // 0x3e0ba4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3e0ba4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e0ba8: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x3e0ba8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0bac: 0x0  nop
    ctx->pc = 0x3e0bacu;
    // NOP
label_3e0bb0:
    // 0x3e0bb0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3e0bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3e0bb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3e0bb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0bb8: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x3e0bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x3e0bbc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3e0bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3e0bc0: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x3e0bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x3e0bc4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E0BC4u;
    {
        const bool branch_taken_0x3e0bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0BC4u;
        // 0x3e0bc8: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0bc4) {
            ctx->pc = 0x3E0BE0u;
            goto label_3e0be0;
        }
    }
    ctx->pc = 0x3E0BCCu;
    // 0x3e0bcc: 0xc4e000d0  lwc1        $f0, 0xD0($a3)
    ctx->pc = 0x3e0bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e0bd0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e0bd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e0bd4: 0x0  nop
    ctx->pc = 0x3e0bd4u;
    // NOP
    // 0x3e0bd8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3E0BD8u;
    {
        const bool branch_taken_0x3e0bd8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e0bd8) {
            ctx->pc = 0x3E0BDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0BD8u;
            // 0x3e0bdc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0BE0u;
            goto label_3e0be0;
        }
    }
    ctx->pc = 0x3E0BE0u;
label_3e0be0:
    // 0x3e0be0: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x3e0be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3e0be4: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x3e0be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x3e0be8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3e0be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3e0bec: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x3e0becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x3e0bf0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E0BF0u;
    {
        const bool branch_taken_0x3e0bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0BF0u;
        // 0x3e0bf4: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0bf0) {
            ctx->pc = 0x3E0C0Cu;
            goto label_3e0c0c;
        }
    }
    ctx->pc = 0x3E0BF8u;
    // 0x3e0bf8: 0xc4c000d0  lwc1        $f0, 0xD0($a2)
    ctx->pc = 0x3e0bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e0bfc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e0bfcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e0c00: 0x0  nop
    ctx->pc = 0x3e0c00u;
    // NOP
    // 0x3e0c04: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x3E0C04u;
    {
        const bool branch_taken_0x3e0c04 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E0C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0C04u;
        // 0x3e0c08: 0x39020001  xori        $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0c04) {
            ctx->pc = 0x3E0C68u;
            goto label_3e0c68;
        }
    }
    ctx->pc = 0x3E0C0Cu;
label_3e0c0c:
    // 0x3e0c0c: 0x8cc300bc  lw          $v1, 0xBC($a2)
    ctx->pc = 0x3e0c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 188)));
    // 0x3e0c10: 0x3862020f  xori        $v0, $v1, 0x20F
    ctx->pc = 0x3e0c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
    // 0x3e0c14: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E0C14u;
    {
        const bool branch_taken_0x3e0c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e0c14) {
            ctx->pc = 0x3E0C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0C14u;
            // 0x3e0c18: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0C34u;
            goto label_3e0c34;
        }
    }
    ctx->pc = 0x3E0C1Cu;
    // 0x3e0c1c: 0x15000012  bnez        $t0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3E0C1Cu;
    {
        const bool branch_taken_0x3e0c1c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0C1Cu;
        // 0x3e0c20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0c1c) {
            ctx->pc = 0x3E0C68u;
            goto label_3e0c68;
        }
    }
    ctx->pc = 0x3E0C24u;
    // 0x3e0c24: 0x8ce200bc  lw          $v0, 0xBC($a3)
    ctx->pc = 0x3e0c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 188)));
    // 0x3e0c28: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x3e0c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x3e0c2c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3E0C2Cu;
    {
        const bool branch_taken_0x3e0c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0C2Cu;
        // 0x3e0c30: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0c2c) {
            ctx->pc = 0x3E0C68u;
            goto label_3e0c68;
        }
    }
    ctx->pc = 0x3E0C34u;
label_3e0c34:
    // 0x3e0c34: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x3e0c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x3e0c38: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3E0C38u;
    {
        const bool branch_taken_0x3e0c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0C38u;
        // 0x3e0c3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0c38) {
            ctx->pc = 0x3E0C68u;
            goto label_3e0c68;
        }
    }
    ctx->pc = 0x3E0C40u;
    // 0x3e0c40: 0x15000008  bnez        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E0C40u;
    {
        const bool branch_taken_0x3e0c40 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0C40u;
        // 0x3e0c44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0c40) {
            ctx->pc = 0x3E0C64u;
            goto label_3e0c64;
        }
    }
    ctx->pc = 0x3E0C48u;
    // 0x3e0c48: 0x8ce300bc  lw          $v1, 0xBC($a3)
    ctx->pc = 0x3e0c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 188)));
    // 0x3e0c4c: 0x3862020f  xori        $v0, $v1, 0x20F
    ctx->pc = 0x3e0c4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
    // 0x3e0c50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E0C50u;
    {
        const bool branch_taken_0x3e0c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0C50u;
        // 0x3e0c54: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0c50) {
            ctx->pc = 0x3E0C64u;
            goto label_3e0c64;
        }
    }
    ctx->pc = 0x3E0C58u;
    // 0x3e0c58: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x3e0c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x3e0c5c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3e0c5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3e0c60: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3e0c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e0c64:
    // 0x3e0c64: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3e0c64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3e0c68:
    // 0x3e0c68: 0x5440ffd1  bnel        $v0, $zero, . + 4 + (-0x2F << 2)
    ctx->pc = 0x3E0C68u;
    {
        const bool branch_taken_0x3e0c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e0c68) {
            ctx->pc = 0x3E0C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E0C68u;
            // 0x3e0c6c: 0x24a5fff8  addiu       $a1, $a1, -0x8 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E0BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e0bb0;
        }
    }
    ctx->pc = 0x3E0C70u;
    // 0x3e0c70: 0x85102b  sltu        $v0, $a0, $a1
    ctx->pc = 0x3e0c70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x3e0c74: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3E0C74u;
    {
        const bool branch_taken_0x3e0c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0C74u;
        // 0x3e0c78: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0c74) {
            ctx->pc = 0x3E0CB4u;
            goto label_3e0cb4;
        }
    }
    ctx->pc = 0x3E0C7Cu;
    // 0x3e0c7c: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x3e0c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3e0c80: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x3e0c80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3e0c84: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x3e0c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e0c88: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x3e0c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e0c8c: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x3e0c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3e0c90: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x3e0c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3e0c94: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x3e0c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e0c98: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x3e0c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e0c9c: 0x6ba20017  ldl         $v0, 0x17($sp)
    ctx->pc = 0x3e0c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3e0ca0: 0x6fa20010  ldr         $v0, 0x10($sp)
    ctx->pc = 0x3e0ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3e0ca4: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x3e0ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e0ca8: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x3e0ca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e0cac: 0x1000ff8a  b           . + 4 + (-0x76 << 2)
    ctx->pc = 0x3E0CACu;
    {
        const bool branch_taken_0x3e0cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E0CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0CACu;
        // 0x3e0cb0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e0cac) {
            ctx->pc = 0x3E0AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e0ad8;
        }
    }
    ctx->pc = 0x3E0CB4u;
label_3e0cb4:
    // 0x3e0cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E0CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E0CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E0CB4u;
        // 0x3e0cb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E0CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E0CBCu;
    // 0x3e0cbc: 0x0  nop
    ctx->pc = 0x3e0cbcu;
    // NOP
    ctx->pc = 0x3e0cc0u;
}

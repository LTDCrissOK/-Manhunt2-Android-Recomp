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

// Function: sub_003C0B60
// Address: 0x3c0b60 - 0x3c0ea0
void sub_003C0B60_0x3c0b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C0B60_0x3c0b60");
#endif

    switch (ctx->pc) {
        case 0x3c0bb4u: goto label_3c0bb4;
        case 0x3c0bccu: goto label_3c0bcc;
        case 0x3c0c08u: goto label_3c0c08;
        case 0x3c0c44u: goto label_3c0c44;
        case 0x3c0c9cu: goto label_3c0c9c;
        case 0x3c0cd0u: goto label_3c0cd0;
        default: break;
    }

    ctx->pc = 0x3c0b60u;

    // 0x3c0b60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3c0b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3c0b64: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3c0b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3c0b68: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3c0b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3c0b6c: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x3c0b6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0b70: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3c0b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3c0b74: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3c0b74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0b78: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3c0b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3c0b7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c0b7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0b80: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3c0b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3c0b84: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3c0b84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0b88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c0b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c0b8c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3c0b8cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0b90: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C0B90u;
    {
        const bool branch_taken_0x3c0b90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0B90u;
        // 0x3c0b94: 0xa5980b  movn        $s3, $a1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0b90) {
            ctx->pc = 0x3C0BA0u;
            goto label_3c0ba0;
        }
    }
    ctx->pc = 0x3C0B98u;
    // 0x3c0b98: 0x128000b8  beqz        $s4, . + 4 + (0xB8 << 2)
    ctx->pc = 0x3C0B98u;
    {
        const bool branch_taken_0x3c0b98 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0B98u;
        // 0x3c0b9c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0b98) {
            ctx->pc = 0x3C0E7Cu;
            goto label_3c0e7c;
        }
    }
    ctx->pc = 0x3C0BA0u;
label_3c0ba0:
    // 0x3c0ba0: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x3c0ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x3c0ba4: 0x108000af  beqz        $a0, . + 4 + (0xAF << 2)
    ctx->pc = 0x3C0BA4u;
    {
        const bool branch_taken_0x3c0ba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0ba4) {
            ctx->pc = 0x3C0E64u;
            goto label_3c0e64;
        }
    }
    ctx->pc = 0x3C0BACu;
    // 0x3c0bac: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3C0BACu;
    SET_GPR_U32(ctx, 31, 0x3C0BB4u);
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3C0BACu, 0x3C0BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0BB4u;
label_3c0bb4:
    // 0x3c0bb4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x3c0bb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3c0bb8: 0x144000aa  bnez        $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x3C0BB8u;
    {
        const bool branch_taken_0x3c0bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C0BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0BB8u;
        // 0x3c0bbc: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0bb8) {
            ctx->pc = 0x3C0E64u;
            goto label_3c0e64;
        }
    }
    ctx->pc = 0x3C0BC0u;
    // 0x3c0bc0: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x3c0bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x3c0bc4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x3C0BC4u;
    SET_GPR_U32(ctx, 31, 0x3C0BCCu);
    ctx->pc = 0x3C0BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0BC4u;
    // 0x3c0bc8: 0x24a511a0  addiu       $a1, $a1, 0x11A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x3C0BC4u, 0x3C0BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0BCCu;
label_3c0bcc:
    // 0x3c0bcc: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x3C0BCCu;
    {
        const bool branch_taken_0x3c0bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c0bcc) {
            ctx->pc = 0x3C0BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C0BCCu;
            // 0x3c0bd0: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C0C38u;
            goto label_3c0c38;
        }
    }
    ctx->pc = 0x3C0BD4u;
    // 0x3c0bd4: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x3c0bd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3c0bd8: 0x120000a8  beqz        $s0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x3C0BD8u;
    {
        const bool branch_taken_0x3c0bd8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0BD8u;
        // 0x3c0bdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0bd8) {
            ctx->pc = 0x3C0E7Cu;
            goto label_3c0e7c;
        }
    }
    ctx->pc = 0x3C0BE0u;
    // 0x3c0be0: 0x2462ff7f  addiu       $v0, $v1, -0x81
    ctx->pc = 0x3c0be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967167));
    // 0x3c0be4: 0x2c42001f  sltiu       $v0, $v0, 0x1F
    ctx->pc = 0x3c0be4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x3c0be8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C0BE8u;
    {
        const bool branch_taken_0x3c0be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C0BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0BE8u;
        // 0x3c0bec: 0x2e820002  sltiu       $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0be8) {
            ctx->pc = 0x3C0C00u;
            goto label_3c0c00;
        }
    }
    ctx->pc = 0x3C0BF0u;
    // 0x3c0bf0: 0x2462ff20  addiu       $v0, $v1, -0xE0
    ctx->pc = 0x3c0bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967072));
    // 0x3c0bf4: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x3c0bf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x3c0bf8: 0x1040009a  beqz        $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x3C0BF8u;
    {
        const bool branch_taken_0x3c0bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0BF8u;
        // 0x3c0bfc: 0x2e820002  sltiu       $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0bf8) {
            ctx->pc = 0x3C0E64u;
            goto label_3c0e64;
        }
    }
    ctx->pc = 0x3C0C00u;
label_3c0c00:
    // 0x3c0c00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C0C00u;
    {
        const bool branch_taken_0x3c0c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0C00u;
        // 0x3c0c04: 0x92060001  lbu         $a2, 0x1($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0c00) {
            ctx->pc = 0x3C0C10u;
            goto label_3c0c10;
        }
    }
    ctx->pc = 0x3C0C08u;
label_3c0c08:
    // 0x3c0c08: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x3C0C08u;
    {
        const bool branch_taken_0x3c0c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0C08u;
        // 0x3c0c0c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0c08) {
            ctx->pc = 0x3C0E7Cu;
            goto label_3c0e7c;
        }
    }
    ctx->pc = 0x3C0C10u;
label_3c0c10:
    // 0x3c0c10: 0x24c2ffc0  addiu       $v0, $a2, -0x40
    ctx->pc = 0x3c0c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967232));
    // 0x3c0c14: 0x2c42003f  sltiu       $v0, $v0, 0x3F
    ctx->pc = 0x3c0c14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)63) ? 1 : 0);
    // 0x3c0c18: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3C0C18u;
    {
        const bool branch_taken_0x3c0c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C0C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0C18u;
        // 0x3c0c1c: 0x31a00  sll         $v1, $v1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0c18) {
            ctx->pc = 0x3C0C80u;
            goto label_3c0c80;
        }
    }
    ctx->pc = 0x3C0C20u;
    // 0x3c0c20: 0x24c2ff80  addiu       $v0, $a2, -0x80
    ctx->pc = 0x3c0c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967168));
    // 0x3c0c24: 0x2c42007d  sltiu       $v0, $v0, 0x7D
    ctx->pc = 0x3c0c24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x3c0c28: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3C0C28u;
    {
        const bool branch_taken_0x3c0c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C0C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0C28u;
        // 0x3c0c2c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0c28) {
            ctx->pc = 0x3C0C84u;
            goto label_3c0c84;
        }
    }
    ctx->pc = 0x3C0C30u;
    // 0x3c0c30: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x3C0C30u;
    {
        const bool branch_taken_0x3c0c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0C30u;
        // 0x3c0c34: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0c30) {
            ctx->pc = 0x3C0E7Cu;
            goto label_3c0e7c;
        }
    }
    ctx->pc = 0x3C0C38u;
label_3c0c38:
    // 0x3c0c38: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x3c0c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x3c0c3c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x3C0C3Cu;
    SET_GPR_U32(ctx, 31, 0x3C0C44u);
    ctx->pc = 0x3C0C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0C3Cu;
    // 0x3c0c40: 0x24a511a8  addiu       $a1, $a1, 0x11A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x3C0C3Cu, 0x3C0C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0C44u;
label_3c0c44:
    // 0x3c0c44: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x3C0C44u;
    {
        const bool branch_taken_0x3c0c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c0c44) {
            ctx->pc = 0x3C0C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C0C44u;
            // 0x3c0c48: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C0C90u;
            goto label_3c0c90;
        }
    }
    ctx->pc = 0x3C0C4Cu;
    // 0x3c0c4c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x3c0c4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3c0c50: 0x1200008a  beqz        $s0, . + 4 + (0x8A << 2)
    ctx->pc = 0x3C0C50u;
    {
        const bool branch_taken_0x3c0c50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0C50u;
        // 0x3c0c54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0c50) {
            ctx->pc = 0x3C0E7Cu;
            goto label_3c0e7c;
        }
    }
    ctx->pc = 0x3C0C58u;
    // 0x3c0c58: 0x2462ff5f  addiu       $v0, $v1, -0xA1
    ctx->pc = 0x3c0c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967135));
    // 0x3c0c5c: 0x2c42005e  sltiu       $v0, $v0, 0x5E
    ctx->pc = 0x3c0c5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)94) ? 1 : 0);
    // 0x3c0c60: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x3C0C60u;
    {
        const bool branch_taken_0x3c0c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0C60u;
        // 0x3c0c64: 0x2e820002  sltiu       $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0c60) {
            ctx->pc = 0x3C0E64u;
            goto label_3c0e64;
        }
    }
    ctx->pc = 0x3C0C68u;
    // 0x3c0c68: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x3C0C68u;
    {
        const bool branch_taken_0x3c0c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C0C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0C68u;
        // 0x3c0c6c: 0x92060001  lbu         $a2, 0x1($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0c68) {
            ctx->pc = 0x3C0C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c0c08;
        }
    }
    ctx->pc = 0x3C0C70u;
    // 0x3c0c70: 0x24c2ff5f  addiu       $v0, $a2, -0xA1
    ctx->pc = 0x3c0c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967135));
    // 0x3c0c74: 0x2c42005e  sltiu       $v0, $v0, 0x5E
    ctx->pc = 0x3c0c74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)94) ? 1 : 0);
    // 0x3c0c78: 0x1040ffe3  beqz        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x3C0C78u;
    {
        const bool branch_taken_0x3c0c78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0C78u;
        // 0x3c0c7c: 0x31a00  sll         $v1, $v1, 8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0c78) {
            ctx->pc = 0x3C0C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c0c08;
        }
    }
    ctx->pc = 0x3C0C80u;
label_3c0c80:
    // 0x3c0c80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3c0c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c0c84:
    // 0x3c0c84: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x3c0c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x3c0c88: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x3C0C88u;
    {
        const bool branch_taken_0x3c0c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0C88u;
        // 0x3c0c8c: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0c88) {
            ctx->pc = 0x3C0E7Cu;
            goto label_3c0e7c;
        }
    }
    ctx->pc = 0x3C0C90u;
label_3c0c90:
    // 0x3c0c90: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x3c0c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x3c0c94: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x3C0C94u;
    SET_GPR_U32(ctx, 31, 0x3C0C9Cu);
    ctx->pc = 0x3C0C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0C94u;
    // 0x3c0c98: 0x24a511b0  addiu       $a1, $a1, 0x11B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x3C0C94u, 0x3C0C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0C9Cu;
label_3c0c9c:
    // 0x3c0c9c: 0x14400071  bnez        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x3C0C9Cu;
    {
        const bool branch_taken_0x3c0c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c0c9c) {
            ctx->pc = 0x3C0E64u;
            goto label_3c0e64;
        }
    }
    ctx->pc = 0x3C0CA4u;
    // 0x3c0ca4: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3C0CA4u;
    {
        const bool branch_taken_0x3c0ca4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c0ca4) {
            ctx->pc = 0x3C0CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C0CA4u;
            // 0x3c0ca8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C0CB8u;
            goto label_3c0cb8;
        }
    }
    ctx->pc = 0x3C0CACu;
    // 0x3c0cac: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3c0cacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x3c0cb0: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x3C0CB0u;
    {
        const bool branch_taken_0x3c0cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0CB0u;
        // 0x3c0cb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0cb0) {
            ctx->pc = 0x3C0E7Cu;
            goto label_3c0e7c;
        }
    }
    ctx->pc = 0x3C0CB8u;
label_3c0cb8:
    // 0x3c0cb8: 0x24090003  addiu       $t1, $zero, 0x3
    ctx->pc = 0x3c0cb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3c0cbc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3c0cbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0cc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c0cc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0cc4: 0x1280ffd0  beqz        $s4, . + 4 + (-0x30 << 2)
    ctx->pc = 0x3C0CC4u;
    {
        const bool branch_taken_0x3c0cc4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0CC4u;
        // 0x3c0cc8: 0x2480a  movz        $t1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0cc4) {
            ctx->pc = 0x3C0C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c0c08;
        }
    }
    ctx->pc = 0x3C0CCCu;
    // 0x3c0ccc: 0x2061021  addu        $v0, $s0, $a2
    ctx->pc = 0x3c0cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_3c0cd0:
    // 0x3c0cd0: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x3c0cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x3c0cd4: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x3c0cd4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3c0cd8: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x3C0CD8u;
    {
        const bool branch_taken_0x3c0cd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C0CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0CD8u;
        // 0x3c0cdc: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0cd8) {
            ctx->pc = 0x3C0D6Cu;
            goto label_3c0d6c;
        }
    }
    ctx->pc = 0x3C0CE0u;
    // 0x3c0ce0: 0x28820029  slti        $v0, $a0, 0x29
    ctx->pc = 0x3c0ce0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x3c0ce4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3C0CE4u;
    {
        const bool branch_taken_0x3c0ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0CE4u;
        // 0x3c0ce8: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0ce4) {
            ctx->pc = 0x3C0D1Cu;
            goto label_3c0d1c;
        }
    }
    ctx->pc = 0x3C0CECu;
    // 0x3c0cec: 0x10820019  beq         $a0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3C0CECu;
    {
        const bool branch_taken_0x3c0cec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C0CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0CECu;
        // 0x3c0cf0: 0x2882001c  slti        $v0, $a0, 0x1C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)28) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0cec) {
            ctx->pc = 0x3C0D54u;
            goto label_3c0d54;
        }
    }
    ctx->pc = 0x3C0CF4u;
    // 0x3c0cf4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C0CF4u;
    {
        const bool branch_taken_0x3c0cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0CF4u;
        // 0x3c0cf8: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0cf4) {
            ctx->pc = 0x3C0D0Cu;
            goto label_3c0d0c;
        }
    }
    ctx->pc = 0x3C0CFCu;
    // 0x3c0cfc: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3C0CFCu;
    {
        const bool branch_taken_0x3c0cfc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0CFCu;
        // 0x3c0d00: 0x2482ffdf  addiu       $v0, $a0, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0cfc) {
            ctx->pc = 0x3C0D84u;
            goto label_3c0d84;
        }
    }
    ctx->pc = 0x3C0D04u;
    // 0x3c0d04: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3C0D04u;
    {
        const bool branch_taken_0x3c0d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0D04u;
        // 0x3c0d08: 0x2403005d  addiu       $v1, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0d04) {
            ctx->pc = 0x3C0D8Cu;
            goto label_3c0d8c;
        }
    }
    ctx->pc = 0x3C0D0Cu;
label_3c0d0c:
    // 0x3c0d0c: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x3C0D0Cu;
    {
        const bool branch_taken_0x3c0d0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C0D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0D0Cu;
        // 0x3c0d10: 0x2482ffdf  addiu       $v0, $a0, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0d0c) {
            ctx->pc = 0x3C0D5Cu;
            goto label_3c0d5c;
        }
    }
    ctx->pc = 0x3C0D14u;
    // 0x3c0d14: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3C0D14u;
    {
        const bool branch_taken_0x3c0d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0D14u;
        // 0x3c0d18: 0x2403005d  addiu       $v1, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0d14) {
            ctx->pc = 0x3C0D8Cu;
            goto label_3c0d8c;
        }
    }
    ctx->pc = 0x3C0D1Cu;
label_3c0d1c:
    // 0x3c0d1c: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x3c0d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x3c0d20: 0x10820014  beq         $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3C0D20u;
    {
        const bool branch_taken_0x3c0d20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C0D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0D20u;
        // 0x3c0d24: 0x28820043  slti        $v0, $a0, 0x43 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)67) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0d20) {
            ctx->pc = 0x3C0D74u;
            goto label_3c0d74;
        }
    }
    ctx->pc = 0x3C0D28u;
    // 0x3c0d28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C0D28u;
    {
        const bool branch_taken_0x3c0d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0D28u;
        // 0x3c0d2c: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0d28) {
            ctx->pc = 0x3C0D40u;
            goto label_3c0d40;
        }
    }
    ctx->pc = 0x3C0D30u;
    // 0x3c0d30: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3C0D30u;
    {
        const bool branch_taken_0x3c0d30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C0D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0D30u;
        // 0x3c0d34: 0x2482ffdf  addiu       $v0, $a0, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0d30) {
            ctx->pc = 0x3C0D64u;
            goto label_3c0d64;
        }
    }
    ctx->pc = 0x3C0D38u;
    // 0x3c0d38: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3C0D38u;
    {
        const bool branch_taken_0x3c0d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0D38u;
        // 0x3c0d3c: 0x2403005d  addiu       $v1, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0d38) {
            ctx->pc = 0x3C0D8Cu;
            goto label_3c0d8c;
        }
    }
    ctx->pc = 0x3C0D40u;
label_3c0d40:
    // 0x3c0d40: 0x2402004a  addiu       $v0, $zero, 0x4A
    ctx->pc = 0x3c0d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x3c0d44: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3C0D44u;
    {
        const bool branch_taken_0x3c0d44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C0D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0D44u;
        // 0x3c0d48: 0x2482ffdf  addiu       $v0, $a0, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0d44) {
            ctx->pc = 0x3C0D7Cu;
            goto label_3c0d7c;
        }
    }
    ctx->pc = 0x3C0D4Cu;
    // 0x3c0d4c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3C0D4Cu;
    {
        const bool branch_taken_0x3c0d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0D4Cu;
        // 0x3c0d50: 0x2403005d  addiu       $v1, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0d4c) {
            ctx->pc = 0x3C0D8Cu;
            goto label_3c0d8c;
        }
    }
    ctx->pc = 0x3C0D54u;
label_3c0d54:
    // 0x3c0d54: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3C0D54u;
    {
        const bool branch_taken_0x3c0d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0D54u;
        // 0x3c0d58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0d54) {
            ctx->pc = 0x3C0D9Cu;
            goto label_3c0d9c;
        }
    }
    ctx->pc = 0x3C0D5Cu;
label_3c0d5c:
    // 0x3c0d5c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3C0D5Cu;
    {
        const bool branch_taken_0x3c0d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0D5Cu;
        // 0x3c0d60: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0d5c) {
            ctx->pc = 0x3C0D9Cu;
            goto label_3c0d9c;
        }
    }
    ctx->pc = 0x3C0D64u;
label_3c0d64:
    // 0x3c0d64: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3C0D64u;
    {
        const bool branch_taken_0x3c0d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0D64u;
        // 0x3c0d68: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0d64) {
            ctx->pc = 0x3C0D9Cu;
            goto label_3c0d9c;
        }
    }
    ctx->pc = 0x3C0D6Cu;
label_3c0d6c:
    // 0x3c0d6c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3C0D6Cu;
    {
        const bool branch_taken_0x3c0d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0D6Cu;
        // 0x3c0d70: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0d6c) {
            ctx->pc = 0x3C0D9Cu;
            goto label_3c0d9c;
        }
    }
    ctx->pc = 0x3C0D74u;
label_3c0d74:
    // 0x3c0d74: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3C0D74u;
    {
        const bool branch_taken_0x3c0d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0D74u;
        // 0x3c0d78: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0d74) {
            ctx->pc = 0x3C0D9Cu;
            goto label_3c0d9c;
        }
    }
    ctx->pc = 0x3C0D7Cu;
label_3c0d7c:
    // 0x3c0d7c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3C0D7Cu;
    {
        const bool branch_taken_0x3c0d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0D7Cu;
        // 0x3c0d80: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0d7c) {
            ctx->pc = 0x3C0D9Cu;
            goto label_3c0d9c;
        }
    }
    ctx->pc = 0x3C0D84u;
label_3c0d84:
    // 0x3c0d84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3C0D84u;
    {
        const bool branch_taken_0x3c0d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0D84u;
        // 0x3c0d88: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0d84) {
            ctx->pc = 0x3C0D9Cu;
            goto label_3c0d9c;
        }
    }
    ctx->pc = 0x3C0D8Cu;
label_3c0d8c:
    // 0x3c0d8c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x3c0d8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3c0d90: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3c0d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3c0d94: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3c0d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3c0d98: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x3c0d98u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_3c0d9c:
    // 0x3c0d9c: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x3c0d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x3c0da0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3c0da0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3c0da4: 0x1252818  mult        $a1, $t1, $a1
    ctx->pc = 0x3c0da4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x3c0da8: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3c0da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3c0dac: 0x2463cf90  addiu       $v1, $v1, -0x3070
    ctx->pc = 0x3c0dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954896));
    // 0x3c0db0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3c0db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3c0db4: 0x2442cde0  addiu       $v0, $v0, -0x3220
    ctx->pc = 0x3c0db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954464));
    // 0x3c0db8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3c0db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x3c0dbc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3c0dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3c0dc0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3c0dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c0dc4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3c0dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3c0dc8: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x3c0dc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x3c0dcc: 0x1040ff8e  beqz        $v0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x3C0DCCu;
    {
        const bool branch_taken_0x3c0dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0DCCu;
        // 0x3c0dd0: 0x8c890000  lw          $t1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0dcc) {
            ctx->pc = 0x3C0C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c0c08;
        }
    }
    ctx->pc = 0x3C0DD4u;
    // 0x3c0dd4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3c0dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3c0dd8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3c0dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3c0ddc: 0x244211c0  addiu       $v0, $v0, 0x11C0
    ctx->pc = 0x3c0ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4544));
    // 0x3c0de0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c0de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3c0de4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3c0de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c0de8: 0x800008  jr          $a0
    ctx->pc = 0x3C0DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3C0C08u: goto label_3c0c08;
            case 0x3C0DF0u: goto label_3c0df0;
            case 0x3C0E00u: goto label_3c0e00;
            case 0x3C0E14u: goto label_3c0e14;
            case 0x3C0E20u: goto label_3c0e20;
            case 0x3C0E48u: goto label_3c0e48;
            case 0x3C0E4Cu: goto label_3c0e4c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0DE8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3C0DF0u;
label_3c0df0:
    // 0x3c0df0: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3c0df0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x3c0df4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3c0df4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c0df8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3C0DF8u;
    {
        const bool branch_taken_0x3c0df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0DF8u;
        // 0x3c0dfc: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0df8) {
            ctx->pc = 0x3C0E7Cu;
            goto label_3c0e7c;
        }
    }
    ctx->pc = 0x3C0E00u;
label_3c0e00:
    // 0x3c0e00: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3c0e00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x3c0e04: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x3c0e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3c0e08: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x3c0e08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3c0e0c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x3C0E0Cu;
    {
        const bool branch_taken_0x3c0e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0E0Cu;
        // 0x3c0e10: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0e0c) {
            ctx->pc = 0x3C0E7Cu;
            goto label_3c0e7c;
        }
    }
    ctx->pc = 0x3C0E14u;
label_3c0e14:
    // 0x3c0e14: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3c0e14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x3c0e18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3C0E18u;
    {
        const bool branch_taken_0x3c0e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0E18u;
        // 0x3c0e1c: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0e18) {
            ctx->pc = 0x3C0E30u;
            goto label_3c0e30;
        }
    }
    ctx->pc = 0x3C0E20u;
label_3c0e20:
    // 0x3c0e20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c0e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c0e24: 0xf01023  subu        $v0, $a3, $s0
    ctx->pc = 0x3c0e24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x3c0e28: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3c0e28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x3c0e2c: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x3c0e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_3c0e30:
    // 0x3c0e30: 0x90e30000  lbu         $v1, 0x0($a3)
    ctx->pc = 0x3c0e30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3c0e34: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x3c0e34u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x3c0e38: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3c0e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3c0e3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3c0e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3c0e40: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3C0E40u;
    {
        const bool branch_taken_0x3c0e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0E40u;
        // 0x3c0e44: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0e40) {
            ctx->pc = 0x3C0E7Cu;
            goto label_3c0e7c;
        }
    }
    ctx->pc = 0x3C0E48u;
label_3c0e48:
    // 0x3c0e48: 0x25070001  addiu       $a3, $t0, 0x1
    ctx->pc = 0x3c0e48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3c0e4c:
    // 0x3c0e4c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3c0e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3c0e50: 0xd4102b  sltu        $v0, $a2, $s4
    ctx->pc = 0x3c0e50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x3c0e54: 0x1440ff9e  bnez        $v0, . + 4 + (-0x62 << 2)
    ctx->pc = 0x3C0E54u;
    {
        const bool branch_taken_0x3c0e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C0E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0E54u;
        // 0x3c0e58: 0x2061021  addu        $v0, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0e54) {
            ctx->pc = 0x3C0CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c0cd0;
        }
    }
    ctx->pc = 0x3C0E5Cu;
    // 0x3c0e5c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3C0E5Cu;
    {
        const bool branch_taken_0x3c0e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0E5Cu;
        // 0x3c0e60: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0e5c) {
            ctx->pc = 0x3C0E7Cu;
            goto label_3c0e7c;
        }
    }
    ctx->pc = 0x3C0E64u;
label_3c0e64:
    // 0x3c0e64: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3C0E64u;
    {
        const bool branch_taken_0x3c0e64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0e64) {
            ctx->pc = 0x3C0E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C0E64u;
            // 0x3c0e68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C0E7Cu;
            goto label_3c0e7c;
        }
    }
    ctx->pc = 0x3C0E6Cu;
    // 0x3c0e6c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3c0e6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3c0e70: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3c0e70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x3c0e74: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x3c0e74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3c0e78: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3c0e78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3c0e7c:
    // 0x3c0e7c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3c0e7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c0e80: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3c0e80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c0e84: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3c0e84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c0e88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3c0e88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c0e8c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3c0e8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c0e90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c0e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c0e94: 0x3e00008  jr          $ra
    ctx->pc = 0x3C0E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C0E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0E94u;
        // 0x3c0e98: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C0E9Cu;
    // 0x3c0e9c: 0x0  nop
    ctx->pc = 0x3c0e9cu;
    // NOP
    ctx->pc = 0x3c0ea0u;
}

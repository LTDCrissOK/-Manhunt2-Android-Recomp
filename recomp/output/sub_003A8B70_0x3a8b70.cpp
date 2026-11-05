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

// Function: sub_003A8B70
// Address: 0x3a8b70 - 0x3a9170
void sub_003A8B70_0x3a8b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A8B70_0x3a8b70");
#endif

    switch (ctx->pc) {
        case 0x3a8bb0u: goto label_3a8bb0;
        case 0x3a8da0u: goto label_3a8da0;
        case 0x3a8e98u: goto label_3a8e98;
        case 0x3a8f10u: goto label_3a8f10;
        case 0x3a8f18u: goto label_3a8f18;
        case 0x3a8f20u: goto label_3a8f20;
        case 0x3a8f28u: goto label_3a8f28;
        case 0x3a8f30u: goto label_3a8f30;
        case 0x3a8f40u: goto label_3a8f40;
        case 0x3a8f68u: goto label_3a8f68;
        case 0x3a8f80u: goto label_3a8f80;
        case 0x3a8fb8u: goto label_3a8fb8;
        case 0x3a8fe8u: goto label_3a8fe8;
        case 0x3a8ffcu: goto label_3a8ffc;
        case 0x3a9000u: goto label_3a9000;
        case 0x3a903cu: goto label_3a903c;
        case 0x3a9054u: goto label_3a9054;
        case 0x3a908cu: goto label_3a908c;
        case 0x3a90a4u: goto label_3a90a4;
        case 0x3a90a8u: goto label_3a90a8;
        case 0x3a90d8u: goto label_3a90d8;
        case 0x3a9128u: goto label_3a9128;
        default: break;
    }

    ctx->pc = 0x3a8b70u;

    // 0x3a8b70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a8b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a8b74: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x3a8b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x3a8b78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a8b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a8b7c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3a8b7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8b80: 0x262f0010  addiu       $t7, $s1, 0x10
    ctx->pc = 0x3a8b80u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x3a8b84: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a8b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3a8b88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a8b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a8b8c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3a8b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a8b90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a8b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a8b94: 0x24529128  addiu       $s2, $v0, -0x6ED8
    ctx->pc = 0x3a8b94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938920));
    // 0x3a8b98: 0x2467c528  addiu       $a3, $v1, -0x3AD8
    ctx->pc = 0x3a8b98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952232));
    // 0x3a8b9c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a8b9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8ba0: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x3a8ba0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8ba4: 0x24190002  addiu       $t9, $zero, 0x2
    ctx->pc = 0x3a8ba4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a8ba8: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x3a8ba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8bac: 0x0  nop
    ctx->pc = 0x3a8bacu;
    // NOP
label_3a8bb0:
    // 0x3a8bb0: 0x80e20000  lb          $v0, 0x0($a3)
    ctx->pc = 0x3a8bb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a8bb4: 0x545000af  bnel        $v0, $s0, . + 4 + (0xAF << 2)
    ctx->pc = 0x3A8BB4u;
    {
        const bool branch_taken_0x3a8bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x3a8bb4) {
            ctx->pc = 0x3A8BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A8BB4u;
            // 0x3a8bb8: 0x27180001  addiu       $t8, $t8, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A8E74u;
            goto label_3a8e74;
        }
    }
    ctx->pc = 0x3A8BBCu;
    // 0x3a8bbc: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3a8bbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3a8bc0: 0x514800b0  beql        $t2, $t0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x3A8BC0u;
    {
        const bool branch_taken_0x3a8bc0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        if (branch_taken_0x3a8bc0) {
            ctx->pc = 0x3A8BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A8BC0u;
            // 0x3a8bc4: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A8E84u;
            goto label_3a8e84;
        }
    }
    ctx->pc = 0x3A8BC8u;
    // 0x3a8bc8: 0x80e3005b  lb          $v1, 0x5B($a3)
    ctx->pc = 0x3a8bc8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 91)));
    // 0x3a8bcc: 0x80e2005a  lb          $v0, 0x5A($a3)
    ctx->pc = 0x3a8bccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 90)));
    // 0x3a8bd0: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A8BD0u;
    {
        const bool branch_taken_0x3a8bd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A8BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8BD0u;
        // 0x3a8bd4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8bd0) {
            ctx->pc = 0x3A8BFCu;
            goto label_3a8bfc;
        }
    }
    ctx->pc = 0x3A8BD8u;
    // 0x3a8bd8: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x3a8bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3a8bdc: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x3a8bdcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a8be0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3a8be0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3a8be4: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x3a8be4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x3a8be8: 0x80e2005b  lb          $v0, 0x5B($a3)
    ctx->pc = 0x3a8be8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 91)));
    // 0x3a8bec: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x3a8becu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x3a8bf0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3a8bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3a8bf4: 0x90e2005b  lbu         $v0, 0x5B($a3)
    ctx->pc = 0x3a8bf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 91)));
    // 0x3a8bf8: 0xa0e2005a  sb          $v0, 0x5A($a3)
    ctx->pc = 0x3a8bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 90), (uint8_t)GPR_U32(ctx, 2));
label_3a8bfc:
    // 0x3a8bfc: 0x114800a0  beq         $t2, $t0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x3A8BFCu;
    {
        const bool branch_taken_0x3a8bfc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        ctx->pc = 0x3A8C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8BFCu;
        // 0x3a8c00: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8bfc) {
            ctx->pc = 0x3A8E80u;
            goto label_3a8e80;
        }
    }
    ctx->pc = 0x3A8C04u;
    // 0x3a8c04: 0x94e30050  lhu         $v1, 0x50($a3)
    ctx->pc = 0x3a8c04u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x3a8c08: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A8C08u;
    {
        const bool branch_taken_0x3a8c08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a8c08) {
            ctx->pc = 0x3A8C34u;
            goto label_3a8c34;
        }
    }
    ctx->pc = 0x3A8C10u;
    // 0x3a8c10: 0x8ce20020  lw          $v0, 0x20($a3)
    ctx->pc = 0x3a8c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3a8c14: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3a8c14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3a8c18: 0xa4d90000  sh          $t9, 0x0($a2)
    ctx->pc = 0x3a8c18u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 25));
    // 0x3a8c1c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x3a8c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x3a8c20: 0x80e30050  lb          $v1, 0x50($a3)
    ctx->pc = 0x3a8c20u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x3a8c24: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x3a8c24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x3a8c28: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3a8c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3a8c2c: 0x90e20050  lbu         $v0, 0x50($a3)
    ctx->pc = 0x3a8c2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x3a8c30: 0xa0e20051  sb          $v0, 0x51($a3)
    ctx->pc = 0x3a8c30u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 81), (uint8_t)GPR_U32(ctx, 2));
label_3a8c34:
    // 0x3a8c34: 0x51480093  beql        $t2, $t0, . + 4 + (0x93 << 2)
    ctx->pc = 0x3A8C34u;
    {
        const bool branch_taken_0x3a8c34 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        if (branch_taken_0x3a8c34) {
            ctx->pc = 0x3A8C38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A8C34u;
            // 0x3a8c38: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A8E84u;
            goto label_3a8e84;
        }
    }
    ctx->pc = 0x3A8C3Cu;
    // 0x3a8c3c: 0x80e30054  lb          $v1, 0x54($a3)
    ctx->pc = 0x3a8c3cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x3a8c40: 0x80e20055  lb          $v0, 0x55($a3)
    ctx->pc = 0x3a8c40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 85)));
    // 0x3a8c44: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A8C44u;
    {
        const bool branch_taken_0x3a8c44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A8C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8C44u;
        // 0x3a8c48: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8c44) {
            ctx->pc = 0x3A8C70u;
            goto label_3a8c70;
        }
    }
    ctx->pc = 0x3A8C4Cu;
    // 0x3a8c4c: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x3a8c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3a8c50: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x3a8c50u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a8c54: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3a8c54u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3a8c58: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x3a8c58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x3a8c5c: 0x80e20054  lb          $v0, 0x54($a3)
    ctx->pc = 0x3a8c5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x3a8c60: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x3a8c60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x3a8c64: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3a8c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3a8c68: 0x90e20054  lbu         $v0, 0x54($a3)
    ctx->pc = 0x3a8c68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 84)));
    // 0x3a8c6c: 0xa0e20055  sb          $v0, 0x55($a3)
    ctx->pc = 0x3a8c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 85), (uint8_t)GPR_U32(ctx, 2));
label_3a8c70:
    // 0x3a8c70: 0x51480084  beql        $t2, $t0, . + 4 + (0x84 << 2)
    ctx->pc = 0x3A8C70u;
    {
        const bool branch_taken_0x3a8c70 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        if (branch_taken_0x3a8c70) {
            ctx->pc = 0x3A8C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A8C70u;
            // 0x3a8c74: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A8E84u;
            goto label_3a8e84;
        }
    }
    ctx->pc = 0x3A8C78u;
    // 0x3a8c78: 0x80e30056  lb          $v1, 0x56($a3)
    ctx->pc = 0x3a8c78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 86)));
    // 0x3a8c7c: 0x80e20057  lb          $v0, 0x57($a3)
    ctx->pc = 0x3a8c7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 87)));
    // 0x3a8c80: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A8C80u;
    {
        const bool branch_taken_0x3a8c80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A8C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8C80u;
        // 0x3a8c84: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8c80) {
            ctx->pc = 0x3A8CACu;
            goto label_3a8cac;
        }
    }
    ctx->pc = 0x3A8C88u;
    // 0x3a8c88: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x3a8c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3a8c8c: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x3a8c8cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a8c90: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3a8c90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3a8c94: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x3a8c94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x3a8c98: 0x80e20056  lb          $v0, 0x56($a3)
    ctx->pc = 0x3a8c98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 86)));
    // 0x3a8c9c: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x3a8c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x3a8ca0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3a8ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3a8ca4: 0x90e20056  lbu         $v0, 0x56($a3)
    ctx->pc = 0x3a8ca4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 86)));
    // 0x3a8ca8: 0xa0e20057  sb          $v0, 0x57($a3)
    ctx->pc = 0x3a8ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 87), (uint8_t)GPR_U32(ctx, 2));
label_3a8cac:
    // 0x3a8cac: 0x51480075  beql        $t2, $t0, . + 4 + (0x75 << 2)
    ctx->pc = 0x3A8CACu;
    {
        const bool branch_taken_0x3a8cac = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        if (branch_taken_0x3a8cac) {
            ctx->pc = 0x3A8CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A8CACu;
            // 0x3a8cb0: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A8E84u;
            goto label_3a8e84;
        }
    }
    ctx->pc = 0x3A8CB4u;
    // 0x3a8cb4: 0x80e30052  lb          $v1, 0x52($a3)
    ctx->pc = 0x3a8cb4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 82)));
    // 0x3a8cb8: 0x80e20053  lb          $v0, 0x53($a3)
    ctx->pc = 0x3a8cb8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 83)));
    // 0x3a8cbc: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A8CBCu;
    {
        const bool branch_taken_0x3a8cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A8CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8CBCu;
        // 0x3a8cc0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8cbc) {
            ctx->pc = 0x3A8CE8u;
            goto label_3a8ce8;
        }
    }
    ctx->pc = 0x3A8CC4u;
    // 0x3a8cc4: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x3a8cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3a8cc8: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x3a8cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a8ccc: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3a8cccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3a8cd0: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x3a8cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x3a8cd4: 0x80e20052  lb          $v0, 0x52($a3)
    ctx->pc = 0x3a8cd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 82)));
    // 0x3a8cd8: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x3a8cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x3a8cdc: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3a8cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3a8ce0: 0x90e20052  lbu         $v0, 0x52($a3)
    ctx->pc = 0x3a8ce0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 82)));
    // 0x3a8ce4: 0xa0e20053  sb          $v0, 0x53($a3)
    ctx->pc = 0x3a8ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 83), (uint8_t)GPR_U32(ctx, 2));
label_3a8ce8:
    // 0x3a8ce8: 0x51480066  beql        $t2, $t0, . + 4 + (0x66 << 2)
    ctx->pc = 0x3A8CE8u;
    {
        const bool branch_taken_0x3a8ce8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        if (branch_taken_0x3a8ce8) {
            ctx->pc = 0x3A8CECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A8CE8u;
            // 0x3a8cec: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A8E84u;
            goto label_3a8e84;
        }
    }
    ctx->pc = 0x3A8CF0u;
    // 0x3a8cf0: 0x8ce30030  lw          $v1, 0x30($a3)
    ctx->pc = 0x3a8cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x3a8cf4: 0x8ce20034  lw          $v0, 0x34($a3)
    ctx->pc = 0x3a8cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x3a8cf8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A8CF8u;
    {
        const bool branch_taken_0x3a8cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A8CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8CF8u;
        // 0x3a8cfc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8cf8) {
            ctx->pc = 0x3A8D20u;
            goto label_3a8d20;
        }
    }
    ctx->pc = 0x3A8D00u;
    // 0x3a8d00: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x3a8d00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x3a8d04: 0x8ce40020  lw          $a0, 0x20($a3)
    ctx->pc = 0x3a8d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3a8d08: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3a8d08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3a8d0c: 0x8ce30030  lw          $v1, 0x30($a3)
    ctx->pc = 0x3a8d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x3a8d10: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x3a8d10u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a8d14: 0xace30034  sw          $v1, 0x34($a3)
    ctx->pc = 0x3a8d14u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 3));
    // 0x3a8d18: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x3a8d18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x3a8d1c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3a8d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_3a8d20:
    // 0x3a8d20: 0x51480058  beql        $t2, $t0, . + 4 + (0x58 << 2)
    ctx->pc = 0x3A8D20u;
    {
        const bool branch_taken_0x3a8d20 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        if (branch_taken_0x3a8d20) {
            ctx->pc = 0x3A8D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A8D20u;
            // 0x3a8d24: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A8E84u;
            goto label_3a8e84;
        }
    }
    ctx->pc = 0x3A8D28u;
    // 0x3a8d28: 0x8ce30038  lw          $v1, 0x38($a3)
    ctx->pc = 0x3a8d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x3a8d2c: 0x8ce2003c  lw          $v0, 0x3C($a3)
    ctx->pc = 0x3a8d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
    // 0x3a8d30: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3A8D30u;
    {
        const bool branch_taken_0x3a8d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A8D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8D30u;
        // 0x3a8d34: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8d30) {
            ctx->pc = 0x3A8D68u;
            goto label_3a8d68;
        }
    }
    ctx->pc = 0x3A8D38u;
    // 0x3a8d38: 0x8ce50020  lw          $a1, 0x20($a3)
    ctx->pc = 0x3a8d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3a8d3c: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x3a8d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3a8d40: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x3a8d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3a8d44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3a8d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a8d48: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3a8d48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3a8d4c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x3a8d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x3a8d50: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x3a8d50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x3a8d54: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x3a8d54u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x3a8d58: 0x8ce20038  lw          $v0, 0x38($a3)
    ctx->pc = 0x3a8d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x3a8d5c: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x3a8d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x3a8d60: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3a8d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3a8d64: 0xace2003c  sw          $v0, 0x3C($a3)
    ctx->pc = 0x3a8d64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 2));
label_3a8d68:
    // 0x3a8d68: 0x11480045  beq         $t2, $t0, . + 4 + (0x45 << 2)
    ctx->pc = 0x3A8D68u;
    {
        const bool branch_taken_0x3a8d68 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 8));
        ctx->pc = 0x3A8D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8D68u;
        // 0x3a8d6c: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8d68) {
            ctx->pc = 0x3A8E80u;
            goto label_3a8e80;
        }
    }
    ctx->pc = 0x3A8D70u;
    // 0x3a8d70: 0x51420044  beql        $t2, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x3A8D70u;
    {
        const bool branch_taken_0x3a8d70 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a8d70) {
            ctx->pc = 0x3A8D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A8D70u;
            // 0x3a8d74: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A8E84u;
            goto label_3a8e84;
        }
    }
    ctx->pc = 0x3A8D78u;
    // 0x3a8d78: 0x80e20052  lb          $v0, 0x52($a3)
    ctx->pc = 0x3a8d78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 82)));
    // 0x3a8d7c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x3a8d7cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8d80: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x3A8D80u;
    {
        const bool branch_taken_0x3a8d80 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3A8D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8D80u;
        // 0x3a8d84: 0x90e90052  lbu         $t1, 0x52($a3) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 82)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8d80) {
            ctx->pc = 0x3A8DFCu;
            goto label_3a8dfc;
        }
    }
    ctx->pc = 0x3A8D88u;
    // 0x3a8d88: 0xa1100  sll         $v0, $t2, 4
    ctx->pc = 0x3a8d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x3a8d8c: 0x24ed0008  addiu       $t5, $a3, 0x8
    ctx->pc = 0x3a8d8cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x3a8d90: 0x4f2021  addu        $a0, $v0, $t7
    ctx->pc = 0x3a8d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x3a8d94: 0x240e0009  addiu       $t6, $zero, 0x9
    ctx->pc = 0x3a8d94u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3a8d98: 0x240b0040  addiu       $t3, $zero, 0x40
    ctx->pc = 0x3a8d98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3a8d9c: 0xeb2821  addu        $a1, $a3, $t3
    ctx->pc = 0x3a8d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
label_3a8da0:
    // 0x3a8da0: 0x1ab4021  addu        $t0, $t5, $t3
    ctx->pc = 0x3a8da0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x3a8da4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3a8da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a8da8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3a8da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3a8dac: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3A8DACu;
    {
        const bool branch_taken_0x3a8dac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A8DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8DACu;
        // 0x3a8db0: 0x256b0004  addiu       $t3, $t3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8dac) {
            ctx->pc = 0x3A8DE4u;
            goto label_3a8de4;
        }
    }
    ctx->pc = 0x3A8DB4u;
    // 0x3a8db4: 0xac8c0008  sw          $t4, 0x8($a0)
    ctx->pc = 0x3a8db4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 12));
    // 0x3a8db8: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3a8db8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3a8dbc: 0x8ce30020  lw          $v1, 0x20($a3)
    ctx->pc = 0x3a8dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3a8dc0: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3a8dc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3a8dc4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3a8dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a8dc8: 0xa48e0000  sh          $t6, 0x0($a0)
    ctx->pc = 0x3a8dc8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x3a8dcc: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x3a8dccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x3a8dd0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x3a8dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x3a8dd4: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3a8dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3a8dd8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3a8dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a8ddc: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x3a8ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x3a8de0: 0x90e90052  lbu         $t1, 0x52($a3)
    ctx->pc = 0x3a8de0u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 82)));
label_3a8de4:
    // 0x3a8de4: 0x91600  sll         $v0, $t1, 24
    ctx->pc = 0x3a8de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
    // 0x3a8de8: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x3a8de8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x3a8dec: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3a8decu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x3a8df0: 0x182102a  slt         $v0, $t4, $v0
    ctx->pc = 0x3a8df0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3a8df4: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x3A8DF4u;
    {
        const bool branch_taken_0x3a8df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8DF4u;
        // 0x3a8df8: 0xeb2821  addu        $a1, $a3, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8df4) {
            ctx->pc = 0x3A8DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a8da0;
        }
    }
    ctx->pc = 0x3A8DFCu;
label_3a8dfc:
    // 0x3a8dfc: 0x8ce3005c  lw          $v1, 0x5C($a3)
    ctx->pc = 0x3a8dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
    // 0x3a8e00: 0x8ce20060  lw          $v0, 0x60($a3)
    ctx->pc = 0x3a8e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 96)));
    // 0x3a8e04: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A8E04u;
    {
        const bool branch_taken_0x3a8e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A8E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8E04u;
        // 0x3a8e08: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8e04) {
            ctx->pc = 0x3A8E2Cu;
            goto label_3a8e2c;
        }
    }
    ctx->pc = 0x3A8E0Cu;
    // 0x3a8e0c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x3a8e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x3a8e10: 0x8ce40020  lw          $a0, 0x20($a3)
    ctx->pc = 0x3a8e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3a8e14: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3a8e14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3a8e18: 0x8ce3005c  lw          $v1, 0x5C($a3)
    ctx->pc = 0x3a8e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
    // 0x3a8e1c: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x3a8e1cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3a8e20: 0xace30060  sw          $v1, 0x60($a3)
    ctx->pc = 0x3a8e20u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 3));
    // 0x3a8e24: 0xacc40004  sw          $a0, 0x4($a2)
    ctx->pc = 0x3a8e24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 4));
    // 0x3a8e28: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3a8e28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_3a8e2c:
    // 0x3a8e2c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x3a8e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3a8e30: 0x51440014  beql        $t2, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3A8E30u;
    {
        const bool branch_taken_0x3a8e30 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 4));
        if (branch_taken_0x3a8e30) {
            ctx->pc = 0x3A8E34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A8E30u;
            // 0x3a8e34: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A8E84u;
            goto label_3a8e84;
        }
    }
    ctx->pc = 0x3A8E38u;
    // 0x3a8e38: 0x94e20050  lhu         $v0, 0x50($a3)
    ctx->pc = 0x3a8e38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x3a8e3c: 0x1450000a  bne         $v0, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A8E3Cu;
    {
        const bool branch_taken_0x3a8e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x3a8e3c) {
            ctx->pc = 0x3A8E68u;
            goto label_3a8e68;
        }
    }
    ctx->pc = 0x3A8E44u;
    // 0x3a8e44: 0x8ce20020  lw          $v0, 0x20($a3)
    ctx->pc = 0x3a8e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3a8e48: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x3a8e48u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x3a8e4c: 0xa4d90000  sh          $t9, 0x0($a2)
    ctx->pc = 0x3a8e4cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 25));
    // 0x3a8e50: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x3a8e50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x3a8e54: 0x80e30050  lb          $v1, 0x50($a3)
    ctx->pc = 0x3a8e54u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x3a8e58: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x3a8e58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x3a8e5c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3a8e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3a8e60: 0x90e20050  lbu         $v0, 0x50($a3)
    ctx->pc = 0x3a8e60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x3a8e64: 0xa0e20051  sb          $v0, 0x51($a3)
    ctx->pc = 0x3a8e64u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 81), (uint8_t)GPR_U32(ctx, 2));
label_3a8e68:
    // 0x3a8e68: 0x51440006  beql        $t2, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A8E68u;
    {
        const bool branch_taken_0x3a8e68 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 4));
        if (branch_taken_0x3a8e68) {
            ctx->pc = 0x3A8E6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A8E68u;
            // 0x3a8e6c: 0xae2a0000  sw          $t2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A8E84u;
            goto label_3a8e84;
        }
    }
    ctx->pc = 0x3A8E70u;
    // 0x3a8e70: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x3a8e70u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
label_3a8e74:
    // 0x3a8e74: 0x2b020010  slti        $v0, $t8, 0x10
    ctx->pc = 0x3a8e74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 24) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3a8e78: 0x1440ff4d  bnez        $v0, . + 4 + (-0xB3 << 2)
    ctx->pc = 0x3A8E78u;
    {
        const bool branch_taken_0x3a8e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8E78u;
        // 0x3a8e7c: 0x24e70064  addiu       $a3, $a3, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8e78) {
            ctx->pc = 0x3A8BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a8bb0;
        }
    }
    ctx->pc = 0x3A8E80u;
label_3a8e80:
    // 0x3a8e80: 0xae2a0000  sw          $t2, 0x0($s1)
    ctx->pc = 0x3a8e80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 10));
label_3a8e84:
    // 0x3a8e84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a8e84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a8e88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a8e88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a8e8c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a8e8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a8e90: 0x3e00008  jr          $ra
    ctx->pc = 0x3A8E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A8E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8E90u;
        // 0x3a8e94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A8E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A8E98u;
label_3a8e98:
    // 0x3a8e98: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3a8e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3a8e9c: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x3a8e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x3a8ea0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3a8ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3a8ea4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a8ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3a8ea8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3a8ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3a8eac: 0x24429120  addiu       $v0, $v0, -0x6EE0
    ctx->pc = 0x3a8eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938912));
    // 0x3a8eb0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3a8eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3a8eb4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3a8eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x3a8eb8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x3a8eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x3a8ebc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x3a8ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x3a8ec0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x3a8ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x3a8ec4: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x3a8ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x3a8ec8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3a8ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3a8ecc: 0x8c64a0d0  lw          $a0, -0x5F30($v1)
    ctx->pc = 0x3a8eccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x41A0D0u));
    // 0x3a8ed0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a8ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a8ed4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3a8ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x419120u));
    // 0x3a8ed8: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A8ED8u;
    {
        const bool branch_taken_0x3a8ed8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A8EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8ED8u;
        // 0x3a8edc: 0x3c170042  lui         $s7, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8ed8) {
            ctx->pc = 0x3A8EF4u;
            goto label_3a8ef4;
        }
    }
    ctx->pc = 0x3A8EE0u;
    // 0x3a8ee0: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a8ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3a8ee4: 0x8c43a0c8  lw          $v1, -0x5F38($v0)
    ctx->pc = 0x3a8ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x41A0C8u));
    // 0x3a8ee8: 0x18600094  blez        $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x3A8EE8u;
    {
        const bool branch_taken_0x3a8ee8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3A8EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8EE8u;
        // 0x3a8eec: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8ee8) {
            ctx->pc = 0x3A913Cu;
            goto label_3a913c;
        }
    }
    ctx->pc = 0x3A8EF0u;
    // 0x3a8ef0: 0x3c170042  lui         $s7, 0x42
    ctx->pc = 0x3a8ef0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)66 << 16));
label_3a8ef4:
    // 0x3a8ef4: 0x8ee2a114  lw          $v0, -0x5EEC($s7)
    ctx->pc = 0x3a8ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294942996)));
    // 0x3a8ef8: 0x1440008c  bnez        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x3A8EF8u;
    {
        const bool branch_taken_0x3a8ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8EF8u;
        // 0x3a8efc: 0x26e3a114  addiu       $v1, $s7, -0x5EEC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294942996));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8ef8) {
            ctx->pc = 0x3A912Cu;
            goto label_3a912c;
        }
    }
    ctx->pc = 0x3A8F00u;
    // 0x3a8f00: 0x3c100042  lui         $s0, 0x42
    ctx->pc = 0x3a8f00u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)66 << 16));
    // 0x3a8f04: 0x3c130042  lui         $s3, 0x42
    ctx->pc = 0x3a8f04u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)66 << 16));
    // 0x3a8f08: 0xc0eb0c8  jal         func_3AC320
    ctx->pc = 0x3A8F08u;
    SET_GPR_U32(ctx, 31, 0x3A8F10u);
    ctx->pc = 0x3A8F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8F08u;
    // 0x3a8f0c: 0x2610cb70  addiu       $s0, $s0, -0x3490 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294953840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC320u, 0x3A8F08u, 0x3A8F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8F10u;
label_3a8f10:
    // 0x3a8f10: 0xc0eb15e  jal         func_3AC578
    ctx->pc = 0x3A8F10u;
    SET_GPR_U32(ctx, 31, 0x3A8F18u);
    ctx->pc = 0x3A8F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8F10u;
    // 0x3a8f14: 0x2671a11c  addiu       $s1, $s3, -0x5EE4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 4294943004));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC578u, 0x3A8F10u, 0x3A8F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8F18u;
label_3a8f18:
    // 0x3a8f18: 0xc0e8f30  jal         func_3A3CC0
    ctx->pc = 0x3A8F18u;
    SET_GPR_U32(ctx, 31, 0x3A8F20u);
    ctx->pc = 0x3A8F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8F18u;
    // 0x3a8f1c: 0x3c140042  lui         $s4, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)66 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3CC0u, 0x3A8F18u, 0x3A8F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8F20u;
label_3a8f20:
    // 0x3a8f20: 0xc0ea45c  jal         func_3A9170
    ctx->pc = 0x3A8F20u;
    SET_GPR_U32(ctx, 31, 0x3A8F28u);
    ctx->pc = 0x3A8F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8F20u;
    // 0x3a8f24: 0x3c120042  lui         $s2, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)66 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9170u, 0x3A8F20u, 0x3A8F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8F28u;
label_3a8f28:
    // 0x3a8f28: 0xc0ea1ae  jal         func_3A86B8
    ctx->pc = 0x3A8F28u;
    SET_GPR_U32(ctx, 31, 0x3A8F30u);
    ctx->pc = 0x3A86B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A86B8u, 0x3A8F28u, 0x3A8F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8F30u;
label_3a8f30:
    // 0x3a8f30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a8f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8f34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a8f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8f38: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3A8F38u;
    SET_GPR_U32(ctx, 31, 0x3A8F40u);
    ctx->pc = 0x3A8F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8F38u;
    // 0x3a8f3c: 0x240608d0  addiu       $a2, $zero, 0x8D0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3A8F38u, 0x3A8F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8F40u;
label_3a8f40:
    // 0x3a8f40: 0x24040880  addiu       $a0, $zero, 0x880
    ctx->pc = 0x3a8f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2176));
    // 0x3a8f44: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3a8f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3a8f48: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x3a8f48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x3a8f4c: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x3a8f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x3a8f50: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x3a8f50u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3a8f54: 0xae84cb6c  sw          $a0, -0x3494($s4)
    ctx->pc = 0x3a8f54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294953836), GPR_U32(ctx, 4));
    // 0x3a8f58: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3A8F58u;
    {
        const bool branch_taken_0x3a8f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8F58u;
        // 0x3a8f5c: 0xae50a118  sw          $s0, -0x5EE8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294943000), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8f58) {
            ctx->pc = 0x3A8FA0u;
            goto label_3a8fa0;
        }
    }
    ctx->pc = 0x3A8F60u;
    // 0x3a8f60: 0xc0f3e00  jal         func_3CF800
    ctx->pc = 0x3A8F60u;
    SET_GPR_U32(ctx, 31, 0x3A8F68u);
    ctx->pc = 0x3A8F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8F60u;
    // 0x3a8f64: 0x240408d0  addiu       $a0, $zero, 0x8D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CF800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CF800u, 0x3A8F60u, 0x3A8F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8F68u;
label_3a8f68:
    // 0x3a8f68: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3A8F68u;
    {
        const bool branch_taken_0x3a8f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8F68u;
        // 0x3a8f6c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8f68) {
            ctx->pc = 0x3A8FA0u;
            goto label_3a8fa0;
        }
    }
    ctx->pc = 0x3A8F70u;
    // 0x3a8f70: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a8f70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a8f74: 0x240508d0  addiu       $a1, $zero, 0x8D0
    ctx->pc = 0x3a8f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
    // 0x3a8f78: 0xc0e5ebe  jal         func_397AF8
    ctx->pc = 0x3A8F78u;
    SET_GPR_U32(ctx, 31, 0x3A8F80u);
    ctx->pc = 0x3A8F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8F78u;
    // 0x3a8f7c: 0x2484ea28  addiu       $a0, $a0, -0x15D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3A8F78u, 0x3A8F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8F80u;
label_3a8f80:
    // 0x3a8f80: 0x0  nop
    ctx->pc = 0x3a8f80u;
    // NOP
    // 0x3a8f84: 0x0  nop
    ctx->pc = 0x3a8f84u;
    // NOP
    // 0x3a8f88: 0x0  nop
    ctx->pc = 0x3a8f88u;
    // NOP
    // 0x3a8f8c: 0x0  nop
    ctx->pc = 0x3a8f8cu;
    // NOP
    // 0x3a8f90: 0x0  nop
    ctx->pc = 0x3a8f90u;
    // NOP
    // 0x3a8f94: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A8F94u;
    {
        const bool branch_taken_0x3a8f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a8f94) {
            ctx->pc = 0x3A8F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a8f80;
        }
    }
    ctx->pc = 0x3A8F9Cu;
    // 0x3a8f9c: 0x0  nop
    ctx->pc = 0x3a8f9cu;
    // NOP
label_3a8fa0:
    // 0x3a8fa0: 0x2670a11c  addiu       $s0, $s3, -0x5EE4
    ctx->pc = 0x3a8fa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294943004));
    // 0x3a8fa4: 0x3c160048  lui         $s6, 0x48
    ctx->pc = 0x3a8fa4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)72 << 16));
    // 0x3a8fa8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3a8fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a8fac: 0x26c4e8f0  addiu       $a0, $s6, -0x1710
    ctx->pc = 0x3a8facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961392));
    // 0x3a8fb0: 0xc0e5ebe  jal         func_397AF8
    ctx->pc = 0x3A8FB0u;
    SET_GPR_U32(ctx, 31, 0x3A8FB8u);
    ctx->pc = 0x3A8FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8FB0u;
    // 0x3a8fb4: 0x240508d0  addiu       $a1, $zero, 0x8D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3A8FB0u, 0x3A8FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8FB8u;
label_3a8fb8:
    // 0x3a8fb8: 0x3c080042  lui         $t0, 0x42
    ctx->pc = 0x3a8fb8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)66 << 16));
    // 0x3a8fbc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3a8fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a8fc0: 0x3c100042  lui         $s0, 0x42
    ctx->pc = 0x3a8fc0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)66 << 16));
    // 0x3a8fc4: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x3a8fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x3a8fc8: 0x8e45a118  lw          $a1, -0x5EE8($s2)
    ctx->pc = 0x3a8fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943000)));
    // 0x3a8fcc: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3a8fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3a8fd0: 0x8e87cb6c  lw          $a3, -0x3494($s4)
    ctx->pc = 0x3a8fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294953836)));
    // 0x3a8fd4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a8fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3a8fd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a8fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a8fdc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3a8fdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8fe0: 0xc0e8e4c  jal         func_3A3930
    ctx->pc = 0x3A8FE0u;
    SET_GPR_U32(ctx, 31, 0x3A8FE8u);
    ctx->pc = 0x3A8FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8FE0u;
    // 0x3a8fe4: 0xad02a120  sw          $v0, -0x5EE0($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294943008), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3930u, 0x3A8FE0u, 0x3A8FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8FE8u;
label_3a8fe8:
    // 0x3a8fe8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3A8FE8u;
    {
        const bool branch_taken_0x3a8fe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A8FE8u;
        // 0x3a8fec: 0xae02cb68  sw          $v0, -0x3498($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294953832), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a8fe8) {
            ctx->pc = 0x3A9020u;
            goto label_3a9020;
        }
    }
    ctx->pc = 0x3A8FF0u;
    // 0x3a8ff0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a8ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a8ff4: 0xc0e5ebe  jal         func_397AF8
    ctx->pc = 0x3A8FF4u;
    SET_GPR_U32(ctx, 31, 0x3A8FFCu);
    ctx->pc = 0x3A8FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8FF4u;
    // 0x3a8ff8: 0x2484ea70  addiu       $a0, $a0, -0x1590 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3A8FF4u, 0x3A8FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8FFCu;
label_3a8ffc:
    // 0x3a8ffc: 0x0  nop
    ctx->pc = 0x3a8ffcu;
    // NOP
label_3a9000:
    // 0x3a9000: 0x0  nop
    ctx->pc = 0x3a9000u;
    // NOP
    // 0x3a9004: 0x0  nop
    ctx->pc = 0x3a9004u;
    // NOP
    // 0x3a9008: 0x0  nop
    ctx->pc = 0x3a9008u;
    // NOP
    // 0x3a900c: 0x0  nop
    ctx->pc = 0x3a900cu;
    // NOP
    // 0x3a9010: 0x0  nop
    ctx->pc = 0x3a9010u;
    // NOP
    // 0x3a9014: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A9014u;
    {
        const bool branch_taken_0x3a9014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9014) {
            ctx->pc = 0x3A9000u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9000;
        }
    }
    ctx->pc = 0x3A901Cu;
    // 0x3a901c: 0x0  nop
    ctx->pc = 0x3a901cu;
    // NOP
label_3a9020:
    // 0x3a9020: 0x2610cb68  addiu       $s0, $s0, -0x3498
    ctx->pc = 0x3a9020u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294953832));
    // 0x3a9024: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x3a9024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x3a9028: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3a9028u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a902c: 0x24a58b10  addiu       $a1, $a1, -0x74F0
    ctx->pc = 0x3a902cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937360));
    // 0x3a9030: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a9030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9034: 0xc0e8ecc  jal         func_3A3B30
    ctx->pc = 0x3A9034u;
    SET_GPR_U32(ctx, 31, 0x3A903Cu);
    ctx->pc = 0x3A9038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9034u;
    // 0x3a9038: 0x3c110042  lui         $s1, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)66 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3B30u, 0x3A9034u, 0x3A903Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A903Cu;
label_3a903c:
    // 0x3a903c: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x3a903cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x3a9040: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3a9040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a9044: 0x24a58b70  addiu       $a1, $a1, -0x7490
    ctx->pc = 0x3a9044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937456));
    // 0x3a9048: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a9048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a904c: 0xc0e8ed0  jal         func_3A3B40
    ctx->pc = 0x3A904Cu;
    SET_GPR_U32(ctx, 31, 0x3A9054u);
    ctx->pc = 0x3A9050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A904Cu;
    // 0x3a9050: 0x2634a0e4  addiu       $s4, $s1, -0x5F1C (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4294942948));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3B40u, 0x3A904Cu, 0x3A9054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9054u;
label_3a9054:
    // 0x3a9054: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3a9054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3a9058: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x3A9058u;
    {
        const bool branch_taken_0x3a9058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A905Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9058u;
        // 0x3a905c: 0x3c130042  lui         $s3, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9058) {
            ctx->pc = 0x3A90E0u;
            goto label_3a90e0;
        }
    }
    ctx->pc = 0x3A9060u;
    // 0x3a9060: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a9060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3a9064: 0x3c150042  lui         $s5, 0x42
    ctx->pc = 0x3a9064u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)66 << 16));
    // 0x3a9068: 0x8c43a0c8  lw          $v1, -0x5F38($v0)
    ctx->pc = 0x3a9068u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x41A0C8u));
    // 0x3a906c: 0x26b0a0e0  addiu       $s0, $s5, -0x5F20
    ctx->pc = 0x3a906cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294942944));
    // 0x3a9070: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x3a9070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9074: 0x31280  sll         $v0, $v1, 10
    ctx->pc = 0x3a9074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x3a9078: 0xae63a0ec  sw          $v1, -0x5F14($s3)
    ctx->pc = 0x3a9078u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294942956), GPR_U32(ctx, 3));
    // 0x3a907c: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x3a907cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x3a9080: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3a9080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3a9084: 0xc0f3e00  jal         func_3CF800
    ctx->pc = 0x3A9084u;
    SET_GPR_U32(ctx, 31, 0x3A908Cu);
    ctx->pc = 0x3A9088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9084u;
    // 0x3a9088: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CF800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CF800u, 0x3A9084u, 0x3A908Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A908Cu;
label_3a908c:
    // 0x3a908c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3A908Cu;
    {
        const bool branch_taken_0x3a908c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A9090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A908Cu;
        // 0x3a9090: 0xae820000  sw          $v0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a908c) {
            ctx->pc = 0x3A90C8u;
            goto label_3a90c8;
        }
    }
    ctx->pc = 0x3A9094u;
    // 0x3a9094: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a9094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a9098: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3a9098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a909c: 0xc0e5ebe  jal         func_397AF8
    ctx->pc = 0x3A909Cu;
    SET_GPR_U32(ctx, 31, 0x3A90A4u);
    ctx->pc = 0x3A90A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A909Cu;
    // 0x3a90a0: 0x2484ea98  addiu       $a0, $a0, -0x1568 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3A909Cu, 0x3A90A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A90A4u;
label_3a90a4:
    // 0x3a90a4: 0x0  nop
    ctx->pc = 0x3a90a4u;
    // NOP
label_3a90a8:
    // 0x3a90a8: 0x0  nop
    ctx->pc = 0x3a90a8u;
    // NOP
    // 0x3a90ac: 0x0  nop
    ctx->pc = 0x3a90acu;
    // NOP
    // 0x3a90b0: 0x0  nop
    ctx->pc = 0x3a90b0u;
    // NOP
    // 0x3a90b4: 0x0  nop
    ctx->pc = 0x3a90b4u;
    // NOP
    // 0x3a90b8: 0x0  nop
    ctx->pc = 0x3a90b8u;
    // NOP
    // 0x3a90bc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A90BCu;
    {
        const bool branch_taken_0x3a90bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a90bc) {
            ctx->pc = 0x3A90A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a90a8;
        }
    }
    ctx->pc = 0x3A90C4u;
    // 0x3a90c4: 0x0  nop
    ctx->pc = 0x3a90c4u;
    // NOP
label_3a90c8:
    // 0x3a90c8: 0x8e45a0e0  lw          $a1, -0x5F20($s2)
    ctx->pc = 0x3a90c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294942944)));
    // 0x3a90cc: 0x26c4e8f0  addiu       $a0, $s6, -0x1710
    ctx->pc = 0x3a90ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961392));
    // 0x3a90d0: 0xc0e5ebe  jal         func_397AF8
    ctx->pc = 0x3A90D0u;
    SET_GPR_U32(ctx, 31, 0x3A90D8u);
    ctx->pc = 0x3A90D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A90D0u;
    // 0x3a90d4: 0x8e26a0e4  lw          $a2, -0x5F1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942948)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3A90D0u, 0x3A90D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A90D8u;
label_3a90d8:
    // 0x3a90d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A90D8u;
    {
        const bool branch_taken_0x3a90d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A90DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A90D8u;
        // 0x3a90dc: 0x8e22a0e4  lw          $v0, -0x5F1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942948)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a90d8) {
            ctx->pc = 0x3A90E8u;
            goto label_3a90e8;
        }
    }
    ctx->pc = 0x3A90E0u;
label_3a90e0:
    // 0x3a90e0: 0x3c150042  lui         $s5, 0x42
    ctx->pc = 0x3a90e0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)66 << 16));
    // 0x3a90e4: 0x8e22a0e4  lw          $v0, -0x5F1C($s1)
    ctx->pc = 0x3a90e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294942948)));
label_3a90e8:
    // 0x3a90e8: 0x2403ffc0  addiu       $v1, $zero, -0x40
    ctx->pc = 0x3a90e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x3a90ec: 0x8e65a0ec  lw          $a1, -0x5F14($s3)
    ctx->pc = 0x3a90ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294942956)));
    // 0x3a90f0: 0x3c090042  lui         $t1, 0x42
    ctx->pc = 0x3a90f0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)66 << 16));
    // 0x3a90f4: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x3a90f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x3a90f8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x3a90f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3a90fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3a90fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3a9100: 0x8ea3a0e0  lw          $v1, -0x5F20($s5)
    ctx->pc = 0x3a9100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294942944)));
    // 0x3a9104: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x3a9104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x3a9108: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3a9108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a910c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x3a910cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a9110: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3a9110u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9114: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3a9114u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9118: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3a9118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x3a911c: 0xad22a0e8  sw          $v0, -0x5F18($t1)
    ctx->pc = 0x3a911cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294942952), GPR_U32(ctx, 2));
    // 0x3a9120: 0xc0e8f8a  jal         func_3A3E28
    ctx->pc = 0x3A9120u;
    SET_GPR_U32(ctx, 31, 0x3A9128u);
    ctx->pc = 0x3A9124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9120u;
    // 0x3a9124: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3E28u, 0x3A9120u, 0x3A9128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9128u;
label_3a9128:
    // 0x3a9128: 0x26e3a114  addiu       $v1, $s7, -0x5EEC
    ctx->pc = 0x3a9128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294942996));
label_3a912c:
    // 0x3a912c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3a912cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a9130: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a9130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a9134: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3a9134u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x3a9138: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3a9138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3a913c:
    // 0x3a913c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3a913cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a9140: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3a9140u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a9144: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3a9144u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3a9148: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x3a9148u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a914c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x3a914cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3a9150: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x3a9150u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a9154: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x3a9154u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3a9158: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3a9158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a915c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A915Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A915Cu;
        // 0x3a9160: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A915Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9164u;
    // 0x3a9164: 0x0  nop
    ctx->pc = 0x3a9164u;
    // NOP
    // 0x3a9168: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3a9168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3a916c: 0x0  nop
    ctx->pc = 0x3a916cu;
    // NOP
    ctx->pc = 0x3a9170u;
}

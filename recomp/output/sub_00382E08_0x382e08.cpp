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

// Function: sub_00382E08
// Address: 0x382e08 - 0x383260
void sub_00382E08_0x382e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00382E08_0x382e08");
#endif

    switch (ctx->pc) {
        case 0x382e58u: goto label_382e58;
        case 0x382e98u: goto label_382e98;
        case 0x382eb0u: goto label_382eb0;
        case 0x382ee8u: goto label_382ee8;
        case 0x382f30u: goto label_382f30;
        case 0x382f70u: goto label_382f70;
        case 0x382fa0u: goto label_382fa0;
        case 0x383008u: goto label_383008;
        case 0x383038u: goto label_383038;
        case 0x383058u: goto label_383058;
        case 0x383098u: goto label_383098;
        case 0x3830e0u: goto label_3830e0;
        case 0x383218u: goto label_383218;
        default: break;
    }

    ctx->pc = 0x382e08u;

    // 0x382e08: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x382e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x382e0c: 0x8d380000  lw          $t8, 0x0($t1)
    ctx->pc = 0x382e0cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x382e10: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x382e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x382e14: 0x7fb50000  sq          $s5, 0x0($sp)
    ctx->pc = 0x382e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 21));
    // 0x382e18: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x382e18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382e1c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x382e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x382e20: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x382e20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382e24: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x382e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x382e28: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x382e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x382e2c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x382e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x382e30: 0x8d0a0034  lw          $t2, 0x34($t0)
    ctx->pc = 0x382e30u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
    // 0x382e34: 0x8d0e0038  lw          $t6, 0x38($t0)
    ctx->pc = 0x382e34u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
    // 0x382e38: 0x8d390004  lw          $t9, 0x4($t1)
    ctx->pc = 0x382e38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x382e3c: 0x1ca102b  sltu        $v0, $t6, $t2
    ctx->pc = 0x382e3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x382e40: 0xdd0f0020  ld          $t7, 0x20($t0)
    ctx->pc = 0x382e40u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x382e44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x382E44u;
    {
        const bool branch_taken_0x382e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382E44u;
        // 0x382e48: 0x8d0d001c  lw          $t5, 0x1C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382e44) {
            ctx->pc = 0x382E68u;
            goto label_382e68;
        }
    }
    ctx->pc = 0x382E4Cu;
    // 0x382e4c: 0x14e1023  subu        $v0, $t2, $t6
    ctx->pc = 0x382e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 14)));
    // 0x382e50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x382E50u;
    {
        const bool branch_taken_0x382e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382E50u;
        // 0x382e54: 0x2447ffff  addiu       $a3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382e50) {
            ctx->pc = 0x382E70u;
            goto label_382e70;
        }
    }
    ctx->pc = 0x382E58u;
label_382e58:
    // 0x382e58: 0x8d240004  lw          $a0, 0x4($t1)
    ctx->pc = 0x382e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x382e5c: 0xfd0f0020  sd          $t7, 0x20($t0)
    ctx->pc = 0x382e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 15));
    // 0x382e60: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x382E60u;
    {
        const bool branch_taken_0x382e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382E60u;
        // 0x382e64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382e60) {
            ctx->pc = 0x3831FCu;
            goto label_3831fc;
        }
    }
    ctx->pc = 0x382E68u;
label_382e68:
    // 0x382e68: 0x8d020030  lw          $v0, 0x30($t0)
    ctx->pc = 0x382e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x382e6c: 0x4e3823  subu        $a3, $v0, $t6
    ctx->pc = 0x382e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
label_382e70:
    // 0x382e70: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x382e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x382e74: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x382e74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x382e78: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x382e78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382e7c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x382e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x382e80: 0x2442df60  addiu       $v0, $v0, -0x20A0
    ctx->pc = 0x382e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958944));
    // 0x382e84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x382e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x382e88: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x382e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x382e8c: 0x8c940000  lw          $s4, 0x0($a0)
    ctx->pc = 0x382e8cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x382e90: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x382E90u;
    {
        const bool branch_taken_0x382e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x382E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382E90u;
        // 0x382e94: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382e90) {
            ctx->pc = 0x382EACu;
            goto label_382eac;
        }
    }
    ctx->pc = 0x382E98u;
label_382e98:
    // 0x382e98: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x382e98u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x382e9c: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x382e9cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x382ea0: 0x1a31814  dsllv       $v1, $v1, $t5
    ctx->pc = 0x382ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 13) & 0x3F));
    // 0x382ea4: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x382ea4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x382ea8: 0x1e37825  or          $t7, $t7, $v1
    ctx->pc = 0x382ea8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
label_382eac:
    // 0x382eac: 0x2da20014  sltiu       $v0, $t5, 0x14
    ctx->pc = 0x382eacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_382eb0:
    // 0x382eb0: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x382EB0u;
    {
        const bool branch_taken_0x382eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x382eb0) {
            ctx->pc = 0x382EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x382EB0u;
            // 0x382eb4: 0x93030000  lbu         $v1, 0x0($t8) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x382E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382e98;
        }
    }
    ctx->pc = 0x382EB8u;
    // 0x382eb8: 0xf103c  dsll32      $v0, $t7, 0
    ctx->pc = 0x382eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) << (32 + 0));
    // 0x382ebc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x382ebcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x382ec0: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x382ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x382ec4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x382ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x382ec8: 0x2a25821  addu        $t3, $s5, $v0
    ctx->pc = 0x382ec8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x382ecc: 0x916a0000  lbu         $t2, 0x0($t3)
    ctx->pc = 0x382eccu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x382ed0: 0x114000b1  beqz        $t2, . + 4 + (0xB1 << 2)
    ctx->pc = 0x382ED0u;
    {
        const bool branch_taken_0x382ed0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x382ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382ED0u;
        // 0x382ed4: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382ed0) {
            ctx->pc = 0x383198u;
            goto label_383198;
        }
    }
    ctx->pc = 0x382ED8u;
    // 0x382ed8: 0x266cdf60  addiu       $t4, $s3, -0x20A0
    ctx->pc = 0x382ed8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), 4294958944));
    // 0x382edc: 0x24508508  addiu       $s0, $v0, -0x7AF8
    ctx->pc = 0x382edcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935816));
    // 0x382ee0: 0x91620001  lbu         $v0, 0x1($t3)
    ctx->pc = 0x382ee0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x382ee4: 0x0  nop
    ctx->pc = 0x382ee4u;
    // NOP
label_382ee8:
    // 0x382ee8: 0x31430010  andi        $v1, $t2, 0x10
    ctx->pc = 0x382ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)16);
    // 0x382eec: 0x1a26823  subu        $t5, $t5, $v0
    ctx->pc = 0x382eecu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x382ef0: 0x10600098  beqz        $v1, . + 4 + (0x98 << 2)
    ctx->pc = 0x382EF0u;
    {
        const bool branch_taken_0x382ef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x382EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382EF0u;
        // 0x382ef4: 0x4f7816  dsrlv       $t7, $t7, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382ef0) {
            ctx->pc = 0x383154u;
            goto label_383154;
        }
    }
    ctx->pc = 0x382EF8u;
    // 0x382ef8: 0x314a000f  andi        $t2, $t2, 0xF
    ctx->pc = 0x382ef8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)15);
    // 0x382efc: 0xf183c  dsll32      $v1, $t7, 0
    ctx->pc = 0x382efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 15) << (32 + 0));
    // 0x382f00: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x382f00u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x382f04: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x382f04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x382f08: 0x8d650004  lw          $a1, 0x4($t3)
    ctx->pc = 0x382f08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x382f0c: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x382f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x382f10: 0x1aa6823  subu        $t5, $t5, $t2
    ctx->pc = 0x382f10u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
    // 0x382f14: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x382f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x382f18: 0x14f7816  dsrlv       $t7, $t7, $t2
    ctx->pc = 0x382f18u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (GPR_U32(ctx, 10) & 0x3F));
    // 0x382f1c: 0x2da2000f  sltiu       $v0, $t5, 0xF
    ctx->pc = 0x382f1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x382f20: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x382f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x382f24: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x382F24u;
    {
        const bool branch_taken_0x382f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382F24u;
        // 0x382f28: 0xa36021  addu        $t4, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382f24) {
            ctx->pc = 0x382F50u;
            goto label_382f50;
        }
    }
    ctx->pc = 0x382F2Cu;
    // 0x382f2c: 0x0  nop
    ctx->pc = 0x382f2cu;
    // NOP
label_382f30:
    // 0x382f30: 0x93030000  lbu         $v1, 0x0($t8)
    ctx->pc = 0x382f30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x382f34: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x382f34u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x382f38: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x382f38u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x382f3c: 0x1a31814  dsllv       $v1, $v1, $t5
    ctx->pc = 0x382f3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 13) & 0x3F));
    // 0x382f40: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x382f40u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x382f44: 0x2da2000f  sltiu       $v0, $t5, 0xF
    ctx->pc = 0x382f44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x382f48: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x382F48u;
    {
        const bool branch_taken_0x382f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x382F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382F48u;
        // 0x382f4c: 0x1e37825  or          $t7, $t7, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382f48) {
            ctx->pc = 0x382F30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382f30;
        }
    }
    ctx->pc = 0x382F50u;
label_382f50:
    // 0x382f50: 0xf103c  dsll32      $v0, $t7, 0
    ctx->pc = 0x382f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) << (32 + 0));
    // 0x382f54: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x382f54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x382f58: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x382f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x382f5c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x382f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x382f60: 0x246684f0  addiu       $a2, $v1, -0x7B10
    ctx->pc = 0x382f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935792));
    // 0x382f64: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x382f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x382f68: 0x2670df60  addiu       $s0, $s3, -0x20A0
    ctx->pc = 0x382f68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294958944));
    // 0x382f6c: 0x2425821  addu        $t3, $s2, $v0
    ctx->pc = 0x382f6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_382f70:
    // 0x382f70: 0x916a0000  lbu         $t2, 0x0($t3)
    ctx->pc = 0x382f70u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x382f74: 0x91620001  lbu         $v0, 0x1($t3)
    ctx->pc = 0x382f74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x382f78: 0x31430010  andi        $v1, $t2, 0x10
    ctx->pc = 0x382f78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)16);
    // 0x382f7c: 0x1a26823  subu        $t5, $t5, $v0
    ctx->pc = 0x382f7cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x382f80: 0x1060005f  beqz        $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x382F80u;
    {
        const bool branch_taken_0x382f80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x382F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382F80u;
        // 0x382f84: 0x4f7816  dsrlv       $t7, $t7, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382f80) {
            ctx->pc = 0x383100u;
            goto label_383100;
        }
    }
    ctx->pc = 0x382F88u;
    // 0x382f88: 0x314a000f  andi        $t2, $t2, 0xF
    ctx->pc = 0x382f88u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)15);
    // 0x382f8c: 0x8d660004  lw          $a2, 0x4($t3)
    ctx->pc = 0x382f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x382f90: 0xec5823  subu        $t3, $a3, $t4
    ctx->pc = 0x382f90u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x382f94: 0x1aa102b  sltu        $v0, $t5, $t2
    ctx->pc = 0x382f94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x382f98: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x382F98u;
    {
        const bool branch_taken_0x382f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382F98u;
        // 0x382f9c: 0x8d05002c  lw          $a1, 0x2C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382f98) {
            ctx->pc = 0x382FC0u;
            goto label_382fc0;
        }
    }
    ctx->pc = 0x382FA0u;
label_382fa0:
    // 0x382fa0: 0x93030000  lbu         $v1, 0x0($t8)
    ctx->pc = 0x382fa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x382fa4: 0x2739ffff  addiu       $t9, $t9, -0x1
    ctx->pc = 0x382fa4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967295));
    // 0x382fa8: 0x27180001  addiu       $t8, $t8, 0x1
    ctx->pc = 0x382fa8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 1));
    // 0x382fac: 0x1a31814  dsllv       $v1, $v1, $t5
    ctx->pc = 0x382facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 13) & 0x3F));
    // 0x382fb0: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x382fb0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x382fb4: 0x1aa102b  sltu        $v0, $t5, $t2
    ctx->pc = 0x382fb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x382fb8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x382FB8u;
    {
        const bool branch_taken_0x382fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x382FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382FB8u;
        // 0x382fbc: 0x1e37825  or          $t7, $t7, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382fb8) {
            ctx->pc = 0x382FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382fa0;
        }
    }
    ctx->pc = 0x382FC0u;
label_382fc0:
    // 0x382fc0: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x382fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x382fc4: 0xf183c  dsll32      $v1, $t7, 0
    ctx->pc = 0x382fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 15) << (32 + 0));
    // 0x382fc8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x382fc8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x382fcc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x382fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x382fd0: 0x1aa6823  subu        $t5, $t5, $t2
    ctx->pc = 0x382fd0u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 10)));
    // 0x382fd4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x382fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x382fd8: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x382fd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382fdc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x382fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x382fe0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x382fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x382fe4: 0x1c31823  subu        $v1, $t6, $v1
    ctx->pc = 0x382fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x382fe8: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x382fe8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x382fec: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x382FECu;
    {
        const bool branch_taken_0x382fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x382FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x382FECu;
        // 0x382ff0: 0x14f7816  dsrlv       $t7, $t7, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (GPR_U32(ctx, 10) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x382fec) {
            ctx->pc = 0x3830B8u;
            goto label_3830b8;
        }
    }
    ctx->pc = 0x382FF4u;
    // 0x382ff4: 0x8d020030  lw          $v0, 0x30($t0)
    ctx->pc = 0x382ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x382ff8: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x382ff8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x382ffc: 0x452023  subu        $a0, $v0, $a1
    ctx->pc = 0x382ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x383000: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x383000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x383004: 0x0  nop
    ctx->pc = 0x383004u;
    // NOP
label_383008:
    // 0x383008: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x383008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x38300c: 0x0  nop
    ctx->pc = 0x38300cu;
    // NOP
    // 0x383010: 0x0  nop
    ctx->pc = 0x383010u;
    // NOP
    // 0x383014: 0x0  nop
    ctx->pc = 0x383014u;
    // NOP
    // 0x383018: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x383018u;
    {
        const bool branch_taken_0x383018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x383018) {
            ctx->pc = 0x38301Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383018u;
            // 0x38301c: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383008;
        }
    }
    ctx->pc = 0x383020u;
    // 0x383020: 0x1435023  subu        $t2, $t2, $v1
    ctx->pc = 0x383020u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x383024: 0x14c102b  sltu        $v0, $t2, $t4
    ctx->pc = 0x383024u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x383028: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x383028u;
    {
        const bool branch_taken_0x383028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x383028) {
            ctx->pc = 0x38302Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383028u;
            // 0x38302c: 0x90620000  lbu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383078u;
            goto label_383078;
        }
    }
    ctx->pc = 0x383030u;
    // 0x383030: 0x18a6023  subu        $t4, $t4, $t2
    ctx->pc = 0x383030u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
    // 0x383034: 0x0  nop
    ctx->pc = 0x383034u;
    // NOP
label_383038:
    // 0x383038: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x383038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38303c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x38303cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x383040: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x383040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x383044: 0xa1c20000  sb          $v0, 0x0($t6)
    ctx->pc = 0x383044u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x383048: 0x1540fffb  bnez        $t2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x383048u;
    {
        const bool branch_taken_0x383048 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x38304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383048u;
        // 0x38304c: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383048) {
            ctx->pc = 0x383038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383038;
        }
    }
    ctx->pc = 0x383050u;
    // 0x383050: 0x8d03002c  lw          $v1, 0x2C($t0)
    ctx->pc = 0x383050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 44)));
    // 0x383054: 0x0  nop
    ctx->pc = 0x383054u;
    // NOP
label_383058:
    // 0x383058: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x383058u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38305c: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x38305cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x383060: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x383060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x383064: 0xa1c20000  sb          $v0, 0x0($t6)
    ctx->pc = 0x383064u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x383068: 0x1580fffb  bnez        $t4, . + 4 + (-0x5 << 2)
    ctx->pc = 0x383068u;
    {
        const bool branch_taken_0x383068 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x38306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383068u;
        // 0x38306c: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383068) {
            ctx->pc = 0x383058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383058;
        }
    }
    ctx->pc = 0x383070u;
    // 0x383070: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x383070u;
    {
        const bool branch_taken_0x383070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383070u;
        // 0x383074: 0x2ce20102  sltiu       $v0, $a3, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)258) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x383070) {
            ctx->pc = 0x3831DCu;
            goto label_3831dc;
        }
    }
    ctx->pc = 0x383078u;
label_383078:
    // 0x383078: 0x258cfffe  addiu       $t4, $t4, -0x2
    ctx->pc = 0x383078u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967294));
    // 0x38307c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x38307cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x383080: 0xa1c20000  sb          $v0, 0x0($t6)
    ctx->pc = 0x383080u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x383084: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x383084u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x383088: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x383088u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38308c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x38308cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x383090: 0xa1c20000  sb          $v0, 0x0($t6)
    ctx->pc = 0x383090u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x383094: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x383094u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_383098:
    // 0x383098: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x383098u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38309c: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x38309cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x3830a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3830a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3830a4: 0xa1c20000  sb          $v0, 0x0($t6)
    ctx->pc = 0x3830a4u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3830a8: 0x1580fffb  bnez        $t4, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3830A8u;
    {
        const bool branch_taken_0x3830a8 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x3830ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3830A8u;
        // 0x3830ac: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3830a8) {
            ctx->pc = 0x383098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383098;
        }
    }
    ctx->pc = 0x3830B0u;
    // 0x3830b0: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x3830B0u;
    {
        const bool branch_taken_0x3830b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3830B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3830B0u;
        // 0x3830b4: 0x2ce20102  sltiu       $v0, $a3, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)258) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3830b0) {
            ctx->pc = 0x3831DCu;
            goto label_3831dc;
        }
    }
    ctx->pc = 0x3830B8u;
label_3830b8:
    // 0x3830b8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3830b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3830bc: 0x258cfffe  addiu       $t4, $t4, -0x2
    ctx->pc = 0x3830bcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967294));
    // 0x3830c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3830c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3830c4: 0xa1c20000  sb          $v0, 0x0($t6)
    ctx->pc = 0x3830c4u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3830c8: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x3830c8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x3830cc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3830ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3830d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3830d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3830d4: 0xa1c20000  sb          $v0, 0x0($t6)
    ctx->pc = 0x3830d4u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3830d8: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x3830d8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x3830dc: 0x0  nop
    ctx->pc = 0x3830dcu;
    // NOP
label_3830e0:
    // 0x3830e0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3830e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3830e4: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x3830e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x3830e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3830e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3830ec: 0xa1c20000  sb          $v0, 0x0($t6)
    ctx->pc = 0x3830ecu;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3830f0: 0x1580fffb  bnez        $t4, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3830F0u;
    {
        const bool branch_taken_0x3830f0 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x3830F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3830F0u;
        // 0x3830f4: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3830f0) {
            ctx->pc = 0x3830E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3830e0;
        }
    }
    ctx->pc = 0x3830F8u;
    // 0x3830f8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x3830F8u;
    {
        const bool branch_taken_0x3830f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3830FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3830F8u;
        // 0x3830fc: 0x2ce20102  sltiu       $v0, $a3, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)258) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3830f8) {
            ctx->pc = 0x3831DCu;
            goto label_3831dc;
        }
    }
    ctx->pc = 0x383100u;
label_383100:
    // 0x383100: 0x31420040  andi        $v0, $t2, 0x40
    ctx->pc = 0x383100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)64);
    // 0x383104: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x383104u;
    {
        const bool branch_taken_0x383104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x383104) {
            ctx->pc = 0x383108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383104u;
            // 0x383108: 0x8d230004  lw          $v1, 0x4($t1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38313Cu;
            goto label_38313c;
        }
    }
    ctx->pc = 0x38310Cu;
    // 0x38310c: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x38310cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x383110: 0x8d640004  lw          $a0, 0x4($t3)
    ctx->pc = 0x383110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x383114: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x383114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x383118: 0xf183c  dsll32      $v1, $t7, 0
    ctx->pc = 0x383118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 15) << (32 + 0));
    // 0x38311c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x38311cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x383120: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x383120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x383124: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x383124u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x383128: 0x1645821  addu        $t3, $t3, $a0
    ctx->pc = 0x383128u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x38312c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x38312cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x383130: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x383130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x383134: 0x1000ff8e  b           . + 4 + (-0x72 << 2)
    ctx->pc = 0x383134u;
    {
        const bool branch_taken_0x383134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383134u;
        // 0x383138: 0x1635821  addu        $t3, $t3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383134) {
            ctx->pc = 0x382F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382f70;
        }
    }
    ctx->pc = 0x38313Cu;
label_38313c:
    // 0x38313c: 0xd28c2  srl         $a1, $t5, 3
    ctx->pc = 0x38313cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 13), 3));
    // 0x383140: 0xad260020  sw          $a2, 0x20($t1)
    ctx->pc = 0x383140u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 32), GPR_U32(ctx, 6));
    // 0x383144: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x383144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x383148: 0x796023  subu        $t4, $v1, $t9
    ctx->pc = 0x383148u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
    // 0x38314c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x38314Cu;
    {
        const bool branch_taken_0x38314c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38314Cu;
        // 0x383150: 0xfd0f0020  sd          $t7, 0x20($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38314c) {
            ctx->pc = 0x383200u;
            goto label_383200;
        }
    }
    ctx->pc = 0x383154u;
label_383154:
    // 0x383154: 0x31420040  andi        $v0, $t2, 0x40
    ctx->pc = 0x383154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)64);
    // 0x383158: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x383158u;
    {
        const bool branch_taken_0x383158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383158u;
        // 0x38315c: 0x31420020  andi        $v0, $t2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x383158) {
            ctx->pc = 0x3831B8u;
            goto label_3831b8;
        }
    }
    ctx->pc = 0x383160u;
    // 0x383160: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x383160u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x383164: 0x8d640004  lw          $a0, 0x4($t3)
    ctx->pc = 0x383164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x383168: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x383168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x38316c: 0xf103c  dsll32      $v0, $t7, 0
    ctx->pc = 0x38316cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) << (32 + 0));
    // 0x383170: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x383170u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x383174: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x383174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x383178: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x383178u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x38317c: 0x1645821  addu        $t3, $t3, $a0
    ctx->pc = 0x38317cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x383180: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x383180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x383184: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x383184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x383188: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x383188u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x38318c: 0x916a0000  lbu         $t2, 0x0($t3)
    ctx->pc = 0x38318cu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x383190: 0x5540ff55  bnel        $t2, $zero, . + 4 + (-0xAB << 2)
    ctx->pc = 0x383190u;
    {
        const bool branch_taken_0x383190 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x383190) {
            ctx->pc = 0x383194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383190u;
            // 0x383194: 0x91620001  lbu         $v0, 0x1($t3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x382EE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382ee8;
        }
    }
    ctx->pc = 0x383198u;
label_383198:
    // 0x383198: 0x91630004  lbu         $v1, 0x4($t3)
    ctx->pc = 0x383198u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x38319c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x38319cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3831a0: 0x91620001  lbu         $v0, 0x1($t3)
    ctx->pc = 0x3831a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x3831a4: 0xa1c30000  sb          $v1, 0x0($t6)
    ctx->pc = 0x3831a4u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3831a8: 0x1a26823  subu        $t5, $t5, $v0
    ctx->pc = 0x3831a8u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x3831ac: 0x4f7816  dsrlv       $t7, $t7, $v0
    ctx->pc = 0x3831acu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (GPR_U32(ctx, 2) & 0x3F));
    // 0x3831b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3831B0u;
    {
        const bool branch_taken_0x3831b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3831B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3831B0u;
        // 0x3831b4: 0x25ce0001  addiu       $t6, $t6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3831b0) {
            ctx->pc = 0x3831D8u;
            goto label_3831d8;
        }
    }
    ctx->pc = 0x3831B8u;
label_3831b8:
    // 0x3831b8: 0x1440ff27  bnez        $v0, . + 4 + (-0xD9 << 2)
    ctx->pc = 0x3831B8u;
    {
        const bool branch_taken_0x3831b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3831BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3831B8u;
        // 0x3831bc: 0xd28c2  srl         $a1, $t5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 13), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3831b8) {
            ctx->pc = 0x382E58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382e58;
        }
    }
    ctx->pc = 0x3831C0u;
    // 0x3831c0: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x3831c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x3831c4: 0xad300020  sw          $s0, 0x20($t1)
    ctx->pc = 0x3831c4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 32), GPR_U32(ctx, 16));
    // 0x3831c8: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x3831c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x3831cc: 0x796023  subu        $t4, $v1, $t9
    ctx->pc = 0x3831ccu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 25)));
    // 0x3831d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3831D0u;
    {
        const bool branch_taken_0x3831d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3831D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3831D0u;
        // 0x3831d4: 0xfd0f0020  sd          $t7, 0x20($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3831d0) {
            ctx->pc = 0x383200u;
            goto label_383200;
        }
    }
    ctx->pc = 0x3831D8u;
label_3831d8:
    // 0x3831d8: 0x2ce20102  sltiu       $v0, $a3, 0x102
    ctx->pc = 0x3831d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)258) ? 1 : 0);
label_3831dc:
    // 0x3831dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3831DCu;
    {
        const bool branch_taken_0x3831dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3831E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3831DCu;
        // 0x3831e0: 0x2f22000a  sltiu       $v0, $t9, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 25) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3831dc) {
            ctx->pc = 0x3831ECu;
            goto label_3831ec;
        }
    }
    ctx->pc = 0x3831E4u;
    // 0x3831e4: 0x1040ff32  beqz        $v0, . + 4 + (-0xCE << 2)
    ctx->pc = 0x3831E4u;
    {
        const bool branch_taken_0x3831e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3831E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3831E4u;
        // 0x3831e8: 0x2da20014  sltiu       $v0, $t5, 0x14 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3831e4) {
            ctx->pc = 0x382EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_382eb0;
        }
    }
    ctx->pc = 0x3831ECu;
label_3831ec:
    // 0x3831ec: 0x8d240004  lw          $a0, 0x4($t1)
    ctx->pc = 0x3831ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x3831f0: 0xd28c2  srl         $a1, $t5, 3
    ctx->pc = 0x3831f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 13), 3));
    // 0x3831f4: 0xfd0f0020  sd          $t7, 0x20($t0)
    ctx->pc = 0x3831f4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 15));
    // 0x3831f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3831f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3831fc:
    // 0x3831fc: 0x996023  subu        $t4, $a0, $t9
    ctx->pc = 0x3831fcu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 25)));
label_383200:
    // 0x383200: 0xac182b  sltu        $v1, $a1, $t4
    ctx->pc = 0x383200u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x383204: 0xa3600b  movn        $t4, $a1, $v1
    ctx->pc = 0x383204u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 5));
    // 0x383208: 0xc20c0  sll         $a0, $t4, 3
    ctx->pc = 0x383208u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 3));
    // 0x38320c: 0x30cc023  subu        $t8, $t8, $t4
    ctx->pc = 0x38320cu;
    SET_GPR_S32(ctx, 24, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 12)));
    // 0x383210: 0x1a46823  subu        $t5, $t5, $a0
    ctx->pc = 0x383210u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x383214: 0x32cc821  addu        $t9, $t9, $t4
    ctx->pc = 0x383214u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 12)));
label_383218:
    // 0x383218: 0xad0d001c  sw          $t5, 0x1C($t0)
    ctx->pc = 0x383218u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 13));
    // 0x38321c: 0xad390004  sw          $t9, 0x4($t1)
    ctx->pc = 0x38321cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 25));
    // 0x383220: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x383220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x383224: 0xdd240008  ld          $a0, 0x8($t1)
    ctx->pc = 0x383224u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x383228: 0x3031823  subu        $v1, $t8, $v1
    ctx->pc = 0x383228u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 24), GPR_U32(ctx, 3)));
    // 0x38322c: 0xad380000  sw          $t8, 0x0($t1)
    ctx->pc = 0x38322cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 24));
    // 0x383230: 0x83202d  daddu       $a0, $a0, $v1
    ctx->pc = 0x383230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x383234: 0xfd240008  sd          $a0, 0x8($t1)
    ctx->pc = 0x383234u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 4));
    // 0x383238: 0xad0e0038  sw          $t6, 0x38($t0)
    ctx->pc = 0x383238u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 56), GPR_U32(ctx, 14));
    // 0x38323c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x38323cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x383240: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x383240u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x383244: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x383244u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x383248: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x383248u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38324c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x38324cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x383250: 0x7bb50000  lq          $s5, 0x0($sp)
    ctx->pc = 0x383250u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x383254: 0x3e00008  jr          $ra
    ctx->pc = 0x383254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383254u;
        // 0x383258: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38325Cu;
    // 0x38325c: 0x0  nop
    ctx->pc = 0x38325cu;
    // NOP
    ctx->pc = 0x383260u;
}

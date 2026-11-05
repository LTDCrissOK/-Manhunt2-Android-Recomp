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

// Function: sub_00371C90
// Address: 0x371c90 - 0x371eb0
void sub_00371C90_0x371c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00371C90_0x371c90");
#endif

    ctx->pc = 0x371c90u;

    // 0x371c90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x371c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x371c94: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x371c94u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x371c98: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x371c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x371c9c: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x371c9cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x371ca0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x371ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x371ca4: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x371ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x371ca8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x371ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x371cac: 0x79403  sra         $s2, $a3, 16
    ctx->pc = 0x371cacu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 7), 16));
    // 0x371cb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x371cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x371cb4: 0x240c000e  addiu       $t4, $zero, 0xE
    ctx->pc = 0x371cb4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x371cb8: 0x7de20000  sq          $v0, 0x0($t7)
    ctx->pc = 0x371cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 0), GPR_VEC(ctx, 2));
    // 0x371cbc: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x371cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x371cc0: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x371cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x371cc4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x371cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x371cc8: 0xdde40000  ld          $a0, 0x0($t7)
    ctx->pc = 0x371cc8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x371ccc: 0x2643003f  addiu       $v1, $s2, 0x3F
    ctx->pc = 0x371cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
    // 0x371cd0: 0x69c03  sra         $s3, $a2, 16
    ctx->pc = 0x371cd0u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 6), 16));
    // 0x371cd4: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x371cd4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x371cd8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x371cd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x371cdc: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x371cdcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x371ce0: 0x8c2025  or          $a0, $a0, $t4
    ctx->pc = 0x371ce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 12));
    // 0x371ce4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x371ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x371ce8: 0xddeb0008  ld          $t3, 0x8($t7)
    ctx->pc = 0x371ce8u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x371cec: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x371cecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x371cf0: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x371cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x371cf4: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x371cf4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
    // 0x371cf8: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x371cf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x371cfc: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x371cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x371d00: 0x2407fff0  addiu       $a3, $zero, -0x10
    ctx->pc = 0x371d00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x371d04: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x371d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x371d08: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x371d08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x371d0c: 0xddf00080  ld          $s0, 0x80($t7)
    ctx->pc = 0x371d0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 15), 128)));
    // 0x371d10: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x371d10u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x371d14: 0x3262000f  andi        $v0, $s3, 0xF
    ctx->pc = 0x371d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
    // 0x371d18: 0x1675824  and         $t3, $t3, $a3
    ctx->pc = 0x371d18u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 7));
    // 0x371d1c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x371d1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x371d20: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x371d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x371d24: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x371d24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x371d28: 0x6337c  dsll32      $a2, $a2, 13
    ctx->pc = 0x371d28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 13));
    // 0x371d2c: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x371d2cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x371d30: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x371d30u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x371d34: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x371d34u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x371d38: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x371d38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x371d3c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x371d3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x371d40: 0x16c5825  or          $t3, $t3, $t4
    ctx->pc = 0x371d40u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 12));
    // 0x371d44: 0x101c3a  dsrl        $v1, $s0, 16
    ctx->pc = 0x371d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) >> 16);
    // 0x371d48: 0x88c03  sra         $s1, $t0, 16
    ctx->pc = 0x371d48u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 8), 16));
    // 0x371d4c: 0x9c403  sra         $t8, $t1, 16
    ctx->pc = 0x371d4cu;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 9), 16));
    // 0x371d50: 0xacc03  sra         $t9, $t2, 16
    ctx->pc = 0x371d50u;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 10), 16));
    // 0x371d54: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x371d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x371d58: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x371d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x371d5c: 0x2406004e  addiu       $a2, $zero, 0x4E
    ctx->pc = 0x371d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x371d60: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x371d60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x371d64: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x371d64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x371d68: 0x2409001a  addiu       $t1, $zero, 0x1A
    ctx->pc = 0x371d68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x371d6c: 0x240a0046  addiu       $t2, $zero, 0x46
    ctx->pc = 0x371d6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x371d70: 0x240c0045  addiu       $t4, $zero, 0x45
    ctx->pc = 0x371d70u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x371d74: 0x240d0047  addiu       $t5, $zero, 0x47
    ctx->pc = 0x371d74u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x371d78: 0x240e0044  addiu       $t6, $zero, 0x44
    ctx->pc = 0x371d78u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x371d7c: 0xfde40000  sd          $a0, 0x0($t7)
    ctx->pc = 0x371d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 4));
    // 0x371d80: 0xfdeb0008  sd          $t3, 0x8($t7)
    ctx->pc = 0x371d80u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 8), GPR_U64(ctx, 11));
    // 0x371d84: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x371d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x371d88: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x371d88u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x371d8c: 0xfde20018  sd          $v0, 0x18($t7)
    ctx->pc = 0x371d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 24), GPR_U64(ctx, 2));
    // 0x371d90: 0xfde60028  sd          $a2, 0x28($t7)
    ctx->pc = 0x371d90u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 40), GPR_U64(ctx, 6));
    // 0x371d94: 0xfde70038  sd          $a3, 0x38($t7)
    ctx->pc = 0x371d94u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 56), GPR_U64(ctx, 7));
    // 0x371d98: 0xfde80048  sd          $t0, 0x48($t7)
    ctx->pc = 0x371d98u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 72), GPR_U64(ctx, 8));
    // 0x371d9c: 0xfde90058  sd          $t1, 0x58($t7)
    ctx->pc = 0x371d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 88), GPR_U64(ctx, 9));
    // 0x371da0: 0xfdea0068  sd          $t2, 0x68($t7)
    ctx->pc = 0x371da0u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 104), GPR_U64(ctx, 10));
    // 0x371da4: 0xfdec0078  sd          $t4, 0x78($t7)
    ctx->pc = 0x371da4u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 120), GPR_U64(ctx, 12));
    // 0x371da8: 0xfded0088  sd          $t5, 0x88($t7)
    ctx->pc = 0x371da8u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 136), GPR_U64(ctx, 13));
    // 0x371dac: 0xfdee0098  sd          $t6, 0x98($t7)
    ctx->pc = 0x371dacu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 152), GPR_U64(ctx, 14));
    // 0x371db0: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x371DB0u;
    {
        const bool branch_taken_0x371db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x371DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371DB0u;
        // 0x371db4: 0xfde50010  sd          $a1, 0x10($t7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 15), 16), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371db0) {
            ctx->pc = 0x371E00u;
            goto label_371e00;
        }
    }
    ctx->pc = 0x371DB8u;
    // 0x371db8: 0x181c3c  dsll32      $v1, $t8, 16
    ctx->pc = 0x371db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) << (32 + 16));
    // 0x371dbc: 0x3324000f  andi        $a0, $t9, 0xF
    ctx->pc = 0x371dbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)15);
    // 0x371dc0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x371dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x371dc4: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x371dc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x371dc8: 0x3c05fff9  lui         $a1, 0xFFF9
    ctx->pc = 0x371dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65529 << 16));
    // 0x371dcc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x371dccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x371dd0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x371dd0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x371dd4: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x371dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x371dd8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x371dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x371ddc: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x371ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x371de0: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x371de0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x371de4: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x371de4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x371de8: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x371de8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x371dec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x371decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x371df0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x371df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x371df4: 0xfde30020  sd          $v1, 0x20($t7)
    ctx->pc = 0x371df4u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 32), GPR_U64(ctx, 3));
    // 0x371df8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x371DF8u;
    {
        const bool branch_taken_0x371df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371DF8u;
        // 0x371dfc: 0xfde20080  sd          $v0, 0x80($t7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 15), 128), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371df8) {
            ctx->pc = 0x371E18u;
            goto label_371e18;
        }
    }
    ctx->pc = 0x371E00u;
label_371e00:
    // 0x371e00: 0x181c3c  dsll32      $v1, $t8, 16
    ctx->pc = 0x371e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) << (32 + 16));
    // 0x371e04: 0x3322000f  andi        $v0, $t9, 0xF
    ctx->pc = 0x371e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)15);
    // 0x371e08: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x371e08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x371e0c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x371e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x371e10: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x371e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x371e14: 0xfde30020  sd          $v1, 0x20($t7)
    ctx->pc = 0x371e14u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 32), GPR_U64(ctx, 3));
label_371e18:
    // 0x371e18: 0xdde40050  ld          $a0, 0x50($t7)
    ctx->pc = 0x371e18u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 15), 80)));
    // 0x371e1c: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x371e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x371e20: 0xdde50060  ld          $a1, 0x60($t7)
    ctx->pc = 0x371e20u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 96)));
    // 0x371e24: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x371e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x371e28: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x371e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x371e2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x371e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x371e30: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x371e30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x371e34: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x371e34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x371e38: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x371e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x371e3c: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x371e3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x371e40: 0x3406e2ca  ori         $a2, $zero, 0xE2CA
    ctx->pc = 0x371e40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58058);
    // 0x371e44: 0x63478  dsll        $a2, $a2, 17
    ctx->pc = 0x371e44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 17);
    // 0x371e48: 0x34c690cd  ori         $a2, $a2, 0x90CD
    ctx->pc = 0x371e48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)37069);
    // 0x371e4c: 0x63538  dsll        $a2, $a2, 20
    ctx->pc = 0x371e4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 20);
    // 0x371e50: 0x34c69585  ori         $a2, $a2, 0x9585
    ctx->pc = 0x371e50u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)38277);
    // 0x371e54: 0x631b8  dsll        $a2, $a2, 6
    ctx->pc = 0x371e54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 6);
    // 0x371e58: 0x34c60030  ori         $a2, $a2, 0x30
    ctx->pc = 0x371e58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)48);
    // 0x371e5c: 0xfde30040  sd          $v1, 0x40($t7)
    ctx->pc = 0x371e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 64), GPR_U64(ctx, 3));
    // 0x371e60: 0xfde40050  sd          $a0, 0x50($t7)
    ctx->pc = 0x371e60u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 80), GPR_U64(ctx, 4));
    // 0x371e64: 0x32620002  andi        $v0, $s3, 0x2
    ctx->pc = 0x371e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
    // 0x371e68: 0xfde50060  sd          $a1, 0x60($t7)
    ctx->pc = 0x371e68u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 96), GPR_U64(ctx, 5));
    // 0x371e6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x371E6Cu;
    {
        const bool branch_taken_0x371e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x371E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371E6Cu;
        // 0x371e70: 0xfde60090  sd          $a2, 0x90($t7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 15), 144), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371e6c) {
            ctx->pc = 0x371E80u;
            goto label_371e80;
        }
    }
    ctx->pc = 0x371E74u;
    // 0x371e74: 0xdde20070  ld          $v0, 0x70($t7)
    ctx->pc = 0x371e74u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 15), 112)));
    // 0x371e78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x371E78u;
    {
        const bool branch_taken_0x371e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x371E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371E78u;
        // 0x371e7c: 0x471025  or          $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x371e78) {
            ctx->pc = 0x371E8Cu;
            goto label_371e8c;
        }
    }
    ctx->pc = 0x371E80u;
label_371e80:
    // 0x371e80: 0xdde20070  ld          $v0, 0x70($t7)
    ctx->pc = 0x371e80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 15), 112)));
    // 0x371e84: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x371e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x371e88: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x371e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_371e8c:
    // 0x371e8c: 0xfde20070  sd          $v0, 0x70($t7)
    ctx->pc = 0x371e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 112), GPR_U64(ctx, 2));
    // 0x371e90: 0xf  sync
    ctx->pc = 0x371e90u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x371e94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x371e94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x371e98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x371e98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x371e9c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x371e9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x371ea0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x371ea0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x371ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x371EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x371EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x371EA4u;
        // 0x371ea8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x371EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x371EACu;
    // 0x371eac: 0x0  nop
    ctx->pc = 0x371eacu;
    // NOP
    ctx->pc = 0x371eb0u;
}

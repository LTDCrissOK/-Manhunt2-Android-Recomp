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

// Function: sub_003B3E20
// Address: 0x3b3e20 - 0x3b41b0
void sub_003B3E20_0x3b3e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B3E20_0x3b3e20");
#endif

    switch (ctx->pc) {
        case 0x3b3f50u: goto label_3b3f50;
        default: break;
    }

    ctx->pc = 0x3b3e20u;

    // 0x3b3e20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b3e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b3e24: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x3b3e24u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3e28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b3e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b3e2c: 0x3c104d52  lui         $s0, 0x4D52
    ctx->pc = 0x3b3e2cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)19794 << 16));
    // 0x3b3e30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b3e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b3e34: 0x3c1100ff  lui         $s1, 0xFF
    ctx->pc = 0x3b3e34u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)255 << 16));
    // 0x3b3e38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b3e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3b3e3c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x3b3e3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3e40: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3b3e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3b3e44: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3b3e44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3e48: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3b3e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3b3e4c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3b3e4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3e50: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3b3e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3b3e54: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3b3e54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3e58: 0x36104f46  ori         $s0, $s0, 0x4F46
    ctx->pc = 0x3b3e58u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)20294);
    // 0x3b3e5c: 0x930f0000  lbu         $t7, 0x0($t8)
    ctx->pc = 0x3b3e5cu;
    SET_GPR_ZE32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b3e60: 0x930e0003  lbu         $t6, 0x3($t8)
    ctx->pc = 0x3b3e60u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x3b3e64: 0x930c0002  lbu         $t4, 0x2($t8)
    ctx->pc = 0x3b3e64u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x3b3e68: 0x930d0001  lbu         $t5, 0x1($t8)
    ctx->pc = 0x3b3e68u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x3b3e6c: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x3b3e6cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x3b3e70: 0x93050003  lbu         $a1, 0x3($t8)
    ctx->pc = 0x3b3e70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x3b3e74: 0xe7600  sll         $t6, $t6, 24
    ctx->pc = 0x3b3e74u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 14), 24));
    // 0x3b3e78: 0x93030002  lbu         $v1, 0x2($t8)
    ctx->pc = 0x3b3e78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x3b3e7c: 0xd6a00  sll         $t5, $t5, 8
    ctx->pc = 0x3b3e7cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 8));
    // 0x3b3e80: 0x93040001  lbu         $a0, 0x1($t8)
    ctx->pc = 0x3b3e80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x3b3e84: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x3b3e84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x3b3e88: 0x93020000  lbu         $v0, 0x0($t8)
    ctx->pc = 0x3b3e88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b3e8c: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x3b3e8cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x3b3e90: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x3b3e90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3b3e94: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x3b3e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3b3e98: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3b3e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3b3e9c: 0x93050002  lbu         $a1, 0x2($t8)
    ctx->pc = 0x3b3e9cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x3b3ea0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3b3ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b3ea4: 0x930b0003  lbu         $t3, 0x3($t8)
    ctx->pc = 0x3b3ea4u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x3b3ea8: 0x43c825  or          $t9, $v0, $v1
    ctx->pc = 0x3b3ea8u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3b3eac: 0x930a0001  lbu         $t2, 0x1($t8)
    ctx->pc = 0x3b3eacu;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x3b3eb0: 0x191a03  sra         $v1, $t9, 8
    ctx->pc = 0x3b3eb0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 25), 8));
    // 0x3b3eb4: 0x192602  srl         $a0, $t9, 24
    ctx->pc = 0x3b3eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 25), 24));
    // 0x3b3eb8: 0x191200  sll         $v0, $t9, 8
    ctx->pc = 0x3b3eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 8));
    // 0x3b3ebc: 0x93090000  lbu         $t1, 0x0($t8)
    ctx->pc = 0x3b3ebcu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b3ec0: 0xc6400  sll         $t4, $t4, 16
    ctx->pc = 0x3b3ec0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 16));
    // 0x3b3ec4: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x3b3ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x3b3ec8: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x3b3ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x3b3ecc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3b3eccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3ed0: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x3b3ed0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x3b3ed4: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x3b3ed4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3ed8: 0x18d6025  or          $t4, $t4, $t5
    ctx->pc = 0x3b3ed8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 13));
    // 0x3b3edc: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x3b3edcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3ee0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b3ee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3b3ee4: 0xb5e00  sll         $t3, $t3, 24
    ctx->pc = 0x3b3ee4u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 24));
    // 0x3b3ee8: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x3b3ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x3b3eec: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x3b3eecu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x3b3ef0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3b3ef0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3b3ef4: 0x191600  sll         $v0, $t9, 24
    ctx->pc = 0x3b3ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 24));
    // 0x3b3ef8: 0x12b4825  or          $t1, $t1, $t3
    ctx->pc = 0x3b3ef8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 11));
    // 0x3b3efc: 0xaa2825  or          $a1, $a1, $t2
    ctx->pc = 0x3b3efcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 10));
    // 0x3b3f00: 0x1ec7825  or          $t7, $t7, $t4
    ctx->pc = 0x3b3f00u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 12));
    // 0x3b3f04: 0x82c825  or          $t9, $a0, $v0
    ctx->pc = 0x3b3f04u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3b3f08: 0x1254825  or          $t1, $t1, $a1
    ctx->pc = 0x3b3f08u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
    // 0x3b3f0c: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x3b3f0cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x3b3f10: 0x15f0009e  bne         $t7, $s0, . + 4 + (0x9E << 2)
    ctx->pc = 0x3B3F10u;
    {
        const bool branch_taken_0x3b3f10 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 16));
        ctx->pc = 0x3B3F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3F10u;
        // 0x3b3f14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3f10) {
            ctx->pc = 0x3B418Cu;
            goto label_3b418c;
        }
    }
    ctx->pc = 0x3B3F18u;
    // 0x3b3f18: 0x3c024646  lui         $v0, 0x4646
    ctx->pc = 0x3b3f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17990 << 16));
    // 0x3b3f1c: 0x34424941  ori         $v0, $v0, 0x4941
    ctx->pc = 0x3b3f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18753);
    // 0x3b3f20: 0x51220003  beql        $t1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B3F20u;
    {
        const bool branch_taken_0x3b3f20 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b3f20) {
            ctx->pc = 0x3B3F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B3F20u;
            // 0x3b3f24: 0x3191021  addu        $v0, $t8, $t9 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B3F30u;
            goto label_3b3f30;
        }
    }
    ctx->pc = 0x3B3F28u;
    // 0x3b3f28: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x3B3F28u;
    {
        const bool branch_taken_0x3b3f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3F28u;
        // 0x3b3f2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3f28) {
            ctx->pc = 0x3B418Cu;
            goto label_3b418c;
        }
    }
    ctx->pc = 0x3B3F30u;
label_3b3f30:
    // 0x3b3f30: 0x244bfffc  addiu       $t3, $v0, -0x4
    ctx->pc = 0x3b3f30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x3b3f34: 0x30b182b  sltu        $v1, $t8, $t3
    ctx->pc = 0x3b3f34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x3b3f38: 0x10600094  beqz        $v1, . + 4 + (0x94 << 2)
    ctx->pc = 0x3B3F38u;
    {
        const bool branch_taken_0x3b3f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3F38u;
        // 0x3b3f3c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3f38) {
            ctx->pc = 0x3B418Cu;
            goto label_3b418c;
        }
    }
    ctx->pc = 0x3B3F40u;
    // 0x3b3f40: 0x3c0c00ff  lui         $t4, 0xFF
    ctx->pc = 0x3b3f40u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)255 << 16));
    // 0x3b3f44: 0x2410ff00  addiu       $s0, $zero, -0x100
    ctx->pc = 0x3b3f44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3b3f48: 0x93090000  lbu         $t1, 0x0($t8)
    ctx->pc = 0x3b3f48u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b3f4c: 0x0  nop
    ctx->pc = 0x3b3f4cu;
    // NOP
label_3b3f50:
    // 0x3b3f50: 0x3c0a444e  lui         $t2, 0x444E
    ctx->pc = 0x3b3f50u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17486 << 16));
    // 0x3b3f54: 0x93080003  lbu         $t0, 0x3($t8)
    ctx->pc = 0x3b3f54u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x3b3f58: 0x354a5353  ori         $t2, $t2, 0x5353
    ctx->pc = 0x3b3f58u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)21331);
    // 0x3b3f5c: 0x93060002  lbu         $a2, 0x2($t8)
    ctx->pc = 0x3b3f5cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x3b3f60: 0x93070001  lbu         $a3, 0x1($t8)
    ctx->pc = 0x3b3f60u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x3b3f64: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x3b3f64u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x3b3f68: 0x93050003  lbu         $a1, 0x3($t8)
    ctx->pc = 0x3b3f68u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x3b3f6c: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x3b3f6cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
    // 0x3b3f70: 0x93030002  lbu         $v1, 0x2($t8)
    ctx->pc = 0x3b3f70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x3b3f74: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x3b3f74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x3b3f78: 0x93040001  lbu         $a0, 0x1($t8)
    ctx->pc = 0x3b3f78u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x3b3f7c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x3b3f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x3b3f80: 0x93020000  lbu         $v0, 0x0($t8)
    ctx->pc = 0x3b3f80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b3f84: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x3b3f84u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x3b3f88: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x3b3f88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3b3f8c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x3b3f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3b3f90: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3b3f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b3f94: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3b3f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3b3f98: 0x43c825  or          $t9, $v0, $v1
    ctx->pc = 0x3b3f98u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3b3f9c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x3b3f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x3b3fa0: 0x191a03  sra         $v1, $t9, 8
    ctx->pc = 0x3b3fa0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 25), 8));
    // 0x3b3fa4: 0x192602  srl         $a0, $t9, 24
    ctx->pc = 0x3b3fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 25), 24));
    // 0x3b3fa8: 0x191200  sll         $v0, $t9, 8
    ctx->pc = 0x3b3fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 8));
    // 0x3b3fac: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x3b3facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x3b3fb0: 0x4c1024  and         $v0, $v0, $t4
    ctx->pc = 0x3b3fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 12));
    // 0x3b3fb4: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x3b3fb4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
    // 0x3b3fb8: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x3b3fb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x3b3fbc: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3b3fbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3b3fc0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3b3fc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3b3fc4: 0x191600  sll         $v0, $t9, 24
    ctx->pc = 0x3b3fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 25), 24));
    // 0x3b3fc8: 0x1267825  or          $t7, $t1, $a2
    ctx->pc = 0x3b3fc8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x3b3fcc: 0x11ea004c  beq         $t7, $t2, . + 4 + (0x4C << 2)
    ctx->pc = 0x3B3FCCu;
    {
        const bool branch_taken_0x3b3fcc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 10));
        ctx->pc = 0x3B3FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3FCCu;
        // 0x3b3fd0: 0x82c825  or          $t9, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 25, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3fcc) {
            ctx->pc = 0x3B4100u;
            goto label_3b4100;
        }
    }
    ctx->pc = 0x3B3FD4u;
    // 0x3b3fd4: 0x3c024d4d  lui         $v0, 0x4D4D
    ctx->pc = 0x3b3fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19789 << 16));
    // 0x3b3fd8: 0x34424f43  ori         $v0, $v0, 0x4F43
    ctx->pc = 0x3b3fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20291);
    // 0x3b3fdc: 0x15e20064  bne         $t7, $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x3B3FDCu;
    {
        const bool branch_taken_0x3b3fdc = (GPR_U64(ctx, 15) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B3FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3FDCu;
        // 0x3b3fe0: 0x27220001  addiu       $v0, $t9, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3fdc) {
            ctx->pc = 0x3B4170u;
            goto label_3b4170;
        }
    }
    ctx->pc = 0x3B3FE4u;
    // 0x3b3fe4: 0x15a00066  bnez        $t5, . + 4 + (0x66 << 2)
    ctx->pc = 0x3B3FE4u;
    {
        const bool branch_taken_0x3b3fe4 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B3FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3FE4u;
        // 0x3b3fe8: 0x30b102b  sltu        $v0, $t8, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3fe4) {
            ctx->pc = 0x3B4180u;
            goto label_3b4180;
        }
    }
    ctx->pc = 0x3B3FECu;
    // 0x3b3fec: 0x2b220012  slti        $v0, $t9, 0x12
    ctx->pc = 0x3b3fecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x3b3ff0: 0x14400066  bnez        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x3B3FF0u;
    {
        const bool branch_taken_0x3b3ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B3FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3FF0u;
        // 0x3b3ff4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3ff0) {
            ctx->pc = 0x3B418Cu;
            goto label_3b418c;
        }
    }
    ctx->pc = 0x3B3FF8u;
    // 0x3b3ff8: 0x93040001  lbu         $a0, 0x1($t8)
    ctx->pc = 0x3b3ff8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x3b3ffc: 0x2406400e  addiu       $a2, $zero, 0x400E
    ctx->pc = 0x3b3ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16398));
    // 0x3b4000: 0x93020000  lbu         $v0, 0x0($t8)
    ctx->pc = 0x3b4000u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b4004: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b4004u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b4008: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x3b4008u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3b400c: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x3b400cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b4010: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3b4010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3b4014: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x3b4014u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3b4018: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3b4018u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3b401c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x3b401cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x3b4020: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3b4020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3b4024: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x3b4024u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x3b4028: 0x93050003  lbu         $a1, 0x3($t8)
    ctx->pc = 0x3b4028u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x3b402c: 0x93020002  lbu         $v0, 0x2($t8)
    ctx->pc = 0x3b402cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x3b4030: 0x93040001  lbu         $a0, 0x1($t8)
    ctx->pc = 0x3b4030u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x3b4034: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x3b4034u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x3b4038: 0x93030000  lbu         $v1, 0x0($t8)
    ctx->pc = 0x3b4038u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b403c: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x3b403cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x3b4040: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x3b4040u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3b4044: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3b4044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3b4048: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3b4048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3b404c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3b404cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3b4050: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b4050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b4054: 0x32a03  sra         $a1, $v1, 8
    ctx->pc = 0x3b4054u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 8));
    // 0x3b4058: 0x32200  sll         $a0, $v1, 8
    ctx->pc = 0x3b4058u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3b405c: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x3b405cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x3b4060: 0x31602  srl         $v0, $v1, 24
    ctx->pc = 0x3b4060u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
    // 0x3b4064: 0x8c2024  and         $a0, $a0, $t4
    ctx->pc = 0x3b4064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 12));
    // 0x3b4068: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x3b4068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x3b406c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x3b406cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x3b4070: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3b4070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3b4074: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3b4074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3b4078: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3b4078u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x3b407c: 0x93040001  lbu         $a0, 0x1($t8)
    ctx->pc = 0x3b407cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x3b4080: 0x93020000  lbu         $v0, 0x0($t8)
    ctx->pc = 0x3b4080u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b4084: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b4084u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b4088: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x3b4088u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3b408c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3b408cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3b4090: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x3b4090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3b4094: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3b4094u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3b4098: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x3b4098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x3b409c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3b409cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3b40a0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3b40a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x3b40a4: 0x93050000  lbu         $a1, 0x0($t8)
    ctx->pc = 0x3b40a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b40a8: 0x93040001  lbu         $a0, 0x1($t8)
    ctx->pc = 0x3b40a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x3b40ac: 0x27180002  addiu       $t8, $t8, 0x2
    ctx->pc = 0x3b40acu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 2));
    // 0x3b40b0: 0x93030001  lbu         $v1, 0x1($t8)
    ctx->pc = 0x3b40b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x3b40b4: 0x93020000  lbu         $v0, 0x0($t8)
    ctx->pc = 0x3b40b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b40b8: 0x27180008  addiu       $t8, $t8, 0x8
    ctx->pc = 0x3b40b8u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x3b40bc: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3b40bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3b40c0: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x3b40c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3b40c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3b40c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3b40c8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x3b40c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3b40cc: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x3b40ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3b40d0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3b40d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3b40d4: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x3b40d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x3b40d8: 0x52a02  srl         $a1, $a1, 8
    ctx->pc = 0x3b40d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x3b40dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3b40dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3b40e0: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x3b40e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x3b40e4: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3b40e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3b40e8: 0xc21007  srav        $v0, $v0, $a2
    ctx->pc = 0x3b40e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x3b40ec: 0x11c00023  beqz        $t6, . + 4 + (0x23 << 2)
    ctx->pc = 0x3B40ECu;
    {
        const bool branch_taken_0x3b40ec = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B40F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B40ECu;
        // 0x3b40f0: 0xaea20000  sw          $v0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b40ec) {
            ctx->pc = 0x3B417Cu;
            goto label_3b417c;
        }
    }
    ctx->pc = 0x3B40F4u;
    // 0x3b40f4: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3B40F4u;
    {
        const bool branch_taken_0x3b40f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B40F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B40F4u;
        // 0x3b40f8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b40f4) {
            ctx->pc = 0x3B418Cu;
            goto label_3b418c;
        }
    }
    ctx->pc = 0x3B40FCu;
    // 0x3b40fc: 0x0  nop
    ctx->pc = 0x3b40fcu;
    // NOP
label_3b4100:
    // 0x3b4100: 0x15c0001f  bnez        $t6, . + 4 + (0x1F << 2)
    ctx->pc = 0x3B4100u;
    {
        const bool branch_taken_0x3b4100 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B4104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4100u;
        // 0x3b4104: 0x30b102b  sltu        $v0, $t8, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4100) {
            ctx->pc = 0x3B4180u;
            goto label_3b4180;
        }
    }
    ctx->pc = 0x3B4108u;
    // 0x3b4108: 0x93050003  lbu         $a1, 0x3($t8)
    ctx->pc = 0x3b4108u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 3)));
    // 0x3b410c: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x3b410cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b4110: 0x93020002  lbu         $v0, 0x2($t8)
    ctx->pc = 0x3b4110u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 2)));
    // 0x3b4114: 0x93040001  lbu         $a0, 0x1($t8)
    ctx->pc = 0x3b4114u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 1)));
    // 0x3b4118: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x3b4118u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x3b411c: 0x93030000  lbu         $v1, 0x0($t8)
    ctx->pc = 0x3b411cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x3b4120: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x3b4120u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
    // 0x3b4124: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x3b4124u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x3b4128: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3b4128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3b412c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3b412cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3b4130: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3b4130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3b4134: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3b4134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b4138: 0x22a02  srl         $a1, $v0, 8
    ctx->pc = 0x3b4138u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3b413c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x3b413cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3b4140: 0x21e02  srl         $v1, $v0, 24
    ctx->pc = 0x3b4140u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x3b4144: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3b4144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3b4148: 0x8c2024  and         $a0, $a0, $t4
    ctx->pc = 0x3b4148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 12));
    // 0x3b414c: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x3b414cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x3b4150: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b4150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3b4154: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x3b4154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x3b4158: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x3b4158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3b415c: 0x11a00007  beqz        $t5, . + 4 + (0x7 << 2)
    ctx->pc = 0x3B415Cu;
    {
        const bool branch_taken_0x3b415c = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B415Cu;
        // 0x3b4160: 0x3028821  addu        $s1, $t8, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b415c) {
            ctx->pc = 0x3B417Cu;
            goto label_3b417c;
        }
    }
    ctx->pc = 0x3B4164u;
    // 0x3b4164: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3B4164u;
    {
        const bool branch_taken_0x3b4164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4164u;
        // 0x3b4168: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4164) {
            ctx->pc = 0x3B418Cu;
            goto label_3b418c;
        }
    }
    ctx->pc = 0x3B416Cu;
    // 0x3b416c: 0x0  nop
    ctx->pc = 0x3b416cu;
    // NOP
label_3b4170:
    // 0x3b4170: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x3b4170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x3b4174: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3b4174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3b4178: 0x302c021  addu        $t8, $t8, $v0
    ctx->pc = 0x3b4178u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
label_3b417c:
    // 0x3b417c: 0x30b102b  sltu        $v0, $t8, $t3
    ctx->pc = 0x3b417cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
label_3b4180:
    // 0x3b4180: 0x5440ff73  bnel        $v0, $zero, . + 4 + (-0x8D << 2)
    ctx->pc = 0x3B4180u;
    {
        const bool branch_taken_0x3b4180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b4180) {
            ctx->pc = 0x3B4184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B4180u;
            // 0x3b4184: 0x93090000  lbu         $t1, 0x0($t8) (Delay Slot)
            SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 24), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B3F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b3f50;
        }
    }
    ctx->pc = 0x3B4188u;
    // 0x3b4188: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b4188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b418c:
    // 0x3b418c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b418cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b4190: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b4190u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b4194: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b4194u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b4198: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3b4198u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3b419c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3b419cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b41a0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3b41a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3b41a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B41A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B41A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B41A4u;
        // 0x3b41a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B41A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B41ACu;
    // 0x3b41ac: 0x0  nop
    ctx->pc = 0x3b41acu;
    // NOP
    ctx->pc = 0x3b41b0u;
}

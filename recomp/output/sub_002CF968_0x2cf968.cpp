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

// Function: sub_002CF968
// Address: 0x2cf968 - 0x2cfb10
void sub_002CF968_0x2cf968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CF968_0x2cf968");
#endif

    switch (ctx->pc) {
        case 0x2cf9e0u: goto label_2cf9e0;
        case 0x2cfa38u: goto label_2cfa38;
        case 0x2cfae4u: goto label_2cfae4;
        default: break;
    }

    ctx->pc = 0x2cf968u;

    // 0x2cf968: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cf968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cf96c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2cf96cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2cf970: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cf970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cf974: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x2cf974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x2cf978: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2cf978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2cf97c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2cf97cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2cf980: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2cf980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2cf984: 0x34632020  ori         $v1, $v1, 0x2020
    ctx->pc = 0x2cf984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8224);
    // 0x2cf988: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2cf988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2cf98c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2cf98cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf990: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cf990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cf994: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2cf994u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf998: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2cf998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2cf99c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2cf99cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf9a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cf9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cf9a4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2cf9a4u;
    SET_GPR_S32(ctx, 16, (int32_t)runtime->Load32(rdram, ctx, 0x1000B410u)); // MMIO: 0x1000b410
    // 0x2cf9a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2cf9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002020u)); // MMIO: 0x10002020
    // 0x2cf9ac: 0x8e510038  lw          $s1, 0x38($s2)
    ctx->pc = 0x2cf9acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x2cf9b0: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x2cf9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2cf9b4: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x2cf9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2cf9b8: 0x21402  srl         $v0, $v0, 16
    ctx->pc = 0x2cf9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x2cf9bc: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2cf9bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2cf9c0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2cf9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2cf9c4: 0x8e440040  lw          $a0, 0x40($s2)
    ctx->pc = 0x2cf9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2cf9c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cf9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cf9cc: 0x59ac0  sll         $s3, $a1, 11
    ctx->pc = 0x2cf9ccu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
    // 0x2cf9d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2cf9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2cf9d4: 0x3231007f  andi        $s1, $s1, 0x7F
    ctx->pc = 0x2cf9d4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)127);
    // 0x2cf9d8: 0xc0f2678  jal         func_3C99E0
    ctx->pc = 0x2CF9D8u;
    SET_GPR_U32(ctx, 31, 0x2CF9E0u);
    ctx->pc = 0x2CF9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF9D8u;
    // 0x2cf9dc: 0x2028023  subu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99E0u, 0x2CF9D8u, 0x2CF9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF9E0u;
label_2cf9e0:
    // 0x2cf9e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2cf9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cf9e4: 0x1188c3  sra         $s1, $s1, 3
    ctx->pc = 0x2cf9e4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 3));
    // 0x2cf9e8: 0xfea30008  sd          $v1, 0x8($s5)
    ctx->pc = 0x2cf9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 3));
    // 0x2cf9ec: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x2cf9ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2cf9f0: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x2cf9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x2cf9f4: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x2cf9f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x2cf9f8: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CF9F8u;
    {
        const bool branch_taken_0x2cf9f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf9f8) {
            ctx->pc = 0x2CF9FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF9F8u;
            // 0x2cf9fc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFA00u;
            goto label_2cfa00;
        }
    }
    ctx->pc = 0x2CFA00u;
label_2cfa00:
    // 0x2cfa00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cfa00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfa04: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2cfa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2cfa08: 0x8e480058  lw          $t0, 0x58($s2)
    ctx->pc = 0x2cfa08u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2cfa0c: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x2cfa0cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2cfa10: 0x213001b  divu        $zero, $s0, $s3
    ctx->pc = 0x2cfa10u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x2cfa14: 0x1810  mfhi        $v1
    ctx->pc = 0x2cfa14u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2cfa18: 0x19000030  blez        $t0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2CFA18u;
    {
        const bool branch_taken_0x2cfa18 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x2CFA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFA18u;
        // 0x2cfa1c: 0x8e44005c  lw          $a0, 0x5C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfa18) {
            ctx->pc = 0x2CFADCu;
            goto label_2cfadc;
        }
    }
    ctx->pc = 0x2CFA20u;
    // 0x2cfa20: 0x885023  subu        $t2, $a0, $t0
    ctx->pc = 0x2cfa20u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x2cfa24: 0x738021  addu        $s0, $v1, $s3
    ctx->pc = 0x2cfa24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x2cfa28: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2cfa28u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfa2c: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x2cfa2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2cfa30: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x2cfa30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cfa34: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x2cfa34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_2cfa38:
    // 0x2cfa38: 0x1431021  addu        $v0, $t2, $v1
    ctx->pc = 0x2cfa38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x2cfa3c: 0x506c0001  beql        $v1, $t4, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CFA3Cu;
    {
        const bool branch_taken_0x2cfa3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 12));
        if (branch_taken_0x2cfa3c) {
            ctx->pc = 0x2CFA40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFA3Cu;
            // 0x2cfa40: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFA44u;
            goto label_2cfa44;
        }
    }
    ctx->pc = 0x2CFA44u;
label_2cfa44:
    // 0x2cfa44: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x2cfa44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2cfa48: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x2cfa48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x2cfa4c: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2cfa4cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2cfa50: 0x2010  mfhi        $a0
    ctx->pc = 0x2cfa50u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2cfa54: 0x8b3018  mult        $a2, $a0, $t3
    ctx->pc = 0x2cfa54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2cfa58: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x2cfa58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2cfa5c: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2cfa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2cfa60: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x2cfa60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2cfa64: 0x2031823  subu        $v1, $s0, $v1
    ctx->pc = 0x2cfa64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2cfa68: 0x73001a  div         $zero, $v1, $s3
    ctx->pc = 0x2cfa68u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2cfa6c: 0x1010  mfhi        $v0
    ctx->pc = 0x2cfa6cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x2cfa70: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2cfa70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2cfa74: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2CFA74u;
    {
        const bool branch_taken_0x2cfa74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CFA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFA74u;
        // 0x2cfa78: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfa74) {
            ctx->pc = 0x2CFAC8u;
            goto label_2cfac8;
        }
    }
    ctx->pc = 0x2CFA7Cu;
    // 0x2cfa7c: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x2cfa7cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cfa80: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2cfa80u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cfa84: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x2cfa84u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
    // 0x2cfa88: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x2cfa88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x2cfa8c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2cfa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2cfa90: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x2cfa90u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2cfa94: 0xfea30008  sd          $v1, 0x8($s5)
    ctx->pc = 0x2cfa94u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 8), GPR_U64(ctx, 3));
    // 0x2cfa98: 0x8e420050  lw          $v0, 0x50($s2)
    ctx->pc = 0x2cfa98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x2cfa9c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2cfa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2cfaa0: 0xfc490000  sd          $t1, 0x0($v0)
    ctx->pc = 0x2cfaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 9));
    // 0x2cfaa4: 0x8e430050  lw          $v1, 0x50($s2)
    ctx->pc = 0x2cfaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x2cfaa8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2cfaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2cfaac: 0xfc690008  sd          $t1, 0x8($v1)
    ctx->pc = 0x2cfaacu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 9));
    // 0x2cfab0: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x2cfab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2cfab4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cfab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfab8: 0x28430002  slti        $v1, $v0, 0x2
    ctx->pc = 0x2cfab8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2cfabc: 0x283100a  movz        $v0, $s4, $v1
    ctx->pc = 0x2cfabcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 20));
    // 0x2cfac0: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x2cfac0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2cfac4: 0xae440058  sw          $a0, 0x58($s2)
    ctx->pc = 0x2cfac4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 4));
label_2cfac8:
    // 0x2cfac8: 0xe8102a  slt         $v0, $a3, $t0
    ctx->pc = 0x2cfac8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x2cfacc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CFACCu;
    {
        const bool branch_taken_0x2cfacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfacc) {
            ctx->pc = 0x2CFADCu;
            goto label_2cfadc;
        }
    }
    ctx->pc = 0x2CFAD4u;
    // 0x2cfad4: 0x5280ffd8  beql        $s4, $zero, . + 4 + (-0x28 << 2)
    ctx->pc = 0x2CFAD4u;
    {
        const bool branch_taken_0x2cfad4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cfad4) {
            ctx->pc = 0x2CFAD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CFAD4u;
            // 0x2cfad8: 0x8e430054  lw          $v1, 0x54($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CFA38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cfa38;
        }
    }
    ctx->pc = 0x2CFADCu;
label_2cfadc:
    // 0x2cfadc: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x2CFADCu;
    SET_GPR_U32(ctx, 31, 0x2CFAE4u);
    ctx->pc = 0x2CFAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFADCu;
    // 0x2cfae0: 0x8e440040  lw          $a0, 0x40($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x2CFADCu, 0x2CFAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFAE4u;
label_2cfae4:
    // 0x2cfae4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cfae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cfae8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cfae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cfaec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cfaecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cfaf0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cfaf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cfaf4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cfaf4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cfaf8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2cfaf8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cfafc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2cfafcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cfb00: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2cfb00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cfb04: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFB04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFB04u;
        // 0x2cfb08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFB04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFB0Cu;
    // 0x2cfb0c: 0x0  nop
    ctx->pc = 0x2cfb0cu;
    // NOP
    ctx->pc = 0x2cfb10u;
}

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

// Function: sub_0039B980
// Address: 0x39b980 - 0x39bab0
void sub_0039B980_0x39b980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039B980_0x39b980");
#endif

    switch (ctx->pc) {
        case 0x39b9c4u: goto label_39b9c4;
        case 0x39b9d0u: goto label_39b9d0;
        case 0x39b9dcu: goto label_39b9dc;
        case 0x39b9ecu: goto label_39b9ec;
        case 0x39ba24u: goto label_39ba24;
        case 0x39ba30u: goto label_39ba30;
        case 0x39ba3cu: goto label_39ba3c;
        default: break;
    }

    ctx->pc = 0x39b980u;

    // 0x39b980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39b980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39b984: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39b984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39b988: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x39b988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b98c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39b98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x39b990: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39b990u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b994: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x39b994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x39b998: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x39b998u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b99c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39b99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39b9a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39b9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x39b9a4: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x39b9a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x39b9a8: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x39b9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x39b9ac: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x39b9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x39b9b0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x39b9b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x39b9b4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x39B9B4u;
    {
        const bool branch_taken_0x39b9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B9B4u;
        // 0x39b9b8: 0x31e03  sra         $v1, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b9b4) {
            ctx->pc = 0x39BA10u;
            goto label_39ba10;
        }
    }
    ctx->pc = 0x39B9BCu;
    // 0x39b9bc: 0xc0e6452  jal         func_399148
    ctx->pc = 0x39B9BCu;
    SET_GPR_U32(ctx, 31, 0x39B9C4u);
    ctx->pc = 0x39B9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B9BCu;
    // 0x39b9c0: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399148u, 0x39B9BCu, 0x39B9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B9C4u;
label_39b9c4:
    // 0x39b9c4: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x39b9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x39b9c8: 0xc0e6436  jal         func_3990D8
    ctx->pc = 0x39B9C8u;
    SET_GPR_U32(ctx, 31, 0x39B9D0u);
    ctx->pc = 0x39B9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B9C8u;
    // 0x39b9cc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3990D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3990D8u, 0x39B9C8u, 0x39B9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B9D0u;
label_39b9d0:
    // 0x39b9d0: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x39b9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x39b9d4: 0xc0e5f2e  jal         func_397CB8
    ctx->pc = 0x39B9D4u;
    SET_GPR_U32(ctx, 31, 0x39B9DCu);
    ctx->pc = 0x39B9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B9D4u;
    // 0x39b9d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397CB8u, 0x39B9D4u, 0x39B9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B9DCu;
label_39b9dc:
    // 0x39b9dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39b9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b9e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39b9e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39b9e4: 0xc0e70ea  jal         func_39C3A8
    ctx->pc = 0x39B9E4u;
    SET_GPR_U32(ctx, 31, 0x39B9ECu);
    ctx->pc = 0x39B9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B9E4u;
    // 0x39b9e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C3A8u, 0x39B9E4u, 0x39B9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B9ECu;
label_39b9ec:
    // 0x39b9ec: 0x8e4300a8  lw          $v1, 0xA8($s2)
    ctx->pc = 0x39b9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
    // 0x39b9f0: 0x8e4400a4  lw          $a0, 0xA4($s2)
    ctx->pc = 0x39b9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x39b9f4: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x39b9f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x39b9f8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x39b9f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x39b9fc: 0x2308823  subu        $s1, $s1, $s0
    ctx->pc = 0x39b9fcu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x39ba00: 0x2248821  addu        $s1, $s1, $a0
    ctx->pc = 0x39ba00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x39ba04: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x39BA04u;
    {
        const bool branch_taken_0x39ba04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BA04u;
        // 0x39ba08: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ba04) {
            ctx->pc = 0x39BA78u;
            goto label_39ba78;
        }
    }
    ctx->pc = 0x39BA0Cu;
    // 0x39ba0c: 0x0  nop
    ctx->pc = 0x39ba0cu;
    // NOP
label_39ba10:
    // 0x39ba10: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x39ba10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x39ba14: 0x54620016  bnel        $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x39BA14u;
    {
        const bool branch_taken_0x39ba14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39ba14) {
            ctx->pc = 0x39BA18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39BA14u;
            // 0x39ba18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39BA70u;
            goto label_39ba70;
        }
    }
    ctx->pc = 0x39BA1Cu;
    // 0x39ba1c: 0xc0e646a  jal         func_3991A8
    ctx->pc = 0x39BA1Cu;
    SET_GPR_U32(ctx, 31, 0x39BA24u);
    ctx->pc = 0x39BA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BA1Cu;
    // 0x39ba20: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3991A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3991A8u, 0x39BA1Cu, 0x39BA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BA24u;
label_39ba24:
    // 0x39ba24: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x39ba24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x39ba28: 0xc0e6452  jal         func_399148
    ctx->pc = 0x39BA28u;
    SET_GPR_U32(ctx, 31, 0x39BA30u);
    ctx->pc = 0x39BA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BA28u;
    // 0x39ba2c: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399148u, 0x39BA28u, 0x39BA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BA30u;
label_39ba30:
    // 0x39ba30: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x39ba30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x39ba34: 0xc0e645e  jal         func_399178
    ctx->pc = 0x39BA34u;
    SET_GPR_U32(ctx, 31, 0x39BA3Cu);
    ctx->pc = 0x39BA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BA34u;
    // 0x39ba38: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399178u, 0x39BA34u, 0x39BA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BA3Cu;
label_39ba3c:
    // 0x39ba3c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x39ba3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x39ba40: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x39ba40u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x39ba44: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x39BA44u;
    {
        const bool branch_taken_0x39ba44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ba44) {
            ctx->pc = 0x39BA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39BA44u;
            // 0x39ba48: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39BA4Cu;
            goto label_39ba4c;
        }
    }
    ctx->pc = 0x39BA4Cu;
label_39ba4c:
    // 0x39ba4c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x39ba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x39ba50: 0x1812  mflo        $v1
    ctx->pc = 0x39ba50u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x39ba54: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x39ba54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x39ba58: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x39ba58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x39ba5c: 0x8e4300a4  lw          $v1, 0xA4($s2)
    ctx->pc = 0x39ba5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x39ba60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39ba60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39ba64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x39BA64u;
    {
        const bool branch_taken_0x39ba64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BA64u;
        // 0x39ba68: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39ba64) {
            ctx->pc = 0x39BA78u;
            goto label_39ba78;
        }
    }
    ctx->pc = 0x39BA6Cu;
    // 0x39ba6c: 0x0  nop
    ctx->pc = 0x39ba6cu;
    // NOP
label_39ba70:
    // 0x39ba70: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x39ba70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x39ba74: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x39ba74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_39ba78:
    // 0x39ba78: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x39ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x39ba7c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x39ba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x39ba80: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39ba80u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39ba84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39ba84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39ba88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39ba88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39ba8c: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x39ba8cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x39ba90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39ba90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39ba94: 0x4180b  movn        $v1, $zero, $a0
    ctx->pc = 0x39ba94u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x39ba98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39ba98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39ba9c: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x39ba9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x39baa0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x39baa0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39baa4: 0x3e00008  jr          $ra
    ctx->pc = 0x39BAA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39BAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BAA4u;
        // 0x39baa8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BAA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39BAACu;
    // 0x39baac: 0x0  nop
    ctx->pc = 0x39baacu;
    // NOP
    ctx->pc = 0x39bab0u;
}

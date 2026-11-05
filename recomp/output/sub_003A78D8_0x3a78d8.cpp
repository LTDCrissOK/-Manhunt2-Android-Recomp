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

// Function: sub_003A78D8
// Address: 0x3a78d8 - 0x3a79e0
void sub_003A78D8_0x3a78d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A78D8_0x3a78d8");
#endif

    switch (ctx->pc) {
        case 0x3a7988u: goto label_3a7988;
        case 0x3a79b8u: goto label_3a79b8;
        default: break;
    }

    ctx->pc = 0x3a78d8u;

    // 0x3a78d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3a78d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3a78dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a78dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a78e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a78e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a78e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a78e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a78e8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a78e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a78ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3a78ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3a78f0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3a78f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a78f4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3a78f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3a78f8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3a78f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a78fc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3a78fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3a7900: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a7900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a7904: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3a7904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3a7908: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x3a7908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x3a790c: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x3A790Cu;
    {
        const bool branch_taken_0x3a790c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A790Cu;
        // 0x3a7910: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a790c) {
            ctx->pc = 0x3A79B8u;
            goto label_3a79b8;
        }
    }
    ctx->pc = 0x3A7914u;
    // 0x3a7914: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x3a7914u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3a7918: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x3a7918u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a791c: 0x1451000a  bne         $v0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x3A791Cu;
    {
        const bool branch_taken_0x3a791c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x3A7920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A791Cu;
        // 0x3a7920: 0x92070003  lbu         $a3, 0x3($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a791c) {
            ctx->pc = 0x3A7948u;
            goto label_3a7948;
        }
    }
    ctx->pc = 0x3A7924u;
    // 0x3a7924: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x3a7924u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3a7928: 0x61140  sll         $v0, $a2, 5
    ctx->pc = 0x3a7928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x3a792c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3a792cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3a7930: 0x24420038  addiu       $v0, $v0, 0x38
    ctx->pc = 0x3a7930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x3a7934: 0x8c550014  lw          $s5, 0x14($v0)
    ctx->pc = 0x3a7934u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x3a7938: 0x8c540010  lw          $s4, 0x10($v0)
    ctx->pc = 0x3a7938u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3a793c: 0x8c530004  lw          $s3, 0x4($v0)
    ctx->pc = 0x3a793cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3a7940: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A7940u;
    {
        const bool branch_taken_0x3a7940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7940u;
        // 0x3a7944: 0x8c52000c  lw          $s2, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7940) {
            ctx->pc = 0x3A794Cu;
            goto label_3a794c;
        }
    }
    ctx->pc = 0x3A7948u;
label_3a7948:
    // 0x3a7948: 0x8e060020  lw          $a2, 0x20($s0)
    ctx->pc = 0x3a7948u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3a794c:
    // 0x3a794c: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x3a794cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3a7950: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x3a7950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x3a7954: 0x28850000  slti        $a1, $a0, 0x0
    ctx->pc = 0x3a7954u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3a7958: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3a7958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a795c: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x3a795cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x3a7960: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x3a7960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3a7964: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3a7964u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3a7968: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3a7968u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3a796c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3a796cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3a7970: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x3a7970u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3a7974: 0xae030024  sw          $v1, 0x24($s0)
    ctx->pc = 0x3a7974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
    // 0x3a7978: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A7978u;
    {
        const bool branch_taken_0x3a7978 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x3A797Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7978u;
        // 0x3a797c: 0xae040020  sw          $a0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7978) {
            ctx->pc = 0x3A7990u;
            goto label_3a7990;
        }
    }
    ctx->pc = 0x3A7980u;
    // 0x3a7980: 0xc0e9cfc  jal         func_3A73F0
    ctx->pc = 0x3A7980u;
    SET_GPR_U32(ctx, 31, 0x3A7988u);
    ctx->pc = 0x3A73F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A73F0u, 0x3A7980u, 0x3A7988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7988u;
label_3a7988:
    // 0x3a7988: 0xa2110001  sb          $s1, 0x1($s0)
    ctx->pc = 0x3a7988u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 17));
    // 0x3a798c: 0x92070003  lbu         $a3, 0x3($s0)
    ctx->pc = 0x3a798cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_3a7990:
    // 0x3a7990: 0x71600  sll         $v0, $a3, 24
    ctx->pc = 0x3a7990u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x3a7994: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3a7994u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x3a7998: 0x54510008  bnel        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A7998u;
    {
        const bool branch_taken_0x3a7998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x3a7998) {
            ctx->pc = 0x3A799Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7998u;
            // 0x3a799c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A79BCu;
            goto label_3a79bc;
        }
    }
    ctx->pc = 0x3A79A0u;
    // 0x3a79a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a79a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a79a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3a79a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a79a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3a79a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a79ac: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3a79acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a79b0: 0xc0e9b98  jal         func_3A6E60
    ctx->pc = 0x3A79B0u;
    SET_GPR_U32(ctx, 31, 0x3A79B8u);
    ctx->pc = 0x3A79B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A79B0u;
    // 0x3a79b4: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6E60u, 0x3A79B0u, 0x3A79B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A79B8u;
label_3a79b8:
    // 0x3a79b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a79b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a79bc:
    // 0x3a79bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a79bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a79c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a79c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a79c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a79c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a79c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3a79c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a79cc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3a79ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3a79d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3a79d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a79d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A79D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A79D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A79D4u;
        // 0x3a79d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A79D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A79DCu;
    // 0x3a79dc: 0x0  nop
    ctx->pc = 0x3a79dcu;
    // NOP
    ctx->pc = 0x3a79e0u;
}

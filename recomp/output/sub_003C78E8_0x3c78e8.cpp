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

// Function: sub_003C78E8
// Address: 0x3c78e8 - 0x3c7af0
void sub_003C78E8_0x3c78e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C78E8_0x3c78e8");
#endif

    switch (ctx->pc) {
        case 0x3c7950u: goto label_3c7950;
        case 0x3c7978u: goto label_3c7978;
        case 0x3c79b8u: goto label_3c79b8;
        case 0x3c79d8u: goto label_3c79d8;
        case 0x3c7a48u: goto label_3c7a48;
        case 0x3c7aa8u: goto label_3c7aa8;
        default: break;
    }

    ctx->pc = 0x3c78e8u;

    // 0x3c78e8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3c78e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3c78ec: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3c78ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3c78f0: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3c78f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3c78f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3c78f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c78f8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3c78f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3c78fc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3c78fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7900: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3c7900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3c7904: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3c7904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3c7908: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3c7908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3c790c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3c790cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x3c7910: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c7910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c7914: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3c7914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3c7918: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x3c7918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3c791c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x3c791cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3c7920: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3C7920u;
    {
        const bool branch_taken_0x3c7920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7920u;
        // 0x3c7924: 0x200c02d  daddu       $t8, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7920) {
            ctx->pc = 0x3C7930u;
            goto label_3c7930;
        }
    }
    ctx->pc = 0x3C7928u;
    // 0x3c7928: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x3c7928u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c792c: 0x300882d  daddu       $s1, $t8, $zero
    ctx->pc = 0x3c792cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_3c7930:
    // 0x3c7930: 0x8e150010  lw          $s5, 0x10($s0)
    ctx->pc = 0x3c7930u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3c7934: 0x8e330010  lw          $s3, 0x10($s1)
    ctx->pc = 0x3c7934u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3c7938: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x3c7938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3c793c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3c793cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3c7940: 0x2b39021  addu        $s2, $s5, $s3
    ctx->pc = 0x3c7940u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x3c7944: 0xb2282a  slt         $a1, $a1, $s2
    ctx->pc = 0x3c7944u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x3c7948: 0xc0f1d12  jal         func_3C7448
    ctx->pc = 0x3C7948u;
    SET_GPR_U32(ctx, 31, 0x3C7950u);
    ctx->pc = 0x3C794Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7948u;
    // 0x3c794c: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C7448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C7448u, 0x3C7948u, 0x3C7950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7950u;
label_3c7950:
    // 0x3c7950: 0x40c02d  daddu       $t8, $v0, $zero
    ctx->pc = 0x3c7950u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7954: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x3c7954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x3c7958: 0x270a0014  addiu       $t2, $t8, 0x14
    ctx->pc = 0x3c7958u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 24), 20));
    // 0x3c795c: 0x26190014  addiu       $t9, $s0, 0x14
    ctx->pc = 0x3c795cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x3c7960: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x3c7960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x3c7964: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x3c7964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3c7968: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C7968u;
    {
        const bool branch_taken_0x3c7968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7968u;
        // 0x3c796c: 0x26260014  addiu       $a2, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7968) {
            ctx->pc = 0x3C7990u;
            goto label_3c7990;
        }
    }
    ctx->pc = 0x3C7970u;
    // 0x3c7970: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x3c7970u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x3c7974: 0x0  nop
    ctx->pc = 0x3c7974u;
    // NOP
label_3c7978:
    // 0x3c7978: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x3c7978u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x3c797c: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x3c797cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3c7980: 0x0  nop
    ctx->pc = 0x3c7980u;
    // NOP
    // 0x3c7984: 0x0  nop
    ctx->pc = 0x3c7984u;
    // NOP
    // 0x3c7988: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3C7988u;
    {
        const bool branch_taken_0x3c7988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c7988) {
            ctx->pc = 0x3C798Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C7988u;
            // 0x3c798c: 0xad400000  sw          $zero, 0x0($t2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C7978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c7978;
        }
    }
    ctx->pc = 0x3C7990u;
label_3c7990:
    // 0x3c7990: 0xc0702d  daddu       $t6, $a2, $zero
    ctx->pc = 0x3c7990u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7994: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x3c7994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x3c7998: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x3c7998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x3c799c: 0x1c2a021  addu        $s4, $t6, $v0
    ctx->pc = 0x3c799cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x3c79a0: 0x270f0014  addiu       $t7, $t8, 0x14
    ctx->pc = 0x3c79a0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 24), 20));
    // 0x3c79a4: 0x3238021  addu        $s0, $t9, $v1
    ctx->pc = 0x3c79a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x3c79a8: 0x1e0b02d  daddu       $s6, $t7, $zero
    ctx->pc = 0x3c79a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c79ac: 0x1d4102b  sltu        $v0, $t6, $s4
    ctx->pc = 0x3c79acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x3c79b0: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x3C79B0u;
    {
        const bool branch_taken_0x3c79b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C79B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C79B0u;
        // 0x3c79b4: 0x12a880  sll         $s5, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c79b0) {
            ctx->pc = 0x3C7AA4u;
            goto label_3c7aa4;
        }
    }
    ctx->pc = 0x3C79B8u;
label_3c79b8:
    // 0x3c79b8: 0x95cc0000  lhu         $t4, 0x0($t6)
    ctx->pc = 0x3c79b8u;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x3c79bc: 0x25d30004  addiu       $s3, $t6, 0x4
    ctx->pc = 0x3c79bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x3c79c0: 0x1180001a  beqz        $t4, . + 4 + (0x1A << 2)
    ctx->pc = 0x3C79C0u;
    {
        const bool branch_taken_0x3c79c0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C79C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C79C0u;
        // 0x3c79c4: 0x25f10004  addiu       $s1, $t7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c79c0) {
            ctx->pc = 0x3C7A2Cu;
            goto label_3c7a2c;
        }
    }
    ctx->pc = 0x3C79C8u;
    // 0x3c79c8: 0x320502d  daddu       $t2, $t9, $zero
    ctx->pc = 0x3c79c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c79cc: 0x1e0402d  daddu       $t0, $t7, $zero
    ctx->pc = 0x3c79ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c79d0: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x3c79d0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c79d4: 0x0  nop
    ctx->pc = 0x3c79d4u;
    // NOP
label_3c79d8:
    // 0x3c79d8: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x3c79d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3c79dc: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x3c79dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3c79e0: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x3c79e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x3c79e4: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x3c79e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3c79e8: 0x150302b  sltu        $a2, $t2, $s0
    ctx->pc = 0x3c79e8u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3c79ec: 0x4c1018  mult        $v0, $v0, $t4
    ctx->pc = 0x3c79ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3c79f0: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x3c79f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x3c79f4: 0x6c1818  mult        $v1, $v1, $t4
    ctx->pc = 0x3c79f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3c79f8: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x3c79f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x3c79fc: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x3c79fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x3c7a00: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3c7a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3c7a04: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x3c7a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x3c7a08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3c7a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3c7a0c: 0x26c02  srl         $t5, $v0, 16
    ctx->pc = 0x3c7a0cu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x3c7a10: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x3c7a10u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c7a14: 0x6d2821  addu        $a1, $v1, $t5
    ctx->pc = 0x3c7a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x3c7a18: 0xa5050002  sh          $a1, 0x2($t0)
    ctx->pc = 0x3c7a18u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x3c7a1c: 0x56c02  srl         $t5, $a1, 16
    ctx->pc = 0x3c7a1cu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x3c7a20: 0x14c0ffed  bnez        $a2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x3C7A20u;
    {
        const bool branch_taken_0x3c7a20 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C7A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7A20u;
        // 0x3c7a24: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7a20) {
            ctx->pc = 0x3C79D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c79d8;
        }
    }
    ctx->pc = 0x3C7A28u;
    // 0x3c7a28: 0xad0d0000  sw          $t5, 0x0($t0)
    ctx->pc = 0x3c7a28u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 13));
label_3c7a2c:
    // 0x3c7a2c: 0x95cc0002  lhu         $t4, 0x2($t6)
    ctx->pc = 0x3c7a2cu;
    SET_GPR_ZE32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x3c7a30: 0x11800018  beqz        $t4, . + 4 + (0x18 << 2)
    ctx->pc = 0x3C7A30u;
    {
        const bool branch_taken_0x3c7a30 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7A30u;
        // 0x3c7a34: 0x1e0402d  daddu       $t0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7a30) {
            ctx->pc = 0x3C7A94u;
            goto label_3c7a94;
        }
    }
    ctx->pc = 0x3C7A38u;
    // 0x3c7a38: 0x320502d  daddu       $t2, $t9, $zero
    ctx->pc = 0x3c7a38u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7a3c: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x3c7a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3c7a40: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x3c7a40u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7a44: 0x0  nop
    ctx->pc = 0x3c7a44u;
    // NOP
label_3c7a48:
    // 0x3c7a48: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x3c7a48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3c7a4c: 0x95030002  lhu         $v1, 0x2($t0)
    ctx->pc = 0x3c7a4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x3c7a50: 0x4c1018  mult        $v0, $v0, $t4
    ctx->pc = 0x3c7a50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3c7a54: 0xa5050000  sh          $a1, 0x0($t0)
    ctx->pc = 0x3c7a54u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x3c7a58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c7a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c7a5c: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x3c7a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x3c7a60: 0xa5020002  sh          $v0, 0x2($t0)
    ctx->pc = 0x3c7a60u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x3c7a64: 0x26c02  srl         $t5, $v0, 16
    ctx->pc = 0x3c7a64u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x3c7a68: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3c7a68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x3c7a6c: 0x95420002  lhu         $v0, 0x2($t2)
    ctx->pc = 0x3c7a6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x3c7a70: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x3c7a70u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3c7a74: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x3c7a74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x3c7a78: 0x4c1018  mult        $v0, $v0, $t4
    ctx->pc = 0x3c7a78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3c7a7c: 0x150202b  sltu        $a0, $t2, $s0
    ctx->pc = 0x3c7a7cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3c7a80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3c7a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3c7a84: 0x4d2821  addu        $a1, $v0, $t5
    ctx->pc = 0x3c7a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x3c7a88: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x3C7A88u;
    {
        const bool branch_taken_0x3c7a88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C7A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7A88u;
        // 0x3c7a8c: 0x56c02  srl         $t5, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7a88) {
            ctx->pc = 0x3C7A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c7a48;
        }
    }
    ctx->pc = 0x3C7A90u;
    // 0x3c7a90: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x3c7a90u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
label_3c7a94:
    // 0x3c7a94: 0x260702d  daddu       $t6, $s3, $zero
    ctx->pc = 0x3c7a94u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7a98: 0x1d4102b  sltu        $v0, $t6, $s4
    ctx->pc = 0x3c7a98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x3c7a9c: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x3C7A9Cu;
    {
        const bool branch_taken_0x3c7a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C7AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7A9Cu;
        // 0x3c7aa0: 0x220782d  daddu       $t7, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7a9c) {
            ctx->pc = 0x3C79B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c79b8;
        }
    }
    ctx->pc = 0x3C7AA4u;
label_3c7aa4:
    // 0x3c7aa4: 0x2d54021  addu        $t0, $s6, $s5
    ctx->pc = 0x3c7aa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
label_3c7aa8:
    // 0x3c7aa8: 0x5a400006  blezl       $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C7AA8u;
    {
        const bool branch_taken_0x3c7aa8 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x3c7aa8) {
            ctx->pc = 0x3C7AACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C7AA8u;
            // 0x3c7aac: 0xaf120010  sw          $s2, 0x10($t8) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 24), 16), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C7AC4u;
            goto label_3c7ac4;
        }
    }
    ctx->pc = 0x3C7AB0u;
    // 0x3c7ab0: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x3c7ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x3c7ab4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3c7ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3c7ab8: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3C7AB8u;
    {
        const bool branch_taken_0x3c7ab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c7ab8) {
            ctx->pc = 0x3C7ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C7AB8u;
            // 0x3c7abc: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C7AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c7aa8;
        }
    }
    ctx->pc = 0x3C7AC0u;
    // 0x3c7ac0: 0xaf120010  sw          $s2, 0x10($t8)
    ctx->pc = 0x3c7ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 16), GPR_U32(ctx, 18));
label_3c7ac4:
    // 0x3c7ac4: 0x300102d  daddu       $v0, $t8, $zero
    ctx->pc = 0x3c7ac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7ac8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3c7ac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3c7acc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3c7accu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c7ad0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3c7ad0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c7ad4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3c7ad4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c7ad8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3c7ad8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c7adc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3c7adcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c7ae0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x3c7ae0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c7ae4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c7ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c7ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C7AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C7AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7AE8u;
        // 0x3c7aec: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C7AF0u;
}

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

// Function: sub_0039E5A0
// Address: 0x39e5a0 - 0x39e6f8
void sub_0039E5A0_0x39e5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039E5A0_0x39e5a0");
#endif

    switch (ctx->pc) {
        case 0x39e5f0u: goto label_39e5f0;
        case 0x39e618u: goto label_39e618;
        case 0x39e650u: goto label_39e650;
        case 0x39e664u: goto label_39e664;
        case 0x39e688u: goto label_39e688;
        case 0x39e6b0u: goto label_39e6b0;
        default: break;
    }

    ctx->pc = 0x39e5a0u;

    // 0x39e5a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x39e5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x39e5a4: 0x24e20007  addiu       $v0, $a3, 0x7
    ctx->pc = 0x39e5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 7));
    // 0x39e5a8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x39e5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x39e5ac: 0x2414fff8  addiu       $s4, $zero, -0x8
    ctx->pc = 0x39e5acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
    // 0x39e5b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39e5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39e5b4: 0x548024  and         $s0, $v0, $s4
    ctx->pc = 0x39e5b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x39e5b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39e5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x39e5bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x39e5bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e5c0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x39e5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x39e5c4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x39e5c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e5c8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x39e5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x39e5cc: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x39e5ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e5d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39e5d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e5d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39e5d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e5d8: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x39e5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x39e5dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39e5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39e5e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x39e5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x39e5e4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x39e5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x39e5e8: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x39E5E8u;
    SET_GPR_U32(ctx, 31, 0x39E5F0u);
    ctx->pc = 0x39E5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E5E8u;
    // 0x39e5ec: 0xe89821  addu        $s3, $a3, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x39E5E8u, 0x39E5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E5F0u;
label_39e5f0:
    // 0x39e5f0: 0x2603005b  addiu       $v1, $s0, 0x5B
    ctx->pc = 0x39e5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 91));
    // 0x39e5f4: 0x742024  and         $a0, $v1, $s4
    ctx->pc = 0x39e5f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x39e5f8: 0x24910034  addiu       $s1, $a0, 0x34
    ctx->pc = 0x39e5f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 52));
    // 0x39e5fc: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x39e5fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x39e600: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x39E600u;
    {
        const bool branch_taken_0x39e600 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E600u;
        // 0x39e604: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e600) {
            ctx->pc = 0x39E6CCu;
            goto label_39e6cc;
        }
    }
    ctx->pc = 0x39E608u;
    // 0x39e608: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x39e608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e60c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x39e60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e610: 0xc0ec498  jal         func_3B1260
    ctx->pc = 0x39E610u;
    SET_GPR_U32(ctx, 31, 0x39E618u);
    ctx->pc = 0x39E614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E610u;
    // 0x39e614: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1260u, 0x39E610u, 0x39E618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E618u;
label_39e618:
    // 0x39e618: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x39e618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e61c: 0x10a0002b  beqz        $a1, . + 4 + (0x2B << 2)
    ctx->pc = 0x39E61Cu;
    {
        const bool branch_taken_0x39e61c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E61Cu;
        // 0x39e620: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e61c) {
            ctx->pc = 0x39E6CCu;
            goto label_39e6cc;
        }
    }
    ctx->pc = 0x39E624u;
    // 0x39e624: 0x26230007  addiu       $v1, $s1, 0x7
    ctx->pc = 0x39e624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 7));
    // 0x39e628: 0x742024  and         $a0, $v1, $s4
    ctx->pc = 0x39e628u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x39e62c: 0x24821a4c  addiu       $v0, $a0, 0x1A4C
    ctx->pc = 0x39e62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 6732));
    // 0x39e630: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x39e630u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x39e634: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39E634u;
    {
        const bool branch_taken_0x39e634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39e634) {
            ctx->pc = 0x39E648u;
            goto label_39e648;
        }
    }
    ctx->pc = 0x39E63Cu;
    // 0x39e63c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x39E63Cu;
    {
        const bool branch_taken_0x39e63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E63Cu;
        // 0x39e640: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e63c) {
            ctx->pc = 0x39E65Cu;
            goto label_39e65c;
        }
    }
    ctx->pc = 0x39E644u;
    // 0x39e644: 0x0  nop
    ctx->pc = 0x39e644u;
    // NOP
label_39e648:
    // 0x39e648: 0xc0ec6ce  jal         func_3B1B38
    ctx->pc = 0x39E648u;
    SET_GPR_U32(ctx, 31, 0x39E650u);
    ctx->pc = 0x39E64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E648u;
    // 0x39e64c: 0x24051a4c  addiu       $a1, $zero, 0x1A4C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6732));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1B38u, 0x39E648u, 0x39E650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E650u;
label_39e650:
    // 0x39e650: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x39E650u;
    {
        const bool branch_taken_0x39e650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E650u;
        // 0x39e654: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e650) {
            ctx->pc = 0x39E670u;
            goto label_39e670;
        }
    }
    ctx->pc = 0x39E658u;
    // 0x39e658: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x39e658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_39e65c:
    // 0x39e65c: 0xc0ec4ca  jal         func_3B1328
    ctx->pc = 0x39E65Cu;
    SET_GPR_U32(ctx, 31, 0x39E664u);
    ctx->pc = 0x3B1328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1328u, 0x39E65Cu, 0x39E664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E664u;
label_39e664:
    // 0x39e664: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x39E664u;
    {
        const bool branch_taken_0x39e664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E664u;
        // 0x39e668: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e664) {
            ctx->pc = 0x39E6CCu;
            goto label_39e6cc;
        }
    }
    ctx->pc = 0x39E66Cu;
    // 0x39e66c: 0x0  nop
    ctx->pc = 0x39e66cu;
    // NOP
label_39e670:
    // 0x39e670: 0xae150010  sw          $s5, 0x10($s0)
    ctx->pc = 0x39e670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 21));
    // 0x39e674: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39e674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e678: 0x1a40000a  blez        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x39E678u;
    {
        const bool branch_taken_0x39e678 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x39E67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E678u;
        // 0x39e67c: 0xa212000a  sb          $s2, 0xA($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e678) {
            ctx->pc = 0x39E6A4u;
            goto label_39e6a4;
        }
    }
    ctx->pc = 0x39E680u;
    // 0x39e680: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x39e680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e684: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x39e684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_39e688:
    // 0x39e688: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x39e688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x39e68c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x39e68cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x39e690: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x39e690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x39e694: 0xb2102a  slt         $v0, $a1, $s2
    ctx->pc = 0x39e694u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x39e698: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x39e698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x39e69c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x39E69Cu;
    {
        const bool branch_taken_0x39e69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39E6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E69Cu;
        // 0x39e6a0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e69c) {
            ctx->pc = 0x39E688u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39e688;
        }
    }
    ctx->pc = 0x39E6A4u;
label_39e6a4:
    // 0x39e6a4: 0xa2000009  sb          $zero, 0x9($s0)
    ctx->pc = 0x39e6a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 0));
    // 0x39e6a8: 0xc0e7958  jal         func_39E560
    ctx->pc = 0x39E6A8u;
    SET_GPR_U32(ctx, 31, 0x39E6B0u);
    ctx->pc = 0x39E6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E6A8u;
    // 0x39e6ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E560u, 0x39E6A8u, 0x39E6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E6B0u;
label_39e6b0:
    // 0x39e6b0: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x39e6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x39e6b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39e6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39e6b8: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x39e6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x39e6bc: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x39e6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x39e6c0: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x39e6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x39e6c4: 0xa2020008  sb          $v0, 0x8($s0)
    ctx->pc = 0x39e6c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
    // 0x39e6c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39e6c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39e6cc:
    // 0x39e6cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39e6ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39e6d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39e6d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39e6d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39e6d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39e6d8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x39e6d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39e6dc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x39e6dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39e6e0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x39e6e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x39e6e4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x39e6e4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39e6e8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x39e6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x39e6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x39E6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39E6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E6ECu;
        // 0x39e6f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39E6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39E6F4u;
    // 0x39e6f4: 0x0  nop
    ctx->pc = 0x39e6f4u;
    // NOP
    ctx->pc = 0x39e6f8u;
}

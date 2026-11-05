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

// Function: sub_0035B780
// Address: 0x35b780 - 0x35baf8
void sub_0035B780_0x35b780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B780_0x35b780");
#endif

    switch (ctx->pc) {
        case 0x35b7d8u: goto label_35b7d8;
        case 0x35b808u: goto label_35b808;
        case 0x35b838u: goto label_35b838;
        case 0x35b890u: goto label_35b890;
        case 0x35b918u: goto label_35b918;
        case 0x35b938u: goto label_35b938;
        case 0x35b9c0u: goto label_35b9c0;
        case 0x35b9ecu: goto label_35b9ec;
        case 0x35ba18u: goto label_35ba18;
        case 0x35ba20u: goto label_35ba20;
        case 0x35baa0u: goto label_35baa0;
        case 0x35baa8u: goto label_35baa8;
        case 0x35baccu: goto label_35bacc;
        default: break;
    }

    ctx->pc = 0x35b780u;

    // 0x35b780: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x35b780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x35b784: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x35b784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x35b788: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x35b788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x35b78c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x35b78cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b790: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x35b790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b794: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x35b794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x35b798: 0x2442d4c0  addiu       $v0, $v0, -0x2B40
    ctx->pc = 0x35b798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956224));
    // 0x35b79c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x35b79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x35b7a0: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x35b7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x35b7a4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x35b7a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b7a8: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x35b7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x35b7ac: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x35b7acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35b7b0: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x35b7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x35b7b4: 0x27b40018  addiu       $s4, $sp, 0x18
    ctx->pc = 0x35b7b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x35b7b8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x35b7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x35b7bc: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x35b7bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35b7c0: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x35b7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x35b7c4: 0x3c16005c  lui         $s6, 0x5C
    ctx->pc = 0x35b7c4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)92 << 16));
    // 0x35b7c8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x35b7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x35b7cc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x35b7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x35b7d0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x35b7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x35b7d4: 0x0  nop
    ctx->pc = 0x35b7d4u;
    // NOP
label_35b7d8:
    // 0x35b7d8: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x35b7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x35b7dc: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x35b7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x35b7e0: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x35b7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x35b7e4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x35b7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x35b7e8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35b7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35b7ec: 0x14640032  bne         $v1, $a0, . + 4 + (0x32 << 2)
    ctx->pc = 0x35B7ECu;
    {
        const bool branch_taken_0x35b7ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x35B7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B7ECu;
        // 0x35b7f0: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b7ec) {
            ctx->pc = 0x35B8B8u;
            goto label_35b8b8;
        }
    }
    ctx->pc = 0x35B7F4u;
    // 0x35b7f4: 0x28430010  slti        $v1, $v0, 0x10
    ctx->pc = 0x35b7f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x35b7f8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x35B7F8u;
    {
        const bool branch_taken_0x35b7f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B7F8u;
        // 0x35b7fc: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b7f8) {
            ctx->pc = 0x35B7D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b7d8;
        }
    }
    ctx->pc = 0x35B800u;
    // 0x35b800: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x35B800u;
    {
        const bool branch_taken_0x35b800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B800u;
        // 0x35b804: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b800) {
            ctx->pc = 0x35B8BCu;
            goto label_35b8bc;
        }
    }
    ctx->pc = 0x35B808u;
label_35b808:
    // 0x35b808: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x35b808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b80c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x35b80cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x35b810: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x35b810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35b814: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x35b814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x35b818: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35b818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35b81c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x35b81cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x35b820: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35b820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35b824: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x35b824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35b828: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35B828u;
    {
        const bool branch_taken_0x35b828 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B828u;
        // 0x35b82c: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b828) {
            ctx->pc = 0x35B83Cu;
            goto label_35b83c;
        }
    }
    ctx->pc = 0x35B830u;
    // 0x35b830: 0xc0d6538  jal         func_3594E0
    ctx->pc = 0x35B830u;
    SET_GPR_U32(ctx, 31, 0x35B838u);
    ctx->pc = 0x35B834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B830u;
    // 0x35b834: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3594E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3594E0u, 0x35B830u, 0x35B838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B838u;
label_35b838:
    // 0x35b838: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x35b838u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_35b83c:
    // 0x35b83c: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x35b83cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b840: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x35b840u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x35b844: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x35b844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35b848: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x35b848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x35b84c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x35b84cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35b850: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x35b850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x35b854: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x35b854u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35b858: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x35b858u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x35b85c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x35b85cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x35b860: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x35b860u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x35b864: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x35B864u;
    {
        const bool branch_taken_0x35b864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B864u;
        // 0x35b868: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b864) {
            ctx->pc = 0x35B878u;
            goto label_35b878;
        }
    }
    ctx->pc = 0x35B86Cu;
    // 0x35b86c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x35b86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x35b870: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x35B870u;
    {
        const bool branch_taken_0x35b870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B870u;
        // 0x35b874: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b870) {
            ctx->pc = 0x35B8B8u;
            goto label_35b8b8;
        }
    }
    ctx->pc = 0x35B878u;
label_35b878:
    // 0x35b878: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x35b878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x35b87c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x35b87cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x35b880: 0x28430010  slti        $v1, $v0, 0x10
    ctx->pc = 0x35b880u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x35b884: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x35B884u;
    {
        const bool branch_taken_0x35b884 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B884u;
        // 0x35b888: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b884) {
            ctx->pc = 0x35B8B8u;
            goto label_35b8b8;
        }
    }
    ctx->pc = 0x35B88Cu;
    // 0x35b88c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x35b88cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_35b890:
    // 0x35b890: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x35b890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x35b894: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x35b894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x35b898: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x35b898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x35b89c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x35b89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x35b8a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35b8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35b8a4: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35B8A4u;
    {
        const bool branch_taken_0x35b8a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x35B8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B8A4u;
        // 0x35b8a8: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b8a4) {
            ctx->pc = 0x35B8B8u;
            goto label_35b8b8;
        }
    }
    ctx->pc = 0x35B8ACu;
    // 0x35b8ac: 0x28430010  slti        $v1, $v0, 0x10
    ctx->pc = 0x35b8acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x35b8b0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x35B8B0u;
    {
        const bool branch_taken_0x35b8b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x35B8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B8B0u;
        // 0x35b8b4: 0xace20004  sw          $v0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b8b0) {
            ctx->pc = 0x35B890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b890;
        }
    }
    ctx->pc = 0x35B8B8u;
label_35b8b8:
    // 0x35b8b8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x35b8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_35b8bc:
    // 0x35b8bc: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x35B8BCu;
    {
        const bool branch_taken_0x35b8bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B8BCu;
        // 0x35b8c0: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b8bc) {
            ctx->pc = 0x35B8F4u;
            goto label_35b8f4;
        }
    }
    ctx->pc = 0x35B8C4u;
    // 0x35b8c4: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x35b8c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x35b8c8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x35B8C8u;
    {
        const bool branch_taken_0x35b8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B8C8u;
        // 0x35b8cc: 0x31900  sll         $v1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b8c8) {
            ctx->pc = 0x35B8F4u;
            goto label_35b8f4;
        }
    }
    ctx->pc = 0x35B8D0u;
    // 0x35b8d0: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x35b8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35b8d4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35b8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35b8d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x35b8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35b8dc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35b8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35b8e0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x35b8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35b8e4: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x35b8e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x35b8e8: 0xa2282b  sltu        $a1, $a1, $v0
    ctx->pc = 0x35b8e8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35b8ec: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x35B8ECu;
    {
        const bool branch_taken_0x35b8ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x35B8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B8ECu;
        // 0x35b8f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b8ec) {
            ctx->pc = 0x35B8F8u;
            goto label_35b8f8;
        }
    }
    ctx->pc = 0x35B8F4u;
label_35b8f4:
    // 0x35b8f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35b8f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35b8f8:
    // 0x35b8f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35b8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35b8fc: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x35B8FCu;
    {
        const bool branch_taken_0x35b8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B8FCu;
        // 0x35b900: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b8fc) {
            ctx->pc = 0x35B808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b808;
        }
    }
    ctx->pc = 0x35B904u;
    // 0x35b904: 0x2612d4c0  addiu       $s2, $s0, -0x2B40
    ctx->pc = 0x35b904u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956224));
    // 0x35b908: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x35b908u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b90c: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x35b90cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b910: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x35b910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x35b914: 0x0  nop
    ctx->pc = 0x35b914u;
    // NOP
label_35b918:
    // 0x35b918: 0x24710001  addiu       $s1, $v1, 0x1
    ctx->pc = 0x35b918u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35b91c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x35b91cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b920: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x35b920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x35b924: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x35b924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35b928: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x35b928u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x35b92c: 0x10a60008  beq         $a1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x35B92Cu;
    {
        const bool branch_taken_0x35b92c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x35B930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B92Cu;
        // 0x35b930: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b92c) {
            ctx->pc = 0x35B950u;
            goto label_35b950;
        }
    }
    ctx->pc = 0x35B934u;
    // 0x35b934: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x35b934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_35b938:
    // 0x35b938: 0x0  nop
    ctx->pc = 0x35b938u;
    // NOP
    // 0x35b93c: 0x0  nop
    ctx->pc = 0x35b93cu;
    // NOP
    // 0x35b940: 0x0  nop
    ctx->pc = 0x35b940u;
    // NOP
    // 0x35b944: 0x0  nop
    ctx->pc = 0x35b944u;
    // NOP
    // 0x35b948: 0x1486fffb  bne         $a0, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x35B948u;
    {
        const bool branch_taken_0x35b948 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x35B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B948u;
        // 0x35b94c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b948) {
            ctx->pc = 0x35B938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b938;
        }
    }
    ctx->pc = 0x35B950u;
label_35b950:
    // 0x35b950: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x35b950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x35b954: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x35b954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x35b958: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x35b958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x35b95c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x35b95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x35b960: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x35b960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x35b964: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35b964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35b968: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x35b968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35b96c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x35b96cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b970: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x35b970u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x35b974: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x35b974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x35b978: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x35b978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x35b97c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x35b97cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x35b980: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x35b980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35b984: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x35b984u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x35b988: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x35b988u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x35b98c: 0x6862000f  ldl         $v0, 0xF($v1)
    ctx->pc = 0x35b98cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x35b990: 0x6c620008  ldr         $v0, 0x8($v1)
    ctx->pc = 0x35b990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x35b994: 0xb3a2001f  sdl         $v0, 0x1F($sp)
    ctx->pc = 0x35b994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35b998: 0xb7a20018  sdr         $v0, 0x18($sp)
    ctx->pc = 0x35b998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35b99c: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x35b99cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x35b9a0: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x35b9a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x35b9a4: 0xb062000f  sdl         $v0, 0xF($v1)
    ctx->pc = 0x35b9a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35b9a8: 0xb4620008  sdr         $v0, 0x8($v1)
    ctx->pc = 0x35b9a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35b9ac: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x35b9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x35b9b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x35b9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b9b4: 0x50430009  beql        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x35B9B4u;
    {
        const bool branch_taken_0x35b9b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x35b9b4) {
            ctx->pc = 0x35B9B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35B9B4u;
            // 0x35b9b8: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35B9DCu;
            goto label_35b9dc;
        }
    }
    ctx->pc = 0x35B9BCu;
    // 0x35b9bc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x35b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_35b9c0:
    // 0x35b9c0: 0x0  nop
    ctx->pc = 0x35b9c0u;
    // NOP
    // 0x35b9c4: 0x0  nop
    ctx->pc = 0x35b9c4u;
    // NOP
    // 0x35b9c8: 0x0  nop
    ctx->pc = 0x35b9c8u;
    // NOP
    // 0x35b9cc: 0x0  nop
    ctx->pc = 0x35b9ccu;
    // NOP
    // 0x35b9d0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x35B9D0u;
    {
        const bool branch_taken_0x35b9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x35B9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B9D0u;
        // 0x35b9d4: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b9d0) {
            ctx->pc = 0x35B9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b9c0;
        }
    }
    ctx->pc = 0x35B9D8u;
    // 0x35b9d8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x35b9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_35b9dc:
    // 0x35b9dc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35B9DCu;
    {
        const bool branch_taken_0x35b9dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B9DCu;
        // 0x35b9e0: 0x220182d  daddu       $v1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b9dc) {
            ctx->pc = 0x35B9F0u;
            goto label_35b9f0;
        }
    }
    ctx->pc = 0x35B9E4u;
    // 0x35b9e4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x35B9E4u;
    SET_GPR_U32(ctx, 31, 0x35B9ECu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x35B9E4u, 0x35B9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B9ECu;
label_35b9ec:
    // 0x35b9ec: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x35b9ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35b9f0:
    // 0x35b9f0: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x35b9f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x35b9f4: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x35B9F4u;
    {
        const bool branch_taken_0x35b9f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35B9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B9F4u;
        // 0x35b9f8: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b9f4) {
            ctx->pc = 0x35B918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b918;
        }
    }
    ctx->pc = 0x35B9FCu;
    // 0x35b9fc: 0x8ed2d5c0  lw          $s2, -0x2A40($s6)
    ctx->pc = 0x35b9fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294956480)));
    // 0x35ba00: 0x26d3d5c0  addiu       $s3, $s6, -0x2A40
    ctx->pc = 0x35ba00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), 4294956480));
    // 0x35ba04: 0x8e710004  lw          $s1, 0x4($s3)
    ctx->pc = 0x35ba04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x35ba08: 0x12510009  beq         $s2, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x35BA08u;
    {
        const bool branch_taken_0x35ba08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 17));
        ctx->pc = 0x35BA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BA08u;
        // 0x35ba0c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ba08) {
            ctx->pc = 0x35BA30u;
            goto label_35ba30;
        }
    }
    ctx->pc = 0x35BA10u;
    // 0x35ba10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35ba10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ba14: 0x0  nop
    ctx->pc = 0x35ba14u;
    // NOP
label_35ba18:
    // 0x35ba18: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x35BA18u;
    SET_GPR_U32(ctx, 31, 0x35BA20u);
    ctx->pc = 0x35BA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BA18u;
    // 0x35ba1c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x35BA18u, 0x35BA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BA20u;
label_35ba20:
    // 0x35ba20: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x35ba20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x35ba24: 0x0  nop
    ctx->pc = 0x35ba24u;
    // NOP
    // 0x35ba28: 0x1611fffb  bne         $s0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x35BA28u;
    {
        const bool branch_taken_0x35ba28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x35BA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BA28u;
        // 0x35ba2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ba28) {
            ctx->pc = 0x35BA18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ba18;
        }
    }
    ctx->pc = 0x35BA30u;
label_35ba30:
    // 0x35ba30: 0xae720004  sw          $s2, 0x4($s3)
    ctx->pc = 0x35ba30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
    // 0x35ba34: 0x26c3d5c0  addiu       $v1, $s6, -0x2A40
    ctx->pc = 0x35ba34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294956480));
    // 0x35ba38: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x35ba38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x35ba3c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x35ba3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x35ba40: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x35ba40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x35ba44: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x35ba44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35ba48: 0x8ec2d5c0  lw          $v0, -0x2A40($s6)
    ctx->pc = 0x35ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294956480)));
    // 0x35ba4c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x35ba4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ba50: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x35ba50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x35ba54: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x35ba54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x35ba58: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x35ba58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x35ba5c: 0xaec5d5c0  sw          $a1, -0x2A40($s6)
    ctx->pc = 0x35ba5cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294956480), GPR_U32(ctx, 5));
    // 0x35ba60: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x35ba60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x35ba64: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x35ba64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x35ba68: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x35ba68u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x35ba6c: 0x6862000f  ldl         $v0, 0xF($v1)
    ctx->pc = 0x35ba6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x35ba70: 0x6c620008  ldr         $v0, 0x8($v1)
    ctx->pc = 0x35ba70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x35ba74: 0xb3a2001f  sdl         $v0, 0x1F($sp)
    ctx->pc = 0x35ba74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35ba78: 0xb7a20018  sdr         $v0, 0x18($sp)
    ctx->pc = 0x35ba78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35ba7c: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x35ba7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x35ba80: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x35ba80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x35ba84: 0xb062000f  sdl         $v0, 0xF($v1)
    ctx->pc = 0x35ba84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35ba88: 0xb4620008  sdr         $v0, 0x8($v1)
    ctx->pc = 0x35ba88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35ba8c: 0x8fb10014  lw          $s1, 0x14($sp)
    ctx->pc = 0x35ba8cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x35ba90: 0x8fb00010  lw          $s0, 0x10($sp)
    ctx->pc = 0x35ba90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35ba94: 0x12110009  beq         $s0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x35BA94u;
    {
        const bool branch_taken_0x35ba94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x35BA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BA94u;
        // 0x35ba98: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ba94) {
            ctx->pc = 0x35BABCu;
            goto label_35babc;
        }
    }
    ctx->pc = 0x35BA9Cu;
    // 0x35ba9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35ba9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35baa0:
    // 0x35baa0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x35BAA0u;
    SET_GPR_U32(ctx, 31, 0x35BAA8u);
    ctx->pc = 0x35BAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35BAA0u;
    // 0x35baa4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x35BAA0u, 0x35BAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BAA8u;
label_35baa8:
    // 0x35baa8: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x35baa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
    // 0x35baac: 0x0  nop
    ctx->pc = 0x35baacu;
    // NOP
    // 0x35bab0: 0x1611fffb  bne         $s0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x35BAB0u;
    {
        const bool branch_taken_0x35bab0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x35BAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BAB0u;
        // 0x35bab4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bab0) {
            ctx->pc = 0x35BAA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35baa0;
        }
    }
    ctx->pc = 0x35BAB8u;
    // 0x35bab8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x35bab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_35babc:
    // 0x35babc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x35BABCu;
    {
        const bool branch_taken_0x35babc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BABCu;
        // 0x35bac0: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35babc) {
            ctx->pc = 0x35BAD0u;
            goto label_35bad0;
        }
    }
    ctx->pc = 0x35BAC4u;
    // 0x35bac4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x35BAC4u;
    SET_GPR_U32(ctx, 31, 0x35BACCu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x35BAC4u, 0x35BACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35BACCu;
label_35bacc:
    // 0x35bacc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x35baccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_35bad0:
    // 0x35bad0: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x35bad0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35bad4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x35bad4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35bad8: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x35bad8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x35badc: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x35badcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35bae0: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x35bae0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x35bae4: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x35bae4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x35bae8: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x35bae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x35baec: 0x3e00008  jr          $ra
    ctx->pc = 0x35BAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BAECu;
        // 0x35baf0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35BAF4u;
    // 0x35baf4: 0x0  nop
    ctx->pc = 0x35baf4u;
    // NOP
    ctx->pc = 0x35baf8u;
}

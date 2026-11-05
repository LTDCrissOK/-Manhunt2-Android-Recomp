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

// Function: sub_0035B460
// Address: 0x35b460 - 0x35b5c0
void sub_0035B460_0x35b460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B460_0x35b460");
#endif

    switch (ctx->pc) {
        case 0x35b488u: goto label_35b488;
        case 0x35b4b8u: goto label_35b4b8;
        case 0x35b4ecu: goto label_35b4ec;
        case 0x35b540u: goto label_35b540;
        default: break;
    }

    ctx->pc = 0x35b460u;

    // 0x35b460: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x35b460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x35b464: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35b464u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35b468: 0x2442d4c0  addiu       $v0, $v0, -0x2B40
    ctx->pc = 0x35b468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956224));
    // 0x35b46c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35b46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35b470: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x35b470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x35b474: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x35b474u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b478: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x35b478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x35b47c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x35b47cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b480: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x35b480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x35b484: 0x0  nop
    ctx->pc = 0x35b484u;
    // NOP
label_35b488:
    // 0x35b488: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x35b488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x35b48c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x35b48cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35b490: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x35b490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35b494: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x35b494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x35b498: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x35b498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35b49c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35b49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35b4a0: 0x14440031  bne         $v0, $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x35B4A0u;
    {
        const bool branch_taken_0x35b4a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x35B4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B4A0u;
        // 0x35b4a4: 0x28a60010  slti        $a2, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b4a0) {
            ctx->pc = 0x35B568u;
            goto label_35b568;
        }
    }
    ctx->pc = 0x35B4A8u;
    // 0x35b4a8: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x35B4A8u;
    {
        const bool branch_taken_0x35b4a8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x35B4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B4A8u;
        // 0x35b4ac: 0xace50004  sw          $a1, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b4a8) {
            ctx->pc = 0x35B488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b488;
        }
    }
    ctx->pc = 0x35B4B0u;
    // 0x35b4b0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x35B4B0u;
    {
        const bool branch_taken_0x35b4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B4B0u;
        // 0x35b4b4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b4b0) {
            ctx->pc = 0x35B56Cu;
            goto label_35b56c;
        }
    }
    ctx->pc = 0x35B4B8u;
label_35b4b8:
    // 0x35b4b8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x35b4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b4bc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x35b4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x35b4c0: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x35b4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35b4c4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x35b4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x35b4c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35b4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35b4cc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x35b4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x35b4d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35b4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35b4d4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x35b4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35b4d8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x35b4d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35b4dc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x35B4DCu;
    {
        const bool branch_taken_0x35b4dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B4DCu;
        // 0x35b4e0: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b4dc) {
            ctx->pc = 0x35B4F0u;
            goto label_35b4f0;
        }
    }
    ctx->pc = 0x35B4E4u;
    // 0x35b4e4: 0xc0d67ee  jal         func_359FB8
    ctx->pc = 0x35B4E4u;
    SET_GPR_U32(ctx, 31, 0x35B4ECu);
    ctx->pc = 0x359FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359FB8u, 0x35B4E4u, 0x35B4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B4ECu;
label_35b4ec:
    // 0x35b4ec: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x35b4ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_35b4f0:
    // 0x35b4f0: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x35b4f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b4f4: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x35b4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x35b4f8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x35b4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35b4fc: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x35b4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x35b500: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x35b500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35b504: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x35b504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x35b508: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x35b508u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35b50c: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x35b50cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x35b510: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x35b510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x35b514: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x35b514u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x35b518: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x35B518u;
    {
        const bool branch_taken_0x35b518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B518u;
        // 0x35b51c: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b518) {
            ctx->pc = 0x35B52Cu;
            goto label_35b52c;
        }
    }
    ctx->pc = 0x35B520u;
    // 0x35b520: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x35b520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x35b524: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x35B524u;
    {
        const bool branch_taken_0x35b524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B524u;
        // 0x35b528: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b524) {
            ctx->pc = 0x35B568u;
            goto label_35b568;
        }
    }
    ctx->pc = 0x35B52Cu;
label_35b52c:
    // 0x35b52c: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x35b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x35b530: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x35b530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x35b534: 0x28430010  slti        $v1, $v0, 0x10
    ctx->pc = 0x35b534u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x35b538: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x35B538u;
    {
        const bool branch_taken_0x35b538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B538u;
        // 0x35b53c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b538) {
            ctx->pc = 0x35B568u;
            goto label_35b568;
        }
    }
    ctx->pc = 0x35B540u;
label_35b540:
    // 0x35b540: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x35b540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x35b544: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x35b544u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35b548: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x35b548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35b54c: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x35b54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x35b550: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x35b550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35b554: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35b554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35b558: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35B558u;
    {
        const bool branch_taken_0x35b558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x35B55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B558u;
        // 0x35b55c: 0x28a60010  slti        $a2, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b558) {
            ctx->pc = 0x35B568u;
            goto label_35b568;
        }
    }
    ctx->pc = 0x35B560u;
    // 0x35b560: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x35B560u;
    {
        const bool branch_taken_0x35b560 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x35B564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B560u;
        // 0x35b564: 0xad050004  sw          $a1, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b560) {
            ctx->pc = 0x35B540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b540;
        }
    }
    ctx->pc = 0x35B568u;
label_35b568:
    // 0x35b568: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x35b568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_35b56c:
    // 0x35b56c: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x35B56Cu;
    {
        const bool branch_taken_0x35b56c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B56Cu;
        // 0x35b570: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b56c) {
            ctx->pc = 0x35B5A4u;
            goto label_35b5a4;
        }
    }
    ctx->pc = 0x35B574u;
    // 0x35b574: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x35b574u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x35b578: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x35B578u;
    {
        const bool branch_taken_0x35b578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B578u;
        // 0x35b57c: 0x31900  sll         $v1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b578) {
            ctx->pc = 0x35B5A4u;
            goto label_35b5a4;
        }
    }
    ctx->pc = 0x35B580u;
    // 0x35b580: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x35b580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35b584: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35b584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35b588: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x35b588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35b58c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35b58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35b590: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x35b590u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35b594: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x35b594u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x35b598: 0xa2282b  sltu        $a1, $a1, $v0
    ctx->pc = 0x35b598u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35b59c: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x35B59Cu;
    {
        const bool branch_taken_0x35b59c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x35B5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B59Cu;
        // 0x35b5a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b59c) {
            ctx->pc = 0x35B5A8u;
            goto label_35b5a8;
        }
    }
    ctx->pc = 0x35B5A4u;
label_35b5a4:
    // 0x35b5a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35b5a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35b5a8:
    // 0x35b5a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35b5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35b5ac: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x35B5ACu;
    {
        const bool branch_taken_0x35b5ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35B5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B5ACu;
        // 0x35b5b0: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b5ac) {
            ctx->pc = 0x35B4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b4b8;
        }
    }
    ctx->pc = 0x35B5B4u;
    // 0x35b5b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35b5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b5b8: 0x3e00008  jr          $ra
    ctx->pc = 0x35B5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B5B8u;
        // 0x35b5bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B5B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B5C0u;
}

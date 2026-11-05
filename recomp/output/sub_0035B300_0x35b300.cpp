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

// Function: sub_0035B300
// Address: 0x35b300 - 0x35b460
void sub_0035B300_0x35b300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035B300_0x35b300");
#endif

    switch (ctx->pc) {
        case 0x35b328u: goto label_35b328;
        case 0x35b358u: goto label_35b358;
        case 0x35b38cu: goto label_35b38c;
        case 0x35b3e0u: goto label_35b3e0;
        default: break;
    }

    ctx->pc = 0x35b300u;

    // 0x35b300: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x35b300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x35b304: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35b304u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35b308: 0x2442d4c0  addiu       $v0, $v0, -0x2B40
    ctx->pc = 0x35b308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956224));
    // 0x35b30c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35b30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35b310: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x35b310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x35b314: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x35b314u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b318: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x35b318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x35b31c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x35b31cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b320: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x35b320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x35b324: 0x0  nop
    ctx->pc = 0x35b324u;
    // NOP
label_35b328:
    // 0x35b328: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x35b328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x35b32c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x35b32cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35b330: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x35b330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35b334: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x35b334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x35b338: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x35b338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35b33c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35b33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35b340: 0x14440031  bne         $v0, $a0, . + 4 + (0x31 << 2)
    ctx->pc = 0x35B340u;
    {
        const bool branch_taken_0x35b340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x35B344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B340u;
        // 0x35b344: 0x28a60010  slti        $a2, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b340) {
            ctx->pc = 0x35B408u;
            goto label_35b408;
        }
    }
    ctx->pc = 0x35B348u;
    // 0x35b348: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x35B348u;
    {
        const bool branch_taken_0x35b348 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x35B34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B348u;
        // 0x35b34c: 0xace50004  sw          $a1, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b348) {
            ctx->pc = 0x35B328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b328;
        }
    }
    ctx->pc = 0x35B350u;
    // 0x35b350: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x35B350u;
    {
        const bool branch_taken_0x35b350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B350u;
        // 0x35b354: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b350) {
            ctx->pc = 0x35B40Cu;
            goto label_35b40c;
        }
    }
    ctx->pc = 0x35B358u;
label_35b358:
    // 0x35b358: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x35b358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b35c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x35b35cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x35b360: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x35b360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35b364: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x35b364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x35b368: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35b368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35b36c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x35b36cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x35b370: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x35b370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35b374: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x35b374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35b378: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x35b378u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35b37c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x35B37Cu;
    {
        const bool branch_taken_0x35b37c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B37Cu;
        // 0x35b380: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b37c) {
            ctx->pc = 0x35B390u;
            goto label_35b390;
        }
    }
    ctx->pc = 0x35B384u;
    // 0x35b384: 0xc0d65b8  jal         func_3596E0
    ctx->pc = 0x35B384u;
    SET_GPR_U32(ctx, 31, 0x35B38Cu);
    ctx->pc = 0x3596E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3596E0u, 0x35B384u, 0x35B38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35B38Cu;
label_35b38c:
    // 0x35b38c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x35b38cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_35b390:
    // 0x35b390: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x35b390u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b394: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x35b394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x35b398: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x35b398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35b39c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x35b39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x35b3a0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x35b3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35b3a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x35b3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x35b3a8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x35b3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35b3ac: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x35b3acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x35b3b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x35b3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x35b3b4: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x35b3b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x35b3b8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x35B3B8u;
    {
        const bool branch_taken_0x35b3b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B3B8u;
        // 0x35b3bc: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b3b8) {
            ctx->pc = 0x35B3CCu;
            goto label_35b3cc;
        }
    }
    ctx->pc = 0x35B3C0u;
    // 0x35b3c0: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x35b3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x35b3c4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x35B3C4u;
    {
        const bool branch_taken_0x35b3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B3C4u;
        // 0x35b3c8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b3c4) {
            ctx->pc = 0x35B408u;
            goto label_35b408;
        }
    }
    ctx->pc = 0x35B3CCu;
label_35b3cc:
    // 0x35b3cc: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x35b3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x35b3d0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x35b3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x35b3d4: 0x28430010  slti        $v1, $v0, 0x10
    ctx->pc = 0x35b3d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x35b3d8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x35B3D8u;
    {
        const bool branch_taken_0x35b3d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B3D8u;
        // 0x35b3dc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b3d8) {
            ctx->pc = 0x35B408u;
            goto label_35b408;
        }
    }
    ctx->pc = 0x35B3E0u;
label_35b3e0:
    // 0x35b3e0: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x35b3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x35b3e4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x35b3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35b3e8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x35b3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x35b3ec: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x35b3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x35b3f0: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x35b3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35b3f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35b3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35b3f8: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35B3F8u;
    {
        const bool branch_taken_0x35b3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x35B3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B3F8u;
        // 0x35b3fc: 0x28a60010  slti        $a2, $a1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b3f8) {
            ctx->pc = 0x35B408u;
            goto label_35b408;
        }
    }
    ctx->pc = 0x35B400u;
    // 0x35b400: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x35B400u;
    {
        const bool branch_taken_0x35b400 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x35B404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B400u;
        // 0x35b404: 0xad050004  sw          $a1, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b400) {
            ctx->pc = 0x35B3E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b3e0;
        }
    }
    ctx->pc = 0x35B408u;
label_35b408:
    // 0x35b408: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x35b408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_35b40c:
    // 0x35b40c: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x35B40Cu;
    {
        const bool branch_taken_0x35b40c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B40Cu;
        // 0x35b410: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b40c) {
            ctx->pc = 0x35B444u;
            goto label_35b444;
        }
    }
    ctx->pc = 0x35B414u;
    // 0x35b414: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x35b414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x35b418: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x35B418u;
    {
        const bool branch_taken_0x35b418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B418u;
        // 0x35b41c: 0x31900  sll         $v1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b418) {
            ctx->pc = 0x35B444u;
            goto label_35b444;
        }
    }
    ctx->pc = 0x35B420u;
    // 0x35b420: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x35b420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35b424: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x35b424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35b428: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x35b428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35b42c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x35b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x35b430: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x35b430u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x35b434: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x35b434u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x35b438: 0xa2282b  sltu        $a1, $a1, $v0
    ctx->pc = 0x35b438u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x35b43c: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x35B43Cu;
    {
        const bool branch_taken_0x35b43c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x35B440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B43Cu;
        // 0x35b440: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b43c) {
            ctx->pc = 0x35B448u;
            goto label_35b448;
        }
    }
    ctx->pc = 0x35B444u;
label_35b444:
    // 0x35b444: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35b444u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35b448:
    // 0x35b448: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x35b448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x35b44c: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x35B44Cu;
    {
        const bool branch_taken_0x35b44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B44Cu;
        // 0x35b450: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b44c) {
            ctx->pc = 0x35B358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35b358;
        }
    }
    ctx->pc = 0x35B454u;
    // 0x35b454: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35b454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35b458: 0x3e00008  jr          $ra
    ctx->pc = 0x35B458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B458u;
        // 0x35b45c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B460u;
}

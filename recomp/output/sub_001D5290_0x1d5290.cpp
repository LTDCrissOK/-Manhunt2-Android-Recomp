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

// Function: sub_001D5290
// Address: 0x1d5290 - 0x1d53c8
void sub_001D5290_0x1d5290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D5290_0x1d5290");
#endif

    switch (ctx->pc) {
        case 0x1d52b0u: goto label_1d52b0;
        case 0x1d52b8u: goto label_1d52b8;
        case 0x1d52c8u: goto label_1d52c8;
        case 0x1d52f0u: goto label_1d52f0;
        case 0x1d5330u: goto label_1d5330;
        case 0x1d5338u: goto label_1d5338;
        case 0x1d534cu: goto label_1d534c;
        case 0x1d5378u: goto label_1d5378;
        default: break;
    }

    ctx->pc = 0x1d5290u;

    // 0x1d5290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d5290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d5294: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d5294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d5298: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d5298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d529c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d529cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d52a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d52a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d52a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52a8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1d52a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1d52ac: 0x0  nop
    ctx->pc = 0x1d52acu;
    // NOP
label_1d52b0:
    // 0x1d52b0: 0xc069e04  jal         func_1A7810
    ctx->pc = 0x1D52B0u;
    SET_GPR_U32(ctx, 31, 0x1D52B8u);
    ctx->pc = 0x1D52B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52B0u;
    // 0x1d52b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7810u, 0x1D52B0u, 0x1D52B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52B8u;
label_1d52b8:
    // 0x1d52b8: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D52B8u;
    {
        const bool branch_taken_0x1d52b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D52BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52B8u;
        // 0x1d52bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52b8) {
            ctx->pc = 0x1D5318u;
            goto label_1d5318;
        }
    }
    ctx->pc = 0x1D52C0u;
    // 0x1d52c0: 0xc0752fc  jal         func_1D4BF0
    ctx->pc = 0x1D52C0u;
    SET_GPR_U32(ctx, 31, 0x1D52C8u);
    ctx->pc = 0x1D52C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D52C0u;
    // 0x1d52c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4BF0u, 0x1D52C0u, 0x1D52C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D52C8u;
label_1d52c8:
    // 0x1d52c8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1d52c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52cc: 0x10e00012  beqz        $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D52CCu;
    {
        const bool branch_taken_0x1d52cc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D52D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52CCu;
        // 0x1d52d0: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52cc) {
            ctx->pc = 0x1D5318u;
            goto label_1d5318;
        }
    }
    ctx->pc = 0x1D52D4u;
    // 0x1d52d4: 0x8d028eb4  lw          $v0, -0x714C($t0)
    ctx->pc = 0x1d52d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294938292)));
    // 0x1d52d8: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D52D8u;
    {
        const bool branch_taken_0x1d52d8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D52DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D52D8u;
        // 0x1d52dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d52d8) {
            ctx->pc = 0x1D5318u;
            goto label_1d5318;
        }
    }
    ctx->pc = 0x1D52E0u;
    // 0x1d52e0: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x1d52e0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x1d52e4: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x1d52e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d52e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d52e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d52ec: 0x0  nop
    ctx->pc = 0x1d52ecu;
    // NOP
label_1d52f0:
    // 0x1d52f0: 0x8d228eb0  lw          $v0, -0x7150($t1)
    ctx->pc = 0x1d52f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294938288)));
    // 0x1d52f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d52f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d52f8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1d52f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1d52fc: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1d52fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1d5300: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1d5300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1d5304: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1d5304u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x1d5308: 0x8d028eb4  lw          $v0, -0x714C($t0)
    ctx->pc = 0x1d5308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294938292)));
    // 0x1d530c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1d530cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d5310: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D5310u;
    {
        const bool branch_taken_0x1d5310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D5314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5310u;
        // 0x1d5314: 0x24840818  addiu       $a0, $a0, 0x818 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5310) {
            ctx->pc = 0x1D52F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d52f0;
        }
    }
    ctx->pc = 0x1D5318u;
label_1d5318:
    // 0x1d5318: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d5318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d531c: 0x2a02080d  slti        $v0, $s0, 0x80D
    ctx->pc = 0x1d531cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2061) ? 1 : 0);
    // 0x1d5320: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1D5320u;
    {
        const bool branch_taken_0x1d5320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d5320) {
            ctx->pc = 0x1D52B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d52b0;
        }
    }
    ctx->pc = 0x1D5328u;
    // 0x1d5328: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d5328u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d532c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d532cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d5330:
    // 0x1d5330: 0xc06c04c  jal         func_1B0130
    ctx->pc = 0x1D5330u;
    SET_GPR_U32(ctx, 31, 0x1D5338u);
    ctx->pc = 0x1D5334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5330u;
    // 0x1d5334: 0x26110001  addiu       $s1, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0130u, 0x1D5330u, 0x1D5338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5338u;
label_1d5338:
    // 0x1d5338: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D5338u;
    {
        const bool branch_taken_0x1d5338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5338) {
            ctx->pc = 0x1D533Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5338u;
            // 0x1d533c: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D53A4u;
            goto label_1d53a4;
        }
    }
    ctx->pc = 0x1D5340u;
    // 0x1d5340: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d5340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5344: 0xc0752fc  jal         func_1D4BF0
    ctx->pc = 0x1D5344u;
    SET_GPR_U32(ctx, 31, 0x1D534Cu);
    ctx->pc = 0x1D5348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D5344u;
    // 0x1d5348: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4BF0u, 0x1D5344u, 0x1D534Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D534Cu;
label_1d534c:
    // 0x1d534c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1d534cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5350: 0x50e00014  beql        $a3, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D5350u;
    {
        const bool branch_taken_0x1d5350 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5350) {
            ctx->pc = 0x1D5354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D5350u;
            // 0x1d5354: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D53A4u;
            goto label_1d53a4;
        }
    }
    ctx->pc = 0x1D5358u;
    // 0x1d5358: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x1d5358u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x1d535c: 0x8d228eb4  lw          $v0, -0x714C($t1)
    ctx->pc = 0x1d535cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F8EB4u));
    // 0x1d5360: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1D5360u;
    {
        const bool branch_taken_0x1d5360 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D5364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5360u;
        // 0x1d5364: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5360) {
            ctx->pc = 0x1D53A0u;
            goto label_1d53a0;
        }
    }
    ctx->pc = 0x1D5368u;
    // 0x1d5368: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x1d5368u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1d536c: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x1d536cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x1d5370: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d5370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5374: 0x0  nop
    ctx->pc = 0x1d5374u;
    // NOP
label_1d5378:
    // 0x1d5378: 0x8d028eb0  lw          $v0, -0x7150($t0)
    ctx->pc = 0x1d5378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294938288)));
    // 0x1d537c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d537cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1d5380: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1d5380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1d5384: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1d5384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1d5388: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1d5388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1d538c: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1d538cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x1d5390: 0x8d228eb4  lw          $v0, -0x714C($t1)
    ctx->pc = 0x1d5390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294938292)));
    // 0x1d5394: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1d5394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1d5398: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D5398u;
    {
        const bool branch_taken_0x1d5398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D539Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5398u;
        // 0x1d539c: 0x24c60818  addiu       $a2, $a2, 0x818 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5398) {
            ctx->pc = 0x1D5378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5378;
        }
    }
    ctx->pc = 0x1D53A0u;
label_1d53a0:
    // 0x1d53a0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1d53a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d53a4:
    // 0x1d53a4: 0x2a0201ba  slti        $v0, $s0, 0x1BA
    ctx->pc = 0x1d53a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)442) ? 1 : 0);
    // 0x1d53a8: 0x5440ffe1  bnel        $v0, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1D53A8u;
    {
        const bool branch_taken_0x1d53a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d53a8) {
            ctx->pc = 0x1D53ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D53A8u;
            // 0x1d53ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D5330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5330;
        }
    }
    ctx->pc = 0x1D53B0u;
    // 0x1d53b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d53b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d53b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d53b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d53b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d53b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d53bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1d53bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d53c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D53C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D53C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D53C0u;
        // 0x1d53c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D53C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D53C8u;
}

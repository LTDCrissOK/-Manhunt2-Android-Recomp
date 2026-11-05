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

// Function: sub_0027A638
// Address: 0x27a638 - 0x27a7c0
void sub_0027A638_0x27a638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A638_0x27a638");
#endif

    switch (ctx->pc) {
        case 0x27a698u: goto label_27a698;
        case 0x27a6a8u: goto label_27a6a8;
        case 0x27a6b8u: goto label_27a6b8;
        case 0x27a6d8u: goto label_27a6d8;
        case 0x27a6f4u: goto label_27a6f4;
        case 0x27a70cu: goto label_27a70c;
        case 0x27a718u: goto label_27a718;
        case 0x27a72cu: goto label_27a72c;
        case 0x27a744u: goto label_27a744;
        case 0x27a750u: goto label_27a750;
        case 0x27a760u: goto label_27a760;
        case 0x27a768u: goto label_27a768;
        case 0x27a778u: goto label_27a778;
        case 0x27a78cu: goto label_27a78c;
        default: break;
    }

    ctx->pc = 0x27a638u;

    // 0x27a638: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x27a638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x27a63c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x27a63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x27a640: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x27a640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x27a644: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x27a644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x27a648: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x27a648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a64c: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x27a64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x27a650: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x27a650u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a654: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x27a654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x27a658: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x27a658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x27a65c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x27a65cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x27a660: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x27a660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x27a664: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x27a664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x27a668: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x27a668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x27a66c: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x27a66cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27a670: 0x84a50004  lh          $a1, 0x4($a1)
    ctx->pc = 0x27a670u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x27a674: 0x244993f0  addiu       $t1, $v0, -0x6C10
    ctx->pc = 0x27a674u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939632));
    // 0x27a678: 0x81230000  lb          $v1, 0x0($t1)
    ctx->pc = 0x27a678u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x4693F0u));
    // 0x27a67c: 0x81270001  lb          $a3, 0x1($t1)
    ctx->pc = 0x27a67cu;
    SET_GPR_S32(ctx, 7, (int8_t)FAST_READ8(0x4693F1u));
    // 0x27a680: 0x81280002  lb          $t0, 0x2($t1)
    ctx->pc = 0x27a680u;
    SET_GPR_S32(ctx, 8, (int8_t)FAST_READ8(0x4693F2u));
    // 0x27a684: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x27a684u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x27a688: 0xa3a70001  sb          $a3, 0x1($sp)
    ctx->pc = 0x27a688u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x27a68c: 0xa3a80002  sb          $t0, 0x2($sp)
    ctx->pc = 0x27a68cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 8));
    // 0x27a690: 0xc0d7508  jal         func_35D420
    ctx->pc = 0x27A690u;
    SET_GPR_U32(ctx, 31, 0x27A698u);
    ctx->pc = 0x27A694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A690u;
    // 0x27a694: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D420u, 0x27A690u, 0x27A698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A698u;
label_27a698:
    // 0x27a698: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x27a698u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a69c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27a69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a6a0: 0xc0d7508  jal         func_35D420
    ctx->pc = 0x27A6A0u;
    SET_GPR_U32(ctx, 31, 0x27A6A8u);
    ctx->pc = 0x27A6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A6A0u;
    // 0x27a6a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D420u, 0x27A6A0u, 0x27A6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A6A8u;
label_27a6a8:
    // 0x27a6a8: 0x86050004  lh          $a1, 0x4($s0)
    ctx->pc = 0x27a6a8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x27a6ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27a6acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a6b0: 0xc0d7508  jal         func_35D420
    ctx->pc = 0x27A6B0u;
    SET_GPR_U32(ctx, 31, 0x27A6B8u);
    ctx->pc = 0x27A6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A6B0u;
    // 0x27a6b4: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D420u, 0x27A6B0u, 0x27A6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A6B8u;
label_27a6b8:
    // 0x27a6b8: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x27a6b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x27a6bc: 0x86620004  lh          $v0, 0x4($s3)
    ctx->pc = 0x27a6bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x27a6c0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x27a6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27a6c4: 0x2456fffe  addiu       $s6, $v0, -0x2
    ctx->pc = 0x27a6c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x27a6c8: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x27a6c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27a6cc: 0x3c170047  lui         $s7, 0x47
    ctx->pc = 0x27a6ccu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)71 << 16));
    // 0x27a6d0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x27A6D0u;
    {
        const bool branch_taken_0x27a6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A6D0u;
        // 0x27a6d4: 0x27b40020  addiu       $s4, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a6d0) {
            ctx->pc = 0x27A744u;
            goto label_27a744;
        }
    }
    ctx->pc = 0x27A6D8u;
label_27a6d8:
    // 0x27a6d8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x27a6d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x27a6dc: 0x2ea20064  sltiu       $v0, $s5, 0x64
    ctx->pc = 0x27a6dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x27a6e0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27A6E0u;
    {
        const bool branch_taken_0x27a6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A6E0u;
        // 0x27a6e4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a6e0) {
            ctx->pc = 0x27A6FCu;
            goto label_27a6fc;
        }
    }
    ctx->pc = 0x27A6E8u;
    // 0x27a6e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27a6e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a6ec: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x27A6ECu;
    SET_GPR_U32(ctx, 31, 0x27A6F4u);
    ctx->pc = 0x27A6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A6ECu;
    // 0x27a6f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x27A6ECu, 0x27A6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A6F4u;
label_27a6f4:
    // 0x27a6f4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x27A6F4u;
    {
        const bool branch_taken_0x27a6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A6F4u;
        // 0x27a6f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a6f4) {
            ctx->pc = 0x27A790u;
            goto label_27a790;
        }
    }
    ctx->pc = 0x27A6FCu;
label_27a6fc:
    // 0x27a6fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27a6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a700: 0x24a59400  addiu       $a1, $a1, -0x6C00
    ctx->pc = 0x27a700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939648));
    // 0x27a704: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x27A704u;
    SET_GPR_U32(ctx, 31, 0x27A70Cu);
    ctx->pc = 0x27A708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A704u;
    // 0x27a708: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x27A704u, 0x27A70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A70Cu;
label_27a70c:
    // 0x27a70c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x27a70cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a710: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x27a710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a714: 0x0  nop
    ctx->pc = 0x27a714u;
    // NOP
label_27a718:
    // 0x27a718: 0x82060000  lb          $a2, 0x0($s0)
    ctx->pc = 0x27a718u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27a71c: 0x2d12821  addu        $a1, $s6, $s1
    ctx->pc = 0x27a71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x27a720: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27a720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a724: 0xc0d75c6  jal         func_35D718
    ctx->pc = 0x27A724u;
    SET_GPR_U32(ctx, 31, 0x27A72Cu);
    ctx->pc = 0x27A728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A724u;
    // 0x27a728: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D718u, 0x27A724u, 0x27A72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A72Cu;
label_27a72c:
    // 0x27a72c: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x27a72cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x27a730: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x27A730u;
    {
        const bool branch_taken_0x27a730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A730u;
        // 0x27a734: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a730) {
            ctx->pc = 0x27A718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a718;
        }
    }
    ctx->pc = 0x27A738u;
    // 0x27a738: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27a738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a73c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x27A73Cu;
    SET_GPR_U32(ctx, 31, 0x27A744u);
    ctx->pc = 0x27A740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A73Cu;
    // 0x27a740: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x27A73Cu, 0x27A744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A744u;
label_27a744:
    // 0x27a744: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27a744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a748: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x27A748u;
    SET_GPR_U32(ctx, 31, 0x27A750u);
    ctx->pc = 0x27A74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A748u;
    // 0x27a74c: 0x26e593f8  addiu       $a1, $s7, -0x6C08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294939640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x27A748u, 0x27A750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A750u;
label_27a750:
    // 0x27a750: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27a750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a754: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x27a754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a758: 0xc0d74a8  jal         func_35D2A0
    ctx->pc = 0x27A758u;
    SET_GPR_U32(ctx, 31, 0x27A760u);
    ctx->pc = 0x27A75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A758u;
    // 0x27a75c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D2A0u, 0x27A758u, 0x27A760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A760u;
label_27a760:
    // 0x27a760: 0xc0dbf22  jal         func_36FC88
    ctx->pc = 0x27A760u;
    SET_GPR_U32(ctx, 31, 0x27A768u);
    ctx->pc = 0x27A764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A760u;
    // 0x27a764: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36FC88u, 0x27A760u, 0x27A768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A768u;
label_27a768:
    // 0x27a768: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x27a768u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x27a76c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27a76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a770: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x27A770u;
    SET_GPR_U32(ctx, 31, 0x27A778u);
    ctx->pc = 0x27A774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A770u;
    // 0x27a774: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x27A770u, 0x27A778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A778u;
label_27a778:
    // 0x27a778: 0x321000ff  andi        $s0, $s0, 0xFF
    ctx->pc = 0x27a778u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x27a77c: 0x1200ffd6  beqz        $s0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x27A77Cu;
    {
        const bool branch_taken_0x27a77c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A77Cu;
        // 0x27a780: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a77c) {
            ctx->pc = 0x27A6D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a6d8;
        }
    }
    ctx->pc = 0x27A784u;
    // 0x27a784: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x27A784u;
    SET_GPR_U32(ctx, 31, 0x27A78Cu);
    ctx->pc = 0x27A788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A784u;
    // 0x27a788: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x27A784u, 0x27A78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A78Cu;
label_27a78c:
    // 0x27a78c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27a78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27a790:
    // 0x27a790: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x27a790u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27a794: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x27a794u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x27a798: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x27a798u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27a79c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x27a79cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x27a7a0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x27a7a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27a7a4: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x27a7a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x27a7a8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x27a7a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27a7ac: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x27a7acu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x27a7b0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x27a7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27a7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x27A7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A7B4u;
        // 0x27a7b8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A7BCu;
    // 0x27a7bc: 0x0  nop
    ctx->pc = 0x27a7bcu;
    // NOP
    ctx->pc = 0x27a7c0u;
}

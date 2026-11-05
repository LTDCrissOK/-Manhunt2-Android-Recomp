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

// Function: sub_0039E3C8
// Address: 0x39e3c8 - 0x39e4c0
void sub_0039E3C8_0x39e3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039E3C8_0x39e3c8");
#endif

    switch (ctx->pc) {
        case 0x39e3e4u: goto label_39e3e4;
        case 0x39e3f0u: goto label_39e3f0;
        case 0x39e408u: goto label_39e408;
        case 0x39e424u: goto label_39e424;
        case 0x39e448u: goto label_39e448;
        case 0x39e450u: goto label_39e450;
        case 0x39e468u: goto label_39e468;
        case 0x39e484u: goto label_39e484;
        case 0x39e490u: goto label_39e490;
        case 0x39e4a4u: goto label_39e4a4;
        default: break;
    }

    ctx->pc = 0x39e3c8u;

    // 0x39e3c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39e3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39e3cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39e3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39e3d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39e3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x39e3d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39e3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39e3d8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x39e3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x39e3dc: 0xc0e5de6  jal         func_397798
    ctx->pc = 0x39E3DCu;
    SET_GPR_U32(ctx, 31, 0x39E3E4u);
    ctx->pc = 0x39E3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E3DCu;
    // 0x39e3e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397798u, 0x39E3DCu, 0x39E3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E3E4u;
label_39e3e4:
    // 0x39e3e4: 0x8e1200b4  lw          $s2, 0xB4($s0)
    ctx->pc = 0x39e3e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x39e3e8: 0xc0e79d8  jal         func_39E760
    ctx->pc = 0x39E3E8u;
    SET_GPR_U32(ctx, 31, 0x39E3F0u);
    ctx->pc = 0x39E3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E3E8u;
    // 0x39e3ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E760u, 0x39E3E8u, 0x39E3F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E3F0u;
label_39e3f0:
    // 0x39e3f0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x39E3F0u;
    {
        const bool branch_taken_0x39e3f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39e3f0) {
            ctx->pc = 0x39E3F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E3F0u;
            // 0x39e3f4: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E40Cu;
            goto label_39e40c;
        }
    }
    ctx->pc = 0x39E3F8u;
    // 0x39e3f8: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x39e3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x39e3fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39e3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e400: 0xc0e79ee  jal         func_39E7B8
    ctx->pc = 0x39E400u;
    SET_GPR_U32(ctx, 31, 0x39E408u);
    ctx->pc = 0x39E404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E400u;
    // 0x39e404: 0xae000088  sw          $zero, 0x88($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E7B8u, 0x39E400u, 0x39E408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E408u;
label_39e408:
    // 0x39e408: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x39e408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_39e40c:
    // 0x39e40c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39e40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39e410: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x39E410u;
    {
        const bool branch_taken_0x39e410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39e410) {
            ctx->pc = 0x39E414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E410u;
            // 0x39e414: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E430u;
            goto label_39e430;
        }
    }
    ctx->pc = 0x39E418u;
    // 0x39e418: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x39e418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x39e41c: 0xc0e79dc  jal         func_39E770
    ctx->pc = 0x39E41Cu;
    SET_GPR_U32(ctx, 31, 0x39E424u);
    ctx->pc = 0x39E420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E41Cu;
    // 0x39e420: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E770u, 0x39E41Cu, 0x39E424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E424u;
label_39e424:
    // 0x39e424: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39e424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39e428: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x39E428u;
    {
        const bool branch_taken_0x39e428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39E42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E428u;
        // 0x39e42c: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e428) {
            ctx->pc = 0x39E4A8u;
            goto label_39e4a8;
        }
    }
    ctx->pc = 0x39E430u;
label_39e430:
    // 0x39e430: 0x5462001e  bnel        $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x39E430u;
    {
        const bool branch_taken_0x39e430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39e430) {
            ctx->pc = 0x39E434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E430u;
            // 0x39e434: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E4ACu;
            goto label_39e4ac;
        }
    }
    ctx->pc = 0x39E438u;
    // 0x39e438: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x39e438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x39e43c: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x39E43Cu;
    {
        const bool branch_taken_0x39e43c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x39E440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39E43Cu;
        // 0x39e440: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39e43c) {
            ctx->pc = 0x39E460u;
            goto label_39e460;
        }
    }
    ctx->pc = 0x39E444u;
    // 0x39e444: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39e444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39e448:
    // 0x39e448: 0xc0e7abe  jal         func_39EAF8
    ctx->pc = 0x39E448u;
    SET_GPR_U32(ctx, 31, 0x39E450u);
    ctx->pc = 0x39E44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E448u;
    // 0x39e44c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EAF8u, 0x39E448u, 0x39E450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E450u;
label_39e450:
    // 0x39e450: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x39e450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x39e454: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x39e454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x39e458: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x39E458u;
    {
        const bool branch_taken_0x39e458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39e458) {
            ctx->pc = 0x39E45Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E458u;
            // 0x39e45c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39e448;
        }
    }
    ctx->pc = 0x39E460u;
label_39e460:
    // 0x39e460: 0xc0e7ad0  jal         func_39EB40
    ctx->pc = 0x39E460u;
    SET_GPR_U32(ctx, 31, 0x39E468u);
    ctx->pc = 0x39E464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E460u;
    // 0x39e464: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EB40u, 0x39E460u, 0x39E468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E468u;
label_39e468:
    // 0x39e468: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x39e468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x39e46c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39e46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e470: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x39e470u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39e474: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x39e474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39e478: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x39e478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x39e47c: 0xc0e7ace  jal         func_39EB38
    ctx->pc = 0x39E47Cu;
    SET_GPR_U32(ctx, 31, 0x39E484u);
    ctx->pc = 0x39E480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E47Cu;
    // 0x39e480: 0xae030088  sw          $v1, 0x88($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39EB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39EB38u, 0x39E47Cu, 0x39E484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E484u;
label_39e484:
    // 0x39e484: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39e484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39e488: 0xc0e79d8  jal         func_39E760
    ctx->pc = 0x39E488u;
    SET_GPR_U32(ctx, 31, 0x39E490u);
    ctx->pc = 0x39E48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E488u;
    // 0x39e48c: 0xae020094  sw          $v0, 0x94($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E760u, 0x39E488u, 0x39E490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E490u;
label_39e490:
    // 0x39e490: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x39e490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39e494: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x39E494u;
    {
        const bool branch_taken_0x39e494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39e494) {
            ctx->pc = 0x39E498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39E494u;
            // 0x39e498: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39E4ACu;
            goto label_39e4ac;
        }
    }
    ctx->pc = 0x39E49Cu;
    // 0x39e49c: 0xc0e79ee  jal         func_39E7B8
    ctx->pc = 0x39E49Cu;
    SET_GPR_U32(ctx, 31, 0x39E4A4u);
    ctx->pc = 0x39E4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E49Cu;
    // 0x39e4a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E7B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E7B8u, 0x39E49Cu, 0x39E4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39E4A4u;
label_39e4a4:
    // 0x39e4a4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x39e4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_39e4a8:
    // 0x39e4a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39e4a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39e4ac:
    // 0x39e4ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39e4acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39e4b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39e4b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39e4b4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x39e4b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39e4b8: 0x80e5dec  j           func_3977B0
    ctx->pc = 0x39E4B8u;
    ctx->pc = 0x39E4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39E4B8u;
    // 0x39e4bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3977B0u;
    sub_003977B0_0x3977b0(rdram, ctx, runtime); return;
    ctx->pc = 0x39E4C0u;
}

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

// Function: sub_00259648
// Address: 0x259648 - 0x2596f8
void sub_00259648_0x259648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00259648_0x259648");
#endif

    switch (ctx->pc) {
        case 0x259674u: goto label_259674;
        case 0x259688u: goto label_259688;
        case 0x259694u: goto label_259694;
        case 0x2596b4u: goto label_2596b4;
        case 0x2596c0u: goto label_2596c0;
        case 0x2596e4u: goto label_2596e4;
        default: break;
    }

    ctx->pc = 0x259648u;

    // 0x259648: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x259648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25964c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25964cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x259650: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x259650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x259654: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x259654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x259658: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x259658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25965c: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x25965cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x259660: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x259660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x259664: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x259664u;
    {
        const bool branch_taken_0x259664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x259668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x259664u;
        // 0x259668: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x259664) {
            ctx->pc = 0x259678u;
            goto label_259678;
        }
    }
    ctx->pc = 0x25966Cu;
    // 0x25966c: 0xc08449e  jal         func_211278
    ctx->pc = 0x25966Cu;
    SET_GPR_U32(ctx, 31, 0x259674u);
    ctx->pc = 0x211278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211278u, 0x25966Cu, 0x259674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259674u;
label_259674:
    // 0x259674: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x259674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_259678:
    // 0x259678: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x259678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25967c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x25967cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x259680: 0xc0b1680  jal         func_2C5A00
    ctx->pc = 0x259680u;
    SET_GPR_U32(ctx, 31, 0x259688u);
    ctx->pc = 0x259684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x259680u;
    // 0x259684: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5A00u, 0x259680u, 0x259688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259688u;
label_259688:
    // 0x259688: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x259688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x25968c: 0xc0c48da  jal         func_312368
    ctx->pc = 0x25968Cu;
    SET_GPR_U32(ctx, 31, 0x259694u);
    ctx->pc = 0x259690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25968Cu;
    // 0x259690: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x25968Cu, 0x259694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x259694u;
label_259694:
    // 0x259694: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x259694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x259698: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x259698u;
    {
        const bool branch_taken_0x259698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x259698) {
            ctx->pc = 0x25969Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x259698u;
            // 0x25969c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2596E8u;
            goto label_2596e8;
        }
    }
    ctx->pc = 0x2596A0u;
    // 0x2596a0: 0x8e020234  lw          $v0, 0x234($s0)
    ctx->pc = 0x2596a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x2596a4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2596A4u;
    {
        const bool branch_taken_0x2596a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2596a4) {
            ctx->pc = 0x2596A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2596A4u;
            // 0x2596a8: 0x8e020220  lw          $v0, 0x220($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2596C8u;
            goto label_2596c8;
        }
    }
    ctx->pc = 0x2596ACu;
    // 0x2596ac: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2596ACu;
    SET_GPR_U32(ctx, 31, 0x2596B4u);
    ctx->pc = 0x2596B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2596ACu;
    // 0x2596b0: 0x2404002c  addiu       $a0, $zero, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2596ACu, 0x2596B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2596B4u;
label_2596b4:
    // 0x2596b4: 0x8e050220  lw          $a1, 0x220($s0)
    ctx->pc = 0x2596b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x2596b8: 0xc0d5bf4  jal         func_356FD0
    ctx->pc = 0x2596B8u;
    SET_GPR_U32(ctx, 31, 0x2596C0u);
    ctx->pc = 0x2596BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2596B8u;
    // 0x2596bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356FD0u, 0x2596B8u, 0x2596C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2596C0u;
label_2596c0:
    // 0x2596c0: 0xae020234  sw          $v0, 0x234($s0)
    ctx->pc = 0x2596c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 2));
    // 0x2596c4: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x2596c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_2596c8:
    // 0x2596c8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2596C8u;
    {
        const bool branch_taken_0x2596c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2596c8) {
            ctx->pc = 0x2596CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2596C8u;
            // 0x2596cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2596E8u;
            goto label_2596e8;
        }
    }
    ctx->pc = 0x2596D0u;
    // 0x2596d0: 0x8e040234  lw          $a0, 0x234($s0)
    ctx->pc = 0x2596d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x2596d4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2596D4u;
    {
        const bool branch_taken_0x2596d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2596D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2596D4u;
        // 0x2596d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2596d4) {
            ctx->pc = 0x2596E8u;
            goto label_2596e8;
        }
    }
    ctx->pc = 0x2596DCu;
    // 0x2596dc: 0xc0d5d0a  jal         func_357428
    ctx->pc = 0x2596DCu;
    SET_GPR_U32(ctx, 31, 0x2596E4u);
    ctx->pc = 0x2596E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2596DCu;
    // 0x2596e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357428u, 0x2596DCu, 0x2596E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2596E4u;
label_2596e4:
    // 0x2596e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2596e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2596e8:
    // 0x2596e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2596e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2596ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2596ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2596f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2596F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2596F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2596F0u;
        // 0x2596f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2596F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2596F8u;
}

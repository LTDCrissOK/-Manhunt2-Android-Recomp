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

// Function: sub_0039F518
// Address: 0x39f518 - 0x39f610
void sub_0039F518_0x39f518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039F518_0x39f518");
#endif

    switch (ctx->pc) {
        case 0x39f548u: goto label_39f548;
        case 0x39f558u: goto label_39f558;
        case 0x39f560u: goto label_39f560;
        case 0x39f580u: goto label_39f580;
        case 0x39f590u: goto label_39f590;
        case 0x39f5bcu: goto label_39f5bc;
        case 0x39f5d4u: goto label_39f5d4;
        default: break;
    }

    ctx->pc = 0x39f518u;

    // 0x39f518: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39f518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39f51c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x39f51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x39f520: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39f520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f524: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x39f524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x39f528: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x39f528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f52c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x39f52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x39f530: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x39f530u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f534: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39F534u;
    {
        const bool branch_taken_0x39f534 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F534u;
        // 0x39f538: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f534) {
            ctx->pc = 0x39F550u;
            goto label_39f550;
        }
    }
    ctx->pc = 0x39F53Cu;
    // 0x39f53c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39f53cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39f540: 0xc0ecbf4  jal         func_3B2FD0
    ctx->pc = 0x39F540u;
    SET_GPR_U32(ctx, 31, 0x39F548u);
    ctx->pc = 0x39F544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F540u;
    // 0x39f544: 0x2484bea8  addiu       $a0, $a0, -0x4158 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2FD0u, 0x39F540u, 0x39F548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F548u;
label_39f548:
    // 0x39f548: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x39F548u;
    {
        const bool branch_taken_0x39f548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F548u;
        // 0x39f54c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f548) {
            ctx->pc = 0x39F5D8u;
            goto label_39f5d8;
        }
    }
    ctx->pc = 0x39F550u;
label_39f550:
    // 0x39f550: 0xc0e7d90  jal         func_39F640
    ctx->pc = 0x39F550u;
    SET_GPR_U32(ctx, 31, 0x39F558u);
    ctx->pc = 0x39F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39F640u, 0x39F550u, 0x39F558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F558u;
label_39f558:
    // 0x39f558: 0xc0ecbe4  jal         func_3B2F90
    ctx->pc = 0x39F558u;
    SET_GPR_U32(ctx, 31, 0x39F560u);
    ctx->pc = 0x3B2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2F90u, 0x39F558u, 0x39F560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F560u;
label_39f560:
    // 0x39f560: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x39f560u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x39f564: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x39f564u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f568: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39f568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f56c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39f56cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f570: 0x24c66528  addiu       $a2, $a2, 0x6528
    ctx->pc = 0x39f570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25896));
    // 0x39f574: 0x27a80004  addiu       $t0, $sp, 0x4
    ctx->pc = 0x39f574u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x39f578: 0xc0e56de  jal         func_395B78
    ctx->pc = 0x39F578u;
    SET_GPR_U32(ctx, 31, 0x39F580u);
    ctx->pc = 0x39F57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F578u;
    // 0x39f57c: 0x27a90008  addiu       $t1, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395B78u, 0x39F578u, 0x39F580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F580u;
label_39f580:
    // 0x39f580: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x39F580u;
    {
        const bool branch_taken_0x39f580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F580u;
        // 0x39f584: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f580) {
            ctx->pc = 0x39F5CCu;
            goto label_39f5cc;
        }
    }
    ctx->pc = 0x39F588u;
    // 0x39f588: 0xc0e576a  jal         func_395DA8
    ctx->pc = 0x39F588u;
    SET_GPR_U32(ctx, 31, 0x39F590u);
    ctx->pc = 0x395DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395DA8u, 0x39F588u, 0x39F590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F590u;
label_39f590:
    // 0x39f590: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x39f590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x39f594: 0xae0201d0  sw          $v0, 0x1D0($s0)
    ctx->pc = 0x39f594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 2));
    // 0x39f598: 0xae050090  sw          $a1, 0x90($s0)
    ctx->pc = 0x39f598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 5));
    // 0x39f59c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x39f59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x39f5a0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x39f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39f5a4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x39f5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x39f5a8: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x39f5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39f5ac: 0xae0201d4  sw          $v0, 0x1D4($s0)
    ctx->pc = 0x39f5acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 2));
    // 0x39f5b0: 0xae0301d8  sw          $v1, 0x1D8($s0)
    ctx->pc = 0x39f5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 3));
    // 0x39f5b4: 0xc0e82f2  jal         func_3A0BC8
    ctx->pc = 0x39F5B4u;
    SET_GPR_U32(ctx, 31, 0x39F5BCu);
    ctx->pc = 0x39F5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F5B4u;
    // 0x39f5b8: 0xae0601dc  sw          $a2, 0x1DC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0BC8u, 0x39F5B4u, 0x39F5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F5BCu;
label_39f5bc:
    // 0x39f5bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39f5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39f5c0: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x39f5c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x39f5c4: 0xae0201e0  sw          $v0, 0x1E0($s0)
    ctx->pc = 0x39f5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 2));
    // 0x39f5c8: 0xa20201b2  sb          $v0, 0x1B2($s0)
    ctx->pc = 0x39f5c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 434), (uint8_t)GPR_U32(ctx, 2));
label_39f5cc:
    // 0x39f5cc: 0xc0ecbea  jal         func_3B2FA8
    ctx->pc = 0x39F5CCu;
    SET_GPR_U32(ctx, 31, 0x39F5D4u);
    ctx->pc = 0x3B2FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2FA8u, 0x39F5CCu, 0x39F5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F5D4u;
label_39f5d4:
    // 0x39f5d4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x39f5d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39f5d8:
    // 0x39f5d8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x39f5d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39f5dc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x39f5dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39f5e0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x39f5e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x39f5e4: 0x3e00008  jr          $ra
    ctx->pc = 0x39F5E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39F5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F5E4u;
        // 0x39f5e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F5E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39F5ECu;
    // 0x39f5ec: 0x0  nop
    ctx->pc = 0x39f5ecu;
    // NOP
    // 0x39f5f0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x39f5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39f5f4: 0x0  nop
    ctx->pc = 0x39f5f4u;
    // NOP
    // 0x39f5f8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x39f5f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39f5fc: 0x0  nop
    ctx->pc = 0x39f5fcu;
    // NOP
    // 0x39f600: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x39f600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39f604: 0x0  nop
    ctx->pc = 0x39f604u;
    // NOP
    // 0x39f608: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x39f608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x39f60c: 0x0  nop
    ctx->pc = 0x39f60cu;
    // NOP
    ctx->pc = 0x39f610u;
}

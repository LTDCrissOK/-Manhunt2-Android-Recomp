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

// Function: sub_0039F640
// Address: 0x39f640 - 0x39f6f8
void sub_0039F640_0x39f640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039F640_0x39f640");
#endif

    switch (ctx->pc) {
        case 0x39f640u: goto label_39f640;
        case 0x39f644u: goto label_39f644;
        case 0x39f648u: goto label_39f648;
        case 0x39f64cu: goto label_39f64c;
        case 0x39f650u: goto label_39f650;
        case 0x39f654u: goto label_39f654;
        case 0x39f658u: goto label_39f658;
        case 0x39f65cu: goto label_39f65c;
        case 0x39f660u: goto label_39f660;
        case 0x39f664u: goto label_39f664;
        case 0x39f668u: goto label_39f668;
        case 0x39f66cu: goto label_39f66c;
        case 0x39f670u: goto label_39f670;
        case 0x39f674u: goto label_39f674;
        case 0x39f678u: goto label_39f678;
        case 0x39f67cu: goto label_39f67c;
        case 0x39f680u: goto label_39f680;
        case 0x39f684u: goto label_39f684;
        case 0x39f688u: goto label_39f688;
        case 0x39f68cu: goto label_39f68c;
        case 0x39f690u: goto label_39f690;
        case 0x39f694u: goto label_39f694;
        case 0x39f698u: goto label_39f698;
        case 0x39f69cu: goto label_39f69c;
        case 0x39f6a0u: goto label_39f6a0;
        case 0x39f6a4u: goto label_39f6a4;
        case 0x39f6a8u: goto label_39f6a8;
        case 0x39f6acu: goto label_39f6ac;
        case 0x39f6b0u: goto label_39f6b0;
        case 0x39f6b4u: goto label_39f6b4;
        case 0x39f6b8u: goto label_39f6b8;
        case 0x39f6bcu: goto label_39f6bc;
        case 0x39f6c0u: goto label_39f6c0;
        case 0x39f6c4u: goto label_39f6c4;
        case 0x39f6c8u: goto label_39f6c8;
        case 0x39f6ccu: goto label_39f6cc;
        case 0x39f6d0u: goto label_39f6d0;
        case 0x39f6d4u: goto label_39f6d4;
        case 0x39f6d8u: goto label_39f6d8;
        case 0x39f6dcu: goto label_39f6dc;
        case 0x39f6e0u: goto label_39f6e0;
        case 0x39f6e4u: goto label_39f6e4;
        case 0x39f6e8u: goto label_39f6e8;
        case 0x39f6ecu: goto label_39f6ec;
        case 0x39f6f0u: goto label_39f6f0;
        case 0x39f6f4u: goto label_39f6f4;
        default: break;
    }

    ctx->pc = 0x39f640u;

label_39f640:
    // 0x39f640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39f640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_39f644:
    // 0x39f644: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39f644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_39f648:
    // 0x39f648: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39f648u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39f64c:
    // 0x39f64c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_39f650:
    if (ctx->pc == 0x39F650u) {
        ctx->pc = 0x39F650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F64Cu;
        // 0x39f650: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F654u;
        goto label_39f654;
    }
    ctx->pc = 0x39F64Cu;
    {
        const bool branch_taken_0x39f64c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F64Cu;
        // 0x39f650: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f64c) {
            ctx->pc = 0x39F670u;
            goto label_39f670;
        }
    }
    ctx->pc = 0x39F654u;
label_39f654:
    // 0x39f654: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39f654u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_39f658:
    // 0x39f658: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39f658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39f65c:
    // 0x39f65c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39f65cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_39f660:
    // 0x39f660: 0x2484bf20  addiu       $a0, $a0, -0x40E0
    ctx->pc = 0x39f660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950688));
label_39f664:
    // 0x39f664: 0x80ecbf4  j           func_3B2FD0
label_39f668:
    if (ctx->pc == 0x39F668u) {
        ctx->pc = 0x39F668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F664u;
        // 0x39f668: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F66Cu;
        goto label_39f66c;
    }
    ctx->pc = 0x39F664u;
    ctx->pc = 0x39F668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F664u;
    // 0x39f668: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FD0u;
    sub_003B2FD0_0x3b2fd0(rdram, ctx, runtime); return;
    ctx->pc = 0x39F66Cu;
label_39f66c:
    // 0x39f66c: 0x0  nop
    ctx->pc = 0x39f66cu;
    // NOP
label_39f670:
    // 0x39f670: 0xc0e8182  jal         func_3A0608
label_39f674:
    if (ctx->pc == 0x39F674u) {
        ctx->pc = 0x39F678u;
        goto label_39f678;
    }
    ctx->pc = 0x39F670u;
    SET_GPR_U32(ctx, 31, 0x39F678u);
    ctx->pc = 0x3A0608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0608u, 0x39F670u, 0x39F678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F678u;
label_39f678:
    // 0x39f678: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x39f678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_39f67c:
    // 0x39f67c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_39f680:
    if (ctx->pc == 0x39F680u) {
        ctx->pc = 0x39F680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F67Cu;
        // 0x39f680: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F684u;
        goto label_39f684;
    }
    ctx->pc = 0x39F67Cu;
    {
        const bool branch_taken_0x39f67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F67Cu;
        // 0x39f680: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f67c) {
            ctx->pc = 0x39F68Cu;
            goto label_39f68c;
        }
    }
    ctx->pc = 0x39F684u;
label_39f684:
    // 0x39f684: 0xc0e673a  jal         func_399CE8
label_39f688:
    if (ctx->pc == 0x39F688u) {
        ctx->pc = 0x39F68Cu;
        goto label_39f68c;
    }
    ctx->pc = 0x39F684u;
    SET_GPR_U32(ctx, 31, 0x39F68Cu);
    ctx->pc = 0x399CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399CE8u, 0x39F684u, 0x39F68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F68Cu;
label_39f68c:
    // 0x39f68c: 0xc0ecbe4  jal         func_3B2F90
label_39f690:
    if (ctx->pc == 0x39F690u) {
        ctx->pc = 0x39F694u;
        goto label_39f694;
    }
    ctx->pc = 0x39F68Cu;
    SET_GPR_U32(ctx, 31, 0x39F694u);
    ctx->pc = 0x3B2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2F90u, 0x39F68Cu, 0x39F694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F694u;
label_39f694:
    // 0x39f694: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x39f694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_39f698:
    // 0x39f698: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_39f69c:
    if (ctx->pc == 0x39F69Cu) {
        ctx->pc = 0x39F69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F698u;
        // 0x39f69c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F6A0u;
        goto label_39f6a0;
    }
    ctx->pc = 0x39F698u;
    {
        const bool branch_taken_0x39f698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F698u;
        // 0x39f69c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f698) {
            ctx->pc = 0x39F6A8u;
            goto label_39f6a8;
        }
    }
    ctx->pc = 0x39F6A0u;
label_39f6a0:
    // 0x39f6a0: 0xc0e82f0  jal         func_3A0BC0
label_39f6a4:
    if (ctx->pc == 0x39F6A4u) {
        ctx->pc = 0x39F6A8u;
        goto label_39f6a8;
    }
    ctx->pc = 0x39F6A0u;
    SET_GPR_U32(ctx, 31, 0x39F6A8u);
    ctx->pc = 0x3A0BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0BC0u, 0x39F6A0u, 0x39F6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F6A8u;
label_39f6a8:
    // 0x39f6a8: 0x8e0301e0  lw          $v1, 0x1E0($s0)
    ctx->pc = 0x39f6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
label_39f6ac:
    // 0x39f6ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39f6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39f6b0:
    // 0x39f6b0: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
label_39f6b4:
    if (ctx->pc == 0x39F6B4u) {
        ctx->pc = 0x39F6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F6B0u;
        // 0x39f6b4: 0xae0001ac  sw          $zero, 0x1AC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F6B8u;
        goto label_39f6b8;
    }
    ctx->pc = 0x39F6B0u;
    {
        const bool branch_taken_0x39f6b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39f6b0) {
            ctx->pc = 0x39F6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39F6B0u;
            // 0x39f6b4: 0xae0001ac  sw          $zero, 0x1AC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39F6DCu;
            goto label_39f6dc;
        }
    }
    ctx->pc = 0x39F6B8u;
label_39f6b8:
    // 0x39f6b8: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x39f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_39f6bc:
    // 0x39f6bc: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x39f6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_39f6c0:
    // 0x39f6c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_39f6c4:
    if (ctx->pc == 0x39F6C4u) {
        ctx->pc = 0x39F6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F6C0u;
        // 0x39f6c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F6C8u;
        goto label_39f6c8;
    }
    ctx->pc = 0x39F6C0u;
    {
        const bool branch_taken_0x39f6c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39F6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F6C0u;
        // 0x39f6c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f6c0) {
            ctx->pc = 0x39F6D8u;
            goto label_39f6d8;
        }
    }
    ctx->pc = 0x39F6C8u;
label_39f6c8:
    // 0x39f6c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x39f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39f6cc:
    // 0x39f6cc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x39f6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_39f6d0:
    // 0x39f6d0: 0x60f809  jalr        $v1
label_39f6d4:
    if (ctx->pc == 0x39F6D4u) {
        ctx->pc = 0x39F6D8u;
        goto label_39f6d8;
    }
    ctx->pc = 0x39F6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39F6D8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39F6D0u, 0x39F6D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39F6D8u;
label_39f6d8:
    // 0x39f6d8: 0xae0001ac  sw          $zero, 0x1AC($s0)
    ctx->pc = 0x39f6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 0));
label_39f6dc:
    // 0x39f6dc: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x39f6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_39f6e0:
    // 0x39f6e0: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x39f6e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
label_39f6e4:
    // 0x39f6e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x39f6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_39f6e8:
    // 0x39f6e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39f6e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39f6ec:
    // 0x39f6ec: 0x80ecbea  j           func_3B2FA8
label_39f6f0:
    if (ctx->pc == 0x39F6F0u) {
        ctx->pc = 0x39F6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F6ECu;
        // 0x39f6f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39F6F4u;
        goto label_39f6f4;
    }
    ctx->pc = 0x39F6ECu;
    ctx->pc = 0x39F6F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F6ECu;
    // 0x39f6f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FA8u;
    sub_003B2FA8_0x3b2fa8(rdram, ctx, runtime); return;
    ctx->pc = 0x39F6F4u;
label_39f6f4:
    // 0x39f6f4: 0x0  nop
    ctx->pc = 0x39f6f4u;
    // NOP
    ctx->pc = 0x39f6f8u;
}

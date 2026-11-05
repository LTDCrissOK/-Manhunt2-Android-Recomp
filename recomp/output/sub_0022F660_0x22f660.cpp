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

// Function: sub_0022F660
// Address: 0x22f660 - 0x22f718
void sub_0022F660_0x22f660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F660_0x22f660");
#endif

    switch (ctx->pc) {
        case 0x22f684u: goto label_22f684;
        case 0x22f6c0u: goto label_22f6c0;
        case 0x22f6e8u: goto label_22f6e8;
        case 0x22f6f8u: goto label_22f6f8;
        case 0x22f708u: goto label_22f708;
        default: break;
    }

    ctx->pc = 0x22f660u;

    // 0x22f660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22f660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22f664: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22f664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22f668: 0x8c820334  lw          $v0, 0x334($a0)
    ctx->pc = 0x22f668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
    // 0x22f66c: 0x8c450150  lw          $a1, 0x150($v0)
    ctx->pc = 0x22f66cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x22f670: 0x38a30045  xori        $v1, $a1, 0x45
    ctx->pc = 0x22f670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)69);
    // 0x22f674: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F674u;
    {
        const bool branch_taken_0x22f674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F674u;
        // 0x22f678: 0x24a2ffbd  addiu       $v0, $a1, -0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967229));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f674) {
            ctx->pc = 0x22F68Cu;
            goto label_22f68c;
        }
    }
    ctx->pc = 0x22F67Cu;
    // 0x22f67c: 0xc08bd96  jal         func_22F658
    ctx->pc = 0x22F67Cu;
    SET_GPR_U32(ctx, 31, 0x22F684u);
    ctx->pc = 0x22F680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F67Cu;
    // 0x22f680: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x22F67Cu, 0x22F684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F684u;
label_22f684:
    // 0x22f684: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x22F684u;
    {
        const bool branch_taken_0x22f684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F684u;
        // 0x22f688: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f684) {
            ctx->pc = 0x22F70Cu;
            goto label_22f70c;
        }
    }
    ctx->pc = 0x22F68Cu;
label_22f68c:
    // 0x22f68c: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x22f68cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x22f690: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22F690u;
    {
        const bool branch_taken_0x22f690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F690u;
        // 0x22f694: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f690) {
            ctx->pc = 0x22F6ACu;
            goto label_22f6ac;
        }
    }
    ctx->pc = 0x22F698u;
    // 0x22f698: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x22f698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x22f69c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22F69Cu;
    {
        const bool branch_taken_0x22f69c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x22F6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F69Cu;
        // 0x22f6a0: 0x2402004a  addiu       $v0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f69c) {
            ctx->pc = 0x22F6ACu;
            goto label_22f6ac;
        }
    }
    ctx->pc = 0x22F6A4u;
    // 0x22f6a4: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x22F6A4u;
    {
        const bool branch_taken_0x22f6a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x22f6a4) {
            ctx->pc = 0x22F6B0u;
            goto label_22f6b0;
        }
    }
    ctx->pc = 0x22F6ACu;
label_22f6ac:
    // 0x22f6ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22f6acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22f6b0:
    // 0x22f6b0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F6B0u;
    {
        const bool branch_taken_0x22f6b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f6b0) {
            ctx->pc = 0x22F6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F6B0u;
            // 0x22f6b4: 0x8c8200bc  lw          $v0, 0xBC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F6C8u;
            goto label_22f6c8;
        }
    }
    ctx->pc = 0x22F6B8u;
    // 0x22f6b8: 0xc08bd96  jal         func_22F658
    ctx->pc = 0x22F6B8u;
    SET_GPR_U32(ctx, 31, 0x22F6C0u);
    ctx->pc = 0x22F6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F6B8u;
    // 0x22f6bc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x22F6B8u, 0x22F6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F6C0u;
label_22f6c0:
    // 0x22f6c0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x22F6C0u;
    {
        const bool branch_taken_0x22f6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F6C0u;
        // 0x22f6c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f6c0) {
            ctx->pc = 0x22F70Cu;
            goto label_22f70c;
        }
    }
    ctx->pc = 0x22F6C8u;
label_22f6c8:
    // 0x22f6c8: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x22f6c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x22f6cc: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22F6CCu;
    {
        const bool branch_taken_0x22f6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22f6cc) {
            ctx->pc = 0x22F700u;
            goto label_22f700;
        }
    }
    ctx->pc = 0x22F6D4u;
    // 0x22f6d4: 0x8c8205a8  lw          $v0, 0x5A8($a0)
    ctx->pc = 0x22f6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1448)));
    // 0x22f6d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22F6D8u;
    {
        const bool branch_taken_0x22f6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22f6d8) {
            ctx->pc = 0x22F6F0u;
            goto label_22f6f0;
        }
    }
    ctx->pc = 0x22F6E0u;
    // 0x22f6e0: 0xc08bd96  jal         func_22F658
    ctx->pc = 0x22F6E0u;
    SET_GPR_U32(ctx, 31, 0x22F6E8u);
    ctx->pc = 0x22F6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F6E0u;
    // 0x22f6e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x22F6E0u, 0x22F6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F6E8u;
label_22f6e8:
    // 0x22f6e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22F6E8u;
    {
        const bool branch_taken_0x22f6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F6E8u;
        // 0x22f6ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f6e8) {
            ctx->pc = 0x22F70Cu;
            goto label_22f70c;
        }
    }
    ctx->pc = 0x22F6F0u;
label_22f6f0:
    // 0x22f6f0: 0xc08bd96  jal         func_22F658
    ctx->pc = 0x22F6F0u;
    SET_GPR_U32(ctx, 31, 0x22F6F8u);
    ctx->pc = 0x22F6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F6F0u;
    // 0x22f6f4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x22F6F0u, 0x22F6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F6F8u;
label_22f6f8:
    // 0x22f6f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22F6F8u;
    {
        const bool branch_taken_0x22f6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F6F8u;
        // 0x22f6fc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f6f8) {
            ctx->pc = 0x22F70Cu;
            goto label_22f70c;
        }
    }
    ctx->pc = 0x22F700u;
label_22f700:
    // 0x22f700: 0xc08bd96  jal         func_22F658
    ctx->pc = 0x22F700u;
    SET_GPR_U32(ctx, 31, 0x22F708u);
    ctx->pc = 0x22F704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22F700u;
    // 0x22f704: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x22F700u, 0x22F708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F708u;
label_22f708:
    // 0x22f708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22f708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22f70c:
    // 0x22f70c: 0x3e00008  jr          $ra
    ctx->pc = 0x22F70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F70Cu;
        // 0x22f710: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22F714u;
    // 0x22f714: 0x0  nop
    ctx->pc = 0x22f714u;
    // NOP
    ctx->pc = 0x22f718u;
}

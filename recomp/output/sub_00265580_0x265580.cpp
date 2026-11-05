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

// Function: sub_00265580
// Address: 0x265580 - 0x265630
void sub_00265580_0x265580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265580_0x265580");
#endif

    switch (ctx->pc) {
        case 0x2655c0u: goto label_2655c0;
        case 0x2655d0u: goto label_2655d0;
        case 0x2655d8u: goto label_2655d8;
        case 0x265600u: goto label_265600;
        case 0x265608u: goto label_265608;
        case 0x265618u: goto label_265618;
        case 0x265620u: goto label_265620;
        default: break;
    }

    ctx->pc = 0x265580u;

    // 0x265580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x265580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x265584: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x265584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x265588: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x265588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x26558c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26558cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265590: 0x8e04032c  lw          $a0, 0x32C($s0)
    ctx->pc = 0x265590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
    // 0x265594: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x265594u;
    {
        const bool branch_taken_0x265594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x265598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265594u;
        // 0x265598: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265594) {
            ctx->pc = 0x2655D8u;
            goto label_2655d8;
        }
    }
    ctx->pc = 0x26559Cu;
    // 0x26559c: 0x90830320  lbu         $v1, 0x320($a0)
    ctx->pc = 0x26559cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 800)));
    // 0x2655a0: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2655A0u;
    {
        const bool branch_taken_0x2655a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2655a0) {
            ctx->pc = 0x2655A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2655A0u;
            // 0x2655a4: 0x92030320  lbu         $v1, 0x320($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 800)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2655E0u;
            goto label_2655e0;
        }
    }
    ctx->pc = 0x2655A8u;
    // 0x2655a8: 0x8c8200c0  lw          $v0, 0xC0($a0)
    ctx->pc = 0x2655a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x2655ac: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2655acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2655b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2655B0u;
    {
        const bool branch_taken_0x2655b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2655b0) {
            ctx->pc = 0x2655C8u;
            goto label_2655c8;
        }
    }
    ctx->pc = 0x2655B8u;
    // 0x2655b8: 0xc0998a4  jal         func_266290
    ctx->pc = 0x2655B8u;
    SET_GPR_U32(ctx, 31, 0x2655C0u);
    ctx->pc = 0x266290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266290u, 0x2655B8u, 0x2655C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2655C0u;
label_2655c0:
    // 0x2655c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2655C0u;
    {
        const bool branch_taken_0x2655c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2655C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2655C0u;
        // 0x2655c4: 0x92030320  lbu         $v1, 0x320($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2655c0) {
            ctx->pc = 0x2655DCu;
            goto label_2655dc;
        }
    }
    ctx->pc = 0x2655C8u;
label_2655c8:
    // 0x2655c8: 0xc099894  jal         func_266250
    ctx->pc = 0x2655C8u;
    SET_GPR_U32(ctx, 31, 0x2655D0u);
    ctx->pc = 0x266250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266250u, 0x2655C8u, 0x2655D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2655D0u;
label_2655d0:
    // 0x2655d0: 0xc083bc0  jal         func_20EF00
    ctx->pc = 0x2655D0u;
    SET_GPR_U32(ctx, 31, 0x2655D8u);
    ctx->pc = 0x2655D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2655D0u;
    // 0x2655d4: 0x8e04032c  lw          $a0, 0x32C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF00u, 0x2655D0u, 0x2655D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2655D8u;
label_2655d8:
    // 0x2655d8: 0x92030320  lbu         $v1, 0x320($s0)
    ctx->pc = 0x2655d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 800)));
label_2655dc:
    // 0x2655dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2655dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2655e0:
    // 0x2655e0: 0x54620010  bnel        $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2655E0u;
    {
        const bool branch_taken_0x2655e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2655e0) {
            ctx->pc = 0x2655E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2655E0u;
            // 0x2655e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x265624u;
            goto label_265624;
        }
    }
    ctx->pc = 0x2655E8u;
    // 0x2655e8: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x2655e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2655ec: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2655ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x2655f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2655F0u;
    {
        const bool branch_taken_0x2655f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2655f0) {
            ctx->pc = 0x265610u;
            goto label_265610;
        }
    }
    ctx->pc = 0x2655F8u;
    // 0x2655f8: 0xc0998a4  jal         func_266290
    ctx->pc = 0x2655F8u;
    SET_GPR_U32(ctx, 31, 0x265600u);
    ctx->pc = 0x2655FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2655F8u;
    // 0x2655fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266290u, 0x2655F8u, 0x265600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265600u;
label_265600:
    // 0x265600: 0xc09965c  jal         func_265970
    ctx->pc = 0x265600u;
    SET_GPR_U32(ctx, 31, 0x265608u);
    ctx->pc = 0x265604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265600u;
    // 0x265604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x265970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265970u, 0x265600u, 0x265608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265608u;
label_265608:
    // 0x265608: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x265608u;
    {
        const bool branch_taken_0x265608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26560Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265608u;
        // 0x26560c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x265608) {
            ctx->pc = 0x265624u;
            goto label_265624;
        }
    }
    ctx->pc = 0x265610u;
label_265610:
    // 0x265610: 0xc099894  jal         func_266250
    ctx->pc = 0x265610u;
    SET_GPR_U32(ctx, 31, 0x265618u);
    ctx->pc = 0x265614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265610u;
    // 0x265614: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266250u, 0x265610u, 0x265618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265618u;
label_265618:
    // 0x265618: 0xc083bc0  jal         func_20EF00
    ctx->pc = 0x265618u;
    SET_GPR_U32(ctx, 31, 0x265620u);
    ctx->pc = 0x26561Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x265618u;
    // 0x26561c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20EF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20EF00u, 0x265618u, 0x265620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265620u;
label_265620:
    // 0x265620: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x265620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_265624:
    // 0x265624: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x265624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x265628: 0x3e00008  jr          $ra
    ctx->pc = 0x265628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x265628u;
        // 0x26562c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x265628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x265630u;
}

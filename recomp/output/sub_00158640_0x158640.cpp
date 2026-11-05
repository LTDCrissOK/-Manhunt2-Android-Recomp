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

// Function: sub_00158640
// Address: 0x158640 - 0x1586c8
void sub_00158640_0x158640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158640_0x158640");
#endif

    switch (ctx->pc) {
        case 0x158640u: goto label_158640;
        case 0x158644u: goto label_158644;
        case 0x158648u: goto label_158648;
        case 0x15864cu: goto label_15864c;
        case 0x158650u: goto label_158650;
        case 0x158654u: goto label_158654;
        case 0x158658u: goto label_158658;
        case 0x15865cu: goto label_15865c;
        case 0x158660u: goto label_158660;
        case 0x158664u: goto label_158664;
        case 0x158668u: goto label_158668;
        case 0x15866cu: goto label_15866c;
        case 0x158670u: goto label_158670;
        case 0x158674u: goto label_158674;
        case 0x158678u: goto label_158678;
        case 0x15867cu: goto label_15867c;
        case 0x158680u: goto label_158680;
        case 0x158684u: goto label_158684;
        case 0x158688u: goto label_158688;
        case 0x15868cu: goto label_15868c;
        case 0x158690u: goto label_158690;
        case 0x158694u: goto label_158694;
        case 0x158698u: goto label_158698;
        case 0x15869cu: goto label_15869c;
        case 0x1586a0u: goto label_1586a0;
        case 0x1586a4u: goto label_1586a4;
        case 0x1586a8u: goto label_1586a8;
        case 0x1586acu: goto label_1586ac;
        case 0x1586b0u: goto label_1586b0;
        case 0x1586b4u: goto label_1586b4;
        case 0x1586b8u: goto label_1586b8;
        case 0x1586bcu: goto label_1586bc;
        case 0x1586c0u: goto label_1586c0;
        case 0x1586c4u: goto label_1586c4;
        default: break;
    }

    ctx->pc = 0x158640u;

label_158640:
    // 0x158640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x158640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_158644:
    // 0x158644: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x158644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_158648:
    // 0x158648: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x158648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_15864c:
    // 0x15864c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x15864cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_158650:
    // 0x158650: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x158650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_158654:
    // 0x158654: 0xc04f280  jal         func_13CA00
label_158658:
    if (ctx->pc == 0x158658u) {
        ctx->pc = 0x158658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158654u;
        // 0x158658: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15865Cu;
        goto label_15865c;
    }
    ctx->pc = 0x158654u;
    SET_GPR_U32(ctx, 31, 0x15865Cu);
    ctx->pc = 0x158658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158654u;
    // 0x158658: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CA00u, 0x158654u, 0x15865Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15865Cu;
label_15865c:
    // 0x15865c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15865cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_158660:
    // 0x158660: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x158660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_158664:
    // 0x158664: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x158664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_158668:
    // 0x158668: 0xc04f33e  jal         func_13CCF8
label_15866c:
    if (ctx->pc == 0x15866Cu) {
        ctx->pc = 0x15866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158668u;
        // 0x15866c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158670u;
        goto label_158670;
    }
    ctx->pc = 0x158668u;
    SET_GPR_U32(ctx, 31, 0x158670u);
    ctx->pc = 0x15866Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158668u;
    // 0x15866c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x158668u, 0x158670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158670u;
label_158670:
    // 0x158670: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x158670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_158674:
    // 0x158674: 0xc04f0b6  jal         func_13C2D8
label_158678:
    if (ctx->pc == 0x158678u) {
        ctx->pc = 0x158678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158674u;
        // 0x158678: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15867Cu;
        goto label_15867c;
    }
    ctx->pc = 0x158674u;
    SET_GPR_U32(ctx, 31, 0x15867Cu);
    ctx->pc = 0x158678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158674u;
    // 0x158678: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x158674u, 0x15867Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15867Cu;
label_15867c:
    // 0x15867c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15867cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_158680:
    // 0x158680: 0x8e250304  lw          $a1, 0x304($s1)
    ctx->pc = 0x158680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_158684:
    // 0x158684: 0xc0461e8  jal         func_1187A0
label_158688:
    if (ctx->pc == 0x158688u) {
        ctx->pc = 0x158688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158684u;
        // 0x158688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15868Cu;
        goto label_15868c;
    }
    ctx->pc = 0x158684u;
    SET_GPR_U32(ctx, 31, 0x15868Cu);
    ctx->pc = 0x158688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158684u;
    // 0x158688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x158684u, 0x15868Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15868Cu;
label_15868c:
    // 0x15868c: 0x8e25031c  lw          $a1, 0x31C($s1)
    ctx->pc = 0x15868cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 796)));
label_158690:
    // 0x158690: 0xc046104  jal         func_118410
label_158694:
    if (ctx->pc == 0x158694u) {
        ctx->pc = 0x158694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158690u;
        // 0x158694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158698u;
        goto label_158698;
    }
    ctx->pc = 0x158690u;
    SET_GPR_U32(ctx, 31, 0x158698u);
    ctx->pc = 0x158694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158690u;
    // 0x158694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x158690u, 0x158698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158698u;
label_158698:
    // 0x158698: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x158698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_15869c:
    // 0x15869c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15869cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1586a0:
    // 0x1586a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1586a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1586a4:
    // 0x1586a4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1586a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1586a8:
    // 0x1586a8: 0x40f809  jalr        $v0
label_1586ac:
    if (ctx->pc == 0x1586ACu) {
        ctx->pc = 0x1586ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1586A8u;
        // 0x1586ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1586B0u;
        goto label_1586b0;
    }
    ctx->pc = 0x1586A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1586B0u);
        ctx->pc = 0x1586ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1586A8u;
        // 0x1586ac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1586A8u, 0x1586B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1586B0u;
label_1586b0:
    // 0x1586b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1586b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1586b4:
    // 0x1586b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1586b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1586b8:
    // 0x1586b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1586b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1586bc:
    // 0x1586bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1586bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1586c0:
    // 0x1586c0: 0x3e00008  jr          $ra
label_1586c4:
    if (ctx->pc == 0x1586C4u) {
        ctx->pc = 0x1586C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1586C0u;
        // 0x1586c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1586C8u;
        goto label_fallthrough_0x1586c0;
    }
    ctx->pc = 0x1586C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1586C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1586C0u;
        // 0x1586c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1586C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1586c0:
    ctx->pc = 0x1586C8u;
}

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

// Function: sub_0018E648
// Address: 0x18e648 - 0x18e6f0
void sub_0018E648_0x18e648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E648_0x18e648");
#endif

    switch (ctx->pc) {
        case 0x18e648u: goto label_18e648;
        case 0x18e64cu: goto label_18e64c;
        case 0x18e650u: goto label_18e650;
        case 0x18e654u: goto label_18e654;
        case 0x18e658u: goto label_18e658;
        case 0x18e65cu: goto label_18e65c;
        case 0x18e660u: goto label_18e660;
        case 0x18e664u: goto label_18e664;
        case 0x18e668u: goto label_18e668;
        case 0x18e66cu: goto label_18e66c;
        case 0x18e670u: goto label_18e670;
        case 0x18e674u: goto label_18e674;
        case 0x18e678u: goto label_18e678;
        case 0x18e67cu: goto label_18e67c;
        case 0x18e680u: goto label_18e680;
        case 0x18e684u: goto label_18e684;
        case 0x18e688u: goto label_18e688;
        case 0x18e68cu: goto label_18e68c;
        case 0x18e690u: goto label_18e690;
        case 0x18e694u: goto label_18e694;
        case 0x18e698u: goto label_18e698;
        case 0x18e69cu: goto label_18e69c;
        case 0x18e6a0u: goto label_18e6a0;
        case 0x18e6a4u: goto label_18e6a4;
        case 0x18e6a8u: goto label_18e6a8;
        case 0x18e6acu: goto label_18e6ac;
        case 0x18e6b0u: goto label_18e6b0;
        case 0x18e6b4u: goto label_18e6b4;
        case 0x18e6b8u: goto label_18e6b8;
        case 0x18e6bcu: goto label_18e6bc;
        case 0x18e6c0u: goto label_18e6c0;
        case 0x18e6c4u: goto label_18e6c4;
        case 0x18e6c8u: goto label_18e6c8;
        case 0x18e6ccu: goto label_18e6cc;
        case 0x18e6d0u: goto label_18e6d0;
        case 0x18e6d4u: goto label_18e6d4;
        case 0x18e6d8u: goto label_18e6d8;
        case 0x18e6dcu: goto label_18e6dc;
        case 0x18e6e0u: goto label_18e6e0;
        case 0x18e6e4u: goto label_18e6e4;
        case 0x18e6e8u: goto label_18e6e8;
        case 0x18e6ecu: goto label_18e6ec;
        default: break;
    }

    ctx->pc = 0x18e648u;

label_18e648:
    // 0x18e648: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18e648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18e64c:
    // 0x18e64c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18e64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18e650:
    // 0x18e650: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18e650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_18e654:
    // 0x18e654: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18e654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18e658:
    // 0x18e658: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x18e658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_18e65c:
    // 0x18e65c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x18e65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18e660:
    // 0x18e660: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x18e660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_18e664:
    // 0x18e664: 0x40f809  jalr        $v0
label_18e668:
    if (ctx->pc == 0x18E668u) {
        ctx->pc = 0x18E66Cu;
        goto label_18e66c;
    }
    ctx->pc = 0x18E664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E66Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E664u, 0x18E66Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E66Cu;
label_18e66c:
    // 0x18e66c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x18e66cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_18e670:
    // 0x18e670: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_18e674:
    if (ctx->pc == 0x18E674u) {
        ctx->pc = 0x18E678u;
        goto label_18e678;
    }
    ctx->pc = 0x18E670u;
    {
        const bool branch_taken_0x18e670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e670) {
            ctx->pc = 0x18E6B0u;
            goto label_18e6b0;
        }
    }
    ctx->pc = 0x18E678u;
label_18e678:
    // 0x18e678: 0xc061a2a  jal         func_1868A8
label_18e67c:
    if (ctx->pc == 0x18E67Cu) {
        ctx->pc = 0x18E67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E678u;
        // 0x18e67c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E680u;
        goto label_18e680;
    }
    ctx->pc = 0x18E678u;
    SET_GPR_U32(ctx, 31, 0x18E680u);
    ctx->pc = 0x18E67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E678u;
    // 0x18e67c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18E678u, 0x18E680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E680u;
label_18e680:
    // 0x18e680: 0x8c430470  lw          $v1, 0x470($v0)
    ctx->pc = 0x18e680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1136)));
label_18e684:
    // 0x18e684: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x18e684u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_18e688:
    // 0x18e688: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_18e68c:
    if (ctx->pc == 0x18E68Cu) {
        ctx->pc = 0x18E690u;
        goto label_18e690;
    }
    ctx->pc = 0x18E688u;
    {
        const bool branch_taken_0x18e688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e688) {
            ctx->pc = 0x18E6A0u;
            goto label_18e6a0;
        }
    }
    ctx->pc = 0x18E690u;
label_18e690:
    // 0x18e690: 0xc063904  jal         func_18E410
label_18e694:
    if (ctx->pc == 0x18E694u) {
        ctx->pc = 0x18E694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E690u;
        // 0x18e694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E698u;
        goto label_18e698;
    }
    ctx->pc = 0x18E690u;
    SET_GPR_U32(ctx, 31, 0x18E698u);
    ctx->pc = 0x18E694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E690u;
    // 0x18e694: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E410u, 0x18E690u, 0x18E698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E698u;
label_18e698:
    // 0x18e698: 0x10000012  b           . + 4 + (0x12 << 2)
label_18e69c:
    if (ctx->pc == 0x18E69Cu) {
        ctx->pc = 0x18E69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E698u;
        // 0x18e69c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E6A0u;
        goto label_18e6a0;
    }
    ctx->pc = 0x18E698u;
    {
        const bool branch_taken_0x18e698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E698u;
        // 0x18e69c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e698) {
            ctx->pc = 0x18E6E4u;
            goto label_18e6e4;
        }
    }
    ctx->pc = 0x18E6A0u;
label_18e6a0:
    // 0x18e6a0: 0xc0638e8  jal         func_18E3A0
label_18e6a4:
    if (ctx->pc == 0x18E6A4u) {
        ctx->pc = 0x18E6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E6A0u;
        // 0x18e6a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E6A8u;
        goto label_18e6a8;
    }
    ctx->pc = 0x18E6A0u;
    SET_GPR_U32(ctx, 31, 0x18E6A8u);
    ctx->pc = 0x18E6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E6A0u;
    // 0x18e6a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E3A0u, 0x18E6A0u, 0x18E6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E6A8u;
label_18e6a8:
    // 0x18e6a8: 0x1000000e  b           . + 4 + (0xE << 2)
label_18e6ac:
    if (ctx->pc == 0x18E6ACu) {
        ctx->pc = 0x18E6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E6A8u;
        // 0x18e6ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E6B0u;
        goto label_18e6b0;
    }
    ctx->pc = 0x18E6A8u;
    {
        const bool branch_taken_0x18e6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E6A8u;
        // 0x18e6ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e6a8) {
            ctx->pc = 0x18E6E4u;
            goto label_18e6e4;
        }
    }
    ctx->pc = 0x18E6B0u;
label_18e6b0:
    // 0x18e6b0: 0xc061a2a  jal         func_1868A8
label_18e6b4:
    if (ctx->pc == 0x18E6B4u) {
        ctx->pc = 0x18E6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E6B0u;
        // 0x18e6b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E6B8u;
        goto label_18e6b8;
    }
    ctx->pc = 0x18E6B0u;
    SET_GPR_U32(ctx, 31, 0x18E6B8u);
    ctx->pc = 0x18E6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E6B0u;
    // 0x18e6b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18E6B0u, 0x18E6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E6B8u;
label_18e6b8:
    // 0x18e6b8: 0x8c430470  lw          $v1, 0x470($v0)
    ctx->pc = 0x18e6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1136)));
label_18e6bc:
    // 0x18e6bc: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x18e6bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_18e6c0:
    // 0x18e6c0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_18e6c4:
    if (ctx->pc == 0x18E6C4u) {
        ctx->pc = 0x18E6C8u;
        goto label_18e6c8;
    }
    ctx->pc = 0x18E6C0u;
    {
        const bool branch_taken_0x18e6c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e6c0) {
            ctx->pc = 0x18E6D8u;
            goto label_18e6d8;
        }
    }
    ctx->pc = 0x18E6C8u;
label_18e6c8:
    // 0x18e6c8: 0xc06394c  jal         func_18E530
label_18e6cc:
    if (ctx->pc == 0x18E6CCu) {
        ctx->pc = 0x18E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E6C8u;
        // 0x18e6cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E6D0u;
        goto label_18e6d0;
    }
    ctx->pc = 0x18E6C8u;
    SET_GPR_U32(ctx, 31, 0x18E6D0u);
    ctx->pc = 0x18E6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E6C8u;
    // 0x18e6cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E530u, 0x18E6C8u, 0x18E6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E6D0u;
label_18e6d0:
    // 0x18e6d0: 0x10000004  b           . + 4 + (0x4 << 2)
label_18e6d4:
    if (ctx->pc == 0x18E6D4u) {
        ctx->pc = 0x18E6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E6D0u;
        // 0x18e6d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E6D8u;
        goto label_18e6d8;
    }
    ctx->pc = 0x18E6D0u;
    {
        const bool branch_taken_0x18e6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E6D0u;
        // 0x18e6d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e6d0) {
            ctx->pc = 0x18E6E4u;
            goto label_18e6e4;
        }
    }
    ctx->pc = 0x18E6D8u;
label_18e6d8:
    // 0x18e6d8: 0xc063924  jal         func_18E490
label_18e6dc:
    if (ctx->pc == 0x18E6DCu) {
        ctx->pc = 0x18E6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E6D8u;
        // 0x18e6dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E6E0u;
        goto label_18e6e0;
    }
    ctx->pc = 0x18E6D8u;
    SET_GPR_U32(ctx, 31, 0x18E6E0u);
    ctx->pc = 0x18E6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E6D8u;
    // 0x18e6dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E490u, 0x18E6D8u, 0x18E6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E6E0u;
label_18e6e0:
    // 0x18e6e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18e6e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18e6e4:
    // 0x18e6e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18e6e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18e6e8:
    // 0x18e6e8: 0x3e00008  jr          $ra
label_18e6ec:
    if (ctx->pc == 0x18E6ECu) {
        ctx->pc = 0x18E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E6E8u;
        // 0x18e6ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E6F0u;
        goto label_fallthrough_0x18e6e8;
    }
    ctx->pc = 0x18E6E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E6E8u;
        // 0x18e6ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E6E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18e6e8:
    ctx->pc = 0x18E6F0u;
}

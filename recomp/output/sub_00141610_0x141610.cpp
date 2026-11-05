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

// Function: sub_00141610
// Address: 0x141610 - 0x1416e0
void sub_00141610_0x141610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141610_0x141610");
#endif

    switch (ctx->pc) {
        case 0x14163cu: goto label_14163c;
        case 0x14165cu: goto label_14165c;
        case 0x141698u: goto label_141698;
        case 0x1416a4u: goto label_1416a4;
        case 0x1416b4u: goto label_1416b4;
        case 0x1416bcu: goto label_1416bc;
        default: break;
    }

    ctx->pc = 0x141610u;

    // 0x141610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x141610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x141614: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x141614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x141618: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x141618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14161c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14161cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141620: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x141620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x141624: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x141624u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141628: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x141628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x14162c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14162cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141630: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x141630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x141634: 0xc0461fe  jal         func_1187F8
    ctx->pc = 0x141634u;
    SET_GPR_U32(ctx, 31, 0x14163Cu);
    ctx->pc = 0x141638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141634u;
    // 0x141638: 0xae260468  sw          $a2, 0x468($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1128), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187F8u, 0x141634u, 0x14163Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14163Cu;
label_14163c:
    // 0x14163c: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x14163cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x141640: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x141640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x141644: 0x26109a08  addiu       $s0, $s0, -0x65F8
    ctx->pc = 0x141644u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941192));
    // 0x141648: 0xae220ab0  sw          $v0, 0xAB0($s1)
    ctx->pc = 0x141648u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2736), GPR_U32(ctx, 2));
    // 0x14164c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x14164cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x141650: 0x8c73020c  lw          $s3, 0x20C($v1)
    ctx->pc = 0x141650u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x141654: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x141654u;
    SET_GPR_U32(ctx, 31, 0x14165Cu);
    ctx->pc = 0x141658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141654u;
    // 0x141658: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x141654u, 0x14165Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14165Cu;
label_14165c:
    // 0x14165c: 0xae220bd0  sw          $v0, 0xBD0($s1)
    ctx->pc = 0x14165cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3024), GPR_U32(ctx, 2));
    // 0x141660: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x141660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x141664: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x141664u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x141668: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x141668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x14166c: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x14166cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x141670: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x141670u;
    {
        const bool branch_taken_0x141670 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x141670) {
            ctx->pc = 0x141674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x141670u;
            // 0x141674: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x141680u;
            goto label_141680;
        }
    }
    ctx->pc = 0x141678u;
    // 0x141678: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x141678u;
    {
        const bool branch_taken_0x141678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14167Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141678u;
        // 0x14167c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141678) {
            ctx->pc = 0x141688u;
            goto label_141688;
        }
    }
    ctx->pc = 0x141680u;
label_141680:
    // 0x141680: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x141680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141684: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x141684u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_141688:
    // 0x141688: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x141688u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14168c: 0xfa210be0  sqc2        $vf1, 0xBE0($s1)
    ctx->pc = 0x14168cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 3040), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x141690: 0xc046272  jal         func_1189C8
    ctx->pc = 0x141690u;
    SET_GPR_U32(ctx, 31, 0x141698u);
    ctx->pc = 0x141694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141690u;
    // 0x141694: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189C8u, 0x141690u, 0x141698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141698u;
label_141698:
    // 0x141698: 0xae220ab8  sw          $v0, 0xAB8($s1)
    ctx->pc = 0x141698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2744), GPR_U32(ctx, 2));
    // 0x14169c: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x14169Cu;
    SET_GPR_U32(ctx, 31, 0x1416A4u);
    ctx->pc = 0x1416A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14169Cu;
    // 0x1416a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x14169Cu, 0x1416A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1416A4u;
label_1416a4:
    // 0x1416a4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1416a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1416a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1416a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1416ac: 0xc042136  jal         func_1084D8
    ctx->pc = 0x1416ACu;
    SET_GPR_U32(ctx, 31, 0x1416B4u);
    ctx->pc = 0x1416B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1416ACu;
    // 0x1416b0: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x1416ACu, 0x1416B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1416B4u;
label_1416b4:
    // 0x1416b4: 0xc043996  jal         func_10E658
    ctx->pc = 0x1416B4u;
    SET_GPR_U32(ctx, 31, 0x1416BCu);
    ctx->pc = 0x1416B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1416B4u;
    // 0x1416b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E658u, 0x1416B4u, 0x1416BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1416BCu;
label_1416bc:
    // 0x1416bc: 0xae220bfc  sw          $v0, 0xBFC($s1)
    ctx->pc = 0x1416bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3068), GPR_U32(ctx, 2));
    // 0x1416c0: 0xae220bf8  sw          $v0, 0xBF8($s1)
    ctx->pc = 0x1416c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3064), GPR_U32(ctx, 2));
    // 0x1416c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1416c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1416c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1416c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1416cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1416ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1416d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1416d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1416d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1416d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1416d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1416D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1416DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1416D8u;
        // 0x1416dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1416D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1416E0u;
}

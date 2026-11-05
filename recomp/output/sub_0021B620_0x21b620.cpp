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

// Function: sub_0021B620
// Address: 0x21b620 - 0x21b700
void sub_0021B620_0x21b620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B620_0x21b620");
#endif

    switch (ctx->pc) {
        case 0x21b620u: goto label_21b620;
        case 0x21b624u: goto label_21b624;
        case 0x21b628u: goto label_21b628;
        case 0x21b62cu: goto label_21b62c;
        case 0x21b630u: goto label_21b630;
        case 0x21b634u: goto label_21b634;
        case 0x21b638u: goto label_21b638;
        case 0x21b63cu: goto label_21b63c;
        case 0x21b640u: goto label_21b640;
        case 0x21b644u: goto label_21b644;
        case 0x21b648u: goto label_21b648;
        case 0x21b64cu: goto label_21b64c;
        case 0x21b650u: goto label_21b650;
        case 0x21b654u: goto label_21b654;
        case 0x21b658u: goto label_21b658;
        case 0x21b65cu: goto label_21b65c;
        case 0x21b660u: goto label_21b660;
        case 0x21b664u: goto label_21b664;
        case 0x21b668u: goto label_21b668;
        case 0x21b66cu: goto label_21b66c;
        case 0x21b670u: goto label_21b670;
        case 0x21b674u: goto label_21b674;
        case 0x21b678u: goto label_21b678;
        case 0x21b67cu: goto label_21b67c;
        case 0x21b680u: goto label_21b680;
        case 0x21b684u: goto label_21b684;
        case 0x21b688u: goto label_21b688;
        case 0x21b68cu: goto label_21b68c;
        case 0x21b690u: goto label_21b690;
        case 0x21b694u: goto label_21b694;
        case 0x21b698u: goto label_21b698;
        case 0x21b69cu: goto label_21b69c;
        case 0x21b6a0u: goto label_21b6a0;
        case 0x21b6a4u: goto label_21b6a4;
        case 0x21b6a8u: goto label_21b6a8;
        case 0x21b6acu: goto label_21b6ac;
        case 0x21b6b0u: goto label_21b6b0;
        case 0x21b6b4u: goto label_21b6b4;
        case 0x21b6b8u: goto label_21b6b8;
        case 0x21b6bcu: goto label_21b6bc;
        case 0x21b6c0u: goto label_21b6c0;
        case 0x21b6c4u: goto label_21b6c4;
        case 0x21b6c8u: goto label_21b6c8;
        case 0x21b6ccu: goto label_21b6cc;
        case 0x21b6d0u: goto label_21b6d0;
        case 0x21b6d4u: goto label_21b6d4;
        case 0x21b6d8u: goto label_21b6d8;
        case 0x21b6dcu: goto label_21b6dc;
        case 0x21b6e0u: goto label_21b6e0;
        case 0x21b6e4u: goto label_21b6e4;
        case 0x21b6e8u: goto label_21b6e8;
        case 0x21b6ecu: goto label_21b6ec;
        case 0x21b6f0u: goto label_21b6f0;
        case 0x21b6f4u: goto label_21b6f4;
        case 0x21b6f8u: goto label_21b6f8;
        case 0x21b6fcu: goto label_21b6fc;
        default: break;
    }

    ctx->pc = 0x21b620u;

label_21b620:
    // 0x21b620: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21b620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_21b624:
    // 0x21b624: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x21b624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_21b628:
    // 0x21b628: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21b628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_21b62c:
    // 0x21b62c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21b62cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21b630:
    // 0x21b630: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21b630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_21b634:
    // 0x21b634: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21b634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_21b638:
    // 0x21b638: 0x8c6495b4  lw          $a0, -0x6A4C($v1)
    ctx->pc = 0x21b638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940084)));
label_21b63c:
    // 0x21b63c: 0x8c820388  lw          $v0, 0x388($a0)
    ctx->pc = 0x21b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 904)));
label_21b640:
    // 0x21b640: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
label_21b644:
    if (ctx->pc == 0x21B644u) {
        ctx->pc = 0x21B644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B640u;
        // 0x21b644: 0x8e0400c0  lw          $a0, 0xC0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B648u;
        goto label_21b648;
    }
    ctx->pc = 0x21B640u;
    {
        const bool branch_taken_0x21b640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x21b640) {
            ctx->pc = 0x21B644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B640u;
            // 0x21b644: 0x8e0400c0  lw          $a0, 0xC0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B654u;
            goto label_21b654;
        }
    }
    ctx->pc = 0x21B648u;
label_21b648:
    // 0x21b648: 0xc08dbd8  jal         func_236F60
label_21b64c:
    if (ctx->pc == 0x21B64Cu) {
        ctx->pc = 0x21B64Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B648u;
        // 0x21b64c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B650u;
        goto label_21b650;
    }
    ctx->pc = 0x21B648u;
    SET_GPR_U32(ctx, 31, 0x21B650u);
    ctx->pc = 0x21B64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B648u;
    // 0x21b64c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236F60u, 0x21B648u, 0x21B650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B650u;
label_21b650:
    // 0x21b650: 0x8e0400c0  lw          $a0, 0xC0($s0)
    ctx->pc = 0x21b650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_21b654:
    // 0x21b654: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x21b654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_21b658:
    // 0x21b658: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_21b65c:
    if (ctx->pc == 0x21B65Cu) {
        ctx->pc = 0x21B65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B658u;
        // 0x21b65c: 0x30820020  andi        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B660u;
        goto label_21b660;
    }
    ctx->pc = 0x21B658u;
    {
        const bool branch_taken_0x21b658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B658u;
        // 0x21b65c: 0x30820020  andi        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b658) {
            ctx->pc = 0x21B6D8u;
            goto label_21b6d8;
        }
    }
    ctx->pc = 0x21B660u;
label_21b660:
    // 0x21b660: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_21b664:
    if (ctx->pc == 0x21B664u) {
        ctx->pc = 0x21B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B660u;
        // 0x21b664: 0x2403ffdf  addiu       $v1, $zero, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B668u;
        goto label_21b668;
    }
    ctx->pc = 0x21B660u;
    {
        const bool branch_taken_0x21b660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B660u;
        // 0x21b664: 0x2403ffdf  addiu       $v1, $zero, -0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b660) {
            ctx->pc = 0x21B678u;
            goto label_21b678;
        }
    }
    ctx->pc = 0x21B668u;
label_21b668:
    // 0x21b668: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21b668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b66c:
    // 0x21b66c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x21b66cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_21b670:
    // 0x21b670: 0x1000001e  b           . + 4 + (0x1E << 2)
label_21b674:
    if (ctx->pc == 0x21B674u) {
        ctx->pc = 0x21B674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B670u;
        // 0x21b674: 0xae0300c0  sw          $v1, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B678u;
        goto label_21b678;
    }
    ctx->pc = 0x21B670u;
    {
        const bool branch_taken_0x21b670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B670u;
        // 0x21b674: 0xae0300c0  sw          $v1, 0xC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b670) {
            ctx->pc = 0x21B6ECu;
            goto label_21b6ec;
        }
    }
    ctx->pc = 0x21B678u;
label_21b678:
    // 0x21b678: 0xc0cdac2  jal         func_336B08
label_21b67c:
    if (ctx->pc == 0x21B67Cu) {
        ctx->pc = 0x21B67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B678u;
        // 0x21b67c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B680u;
        goto label_21b680;
    }
    ctx->pc = 0x21B678u;
    SET_GPR_U32(ctx, 31, 0x21B680u);
    ctx->pc = 0x21B67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B678u;
    // 0x21b67c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336B08u, 0x21B678u, 0x21B680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B680u;
label_21b680:
    // 0x21b680: 0xc08709e  jal         func_21C278
label_21b684:
    if (ctx->pc == 0x21B684u) {
        ctx->pc = 0x21B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B680u;
        // 0x21b684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B688u;
        goto label_21b688;
    }
    ctx->pc = 0x21B680u;
    SET_GPR_U32(ctx, 31, 0x21B688u);
    ctx->pc = 0x21B684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B680u;
    // 0x21b684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C278u, 0x21B680u, 0x21B688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B688u;
label_21b688:
    // 0x21b688: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x21b688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_21b68c:
    // 0x21b68c: 0x30420401  andi        $v0, $v0, 0x401
    ctx->pc = 0x21b68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1025);
label_21b690:
    // 0x21b690: 0x38420401  xori        $v0, $v0, 0x401
    ctx->pc = 0x21b690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1025);
label_21b694:
    // 0x21b694: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_21b698:
    if (ctx->pc == 0x21B698u) {
        ctx->pc = 0x21B698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B694u;
        // 0x21b698: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B69Cu;
        goto label_21b69c;
    }
    ctx->pc = 0x21B694u;
    {
        const bool branch_taken_0x21b694 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B694u;
        // 0x21b698: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b694) {
            ctx->pc = 0x21B6B0u;
            goto label_21b6b0;
        }
    }
    ctx->pc = 0x21B69Cu;
label_21b69c:
    // 0x21b69c: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x21b69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_21b6a0:
    // 0x21b6a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21b6a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21b6a4:
    // 0x21b6a4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x21b6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_21b6a8:
    // 0x21b6a8: 0x40f809  jalr        $v0
label_21b6ac:
    if (ctx->pc == 0x21B6ACu) {
        ctx->pc = 0x21B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6A8u;
        // 0x21b6ac: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B6B0u;
        goto label_21b6b0;
    }
    ctx->pc = 0x21B6A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21B6B0u);
        ctx->pc = 0x21B6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6A8u;
        // 0x21b6ac: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B6A8u, 0x21B6B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21B6B0u;
label_21b6b0:
    // 0x21b6b0: 0x5220000e  beql        $s1, $zero, . + 4 + (0xE << 2)
label_21b6b4:
    if (ctx->pc == 0x21B6B4u) {
        ctx->pc = 0x21B6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6B0u;
        // 0x21b6b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B6B8u;
        goto label_21b6b8;
    }
    ctx->pc = 0x21B6B0u;
    {
        const bool branch_taken_0x21b6b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b6b0) {
            ctx->pc = 0x21B6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21B6B0u;
            // 0x21b6b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21B6ECu;
            goto label_21b6ec;
        }
    }
    ctx->pc = 0x21B6B8u;
label_21b6b8:
    // 0x21b6b8: 0xc0c3dc2  jal         func_30F708
label_21b6bc:
    if (ctx->pc == 0x21B6BCu) {
        ctx->pc = 0x21B6C0u;
        goto label_21b6c0;
    }
    ctx->pc = 0x21B6B8u;
    SET_GPR_U32(ctx, 31, 0x21B6C0u);
    ctx->pc = 0x30F708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F708u, 0x21B6B8u, 0x21B6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B6C0u;
label_21b6c0:
    // 0x21b6c0: 0xc0c47ba  jal         func_311EE8
label_21b6c4:
    if (ctx->pc == 0x21B6C4u) {
        ctx->pc = 0x21B6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6C0u;
        // 0x21b6c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B6C8u;
        goto label_21b6c8;
    }
    ctx->pc = 0x21B6C0u;
    SET_GPR_U32(ctx, 31, 0x21B6C8u);
    ctx->pc = 0x21B6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21B6C0u;
    // 0x21b6c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x311EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x311EE8u, 0x21B6C0u, 0x21B6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B6C8u;
label_21b6c8:
    // 0x21b6c8: 0xc0d0590  jal         func_341640
label_21b6cc:
    if (ctx->pc == 0x21B6CCu) {
        ctx->pc = 0x21B6D0u;
        goto label_21b6d0;
    }
    ctx->pc = 0x21B6C8u;
    SET_GPR_U32(ctx, 31, 0x21B6D0u);
    ctx->pc = 0x341640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341640u, 0x21B6C8u, 0x21B6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21B6D0u;
label_21b6d0:
    // 0x21b6d0: 0x10000006  b           . + 4 + (0x6 << 2)
label_21b6d4:
    if (ctx->pc == 0x21B6D4u) {
        ctx->pc = 0x21B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6D0u;
        // 0x21b6d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B6D8u;
        goto label_21b6d8;
    }
    ctx->pc = 0x21B6D0u;
    {
        const bool branch_taken_0x21b6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6D0u;
        // 0x21b6d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b6d0) {
            ctx->pc = 0x21B6ECu;
            goto label_21b6ec;
        }
    }
    ctx->pc = 0x21B6D8u;
label_21b6d8:
    // 0x21b6d8: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x21b6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_21b6dc:
    // 0x21b6dc: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x21b6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_21b6e0:
    // 0x21b6e0: 0x40f809  jalr        $v0
label_21b6e4:
    if (ctx->pc == 0x21B6E4u) {
        ctx->pc = 0x21B6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6E0u;
        // 0x21b6e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B6E8u;
        goto label_21b6e8;
    }
    ctx->pc = 0x21B6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21B6E8u);
        ctx->pc = 0x21B6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6E0u;
        // 0x21b6e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B6E0u, 0x21B6E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21B6E8u;
label_21b6e8:
    // 0x21b6e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21b6e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21b6ec:
    // 0x21b6ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21b6ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21b6f0:
    // 0x21b6f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21b6f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_21b6f4:
    // 0x21b6f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21b6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21b6f8:
    // 0x21b6f8: 0x3e00008  jr          $ra
label_21b6fc:
    if (ctx->pc == 0x21B6FCu) {
        ctx->pc = 0x21B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6F8u;
        // 0x21b6fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21B700u;
        goto label_fallthrough_0x21b6f8;
    }
    ctx->pc = 0x21B6F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B6F8u;
        // 0x21b6fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B6F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21b6f8:
    ctx->pc = 0x21B700u;
}

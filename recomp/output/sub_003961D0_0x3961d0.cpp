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

// Function: sub_003961D0
// Address: 0x3961d0 - 0x396330
void sub_003961D0_0x3961d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003961D0_0x3961d0");
#endif

    switch (ctx->pc) {
        case 0x396238u: goto label_396238;
        case 0x396240u: goto label_396240;
        case 0x396248u: goto label_396248;
        case 0x396250u: goto label_396250;
        case 0x396258u: goto label_396258;
        case 0x396260u: goto label_396260;
        case 0x39626cu: goto label_39626c;
        case 0x39627cu: goto label_39627c;
        case 0x39628cu: goto label_39628c;
        case 0x396294u: goto label_396294;
        case 0x39629cu: goto label_39629c;
        case 0x3962a4u: goto label_3962a4;
        case 0x3962acu: goto label_3962ac;
        case 0x3962b4u: goto label_3962b4;
        case 0x3962bcu: goto label_3962bc;
        case 0x3962c4u: goto label_3962c4;
        case 0x3962ccu: goto label_3962cc;
        case 0x3962e0u: goto label_3962e0;
        case 0x3962f4u: goto label_3962f4;
        case 0x3962fcu: goto label_3962fc;
        default: break;
    }

    ctx->pc = 0x3961d0u;

    // 0x3961d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3961d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3961d4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3961d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3961d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3961d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3961dc: 0x24430c08  addiu       $v1, $v0, 0xC08
    ctx->pc = 0x3961dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3080));
    // 0x3961e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3961e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3961e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3961e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3961e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3961e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3961ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3961ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x400C08u));
    // 0x3961f0: 0x5c400009  bgtzl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3961F0u;
    {
        const bool branch_taken_0x3961f0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3961f0) {
            ctx->pc = 0x3961F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3961F0u;
            // 0x3961f4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396218u;
            goto label_396218;
        }
    }
    ctx->pc = 0x3961F8u;
    // 0x3961f8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3961f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3961fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3961fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x396200: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x396200u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x396204: 0x2484ad98  addiu       $a0, $a0, -0x5268
    ctx->pc = 0x396204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946200));
    // 0x396208: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x396208u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39620c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x39620cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x396210: 0x80eb2bc  j           func_3ACAF0
    ctx->pc = 0x396210u;
    ctx->pc = 0x396214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396210u;
    // 0x396214: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACAF0u;
    sub_003ACAF0_0x3acaf0(rdram, ctx, runtime); return;
    ctx->pc = 0x396218u;
label_396218:
    // 0x396218: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x396218u;
    {
        const bool branch_taken_0x396218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39621Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396218u;
        // 0x39621c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396218) {
            ctx->pc = 0x396308u;
            goto label_396308;
        }
    }
    ctx->pc = 0x396220u;
    // 0x396220: 0x3c100041  lui         $s0, 0x41
    ctx->pc = 0x396220u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65 << 16));
    // 0x396224: 0x3c120048  lui         $s2, 0x48
    ctx->pc = 0x396224u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
    // 0x396228: 0x26101e6c  addiu       $s0, $s0, 0x1E6C
    ctx->pc = 0x396228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7788));
    // 0x39622c: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x39622cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x396230: 0xc0e6d02  jal         func_39B408
    ctx->pc = 0x396230u;
    SET_GPR_U32(ctx, 31, 0x396238u);
    ctx->pc = 0x396234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396230u;
    // 0x396234: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B408u, 0x396230u, 0x396238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396238u;
label_396238:
    // 0x396238: 0xc0e5f00  jal         func_397C00
    ctx->pc = 0x396238u;
    SET_GPR_U32(ctx, 31, 0x396240u);
    ctx->pc = 0x397C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397C00u, 0x396238u, 0x396240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396240u;
label_396240:
    // 0x396240: 0xc0e4f86  jal         func_393E18
    ctx->pc = 0x396240u;
    SET_GPR_U32(ctx, 31, 0x396248u);
    ctx->pc = 0x393E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393E18u, 0x396240u, 0x396248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396248u;
label_396248:
    // 0x396248: 0xc0e64ea  jal         func_3993A8
    ctx->pc = 0x396248u;
    SET_GPR_U32(ctx, 31, 0x396250u);
    ctx->pc = 0x3993A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3993A8u, 0x396248u, 0x396250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396250u;
label_396250:
    // 0x396250: 0xc0e9d88  jal         func_3A7620
    ctx->pc = 0x396250u;
    SET_GPR_U32(ctx, 31, 0x396258u);
    ctx->pc = 0x3A7620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7620u, 0x396250u, 0x396258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396258u;
label_396258:
    // 0x396258: 0xc0ebe50  jal         func_3AF940
    ctx->pc = 0x396258u;
    SET_GPR_U32(ctx, 31, 0x396260u);
    ctx->pc = 0x3AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF940u, 0x396258u, 0x396260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396260u;
label_396260:
    // 0x396260: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x396260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x396264: 0xc0eb326  jal         func_3ACC98
    ctx->pc = 0x396264u;
    SET_GPR_U32(ctx, 31, 0x39626Cu);
    ctx->pc = 0x396268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396264u;
    // 0x396268: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACC98u, 0x396264u, 0x39626Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39626Cu;
label_39626c:
    // 0x39626c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x39626cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x396270: 0x8c450c1c  lw          $a1, 0xC1C($v0)
    ctx->pc = 0x396270u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x400C1Cu));
    // 0x396274: 0xc0eb326  jal         func_3ACC98
    ctx->pc = 0x396274u;
    SET_GPR_U32(ctx, 31, 0x39627Cu);
    ctx->pc = 0x396278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396274u;
    // 0x396278: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACC98u, 0x396274u, 0x39627Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39627Cu;
label_39627c:
    // 0x39627c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x39627cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x396280: 0x8c450c10  lw          $a1, 0xC10($v0)
    ctx->pc = 0x396280u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x400C10u));
    // 0x396284: 0xc0eb326  jal         func_3ACC98
    ctx->pc = 0x396284u;
    SET_GPR_U32(ctx, 31, 0x39628Cu);
    ctx->pc = 0x396288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396284u;
    // 0x396288: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACC98u, 0x396284u, 0x39628Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39628Cu;
label_39628c:
    // 0x39628c: 0xc0eb48a  jal         func_3AD228
    ctx->pc = 0x39628Cu;
    SET_GPR_U32(ctx, 31, 0x396294u);
    ctx->pc = 0x3AD228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD228u, 0x39628Cu, 0x396294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396294u;
label_396294:
    // 0x396294: 0xc0e5f9c  jal         func_397E70
    ctx->pc = 0x396294u;
    SET_GPR_U32(ctx, 31, 0x39629Cu);
    ctx->pc = 0x397E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397E70u, 0x396294u, 0x39629Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39629Cu;
label_39629c:
    // 0x39629c: 0xc0ec0ee  jal         func_3B03B8
    ctx->pc = 0x39629Cu;
    SET_GPR_U32(ctx, 31, 0x3962A4u);
    ctx->pc = 0x3B03B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03B8u, 0x39629Cu, 0x3962A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3962A4u;
label_3962a4:
    // 0x3962a4: 0xc0ea81e  jal         func_3AA078
    ctx->pc = 0x3962A4u;
    SET_GPR_U32(ctx, 31, 0x3962ACu);
    ctx->pc = 0x3AA078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA078u, 0x3962A4u, 0x3962ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3962ACu;
label_3962ac:
    // 0x3962ac: 0xc0eaaa0  jal         func_3AAA80
    ctx->pc = 0x3962ACu;
    SET_GPR_U32(ctx, 31, 0x3962B4u);
    ctx->pc = 0x3AAA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AAA80u, 0x3962ACu, 0x3962B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3962B4u;
label_3962b4:
    // 0x3962b4: 0xc0ead9a  jal         func_3AB668
    ctx->pc = 0x3962B4u;
    SET_GPR_U32(ctx, 31, 0x3962BCu);
    ctx->pc = 0x3AB668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB668u, 0x3962B4u, 0x3962BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3962BCu;
label_3962bc:
    // 0x3962bc: 0xc0ebe56  jal         func_3AF958
    ctx->pc = 0x3962BCu;
    SET_GPR_U32(ctx, 31, 0x3962C4u);
    ctx->pc = 0x3AF958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF958u, 0x3962BCu, 0x3962C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3962C4u;
label_3962c4:
    // 0x3962c4: 0xc0ebe44  jal         func_3AF910
    ctx->pc = 0x3962C4u;
    SET_GPR_U32(ctx, 31, 0x3962CCu);
    ctx->pc = 0x3AF910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF910u, 0x3962C4u, 0x3962CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3962CCu;
label_3962cc:
    // 0x3962cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3962ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3962d0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3962d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3962d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3962d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3962d8: 0x24700c28  addiu       $s0, $v1, 0xC28
    ctx->pc = 0x3962d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3112));
    // 0x3962dc: 0x0  nop
    ctx->pc = 0x3962dcu;
    // NOP
label_3962e0:
    // 0x3962e0: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x3962e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3962e4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3962E4u;
    {
        const bool branch_taken_0x3962e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3962e4) {
            ctx->pc = 0x3962E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3962E4u;
            // 0x3962e8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x396300u;
            goto label_396300;
        }
    }
    ctx->pc = 0x3962ECu;
    // 0x3962ec: 0xc0eb2bc  jal         func_3ACAF0
    ctx->pc = 0x3962ECu;
    SET_GPR_U32(ctx, 31, 0x3962F4u);
    ctx->pc = 0x3962F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3962ECu;
    // 0x3962f0: 0x2644ade8  addiu       $a0, $s2, -0x5218 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294946280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACAF0u, 0x3962ECu, 0x3962F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3962F4u;
label_3962f4:
    // 0x3962f4: 0xc0e6c80  jal         func_39B200
    ctx->pc = 0x3962F4u;
    SET_GPR_U32(ctx, 31, 0x3962FCu);
    ctx->pc = 0x3962F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3962F4u;
    // 0x3962f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B200u, 0x3962F4u, 0x3962FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3962FCu;
label_3962fc:
    // 0x3962fc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3962fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_396300:
    // 0x396300: 0x621fff7  bgez        $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x396300u;
    {
        const bool branch_taken_0x396300 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x396304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396300u;
        // 0x396304: 0x261000c8  addiu       $s0, $s0, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396300) {
            ctx->pc = 0x3962E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3962e0;
        }
    }
    ctx->pc = 0x396308u;
label_396308:
    // 0x396308: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x396308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39630c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39630cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x396310: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x396310u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x396314: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x396314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x396318: 0x3e00008  jr          $ra
    ctx->pc = 0x396318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39631Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396318u;
        // 0x39631c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x396320u;
    // 0x396320: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x396320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x396324: 0x0  nop
    ctx->pc = 0x396324u;
    // NOP
    // 0x396328: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x396328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x39632c: 0x0  nop
    ctx->pc = 0x39632cu;
    // NOP
    ctx->pc = 0x396330u;
}

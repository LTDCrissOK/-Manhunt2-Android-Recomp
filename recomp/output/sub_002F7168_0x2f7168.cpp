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

// Function: sub_002F7168
// Address: 0x2f7168 - 0x2f7330
void sub_002F7168_0x2f7168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7168_0x2f7168");
#endif

    switch (ctx->pc) {
        case 0x2f71b0u: goto label_2f71b0;
        case 0x2f71c0u: goto label_2f71c0;
        case 0x2f71d8u: goto label_2f71d8;
        case 0x2f71e0u: goto label_2f71e0;
        case 0x2f71ecu: goto label_2f71ec;
        case 0x2f71f4u: goto label_2f71f4;
        case 0x2f7208u: goto label_2f7208;
        case 0x2f7210u: goto label_2f7210;
        case 0x2f7220u: goto label_2f7220;
        case 0x2f722cu: goto label_2f722c;
        case 0x2f723cu: goto label_2f723c;
        case 0x2f724cu: goto label_2f724c;
        case 0x2f7264u: goto label_2f7264;
        case 0x2f726cu: goto label_2f726c;
        case 0x2f7284u: goto label_2f7284;
        case 0x2f72a4u: goto label_2f72a4;
        case 0x2f72c0u: goto label_2f72c0;
        case 0x2f72dcu: goto label_2f72dc;
        case 0x2f72e4u: goto label_2f72e4;
        case 0x2f72f4u: goto label_2f72f4;
        case 0x2f7310u: goto label_2f7310;
        default: break;
    }

    ctx->pc = 0x2f7168u;

    // 0x2f7168: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f7168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f716c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2f716cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2f7170: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f7170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f7174: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f7174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f7178: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f7178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f717c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f717cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2f7180: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2f7180u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7184: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2f7184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2f7188: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2f7188u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f718c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f718cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f7190: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2f7190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2f7194: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f7194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f7198: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7198u;
    {
        const bool branch_taken_0x2f7198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F719Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7198u;
        // 0x2f719c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7198) {
            ctx->pc = 0x2F71A8u;
            goto label_2f71a8;
        }
    }
    ctx->pc = 0x2F71A0u;
    // 0x2f71a0: 0x1620005c  bnez        $s1, . + 4 + (0x5C << 2)
    ctx->pc = 0x2F71A0u;
    {
        const bool branch_taken_0x2f71a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F71A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F71A0u;
        // 0x2f71a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f71a0) {
            ctx->pc = 0x2F7314u;
            goto label_2f7314;
        }
    }
    ctx->pc = 0x2F71A8u;
label_2f71a8:
    // 0x2f71a8: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x2F71A8u;
    SET_GPR_U32(ctx, 31, 0x2F71B0u);
    ctx->pc = 0x2F71ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F71A8u;
    // 0x2f71ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2F71A8u, 0x2F71B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F71B0u;
label_2f71b0:
    // 0x2f71b0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2F71B0u;
    {
        const bool branch_taken_0x2f71b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F71B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F71B0u;
        // 0x2f71b4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f71b0) {
            ctx->pc = 0x2F7214u;
            goto label_2f7214;
        }
    }
    ctx->pc = 0x2F71B8u;
    // 0x2f71b8: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x2F71B8u;
    SET_GPR_U32(ctx, 31, 0x2F71C0u);
    ctx->pc = 0x2F71BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F71B8u;
    // 0x2f71bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2F71B8u, 0x2F71C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F71C0u;
label_2f71c0:
    // 0x2f71c0: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x2f71c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x2f71c4: 0x38633001  xori        $v1, $v1, 0x3001
    ctx->pc = 0x2f71c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)12289);
    // 0x2f71c8: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F71C8u;
    {
        const bool branch_taken_0x2f71c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F71CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F71C8u;
        // 0x2f71cc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f71c8) {
            ctx->pc = 0x2F7214u;
            goto label_2f7214;
        }
    }
    ctx->pc = 0x2F71D0u;
    // 0x2f71d0: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x2F71D0u;
    SET_GPR_U32(ctx, 31, 0x2F71D8u);
    ctx->pc = 0x2F71D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F71D0u;
    // 0x2f71d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2F71D0u, 0x2F71D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F71D8u;
label_2f71d8:
    // 0x2f71d8: 0xc097f2a  jal         func_25FCA8
    ctx->pc = 0x2F71D8u;
    SET_GPR_U32(ctx, 31, 0x2F71E0u);
    ctx->pc = 0x2F71DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F71D8u;
    // 0x2f71dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCA8u, 0x2F71D8u, 0x2F71E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F71E0u;
label_2f71e0:
    // 0x2f71e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f71e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f71e4: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x2F71E4u;
    SET_GPR_U32(ctx, 31, 0x2F71ECu);
    ctx->pc = 0x2F71E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F71E4u;
    // 0x2f71e8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2F71E4u, 0x2F71ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F71ECu;
label_2f71ec:
    // 0x2f71ec: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x2F71ECu;
    SET_GPR_U32(ctx, 31, 0x2F71F4u);
    ctx->pc = 0x2F71F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F71ECu;
    // 0x2f71f0: 0x8c440274  lw          $a0, 0x274($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2F71ECu, 0x2F71F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F71F4u;
label_2f71f4:
    // 0x2f71f4: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2f71f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x2f71f8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F71F8u;
    {
        const bool branch_taken_0x2f71f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F71FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F71F8u;
        // 0x2f71fc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f71f8) {
            ctx->pc = 0x2F7214u;
            goto label_2f7214;
        }
    }
    ctx->pc = 0x2F7200u;
    // 0x2f7200: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x2F7200u;
    SET_GPR_U32(ctx, 31, 0x2F7208u);
    ctx->pc = 0x2F7204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7200u;
    // 0x2f7204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2F7200u, 0x2F7208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7208u;
label_2f7208:
    // 0x2f7208: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x2F7208u;
    SET_GPR_U32(ctx, 31, 0x2F7210u);
    ctx->pc = 0x2F720Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7208u;
    // 0x2f720c: 0x8c440274  lw          $a0, 0x274($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2F7208u, 0x2F7210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7210u;
label_2f7210:
    // 0x2f7210: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f7210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f7214:
    // 0x2f7214: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f7214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7218: 0xc08d962  jal         func_236588
    ctx->pc = 0x2F7218u;
    SET_GPR_U32(ctx, 31, 0x2F7220u);
    ctx->pc = 0x2F721Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7218u;
    // 0x2f721c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236588u, 0x2F7218u, 0x2F7220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7220u;
label_2f7220:
    // 0x2f7220: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2f7220u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7224: 0xc08ba82  jal         func_22EA08
    ctx->pc = 0x2F7224u;
    SET_GPR_U32(ctx, 31, 0x2F722Cu);
    ctx->pc = 0x2F7228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7224u;
    // 0x2f7228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22EA08u, 0x2F7224u, 0x2F722Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F722Cu;
label_2f722c:
    // 0x2f722c: 0x12400025  beqz        $s2, . + 4 + (0x25 << 2)
    ctx->pc = 0x2F722Cu;
    {
        const bool branch_taken_0x2f722c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F722Cu;
        // 0x2f7230: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f722c) {
            ctx->pc = 0x2F72C4u;
            goto label_2f72c4;
        }
    }
    ctx->pc = 0x2F7234u;
    // 0x2f7234: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x2F7234u;
    SET_GPR_U32(ctx, 31, 0x2F723Cu);
    ctx->pc = 0x2F7238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7234u;
    // 0x2f7238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2F7234u, 0x2F723Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F723Cu;
label_2f723c:
    // 0x2f723c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2F723Cu;
    {
        const bool branch_taken_0x2f723c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F723Cu;
        // 0x2f7240: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f723c) {
            ctx->pc = 0x2F7278u;
            goto label_2f7278;
        }
    }
    ctx->pc = 0x2F7244u;
    // 0x2f7244: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x2F7244u;
    SET_GPR_U32(ctx, 31, 0x2F724Cu);
    ctx->pc = 0x2F7248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7244u;
    // 0x2f7248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2F7244u, 0x2F724Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F724Cu;
label_2f724c:
    // 0x2f724c: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x2f724cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x2f7250: 0x38633001  xori        $v1, $v1, 0x3001
    ctx->pc = 0x2f7250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)12289);
    // 0x2f7254: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F7254u;
    {
        const bool branch_taken_0x2f7254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7254u;
        // 0x2f7258: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7254) {
            ctx->pc = 0x2F7278u;
            goto label_2f7278;
        }
    }
    ctx->pc = 0x2F725Cu;
    // 0x2f725c: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x2F725Cu;
    SET_GPR_U32(ctx, 31, 0x2F7264u);
    ctx->pc = 0x2F7260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F725Cu;
    // 0x2f7260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2F725Cu, 0x2F7264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7264u;
label_2f7264:
    // 0x2f7264: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x2F7264u;
    SET_GPR_U32(ctx, 31, 0x2F726Cu);
    ctx->pc = 0x2F7268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7264u;
    // 0x2f7268: 0x8c440274  lw          $a0, 0x274($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2F7264u, 0x2F726Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F726Cu;
label_2f726c:
    // 0x2f726c: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2f726cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x2f7270: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2F7270u;
    {
        const bool branch_taken_0x2f7270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7270u;
        // 0x2f7274: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7270) {
            ctx->pc = 0x2F72C0u;
            goto label_2f72c0;
        }
    }
    ctx->pc = 0x2F7278u;
label_2f7278:
    // 0x2f7278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f7278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f727c: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x2F727Cu;
    SET_GPR_U32(ctx, 31, 0x2F7284u);
    ctx->pc = 0x2F7280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F727Cu;
    // 0x2f7280: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2F727Cu, 0x2F7284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7284u;
label_2f7284:
    // 0x2f7284: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2f7284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2f7288: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2f7288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x2f728c: 0x2405dfff  addiu       $a1, $zero, -0x2001
    ctx->pc = 0x2f728cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959103));
    // 0x2f7290: 0xc46c1b7c  lwc1        $f12, 0x1B7C($v1)
    ctx->pc = 0x2f7290u;
    { uint32_t bits = FAST_READ32(0x471B7Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f7294: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2f7294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2f7298: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f7298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f729c: 0xc0bcc6a  jal         func_2F31A8
    ctx->pc = 0x2F729Cu;
    SET_GPR_U32(ctx, 31, 0x2F72A4u);
    ctx->pc = 0x2F72A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F729Cu;
    // 0x2f72a0: 0xae0211c0  sw          $v0, 0x11C0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F31A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F31A8u, 0x2F729Cu, 0x2F72A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F72A4u;
label_2f72a4:
    // 0x2f72a4: 0x8e0311c0  lw          $v1, 0x11C0($s0)
    ctx->pc = 0x2f72a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x2f72a8: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x2f72a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
    // 0x2f72ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f72acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f72b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f72b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f72b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2f72b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f72b8: 0xc0bd62c  jal         func_2F58B0
    ctx->pc = 0x2F72B8u;
    SET_GPR_U32(ctx, 31, 0x2F72C0u);
    ctx->pc = 0x2F72BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F72B8u;
    // 0x2f72bc: 0xae0311c0  sw          $v1, 0x11C0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F58B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F58B0u, 0x2F72B8u, 0x2F72C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F72C0u;
label_2f72c0:
    // 0x2f72c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f72c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f72c4:
    // 0x2f72c4: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F72C4u;
    {
        const bool branch_taken_0x2f72c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f72c4) {
            ctx->pc = 0x2F72D4u;
            goto label_2f72d4;
        }
    }
    ctx->pc = 0x2F72CCu;
    // 0x2f72cc: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F72CCu;
    {
        const bool branch_taken_0x2f72cc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f72cc) {
            ctx->pc = 0x2F72DCu;
            goto label_2f72dc;
        }
    }
    ctx->pc = 0x2F72D4u;
label_2f72d4:
    // 0x2f72d4: 0xc0bdbe8  jal         func_2F6FA0
    ctx->pc = 0x2F72D4u;
    SET_GPR_U32(ctx, 31, 0x2F72DCu);
    ctx->pc = 0x2F72D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F72D4u;
    // 0x2f72d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6FA0u, 0x2F72D4u, 0x2F72DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F72DCu;
label_2f72dc:
    // 0x2f72dc: 0xc0b9400  jal         func_2E5000
    ctx->pc = 0x2F72DCu;
    SET_GPR_U32(ctx, 31, 0x2F72E4u);
    ctx->pc = 0x2F72E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F72DCu;
    // 0x2f72e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5000u, 0x2F72DCu, 0x2F72E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F72E4u;
label_2f72e4:
    // 0x2f72e4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2F72E4u;
    {
        const bool branch_taken_0x2f72e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F72E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F72E4u;
        // 0x2f72e8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f72e4) {
            ctx->pc = 0x2F7314u;
            goto label_2f7314;
        }
    }
    ctx->pc = 0x2F72ECu;
    // 0x2f72ec: 0xc0b93fe  jal         func_2E4FF8
    ctx->pc = 0x2F72ECu;
    SET_GPR_U32(ctx, 31, 0x2F72F4u);
    ctx->pc = 0x2F72F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F72ECu;
    // 0x2f72f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4FF8u, 0x2F72ECu, 0x2F72F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F72F4u;
label_2f72f4:
    // 0x2f72f4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F72F4u;
    {
        const bool branch_taken_0x2f72f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F72F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F72F4u;
        // 0x2f72f8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f72f4) {
            ctx->pc = 0x2F7314u;
            goto label_2f7314;
        }
    }
    ctx->pc = 0x2F72FCu;
    // 0x2f72fc: 0x8e0205b4  lw          $v0, 0x5B4($s0)
    ctx->pc = 0x2f72fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1460)));
    // 0x2f7300: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7300u;
    {
        const bool branch_taken_0x2f7300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7300u;
        // 0x2f7304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7300) {
            ctx->pc = 0x2F7310u;
            goto label_2f7310;
        }
    }
    ctx->pc = 0x2F7308u;
    // 0x2f7308: 0xc0bd0e2  jal         func_2F4388
    ctx->pc = 0x2F7308u;
    SET_GPR_U32(ctx, 31, 0x2F7310u);
    ctx->pc = 0x2F730Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7308u;
    // 0x2f730c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F4388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F4388u, 0x2F7308u, 0x2F7310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7310u;
label_2f7310:
    // 0x2f7310: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2f7310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f7314:
    // 0x2f7314: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f7314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f7318: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f7318u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f731c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f731cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7320: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2f7320u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f7324: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f7324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7328: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7328u;
        // 0x2f732c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7330u;
}

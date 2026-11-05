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

// Function: sub_00228020
// Address: 0x228020 - 0x2282a0
void sub_00228020_0x228020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228020_0x228020");
#endif

    switch (ctx->pc) {
        case 0x228020u: goto label_228020;
        case 0x228024u: goto label_228024;
        case 0x228028u: goto label_228028;
        case 0x22802cu: goto label_22802c;
        case 0x228030u: goto label_228030;
        case 0x228034u: goto label_228034;
        case 0x228038u: goto label_228038;
        case 0x22803cu: goto label_22803c;
        case 0x228040u: goto label_228040;
        case 0x228044u: goto label_228044;
        case 0x228048u: goto label_228048;
        case 0x22804cu: goto label_22804c;
        case 0x228050u: goto label_228050;
        case 0x228054u: goto label_228054;
        case 0x228058u: goto label_228058;
        case 0x22805cu: goto label_22805c;
        case 0x228060u: goto label_228060;
        case 0x228064u: goto label_228064;
        case 0x228068u: goto label_228068;
        case 0x22806cu: goto label_22806c;
        case 0x228070u: goto label_228070;
        case 0x228074u: goto label_228074;
        case 0x228078u: goto label_228078;
        case 0x22807cu: goto label_22807c;
        case 0x228080u: goto label_228080;
        case 0x228084u: goto label_228084;
        case 0x228088u: goto label_228088;
        case 0x22808cu: goto label_22808c;
        case 0x228090u: goto label_228090;
        case 0x228094u: goto label_228094;
        case 0x228098u: goto label_228098;
        case 0x22809cu: goto label_22809c;
        case 0x2280a0u: goto label_2280a0;
        case 0x2280a4u: goto label_2280a4;
        case 0x2280a8u: goto label_2280a8;
        case 0x2280acu: goto label_2280ac;
        case 0x2280b0u: goto label_2280b0;
        case 0x2280b4u: goto label_2280b4;
        case 0x2280b8u: goto label_2280b8;
        case 0x2280bcu: goto label_2280bc;
        case 0x2280c0u: goto label_2280c0;
        case 0x2280c4u: goto label_2280c4;
        case 0x2280c8u: goto label_2280c8;
        case 0x2280ccu: goto label_2280cc;
        case 0x2280d0u: goto label_2280d0;
        case 0x2280d4u: goto label_2280d4;
        case 0x2280d8u: goto label_2280d8;
        case 0x2280dcu: goto label_2280dc;
        case 0x2280e0u: goto label_2280e0;
        case 0x2280e4u: goto label_2280e4;
        case 0x2280e8u: goto label_2280e8;
        case 0x2280ecu: goto label_2280ec;
        case 0x2280f0u: goto label_2280f0;
        case 0x2280f4u: goto label_2280f4;
        case 0x2280f8u: goto label_2280f8;
        case 0x2280fcu: goto label_2280fc;
        case 0x228100u: goto label_228100;
        case 0x228104u: goto label_228104;
        case 0x228108u: goto label_228108;
        case 0x22810cu: goto label_22810c;
        case 0x228110u: goto label_228110;
        case 0x228114u: goto label_228114;
        case 0x228118u: goto label_228118;
        case 0x22811cu: goto label_22811c;
        case 0x228120u: goto label_228120;
        case 0x228124u: goto label_228124;
        case 0x228128u: goto label_228128;
        case 0x22812cu: goto label_22812c;
        case 0x228130u: goto label_228130;
        case 0x228134u: goto label_228134;
        case 0x228138u: goto label_228138;
        case 0x22813cu: goto label_22813c;
        case 0x228140u: goto label_228140;
        case 0x228144u: goto label_228144;
        case 0x228148u: goto label_228148;
        case 0x22814cu: goto label_22814c;
        case 0x228150u: goto label_228150;
        case 0x228154u: goto label_228154;
        case 0x228158u: goto label_228158;
        case 0x22815cu: goto label_22815c;
        case 0x228160u: goto label_228160;
        case 0x228164u: goto label_228164;
        case 0x228168u: goto label_228168;
        case 0x22816cu: goto label_22816c;
        case 0x228170u: goto label_228170;
        case 0x228174u: goto label_228174;
        case 0x228178u: goto label_228178;
        case 0x22817cu: goto label_22817c;
        case 0x228180u: goto label_228180;
        case 0x228184u: goto label_228184;
        case 0x228188u: goto label_228188;
        case 0x22818cu: goto label_22818c;
        case 0x228190u: goto label_228190;
        case 0x228194u: goto label_228194;
        case 0x228198u: goto label_228198;
        case 0x22819cu: goto label_22819c;
        case 0x2281a0u: goto label_2281a0;
        case 0x2281a4u: goto label_2281a4;
        case 0x2281a8u: goto label_2281a8;
        case 0x2281acu: goto label_2281ac;
        case 0x2281b0u: goto label_2281b0;
        case 0x2281b4u: goto label_2281b4;
        case 0x2281b8u: goto label_2281b8;
        case 0x2281bcu: goto label_2281bc;
        case 0x2281c0u: goto label_2281c0;
        case 0x2281c4u: goto label_2281c4;
        case 0x2281c8u: goto label_2281c8;
        case 0x2281ccu: goto label_2281cc;
        case 0x2281d0u: goto label_2281d0;
        case 0x2281d4u: goto label_2281d4;
        case 0x2281d8u: goto label_2281d8;
        case 0x2281dcu: goto label_2281dc;
        case 0x2281e0u: goto label_2281e0;
        case 0x2281e4u: goto label_2281e4;
        case 0x2281e8u: goto label_2281e8;
        case 0x2281ecu: goto label_2281ec;
        case 0x2281f0u: goto label_2281f0;
        case 0x2281f4u: goto label_2281f4;
        case 0x2281f8u: goto label_2281f8;
        case 0x2281fcu: goto label_2281fc;
        case 0x228200u: goto label_228200;
        case 0x228204u: goto label_228204;
        case 0x228208u: goto label_228208;
        case 0x22820cu: goto label_22820c;
        case 0x228210u: goto label_228210;
        case 0x228214u: goto label_228214;
        case 0x228218u: goto label_228218;
        case 0x22821cu: goto label_22821c;
        case 0x228220u: goto label_228220;
        case 0x228224u: goto label_228224;
        case 0x228228u: goto label_228228;
        case 0x22822cu: goto label_22822c;
        case 0x228230u: goto label_228230;
        case 0x228234u: goto label_228234;
        case 0x228238u: goto label_228238;
        case 0x22823cu: goto label_22823c;
        case 0x228240u: goto label_228240;
        case 0x228244u: goto label_228244;
        case 0x228248u: goto label_228248;
        case 0x22824cu: goto label_22824c;
        case 0x228250u: goto label_228250;
        case 0x228254u: goto label_228254;
        case 0x228258u: goto label_228258;
        case 0x22825cu: goto label_22825c;
        case 0x228260u: goto label_228260;
        case 0x228264u: goto label_228264;
        case 0x228268u: goto label_228268;
        case 0x22826cu: goto label_22826c;
        case 0x228270u: goto label_228270;
        case 0x228274u: goto label_228274;
        case 0x228278u: goto label_228278;
        case 0x22827cu: goto label_22827c;
        case 0x228280u: goto label_228280;
        case 0x228284u: goto label_228284;
        case 0x228288u: goto label_228288;
        case 0x22828cu: goto label_22828c;
        case 0x228290u: goto label_228290;
        case 0x228294u: goto label_228294;
        case 0x228298u: goto label_228298;
        case 0x22829cu: goto label_22829c;
        default: break;
    }

    ctx->pc = 0x228020u;

label_228020:
    // 0x228020: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x228020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_228024:
    // 0x228024: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x228024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_228028:
    // 0x228028: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x228028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_22802c:
    // 0x22802c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x22802cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_228030:
    // 0x228030: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x228030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_228034:
    // 0x228034: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x228034u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_228038:
    // 0x228038: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x228038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_22803c:
    // 0x22803c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x22803cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_228040:
    // 0x228040: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x228040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_228044:
    // 0x228044: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x228044u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_228048:
    // 0x228048: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x228048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_22804c:
    // 0x22804c: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_228050:
    if (ctx->pc == 0x228050u) {
        ctx->pc = 0x228050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22804Cu;
        // 0x228050: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228054u;
        goto label_228054;
    }
    ctx->pc = 0x22804Cu;
    {
        const bool branch_taken_0x22804c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x228050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22804Cu;
        // 0x228050: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22804c) {
            ctx->pc = 0x228090u;
            goto label_228090;
        }
    }
    ctx->pc = 0x228054u;
label_228054:
    // 0x228054: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x228054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_228058:
    // 0x228058: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x228058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
label_22805c:
    // 0x22805c: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x22805cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
label_228060:
    // 0x228060: 0x54400086  bnel        $v0, $zero, . + 4 + (0x86 << 2)
label_228064:
    if (ctx->pc == 0x228064u) {
        ctx->pc = 0x228064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228060u;
        // 0x228064: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228068u;
        goto label_228068;
    }
    ctx->pc = 0x228060u;
    {
        const bool branch_taken_0x228060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228060) {
            ctx->pc = 0x228064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228060u;
            // 0x228064: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22827Cu;
            goto label_22827c;
        }
    }
    ctx->pc = 0x228068u;
label_228068:
    // 0x228068: 0x8e020274  lw          $v0, 0x274($s0)
    ctx->pc = 0x228068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
label_22806c:
    // 0x22806c: 0x50400083  beql        $v0, $zero, . + 4 + (0x83 << 2)
label_228070:
    if (ctx->pc == 0x228070u) {
        ctx->pc = 0x228070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22806Cu;
        // 0x228070: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228074u;
        goto label_228074;
    }
    ctx->pc = 0x22806Cu;
    {
        const bool branch_taken_0x22806c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22806c) {
            ctx->pc = 0x228070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22806Cu;
            // 0x228070: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22827Cu;
            goto label_22827c;
        }
    }
    ctx->pc = 0x228074u;
label_228074:
    // 0x228074: 0xc097f26  jal         func_25FC98
label_228078:
    if (ctx->pc == 0x228078u) {
        ctx->pc = 0x228078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228074u;
        // 0x228078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22807Cu;
        goto label_22807c;
    }
    ctx->pc = 0x228074u;
    SET_GPR_U32(ctx, 31, 0x22807Cu);
    ctx->pc = 0x228078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228074u;
    // 0x228078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x228074u, 0x22807Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22807Cu;
label_22807c:
    // 0x22807c: 0xc0d8de2  jal         func_363788
label_228080:
    if (ctx->pc == 0x228080u) {
        ctx->pc = 0x228080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22807Cu;
        // 0x228080: 0x8e040274  lw          $a0, 0x274($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228084u;
        goto label_228084;
    }
    ctx->pc = 0x22807Cu;
    SET_GPR_U32(ctx, 31, 0x228084u);
    ctx->pc = 0x228080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22807Cu;
    // 0x228080: 0x8e040274  lw          $a0, 0x274($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x22807Cu, 0x228084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228084u;
label_228084:
    // 0x228084: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x228084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_228088:
    // 0x228088: 0x5440007c  bnel        $v0, $zero, . + 4 + (0x7C << 2)
label_22808c:
    if (ctx->pc == 0x22808Cu) {
        ctx->pc = 0x22808Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228088u;
        // 0x22808c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228090u;
        goto label_228090;
    }
    ctx->pc = 0x228088u;
    {
        const bool branch_taken_0x228088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x228088) {
            ctx->pc = 0x22808Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228088u;
            // 0x22808c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22827Cu;
            goto label_22827c;
        }
    }
    ctx->pc = 0x228090u;
label_228090:
    // 0x228090: 0x92220fb8  lbu         $v0, 0xFB8($s1)
    ctx->pc = 0x228090u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4024)));
label_228094:
    // 0x228094: 0x50400079  beql        $v0, $zero, . + 4 + (0x79 << 2)
label_228098:
    if (ctx->pc == 0x228098u) {
        ctx->pc = 0x228098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228094u;
        // 0x228098: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22809Cu;
        goto label_22809c;
    }
    ctx->pc = 0x228094u;
    {
        const bool branch_taken_0x228094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228094) {
            ctx->pc = 0x228098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228094u;
            // 0x228098: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22827Cu;
            goto label_22827c;
        }
    }
    ctx->pc = 0x22809Cu;
label_22809c:
    // 0x22809c: 0x8e24032c  lw          $a0, 0x32C($s1)
    ctx->pc = 0x22809cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
label_2280a0:
    // 0x2280a0: 0x10800066  beqz        $a0, . + 4 + (0x66 << 2)
label_2280a4:
    if (ctx->pc == 0x2280A4u) {
        ctx->pc = 0x2280A8u;
        goto label_2280a8;
    }
    ctx->pc = 0x2280A0u;
    {
        const bool branch_taken_0x2280a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2280a0) {
            ctx->pc = 0x22823Cu;
            goto label_22823c;
        }
    }
    ctx->pc = 0x2280A8u;
label_2280a8:
    // 0x2280a8: 0x8c820228  lw          $v0, 0x228($a0)
    ctx->pc = 0x2280a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 552)));
label_2280ac:
    // 0x2280ac: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
label_2280b0:
    if (ctx->pc == 0x2280B0u) {
        ctx->pc = 0x2280B4u;
        goto label_2280b4;
    }
    ctx->pc = 0x2280ACu;
    {
        const bool branch_taken_0x2280ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2280ac) {
            ctx->pc = 0x22823Cu;
            goto label_22823c;
        }
    }
    ctx->pc = 0x2280B4u;
label_2280b4:
    // 0x2280b4: 0x8c82022c  lw          $v0, 0x22C($a0)
    ctx->pc = 0x2280b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 556)));
label_2280b8:
    // 0x2280b8: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
label_2280bc:
    if (ctx->pc == 0x2280BCu) {
        ctx->pc = 0x2280C0u;
        goto label_2280c0;
    }
    ctx->pc = 0x2280B8u;
    {
        const bool branch_taken_0x2280b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2280b8) {
            ctx->pc = 0x22823Cu;
            goto label_22823c;
        }
    }
    ctx->pc = 0x2280C0u;
label_2280c0:
    // 0x2280c0: 0xc0844c0  jal         func_211300
label_2280c4:
    if (ctx->pc == 0x2280C4u) {
        ctx->pc = 0x2280C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2280C0u;
        // 0x2280c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2280C8u;
        goto label_2280c8;
    }
    ctx->pc = 0x2280C0u;
    SET_GPR_U32(ctx, 31, 0x2280C8u);
    ctx->pc = 0x2280C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2280C0u;
    // 0x2280c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211300u, 0x2280C0u, 0x2280C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2280C8u;
label_2280c8:
    // 0x2280c8: 0x8e24032c  lw          $a0, 0x32C($s1)
    ctx->pc = 0x2280c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
label_2280cc:
    // 0x2280cc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2280d0:
    if (ctx->pc == 0x2280D0u) {
        ctx->pc = 0x2280D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2280CCu;
        // 0x2280d0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2280D4u;
        goto label_2280d4;
    }
    ctx->pc = 0x2280CCu;
    {
        const bool branch_taken_0x2280cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2280D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2280CCu;
        // 0x2280d0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2280cc) {
            ctx->pc = 0x2280E4u;
            goto label_2280e4;
        }
    }
    ctx->pc = 0x2280D4u;
label_2280d4:
    // 0x2280d4: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x2280d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_2280d8:
    // 0x2280d8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2280d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2280dc:
    // 0x2280dc: 0x40f809  jalr        $v0
label_2280e0:
    if (ctx->pc == 0x2280E0u) {
        ctx->pc = 0x2280E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2280DCu;
        // 0x2280e0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2280E4u;
        goto label_2280e4;
    }
    ctx->pc = 0x2280DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2280E4u);
        ctx->pc = 0x2280E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2280DCu;
        // 0x2280e0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2280DCu, 0x2280E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2280E4u;
label_2280e4:
    // 0x2280e4: 0xae20032c  sw          $zero, 0x32C($s1)
    ctx->pc = 0x2280e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 812), GPR_U32(ctx, 0));
label_2280e8:
    // 0x2280e8: 0x6400002  bltz        $s2, . + 4 + (0x2 << 2)
label_2280ec:
    if (ctx->pc == 0x2280ECu) {
        ctx->pc = 0x2280ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2280E8u;
        // 0x2280ec: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2280F0u;
        goto label_2280f0;
    }
    ctx->pc = 0x2280E8u;
    {
        const bool branch_taken_0x2280e8 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2280ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2280E8u;
        // 0x2280ec: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2280e8) {
            ctx->pc = 0x2280F4u;
            goto label_2280f4;
        }
    }
    ctx->pc = 0x2280F0u;
label_2280f0:
    // 0x2280f0: 0xae129860  sw          $s2, -0x67A0($s0)
    ctx->pc = 0x2280f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294940768), GPR_U32(ctx, 18));
label_2280f4:
    // 0x2280f4: 0x8e039860  lw          $v1, -0x67A0($s0)
    ctx->pc = 0x2280f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294940768)));
label_2280f8:
    // 0x2280f8: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x2280f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2280fc:
    // 0x2280fc: 0x10720011  beq         $v1, $s2, . + 4 + (0x11 << 2)
label_228100:
    if (ctx->pc == 0x228100u) {
        ctx->pc = 0x228100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2280FCu;
        // 0x228100: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x228104u;
        goto label_228104;
    }
    ctx->pc = 0x2280FCu;
    {
        const bool branch_taken_0x2280fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x228100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2280FCu;
        // 0x228100: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2280fc) {
            ctx->pc = 0x228144u;
            goto label_228144;
        }
    }
    ctx->pc = 0x228104u;
label_228104:
    // 0x228104: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_228108:
    if (ctx->pc == 0x228108u) {
        ctx->pc = 0x228108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228104u;
        // 0x228108: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22810Cu;
        goto label_22810c;
    }
    ctx->pc = 0x228104u;
    {
        const bool branch_taken_0x228104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x228108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228104u;
        // 0x228108: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228104) {
            ctx->pc = 0x22811Cu;
            goto label_22811c;
        }
    }
    ctx->pc = 0x22810Cu;
label_22810c:
    // 0x22810c: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_228110:
    if (ctx->pc == 0x228110u) {
        ctx->pc = 0x228110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22810Cu;
        // 0x228110: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228114u;
        goto label_228114;
    }
    ctx->pc = 0x22810Cu;
    {
        const bool branch_taken_0x22810c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x22810c) {
            ctx->pc = 0x228110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22810Cu;
            // 0x228110: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228130u;
            goto label_228130;
        }
    }
    ctx->pc = 0x228114u;
label_228114:
    // 0x228114: 0x10000015  b           . + 4 + (0x15 << 2)
label_228118:
    if (ctx->pc == 0x228118u) {
        ctx->pc = 0x22811Cu;
        goto label_22811c;
    }
    ctx->pc = 0x228114u;
    {
        const bool branch_taken_0x228114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228114) {
            ctx->pc = 0x22816Cu;
            goto label_22816c;
        }
    }
    ctx->pc = 0x22811Cu;
label_22811c:
    // 0x22811c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x22811cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_228120:
    // 0x228120: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_228124:
    if (ctx->pc == 0x228124u) {
        ctx->pc = 0x228124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228120u;
        // 0x228124: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228128u;
        goto label_228128;
    }
    ctx->pc = 0x228120u;
    {
        const bool branch_taken_0x228120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x228120) {
            ctx->pc = 0x228124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228120u;
            // 0x228124: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228158u;
            goto label_228158;
        }
    }
    ctx->pc = 0x228128u;
label_228128:
    // 0x228128: 0x10000010  b           . + 4 + (0x10 << 2)
label_22812c:
    if (ctx->pc == 0x22812Cu) {
        ctx->pc = 0x228130u;
        goto label_228130;
    }
    ctx->pc = 0x228128u;
    {
        const bool branch_taken_0x228128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x228128) {
            ctx->pc = 0x22816Cu;
            goto label_22816c;
        }
    }
    ctx->pc = 0x228130u;
label_228130:
    // 0x228130: 0xc085d2a  jal         func_2174A8
label_228134:
    if (ctx->pc == 0x228134u) {
        ctx->pc = 0x228134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228130u;
        // 0x228134: 0x24844498  addiu       $a0, $a0, 0x4498 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228138u;
        goto label_228138;
    }
    ctx->pc = 0x228130u;
    SET_GPR_U32(ctx, 31, 0x228138u);
    ctx->pc = 0x228134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228130u;
    // 0x228134: 0x24844498  addiu       $a0, $a0, 0x4498 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2174A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2174A8u, 0x228130u, 0x228138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228138u;
label_228138:
    // 0x228138: 0xae129860  sw          $s2, -0x67A0($s0)
    ctx->pc = 0x228138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294940768), GPR_U32(ctx, 18));
label_22813c:
    // 0x22813c: 0x1000000b  b           . + 4 + (0xB << 2)
label_228140:
    if (ctx->pc == 0x228140u) {
        ctx->pc = 0x228140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22813Cu;
        // 0x228140: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228144u;
        goto label_228144;
    }
    ctx->pc = 0x22813Cu;
    {
        const bool branch_taken_0x22813c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22813Cu;
        // 0x228140: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22813c) {
            ctx->pc = 0x22816Cu;
            goto label_22816c;
        }
    }
    ctx->pc = 0x228144u;
label_228144:
    // 0x228144: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x228144u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_228148:
    // 0x228148: 0xc085d2a  jal         func_2174A8
label_22814c:
    if (ctx->pc == 0x22814Cu) {
        ctx->pc = 0x22814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228148u;
        // 0x22814c: 0x248444a8  addiu       $a0, $a0, 0x44A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228150u;
        goto label_228150;
    }
    ctx->pc = 0x228148u;
    SET_GPR_U32(ctx, 31, 0x228150u);
    ctx->pc = 0x22814Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228148u;
    // 0x22814c: 0x248444a8  addiu       $a0, $a0, 0x44A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2174A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2174A8u, 0x228148u, 0x228150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228150u;
label_228150:
    // 0x228150: 0x10000004  b           . + 4 + (0x4 << 2)
label_228154:
    if (ctx->pc == 0x228154u) {
        ctx->pc = 0x228154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228150u;
        // 0x228154: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228158u;
        goto label_228158;
    }
    ctx->pc = 0x228150u;
    {
        const bool branch_taken_0x228150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x228154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228150u;
        // 0x228154: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228150) {
            ctx->pc = 0x228164u;
            goto label_228164;
        }
    }
    ctx->pc = 0x228158u;
label_228158:
    // 0x228158: 0xc085d2a  jal         func_2174A8
label_22815c:
    if (ctx->pc == 0x22815Cu) {
        ctx->pc = 0x22815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228158u;
        // 0x22815c: 0x248444b8  addiu       $a0, $a0, 0x44B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228160u;
        goto label_228160;
    }
    ctx->pc = 0x228158u;
    SET_GPR_U32(ctx, 31, 0x228160u);
    ctx->pc = 0x22815Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228158u;
    // 0x22815c: 0x248444b8  addiu       $a0, $a0, 0x44B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2174A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2174A8u, 0x228158u, 0x228160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228160u;
label_228160:
    // 0x228160: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x228160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_228164:
    // 0x228164: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x228164u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_228168:
    // 0x228168: 0xae039860  sw          $v1, -0x67A0($s0)
    ctx->pc = 0x228168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294940768), GPR_U32(ctx, 3));
label_22816c:
    // 0x22816c: 0xc083072  jal         func_20C1C8
label_228170:
    if (ctx->pc == 0x228170u) {
        ctx->pc = 0x228170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22816Cu;
        // 0x228170: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228174u;
        goto label_228174;
    }
    ctx->pc = 0x22816Cu;
    SET_GPR_U32(ctx, 31, 0x228174u);
    ctx->pc = 0x228170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22816Cu;
    // 0x228170: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C1C8u, 0x22816Cu, 0x228174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228174u;
label_228174:
    // 0x228174: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x228174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_228178:
    // 0x228178: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x228178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22817c:
    // 0x22817c: 0xc0966b4  jal         func_259AD0
label_228180:
    if (ctx->pc == 0x228180u) {
        ctx->pc = 0x228180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22817Cu;
        // 0x228180: 0xae22032c  sw          $v0, 0x32C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 812), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228184u;
        goto label_228184;
    }
    ctx->pc = 0x22817Cu;
    SET_GPR_U32(ctx, 31, 0x228184u);
    ctx->pc = 0x228180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22817Cu;
    // 0x228180: 0xae22032c  sw          $v0, 0x32C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 812), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259AD0u, 0x22817Cu, 0x228184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228184u;
label_228184:
    // 0x228184: 0xc08442a  jal         func_2110A8
label_228188:
    if (ctx->pc == 0x228188u) {
        ctx->pc = 0x228188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228184u;
        // 0x228188: 0x8e24032c  lw          $a0, 0x32C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22818Cu;
        goto label_22818c;
    }
    ctx->pc = 0x228184u;
    SET_GPR_U32(ctx, 31, 0x22818Cu);
    ctx->pc = 0x228188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228184u;
    // 0x228188: 0x8e24032c  lw          $a0, 0x32C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2110A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2110A8u, 0x228184u, 0x22818Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22818Cu;
label_22818c:
    // 0x22818c: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_228190:
    if (ctx->pc == 0x228190u) {
        ctx->pc = 0x228194u;
        goto label_228194;
    }
    ctx->pc = 0x22818Cu;
    {
        const bool branch_taken_0x22818c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x22818c) {
            ctx->pc = 0x2281A0u;
            goto label_2281a0;
        }
    }
    ctx->pc = 0x228194u;
label_228194:
    // 0x228194: 0x8e24032c  lw          $a0, 0x32C($s1)
    ctx->pc = 0x228194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
label_228198:
    // 0x228198: 0xc084492  jal         func_211248
label_22819c:
    if (ctx->pc == 0x22819Cu) {
        ctx->pc = 0x22819Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228198u;
        // 0x22819c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2281A0u;
        goto label_2281a0;
    }
    ctx->pc = 0x228198u;
    SET_GPR_U32(ctx, 31, 0x2281A0u);
    ctx->pc = 0x22819Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228198u;
    // 0x22819c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x211248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x211248u, 0x228198u, 0x2281A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2281A0u;
label_2281a0:
    // 0x2281a0: 0xc0857b4  jal         func_215ED0
label_2281a4:
    if (ctx->pc == 0x2281A4u) {
        ctx->pc = 0x2281A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2281A0u;
        // 0x2281a4: 0x8e24032c  lw          $a0, 0x32C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2281A8u;
        goto label_2281a8;
    }
    ctx->pc = 0x2281A0u;
    SET_GPR_U32(ctx, 31, 0x2281A8u);
    ctx->pc = 0x2281A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2281A0u;
    // 0x2281a4: 0x8e24032c  lw          $a0, 0x32C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215ED0u, 0x2281A0u, 0x2281A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2281A8u;
label_2281a8:
    // 0x2281a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2281a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2281ac:
    // 0x2281ac: 0xc08a1f2  jal         func_2287C8
label_2281b0:
    if (ctx->pc == 0x2281B0u) {
        ctx->pc = 0x2281B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2281ACu;
        // 0x2281b0: 0x240503e9  addiu       $a1, $zero, 0x3E9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2281B4u;
        goto label_2281b4;
    }
    ctx->pc = 0x2281ACu;
    SET_GPR_U32(ctx, 31, 0x2281B4u);
    ctx->pc = 0x2281B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2281ACu;
    // 0x2281b0: 0x240503e9  addiu       $a1, $zero, 0x3E9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x2281ACu, 0x2281B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2281B4u;
label_2281b4:
    // 0x2281b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2281b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2281b8:
    // 0x2281b8: 0xc0f70ce  jal         func_3DC338
label_2281bc:
    if (ctx->pc == 0x2281BCu) {
        ctx->pc = 0x2281BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2281B8u;
        // 0x2281bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2281C0u;
        goto label_2281c0;
    }
    ctx->pc = 0x2281B8u;
    SET_GPR_U32(ctx, 31, 0x2281C0u);
    ctx->pc = 0x2281BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2281B8u;
    // 0x2281bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2281B8u, 0x2281C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2281C0u;
label_2281c0:
    // 0x2281c0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2281c4:
    if (ctx->pc == 0x2281C4u) {
        ctx->pc = 0x2281C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2281C0u;
        // 0x2281c4: 0x8e24032c  lw          $a0, 0x32C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2281C8u;
        goto label_2281c8;
    }
    ctx->pc = 0x2281C0u;
    {
        const bool branch_taken_0x2281c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2281c0) {
            ctx->pc = 0x2281C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2281C0u;
            // 0x2281c4: 0x8e24032c  lw          $a0, 0x32C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2281D4u;
            goto label_2281d4;
        }
    }
    ctx->pc = 0x2281C8u;
label_2281c8:
    // 0x2281c8: 0xc0c4900  jal         func_312400
label_2281cc:
    if (ctx->pc == 0x2281CCu) {
        ctx->pc = 0x2281CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2281C8u;
        // 0x2281cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2281D0u;
        goto label_2281d0;
    }
    ctx->pc = 0x2281C8u;
    SET_GPR_U32(ctx, 31, 0x2281D0u);
    ctx->pc = 0x2281CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2281C8u;
    // 0x2281cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x2281C8u, 0x2281D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2281D0u;
label_2281d0:
    // 0x2281d0: 0x8e24032c  lw          $a0, 0x32C($s1)
    ctx->pc = 0x2281d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
label_2281d4:
    // 0x2281d4: 0xc096592  jal         func_259648
label_2281d8:
    if (ctx->pc == 0x2281D8u) {
        ctx->pc = 0x2281D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2281D4u;
        // 0x2281d8: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2281DCu;
        goto label_2281dc;
    }
    ctx->pc = 0x2281D4u;
    SET_GPR_U32(ctx, 31, 0x2281DCu);
    ctx->pc = 0x2281D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2281D4u;
    // 0x2281d8: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259648u, 0x2281D4u, 0x2281DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2281DCu;
label_2281dc:
    // 0x2281dc: 0x8e23032c  lw          $v1, 0x32C($s1)
    ctx->pc = 0x2281dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
label_2281e0:
    // 0x2281e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2281e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2281e4:
    // 0x2281e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2281e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2281e8:
    // 0x2281e8: 0xac620228  sw          $v0, 0x228($v1)
    ctx->pc = 0x2281e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 552), GPR_U32(ctx, 2));
label_2281ec:
    // 0x2281ec: 0xc683000c  lwc1        $f3, 0xC($s4)
    ctx->pc = 0x2281ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2281f0:
    // 0x2281f0: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x2281f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2281f4:
    // 0x2281f4: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x2281f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2281f8:
    // 0x2281f8: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x2281f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2281fc:
    // 0x2281fc: 0x8e24032c  lw          $a0, 0x32C($s1)
    ctx->pc = 0x2281fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
label_228200:
    // 0x228200: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x228200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_228204:
    // 0x228204: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x228204u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_228208:
    // 0x228208: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x228208u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_22820c:
    // 0x22820c: 0xc0966c0  jal         func_259B00
label_228210:
    if (ctx->pc == 0x228210u) {
        ctx->pc = 0x228210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22820Cu;
        // 0x228210: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x228214u;
        goto label_228214;
    }
    ctx->pc = 0x22820Cu;
    SET_GPR_U32(ctx, 31, 0x228214u);
    ctx->pc = 0x228210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22820Cu;
    // 0x228210: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x259B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259B00u, 0x22820Cu, 0x228214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228214u;
label_228214:
    // 0x228214: 0x8e220370  lw          $v0, 0x370($s1)
    ctx->pc = 0x228214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
label_228218:
    // 0x228218: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x228218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_22821c:
    // 0x22821c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_228220:
    if (ctx->pc == 0x228220u) {
        ctx->pc = 0x228224u;
        goto label_228224;
    }
    ctx->pc = 0x22821Cu;
    {
        const bool branch_taken_0x22821c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22821c) {
            ctx->pc = 0x22823Cu;
            goto label_22823c;
        }
    }
    ctx->pc = 0x228224u;
label_228224:
    // 0x228224: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x228224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_228228:
    // 0x228228: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x228228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_22822c:
    // 0x22822c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_228230:
    if (ctx->pc == 0x228230u) {
        ctx->pc = 0x228234u;
        goto label_228234;
    }
    ctx->pc = 0x22822Cu;
    {
        const bool branch_taken_0x22822c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22822c) {
            ctx->pc = 0x22823Cu;
            goto label_22823c;
        }
    }
    ctx->pc = 0x228234u;
label_228234:
    // 0x228234: 0xc0c13ae  jal         func_304EB8
label_228238:
    if (ctx->pc == 0x228238u) {
        ctx->pc = 0x228238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228234u;
        // 0x228238: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22823Cu;
        goto label_22823c;
    }
    ctx->pc = 0x228234u;
    SET_GPR_U32(ctx, 31, 0x22823Cu);
    ctx->pc = 0x228238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228234u;
    // 0x228238: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304EB8u, 0x228234u, 0x22823Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22823Cu;
label_22823c:
    // 0x22823c: 0xc06b640  jal         func_1AD900
label_228240:
    if (ctx->pc == 0x228240u) {
        ctx->pc = 0x228240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22823Cu;
        // 0x228240: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228244u;
        goto label_228244;
    }
    ctx->pc = 0x22823Cu;
    SET_GPR_U32(ctx, 31, 0x228244u);
    ctx->pc = 0x228240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22823Cu;
    // 0x228240: 0x8e240334  lw          $a0, 0x334($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD900u, 0x22823Cu, 0x228244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228244u;
label_228244:
    // 0x228244: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_228248:
    if (ctx->pc == 0x228248u) {
        ctx->pc = 0x228248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228244u;
        // 0x228248: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22824Cu;
        goto label_22824c;
    }
    ctx->pc = 0x228244u;
    {
        const bool branch_taken_0x228244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x228248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228244u;
        // 0x228248: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228244) {
            ctx->pc = 0x22827Cu;
            goto label_22827c;
        }
    }
    ctx->pc = 0x22824Cu;
label_22824c:
    // 0x22824c: 0xc62100d0  lwc1        $f1, 0xD0($s1)
    ctx->pc = 0x22824cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_228250:
    // 0x228250: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x228250u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_228254:
    // 0x228254: 0x0  nop
    ctx->pc = 0x228254u;
    // NOP
label_228258:
    // 0x228258: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x228258u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22825c:
    // 0x22825c: 0x0  nop
    ctx->pc = 0x22825cu;
    // NOP
label_228260:
    // 0x228260: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_228264:
    if (ctx->pc == 0x228264u) {
        ctx->pc = 0x228264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228260u;
        // 0x228264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228268u;
        goto label_228268;
    }
    ctx->pc = 0x228260u;
    {
        const bool branch_taken_0x228260 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x228264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228260u;
        // 0x228264: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228260) {
            ctx->pc = 0x22827Cu;
            goto label_22827c;
        }
    }
    ctx->pc = 0x228268u;
label_228268:
    // 0x228268: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x228268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_22826c:
    // 0x22826c: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x22826cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_228270:
    // 0x228270: 0x40f809  jalr        $v0
label_228274:
    if (ctx->pc == 0x228274u) {
        ctx->pc = 0x228274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228270u;
        // 0x228274: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228278u;
        goto label_228278;
    }
    ctx->pc = 0x228270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228278u);
        ctx->pc = 0x228274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228270u;
        // 0x228274: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228270u, 0x228278u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x228278u;
label_228278:
    // 0x228278: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x228278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22827c:
    // 0x22827c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x22827cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_228280:
    // 0x228280: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x228280u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_228284:
    // 0x228284: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x228284u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_228288:
    // 0x228288: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x228288u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_22828c:
    // 0x22828c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x22828cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_228290:
    // 0x228290: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x228290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_228294:
    // 0x228294: 0x3e00008  jr          $ra
label_228298:
    if (ctx->pc == 0x228298u) {
        ctx->pc = 0x228298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228294u;
        // 0x228298: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22829Cu;
        goto label_22829c;
    }
    ctx->pc = 0x228294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228294u;
        // 0x228298: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22829Cu;
label_22829c:
    // 0x22829c: 0x0  nop
    ctx->pc = 0x22829cu;
    // NOP
    ctx->pc = 0x2282a0u;
}

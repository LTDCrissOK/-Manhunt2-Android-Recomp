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

// Function: sub_003EB110
// Address: 0x3eb110 - 0x3eb248
void sub_003EB110_0x3eb110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EB110_0x3eb110");
#endif

    switch (ctx->pc) {
        case 0x3eb110u: goto label_3eb110;
        case 0x3eb114u: goto label_3eb114;
        case 0x3eb118u: goto label_3eb118;
        case 0x3eb11cu: goto label_3eb11c;
        case 0x3eb120u: goto label_3eb120;
        case 0x3eb124u: goto label_3eb124;
        case 0x3eb128u: goto label_3eb128;
        case 0x3eb12cu: goto label_3eb12c;
        case 0x3eb130u: goto label_3eb130;
        case 0x3eb134u: goto label_3eb134;
        case 0x3eb138u: goto label_3eb138;
        case 0x3eb13cu: goto label_3eb13c;
        case 0x3eb140u: goto label_3eb140;
        case 0x3eb144u: goto label_3eb144;
        case 0x3eb148u: goto label_3eb148;
        case 0x3eb14cu: goto label_3eb14c;
        case 0x3eb150u: goto label_3eb150;
        case 0x3eb154u: goto label_3eb154;
        case 0x3eb158u: goto label_3eb158;
        case 0x3eb15cu: goto label_3eb15c;
        case 0x3eb160u: goto label_3eb160;
        case 0x3eb164u: goto label_3eb164;
        case 0x3eb168u: goto label_3eb168;
        case 0x3eb16cu: goto label_3eb16c;
        case 0x3eb170u: goto label_3eb170;
        case 0x3eb174u: goto label_3eb174;
        case 0x3eb178u: goto label_3eb178;
        case 0x3eb17cu: goto label_3eb17c;
        case 0x3eb180u: goto label_3eb180;
        case 0x3eb184u: goto label_3eb184;
        case 0x3eb188u: goto label_3eb188;
        case 0x3eb18cu: goto label_3eb18c;
        case 0x3eb190u: goto label_3eb190;
        case 0x3eb194u: goto label_3eb194;
        case 0x3eb198u: goto label_3eb198;
        case 0x3eb19cu: goto label_3eb19c;
        case 0x3eb1a0u: goto label_3eb1a0;
        case 0x3eb1a4u: goto label_3eb1a4;
        case 0x3eb1a8u: goto label_3eb1a8;
        case 0x3eb1acu: goto label_3eb1ac;
        case 0x3eb1b0u: goto label_3eb1b0;
        case 0x3eb1b4u: goto label_3eb1b4;
        case 0x3eb1b8u: goto label_3eb1b8;
        case 0x3eb1bcu: goto label_3eb1bc;
        case 0x3eb1c0u: goto label_3eb1c0;
        case 0x3eb1c4u: goto label_3eb1c4;
        case 0x3eb1c8u: goto label_3eb1c8;
        case 0x3eb1ccu: goto label_3eb1cc;
        case 0x3eb1d0u: goto label_3eb1d0;
        case 0x3eb1d4u: goto label_3eb1d4;
        case 0x3eb1d8u: goto label_3eb1d8;
        case 0x3eb1dcu: goto label_3eb1dc;
        case 0x3eb1e0u: goto label_3eb1e0;
        case 0x3eb1e4u: goto label_3eb1e4;
        case 0x3eb1e8u: goto label_3eb1e8;
        case 0x3eb1ecu: goto label_3eb1ec;
        case 0x3eb1f0u: goto label_3eb1f0;
        case 0x3eb1f4u: goto label_3eb1f4;
        case 0x3eb1f8u: goto label_3eb1f8;
        case 0x3eb1fcu: goto label_3eb1fc;
        case 0x3eb200u: goto label_3eb200;
        case 0x3eb204u: goto label_3eb204;
        case 0x3eb208u: goto label_3eb208;
        case 0x3eb20cu: goto label_3eb20c;
        case 0x3eb210u: goto label_3eb210;
        case 0x3eb214u: goto label_3eb214;
        case 0x3eb218u: goto label_3eb218;
        case 0x3eb21cu: goto label_3eb21c;
        case 0x3eb220u: goto label_3eb220;
        case 0x3eb224u: goto label_3eb224;
        case 0x3eb228u: goto label_3eb228;
        case 0x3eb22cu: goto label_3eb22c;
        case 0x3eb230u: goto label_3eb230;
        case 0x3eb234u: goto label_3eb234;
        case 0x3eb238u: goto label_3eb238;
        case 0x3eb23cu: goto label_3eb23c;
        case 0x3eb240u: goto label_3eb240;
        case 0x3eb244u: goto label_3eb244;
        default: break;
    }

    ctx->pc = 0x3eb110u;

label_3eb110:
    // 0x3eb110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3eb110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3eb114:
    // 0x3eb114: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3eb114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3eb118:
    // 0x3eb118: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3eb118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3eb11c:
    // 0x3eb11c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3eb11cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eb120:
    // 0x3eb120: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3eb120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3eb124:
    // 0x3eb124: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3eb124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3eb128:
    // 0x3eb128: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eb128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb12c:
    // 0x3eb12c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3eb130:
    if (ctx->pc == 0x3EB130u) {
        ctx->pc = 0x3EB130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB12Cu;
        // 0x3eb130: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB134u;
        goto label_3eb134;
    }
    ctx->pc = 0x3EB12Cu;
    {
        const bool branch_taken_0x3eb12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB12Cu;
        // 0x3eb130: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb12c) {
            ctx->pc = 0x3EB1ACu;
            goto label_3eb1ac;
        }
    }
    ctx->pc = 0x3EB134u;
label_3eb134:
    // 0x3eb134: 0x0  nop
    ctx->pc = 0x3eb134u;
    // NOP
label_3eb138:
    // 0x3eb138: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eb138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb13c:
    // 0x3eb13c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3eb13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eb140:
    // 0x3eb140: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3eb144:
    if (ctx->pc == 0x3EB144u) {
        ctx->pc = 0x3EB144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB140u;
        // 0x3eb144: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB148u;
        goto label_3eb148;
    }
    ctx->pc = 0x3EB140u;
    {
        const bool branch_taken_0x3eb140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb140) {
            ctx->pc = 0x3EB144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB140u;
            // 0x3eb144: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB19Cu;
            goto label_3eb19c;
        }
    }
    ctx->pc = 0x3EB148u;
label_3eb148:
    // 0x3eb148: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3eb148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3eb14c:
    // 0x3eb14c: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3eb14cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3eb150:
    // 0x3eb150: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3eb150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3eb154:
    // 0x3eb154: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3eb158:
    if (ctx->pc == 0x3EB158u) {
        ctx->pc = 0x3EB158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB154u;
        // 0x3eb158: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB15Cu;
        goto label_3eb15c;
    }
    ctx->pc = 0x3EB154u;
    {
        const bool branch_taken_0x3eb154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3eb154) {
            ctx->pc = 0x3EB158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB154u;
            // 0x3eb158: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB188u;
            goto label_3eb188;
        }
    }
    ctx->pc = 0x3EB15Cu;
label_3eb15c:
    // 0x3eb15c: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3eb15cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3eb160:
    // 0x3eb160: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3eb160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb164:
    // 0x3eb164: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3eb164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3eb168:
    // 0x3eb168: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3eb168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3eb16c:
    // 0x3eb16c: 0x40f809  jalr        $v0
label_3eb170:
    if (ctx->pc == 0x3EB170u) {
        ctx->pc = 0x3EB170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB16Cu;
        // 0x3eb170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB174u;
        goto label_3eb174;
    }
    ctx->pc = 0x3EB16Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EB174u);
        ctx->pc = 0x3EB170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB16Cu;
        // 0x3eb170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB16Cu, 0x3EB174u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EB174u;
label_3eb174:
    // 0x3eb174: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3eb174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb178:
    // 0x3eb178: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3eb178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3eb17c:
    // 0x3eb17c: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3eb180:
    if (ctx->pc == 0x3EB180u) {
        ctx->pc = 0x3EB180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB17Cu;
        // 0x3eb180: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB184u;
        goto label_3eb184;
    }
    ctx->pc = 0x3EB17Cu;
    {
        const bool branch_taken_0x3eb17c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EB180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB17Cu;
        // 0x3eb180: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb17c) {
            ctx->pc = 0x3EB160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb160;
        }
    }
    ctx->pc = 0x3EB184u;
label_3eb184:
    // 0x3eb184: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eb184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb188:
    // 0x3eb188: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3eb188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eb18c:
    // 0x3eb18c: 0xc0f528a  jal         func_3D4A28
label_3eb190:
    if (ctx->pc == 0x3EB190u) {
        ctx->pc = 0x3EB190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB18Cu;
        // 0x3eb190: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB194u;
        goto label_3eb194;
    }
    ctx->pc = 0x3EB18Cu;
    SET_GPR_U32(ctx, 31, 0x3EB194u);
    ctx->pc = 0x3EB190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB18Cu;
    // 0x3eb190: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EB18Cu, 0x3EB194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB194u;
label_3eb194:
    // 0x3eb194: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3eb194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3eb198:
    // 0x3eb198: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3eb198u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3eb19c:
    // 0x3eb19c: 0xc0f5222  jal         func_3D4888
label_3eb1a0:
    if (ctx->pc == 0x3EB1A0u) {
        ctx->pc = 0x3EB1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB19Cu;
        // 0x3eb1a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB1A4u;
        goto label_3eb1a4;
    }
    ctx->pc = 0x3EB19Cu;
    SET_GPR_U32(ctx, 31, 0x3EB1A4u);
    ctx->pc = 0x3EB1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB19Cu;
    // 0x3eb1a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EB19Cu, 0x3EB1A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB1A4u;
label_3eb1a4:
    // 0x3eb1a4: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3eb1a8:
    if (ctx->pc == 0x3EB1A8u) {
        ctx->pc = 0x3EB1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB1A4u;
        // 0x3eb1a8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB1ACu;
        goto label_3eb1ac;
    }
    ctx->pc = 0x3EB1A4u;
    {
        const bool branch_taken_0x3eb1a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EB1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB1A4u;
        // 0x3eb1a8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb1a4) {
            ctx->pc = 0x3EB138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb138;
        }
    }
    ctx->pc = 0x3EB1ACu;
label_3eb1ac:
    // 0x3eb1ac: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eb1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb1b0:
    // 0x3eb1b0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3eb1b4:
    if (ctx->pc == 0x3EB1B4u) {
        ctx->pc = 0x3EB1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB1B0u;
        // 0x3eb1b4: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB1B8u;
        goto label_3eb1b8;
    }
    ctx->pc = 0x3EB1B0u;
    {
        const bool branch_taken_0x3eb1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EB1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB1B0u;
        // 0x3eb1b4: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb1b0) {
            ctx->pc = 0x3EB22Cu;
            goto label_3eb22c;
        }
    }
    ctx->pc = 0x3EB1B8u;
label_3eb1b8:
    // 0x3eb1b8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eb1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb1bc:
    // 0x3eb1bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3eb1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eb1c0:
    // 0x3eb1c0: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3eb1c4:
    if (ctx->pc == 0x3EB1C4u) {
        ctx->pc = 0x3EB1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB1C0u;
        // 0x3eb1c4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB1C8u;
        goto label_3eb1c8;
    }
    ctx->pc = 0x3EB1C0u;
    {
        const bool branch_taken_0x3eb1c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3eb1c0) {
            ctx->pc = 0x3EB1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB1C0u;
            // 0x3eb1c4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB21Cu;
            goto label_3eb21c;
        }
    }
    ctx->pc = 0x3EB1C8u;
label_3eb1c8:
    // 0x3eb1c8: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3eb1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3eb1cc:
    // 0x3eb1cc: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3eb1ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3eb1d0:
    // 0x3eb1d0: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3eb1d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3eb1d4:
    // 0x3eb1d4: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3eb1d8:
    if (ctx->pc == 0x3EB1D8u) {
        ctx->pc = 0x3EB1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB1D4u;
        // 0x3eb1d8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB1DCu;
        goto label_3eb1dc;
    }
    ctx->pc = 0x3EB1D4u;
    {
        const bool branch_taken_0x3eb1d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3eb1d4) {
            ctx->pc = 0x3EB1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EB1D4u;
            // 0x3eb1d8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EB208u;
            goto label_3eb208;
        }
    }
    ctx->pc = 0x3EB1DCu;
label_3eb1dc:
    // 0x3eb1dc: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3eb1dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3eb1e0:
    // 0x3eb1e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3eb1e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eb1e4:
    // 0x3eb1e4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3eb1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3eb1e8:
    // 0x3eb1e8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3eb1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3eb1ec:
    // 0x3eb1ec: 0x40f809  jalr        $v0
label_3eb1f0:
    if (ctx->pc == 0x3EB1F0u) {
        ctx->pc = 0x3EB1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB1ECu;
        // 0x3eb1f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB1F4u;
        goto label_3eb1f4;
    }
    ctx->pc = 0x3EB1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EB1F4u);
        ctx->pc = 0x3EB1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB1ECu;
        // 0x3eb1f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB1ECu, 0x3EB1F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EB1F4u;
label_3eb1f4:
    // 0x3eb1f4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3eb1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb1f8:
    // 0x3eb1f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3eb1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3eb1fc:
    // 0x3eb1fc: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3eb200:
    if (ctx->pc == 0x3EB200u) {
        ctx->pc = 0x3EB200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB1FCu;
        // 0x3eb200: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB204u;
        goto label_3eb204;
    }
    ctx->pc = 0x3EB1FCu;
    {
        const bool branch_taken_0x3eb1fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EB200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB1FCu;
        // 0x3eb200: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb1fc) {
            ctx->pc = 0x3EB1E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb1e0;
        }
    }
    ctx->pc = 0x3EB204u;
label_3eb204:
    // 0x3eb204: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eb204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb208:
    // 0x3eb208: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3eb208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3eb20c:
    // 0x3eb20c: 0xc0f528a  jal         func_3D4A28
label_3eb210:
    if (ctx->pc == 0x3EB210u) {
        ctx->pc = 0x3EB210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB20Cu;
        // 0x3eb210: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB214u;
        goto label_3eb214;
    }
    ctx->pc = 0x3EB20Cu;
    SET_GPR_U32(ctx, 31, 0x3EB214u);
    ctx->pc = 0x3EB210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB20Cu;
    // 0x3eb210: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EB20Cu, 0x3EB214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB214u;
label_3eb214:
    // 0x3eb214: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3eb214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3eb218:
    // 0x3eb218: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3eb218u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3eb21c:
    // 0x3eb21c: 0xc0f5222  jal         func_3D4888
label_3eb220:
    if (ctx->pc == 0x3EB220u) {
        ctx->pc = 0x3EB220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB21Cu;
        // 0x3eb220: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB224u;
        goto label_3eb224;
    }
    ctx->pc = 0x3EB21Cu;
    SET_GPR_U32(ctx, 31, 0x3EB224u);
    ctx->pc = 0x3EB220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EB21Cu;
    // 0x3eb220: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EB21Cu, 0x3EB224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EB224u;
label_3eb224:
    // 0x3eb224: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3eb228:
    if (ctx->pc == 0x3EB228u) {
        ctx->pc = 0x3EB228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB224u;
        // 0x3eb228: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB22Cu;
        goto label_3eb22c;
    }
    ctx->pc = 0x3EB224u;
    {
        const bool branch_taken_0x3eb224 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EB228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB224u;
        // 0x3eb228: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eb224) {
            ctx->pc = 0x3EB1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3eb1b8;
        }
    }
    ctx->pc = 0x3EB22Cu;
label_3eb22c:
    // 0x3eb22c: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3eb22cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_3eb230:
    // 0x3eb230: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3eb230u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3eb234:
    // 0x3eb234: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3eb234u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3eb238:
    // 0x3eb238: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3eb238u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3eb23c:
    // 0x3eb23c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3eb23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3eb240:
    // 0x3eb240: 0x3e00008  jr          $ra
label_3eb244:
    if (ctx->pc == 0x3EB244u) {
        ctx->pc = 0x3EB244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB240u;
        // 0x3eb244: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EB248u;
        goto label_fallthrough_0x3eb240;
    }
    ctx->pc = 0x3EB240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EB244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EB240u;
        // 0x3eb244: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EB240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3eb240:
    ctx->pc = 0x3EB248u;
}

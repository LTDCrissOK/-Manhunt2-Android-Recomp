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

// Function: sub_003EA150
// Address: 0x3ea150 - 0x3ea288
void sub_003EA150_0x3ea150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EA150_0x3ea150");
#endif

    switch (ctx->pc) {
        case 0x3ea150u: goto label_3ea150;
        case 0x3ea154u: goto label_3ea154;
        case 0x3ea158u: goto label_3ea158;
        case 0x3ea15cu: goto label_3ea15c;
        case 0x3ea160u: goto label_3ea160;
        case 0x3ea164u: goto label_3ea164;
        case 0x3ea168u: goto label_3ea168;
        case 0x3ea16cu: goto label_3ea16c;
        case 0x3ea170u: goto label_3ea170;
        case 0x3ea174u: goto label_3ea174;
        case 0x3ea178u: goto label_3ea178;
        case 0x3ea17cu: goto label_3ea17c;
        case 0x3ea180u: goto label_3ea180;
        case 0x3ea184u: goto label_3ea184;
        case 0x3ea188u: goto label_3ea188;
        case 0x3ea18cu: goto label_3ea18c;
        case 0x3ea190u: goto label_3ea190;
        case 0x3ea194u: goto label_3ea194;
        case 0x3ea198u: goto label_3ea198;
        case 0x3ea19cu: goto label_3ea19c;
        case 0x3ea1a0u: goto label_3ea1a0;
        case 0x3ea1a4u: goto label_3ea1a4;
        case 0x3ea1a8u: goto label_3ea1a8;
        case 0x3ea1acu: goto label_3ea1ac;
        case 0x3ea1b0u: goto label_3ea1b0;
        case 0x3ea1b4u: goto label_3ea1b4;
        case 0x3ea1b8u: goto label_3ea1b8;
        case 0x3ea1bcu: goto label_3ea1bc;
        case 0x3ea1c0u: goto label_3ea1c0;
        case 0x3ea1c4u: goto label_3ea1c4;
        case 0x3ea1c8u: goto label_3ea1c8;
        case 0x3ea1ccu: goto label_3ea1cc;
        case 0x3ea1d0u: goto label_3ea1d0;
        case 0x3ea1d4u: goto label_3ea1d4;
        case 0x3ea1d8u: goto label_3ea1d8;
        case 0x3ea1dcu: goto label_3ea1dc;
        case 0x3ea1e0u: goto label_3ea1e0;
        case 0x3ea1e4u: goto label_3ea1e4;
        case 0x3ea1e8u: goto label_3ea1e8;
        case 0x3ea1ecu: goto label_3ea1ec;
        case 0x3ea1f0u: goto label_3ea1f0;
        case 0x3ea1f4u: goto label_3ea1f4;
        case 0x3ea1f8u: goto label_3ea1f8;
        case 0x3ea1fcu: goto label_3ea1fc;
        case 0x3ea200u: goto label_3ea200;
        case 0x3ea204u: goto label_3ea204;
        case 0x3ea208u: goto label_3ea208;
        case 0x3ea20cu: goto label_3ea20c;
        case 0x3ea210u: goto label_3ea210;
        case 0x3ea214u: goto label_3ea214;
        case 0x3ea218u: goto label_3ea218;
        case 0x3ea21cu: goto label_3ea21c;
        case 0x3ea220u: goto label_3ea220;
        case 0x3ea224u: goto label_3ea224;
        case 0x3ea228u: goto label_3ea228;
        case 0x3ea22cu: goto label_3ea22c;
        case 0x3ea230u: goto label_3ea230;
        case 0x3ea234u: goto label_3ea234;
        case 0x3ea238u: goto label_3ea238;
        case 0x3ea23cu: goto label_3ea23c;
        case 0x3ea240u: goto label_3ea240;
        case 0x3ea244u: goto label_3ea244;
        case 0x3ea248u: goto label_3ea248;
        case 0x3ea24cu: goto label_3ea24c;
        case 0x3ea250u: goto label_3ea250;
        case 0x3ea254u: goto label_3ea254;
        case 0x3ea258u: goto label_3ea258;
        case 0x3ea25cu: goto label_3ea25c;
        case 0x3ea260u: goto label_3ea260;
        case 0x3ea264u: goto label_3ea264;
        case 0x3ea268u: goto label_3ea268;
        case 0x3ea26cu: goto label_3ea26c;
        case 0x3ea270u: goto label_3ea270;
        case 0x3ea274u: goto label_3ea274;
        case 0x3ea278u: goto label_3ea278;
        case 0x3ea27cu: goto label_3ea27c;
        case 0x3ea280u: goto label_3ea280;
        case 0x3ea284u: goto label_3ea284;
        default: break;
    }

    ctx->pc = 0x3ea150u;

label_3ea150:
    // 0x3ea150: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ea150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3ea154:
    // 0x3ea154: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ea154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3ea158:
    // 0x3ea158: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ea158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3ea15c:
    // 0x3ea15c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ea15cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ea160:
    // 0x3ea160: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3ea160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3ea164:
    // 0x3ea164: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3ea164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3ea168:
    // 0x3ea168: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ea168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea16c:
    // 0x3ea16c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3ea170:
    if (ctx->pc == 0x3EA170u) {
        ctx->pc = 0x3EA170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA16Cu;
        // 0x3ea170: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA174u;
        goto label_3ea174;
    }
    ctx->pc = 0x3EA16Cu;
    {
        const bool branch_taken_0x3ea16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA16Cu;
        // 0x3ea170: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea16c) {
            ctx->pc = 0x3EA1ECu;
            goto label_3ea1ec;
        }
    }
    ctx->pc = 0x3EA174u;
label_3ea174:
    // 0x3ea174: 0x0  nop
    ctx->pc = 0x3ea174u;
    // NOP
label_3ea178:
    // 0x3ea178: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ea178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea17c:
    // 0x3ea17c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ea17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea180:
    // 0x3ea180: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3ea184:
    if (ctx->pc == 0x3EA184u) {
        ctx->pc = 0x3EA184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA180u;
        // 0x3ea184: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA188u;
        goto label_3ea188;
    }
    ctx->pc = 0x3EA180u;
    {
        const bool branch_taken_0x3ea180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea180) {
            ctx->pc = 0x3EA184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA180u;
            // 0x3ea184: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA1DCu;
            goto label_3ea1dc;
        }
    }
    ctx->pc = 0x3EA188u;
label_3ea188:
    // 0x3ea188: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3ea188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3ea18c:
    // 0x3ea18c: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3ea18cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3ea190:
    // 0x3ea190: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3ea190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3ea194:
    // 0x3ea194: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3ea198:
    if (ctx->pc == 0x3EA198u) {
        ctx->pc = 0x3EA198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA194u;
        // 0x3ea198: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA19Cu;
        goto label_3ea19c;
    }
    ctx->pc = 0x3EA194u;
    {
        const bool branch_taken_0x3ea194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3ea194) {
            ctx->pc = 0x3EA198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA194u;
            // 0x3ea198: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA1C8u;
            goto label_3ea1c8;
        }
    }
    ctx->pc = 0x3EA19Cu;
label_3ea19c:
    // 0x3ea19c: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3ea19cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3ea1a0:
    // 0x3ea1a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ea1a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ea1a4:
    // 0x3ea1a4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3ea1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3ea1a8:
    // 0x3ea1a8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3ea1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3ea1ac:
    // 0x3ea1ac: 0x40f809  jalr        $v0
label_3ea1b0:
    if (ctx->pc == 0x3EA1B0u) {
        ctx->pc = 0x3EA1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA1ACu;
        // 0x3ea1b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA1B4u;
        goto label_3ea1b4;
    }
    ctx->pc = 0x3EA1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EA1B4u);
        ctx->pc = 0x3EA1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA1ACu;
        // 0x3ea1b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA1ACu, 0x3EA1B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EA1B4u;
label_3ea1b4:
    // 0x3ea1b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ea1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea1b8:
    // 0x3ea1b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ea1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ea1bc:
    // 0x3ea1bc: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3ea1c0:
    if (ctx->pc == 0x3EA1C0u) {
        ctx->pc = 0x3EA1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA1BCu;
        // 0x3ea1c0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA1C4u;
        goto label_3ea1c4;
    }
    ctx->pc = 0x3EA1BCu;
    {
        const bool branch_taken_0x3ea1bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EA1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA1BCu;
        // 0x3ea1c0: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea1bc) {
            ctx->pc = 0x3EA1A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea1a0;
        }
    }
    ctx->pc = 0x3EA1C4u;
label_3ea1c4:
    // 0x3ea1c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ea1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea1c8:
    // 0x3ea1c8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3ea1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea1cc:
    // 0x3ea1cc: 0xc0f528a  jal         func_3D4A28
label_3ea1d0:
    if (ctx->pc == 0x3EA1D0u) {
        ctx->pc = 0x3EA1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA1CCu;
        // 0x3ea1d0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA1D4u;
        goto label_3ea1d4;
    }
    ctx->pc = 0x3EA1CCu;
    SET_GPR_U32(ctx, 31, 0x3EA1D4u);
    ctx->pc = 0x3EA1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA1CCu;
    // 0x3ea1d0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EA1CCu, 0x3EA1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA1D4u;
label_3ea1d4:
    // 0x3ea1d4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ea1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea1d8:
    // 0x3ea1d8: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3ea1d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3ea1dc:
    // 0x3ea1dc: 0xc0f5222  jal         func_3D4888
label_3ea1e0:
    if (ctx->pc == 0x3EA1E0u) {
        ctx->pc = 0x3EA1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA1DCu;
        // 0x3ea1e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA1E4u;
        goto label_3ea1e4;
    }
    ctx->pc = 0x3EA1DCu;
    SET_GPR_U32(ctx, 31, 0x3EA1E4u);
    ctx->pc = 0x3EA1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA1DCu;
    // 0x3ea1e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EA1DCu, 0x3EA1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA1E4u;
label_3ea1e4:
    // 0x3ea1e4: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3ea1e8:
    if (ctx->pc == 0x3EA1E8u) {
        ctx->pc = 0x3EA1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA1E4u;
        // 0x3ea1e8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA1ECu;
        goto label_3ea1ec;
    }
    ctx->pc = 0x3EA1E4u;
    {
        const bool branch_taken_0x3ea1e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EA1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA1E4u;
        // 0x3ea1e8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea1e4) {
            ctx->pc = 0x3EA178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea178;
        }
    }
    ctx->pc = 0x3EA1ECu;
label_3ea1ec:
    // 0x3ea1ec: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ea1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea1f0:
    // 0x3ea1f0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3ea1f4:
    if (ctx->pc == 0x3EA1F4u) {
        ctx->pc = 0x3EA1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA1F0u;
        // 0x3ea1f4: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA1F8u;
        goto label_3ea1f8;
    }
    ctx->pc = 0x3EA1F0u;
    {
        const bool branch_taken_0x3ea1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA1F0u;
        // 0x3ea1f4: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea1f0) {
            ctx->pc = 0x3EA26Cu;
            goto label_3ea26c;
        }
    }
    ctx->pc = 0x3EA1F8u;
label_3ea1f8:
    // 0x3ea1f8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ea1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea1fc:
    // 0x3ea1fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ea1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea200:
    // 0x3ea200: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3ea204:
    if (ctx->pc == 0x3EA204u) {
        ctx->pc = 0x3EA204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA200u;
        // 0x3ea204: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA208u;
        goto label_3ea208;
    }
    ctx->pc = 0x3EA200u;
    {
        const bool branch_taken_0x3ea200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea200) {
            ctx->pc = 0x3EA204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA200u;
            // 0x3ea204: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA25Cu;
            goto label_3ea25c;
        }
    }
    ctx->pc = 0x3EA208u;
label_3ea208:
    // 0x3ea208: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3ea208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3ea20c:
    // 0x3ea20c: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3ea20cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3ea210:
    // 0x3ea210: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3ea210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3ea214:
    // 0x3ea214: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3ea218:
    if (ctx->pc == 0x3EA218u) {
        ctx->pc = 0x3EA218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA214u;
        // 0x3ea218: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA21Cu;
        goto label_3ea21c;
    }
    ctx->pc = 0x3EA214u;
    {
        const bool branch_taken_0x3ea214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3ea214) {
            ctx->pc = 0x3EA218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA214u;
            // 0x3ea218: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA248u;
            goto label_3ea248;
        }
    }
    ctx->pc = 0x3EA21Cu;
label_3ea21c:
    // 0x3ea21c: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3ea21cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3ea220:
    // 0x3ea220: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ea220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ea224:
    // 0x3ea224: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3ea224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3ea228:
    // 0x3ea228: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3ea228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3ea22c:
    // 0x3ea22c: 0x40f809  jalr        $v0
label_3ea230:
    if (ctx->pc == 0x3EA230u) {
        ctx->pc = 0x3EA230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA22Cu;
        // 0x3ea230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA234u;
        goto label_3ea234;
    }
    ctx->pc = 0x3EA22Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EA234u);
        ctx->pc = 0x3EA230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA22Cu;
        // 0x3ea230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA22Cu, 0x3EA234u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EA234u;
label_3ea234:
    // 0x3ea234: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3ea234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea238:
    // 0x3ea238: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ea238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ea23c:
    // 0x3ea23c: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3ea240:
    if (ctx->pc == 0x3EA240u) {
        ctx->pc = 0x3EA240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA23Cu;
        // 0x3ea240: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA244u;
        goto label_3ea244;
    }
    ctx->pc = 0x3EA23Cu;
    {
        const bool branch_taken_0x3ea23c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EA240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA23Cu;
        // 0x3ea240: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea23c) {
            ctx->pc = 0x3EA220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea220;
        }
    }
    ctx->pc = 0x3EA244u;
label_3ea244:
    // 0x3ea244: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ea244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea248:
    // 0x3ea248: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3ea248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea24c:
    // 0x3ea24c: 0xc0f528a  jal         func_3D4A28
label_3ea250:
    if (ctx->pc == 0x3EA250u) {
        ctx->pc = 0x3EA250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA24Cu;
        // 0x3ea250: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA254u;
        goto label_3ea254;
    }
    ctx->pc = 0x3EA24Cu;
    SET_GPR_U32(ctx, 31, 0x3EA254u);
    ctx->pc = 0x3EA250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA24Cu;
    // 0x3ea250: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EA24Cu, 0x3EA254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA254u;
label_3ea254:
    // 0x3ea254: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ea254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea258:
    // 0x3ea258: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3ea258u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3ea25c:
    // 0x3ea25c: 0xc0f5222  jal         func_3D4888
label_3ea260:
    if (ctx->pc == 0x3EA260u) {
        ctx->pc = 0x3EA260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA25Cu;
        // 0x3ea260: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA264u;
        goto label_3ea264;
    }
    ctx->pc = 0x3EA25Cu;
    SET_GPR_U32(ctx, 31, 0x3EA264u);
    ctx->pc = 0x3EA260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA25Cu;
    // 0x3ea260: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EA25Cu, 0x3EA264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA264u;
label_3ea264:
    // 0x3ea264: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3ea268:
    if (ctx->pc == 0x3EA268u) {
        ctx->pc = 0x3EA268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA264u;
        // 0x3ea268: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA26Cu;
        goto label_3ea26c;
    }
    ctx->pc = 0x3EA264u;
    {
        const bool branch_taken_0x3ea264 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EA268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA264u;
        // 0x3ea268: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea264) {
            ctx->pc = 0x3EA1F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea1f8;
        }
    }
    ctx->pc = 0x3EA26Cu;
label_3ea26c:
    // 0x3ea26c: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3ea26cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_3ea270:
    // 0x3ea270: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ea270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ea274:
    // 0x3ea274: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ea274u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3ea278:
    // 0x3ea278: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ea278u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ea27c:
    // 0x3ea27c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3ea27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3ea280:
    // 0x3ea280: 0x3e00008  jr          $ra
label_3ea284:
    if (ctx->pc == 0x3EA284u) {
        ctx->pc = 0x3EA284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA280u;
        // 0x3ea284: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA288u;
        goto label_fallthrough_0x3ea280;
    }
    ctx->pc = 0x3EA280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EA284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA280u;
        // 0x3ea284: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ea280:
    ctx->pc = 0x3EA288u;
}

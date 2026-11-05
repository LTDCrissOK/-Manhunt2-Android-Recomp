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

// Function: sub_00308058
// Address: 0x308058 - 0x308270
void sub_00308058_0x308058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308058_0x308058");
#endif

    switch (ctx->pc) {
        case 0x308078u: goto label_308078;
        case 0x308088u: goto label_308088;
        case 0x308094u: goto label_308094;
        case 0x3080acu: goto label_3080ac;
        case 0x308118u: goto label_308118;
        case 0x308138u: goto label_308138;
        case 0x308140u: goto label_308140;
        case 0x30814cu: goto label_30814c;
        case 0x308170u: goto label_308170;
        case 0x308180u: goto label_308180;
        case 0x3081ccu: goto label_3081cc;
        case 0x3081f0u: goto label_3081f0;
        case 0x308218u: goto label_308218;
        case 0x308228u: goto label_308228;
        case 0x308238u: goto label_308238;
        default: break;
    }

    ctx->pc = 0x308058u;

    // 0x308058: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x308058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30805c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30805cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x308060: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x308060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x308064: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x308064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308068: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x308068u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30806c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30806cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x308070: 0xc0b9400  jal         func_2E5000
    ctx->pc = 0x308070u;
    SET_GPR_U32(ctx, 31, 0x308078u);
    ctx->pc = 0x308074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308070u;
    // 0x308074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5000u, 0x308070u, 0x308078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308078u;
label_308078:
    // 0x308078: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x308078u;
    {
        const bool branch_taken_0x308078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x308078) {
            ctx->pc = 0x30807Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308078u;
            // 0x30807c: 0x8e0211e4  lw          $v0, 0x11E4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30809Cu;
            goto label_30809c;
        }
    }
    ctx->pc = 0x308080u;
    // 0x308080: 0xc0c1aa6  jal         func_306A98
    ctx->pc = 0x308080u;
    SET_GPR_U32(ctx, 31, 0x308088u);
    ctx->pc = 0x308084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308080u;
    // 0x308084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306A98u, 0x308080u, 0x308088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308088u;
label_308088:
    // 0x308088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x308088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30808c: 0xc0bed52  jal         func_2FB548
    ctx->pc = 0x30808Cu;
    SET_GPR_U32(ctx, 31, 0x308094u);
    ctx->pc = 0x308090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30808Cu;
    // 0x308090: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB548u, 0x30808Cu, 0x308094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308094u;
label_308094:
    // 0x308094: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x308094u;
    {
        const bool branch_taken_0x308094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308094u;
        // 0x308098: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308094) {
            ctx->pc = 0x30821Cu;
            goto label_30821c;
        }
    }
    ctx->pc = 0x30809Cu;
label_30809c:
    // 0x30809c: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x30809Cu;
    {
        const bool branch_taken_0x30809c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3080A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30809Cu;
        // 0x3080a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30809c) {
            ctx->pc = 0x3081F8u;
            goto label_3081f8;
        }
    }
    ctx->pc = 0x3080A4u;
    // 0x3080a4: 0xc08e3b2  jal         func_238EC8
    ctx->pc = 0x3080A4u;
    SET_GPR_U32(ctx, 31, 0x3080ACu);
    ctx->pc = 0x3080A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3080A4u;
    // 0x3080a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238EC8u, 0x3080A4u, 0x3080ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3080ACu;
label_3080ac:
    // 0x3080ac: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x3080acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x3080b0: 0x2403078f  addiu       $v1, $zero, 0x78F
    ctx->pc = 0x3080b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1935));
    // 0x3080b4: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x3080b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x3080b8: 0x10830026  beq         $a0, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x3080B8u;
    {
        const bool branch_taken_0x3080b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3080BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3080B8u;
        // 0x3080bc: 0x28820790  slti        $v0, $a0, 0x790 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1936) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3080b8) {
            ctx->pc = 0x308154u;
            goto label_308154;
        }
    }
    ctx->pc = 0x3080C0u;
    // 0x3080c0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3080C0u;
    {
        const bool branch_taken_0x3080c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3080C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3080C0u;
        // 0x3080c4: 0x24020690  addiu       $v0, $zero, 0x690 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1680));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3080c0) {
            ctx->pc = 0x3080ECu;
            goto label_3080ec;
        }
    }
    ctx->pc = 0x3080C8u;
    // 0x3080c8: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3080C8u;
    {
        const bool branch_taken_0x3080c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3080CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3080C8u;
        // 0x3080cc: 0x28820690  slti        $v0, $a0, 0x690 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1680) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3080c8) {
            ctx->pc = 0x30810Cu;
            goto label_30810c;
        }
    }
    ctx->pc = 0x3080D0u;
    // 0x3080d0: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x3080D0u;
    {
        const bool branch_taken_0x3080d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3080D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3080D0u;
        // 0x3080d4: 0x2482f965  addiu       $v0, $a0, -0x69B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965605));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3080d0) {
            ctx->pc = 0x3081D4u;
            goto label_3081d4;
        }
    }
    ctx->pc = 0x3080D8u;
    // 0x3080d8: 0x2882078b  slti        $v0, $a0, 0x78B
    ctx->pc = 0x3080d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1931) ? 1 : 0);
    // 0x3080dc: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x3080DCu;
    {
        const bool branch_taken_0x3080dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3080E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3080DCu;
        // 0x3080e0: 0x2482f965  addiu       $v0, $a0, -0x69B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965605));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3080dc) {
            ctx->pc = 0x3081D4u;
            goto label_3081d4;
        }
    }
    ctx->pc = 0x3080E4u;
    // 0x3080e4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3080E4u;
    {
        const bool branch_taken_0x3080e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3080E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3080E4u;
        // 0x3080e8: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3080e4) {
            ctx->pc = 0x308120u;
            goto label_308120;
        }
    }
    ctx->pc = 0x3080ECu;
label_3080ec:
    // 0x3080ec: 0x28820792  slti        $v0, $a0, 0x792
    ctx->pc = 0x3080ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1938) ? 1 : 0);
    // 0x3080f0: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x3080F0u;
    {
        const bool branch_taken_0x3080f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3080f0) {
            ctx->pc = 0x3080F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3080F0u;
            // 0x3080f4: 0x8e0211e4  lw          $v0, 0x11E4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4580)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3081A8u;
            goto label_3081a8;
        }
    }
    ctx->pc = 0x3080F8u;
    // 0x3080f8: 0x28820794  slti        $v0, $a0, 0x794
    ctx->pc = 0x3080f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1940) ? 1 : 0);
    // 0x3080fc: 0x50400035  beql        $v0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x3080FCu;
    {
        const bool branch_taken_0x3080fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3080fc) {
            ctx->pc = 0x308100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3080FCu;
            // 0x308100: 0x2482f965  addiu       $v0, $a0, -0x69B (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965605));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3081D4u;
            goto label_3081d4;
        }
    }
    ctx->pc = 0x308104u;
    // 0x308104: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x308104u;
    {
        const bool branch_taken_0x308104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308104u;
        // 0x308108: 0x8e0211e4  lw          $v0, 0x11E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4580)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308104) {
            ctx->pc = 0x3081BCu;
            goto label_3081bc;
        }
    }
    ctx->pc = 0x30810Cu;
label_30810c:
    // 0x30810c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30810cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308110: 0xc0bc5e2  jal         func_2F1788
    ctx->pc = 0x308110u;
    SET_GPR_U32(ctx, 31, 0x308118u);
    ctx->pc = 0x308114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308110u;
    // 0x308114: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1788u, 0x308110u, 0x308118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308118u;
label_308118:
    // 0x308118: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x308118u;
    {
        const bool branch_taken_0x308118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308118u;
        // 0x30811c: 0xae0004f4  sw          $zero, 0x4F4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308118) {
            ctx->pc = 0x3081E4u;
            goto label_3081e4;
        }
    }
    ctx->pc = 0x308120u;
label_308120:
    // 0x308120: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x308120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x308124: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x308124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x308128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30812c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30812cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x308130: 0xc08dc16  jal         func_237058
    ctx->pc = 0x308130u;
    SET_GPR_U32(ctx, 31, 0x308138u);
    ctx->pc = 0x308134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308130u;
    // 0x308134: 0xae0211c0  sw          $v0, 0x11C0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237058u, 0x308130u, 0x308138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308138u;
label_308138:
    // 0x308138: 0xc08e960  jal         func_23A580
    ctx->pc = 0x308138u;
    SET_GPR_U32(ctx, 31, 0x308140u);
    ctx->pc = 0x30813Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308138u;
    // 0x30813c: 0x8e0411e4  lw          $a0, 0x11E4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4580)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23A580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23A580u, 0x308138u, 0x308140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308140u;
label_308140:
    // 0x308140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x308140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308144: 0xc0cda26  jal         func_336898
    ctx->pc = 0x308144u;
    SET_GPR_U32(ctx, 31, 0x30814Cu);
    ctx->pc = 0x308148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308144u;
    // 0x308148: 0x2405004f  addiu       $a1, $zero, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x308144u, 0x30814Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30814Cu;
label_30814c:
    // 0x30814c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x30814Cu;
    {
        const bool branch_taken_0x30814c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30814Cu;
        // 0x308150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30814c) {
            ctx->pc = 0x30821Cu;
            goto label_30821c;
        }
    }
    ctx->pc = 0x308154u;
label_308154:
    // 0x308154: 0x8e0211e4  lw          $v0, 0x11E4($s0)
    ctx->pc = 0x308154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4580)));
    // 0x308158: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x308158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x30815c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x30815cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x308160: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x308160u;
    {
        const bool branch_taken_0x308160 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x308160) {
            ctx->pc = 0x308164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308160u;
            // 0x308164: 0x8e0211c0  lw          $v0, 0x11C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308194u;
            goto label_308194;
        }
    }
    ctx->pc = 0x308168u;
    // 0x308168: 0xc0c580c  jal         func_316030
    ctx->pc = 0x308168u;
    SET_GPR_U32(ctx, 31, 0x308170u);
    ctx->pc = 0x30816Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308168u;
    // 0x30816c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316030u, 0x308168u, 0x308170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308170u;
label_308170:
    // 0x308170: 0x8e0311e4  lw          $v1, 0x11E4($s0)
    ctx->pc = 0x308170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4580)));
    // 0x308174: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x308174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308178: 0xc0c885e  jal         func_322178
    ctx->pc = 0x308178u;
    SET_GPR_U32(ctx, 31, 0x308180u);
    ctx->pc = 0x30817Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308178u;
    // 0x30817c: 0x8c650104  lw          $a1, 0x104($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322178u, 0x308178u, 0x308180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308180u;
label_308180:
    // 0x308180: 0x8e030388  lw          $v1, 0x388($s0)
    ctx->pc = 0x308180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
    // 0x308184: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x308184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x308188: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x308188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x30818c: 0xac6200c0  sw          $v0, 0xC0($v1)
    ctx->pc = 0x30818cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 2));
    // 0x308190: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x308190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_308194:
    // 0x308194: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x308194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x308198: 0xa20010ce  sb          $zero, 0x10CE($s0)
    ctx->pc = 0x308198u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4302), (uint8_t)GPR_U32(ctx, 0));
    // 0x30819c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30819cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3081a0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3081A0u;
    {
        const bool branch_taken_0x3081a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3081A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3081A0u;
        // 0x3081a4: 0xae0211c0  sw          $v0, 0x11C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3081a0) {
            ctx->pc = 0x308218u;
            goto label_308218;
        }
    }
    ctx->pc = 0x3081A8u;
label_3081a8:
    // 0x3081a8: 0x8c4303a4  lw          $v1, 0x3A4($v0)
    ctx->pc = 0x3081a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 932)));
    // 0x3081ac: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3081ACu;
    {
        const bool branch_taken_0x3081ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3081B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3081ACu;
        // 0x3081b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3081ac) {
            ctx->pc = 0x308218u;
            goto label_308218;
        }
    }
    ctx->pc = 0x3081B4u;
    // 0x3081b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3081B4u;
    {
        const bool branch_taken_0x3081b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3081b4) {
            ctx->pc = 0x3081C4u;
            goto label_3081c4;
        }
    }
    ctx->pc = 0x3081BCu;
label_3081bc:
    // 0x3081bc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3081BCu;
    {
        const bool branch_taken_0x3081bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3081C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3081BCu;
        // 0x3081c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3081bc) {
            ctx->pc = 0x308218u;
            goto label_308218;
        }
    }
    ctx->pc = 0x3081C4u;
label_3081c4:
    // 0x3081c4: 0xc0bc5e2  jal         func_2F1788
    ctx->pc = 0x3081C4u;
    SET_GPR_U32(ctx, 31, 0x3081CCu);
    ctx->pc = 0x3081C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3081C4u;
    // 0x3081c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1788u, 0x3081C4u, 0x3081CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3081CCu;
label_3081cc:
    // 0x3081cc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3081CCu;
    {
        const bool branch_taken_0x3081cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3081D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3081CCu;
        // 0x3081d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3081cc) {
            ctx->pc = 0x30821Cu;
            goto label_30821c;
        }
    }
    ctx->pc = 0x3081D4u;
label_3081d4:
    // 0x3081d4: 0x2c42000f  sltiu       $v0, $v0, 0xF
    ctx->pc = 0x3081d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x3081d8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3081D8u;
    {
        const bool branch_taken_0x3081d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3081DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3081D8u;
        // 0x3081dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3081d8) {
            ctx->pc = 0x30821Cu;
            goto label_30821c;
        }
    }
    ctx->pc = 0x3081E0u;
    // 0x3081e0: 0xae0004f4  sw          $zero, 0x4F4($s0)
    ctx->pc = 0x3081e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1268), GPR_U32(ctx, 0));
label_3081e4:
    // 0x3081e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3081e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3081e8: 0xc091828  jal         func_2460A0
    ctx->pc = 0x3081E8u;
    SET_GPR_U32(ctx, 31, 0x3081F0u);
    ctx->pc = 0x3081ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3081E8u;
    // 0x3081ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2460A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2460A0u, 0x3081E8u, 0x3081F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3081F0u;
label_3081f0:
    // 0x3081f0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3081F0u;
    {
        const bool branch_taken_0x3081f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3081F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3081F0u;
        // 0x3081f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3081f0) {
            ctx->pc = 0x30821Cu;
            goto label_30821c;
        }
    }
    ctx->pc = 0x3081F8u;
label_3081f8:
    // 0x3081f8: 0xae0004f4  sw          $zero, 0x4F4($s0)
    ctx->pc = 0x3081f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1268), GPR_U32(ctx, 0));
    // 0x3081fc: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x3081fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x308200: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x308200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x308204: 0x2842078b  slti        $v0, $v0, 0x78B
    ctx->pc = 0x308204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1931) ? 1 : 0);
    // 0x308208: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x308208u;
    {
        const bool branch_taken_0x308208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308208u;
        // 0x30820c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308208) {
            ctx->pc = 0x308218u;
            goto label_308218;
        }
    }
    ctx->pc = 0x308210u;
    // 0x308210: 0xc091828  jal         func_2460A0
    ctx->pc = 0x308210u;
    SET_GPR_U32(ctx, 31, 0x308218u);
    ctx->pc = 0x308214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308210u;
    // 0x308214: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2460A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2460A0u, 0x308210u, 0x308218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308218u;
label_308218:
    // 0x308218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x308218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30821c:
    // 0x30821c: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x30821cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x308220: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x308220u;
    SET_GPR_U32(ctx, 31, 0x308228u);
    ctx->pc = 0x308224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308220u;
    // 0x308224: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x308220u, 0x308228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308228u;
label_308228:
    // 0x308228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x308228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30822c: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x30822cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x308230: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x308230u;
    SET_GPR_U32(ctx, 31, 0x308238u);
    ctx->pc = 0x308234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308230u;
    // 0x308234: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x308230u, 0x308238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308238u;
label_308238:
    // 0x308238: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x308238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x30823c: 0x2404feff  addiu       $a0, $zero, -0x101
    ctx->pc = 0x30823cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x308240: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x308240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x308244: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x308244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x308248: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x308248u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30824c: 0xae0200c0  sw          $v0, 0xC0($s0)
    ctx->pc = 0x30824cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 2));
    // 0x308250: 0xac6000c4  sw          $zero, 0xC4($v1)
    ctx->pc = 0x308250u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 196), GPR_U32(ctx, 0));
    // 0x308254: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x308254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x308258: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x308258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30825c: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x30825cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x308260: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x308260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308264: 0xe46000c0  swc1        $f0, 0xC0($v1)
    ctx->pc = 0x308264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 192), bits); }
    // 0x308268: 0x3e00008  jr          $ra
    ctx->pc = 0x308268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308268u;
        // 0x30826c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308270u;
}

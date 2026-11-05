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

// Function: sub_0016F100
// Address: 0x16f100 - 0x16f270
void sub_0016F100_0x16f100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F100_0x16f100");
#endif

    switch (ctx->pc) {
        case 0x16f138u: goto label_16f138;
        case 0x16f14cu: goto label_16f14c;
        case 0x16f15cu: goto label_16f15c;
        case 0x16f16cu: goto label_16f16c;
        case 0x16f17cu: goto label_16f17c;
        case 0x16f1f4u: goto label_16f1f4;
        case 0x16f230u: goto label_16f230;
        case 0x16f240u: goto label_16f240;
        default: break;
    }

    ctx->pc = 0x16f100u;

    // 0x16f100: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16f100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16f104: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x16f104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x16f108: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x16f108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16f10c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x16f10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x16f110: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x16f110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16f114: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16f114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f118: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x16f118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x16f11c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x16f11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x16f120: 0x24539a08  addiu       $s3, $v0, -0x65F8
    ctx->pc = 0x16f120u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x16f124: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x16f124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x16f128: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x16f128u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f12c: 0x2672020c  addiu       $s2, $s3, 0x20C
    ctx->pc = 0x16f12cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 524));
    // 0x16f130: 0xc05a618  jal         func_169860
    ctx->pc = 0x16F130u;
    SET_GPR_U32(ctx, 31, 0x16F138u);
    ctx->pc = 0x16F134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F130u;
    // 0x16f134: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x16F130u, 0x16F138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F138u;
label_16f138:
    // 0x16f138: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16f138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16f13c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x16f13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x16f140: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x16f140u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f144: 0xc043a2c  jal         func_10E8B0
    ctx->pc = 0x16F144u;
    SET_GPR_U32(ctx, 31, 0x16F14Cu);
    ctx->pc = 0x16F148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F144u;
    // 0x16f148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E8B0u, 0x16F144u, 0x16F14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F14Cu;
label_16f14c:
    // 0x16f14c: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x16F14Cu;
    {
        const bool branch_taken_0x16f14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F14Cu;
        // 0x16f150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f14c) {
            ctx->pc = 0x16F24Cu;
            goto label_16f24c;
        }
    }
    ctx->pc = 0x16F154u;
    // 0x16f154: 0xc043958  jal         func_10E560
    ctx->pc = 0x16F154u;
    SET_GPR_U32(ctx, 31, 0x16F15Cu);
    ctx->pc = 0x16F158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F154u;
    // 0x16f158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E560u, 0x16F154u, 0x16F15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F15Cu;
label_16f15c:
    // 0x16f15c: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x16F15Cu;
    {
        const bool branch_taken_0x16f15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F15Cu;
        // 0x16f160: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f15c) {
            ctx->pc = 0x16F24Cu;
            goto label_16f24c;
        }
    }
    ctx->pc = 0x16F164u;
    // 0x16f164: 0xc05bc9c  jal         func_16F270
    ctx->pc = 0x16F164u;
    SET_GPR_U32(ctx, 31, 0x16F16Cu);
    ctx->pc = 0x16F168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F164u;
    // 0x16f168: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F270u, 0x16F164u, 0x16F16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F16Cu;
label_16f16c:
    // 0x16f16c: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x16F16Cu;
    {
        const bool branch_taken_0x16f16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F16Cu;
        // 0x16f170: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f16c) {
            ctx->pc = 0x16F24Cu;
            goto label_16f24c;
        }
    }
    ctx->pc = 0x16F174u;
    // 0x16f174: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x16F174u;
    SET_GPR_U32(ctx, 31, 0x16F17Cu);
    ctx->pc = 0x16F178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F174u;
    // 0x16f178: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x16F174u, 0x16F17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F17Cu;
label_16f17c:
    // 0x16f17c: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x16F17Cu;
    {
        const bool branch_taken_0x16f17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F17Cu;
        // 0x16f180: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f17c) {
            ctx->pc = 0x16F248u;
            goto label_16f248;
        }
    }
    ctx->pc = 0x16F184u;
    // 0x16f184: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x16f184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x16f188: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x16f188u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f18c: 0x1220002f  beqz        $s1, . + 4 + (0x2F << 2)
    ctx->pc = 0x16F18Cu;
    {
        const bool branch_taken_0x16f18c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F18Cu;
        // 0x16f190: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f18c) {
            ctx->pc = 0x16F24Cu;
            goto label_16f24c;
        }
    }
    ctx->pc = 0x16F194u;
    // 0x16f194: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x16f194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16f198: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16f198u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16f19c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x16f19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x16f1a0: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x16f1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x16f1a4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F1A4u;
    {
        const bool branch_taken_0x16f1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f1a4) {
            ctx->pc = 0x16F1A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F1A4u;
            // 0x16f1a8: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F1B4u;
            goto label_16f1b4;
        }
    }
    ctx->pc = 0x16F1ACu;
    // 0x16f1ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16F1ACu;
    {
        const bool branch_taken_0x16f1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F1ACu;
        // 0x16f1b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f1ac) {
            ctx->pc = 0x16F1BCu;
            goto label_16f1bc;
        }
    }
    ctx->pc = 0x16F1B4u;
label_16f1b4:
    // 0x16f1b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16f1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f1b8: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x16f1b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_16f1bc:
    // 0x16f1bc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x16f1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x16f1c0: 0x26839a08  addiu       $v1, $s4, -0x65F8
    ctx->pc = 0x16f1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941192));
    // 0x16f1c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16f1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16f1c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16f1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16f1cc: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x16f1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x16f1d0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F1D0u;
    {
        const bool branch_taken_0x16f1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f1d0) {
            ctx->pc = 0x16F1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16F1D0u;
            // 0x16f1d4: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16F1E0u;
            goto label_16f1e0;
        }
    }
    ctx->pc = 0x16F1D8u;
    // 0x16f1d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16F1D8u;
    {
        const bool branch_taken_0x16f1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F1D8u;
        // 0x16f1dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f1d8) {
            ctx->pc = 0x16F1E8u;
            goto label_16f1e8;
        }
    }
    ctx->pc = 0x16F1E0u;
label_16f1e0:
    // 0x16f1e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16f1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f1e4: 0x24700070  addiu       $s0, $v1, 0x70
    ctx->pc = 0x16f1e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_16f1e8:
    // 0x16f1e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16f1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f1ec: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x16F1ECu;
    SET_GPR_U32(ctx, 31, 0x16F1F4u);
    ctx->pc = 0x16F1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F1ECu;
    // 0x16f1f0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x16F1ECu, 0x16F1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F1F4u;
label_16f1f4:
    // 0x16f1f4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x16f1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16f1f8: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x16f1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16f1fc: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x16f1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x16f200: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x16f200u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x16f204: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x16f204u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x16f208: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x16f208u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x16f20c: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x16f20cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x16f210: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16f210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f214: 0x0  nop
    ctx->pc = 0x16f214u;
    // NOP
    // 0x16f218: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16f218u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f21c: 0x0  nop
    ctx->pc = 0x16f21cu;
    // NOP
    // 0x16f220: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x16F220u;
    {
        const bool branch_taken_0x16f220 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F220u;
        // 0x16f224: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f220) {
            ctx->pc = 0x16F24Cu;
            goto label_16f24c;
        }
    }
    ctx->pc = 0x16F228u;
    // 0x16f228: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x16F228u;
    SET_GPR_U32(ctx, 31, 0x16F230u);
    ctx->pc = 0x16F22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F228u;
    // 0x16f22c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x16F228u, 0x16F230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F230u;
label_16f230:
    // 0x16f230: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16f230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f234: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16f234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f238: 0xc040dae  jal         func_1036B8
    ctx->pc = 0x16F238u;
    SET_GPR_U32(ctx, 31, 0x16F240u);
    ctx->pc = 0x16F23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16F238u;
    // 0x16f23c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1036B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1036B8u, 0x16F238u, 0x16F240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F240u;
label_16f240:
    // 0x16f240: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16F240u;
    {
        const bool branch_taken_0x16f240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F240u;
        // 0x16f244: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f240) {
            ctx->pc = 0x16F250u;
            goto label_16f250;
        }
    }
    ctx->pc = 0x16F248u;
label_16f248:
    // 0x16f248: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16f248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f24c:
    // 0x16f24c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x16f24cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16f250:
    // 0x16f250: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x16f250u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16f254: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x16f254u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16f258: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x16f258u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16f25c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x16f25cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16f260: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x16f260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16f264: 0x3e00008  jr          $ra
    ctx->pc = 0x16F264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16F268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16F264u;
        // 0x16f268: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16F264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16F26Cu;
    // 0x16f26c: 0x0  nop
    ctx->pc = 0x16f26cu;
    // NOP
    ctx->pc = 0x16f270u;
}

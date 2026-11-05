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

// Function: sub_001AB040
// Address: 0x1ab040 - 0x1ab170
void sub_001AB040_0x1ab040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB040_0x1ab040");
#endif

    switch (ctx->pc) {
        case 0x1ab064u: goto label_1ab064;
        case 0x1ab0c8u: goto label_1ab0c8;
        case 0x1ab0dcu: goto label_1ab0dc;
        case 0x1ab0f0u: goto label_1ab0f0;
        case 0x1ab110u: goto label_1ab110;
        case 0x1ab11cu: goto label_1ab11c;
        default: break;
    }

    ctx->pc = 0x1ab040u;

    // 0x1ab040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ab040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ab044: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ab044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ab048: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ab048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ab04c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ab04cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab050: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ab050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ab054: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ab054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ab058: 0x8e220148  lw          $v0, 0x148($s1)
    ctx->pc = 0x1ab058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x1ab05c: 0xc06a4c0  jal         func_1A9300
    ctx->pc = 0x1AB05Cu;
    SET_GPR_U32(ctx, 31, 0x1AB064u);
    ctx->pc = 0x1AB060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB05Cu;
    // 0x1ab060: 0x8c520110  lw          $s2, 0x110($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9300u, 0x1AB05Cu, 0x1AB064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB064u;
label_1ab064:
    // 0x1ab064: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x1ab064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x1ab068: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x1AB068u;
    {
        const bool branch_taken_0x1ab068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB068u;
        // 0x1ab06c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab068) {
            ctx->pc = 0x1AB158u;
            goto label_1ab158;
        }
    }
    ctx->pc = 0x1AB070u;
    // 0x1ab070: 0x8e2301e4  lw          $v1, 0x1E4($s1)
    ctx->pc = 0x1ab070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x1ab074: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x1ab074u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x1ab078: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ab078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ab07c: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x1AB07Cu;
    {
        const bool branch_taken_0x1ab07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ab07c) {
            ctx->pc = 0x1AB080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB07Cu;
            // 0x1ab080: 0x8e2201e4  lw          $v0, 0x1E4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB120u;
            goto label_1ab120;
        }
    }
    ctx->pc = 0x1AB084u;
    // 0x1ab084: 0x8e230158  lw          $v1, 0x158($s1)
    ctx->pc = 0x1ab084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
    // 0x1ab088: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1ab088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1ab08c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AB08Cu;
    {
        const bool branch_taken_0x1ab08c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab08c) {
            ctx->pc = 0x1AB090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB08Cu;
            // 0x1ab090: 0x8e220158  lw          $v0, 0x158($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB0A0u;
            goto label_1ab0a0;
        }
    }
    ctx->pc = 0x1AB094u;
    // 0x1ab094: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab098: 0xae220190  sw          $v0, 0x190($s1)
    ctx->pc = 0x1ab098u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 2));
    // 0x1ab09c: 0x8e220158  lw          $v0, 0x158($s1)
    ctx->pc = 0x1ab09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 344)));
label_1ab0a0:
    // 0x1ab0a0: 0x2442ffe3  addiu       $v0, $v0, -0x1D
    ctx->pc = 0x1ab0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967267));
    // 0x1ab0a4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1ab0a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ab0a8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AB0A8u;
    {
        const bool branch_taken_0x1ab0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB0A8u;
        // 0x1ab0ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab0a8) {
            ctx->pc = 0x1AB0B4u;
            goto label_1ab0b4;
        }
    }
    ctx->pc = 0x1AB0B0u;
    // 0x1ab0b0: 0xae220190  sw          $v0, 0x190($s1)
    ctx->pc = 0x1ab0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 2));
label_1ab0b4:
    // 0x1ab0b4: 0x8e220190  lw          $v0, 0x190($s1)
    ctx->pc = 0x1ab0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 400)));
    // 0x1ab0b8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1AB0B8u;
    {
        const bool branch_taken_0x1ab0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab0b8) {
            ctx->pc = 0x1AB0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AB0B8u;
            // 0x1ab0bc: 0x8e2501e4  lw          $a1, 0x1E4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AB0E4u;
            goto label_1ab0e4;
        }
    }
    ctx->pc = 0x1AB0C0u;
    // 0x1ab0c0: 0xc075774  jal         func_1D5DD0
    ctx->pc = 0x1AB0C0u;
    SET_GPR_U32(ctx, 31, 0x1AB0C8u);
    ctx->pc = 0x1AB0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB0C0u;
    // 0x1ab0c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5DD0u, 0x1AB0C0u, 0x1AB0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB0C8u;
label_1ab0c8:
    // 0x1ab0c8: 0x8e2501e4  lw          $a1, 0x1E4($s1)
    ctx->pc = 0x1ab0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x1ab0cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ab0ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ab0d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1ab0d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ab0d4: 0xc07574a  jal         func_1D5D28
    ctx->pc = 0x1AB0D4u;
    SET_GPR_U32(ctx, 31, 0x1AB0DCu);
    ctx->pc = 0x1AB0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB0D4u;
    // 0x1ab0d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D28u, 0x1AB0D4u, 0x1AB0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB0DCu;
label_1ab0dc:
    // 0x1ab0dc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1AB0DCu;
    {
        const bool branch_taken_0x1ab0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB0DCu;
        // 0x1ab0e0: 0xae200190  sw          $zero, 0x190($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab0dc) {
            ctx->pc = 0x1AB11Cu;
            goto label_1ab11c;
        }
    }
    ctx->pc = 0x1AB0E4u;
label_1ab0e4:
    // 0x1ab0e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ab0e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ab0e8: 0xc07574a  jal         func_1D5D28
    ctx->pc = 0x1AB0E8u;
    SET_GPR_U32(ctx, 31, 0x1AB0F0u);
    ctx->pc = 0x1AB0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB0E8u;
    // 0x1ab0ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D28u, 0x1AB0E8u, 0x1AB0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB0F0u;
label_1ab0f0:
    // 0x1ab0f0: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x1ab0f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
    // 0x1ab0f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ab0f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ab0f8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1ab0f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1ab0fc: 0x26106a00  addiu       $s0, $s0, 0x6A00
    ctx->pc = 0x1ab0fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27136));
    // 0x1ab100: 0x8e2501e4  lw          $a1, 0x1E4($s1)
    ctx->pc = 0x1ab100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x1ab104: 0xc60c02a4  lwc1        $f12, 0x2A4($s0)
    ctx->pc = 0x1ab104u;
    { uint32_t bits = FAST_READ32(0x3F6CA4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ab108: 0xc075752  jal         func_1D5D48
    ctx->pc = 0x1AB108u;
    SET_GPR_U32(ctx, 31, 0x1AB110u);
    ctx->pc = 0x1AB10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB108u;
    // 0x1ab10c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D48u, 0x1AB108u, 0x1AB110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB110u;
label_1ab110:
    // 0x1ab110: 0xc60c02a4  lwc1        $f12, 0x2A4($s0)
    ctx->pc = 0x1ab110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1ab114: 0xc06a48c  jal         func_1A9230
    ctx->pc = 0x1AB114u;
    SET_GPR_U32(ctx, 31, 0x1AB11Cu);
    ctx->pc = 0x1AB118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB114u;
    // 0x1ab118: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9230u, 0x1AB114u, 0x1AB11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB11Cu;
label_1ab11c:
    // 0x1ab11c: 0x8e2201e4  lw          $v0, 0x1E4($s1)
    ctx->pc = 0x1ab11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
label_1ab120:
    // 0x1ab120: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ab120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ab124: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ab124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ab128: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x1ab128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ab12c: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x1ab12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x1ab130: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x1ab130u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x1ab134: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ab134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ab138: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1ab138u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1ab13c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1ab13cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1ab140: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1ab140u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ab144: 0x0  nop
    ctx->pc = 0x1ab144u;
    // NOP
    // 0x1ab148: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1AB148u;
    {
        const bool branch_taken_0x1ab148 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AB14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB148u;
        // 0x1ab14c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab148) {
            ctx->pc = 0x1AB154u;
            goto label_1ab154;
        }
    }
    ctx->pc = 0x1AB150u;
    // 0x1ab150: 0xae220160  sw          $v0, 0x160($s1)
    ctx->pc = 0x1ab150u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 2));
label_1ab154:
    // 0x1ab154: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ab154u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab158:
    // 0x1ab158: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ab158u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ab15c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ab15cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ab160: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ab160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ab164: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB164u;
        // 0x1ab168: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB16Cu;
    // 0x1ab16c: 0x0  nop
    ctx->pc = 0x1ab16cu;
    // NOP
    ctx->pc = 0x1ab170u;
}

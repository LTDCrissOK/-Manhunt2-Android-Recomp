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

// Function: sub_0018F108
// Address: 0x18f108 - 0x18f1e8
void sub_0018F108_0x18f108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018F108_0x18f108");
#endif

    switch (ctx->pc) {
        case 0x18f108u: goto label_18f108;
        case 0x18f10cu: goto label_18f10c;
        case 0x18f110u: goto label_18f110;
        case 0x18f114u: goto label_18f114;
        case 0x18f118u: goto label_18f118;
        case 0x18f11cu: goto label_18f11c;
        case 0x18f120u: goto label_18f120;
        case 0x18f124u: goto label_18f124;
        case 0x18f128u: goto label_18f128;
        case 0x18f12cu: goto label_18f12c;
        case 0x18f130u: goto label_18f130;
        case 0x18f134u: goto label_18f134;
        case 0x18f138u: goto label_18f138;
        case 0x18f13cu: goto label_18f13c;
        case 0x18f140u: goto label_18f140;
        case 0x18f144u: goto label_18f144;
        case 0x18f148u: goto label_18f148;
        case 0x18f14cu: goto label_18f14c;
        case 0x18f150u: goto label_18f150;
        case 0x18f154u: goto label_18f154;
        case 0x18f158u: goto label_18f158;
        case 0x18f15cu: goto label_18f15c;
        case 0x18f160u: goto label_18f160;
        case 0x18f164u: goto label_18f164;
        case 0x18f168u: goto label_18f168;
        case 0x18f16cu: goto label_18f16c;
        case 0x18f170u: goto label_18f170;
        case 0x18f174u: goto label_18f174;
        case 0x18f178u: goto label_18f178;
        case 0x18f17cu: goto label_18f17c;
        case 0x18f180u: goto label_18f180;
        case 0x18f184u: goto label_18f184;
        case 0x18f188u: goto label_18f188;
        case 0x18f18cu: goto label_18f18c;
        case 0x18f190u: goto label_18f190;
        case 0x18f194u: goto label_18f194;
        case 0x18f198u: goto label_18f198;
        case 0x18f19cu: goto label_18f19c;
        case 0x18f1a0u: goto label_18f1a0;
        case 0x18f1a4u: goto label_18f1a4;
        case 0x18f1a8u: goto label_18f1a8;
        case 0x18f1acu: goto label_18f1ac;
        case 0x18f1b0u: goto label_18f1b0;
        case 0x18f1b4u: goto label_18f1b4;
        case 0x18f1b8u: goto label_18f1b8;
        case 0x18f1bcu: goto label_18f1bc;
        case 0x18f1c0u: goto label_18f1c0;
        case 0x18f1c4u: goto label_18f1c4;
        case 0x18f1c8u: goto label_18f1c8;
        case 0x18f1ccu: goto label_18f1cc;
        case 0x18f1d0u: goto label_18f1d0;
        case 0x18f1d4u: goto label_18f1d4;
        case 0x18f1d8u: goto label_18f1d8;
        case 0x18f1dcu: goto label_18f1dc;
        case 0x18f1e0u: goto label_18f1e0;
        case 0x18f1e4u: goto label_18f1e4;
        default: break;
    }

    ctx->pc = 0x18f108u;

label_18f108:
    // 0x18f108: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18f108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_18f10c:
    // 0x18f10c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18f10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18f110:
    // 0x18f110: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18f110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_18f114:
    // 0x18f114: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18f114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18f118:
    // 0x18f118: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18f118u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18f11c:
    // 0x18f11c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18f11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_18f120:
    // 0x18f120: 0xc06fb64  jal         func_1BED90
label_18f124:
    if (ctx->pc == 0x18F124u) {
        ctx->pc = 0x18F124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F120u;
        // 0x18f124: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F128u;
        goto label_18f128;
    }
    ctx->pc = 0x18F120u;
    SET_GPR_U32(ctx, 31, 0x18F128u);
    ctx->pc = 0x18F124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F120u;
    // 0x18f124: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED90u, 0x18F120u, 0x18F128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F128u;
label_18f128:
    // 0x18f128: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18f128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18f12c:
    // 0x18f12c: 0xc06fb64  jal         func_1BED90
label_18f130:
    if (ctx->pc == 0x18F130u) {
        ctx->pc = 0x18F130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F12Cu;
        // 0x18f130: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F134u;
        goto label_18f134;
    }
    ctx->pc = 0x18F12Cu;
    SET_GPR_U32(ctx, 31, 0x18F134u);
    ctx->pc = 0x18F130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F12Cu;
    // 0x18f130: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED90u, 0x18F12Cu, 0x18F134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F134u;
label_18f134:
    // 0x18f134: 0x3c110049  lui         $s1, 0x49
    ctx->pc = 0x18f134u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
label_18f138:
    // 0x18f138: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x18f138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18f13c:
    // 0x18f13c: 0x2631ef70  addiu       $s1, $s1, -0x1090
    ctx->pc = 0x18f13cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963056));
label_18f140:
    // 0x18f140: 0xc0f71b8  jal         func_3DC6E0
label_18f144:
    if (ctx->pc == 0x18F144u) {
        ctx->pc = 0x18F144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F140u;
        // 0x18f144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F148u;
        goto label_18f148;
    }
    ctx->pc = 0x18F140u;
    SET_GPR_U32(ctx, 31, 0x18F148u);
    ctx->pc = 0x18F144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F140u;
    // 0x18f144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC6E0u, 0x18F140u, 0x18F148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F148u;
label_18f148:
    // 0x18f148: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x18f148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_18f14c:
    // 0x18f14c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x18f14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_18f150:
    // 0x18f150: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x18f150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_18f154:
    // 0x18f154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18f154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18f158:
    // 0x18f158: 0xc061a16  jal         func_186858
label_18f15c:
    if (ctx->pc == 0x18F15Cu) {
        ctx->pc = 0x18F15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F158u;
        // 0x18f15c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F160u;
        goto label_18f160;
    }
    ctx->pc = 0x18F158u;
    SET_GPR_U32(ctx, 31, 0x18F160u);
    ctx->pc = 0x18F15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F158u;
    // 0x18f15c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18F158u, 0x18F160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F160u;
label_18f160:
    // 0x18f160: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x18f160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_18f164:
    // 0x18f164: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18f164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18f168:
    // 0x18f168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18f168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18f16c:
    // 0x18f16c: 0xc061a16  jal         func_186858
label_18f170:
    if (ctx->pc == 0x18F170u) {
        ctx->pc = 0x18F170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F16Cu;
        // 0x18f170: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F174u;
        goto label_18f174;
    }
    ctx->pc = 0x18F16Cu;
    SET_GPR_U32(ctx, 31, 0x18F174u);
    ctx->pc = 0x18F170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F16Cu;
    // 0x18f170: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18F16Cu, 0x18F174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F174u;
label_18f174:
    // 0x18f174: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18f174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18f178:
    // 0x18f178: 0xc06ee30  jal         func_1BB8C0
label_18f17c:
    if (ctx->pc == 0x18F17Cu) {
        ctx->pc = 0x18F17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F178u;
        // 0x18f17c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F180u;
        goto label_18f180;
    }
    ctx->pc = 0x18F178u;
    SET_GPR_U32(ctx, 31, 0x18F180u);
    ctx->pc = 0x18F17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F178u;
    // 0x18f17c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB8C0u, 0x18F178u, 0x18F180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F180u;
label_18f180:
    // 0x18f180: 0x8e04006c  lw          $a0, 0x6C($s0)
    ctx->pc = 0x18f180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_18f184:
    // 0x18f184: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x18f184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18f188:
    // 0x18f188: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18f188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_18f18c:
    // 0x18f18c: 0x40f809  jalr        $v0
label_18f190:
    if (ctx->pc == 0x18F190u) {
        ctx->pc = 0x18F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F18Cu;
        // 0x18f190: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F194u;
        goto label_18f194;
    }
    ctx->pc = 0x18F18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F194u);
        ctx->pc = 0x18F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F18Cu;
        // 0x18f190: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F18Cu, 0x18F194u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F194u;
label_18f194:
    // 0x18f194: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x18f194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_18f198:
    // 0x18f198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18f198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18f19c:
    // 0x18f19c: 0x3c013ff3  lui         $at, 0x3FF3
    ctx->pc = 0x18f19cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16371 << 16));
label_18f1a0:
    // 0x18f1a0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x18f1a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_18f1a4:
    // 0x18f1a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18f1a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18f1a8:
    // 0x18f1a8: 0xc061a12  jal         func_186848
label_18f1ac:
    if (ctx->pc == 0x18F1ACu) {
        ctx->pc = 0x18F1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1A8u;
        // 0x18f1ac: 0xe4600024  swc1        $f0, 0x24($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F1B0u;
        goto label_18f1b0;
    }
    ctx->pc = 0x18F1A8u;
    SET_GPR_U32(ctx, 31, 0x18F1B0u);
    ctx->pc = 0x18F1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18F1A8u;
    // 0x18f1ac: 0xe4600024  swc1        $f0, 0x24($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18F1A8u, 0x18F1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18F1B0u;
label_18f1b0:
    // 0x18f1b0: 0xac400338  sw          $zero, 0x338($v0)
    ctx->pc = 0x18f1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 824), GPR_U32(ctx, 0));
label_18f1b4:
    // 0x18f1b4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x18f1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_18f1b8:
    // 0x18f1b8: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x18f1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_18f1bc:
    // 0x18f1bc: 0x60f809  jalr        $v1
label_18f1c0:
    if (ctx->pc == 0x18F1C0u) {
        ctx->pc = 0x18F1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1BCu;
        // 0x18f1c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F1C4u;
        goto label_18f1c4;
    }
    ctx->pc = 0x18F1BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x18F1C4u);
        ctx->pc = 0x18F1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1BCu;
        // 0x18f1c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F1BCu, 0x18F1C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F1C4u;
label_18f1c4:
    // 0x18f1c4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x18f1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_18f1c8:
    // 0x18f1c8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x18f1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_18f1cc:
    // 0x18f1cc: 0x40f809  jalr        $v0
label_18f1d0:
    if (ctx->pc == 0x18F1D0u) {
        ctx->pc = 0x18F1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1CCu;
        // 0x18f1d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F1D4u;
        goto label_18f1d4;
    }
    ctx->pc = 0x18F1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18F1D4u);
        ctx->pc = 0x18F1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1CCu;
        // 0x18f1d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F1CCu, 0x18F1D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18F1D4u;
label_18f1d4:
    // 0x18f1d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18f1d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18f1d8:
    // 0x18f1d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18f1d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18f1dc:
    // 0x18f1dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18f1dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18f1e0:
    // 0x18f1e0: 0x3e00008  jr          $ra
label_18f1e4:
    if (ctx->pc == 0x18F1E4u) {
        ctx->pc = 0x18F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1E0u;
        // 0x18f1e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18F1E8u;
        goto label_fallthrough_0x18f1e0;
    }
    ctx->pc = 0x18F1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18F1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18F1E0u;
        // 0x18f1e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18F1E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18f1e0:
    ctx->pc = 0x18F1E8u;
}

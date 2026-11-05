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

// Function: sub_0017B0B8
// Address: 0x17b0b8 - 0x17b228
void sub_0017B0B8_0x17b0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B0B8_0x17b0b8");
#endif

    switch (ctx->pc) {
        case 0x17b0b8u: goto label_17b0b8;
        case 0x17b0bcu: goto label_17b0bc;
        case 0x17b0c0u: goto label_17b0c0;
        case 0x17b0c4u: goto label_17b0c4;
        case 0x17b0c8u: goto label_17b0c8;
        case 0x17b0ccu: goto label_17b0cc;
        case 0x17b0d0u: goto label_17b0d0;
        case 0x17b0d4u: goto label_17b0d4;
        case 0x17b0d8u: goto label_17b0d8;
        case 0x17b0dcu: goto label_17b0dc;
        case 0x17b0e0u: goto label_17b0e0;
        case 0x17b0e4u: goto label_17b0e4;
        case 0x17b0e8u: goto label_17b0e8;
        case 0x17b0ecu: goto label_17b0ec;
        case 0x17b0f0u: goto label_17b0f0;
        case 0x17b0f4u: goto label_17b0f4;
        case 0x17b0f8u: goto label_17b0f8;
        case 0x17b0fcu: goto label_17b0fc;
        case 0x17b100u: goto label_17b100;
        case 0x17b104u: goto label_17b104;
        case 0x17b108u: goto label_17b108;
        case 0x17b10cu: goto label_17b10c;
        case 0x17b110u: goto label_17b110;
        case 0x17b114u: goto label_17b114;
        case 0x17b118u: goto label_17b118;
        case 0x17b11cu: goto label_17b11c;
        case 0x17b120u: goto label_17b120;
        case 0x17b124u: goto label_17b124;
        case 0x17b128u: goto label_17b128;
        case 0x17b12cu: goto label_17b12c;
        case 0x17b130u: goto label_17b130;
        case 0x17b134u: goto label_17b134;
        case 0x17b138u: goto label_17b138;
        case 0x17b13cu: goto label_17b13c;
        case 0x17b140u: goto label_17b140;
        case 0x17b144u: goto label_17b144;
        case 0x17b148u: goto label_17b148;
        case 0x17b14cu: goto label_17b14c;
        case 0x17b150u: goto label_17b150;
        case 0x17b154u: goto label_17b154;
        case 0x17b158u: goto label_17b158;
        case 0x17b15cu: goto label_17b15c;
        case 0x17b160u: goto label_17b160;
        case 0x17b164u: goto label_17b164;
        case 0x17b168u: goto label_17b168;
        case 0x17b16cu: goto label_17b16c;
        case 0x17b170u: goto label_17b170;
        case 0x17b174u: goto label_17b174;
        case 0x17b178u: goto label_17b178;
        case 0x17b17cu: goto label_17b17c;
        case 0x17b180u: goto label_17b180;
        case 0x17b184u: goto label_17b184;
        case 0x17b188u: goto label_17b188;
        case 0x17b18cu: goto label_17b18c;
        case 0x17b190u: goto label_17b190;
        case 0x17b194u: goto label_17b194;
        case 0x17b198u: goto label_17b198;
        case 0x17b19cu: goto label_17b19c;
        case 0x17b1a0u: goto label_17b1a0;
        case 0x17b1a4u: goto label_17b1a4;
        case 0x17b1a8u: goto label_17b1a8;
        case 0x17b1acu: goto label_17b1ac;
        case 0x17b1b0u: goto label_17b1b0;
        case 0x17b1b4u: goto label_17b1b4;
        case 0x17b1b8u: goto label_17b1b8;
        case 0x17b1bcu: goto label_17b1bc;
        case 0x17b1c0u: goto label_17b1c0;
        case 0x17b1c4u: goto label_17b1c4;
        case 0x17b1c8u: goto label_17b1c8;
        case 0x17b1ccu: goto label_17b1cc;
        case 0x17b1d0u: goto label_17b1d0;
        case 0x17b1d4u: goto label_17b1d4;
        case 0x17b1d8u: goto label_17b1d8;
        case 0x17b1dcu: goto label_17b1dc;
        case 0x17b1e0u: goto label_17b1e0;
        case 0x17b1e4u: goto label_17b1e4;
        case 0x17b1e8u: goto label_17b1e8;
        case 0x17b1ecu: goto label_17b1ec;
        case 0x17b1f0u: goto label_17b1f0;
        case 0x17b1f4u: goto label_17b1f4;
        case 0x17b1f8u: goto label_17b1f8;
        case 0x17b1fcu: goto label_17b1fc;
        case 0x17b200u: goto label_17b200;
        case 0x17b204u: goto label_17b204;
        case 0x17b208u: goto label_17b208;
        case 0x17b20cu: goto label_17b20c;
        case 0x17b210u: goto label_17b210;
        case 0x17b214u: goto label_17b214;
        case 0x17b218u: goto label_17b218;
        case 0x17b21cu: goto label_17b21c;
        case 0x17b220u: goto label_17b220;
        case 0x17b224u: goto label_17b224;
        default: break;
    }

    ctx->pc = 0x17b0b8u;

label_17b0b8:
    // 0x17b0b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17b0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17b0bc:
    // 0x17b0bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17b0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17b0c0:
    // 0x17b0c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17b0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_17b0c4:
    // 0x17b0c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17b0c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17b0c8:
    // 0x17b0c8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17b0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_17b0cc:
    // 0x17b0cc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17b0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_17b0d0:
    // 0x17b0d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17b0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_17b0d4:
    // 0x17b0d4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x17b0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_17b0d8:
    // 0x17b0d8: 0xc05ecf8  jal         func_17B3E0
label_17b0dc:
    if (ctx->pc == 0x17B0DCu) {
        ctx->pc = 0x17B0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B0D8u;
        // 0x17b0dc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B0E0u;
        goto label_17b0e0;
    }
    ctx->pc = 0x17B0D8u;
    SET_GPR_U32(ctx, 31, 0x17B0E0u);
    ctx->pc = 0x17B0DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B0D8u;
    // 0x17b0dc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B3E0u, 0x17B0D8u, 0x17B0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B0E0u;
label_17b0e0:
    // 0x17b0e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17b0e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17b0e4:
    // 0x17b0e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17b0e8:
    // 0x17b0e8: 0xc05eb98  jal         func_17AE60
label_17b0ec:
    if (ctx->pc == 0x17B0ECu) {
        ctx->pc = 0x17B0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B0E8u;
        // 0x17b0ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B0F0u;
        goto label_17b0f0;
    }
    ctx->pc = 0x17B0E8u;
    SET_GPR_U32(ctx, 31, 0x17B0F0u);
    ctx->pc = 0x17B0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B0E8u;
    // 0x17b0ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AE60u, 0x17B0E8u, 0x17B0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B0F0u;
label_17b0f0:
    // 0x17b0f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17b0f4:
    // 0x17b0f4: 0xc05ee1e  jal         func_17B878
label_17b0f8:
    if (ctx->pc == 0x17B0F8u) {
        ctx->pc = 0x17B0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B0F4u;
        // 0x17b0f8: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B0FCu;
        goto label_17b0fc;
    }
    ctx->pc = 0x17B0F4u;
    SET_GPR_U32(ctx, 31, 0x17B0FCu);
    ctx->pc = 0x17B0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B0F4u;
    // 0x17b0f8: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B878u, 0x17B0F4u, 0x17B0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B0FCu;
label_17b0fc:
    // 0x17b0fc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x17b0fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17b100:
    // 0x17b100: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17b100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17b104:
    // 0x17b104: 0xc046216  jal         func_118858
label_17b108:
    if (ctx->pc == 0x17B108u) {
        ctx->pc = 0x17B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B104u;
        // 0x17b108: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B10Cu;
        goto label_17b10c;
    }
    ctx->pc = 0x17B104u;
    SET_GPR_U32(ctx, 31, 0x17B10Cu);
    ctx->pc = 0x17B108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B104u;
    // 0x17b108: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118858u, 0x17B104u, 0x17B10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B10Cu;
label_17b10c:
    // 0x17b10c: 0xc05a5f4  jal         func_1697D0
label_17b110:
    if (ctx->pc == 0x17B110u) {
        ctx->pc = 0x17B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B10Cu;
        // 0x17b110: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B114u;
        goto label_17b114;
    }
    ctx->pc = 0x17B10Cu;
    SET_GPR_U32(ctx, 31, 0x17B114u);
    ctx->pc = 0x17B110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B10Cu;
    // 0x17b110: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697D0u, 0x17B10Cu, 0x17B114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B114u;
label_17b114:
    // 0x17b114: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_17b118:
    if (ctx->pc == 0x17B118u) {
        ctx->pc = 0x17B11Cu;
        goto label_17b11c;
    }
    ctx->pc = 0x17B114u;
    {
        const bool branch_taken_0x17b114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17b114) {
            ctx->pc = 0x17B164u;
            goto label_17b164;
        }
    }
    ctx->pc = 0x17B11Cu;
label_17b11c:
    // 0x17b11c: 0xc05a618  jal         func_169860
label_17b120:
    if (ctx->pc == 0x17B120u) {
        ctx->pc = 0x17B120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B11Cu;
        // 0x17b120: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B124u;
        goto label_17b124;
    }
    ctx->pc = 0x17B11Cu;
    SET_GPR_U32(ctx, 31, 0x17B124u);
    ctx->pc = 0x17B120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B11Cu;
    // 0x17b120: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x17B11Cu, 0x17B124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B124u;
label_17b124:
    // 0x17b124: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_17b128:
    if (ctx->pc == 0x17B128u) {
        ctx->pc = 0x17B128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B124u;
        // 0x17b128: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B12Cu;
        goto label_17b12c;
    }
    ctx->pc = 0x17B124u;
    {
        const bool branch_taken_0x17b124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B124u;
        // 0x17b128: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b124) {
            ctx->pc = 0x17B138u;
            goto label_17b138;
        }
    }
    ctx->pc = 0x17B12Cu;
label_17b12c:
    // 0x17b12c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17b12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17b130:
    // 0x17b130: 0xc05ed0e  jal         func_17B438
label_17b134:
    if (ctx->pc == 0x17B134u) {
        ctx->pc = 0x17B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B130u;
        // 0x17b134: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B138u;
        goto label_17b138;
    }
    ctx->pc = 0x17B130u;
    SET_GPR_U32(ctx, 31, 0x17B138u);
    ctx->pc = 0x17B134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B130u;
    // 0x17b134: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B438u, 0x17B130u, 0x17B138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B138u;
label_17b138:
    // 0x17b138: 0xc05ee80  jal         func_17BA00
label_17b13c:
    if (ctx->pc == 0x17B13Cu) {
        ctx->pc = 0x17B13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B138u;
        // 0x17b13c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B140u;
        goto label_17b140;
    }
    ctx->pc = 0x17B138u;
    SET_GPR_U32(ctx, 31, 0x17B140u);
    ctx->pc = 0x17B13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B138u;
    // 0x17b13c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BA00u, 0x17B138u, 0x17B140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B140u;
label_17b140:
    // 0x17b140: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17b140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17b144:
    // 0x17b144: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x17b144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_17b148:
    // 0x17b148: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x17b148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_17b14c:
    // 0x17b14c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17b14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17b150:
    // 0x17b150: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x17b150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_17b154:
    // 0x17b154: 0x40f809  jalr        $v0
label_17b158:
    if (ctx->pc == 0x17B158u) {
        ctx->pc = 0x17B158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B154u;
        // 0x17b158: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B15Cu;
        goto label_17b15c;
    }
    ctx->pc = 0x17B154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17B15Cu);
        ctx->pc = 0x17B158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B154u;
        // 0x17b158: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B154u, 0x17B15Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17B15Cu;
label_17b15c:
    // 0x17b15c: 0x10000008  b           . + 4 + (0x8 << 2)
label_17b160:
    if (ctx->pc == 0x17B160u) {
        ctx->pc = 0x17B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B15Cu;
        // 0x17b160: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B164u;
        goto label_17b164;
    }
    ctx->pc = 0x17B15Cu;
    {
        const bool branch_taken_0x17b15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B15Cu;
        // 0x17b160: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b15c) {
            ctx->pc = 0x17B180u;
            goto label_17b180;
        }
    }
    ctx->pc = 0x17B164u;
label_17b164:
    // 0x17b164: 0xc05a602  jal         func_169808
label_17b168:
    if (ctx->pc == 0x17B168u) {
        ctx->pc = 0x17B168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B164u;
        // 0x17b168: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B16Cu;
        goto label_17b16c;
    }
    ctx->pc = 0x17B164u;
    SET_GPR_U32(ctx, 31, 0x17B16Cu);
    ctx->pc = 0x17B168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B164u;
    // 0x17b168: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169808u, 0x17B164u, 0x17B16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B16Cu;
label_17b16c:
    // 0x17b16c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17b16cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17b170:
    // 0x17b170: 0xc05ee3e  jal         func_17B8F8
label_17b174:
    if (ctx->pc == 0x17B174u) {
        ctx->pc = 0x17B174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B170u;
        // 0x17b174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B178u;
        goto label_17b178;
    }
    ctx->pc = 0x17B170u;
    SET_GPR_U32(ctx, 31, 0x17B178u);
    ctx->pc = 0x17B174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B170u;
    // 0x17b174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B8F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17B8F8u, 0x17B170u, 0x17B178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B178u;
label_17b178:
    // 0x17b178: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17b178u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17b17c:
    // 0x17b17c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x17b17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_17b180:
    // 0x17b180: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17b180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17b184:
    // 0x17b184: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x17b184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_17b188:
    // 0x17b188: 0x40f809  jalr        $v0
label_17b18c:
    if (ctx->pc == 0x17B18Cu) {
        ctx->pc = 0x17B18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B188u;
        // 0x17b18c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B190u;
        goto label_17b190;
    }
    ctx->pc = 0x17B188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17B190u);
        ctx->pc = 0x17B18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B188u;
        // 0x17b18c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B188u, 0x17B190u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17B190u;
label_17b190:
    // 0x17b190: 0xc05a602  jal         func_169808
label_17b194:
    if (ctx->pc == 0x17B194u) {
        ctx->pc = 0x17B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B190u;
        // 0x17b194: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B198u;
        goto label_17b198;
    }
    ctx->pc = 0x17B190u;
    SET_GPR_U32(ctx, 31, 0x17B198u);
    ctx->pc = 0x17B194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B190u;
    // 0x17b194: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169808u, 0x17B190u, 0x17B198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B198u;
label_17b198:
    // 0x17b198: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x17b198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_17b19c:
    // 0x17b19c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17b19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17b1a0:
    // 0x17b1a0: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x17b1a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_17b1a4:
    // 0x17b1a4: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x17b1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_17b1a8:
    // 0x17b1a8: 0xaca20210  sw          $v0, 0x210($a1)
    ctx->pc = 0x17b1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 528), GPR_U32(ctx, 2));
label_17b1ac:
    // 0x17b1ac: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x17b1acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17b1b0:
    // 0x17b1b0: 0xacd20218  sw          $s2, 0x218($a2)
    ctx->pc = 0x17b1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 536), GPR_U32(ctx, 18));
label_17b1b4:
    // 0x17b1b4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x17b1b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17b1b8:
    // 0x17b1b8: 0xac710214  sw          $s1, 0x214($v1)
    ctx->pc = 0x17b1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 532), GPR_U32(ctx, 17));
label_17b1bc:
    // 0x17b1bc: 0x92020530  lbu         $v0, 0x530($s0)
    ctx->pc = 0x17b1bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1328)));
label_17b1c0:
    // 0x17b1c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17b1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17b1c4:
    // 0x17b1c4: 0xc05a602  jal         func_169808
label_17b1c8:
    if (ctx->pc == 0x17B1C8u) {
        ctx->pc = 0x17B1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B1C4u;
        // 0x17b1c8: 0xa2020530  sb          $v0, 0x530($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1328), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B1CCu;
        goto label_17b1cc;
    }
    ctx->pc = 0x17B1C4u;
    SET_GPR_U32(ctx, 31, 0x17B1CCu);
    ctx->pc = 0x17B1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B1C4u;
    // 0x17b1c8: 0xa2020530  sb          $v0, 0x530($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1328), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169808u, 0x17B1C4u, 0x17B1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B1CCu;
label_17b1cc:
    // 0x17b1cc: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x17b1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_17b1d0:
    // 0x17b1d0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_17b1d4:
    if (ctx->pc == 0x17B1D4u) {
        ctx->pc = 0x17B1D8u;
        goto label_17b1d8;
    }
    ctx->pc = 0x17B1D0u;
    {
        const bool branch_taken_0x17b1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17b1d0) {
            ctx->pc = 0x17B1E0u;
            goto label_17b1e0;
        }
    }
    ctx->pc = 0x17B1D8u;
label_17b1d8:
    // 0x17b1d8: 0x1000000a  b           . + 4 + (0xA << 2)
label_17b1dc:
    if (ctx->pc == 0x17B1DCu) {
        ctx->pc = 0x17B1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B1D8u;
        // 0x17b1dc: 0xa2130531  sb          $s3, 0x531($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1329), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B1E0u;
        goto label_17b1e0;
    }
    ctx->pc = 0x17B1D8u;
    {
        const bool branch_taken_0x17b1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B1D8u;
        // 0x17b1dc: 0xa2130531  sb          $s3, 0x531($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1329), (uint8_t)GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b1d8) {
            ctx->pc = 0x17B204u;
            goto label_17b204;
        }
    }
    ctx->pc = 0x17B1E0u;
label_17b1e0:
    // 0x17b1e0: 0xc05a602  jal         func_169808
label_17b1e4:
    if (ctx->pc == 0x17B1E4u) {
        ctx->pc = 0x17B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B1E0u;
        // 0x17b1e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B1E8u;
        goto label_17b1e8;
    }
    ctx->pc = 0x17B1E0u;
    SET_GPR_U32(ctx, 31, 0x17B1E8u);
    ctx->pc = 0x17B1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B1E0u;
    // 0x17b1e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169808u, 0x17B1E0u, 0x17B1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B1E8u;
label_17b1e8:
    // 0x17b1e8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_17b1ec:
    if (ctx->pc == 0x17B1ECu) {
        ctx->pc = 0x17B1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B1E8u;
        // 0x17b1ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B1F0u;
        goto label_17b1f0;
    }
    ctx->pc = 0x17B1E8u;
    {
        const bool branch_taken_0x17b1e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b1e8) {
            ctx->pc = 0x17B1ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B1E8u;
            // 0x17b1ec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B208u;
            goto label_17b208;
        }
    }
    ctx->pc = 0x17B1F0u;
label_17b1f0:
    // 0x17b1f0: 0x8e05059c  lw          $a1, 0x59C($s0)
    ctx->pc = 0x17b1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1436)));
label_17b1f4:
    // 0x17b1f4: 0xc05c116  jal         func_170458
label_17b1f8:
    if (ctx->pc == 0x17B1F8u) {
        ctx->pc = 0x17B1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B1F4u;
        // 0x17b1f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B1FCu;
        goto label_17b1fc;
    }
    ctx->pc = 0x17B1F4u;
    SET_GPR_U32(ctx, 31, 0x17B1FCu);
    ctx->pc = 0x17B1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B1F4u;
    // 0x17b1f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170458u, 0x17B1F4u, 0x17B1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17B1FCu;
label_17b1fc:
    // 0x17b1fc: 0xc60005a4  lwc1        $f0, 0x5A4($s0)
    ctx->pc = 0x17b1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17b200:
    // 0x17b200: 0xe6200280  swc1        $f0, 0x280($s1)
    ctx->pc = 0x17b200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 640), bits); }
label_17b204:
    // 0x17b204: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17b204u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17b208:
    // 0x17b208: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17b208u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17b20c:
    // 0x17b20c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17b20cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17b210:
    // 0x17b210: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17b210u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_17b214:
    // 0x17b214: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17b214u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17b218:
    // 0x17b218: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17b218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_17b21c:
    // 0x17b21c: 0x3e00008  jr          $ra
label_17b220:
    if (ctx->pc == 0x17B220u) {
        ctx->pc = 0x17B220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B21Cu;
        // 0x17b220: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17B224u;
        goto label_17b224;
    }
    ctx->pc = 0x17B21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B21Cu;
        // 0x17b220: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B224u;
label_17b224:
    // 0x17b224: 0x0  nop
    ctx->pc = 0x17b224u;
    // NOP
    ctx->pc = 0x17b228u;
}

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

// Function: sub_0016E068
// Address: 0x16e068 - 0x16e198
void sub_0016E068_0x16e068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E068_0x16e068");
#endif

    switch (ctx->pc) {
        case 0x16e068u: goto label_16e068;
        case 0x16e06cu: goto label_16e06c;
        case 0x16e070u: goto label_16e070;
        case 0x16e074u: goto label_16e074;
        case 0x16e078u: goto label_16e078;
        case 0x16e07cu: goto label_16e07c;
        case 0x16e080u: goto label_16e080;
        case 0x16e084u: goto label_16e084;
        case 0x16e088u: goto label_16e088;
        case 0x16e08cu: goto label_16e08c;
        case 0x16e090u: goto label_16e090;
        case 0x16e094u: goto label_16e094;
        case 0x16e098u: goto label_16e098;
        case 0x16e09cu: goto label_16e09c;
        case 0x16e0a0u: goto label_16e0a0;
        case 0x16e0a4u: goto label_16e0a4;
        case 0x16e0a8u: goto label_16e0a8;
        case 0x16e0acu: goto label_16e0ac;
        case 0x16e0b0u: goto label_16e0b0;
        case 0x16e0b4u: goto label_16e0b4;
        case 0x16e0b8u: goto label_16e0b8;
        case 0x16e0bcu: goto label_16e0bc;
        case 0x16e0c0u: goto label_16e0c0;
        case 0x16e0c4u: goto label_16e0c4;
        case 0x16e0c8u: goto label_16e0c8;
        case 0x16e0ccu: goto label_16e0cc;
        case 0x16e0d0u: goto label_16e0d0;
        case 0x16e0d4u: goto label_16e0d4;
        case 0x16e0d8u: goto label_16e0d8;
        case 0x16e0dcu: goto label_16e0dc;
        case 0x16e0e0u: goto label_16e0e0;
        case 0x16e0e4u: goto label_16e0e4;
        case 0x16e0e8u: goto label_16e0e8;
        case 0x16e0ecu: goto label_16e0ec;
        case 0x16e0f0u: goto label_16e0f0;
        case 0x16e0f4u: goto label_16e0f4;
        case 0x16e0f8u: goto label_16e0f8;
        case 0x16e0fcu: goto label_16e0fc;
        case 0x16e100u: goto label_16e100;
        case 0x16e104u: goto label_16e104;
        case 0x16e108u: goto label_16e108;
        case 0x16e10cu: goto label_16e10c;
        case 0x16e110u: goto label_16e110;
        case 0x16e114u: goto label_16e114;
        case 0x16e118u: goto label_16e118;
        case 0x16e11cu: goto label_16e11c;
        case 0x16e120u: goto label_16e120;
        case 0x16e124u: goto label_16e124;
        case 0x16e128u: goto label_16e128;
        case 0x16e12cu: goto label_16e12c;
        case 0x16e130u: goto label_16e130;
        case 0x16e134u: goto label_16e134;
        case 0x16e138u: goto label_16e138;
        case 0x16e13cu: goto label_16e13c;
        case 0x16e140u: goto label_16e140;
        case 0x16e144u: goto label_16e144;
        case 0x16e148u: goto label_16e148;
        case 0x16e14cu: goto label_16e14c;
        case 0x16e150u: goto label_16e150;
        case 0x16e154u: goto label_16e154;
        case 0x16e158u: goto label_16e158;
        case 0x16e15cu: goto label_16e15c;
        case 0x16e160u: goto label_16e160;
        case 0x16e164u: goto label_16e164;
        case 0x16e168u: goto label_16e168;
        case 0x16e16cu: goto label_16e16c;
        case 0x16e170u: goto label_16e170;
        case 0x16e174u: goto label_16e174;
        case 0x16e178u: goto label_16e178;
        case 0x16e17cu: goto label_16e17c;
        case 0x16e180u: goto label_16e180;
        case 0x16e184u: goto label_16e184;
        case 0x16e188u: goto label_16e188;
        case 0x16e18cu: goto label_16e18c;
        case 0x16e190u: goto label_16e190;
        case 0x16e194u: goto label_16e194;
        default: break;
    }

    ctx->pc = 0x16e068u;

label_16e068:
    // 0x16e068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16e068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_16e06c:
    // 0x16e06c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16e06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_16e070:
    // 0x16e070: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16e070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_16e074:
    // 0x16e074: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16e074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16e078:
    // 0x16e078: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16e078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_16e07c:
    // 0x16e07c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16e07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_16e080:
    // 0x16e080: 0xc05a618  jal         func_169860
label_16e084:
    if (ctx->pc == 0x16E084u) {
        ctx->pc = 0x16E084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E080u;
        // 0x16e084: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E088u;
        goto label_16e088;
    }
    ctx->pc = 0x16E080u;
    SET_GPR_U32(ctx, 31, 0x16E088u);
    ctx->pc = 0x16E084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E080u;
    // 0x16e084: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x16E080u, 0x16E088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E088u;
label_16e088:
    // 0x16e088: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_16e08c:
    if (ctx->pc == 0x16E08Cu) {
        ctx->pc = 0x16E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E088u;
        // 0x16e08c: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E090u;
        goto label_16e090;
    }
    ctx->pc = 0x16E088u;
    {
        const bool branch_taken_0x16e088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E088u;
        // 0x16e08c: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e088) {
            ctx->pc = 0x16E178u;
            goto label_16e178;
        }
    }
    ctx->pc = 0x16E090u;
label_16e090:
    // 0x16e090: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16e090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16e094:
    // 0x16e094: 0x24729a08  addiu       $s2, $v1, -0x65F8
    ctx->pc = 0x16e094u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
label_16e098:
    // 0x16e098: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x16e098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_16e09c:
    // 0x16e09c: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x16e09cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_16e0a0:
    // 0x16e0a0: 0x12000036  beqz        $s0, . + 4 + (0x36 << 2)
label_16e0a4:
    if (ctx->pc == 0x16E0A4u) {
        ctx->pc = 0x16E0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E0A0u;
        // 0x16e0a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E0A8u;
        goto label_16e0a8;
    }
    ctx->pc = 0x16E0A0u;
    {
        const bool branch_taken_0x16e0a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E0A0u;
        // 0x16e0a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e0a0) {
            ctx->pc = 0x16E17Cu;
            goto label_16e17c;
        }
    }
    ctx->pc = 0x16E0A8u;
label_16e0a8:
    // 0x16e0a8: 0xc043958  jal         func_10E560
label_16e0ac:
    if (ctx->pc == 0x16E0ACu) {
        ctx->pc = 0x16E0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E0A8u;
        // 0x16e0ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E0B0u;
        goto label_16e0b0;
    }
    ctx->pc = 0x16E0A8u;
    SET_GPR_U32(ctx, 31, 0x16E0B0u);
    ctx->pc = 0x16E0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E0A8u;
    // 0x16e0ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E560u, 0x16E0A8u, 0x16E0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E0B0u;
label_16e0b0:
    // 0x16e0b0: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
label_16e0b4:
    if (ctx->pc == 0x16E0B4u) {
        ctx->pc = 0x16E0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E0B0u;
        // 0x16e0b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E0B8u;
        goto label_16e0b8;
    }
    ctx->pc = 0x16E0B0u;
    {
        const bool branch_taken_0x16e0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16E0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E0B0u;
        // 0x16e0b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e0b0) {
            ctx->pc = 0x16E17Cu;
            goto label_16e17c;
        }
    }
    ctx->pc = 0x16E0B8u;
label_16e0b8:
    // 0x16e0b8: 0xc04393c  jal         func_10E4F0
label_16e0bc:
    if (ctx->pc == 0x16E0BCu) {
        ctx->pc = 0x16E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E0B8u;
        // 0x16e0bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E0C0u;
        goto label_16e0c0;
    }
    ctx->pc = 0x16E0B8u;
    SET_GPR_U32(ctx, 31, 0x16E0C0u);
    ctx->pc = 0x16E0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E0B8u;
    // 0x16e0bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x16E0B8u, 0x16E0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E0C0u;
label_16e0c0:
    // 0x16e0c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16e0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e0c4:
    // 0x16e0c4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x16e0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_16e0c8:
    // 0x16e0c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16e0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16e0cc:
    // 0x16e0cc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x16e0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_16e0d0:
    // 0x16e0d0: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x16e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
label_16e0d4:
    // 0x16e0d4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_16e0d8:
    if (ctx->pc == 0x16E0D8u) {
        ctx->pc = 0x16E0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E0D4u;
        // 0x16e0d8: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E0DCu;
        goto label_16e0dc;
    }
    ctx->pc = 0x16E0D4u;
    {
        const bool branch_taken_0x16e0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16e0d4) {
            ctx->pc = 0x16E0D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E0D4u;
            // 0x16e0d8: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E0E4u;
            goto label_16e0e4;
        }
    }
    ctx->pc = 0x16E0DCu;
label_16e0dc:
    // 0x16e0dc: 0x10000003  b           . + 4 + (0x3 << 2)
label_16e0e0:
    if (ctx->pc == 0x16E0E0u) {
        ctx->pc = 0x16E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E0DCu;
        // 0x16e0e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E0E4u;
        goto label_16e0e4;
    }
    ctx->pc = 0x16E0DCu;
    {
        const bool branch_taken_0x16e0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E0DCu;
        // 0x16e0e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e0dc) {
            ctx->pc = 0x16E0ECu;
            goto label_16e0ec;
        }
    }
    ctx->pc = 0x16E0E4u;
label_16e0e4:
    // 0x16e0e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16e0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e0e8:
    // 0x16e0e8: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x16e0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_16e0ec:
    // 0x16e0ec: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x16e0ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_16e0f0:
    // 0x16e0f0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x16e0f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16e0f4:
    // 0x16e0f4: 0xc040eca  jal         func_103B28
label_16e0f8:
    if (ctx->pc == 0x16E0F8u) {
        ctx->pc = 0x16E0FCu;
        goto label_16e0fc;
    }
    ctx->pc = 0x16E0F4u;
    SET_GPR_U32(ctx, 31, 0x16E0FCu);
    ctx->pc = 0x103B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103B28u, 0x16E0F4u, 0x16E0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E0FCu;
label_16e0fc:
    // 0x16e0fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16e0fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e100:
    // 0x16e100: 0x5240001e  beql        $s2, $zero, . + 4 + (0x1E << 2)
label_16e104:
    if (ctx->pc == 0x16E104u) {
        ctx->pc = 0x16E104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E100u;
        // 0x16e104: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E108u;
        goto label_16e108;
    }
    ctx->pc = 0x16E100u;
    {
        const bool branch_taken_0x16e100 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e100) {
            ctx->pc = 0x16E104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16E100u;
            // 0x16e104: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16E17Cu;
            goto label_16e17c;
        }
    }
    ctx->pc = 0x16E108u;
label_16e108:
    // 0x16e108: 0xc04f9a4  jal         func_13E690
label_16e10c:
    if (ctx->pc == 0x16E10Cu) {
        ctx->pc = 0x16E10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E108u;
        // 0x16e10c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E110u;
        goto label_16e110;
    }
    ctx->pc = 0x16E108u;
    SET_GPR_U32(ctx, 31, 0x16E110u);
    ctx->pc = 0x16E10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E108u;
    // 0x16e10c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E690u, 0x16E108u, 0x16E110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E110u;
label_16e110:
    // 0x16e110: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x16e110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_16e114:
    // 0x16e114: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16e114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e118:
    // 0x16e118: 0xae2300f4  sw          $v1, 0xF4($s1)
    ctx->pc = 0x16e118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 3));
label_16e11c:
    // 0x16e11c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x16e11cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_16e120:
    // 0x16e120: 0xc04f8fc  jal         func_13E3F0
label_16e124:
    if (ctx->pc == 0x16E124u) {
        ctx->pc = 0x16E124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E120u;
        // 0x16e124: 0xae2200f0  sw          $v0, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E128u;
        goto label_16e128;
    }
    ctx->pc = 0x16E120u;
    SET_GPR_U32(ctx, 31, 0x16E128u);
    ctx->pc = 0x16E124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E120u;
    // 0x16e124: 0xae2200f0  sw          $v0, 0xF0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3F0u, 0x16E120u, 0x16E128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E128u;
label_16e128:
    // 0x16e128: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16e128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e12c:
    // 0x16e12c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16e12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16e130:
    // 0x16e130: 0xc045fea  jal         func_117FA8
label_16e134:
    if (ctx->pc == 0x16E134u) {
        ctx->pc = 0x16E134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E130u;
        // 0x16e134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E138u;
        goto label_16e138;
    }
    ctx->pc = 0x16E130u;
    SET_GPR_U32(ctx, 31, 0x16E138u);
    ctx->pc = 0x16E134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E130u;
    // 0x16e134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x16E130u, 0x16E138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E138u;
label_16e138:
    // 0x16e138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16e138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e13c:
    // 0x16e13c: 0xc046104  jal         func_118410
label_16e140:
    if (ctx->pc == 0x16E140u) {
        ctx->pc = 0x16E140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E13Cu;
        // 0x16e140: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E144u;
        goto label_16e144;
    }
    ctx->pc = 0x16E13Cu;
    SET_GPR_U32(ctx, 31, 0x16E144u);
    ctx->pc = 0x16E140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E13Cu;
    // 0x16e140: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x16E13Cu, 0x16E144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E144u;
label_16e144:
    // 0x16e144: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x16e144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_16e148:
    // 0x16e148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16e148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e14c:
    // 0x16e14c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x16e14cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_16e150:
    // 0x16e150: 0xc046190  jal         func_118640
label_16e154:
    if (ctx->pc == 0x16E154u) {
        ctx->pc = 0x16E154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E150u;
        // 0x16e154: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E158u;
        goto label_16e158;
    }
    ctx->pc = 0x16E150u;
    SET_GPR_U32(ctx, 31, 0x16E158u);
    ctx->pc = 0x16E154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E150u;
    // 0x16e154: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118640u, 0x16E150u, 0x16E158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E158u;
label_16e158:
    // 0x16e158: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x16e158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_16e15c:
    // 0x16e15c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16e15cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e160:
    // 0x16e160: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x16e160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_16e164:
    // 0x16e164: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x16e164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_16e168:
    // 0x16e168: 0x40f809  jalr        $v0
label_16e16c:
    if (ctx->pc == 0x16E16Cu) {
        ctx->pc = 0x16E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E168u;
        // 0x16e16c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E170u;
        goto label_16e170;
    }
    ctx->pc = 0x16E168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16E170u);
        ctx->pc = 0x16E16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E168u;
        // 0x16e16c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E168u, 0x16E170u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x16E170u;
label_16e170:
    // 0x16e170: 0x10000002  b           . + 4 + (0x2 << 2)
label_16e174:
    if (ctx->pc == 0x16E174u) {
        ctx->pc = 0x16E174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E170u;
        // 0x16e174: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E178u;
        goto label_16e178;
    }
    ctx->pc = 0x16E170u;
    {
        const bool branch_taken_0x16e170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E170u;
        // 0x16e174: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e170) {
            ctx->pc = 0x16E17Cu;
            goto label_16e17c;
        }
    }
    ctx->pc = 0x16E178u;
label_16e178:
    // 0x16e178: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x16e178u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16e17c:
    // 0x16e17c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16e17cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16e180:
    // 0x16e180: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16e180u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_16e184:
    // 0x16e184: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16e184u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_16e188:
    // 0x16e188: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16e188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_16e18c:
    // 0x16e18c: 0x3e00008  jr          $ra
label_16e190:
    if (ctx->pc == 0x16E190u) {
        ctx->pc = 0x16E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E18Cu;
        // 0x16e190: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16E194u;
        goto label_16e194;
    }
    ctx->pc = 0x16E18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E18Cu;
        // 0x16e190: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E194u;
label_16e194:
    // 0x16e194: 0x0  nop
    ctx->pc = 0x16e194u;
    // NOP
    ctx->pc = 0x16e198u;
}

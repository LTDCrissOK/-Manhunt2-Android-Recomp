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

// Function: sub_0020F048
// Address: 0x20f048 - 0x20f148
void sub_0020F048_0x20f048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F048_0x20f048");
#endif

    switch (ctx->pc) {
        case 0x20f048u: goto label_20f048;
        case 0x20f04cu: goto label_20f04c;
        case 0x20f050u: goto label_20f050;
        case 0x20f054u: goto label_20f054;
        case 0x20f058u: goto label_20f058;
        case 0x20f05cu: goto label_20f05c;
        case 0x20f060u: goto label_20f060;
        case 0x20f064u: goto label_20f064;
        case 0x20f068u: goto label_20f068;
        case 0x20f06cu: goto label_20f06c;
        case 0x20f070u: goto label_20f070;
        case 0x20f074u: goto label_20f074;
        case 0x20f078u: goto label_20f078;
        case 0x20f07cu: goto label_20f07c;
        case 0x20f080u: goto label_20f080;
        case 0x20f084u: goto label_20f084;
        case 0x20f088u: goto label_20f088;
        case 0x20f08cu: goto label_20f08c;
        case 0x20f090u: goto label_20f090;
        case 0x20f094u: goto label_20f094;
        case 0x20f098u: goto label_20f098;
        case 0x20f09cu: goto label_20f09c;
        case 0x20f0a0u: goto label_20f0a0;
        case 0x20f0a4u: goto label_20f0a4;
        case 0x20f0a8u: goto label_20f0a8;
        case 0x20f0acu: goto label_20f0ac;
        case 0x20f0b0u: goto label_20f0b0;
        case 0x20f0b4u: goto label_20f0b4;
        case 0x20f0b8u: goto label_20f0b8;
        case 0x20f0bcu: goto label_20f0bc;
        case 0x20f0c0u: goto label_20f0c0;
        case 0x20f0c4u: goto label_20f0c4;
        case 0x20f0c8u: goto label_20f0c8;
        case 0x20f0ccu: goto label_20f0cc;
        case 0x20f0d0u: goto label_20f0d0;
        case 0x20f0d4u: goto label_20f0d4;
        case 0x20f0d8u: goto label_20f0d8;
        case 0x20f0dcu: goto label_20f0dc;
        case 0x20f0e0u: goto label_20f0e0;
        case 0x20f0e4u: goto label_20f0e4;
        case 0x20f0e8u: goto label_20f0e8;
        case 0x20f0ecu: goto label_20f0ec;
        case 0x20f0f0u: goto label_20f0f0;
        case 0x20f0f4u: goto label_20f0f4;
        case 0x20f0f8u: goto label_20f0f8;
        case 0x20f0fcu: goto label_20f0fc;
        case 0x20f100u: goto label_20f100;
        case 0x20f104u: goto label_20f104;
        case 0x20f108u: goto label_20f108;
        case 0x20f10cu: goto label_20f10c;
        case 0x20f110u: goto label_20f110;
        case 0x20f114u: goto label_20f114;
        case 0x20f118u: goto label_20f118;
        case 0x20f11cu: goto label_20f11c;
        case 0x20f120u: goto label_20f120;
        case 0x20f124u: goto label_20f124;
        case 0x20f128u: goto label_20f128;
        case 0x20f12cu: goto label_20f12c;
        case 0x20f130u: goto label_20f130;
        case 0x20f134u: goto label_20f134;
        case 0x20f138u: goto label_20f138;
        case 0x20f13cu: goto label_20f13c;
        case 0x20f140u: goto label_20f140;
        case 0x20f144u: goto label_20f144;
        default: break;
    }

    ctx->pc = 0x20f048u;

label_20f048:
    // 0x20f048: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20f048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20f04c:
    // 0x20f04c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20f04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_20f050:
    // 0x20f050: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x20f050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_20f054:
    // 0x20f054: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20f054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20f058:
    // 0x20f058: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x20f058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_20f05c:
    // 0x20f05c: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x20f05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_20f060:
    // 0x20f060: 0x50400036  beql        $v0, $zero, . + 4 + (0x36 << 2)
label_20f064:
    if (ctx->pc == 0x20F064u) {
        ctx->pc = 0x20F064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F060u;
        // 0x20f064: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F068u;
        goto label_20f068;
    }
    ctx->pc = 0x20F060u;
    {
        const bool branch_taken_0x20f060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f060) {
            ctx->pc = 0x20F064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F060u;
            // 0x20f064: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F13Cu;
            goto label_20f13c;
        }
    }
    ctx->pc = 0x20F068u;
label_20f068:
    // 0x20f068: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x20f068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_20f06c:
    // 0x20f06c: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
label_20f070:
    if (ctx->pc == 0x20F070u) {
        ctx->pc = 0x20F070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F06Cu;
        // 0x20f070: 0x8e0300bc  lw          $v1, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F074u;
        goto label_20f074;
    }
    ctx->pc = 0x20F06Cu;
    {
        const bool branch_taken_0x20f06c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20f06c) {
            ctx->pc = 0x20F070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F06Cu;
            // 0x20f070: 0x8e0300bc  lw          $v1, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F0A4u;
            goto label_20f0a4;
        }
    }
    ctx->pc = 0x20F074u;
label_20f074:
    // 0x20f074: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x20f074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_20f078:
    // 0x20f078: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x20f078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
label_20f07c:
    // 0x20f07c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x20f07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_20f080:
    // 0x20f080: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_20f084:
    if (ctx->pc == 0x20F084u) {
        ctx->pc = 0x20F084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F080u;
        // 0x20f084: 0x30628000  andi        $v0, $v1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F088u;
        goto label_20f088;
    }
    ctx->pc = 0x20F080u;
    {
        const bool branch_taken_0x20f080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F080u;
        // 0x20f084: 0x30628000  andi        $v0, $v1, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f080) {
            ctx->pc = 0x20F0A0u;
            goto label_20f0a0;
        }
    }
    ctx->pc = 0x20F088u;
label_20f088:
    // 0x20f088: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_20f08c:
    if (ctx->pc == 0x20F08Cu) {
        ctx->pc = 0x20F08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F088u;
        // 0x20f08c: 0x8e0300bc  lw          $v1, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F090u;
        goto label_20f090;
    }
    ctx->pc = 0x20F088u;
    {
        const bool branch_taken_0x20f088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20f088) {
            ctx->pc = 0x20F08Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F088u;
            // 0x20f08c: 0x8e0300bc  lw          $v1, 0xBC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20F0A4u;
            goto label_20f0a4;
        }
    }
    ctx->pc = 0x20F090u;
label_20f090:
    // 0x20f090: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x20f090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_20f094:
    // 0x20f094: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x20f094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_20f098:
    // 0x20f098: 0x40f809  jalr        $v0
label_20f09c:
    if (ctx->pc == 0x20F09Cu) {
        ctx->pc = 0x20F0A0u;
        goto label_20f0a0;
    }
    ctx->pc = 0x20F098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20F0A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F098u, 0x20F0A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F0A0u;
label_20f0a0:
    // 0x20f0a0: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x20f0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_20f0a4:
    // 0x20f0a4: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x20f0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_20f0a8:
    // 0x20f0a8: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x20f0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_20f0ac:
    // 0x20f0ac: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_20f0b0:
    if (ctx->pc == 0x20F0B0u) {
        ctx->pc = 0x20F0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0ACu;
        // 0x20f0b0: 0x30621001  andi        $v0, $v1, 0x1001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4097);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F0B4u;
        goto label_20f0b4;
    }
    ctx->pc = 0x20F0ACu;
    {
        const bool branch_taken_0x20f0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0ACu;
        // 0x20f0b0: 0x30621001  andi        $v0, $v1, 0x1001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4097);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f0ac) {
            ctx->pc = 0x20F138u;
            goto label_20f138;
        }
    }
    ctx->pc = 0x20F0B4u;
label_20f0b4:
    // 0x20f0b4: 0x38421001  xori        $v0, $v0, 0x1001
    ctx->pc = 0x20f0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4097);
label_20f0b8:
    // 0x20f0b8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_20f0bc:
    if (ctx->pc == 0x20F0BCu) {
        ctx->pc = 0x20F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0B8u;
        // 0x20f0bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F0C0u;
        goto label_20f0c0;
    }
    ctx->pc = 0x20F0B8u;
    {
        const bool branch_taken_0x20f0b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0B8u;
        // 0x20f0bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f0b8) {
            ctx->pc = 0x20F138u;
            goto label_20f138;
        }
    }
    ctx->pc = 0x20F0C0u;
label_20f0c0:
    // 0x20f0c0: 0x8e020218  lw          $v0, 0x218($s0)
    ctx->pc = 0x20f0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_20f0c4:
    // 0x20f0c4: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x20f0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_20f0c8:
    // 0x20f0c8: 0x60f809  jalr        $v1
label_20f0cc:
    if (ctx->pc == 0x20F0CCu) {
        ctx->pc = 0x20F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0C8u;
        // 0x20f0cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F0D0u;
        goto label_20f0d0;
    }
    ctx->pc = 0x20F0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x20F0D0u);
        ctx->pc = 0x20F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0C8u;
        // 0x20f0cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F0C8u, 0x20F0D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20F0D0u;
label_20f0d0:
    // 0x20f0d0: 0x8e06011c  lw          $a2, 0x11C($s0)
    ctx->pc = 0x20f0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_20f0d4:
    // 0x20f0d4: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x20f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
label_20f0d8:
    // 0x20f0d8: 0x24443500  addiu       $a0, $v0, 0x3500
    ctx->pc = 0x20f0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13568));
label_20f0dc:
    // 0x20f0dc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x20f0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_20f0e0:
    // 0x20f0e0: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x20f0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_20f0e4:
    // 0x20f0e4: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x20f0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
label_20f0e8:
    // 0x20f0e8: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_20f0ec:
    if (ctx->pc == 0x20F0ECu) {
        ctx->pc = 0x20F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0E8u;
        // 0x20f0ec: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F0F0u;
        goto label_20f0f0;
    }
    ctx->pc = 0x20F0E8u;
    {
        const bool branch_taken_0x20f0e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0E8u;
        // 0x20f0ec: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f0e8) {
            ctx->pc = 0x20F10Cu;
            goto label_20f10c;
        }
    }
    ctx->pc = 0x20F0F0u;
label_20f0f0:
    // 0x20f0f0: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x20f0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_20f0f4:
    // 0x20f0f4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x20f0f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20f0f8:
    // 0x20f0f8: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x20f0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_20f0fc:
    // 0x20f0fc: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x20f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_20f100:
    // 0x20f100: 0xc0f6e9c  jal         func_3DBA70
label_20f104:
    if (ctx->pc == 0x20F104u) {
        ctx->pc = 0x20F104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F100u;
        // 0x20f104: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F108u;
        goto label_20f108;
    }
    ctx->pc = 0x20F100u;
    SET_GPR_U32(ctx, 31, 0x20F108u);
    ctx->pc = 0x20F104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F100u;
    // 0x20f104: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBA70u, 0x20F100u, 0x20F108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F108u;
label_20f108:
    // 0x20f108: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x20f108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_20f10c:
    // 0x20f10c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x20f10cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_20f110:
    // 0x20f110: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20f110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20f114:
    // 0x20f114: 0xc0f7676  jal         func_3DD9D8
label_20f118:
    if (ctx->pc == 0x20F118u) {
        ctx->pc = 0x20F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F114u;
        // 0x20f118: 0x24843510  addiu       $a0, $a0, 0x3510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F11Cu;
        goto label_20f11c;
    }
    ctx->pc = 0x20F114u;
    SET_GPR_U32(ctx, 31, 0x20F11Cu);
    ctx->pc = 0x20F118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F114u;
    // 0x20f118: 0x24843510  addiu       $a0, $a0, 0x3510 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD9D8u, 0x20F114u, 0x20F11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F11Cu;
label_20f11c:
    // 0x20f11c: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x20f11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_20f120:
    // 0x20f120: 0x2404fbff  addiu       $a0, $zero, -0x401
    ctx->pc = 0x20f120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
label_20f124:
    // 0x20f124: 0x2405efff  addiu       $a1, $zero, -0x1001
    ctx->pc = 0x20f124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
label_20f128:
    // 0x20f128: 0xae02011c  sw          $v0, 0x11C($s0)
    ctx->pc = 0x20f128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 2));
label_20f12c:
    // 0x20f12c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x20f12cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_20f130:
    // 0x20f130: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x20f130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_20f134:
    // 0x20f134: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x20f134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
label_20f138:
    // 0x20f138: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20f138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20f13c:
    // 0x20f13c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x20f13cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_20f140:
    // 0x20f140: 0x3e00008  jr          $ra
label_20f144:
    if (ctx->pc == 0x20F144u) {
        ctx->pc = 0x20F144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F140u;
        // 0x20f144: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20F148u;
        goto label_fallthrough_0x20f140;
    }
    ctx->pc = 0x20F140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F140u;
        // 0x20f144: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x20f140:
    ctx->pc = 0x20F148u;
}

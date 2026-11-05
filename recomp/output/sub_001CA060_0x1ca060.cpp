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

// Function: sub_001CA060
// Address: 0x1ca060 - 0x1ca1a0
void sub_001CA060_0x1ca060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA060_0x1ca060");
#endif

    switch (ctx->pc) {
        case 0x1ca0a0u: goto label_1ca0a0;
        case 0x1ca0d0u: goto label_1ca0d0;
        case 0x1ca0e8u: goto label_1ca0e8;
        case 0x1ca10cu: goto label_1ca10c;
        case 0x1ca11cu: goto label_1ca11c;
        case 0x1ca12cu: goto label_1ca12c;
        case 0x1ca158u: goto label_1ca158;
        default: break;
    }

    ctx->pc = 0x1ca060u;

    // 0x1ca060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ca060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ca064: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ca068: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ca068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ca06c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca06cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca070: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ca070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ca074: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ca074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca078: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1ca078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1ca07c: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x1ca07cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x1ca080: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ca080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ca084: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1ca084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ca088: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1ca088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1ca08c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1ca08cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1ca090: 0x1080003c  beqz        $a0, . + 4 + (0x3C << 2)
    ctx->pc = 0x1CA090u;
    {
        const bool branch_taken_0x1ca090 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA090u;
        // 0x1ca094: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca090) {
            ctx->pc = 0x1CA184u;
            goto label_1ca184;
        }
    }
    ctx->pc = 0x1CA098u;
    // 0x1ca098: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x1CA098u;
    SET_GPR_U32(ctx, 31, 0x1CA0A0u);
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x1CA098u, 0x1CA0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA0A0u;
label_1ca0a0:
    // 0x1ca0a0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1ca0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ca0a4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1ca0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1ca0a8: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x1ca0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x1ca0ac: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x1ca0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
    // 0x1ca0b0: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x1ca0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x1ca0b4: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x1CA0B4u;
    {
        const bool branch_taken_0x1ca0b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca0b4) {
            ctx->pc = 0x1CA0B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA0B4u;
            // 0x1ca0b8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA174u;
            goto label_1ca174;
        }
    }
    ctx->pc = 0x1CA0BCu;
    // 0x1ca0bc: 0x8c910274  lw          $s1, 0x274($a0)
    ctx->pc = 0x1ca0bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
    // 0x1ca0c0: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CA0C0u;
    {
        const bool branch_taken_0x1ca0c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA0C0u;
        // 0x1ca0c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca0c0) {
            ctx->pc = 0x1CA0E0u;
            goto label_1ca0e0;
        }
    }
    ctx->pc = 0x1CA0C8u;
    // 0x1ca0c8: 0xc0f6da6  jal         func_3DB698
    ctx->pc = 0x1CA0C8u;
    SET_GPR_U32(ctx, 31, 0x1CA0D0u);
    ctx->pc = 0x1CA0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA0C8u;
    // 0x1ca0cc: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x1CA0C8u, 0x1CA0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA0D0u;
label_1ca0d0:
    // 0x1ca0d0: 0x5440002e  bnel        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x1CA0D0u;
    {
        const bool branch_taken_0x1ca0d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca0d0) {
            ctx->pc = 0x1CA0D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA0D0u;
            // 0x1ca0d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA18Cu;
            goto label_1ca18c;
        }
    }
    ctx->pc = 0x1CA0D8u;
    // 0x1ca0d8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1CA0D8u;
    {
        const bool branch_taken_0x1ca0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA0D8u;
        // 0x1ca0dc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca0d8) {
            ctx->pc = 0x1CA174u;
            goto label_1ca174;
        }
    }
    ctx->pc = 0x1CA0E0u;
label_1ca0e0:
    // 0x1ca0e0: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1CA0E0u;
    SET_GPR_U32(ctx, 31, 0x1CA0E8u);
    ctx->pc = 0x1CA0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA0E0u;
    // 0x1ca0e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1CA0E0u, 0x1CA0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA0E8u;
label_1ca0e8:
    // 0x1ca0e8: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x1ca0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x1ca0ec: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CA0ECu;
    {
        const bool branch_taken_0x1ca0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA0ECu;
        // 0x1ca0f0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca0ec) {
            ctx->pc = 0x1CA114u;
            goto label_1ca114;
        }
    }
    ctx->pc = 0x1CA0F4u;
    // 0x1ca0f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ca0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ca0f8: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x1ca0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x1ca0fc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1ca0fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ca100: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1ca100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1ca104: 0xc07266c  jal         func_1C99B0
    ctx->pc = 0x1CA104u;
    SET_GPR_U32(ctx, 31, 0x1CA10Cu);
    ctx->pc = 0x1CA108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA104u;
    // 0x1ca108: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C99B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C99B0u, 0x1CA104u, 0x1CA10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA10Cu;
label_1ca10c:
    // 0x1ca10c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1CA10Cu;
    {
        const bool branch_taken_0x1ca10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA10Cu;
        // 0x1ca110: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca10c) {
            ctx->pc = 0x1CA18Cu;
            goto label_1ca18c;
        }
    }
    ctx->pc = 0x1CA114u;
label_1ca114:
    // 0x1ca114: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1CA114u;
    SET_GPR_U32(ctx, 31, 0x1CA11Cu);
    ctx->pc = 0x1CA118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA114u;
    // 0x1ca118: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1CA114u, 0x1CA11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA11Cu;
label_1ca11c:
    // 0x1ca11c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CA11Cu;
    {
        const bool branch_taken_0x1ca11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca11c) {
            ctx->pc = 0x1CA120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA11Cu;
            // 0x1ca120: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA138u;
            goto label_1ca138;
        }
    }
    ctx->pc = 0x1CA124u;
    // 0x1ca124: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1CA124u;
    SET_GPR_U32(ctx, 31, 0x1CA12Cu);
    ctx->pc = 0x1CA128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA124u;
    // 0x1ca128: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1CA124u, 0x1CA12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA12Cu;
label_1ca12c:
    // 0x1ca12c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ca12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ca130: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CA130u;
    {
        const bool branch_taken_0x1ca130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ca130) {
            ctx->pc = 0x1CA134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA130u;
            // 0x1ca134: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA138u;
            goto label_1ca138;
        }
    }
    ctx->pc = 0x1CA138u;
label_1ca138:
    // 0x1ca138: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CA138u;
    {
        const bool branch_taken_0x1ca138 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca138) {
            ctx->pc = 0x1CA150u;
            goto label_1ca150;
        }
    }
    ctx->pc = 0x1CA140u;
    // 0x1ca140: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ca140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ca144: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1ca144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1ca148: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1CA148u;
    {
        const bool branch_taken_0x1ca148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA148u;
        // 0x1ca14c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca148) {
            ctx->pc = 0x1CA188u;
            goto label_1ca188;
        }
    }
    ctx->pc = 0x1CA150u;
label_1ca150:
    // 0x1ca150: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x1CA150u;
    SET_GPR_U32(ctx, 31, 0x1CA158u);
    ctx->pc = 0x1CA154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA150u;
    // 0x1ca154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x1CA150u, 0x1CA158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CA158u;
label_1ca158:
    // 0x1ca158: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1ca158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x1ca15c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1CA15Cu;
    {
        const bool branch_taken_0x1ca15c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca15c) {
            ctx->pc = 0x1CA160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA15Cu;
            // 0x1ca160: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA18Cu;
            goto label_1ca18c;
        }
    }
    ctx->pc = 0x1CA164u;
    // 0x1ca164: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ca164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ca168: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1ca168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1ca16c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1CA16Cu;
    {
        const bool branch_taken_0x1ca16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA16Cu;
        // 0x1ca170: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca16c) {
            ctx->pc = 0x1CA188u;
            goto label_1ca188;
        }
    }
    ctx->pc = 0x1CA174u;
label_1ca174:
    // 0x1ca174: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1ca174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1ca178: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ca178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ca17c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CA17Cu;
    {
        const bool branch_taken_0x1ca17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA17Cu;
        // 0x1ca180: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca17c) {
            ctx->pc = 0x1CA188u;
            goto label_1ca188;
        }
    }
    ctx->pc = 0x1CA184u;
label_1ca184:
    // 0x1ca184: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1ca184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1ca188:
    // 0x1ca188: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ca18c:
    // 0x1ca18c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ca18cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ca190: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ca190u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca194: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ca194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ca198: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA198u;
        // 0x1ca19c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA1A0u;
}

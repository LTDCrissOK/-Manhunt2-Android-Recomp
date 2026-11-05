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

// Function: sub_00249FC8
// Address: 0x249fc8 - 0x24a268
void sub_00249FC8_0x249fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249FC8_0x249fc8");
#endif

    switch (ctx->pc) {
        case 0x24a038u: goto label_24a038;
        case 0x24a0b4u: goto label_24a0b4;
        case 0x24a16cu: goto label_24a16c;
        case 0x24a174u: goto label_24a174;
        case 0x24a188u: goto label_24a188;
        case 0x24a194u: goto label_24a194;
        case 0x24a1a0u: goto label_24a1a0;
        case 0x24a1c0u: goto label_24a1c0;
        case 0x24a1ccu: goto label_24a1cc;
        case 0x24a1d8u: goto label_24a1d8;
        case 0x24a1e8u: goto label_24a1e8;
        case 0x24a1f8u: goto label_24a1f8;
        case 0x24a238u: goto label_24a238;
        case 0x24a248u: goto label_24a248;
        default: break;
    }

    ctx->pc = 0x249fc8u;

    // 0x249fc8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x249fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x249fcc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x249fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x249fd0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x249fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x249fd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x249fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249fd8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x249fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x249fdc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x249fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x249fe0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x249fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x249fe4: 0x8e110334  lw          $s1, 0x334($s0)
    ctx->pc = 0x249fe4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x249fe8: 0x8e240150  lw          $a0, 0x150($s1)
    ctx->pc = 0x249fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x249fec: 0x38820045  xori        $v0, $a0, 0x45
    ctx->pc = 0x249fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)69);
    // 0x249ff0: 0x10400095  beqz        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x249FF0u;
    {
        const bool branch_taken_0x249ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x249FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249FF0u;
        // 0x249ff4: 0x2482ffea  addiu       $v0, $a0, -0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249ff0) {
            ctx->pc = 0x24A248u;
            goto label_24a248;
        }
    }
    ctx->pc = 0x249FF8u;
    // 0x249ff8: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x249ff8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x249ffc: 0x54400093  bnel        $v0, $zero, . + 4 + (0x93 << 2)
    ctx->pc = 0x249FFCu;
    {
        const bool branch_taken_0x249ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249ffc) {
            ctx->pc = 0x24A000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x249FFCu;
            // 0x24a000: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A24Cu;
            goto label_24a24c;
        }
    }
    ctx->pc = 0x24A004u;
    // 0x24a004: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x24a004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
    // 0x24a008: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x24a008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x24a00c: 0x1062007c  beq         $v1, $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x24A00Cu;
    {
        const bool branch_taken_0x24a00c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A00Cu;
        // 0x24a010: 0x2482fffa  addiu       $v0, $a0, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a00c) {
            ctx->pc = 0x24A200u;
            goto label_24a200;
        }
    }
    ctx->pc = 0x24A014u;
    // 0x24a014: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x24a014u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a018: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x24a018u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x24a01c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x24A01Cu;
    {
        const bool branch_taken_0x24a01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A01Cu;
        // 0x24a020: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a01c) {
            ctx->pc = 0x24A058u;
            goto label_24a058;
        }
    }
    ctx->pc = 0x24A024u;
    // 0x24a024: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x24a024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x24a028: 0x5082000c  beql        $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24A028u;
    {
        const bool branch_taken_0x24a028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x24a028) {
            ctx->pc = 0x24A02Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A028u;
            // 0x24a02c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A05Cu;
            goto label_24a05c;
        }
    }
    ctx->pc = 0x24A030u;
    // 0x24a030: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x24A030u;
    SET_GPR_U32(ctx, 31, 0x24A038u);
    ctx->pc = 0x24A034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A030u;
    // 0x24a034: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x24A030u, 0x24A038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A038u;
label_24a038:
    // 0x24a038: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x24A038u;
    {
        const bool branch_taken_0x24a038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a038) {
            ctx->pc = 0x24A03Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A038u;
            // 0x24a03c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A05Cu;
            goto label_24a05c;
        }
    }
    ctx->pc = 0x24A040u;
    // 0x24a040: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x24a040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x24a044: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x24a044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x24a048: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A048u;
    {
        const bool branch_taken_0x24a048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A048u;
        // 0x24a04c: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a048) {
            ctx->pc = 0x24A058u;
            goto label_24a058;
        }
    }
    ctx->pc = 0x24A050u;
    // 0x24a050: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24A050u;
    {
        const bool branch_taken_0x24a050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24a050) {
            ctx->pc = 0x24A05Cu;
            goto label_24a05c;
        }
    }
    ctx->pc = 0x24A058u;
label_24a058:
    // 0x24a058: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x24a058u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24a05c:
    // 0x24a05c: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x24A05Cu;
    {
        const bool branch_taken_0x24a05c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a05c) {
            ctx->pc = 0x24A07Cu;
            goto label_24a07c;
        }
    }
    ctx->pc = 0x24A064u;
    // 0x24a064: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x24a064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x24a068: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24a068u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24a06c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x24a06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x24a070: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24a070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24a074: 0x38630041  xori        $v1, $v1, 0x41
    ctx->pc = 0x24a074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65);
    // 0x24a078: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x24a078u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_24a07c:
    // 0x24a07c: 0x56600073  bnel        $s3, $zero, . + 4 + (0x73 << 2)
    ctx->pc = 0x24A07Cu;
    {
        const bool branch_taken_0x24a07c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a07c) {
            ctx->pc = 0x24A080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A07Cu;
            // 0x24a080: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A24Cu;
            goto label_24a24c;
        }
    }
    ctx->pc = 0x24A084u;
    // 0x24a084: 0x8e110334  lw          $s1, 0x334($s0)
    ctx->pc = 0x24a084u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x24a088: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x24a088u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a08c: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x24a08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x24a090: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x24a090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
    // 0x24a094: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x24a094u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x24a098: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x24A098u;
    {
        const bool branch_taken_0x24a098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A098u;
        // 0x24a09c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a098) {
            ctx->pc = 0x24A0D4u;
            goto label_24a0d4;
        }
    }
    ctx->pc = 0x24A0A0u;
    // 0x24a0a0: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x24a0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x24a0a4: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24A0A4u;
    {
        const bool branch_taken_0x24a0a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24a0a4) {
            ctx->pc = 0x24A0A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A0A4u;
            // 0x24a0a8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A0D8u;
            goto label_24a0d8;
        }
    }
    ctx->pc = 0x24A0ACu;
    // 0x24a0ac: 0xc0924a8  jal         func_2492A0
    ctx->pc = 0x24A0ACu;
    SET_GPR_U32(ctx, 31, 0x24A0B4u);
    ctx->pc = 0x24A0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A0ACu;
    // 0x24a0b0: 0x8e240148  lw          $a0, 0x148($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x24A0ACu, 0x24A0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A0B4u;
label_24a0b4:
    // 0x24a0b4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x24A0B4u;
    {
        const bool branch_taken_0x24a0b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a0b4) {
            ctx->pc = 0x24A0B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A0B4u;
            // 0x24a0b8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A0D8u;
            goto label_24a0d8;
        }
    }
    ctx->pc = 0x24A0BCu;
    // 0x24a0bc: 0x8e230150  lw          $v1, 0x150($s1)
    ctx->pc = 0x24a0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x24a0c0: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x24a0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x24a0c4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A0C4u;
    {
        const bool branch_taken_0x24a0c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A0C4u;
        // 0x24a0c8: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a0c4) {
            ctx->pc = 0x24A0D4u;
            goto label_24a0d4;
        }
    }
    ctx->pc = 0x24A0CCu;
    // 0x24a0cc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24A0CCu;
    {
        const bool branch_taken_0x24a0cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24a0cc) {
            ctx->pc = 0x24A0D8u;
            goto label_24a0d8;
        }
    }
    ctx->pc = 0x24A0D4u;
label_24a0d4:
    // 0x24a0d4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x24a0d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24a0d8:
    // 0x24a0d8: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x24A0D8u;
    {
        const bool branch_taken_0x24a0d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a0d8) {
            ctx->pc = 0x24A0F8u;
            goto label_24a0f8;
        }
    }
    ctx->pc = 0x24A0E0u;
    // 0x24a0e0: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x24a0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x24a0e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24a0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24a0e8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x24a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x24a0ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24a0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24a0f0: 0x3863003d  xori        $v1, $v1, 0x3D
    ctx->pc = 0x24a0f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)61);
    // 0x24a0f4: 0x2c730001  sltiu       $s3, $v1, 0x1
    ctx->pc = 0x24a0f4u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_24a0f8:
    // 0x24a0f8: 0x56600054  bnel        $s3, $zero, . + 4 + (0x54 << 2)
    ctx->pc = 0x24A0F8u;
    {
        const bool branch_taken_0x24a0f8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a0f8) {
            ctx->pc = 0x24A0FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A0F8u;
            // 0x24a0fc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A24Cu;
            goto label_24a24c;
        }
    }
    ctx->pc = 0x24A100u;
    // 0x24a100: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x24a100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x24a104: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x24a104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x24a108: 0x2462ffcf  addiu       $v0, $v1, -0x31
    ctx->pc = 0x24a108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967247));
    // 0x24a10c: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x24a10cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x24a110: 0x5440004e  bnel        $v0, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x24A110u;
    {
        const bool branch_taken_0x24a110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a110) {
            ctx->pc = 0x24A114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A110u;
            // 0x24a114: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A24Cu;
            goto label_24a24c;
        }
    }
    ctx->pc = 0x24A118u;
    // 0x24a118: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x24a118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x24a11c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x24a11cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x24a120: 0x5440004a  bnel        $v0, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x24A120u;
    {
        const bool branch_taken_0x24a120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a120) {
            ctx->pc = 0x24A124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A120u;
            // 0x24a124: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A24Cu;
            goto label_24a24c;
        }
    }
    ctx->pc = 0x24A128u;
    // 0x24a128: 0x2462ffed  addiu       $v0, $v1, -0x13
    ctx->pc = 0x24a128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967277));
    // 0x24a12c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x24a12cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x24a130: 0x54400046  bnel        $v0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x24A130u;
    {
        const bool branch_taken_0x24a130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a130) {
            ctx->pc = 0x24A134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A130u;
            // 0x24a134: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A24Cu;
            goto label_24a24c;
        }
    }
    ctx->pc = 0x24A138u;
    // 0x24a138: 0xc6010500  lwc1        $f1, 0x500($s0)
    ctx->pc = 0x24a138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a13c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x24a13cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x24a140: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24a140u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24a144: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x24a144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x24a148: 0x46000885  abs.s       $f2, $f1
    ctx->pc = 0x24a148u;
    ctx->f[2] = FPU_ABS_S(ctx->f[1]);
    // 0x24a14c: 0xc60004fc  lwc1        $f0, 0x4FC($s0)
    ctx->pc = 0x24a14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a150: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x24a150u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x24a154: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x24a154u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24a158: 0x0  nop
    ctx->pc = 0x24a158u;
    // NOP
    // 0x24a15c: 0x4500003a  bc1f        . + 4 + (0x3A << 2)
    ctx->pc = 0x24A15Cu;
    {
        const bool branch_taken_0x24a15c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A15Cu;
        // 0x24a160: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a15c) {
            ctx->pc = 0x24A248u;
            goto label_24a248;
        }
    }
    ctx->pc = 0x24A164u;
    // 0x24a164: 0xc0927dc  jal         func_249F70
    ctx->pc = 0x24A164u;
    SET_GPR_U32(ctx, 31, 0x24A16Cu);
    ctx->pc = 0x249F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249F70u, 0x24A164u, 0x24A16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A16Cu;
label_24a16c:
    // 0x24a16c: 0xc08f672  jal         func_23D9C8
    ctx->pc = 0x24A16Cu;
    SET_GPR_U32(ctx, 31, 0x24A174u);
    ctx->pc = 0x24A170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A16Cu;
    // 0x24a170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x24A16Cu, 0x24A174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A174u;
label_24a174:
    // 0x24a174: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x24A174u;
    {
        const bool branch_taken_0x24a174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a174) {
            ctx->pc = 0x24A1E0u;
            goto label_24a1e0;
        }
    }
    ctx->pc = 0x24A17Cu;
    // 0x24a17c: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x24a17cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x24a180: 0xc092a9a  jal         func_24AA68
    ctx->pc = 0x24A180u;
    SET_GPR_U32(ctx, 31, 0x24A188u);
    ctx->pc = 0x24A184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A180u;
    // 0x24a184: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AA68u, 0x24A180u, 0x24A188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A188u;
label_24a188:
    // 0x24a188: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x24a188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x24a18c: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x24A18Cu;
    SET_GPR_U32(ctx, 31, 0x24A194u);
    ctx->pc = 0x24A190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A18Cu;
    // 0x24a190: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x24A18Cu, 0x24A194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A194u;
label_24a194:
    // 0x24a194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a198: 0xc08a15a  jal         func_228568
    ctx->pc = 0x24A198u;
    SET_GPR_U32(ctx, 31, 0x24A1A0u);
    ctx->pc = 0x24A19Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A198u;
    // 0x24a19c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228568u, 0x24A198u, 0x24A1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A1A0u;
label_24a1a0:
    // 0x24a1a0: 0x8e030418  lw          $v1, 0x418($s0)
    ctx->pc = 0x24a1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
    // 0x24a1a4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x24a1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x24a1a8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24A1A8u;
    {
        const bool branch_taken_0x24a1a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1A8u;
        // 0x24a1ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a1a8) {
            ctx->pc = 0x24A1C4u;
            goto label_24a1c4;
        }
    }
    ctx->pc = 0x24A1B0u;
    // 0x24a1b0: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x24a1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x24a1b4: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x24a1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x24a1b8: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x24A1B8u;
    SET_GPR_U32(ctx, 31, 0x24A1C0u);
    ctx->pc = 0x24A1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A1B8u;
    // 0x24a1bc: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x24A1B8u, 0x24A1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A1C0u;
label_24a1c0:
    // 0x24a1c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a1c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24a1c4:
    // 0x24a1c4: 0xc08bd96  jal         func_22F658
    ctx->pc = 0x24A1C4u;
    SET_GPR_U32(ctx, 31, 0x24A1CCu);
    ctx->pc = 0x24A1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A1C4u;
    // 0x24a1c8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F658u, 0x24A1C4u, 0x24A1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A1CCu;
label_24a1cc:
    // 0x24a1cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24a1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24a1d0: 0xc08fc4e  jal         func_23F138
    ctx->pc = 0x24A1D0u;
    SET_GPR_U32(ctx, 31, 0x24A1D8u);
    ctx->pc = 0x24A1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A1D0u;
    // 0x24a1d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F138u, 0x24A1D0u, 0x24A1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A1D8u;
label_24a1d8:
    // 0x24a1d8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x24A1D8u;
    {
        const bool branch_taken_0x24a1d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1D8u;
        // 0x24a1dc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a1d8) {
            ctx->pc = 0x24A24Cu;
            goto label_24a24c;
        }
    }
    ctx->pc = 0x24A1E0u;
label_24a1e0:
    // 0x24a1e0: 0xc092aa2  jal         func_24AA88
    ctx->pc = 0x24A1E0u;
    SET_GPR_U32(ctx, 31, 0x24A1E8u);
    ctx->pc = 0x24A1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A1E0u;
    // 0x24a1e4: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AA88u, 0x24A1E0u, 0x24A1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A1E8u;
label_24a1e8:
    // 0x24a1e8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x24A1E8u;
    {
        const bool branch_taken_0x24a1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1E8u;
        // 0x24a1ec: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a1e8) {
            ctx->pc = 0x24A24Cu;
            goto label_24a24c;
        }
    }
    ctx->pc = 0x24A1F0u;
    // 0x24a1f0: 0xc0927dc  jal         func_249F70
    ctx->pc = 0x24A1F0u;
    SET_GPR_U32(ctx, 31, 0x24A1F8u);
    ctx->pc = 0x249F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249F70u, 0x24A1F0u, 0x24A1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A1F8u;
label_24a1f8:
    // 0x24a1f8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x24A1F8u;
    {
        const bool branch_taken_0x24a1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A1F8u;
        // 0x24a1fc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a1f8) {
            ctx->pc = 0x24A24Cu;
            goto label_24a24c;
        }
    }
    ctx->pc = 0x24A200u;
label_24a200:
    // 0x24a200: 0x2482ffbd  addiu       $v0, $a0, -0x43
    ctx->pc = 0x24a200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967229));
    // 0x24a204: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x24a204u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x24a208: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24A208u;
    {
        const bool branch_taken_0x24a208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A208u;
        // 0x24a20c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a208) {
            ctx->pc = 0x24A224u;
            goto label_24a224;
        }
    }
    ctx->pc = 0x24A210u;
    // 0x24a210: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x24a210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x24a214: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x24A214u;
    {
        const bool branch_taken_0x24a214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x24A218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A214u;
        // 0x24a218: 0x2402004a  addiu       $v0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a214) {
            ctx->pc = 0x24A224u;
            goto label_24a224;
        }
    }
    ctx->pc = 0x24A21Cu;
    // 0x24a21c: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x24A21Cu;
    {
        const bool branch_taken_0x24a21c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x24a21c) {
            ctx->pc = 0x24A228u;
            goto label_24a228;
        }
    }
    ctx->pc = 0x24A224u;
label_24a224:
    // 0x24a224: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24a224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24a228:
    // 0x24a228: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x24A228u;
    {
        const bool branch_taken_0x24a228 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a228) {
            ctx->pc = 0x24A22Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24A228u;
            // 0x24a22c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24A24Cu;
            goto label_24a24c;
        }
    }
    ctx->pc = 0x24A230u;
    // 0x24a230: 0xc092aa2  jal         func_24AA88
    ctx->pc = 0x24A230u;
    SET_GPR_U32(ctx, 31, 0x24A238u);
    ctx->pc = 0x24A234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24A230u;
    // 0x24a234: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AA88u, 0x24A230u, 0x24A238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A238u;
label_24a238:
    // 0x24a238: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24A238u;
    {
        const bool branch_taken_0x24a238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A238u;
        // 0x24a23c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a238) {
            ctx->pc = 0x24A24Cu;
            goto label_24a24c;
        }
    }
    ctx->pc = 0x24A240u;
    // 0x24a240: 0xc0927dc  jal         func_249F70
    ctx->pc = 0x24A240u;
    SET_GPR_U32(ctx, 31, 0x24A248u);
    ctx->pc = 0x249F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249F70u, 0x24A240u, 0x24A248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A248u;
label_24a248:
    // 0x24a248: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24a248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24a24c:
    // 0x24a24c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x24a24cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x24a250: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x24a250u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24a254: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x24a254u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x24a258: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x24a258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24a25c: 0x3e00008  jr          $ra
    ctx->pc = 0x24A25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24A25Cu;
        // 0x24a260: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24A25Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24A264u;
    // 0x24a264: 0x0  nop
    ctx->pc = 0x24a264u;
    // NOP
    ctx->pc = 0x24a268u;
}

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

// Function: sub_001AFFC0
// Address: 0x1affc0 - 0x1b0130
void sub_001AFFC0_0x1affc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AFFC0_0x1affc0");
#endif

    switch (ctx->pc) {
        case 0x1b0030u: goto label_1b0030;
        case 0x1b0074u: goto label_1b0074;
        case 0x1b0080u: goto label_1b0080;
        case 0x1b00d8u: goto label_1b00d8;
        case 0x1b00e4u: goto label_1b00e4;
        case 0x1b010cu: goto label_1b010c;
        default: break;
    }

    ctx->pc = 0x1affc0u;

    // 0x1affc0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1affc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1affc4: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x1affc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x1affc8: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x1affc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x1affcc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1affccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1affd0: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x1affd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
    // 0x1affd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1affd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1affd8: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x1affd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
    // 0x1affdc: 0x109080  sll         $s2, $s0, 2
    ctx->pc = 0x1affdcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1affe0: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x1affe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x1affe4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1affe4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1affe8: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x1affe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x1affec: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x1affecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1afff0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1afff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1afff4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1afff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1afff8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1AFFF8u;
    {
        const bool branch_taken_0x1afff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AFFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFFF8u;
        // 0x1afffc: 0x8e340084  lw          $s4, 0x84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1afff8) {
            ctx->pc = 0x1B0030u;
            goto label_1b0030;
        }
    }
    ctx->pc = 0x1B0000u;
    // 0x1b0000: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1b0000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1b0004: 0x8e26009c  lw          $a2, 0x9C($s1)
    ctx->pc = 0x1b0004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1b0008: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x1b0008u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b000c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1b000cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1b0010: 0x24637190  addiu       $v1, $v1, 0x7190
    ctx->pc = 0x1b0010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29072));
    // 0x1b0014: 0x8cc700f8  lw          $a3, 0xF8($a2)
    ctx->pc = 0x1b0014u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 248)));
    // 0x1b0018: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x1b0018u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x1b001c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1b001cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0020: 0x24a5aee8  addiu       $a1, $a1, -0x5118
    ctx->pc = 0x1b0020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946536));
    // 0x1b0024: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b0024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b0028: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x1B0028u;
    SET_GPR_U32(ctx, 31, 0x1B0030u);
    ctx->pc = 0x1B002Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0028u;
    // 0x1b002c: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x1B0028u, 0x1B0030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0030u;
label_1b0030:
    // 0x1b0030: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1b0030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1b0034: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1b0034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0038: 0x24638658  addiu       $v1, $v1, -0x79A8
    ctx->pc = 0x1b0038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936152));
    // 0x1b003c: 0x8c620288  lw          $v0, 0x288($v1)
    ctx->pc = 0x1b003cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F88E0u));
    // 0x1b0040: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1b0040u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b0044: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B0044u;
    {
        const bool branch_taken_0x1b0044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0044u;
        // 0x1b0048: 0x8c6202b8  lw          $v0, 0x2B8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0044) {
            ctx->pc = 0x1B0098u;
            goto label_1b0098;
        }
    }
    ctx->pc = 0x1B004Cu;
    // 0x1b004c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1b004cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b0050: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B0050u;
    {
        const bool branch_taken_0x1b0050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0050u;
        // 0x1b0054: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0050) {
            ctx->pc = 0x1B00A4u;
            goto label_1b00a4;
        }
    }
    ctx->pc = 0x1B0058u;
    // 0x1b0058: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x1b0058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1b005c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b005cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0060: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1b0060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1b0064: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b0064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b0068: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x1b0068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b006c: 0xc06bf52  jal         func_1AFD48
    ctx->pc = 0x1B006Cu;
    SET_GPR_U32(ctx, 31, 0x1B0074u);
    ctx->pc = 0x1B0070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B006Cu;
    // 0x1b0070: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFD48u, 0x1B006Cu, 0x1B0074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0074u;
label_1b0074:
    // 0x1b0074: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0078: 0xc06c546  jal         func_1B1518
    ctx->pc = 0x1B0078u;
    SET_GPR_U32(ctx, 31, 0x1B0080u);
    ctx->pc = 0x1B007Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0078u;
    // 0x1b007c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x1B0078u, 0x1B0080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0080u;
label_1b0080:
    // 0x1b0080: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x1b0080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x1b0084: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x1b0084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x1b0088: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1B0088u;
    {
        const bool branch_taken_0x1b0088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0088u;
        // 0x1b008c: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0088) {
            ctx->pc = 0x1B0104u;
            goto label_1b0104;
        }
    }
    ctx->pc = 0x1B0090u;
    // 0x1b0090: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1B0090u;
    {
        const bool branch_taken_0x1b0090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0090) {
            ctx->pc = 0x1B00F4u;
            goto label_1b00f4;
        }
    }
    ctx->pc = 0x1B0098u;
label_1b0098:
    // 0x1b0098: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1b0098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b009c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1B009Cu;
    {
        const bool branch_taken_0x1b009c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b009c) {
            ctx->pc = 0x1B0104u;
            goto label_1b0104;
        }
    }
    ctx->pc = 0x1B00A4u;
label_1b00a4:
    // 0x1b00a4: 0x24838658  addiu       $v1, $a0, -0x79A8
    ctx->pc = 0x1b00a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936152));
    // 0x1b00a8: 0x8c6202e8  lw          $v0, 0x2E8($v1)
    ctx->pc = 0x1b00a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 744)));
    // 0x1b00ac: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1b00acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b00b0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B00B0u;
    {
        const bool branch_taken_0x1b00b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B00B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B00B0u;
        // 0x1b00b4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b00b0) {
            ctx->pc = 0x1B0104u;
            goto label_1b0104;
        }
    }
    ctx->pc = 0x1B00B8u;
    // 0x1b00b8: 0x8e260080  lw          $a2, 0x80($s1)
    ctx->pc = 0x1b00b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1b00bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b00bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b00c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b00c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b00c4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1b00c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1b00c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b00c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b00cc: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x1b00ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b00d0: 0xc06bf5c  jal         func_1AFD70
    ctx->pc = 0x1B00D0u;
    SET_GPR_U32(ctx, 31, 0x1B00D8u);
    ctx->pc = 0x1B00D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B00D0u;
    // 0x1b00d4: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFD70u, 0x1B00D0u, 0x1B00D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B00D8u;
label_1b00d8:
    // 0x1b00d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b00d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b00dc: 0xc06c546  jal         func_1B1518
    ctx->pc = 0x1B00DCu;
    SET_GPR_U32(ctx, 31, 0x1B00E4u);
    ctx->pc = 0x1B00E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B00DCu;
    // 0x1b00e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x1B00DCu, 0x1B00E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B00E4u;
label_1b00e4:
    // 0x1b00e4: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x1b00e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x1b00e8: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x1b00e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1b00ec: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B00ECu;
    {
        const bool branch_taken_0x1b00ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B00F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B00ECu;
        // 0x1b00f0: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b00ec) {
            ctx->pc = 0x1B0104u;
            goto label_1b0104;
        }
    }
    ctx->pc = 0x1B00F4u;
label_1b00f4:
    // 0x1b00f4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B00F4u;
    {
        const bool branch_taken_0x1b00f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B00F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B00F4u;
        // 0x1b00f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b00f4) {
            ctx->pc = 0x1B0104u;
            goto label_1b0104;
        }
    }
    ctx->pc = 0x1B00FCu;
    // 0x1b00fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B00FCu;
    {
        const bool branch_taken_0x1b00fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B00FCu;
        // 0x1b0100: 0xae340084  sw          $s4, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b00fc) {
            ctx->pc = 0x1B0110u;
            goto label_1b0110;
        }
    }
    ctx->pc = 0x1B0104u;
label_1b0104:
    // 0x1b0104: 0xc06c61a  jal         func_1B1868
    ctx->pc = 0x1B0104u;
    SET_GPR_U32(ctx, 31, 0x1B010Cu);
    ctx->pc = 0x1B0108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0104u;
    // 0x1b0108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1868u, 0x1B0104u, 0x1B010Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B010Cu;
label_1b010c:
    // 0x1b010c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b010cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0110:
    // 0x1b0110: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x1b0110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b0114: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x1b0114u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1b0118: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x1b0118u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1b011c: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x1b011cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1b0120: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x1b0120u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1b0124: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x1b0124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1b0128: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B012Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0128u;
        // 0x1b012c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0130u;
}

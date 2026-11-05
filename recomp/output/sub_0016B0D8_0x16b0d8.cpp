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

// Function: sub_0016B0D8
// Address: 0x16b0d8 - 0x16b2a8
void sub_0016B0D8_0x16b0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016B0D8_0x16b0d8");
#endif

    switch (ctx->pc) {
        case 0x16b120u: goto label_16b120;
        case 0x16b1b8u: goto label_16b1b8;
        case 0x16b1d4u: goto label_16b1d4;
        case 0x16b1e4u: goto label_16b1e4;
        case 0x16b218u: goto label_16b218;
        case 0x16b274u: goto label_16b274;
        case 0x16b288u: goto label_16b288;
        default: break;
    }

    ctx->pc = 0x16b0d8u;

    // 0x16b0d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16b0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16b0dc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x16b0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x16b0e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x16b0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x16b0e4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16b0e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b0e8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x16b0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16b0ec: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x16b0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x16b0f0: 0x9223002c  lbu         $v1, 0x2C($s1)
    ctx->pc = 0x16b0f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x16b0f4: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x16B0F4u;
    {
        const bool branch_taken_0x16b0f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B0F4u;
        // 0x16b0f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b0f4) {
            ctx->pc = 0x16B1C4u;
            goto label_16b1c4;
        }
    }
    ctx->pc = 0x16B0FCu;
    // 0x16b0fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16b0fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b100: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x16b100u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x16b104: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x16B104u;
    {
        const bool branch_taken_0x16b104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B104u;
        // 0x16b108: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b104) {
            ctx->pc = 0x16B1ACu;
            goto label_16b1ac;
        }
    }
    ctx->pc = 0x16B10Cu;
    // 0x16b10c: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x16b10cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b110: 0x262a0008  addiu       $t2, $s1, 0x8
    ctx->pc = 0x16b110u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x16b114: 0x240c0009  addiu       $t4, $zero, 0x9
    ctx->pc = 0x16b114u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16b118: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x16b118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x16b11c: 0x0  nop
    ctx->pc = 0x16b11cu;
    // NOP
label_16b120:
    // 0x16b120: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x16b120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x16b124: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16b124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b128: 0x8c880010  lw          $t0, 0x10($a0)
    ctx->pc = 0x16b128u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x16b12c: 0x2d030001  sltiu       $v1, $t0, 0x1
    ctx->pc = 0x16b12cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x16b130: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16B130u;
    {
        const bool branch_taken_0x16b130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b130) {
            ctx->pc = 0x16B144u;
            goto label_16b144;
        }
    }
    ctx->pc = 0x16B138u;
    // 0x16b138: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x16b138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x16b13c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x16B13Cu;
    {
        const bool branch_taken_0x16b13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B13Cu;
        // 0x16b140: 0x25220001  addiu       $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b13c) {
            ctx->pc = 0x16B19Cu;
            goto label_16b19c;
        }
    }
    ctx->pc = 0x16B144u;
label_16b144:
    // 0x16b144: 0x14a00008  bnez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x16B144u;
    {
        const bool branch_taken_0x16b144 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b144) {
            ctx->pc = 0x16B168u;
            goto label_16b168;
        }
    }
    ctx->pc = 0x16B14Cu;
    // 0x16b14c: 0x51000009  beql        $t0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x16B14Cu;
    {
        const bool branch_taken_0x16b14c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x16b14c) {
            ctx->pc = 0x16B150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16B14Cu;
            // 0x16b150: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16B174u;
            goto label_16b174;
        }
    }
    ctx->pc = 0x16B154u;
    // 0x16b154: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x16b154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x16b158: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x16B158u;
    {
        const bool branch_taken_0x16b158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B158u;
        // 0x16b15c: 0x25220001  addiu       $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b158) {
            ctx->pc = 0x16B19Cu;
            goto label_16b19c;
        }
    }
    ctx->pc = 0x16B160u;
    // 0x16b160: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16B160u;
    {
        const bool branch_taken_0x16b160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B160u;
        // 0x16b164: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b160) {
            ctx->pc = 0x16B174u;
            goto label_16b174;
        }
    }
    ctx->pc = 0x16B168u;
label_16b168:
    // 0x16b168: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x16B168u;
    {
        const bool branch_taken_0x16b168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B168u;
        // 0x16b16c: 0x25220001  addiu       $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b168) {
            ctx->pc = 0x16B19Cu;
            goto label_16b19c;
        }
    }
    ctx->pc = 0x16B170u;
    // 0x16b170: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x16b170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_16b174:
    // 0x16b174: 0x104c0008  beq         $v0, $t4, . + 4 + (0x8 << 2)
    ctx->pc = 0x16B174u;
    {
        const bool branch_taken_0x16b174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 12));
        ctx->pc = 0x16B178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B174u;
        // 0x16b178: 0x3a61021  addu        $v0, $sp, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b174) {
            ctx->pc = 0x16B198u;
            goto label_16b198;
        }
    }
    ctx->pc = 0x16B17Cu;
    // 0x16b17c: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x16b17cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x16b180: 0xa0490000  sb          $t1, 0x0($v0)
    ctx->pc = 0x16b180u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x16b184: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x16b184u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x16b188: 0x90820018  lbu         $v0, 0x18($a0)
    ctx->pc = 0x16b188u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x16b18c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x16b18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x16b190: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16b190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16b194: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x16b194u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_16b198:
    // 0x16b198: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x16b198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_16b19c:
    // 0x16b19c: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x16b19cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16b1a0: 0x12b182b  sltu        $v1, $t1, $t3
    ctx->pc = 0x16b1a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x16b1a4: 0x1460ffde  bnez        $v1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x16B1A4u;
    {
        const bool branch_taken_0x16b1a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B1A4u;
        // 0x16b1a8: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b1a4) {
            ctx->pc = 0x16B120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b120;
        }
    }
    ctx->pc = 0x16B1ACu;
label_16b1ac:
    // 0x16b1ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b1b0: 0xc05acaa  jal         func_16B2A8
    ctx->pc = 0x16B1B0u;
    SET_GPR_U32(ctx, 31, 0x16B1B8u);
    ctx->pc = 0x16B1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B1B0u;
    // 0x16b1b4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B2A8u, 0x16B1B0u, 0x16B1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B1B8u;
label_16b1b8:
    // 0x16b1b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16b1b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b1bc: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B1BCu;
    {
        const bool branch_taken_0x16b1bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x16b1bc) {
            ctx->pc = 0x16B1CCu;
            goto label_16b1cc;
        }
    }
    ctx->pc = 0x16B1C4u;
label_16b1c4:
    // 0x16b1c4: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x16B1C4u;
    {
        const bool branch_taken_0x16b1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B1C4u;
        // 0x16b1c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b1c4) {
            ctx->pc = 0x16B28Cu;
            goto label_16b28c;
        }
    }
    ctx->pc = 0x16B1CCu;
label_16b1cc:
    // 0x16b1cc: 0xc05abe0  jal         func_16AF80
    ctx->pc = 0x16B1CCu;
    SET_GPR_U32(ctx, 31, 0x16B1D4u);
    ctx->pc = 0x16B1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B1CCu;
    // 0x16b1d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AF80u, 0x16B1CCu, 0x16B1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B1D4u;
label_16b1d4:
    // 0x16b1d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16b1d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b1d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16b1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b1dc: 0xc046304  jal         func_118C10
    ctx->pc = 0x16B1DCu;
    SET_GPR_U32(ctx, 31, 0x16B1E4u);
    ctx->pc = 0x16B1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B1DCu;
    // 0x16b1e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118C10u, 0x16B1DCu, 0x16B1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B1E4u;
label_16b1e4:
    // 0x16b1e4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x16b1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x16b1e8: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x16B1E8u;
    {
        const bool branch_taken_0x16b1e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B1E8u;
        // 0x16b1ec: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b1e8) {
            ctx->pc = 0x16B28Cu;
            goto label_16b28c;
        }
    }
    ctx->pc = 0x16B1F0u;
    // 0x16b1f0: 0x9222002c  lbu         $v0, 0x2C($s1)
    ctx->pc = 0x16b1f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x16b1f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16b1f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b1f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x16b1f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b1fc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x16B1FCu;
    {
        const bool branch_taken_0x16b1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B1FCu;
        // 0x16b200: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b1fc) {
            ctx->pc = 0x16B268u;
            goto label_16b268;
        }
    }
    ctx->pc = 0x16B204u;
    // 0x16b204: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x16b204u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b208: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x16b208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x16b20c: 0x240a0009  addiu       $t2, $zero, 0x9
    ctx->pc = 0x16b20cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16b210: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x16b210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x16b214: 0x0  nop
    ctx->pc = 0x16b214u;
    // NOP
label_16b218:
    // 0x16b218: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x16b218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x16b21c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16b21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16b220: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x16b220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x16b224: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x16B224u;
    {
        const bool branch_taken_0x16b224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B224u;
        // 0x16b228: 0x25220001  addiu       $v0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b224) {
            ctx->pc = 0x16B258u;
            goto label_16b258;
        }
    }
    ctx->pc = 0x16B22Cu;
    // 0x16b22c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x16b22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x16b230: 0x104a0008  beq         $v0, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x16B230u;
    {
        const bool branch_taken_0x16b230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        ctx->pc = 0x16B234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B230u;
        // 0x16b234: 0x3a61021  addu        $v0, $sp, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b230) {
            ctx->pc = 0x16B254u;
            goto label_16b254;
        }
    }
    ctx->pc = 0x16B238u;
    // 0x16b238: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x16b238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x16b23c: 0xa0490000  sb          $t1, 0x0($v0)
    ctx->pc = 0x16b23cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 9));
    // 0x16b240: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x16b240u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x16b244: 0x90820018  lbu         $v0, 0x18($a0)
    ctx->pc = 0x16b244u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x16b248: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x16b248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x16b24c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16b24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16b250: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x16b250u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_16b254:
    // 0x16b254: 0x25220001  addiu       $v0, $t1, 0x1
    ctx->pc = 0x16b254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_16b258:
    // 0x16b258: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x16b258u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16b25c: 0x128182b  sltu        $v1, $t1, $t0
    ctx->pc = 0x16b25cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x16b260: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x16B260u;
    {
        const bool branch_taken_0x16b260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16B264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B260u;
        // 0x16b264: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b260) {
            ctx->pc = 0x16B218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16b218;
        }
    }
    ctx->pc = 0x16B268u;
label_16b268:
    // 0x16b268: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16b268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b26c: 0xc05acaa  jal         func_16B2A8
    ctx->pc = 0x16B26Cu;
    SET_GPR_U32(ctx, 31, 0x16B274u);
    ctx->pc = 0x16B270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B26Cu;
    // 0x16b270: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16B2A8u, 0x16B26Cu, 0x16B274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B274u;
label_16b274:
    // 0x16b274: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16b274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b278: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16B278u;
    {
        const bool branch_taken_0x16b278 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16B27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B278u;
        // 0x16b27c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16b278) {
            ctx->pc = 0x16B288u;
            goto label_16b288;
        }
    }
    ctx->pc = 0x16B280u;
    // 0x16b280: 0xc046304  jal         func_118C10
    ctx->pc = 0x16B280u;
    SET_GPR_U32(ctx, 31, 0x16B288u);
    ctx->pc = 0x16B284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16B280u;
    // 0x16b284: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118C10u, 0x16B280u, 0x16B288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16B288u;
label_16b288:
    // 0x16b288: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x16b288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16b28c:
    // 0x16b28c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x16b28cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b290: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x16b290u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16b294: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x16b294u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b298: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x16b298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16b29c: 0x3e00008  jr          $ra
    ctx->pc = 0x16B29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16B29Cu;
        // 0x16b2a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16B29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16B2A4u;
    // 0x16b2a4: 0x0  nop
    ctx->pc = 0x16b2a4u;
    // NOP
    ctx->pc = 0x16b2a8u;
}

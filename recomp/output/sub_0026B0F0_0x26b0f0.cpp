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

// Function: sub_0026B0F0
// Address: 0x26b0f0 - 0x26b270
void sub_0026B0F0_0x26b0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B0F0_0x26b0f0");
#endif

    switch (ctx->pc) {
        case 0x26b0f0u: goto label_26b0f0;
        case 0x26b0f4u: goto label_26b0f4;
        case 0x26b0f8u: goto label_26b0f8;
        case 0x26b0fcu: goto label_26b0fc;
        case 0x26b100u: goto label_26b100;
        case 0x26b104u: goto label_26b104;
        case 0x26b108u: goto label_26b108;
        case 0x26b10cu: goto label_26b10c;
        case 0x26b110u: goto label_26b110;
        case 0x26b114u: goto label_26b114;
        case 0x26b118u: goto label_26b118;
        case 0x26b11cu: goto label_26b11c;
        case 0x26b120u: goto label_26b120;
        case 0x26b124u: goto label_26b124;
        case 0x26b128u: goto label_26b128;
        case 0x26b12cu: goto label_26b12c;
        case 0x26b130u: goto label_26b130;
        case 0x26b134u: goto label_26b134;
        case 0x26b138u: goto label_26b138;
        case 0x26b13cu: goto label_26b13c;
        case 0x26b140u: goto label_26b140;
        case 0x26b144u: goto label_26b144;
        case 0x26b148u: goto label_26b148;
        case 0x26b14cu: goto label_26b14c;
        case 0x26b150u: goto label_26b150;
        case 0x26b154u: goto label_26b154;
        case 0x26b158u: goto label_26b158;
        case 0x26b15cu: goto label_26b15c;
        case 0x26b160u: goto label_26b160;
        case 0x26b164u: goto label_26b164;
        case 0x26b168u: goto label_26b168;
        case 0x26b16cu: goto label_26b16c;
        case 0x26b170u: goto label_26b170;
        case 0x26b174u: goto label_26b174;
        case 0x26b178u: goto label_26b178;
        case 0x26b17cu: goto label_26b17c;
        case 0x26b180u: goto label_26b180;
        case 0x26b184u: goto label_26b184;
        case 0x26b188u: goto label_26b188;
        case 0x26b18cu: goto label_26b18c;
        case 0x26b190u: goto label_26b190;
        case 0x26b194u: goto label_26b194;
        case 0x26b198u: goto label_26b198;
        case 0x26b19cu: goto label_26b19c;
        case 0x26b1a0u: goto label_26b1a0;
        case 0x26b1a4u: goto label_26b1a4;
        case 0x26b1a8u: goto label_26b1a8;
        case 0x26b1acu: goto label_26b1ac;
        case 0x26b1b0u: goto label_26b1b0;
        case 0x26b1b4u: goto label_26b1b4;
        case 0x26b1b8u: goto label_26b1b8;
        case 0x26b1bcu: goto label_26b1bc;
        case 0x26b1c0u: goto label_26b1c0;
        case 0x26b1c4u: goto label_26b1c4;
        case 0x26b1c8u: goto label_26b1c8;
        case 0x26b1ccu: goto label_26b1cc;
        case 0x26b1d0u: goto label_26b1d0;
        case 0x26b1d4u: goto label_26b1d4;
        case 0x26b1d8u: goto label_26b1d8;
        case 0x26b1dcu: goto label_26b1dc;
        case 0x26b1e0u: goto label_26b1e0;
        case 0x26b1e4u: goto label_26b1e4;
        case 0x26b1e8u: goto label_26b1e8;
        case 0x26b1ecu: goto label_26b1ec;
        case 0x26b1f0u: goto label_26b1f0;
        case 0x26b1f4u: goto label_26b1f4;
        case 0x26b1f8u: goto label_26b1f8;
        case 0x26b1fcu: goto label_26b1fc;
        case 0x26b200u: goto label_26b200;
        case 0x26b204u: goto label_26b204;
        case 0x26b208u: goto label_26b208;
        case 0x26b20cu: goto label_26b20c;
        case 0x26b210u: goto label_26b210;
        case 0x26b214u: goto label_26b214;
        case 0x26b218u: goto label_26b218;
        case 0x26b21cu: goto label_26b21c;
        case 0x26b220u: goto label_26b220;
        case 0x26b224u: goto label_26b224;
        case 0x26b228u: goto label_26b228;
        case 0x26b22cu: goto label_26b22c;
        case 0x26b230u: goto label_26b230;
        case 0x26b234u: goto label_26b234;
        case 0x26b238u: goto label_26b238;
        case 0x26b23cu: goto label_26b23c;
        case 0x26b240u: goto label_26b240;
        case 0x26b244u: goto label_26b244;
        case 0x26b248u: goto label_26b248;
        case 0x26b24cu: goto label_26b24c;
        case 0x26b250u: goto label_26b250;
        case 0x26b254u: goto label_26b254;
        case 0x26b258u: goto label_26b258;
        case 0x26b25cu: goto label_26b25c;
        case 0x26b260u: goto label_26b260;
        case 0x26b264u: goto label_26b264;
        case 0x26b268u: goto label_26b268;
        case 0x26b26cu: goto label_26b26c;
        default: break;
    }

    ctx->pc = 0x26b0f0u;

label_26b0f0:
    // 0x26b0f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26b0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_26b0f4:
    // 0x26b0f4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x26b0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_26b0f8:
    // 0x26b0f8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x26b0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_26b0fc:
    // 0x26b0fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26b0fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26b100:
    // 0x26b100: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x26b100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_26b104:
    // 0x26b104: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x26b104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_26b108:
    // 0x26b108: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26b108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_26b10c:
    // 0x26b10c: 0xc076430  jal         func_1D90C0
label_26b110:
    if (ctx->pc == 0x26B110u) {
        ctx->pc = 0x26B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B10Cu;
        // 0x26b110: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B114u;
        goto label_26b114;
    }
    ctx->pc = 0x26B10Cu;
    SET_GPR_U32(ctx, 31, 0x26B114u);
    ctx->pc = 0x26B110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B10Cu;
    // 0x26b110: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D90C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D90C0u, 0x26B10Cu, 0x26B114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B114u;
label_26b114:
    // 0x26b114: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_26b118:
    if (ctx->pc == 0x26B118u) {
        ctx->pc = 0x26B118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B114u;
        // 0x26b118: 0x8e2391f0  lw          $v1, -0x6E10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B11Cu;
        goto label_26b11c;
    }
    ctx->pc = 0x26B114u;
    {
        const bool branch_taken_0x26b114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B114u;
        // 0x26b118: 0x8e2391f0  lw          $v1, -0x6E10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b114) {
            ctx->pc = 0x26B148u;
            goto label_26b148;
        }
    }
    ctx->pc = 0x26B11Cu;
label_26b11c:
    // 0x26b11c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b120:
    // 0x26b120: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_26b124:
    if (ctx->pc == 0x26B124u) {
        ctx->pc = 0x26B124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B120u;
        // 0x26b124: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B128u;
        goto label_26b128;
    }
    ctx->pc = 0x26B120u;
    {
        const bool branch_taken_0x26b120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26b120) {
            ctx->pc = 0x26B124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B120u;
            // 0x26b124: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B140u;
            goto label_26b140;
        }
    }
    ctx->pc = 0x26B128u;
label_26b128:
    // 0x26b128: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x26b128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_26b12c:
    // 0x26b12c: 0x8c4391ec  lw          $v1, -0x6E14($v0)
    ctx->pc = 0x26b12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939116)));
label_26b130:
    // 0x26b130: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26b130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26b134:
    // 0x26b134: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x26b134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_26b138:
    // 0x26b138: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x26b138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
label_26b13c:
    // 0x26b13c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x26b13cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26b140:
    // 0x26b140: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_26b144:
    if (ctx->pc == 0x26B144u) {
        ctx->pc = 0x26B144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B140u;
        // 0x26b144: 0x8e2391f0  lw          $v1, -0x6E10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B148u;
        goto label_26b148;
    }
    ctx->pc = 0x26B140u;
    {
        const bool branch_taken_0x26b140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B140u;
        // 0x26b144: 0x8e2391f0  lw          $v1, -0x6E10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b140) {
            ctx->pc = 0x26B224u;
            goto label_26b224;
        }
    }
    ctx->pc = 0x26B148u;
label_26b148:
    // 0x26b148: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b14c:
    // 0x26b14c: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_26b150:
    if (ctx->pc == 0x26B150u) {
        ctx->pc = 0x26B150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B14Cu;
        // 0x26b150: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B154u;
        goto label_26b154;
    }
    ctx->pc = 0x26B14Cu;
    {
        const bool branch_taken_0x26b14c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26b14c) {
            ctx->pc = 0x26B150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B14Cu;
            // 0x26b150: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B16Cu;
            goto label_26b16c;
        }
    }
    ctx->pc = 0x26B154u;
label_26b154:
    // 0x26b154: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x26b154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_26b158:
    // 0x26b158: 0x8c4391ec  lw          $v1, -0x6E14($v0)
    ctx->pc = 0x26b158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939116)));
label_26b15c:
    // 0x26b15c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x26b15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26b160:
    // 0x26b160: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x26b160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_26b164:
    // 0x26b164: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x26b164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
label_26b168:
    // 0x26b168: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x26b168u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26b16c:
    // 0x26b16c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_26b170:
    if (ctx->pc == 0x26B170u) {
        ctx->pc = 0x26B170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B16Cu;
        // 0x26b170: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B174u;
        goto label_26b174;
    }
    ctx->pc = 0x26B16Cu;
    {
        const bool branch_taken_0x26b16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B16Cu;
        // 0x26b170: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b16c) {
            ctx->pc = 0x26B1D8u;
            goto label_26b1d8;
        }
    }
    ctx->pc = 0x26B174u;
label_26b174:
    // 0x26b174: 0x8e2391f0  lw          $v1, -0x6E10($s1)
    ctx->pc = 0x26b174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939120)));
label_26b178:
    // 0x26b178: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_26b17c:
    if (ctx->pc == 0x26B17Cu) {
        ctx->pc = 0x26B17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B178u;
        // 0x26b17c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B180u;
        goto label_26b180;
    }
    ctx->pc = 0x26B178u;
    {
        const bool branch_taken_0x26b178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B178u;
        // 0x26b17c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b178) {
            ctx->pc = 0x26B1D8u;
            goto label_26b1d8;
        }
    }
    ctx->pc = 0x26B180u;
label_26b180:
    // 0x26b180: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x26b180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_26b184:
    // 0x26b184: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x26b184u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_26b188:
    // 0x26b188: 0x8c4491ec  lw          $a0, -0x6E14($v0)
    ctx->pc = 0x26b188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939116)));
label_26b18c:
    // 0x26b18c: 0x0  nop
    ctx->pc = 0x26b18cu;
    // NOP
label_26b190:
    // 0x26b190: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x26b190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_26b194:
    // 0x26b194: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x26b194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_26b198:
    // 0x26b198: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x26b198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
label_26b19c:
    // 0x26b19c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_26b1a0:
    if (ctx->pc == 0x26B1A0u) {
        ctx->pc = 0x26B1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B19Cu;
        // 0x26b1a0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B1A4u;
        goto label_26b1a4;
    }
    ctx->pc = 0x26B19Cu;
    {
        const bool branch_taken_0x26b19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b19c) {
            ctx->pc = 0x26B1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26B19Cu;
            // 0x26b1a0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26B1CCu;
            goto label_26b1cc;
        }
    }
    ctx->pc = 0x26B1A4u;
label_26b1a4:
    // 0x26b1a4: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x26b1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_26b1a8:
    // 0x26b1a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26b1ac:
    if (ctx->pc == 0x26B1ACu) {
        ctx->pc = 0x26B1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B1A8u;
        // 0x26b1ac: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B1B0u;
        goto label_26b1b0;
    }
    ctx->pc = 0x26B1A8u;
    {
        const bool branch_taken_0x26b1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B1A8u;
        // 0x26b1ac: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b1a8) {
            ctx->pc = 0x26B1BCu;
            goto label_26b1bc;
        }
    }
    ctx->pc = 0x26B1B0u;
label_26b1b0:
    // 0x26b1b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_26b1b4:
    // 0x26b1b4: 0x10000004  b           . + 4 + (0x4 << 2)
label_26b1b8:
    if (ctx->pc == 0x26B1B8u) {
        ctx->pc = 0x26B1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B1B4u;
        // 0x26b1b8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B1BCu;
        goto label_26b1bc;
    }
    ctx->pc = 0x26B1B4u;
    {
        const bool branch_taken_0x26b1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B1B4u;
        // 0x26b1b8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b1b4) {
            ctx->pc = 0x26B1C8u;
            goto label_26b1c8;
        }
    }
    ctx->pc = 0x26B1BCu;
label_26b1bc:
    // 0x26b1bc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x26b1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_26b1c0:
    // 0x26b1c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x26b1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_26b1c4:
    // 0x26b1c4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x26b1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_26b1c8:
    // 0x26b1c8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x26b1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_26b1cc:
    // 0x26b1cc: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x26b1ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_26b1d0:
    // 0x26b1d0: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
label_26b1d4:
    if (ctx->pc == 0x26B1D4u) {
        ctx->pc = 0x26B1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B1D0u;
        // 0x26b1d4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B1D8u;
        goto label_26b1d8;
    }
    ctx->pc = 0x26B1D0u;
    {
        const bool branch_taken_0x26b1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B1D0u;
        // 0x26b1d4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b1d0) {
            ctx->pc = 0x26B190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26b190;
        }
    }
    ctx->pc = 0x26B1D8u;
label_26b1d8:
    // 0x26b1d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b1d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26b1dc:
    // 0x26b1dc: 0xc083df6  jal         func_20F7D8
label_26b1e0:
    if (ctx->pc == 0x26B1E0u) {
        ctx->pc = 0x26B1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B1DCu;
        // 0x26b1e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B1E4u;
        goto label_26b1e4;
    }
    ctx->pc = 0x26B1DCu;
    SET_GPR_U32(ctx, 31, 0x26B1E4u);
    ctx->pc = 0x26B1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B1DCu;
    // 0x26b1e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F7D8u, 0x26B1DCu, 0x26B1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B1E4u;
label_26b1e4:
    // 0x26b1e4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x26b1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_26b1e8:
    // 0x26b1e8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_26b1ec:
    if (ctx->pc == 0x26B1ECu) {
        ctx->pc = 0x26B1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B1E8u;
        // 0x26b1ec: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B1F0u;
        goto label_26b1f0;
    }
    ctx->pc = 0x26B1E8u;
    {
        const bool branch_taken_0x26b1e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B1E8u;
        // 0x26b1ec: 0x8e04010c  lw          $a0, 0x10C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b1e8) {
            ctx->pc = 0x26B1FCu;
            goto label_26b1fc;
        }
    }
    ctx->pc = 0x26B1F0u;
label_26b1f0:
    // 0x26b1f0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x26b1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_26b1f4:
    // 0x26b1f4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_26b1f8:
    if (ctx->pc == 0x26B1F8u) {
        ctx->pc = 0x26B1FCu;
        goto label_26b1fc;
    }
    ctx->pc = 0x26B1F4u;
    {
        const bool branch_taken_0x26b1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b1f4) {
            ctx->pc = 0x26B228u;
            goto label_26b228;
        }
    }
    ctx->pc = 0x26B1FCu;
label_26b1fc:
    // 0x26b1fc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x26b1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_26b200:
    // 0x26b200: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x26b200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_26b204:
    // 0x26b204: 0x40f809  jalr        $v0
label_26b208:
    if (ctx->pc == 0x26B208u) {
        ctx->pc = 0x26B20Cu;
        goto label_26b20c;
    }
    ctx->pc = 0x26B204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26B20Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B204u, 0x26B20Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26B20Cu;
label_26b20c:
    // 0x26b20c: 0xc076e00  jal         func_1DB800
label_26b210:
    if (ctx->pc == 0x26B210u) {
        ctx->pc = 0x26B210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B20Cu;
        // 0x26b210: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B214u;
        goto label_26b214;
    }
    ctx->pc = 0x26B20Cu;
    SET_GPR_U32(ctx, 31, 0x26B214u);
    ctx->pc = 0x26B210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B20Cu;
    // 0x26b210: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB800u, 0x26B20Cu, 0x26B214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B214u;
label_26b214:
    // 0x26b214: 0xc083f5e  jal         func_20FD78
label_26b218:
    if (ctx->pc == 0x26B218u) {
        ctx->pc = 0x26B218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B214u;
        // 0x26b218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B21Cu;
        goto label_26b21c;
    }
    ctx->pc = 0x26B214u;
    SET_GPR_U32(ctx, 31, 0x26B21Cu);
    ctx->pc = 0x26B218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B214u;
    // 0x26b218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FD78u, 0x26B214u, 0x26B21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B21Cu;
label_26b21c:
    // 0x26b21c: 0x1000000f  b           . + 4 + (0xF << 2)
label_26b220:
    if (ctx->pc == 0x26B220u) {
        ctx->pc = 0x26B220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B21Cu;
        // 0x26b220: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B224u;
        goto label_26b224;
    }
    ctx->pc = 0x26B21Cu;
    {
        const bool branch_taken_0x26b21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B21Cu;
        // 0x26b220: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b21c) {
            ctx->pc = 0x26B25Cu;
            goto label_26b25c;
        }
    }
    ctx->pc = 0x26B224u;
label_26b224:
    // 0x26b224: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x26b224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_26b228:
    // 0x26b228: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x26b228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_26b22c:
    // 0x26b22c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x26b22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_26b230:
    // 0x26b230: 0x40f809  jalr        $v0
label_26b234:
    if (ctx->pc == 0x26B234u) {
        ctx->pc = 0x26B238u;
        goto label_26b238;
    }
    ctx->pc = 0x26B230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26B238u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B230u, 0x26B238u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26B238u;
label_26b238:
    // 0x26b238: 0xc076de4  jal         func_1DB790
label_26b23c:
    if (ctx->pc == 0x26B23Cu) {
        ctx->pc = 0x26B23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B238u;
        // 0x26b23c: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B240u;
        goto label_26b240;
    }
    ctx->pc = 0x26B238u;
    SET_GPR_U32(ctx, 31, 0x26B240u);
    ctx->pc = 0x26B23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26B238u;
    // 0x26b23c: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB790u, 0x26B238u, 0x26B240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B240u;
label_26b240:
    // 0x26b240: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x26b240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_26b244:
    // 0x26b244: 0x2404efff  addiu       $a0, $zero, -0x1001
    ctx->pc = 0x26b244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
label_26b248:
    // 0x26b248: 0xa2000115  sb          $zero, 0x115($s0)
    ctx->pc = 0x26b248u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 277), (uint8_t)GPR_U32(ctx, 0));
label_26b24c:
    // 0x26b24c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b250:
    // 0x26b250: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x26b250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_26b254:
    // 0x26b254: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x26b254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
label_26b258:
    // 0x26b258: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x26b258u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26b25c:
    // 0x26b25c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x26b25cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_26b260:
    // 0x26b260: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26b260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26b264:
    // 0x26b264: 0x3e00008  jr          $ra
label_26b268:
    if (ctx->pc == 0x26B268u) {
        ctx->pc = 0x26B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B264u;
        // 0x26b268: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26B26Cu;
        goto label_26b26c;
    }
    ctx->pc = 0x26B264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26B264u;
        // 0x26b268: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B26Cu;
label_26b26c:
    // 0x26b26c: 0x0  nop
    ctx->pc = 0x26b26cu;
    // NOP
    ctx->pc = 0x26b270u;
}

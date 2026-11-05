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

// Function: sub_001B6100
// Address: 0x1b6100 - 0x1b65e8
void sub_001B6100_0x1b6100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6100_0x1b6100");
#endif

    switch (ctx->pc) {
        case 0x1b6118u: goto label_1b6118;
        case 0x1b6128u: goto label_1b6128;
        case 0x1b6144u: goto label_1b6144;
        case 0x1b6154u: goto label_1b6154;
        case 0x1b6168u: goto label_1b6168;
        case 0x1b6170u: goto label_1b6170;
        case 0x1b61f8u: goto label_1b61f8;
        case 0x1b6204u: goto label_1b6204;
        case 0x1b628cu: goto label_1b628c;
        case 0x1b6294u: goto label_1b6294;
        case 0x1b6374u: goto label_1b6374;
        case 0x1b6384u: goto label_1b6384;
        case 0x1b638cu: goto label_1b638c;
        case 0x1b63a8u: goto label_1b63a8;
        case 0x1b63bcu: goto label_1b63bc;
        case 0x1b6420u: goto label_1b6420;
        case 0x1b6428u: goto label_1b6428;
        case 0x1b650cu: goto label_1b650c;
        case 0x1b6514u: goto label_1b6514;
        default: break;
    }

    ctx->pc = 0x1b6100u;

    // 0x1b6100: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1b6100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1b6104: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x1b6104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x1b6108: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x1b6108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x1b610c: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1b610cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1b6110: 0xc06d76a  jal         func_1B5DA8
    ctx->pc = 0x1B6110u;
    SET_GPR_U32(ctx, 31, 0x1B6118u);
    ctx->pc = 0x1B6114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6110u;
    // 0x1b6114: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B5DA8u, 0x1B6110u, 0x1B6118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6118u;
label_1b6118:
    // 0x1b6118: 0x8e040230  lw          $a0, 0x230($s0)
    ctx->pc = 0x1b6118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x1b611c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1b611cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1b6120: 0xc0f7376  jal         func_3DCDD8
    ctx->pc = 0x1B6120u;
    SET_GPR_U32(ctx, 31, 0x1B6128u);
    ctx->pc = 0x1B6124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6120u;
    // 0x1b6124: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCDD8u, 0x1B6120u, 0x1B6128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6128u;
label_1b6128:
    // 0x1b6128: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6128u;
    {
        const bool branch_taken_0x1b6128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6128) {
            ctx->pc = 0x1B612Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6128u;
            // 0x1b612c: 0x8e040230  lw          $a0, 0x230($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6138u;
            goto label_1b6138;
        }
    }
    ctx->pc = 0x1B6130u;
    // 0x1b6130: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B6130u;
    {
        const bool branch_taken_0x1b6130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6130u;
        // 0x1b6134: 0xae00021c  sw          $zero, 0x21C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6130) {
            ctx->pc = 0x1B6160u;
            goto label_1b6160;
        }
    }
    ctx->pc = 0x1B6138u;
label_1b6138:
    // 0x1b6138: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1b6138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1b613c: 0xc0f7376  jal         func_3DCDD8
    ctx->pc = 0x1B613Cu;
    SET_GPR_U32(ctx, 31, 0x1B6144u);
    ctx->pc = 0x1B6140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B613Cu;
    // 0x1b6140: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCDD8u, 0x1B613Cu, 0x1B6144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6144u;
label_1b6144:
    // 0x1b6144: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B6144u;
    {
        const bool branch_taken_0x1b6144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6144u;
        // 0x1b6148: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6144) {
            ctx->pc = 0x1B615Cu;
            goto label_1b615c;
        }
    }
    ctx->pc = 0x1B614Cu;
    // 0x1b614c: 0xc06d9b2  jal         func_1B66C8
    ctx->pc = 0x1B614Cu;
    SET_GPR_U32(ctx, 31, 0x1B6154u);
    ctx->pc = 0x1B6150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B614Cu;
    // 0x1b6150: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B66C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B66C8u, 0x1B614Cu, 0x1B6154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6154u;
label_1b6154:
    // 0x1b6154: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B6154u;
    {
        const bool branch_taken_0x1b6154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6154u;
        // 0x1b6158: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6154) {
            ctx->pc = 0x1B6160u;
            goto label_1b6160;
        }
    }
    ctx->pc = 0x1B615Cu;
label_1b615c:
    // 0x1b615c: 0xae02021c  sw          $v0, 0x21C($s0)
    ctx->pc = 0x1b615cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 2));
label_1b6160:
    // 0x1b6160: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1B6160u;
    SET_GPR_U32(ctx, 31, 0x1B6168u);
    ctx->pc = 0x1B6164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6160u;
    // 0x1b6164: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1B6160u, 0x1B6168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6168u;
label_1b6168:
    // 0x1b6168: 0xc097f76  jal         func_25FDD8
    ctx->pc = 0x1B6168u;
    SET_GPR_U32(ctx, 31, 0x1B6170u);
    ctx->pc = 0x1B616Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6168u;
    // 0x1b616c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FDD8u, 0x1B6168u, 0x1B6170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6170u;
label_1b6170:
    // 0x1b6170: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x1B6170u;
    {
        const bool branch_taken_0x1b6170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6170) {
            ctx->pc = 0x1B6174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6170u;
            // 0x1b6174: 0x8e030084  lw          $v1, 0x84($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6208u;
            goto label_1b6208;
        }
    }
    ctx->pc = 0x1B6178u;
    // 0x1b6178: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x1b6178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1b617c: 0x8c430334  lw          $v1, 0x334($v0)
    ctx->pc = 0x1b617cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    // 0x1b6180: 0x8c630150  lw          $v1, 0x150($v1)
    ctx->pc = 0x1b6180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x1b6184: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x1b6184u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b6188: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B6188u;
    {
        const bool branch_taken_0x1b6188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6188u;
        // 0x1b618c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6188) {
            ctx->pc = 0x1B61BCu;
            goto label_1b61bc;
        }
    }
    ctx->pc = 0x1B6190u;
    // 0x1b6190: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1b6190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1b6194: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B6194u;
    {
        const bool branch_taken_0x1b6194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B6198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6194u;
        // 0x1b6198: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6194) {
            ctx->pc = 0x1B61BCu;
            goto label_1b61bc;
        }
    }
    ctx->pc = 0x1B619Cu;
    // 0x1b619c: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B619Cu;
    {
        const bool branch_taken_0x1b619c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B61A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B619Cu;
        // 0x1b61a0: 0x24020046  addiu       $v0, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b619c) {
            ctx->pc = 0x1B61BCu;
            goto label_1b61bc;
        }
    }
    ctx->pc = 0x1B61A4u;
    // 0x1b61a4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B61A4u;
    {
        const bool branch_taken_0x1b61a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B61A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B61A4u;
        // 0x1b61a8: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b61a4) {
            ctx->pc = 0x1B61BCu;
            goto label_1b61bc;
        }
    }
    ctx->pc = 0x1B61ACu;
    // 0x1b61ac: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B61ACu;
    {
        const bool branch_taken_0x1b61ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B61B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B61ACu;
        // 0x1b61b0: 0x24020033  addiu       $v0, $zero, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b61ac) {
            ctx->pc = 0x1B61BCu;
            goto label_1b61bc;
        }
    }
    ctx->pc = 0x1B61B4u;
    // 0x1b61b4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B61B4u;
    {
        const bool branch_taken_0x1b61b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b61b4) {
            ctx->pc = 0x1B61C0u;
            goto label_1b61c0;
        }
    }
    ctx->pc = 0x1B61BCu;
label_1b61bc:
    // 0x1b61bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b61bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b61c0:
    // 0x1b61c0: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B61C0u;
    {
        const bool branch_taken_0x1b61c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B61C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B61C0u;
        // 0x1b61c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b61c0) {
            ctx->pc = 0x1B61E4u;
            goto label_1b61e4;
        }
    }
    ctx->pc = 0x1B61C8u;
    // 0x1b61c8: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x1b61c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1b61cc: 0x8c440334  lw          $a0, 0x334($v0)
    ctx->pc = 0x1b61ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    // 0x1b61d0: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x1b61d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1b61d4: 0x2463fff7  addiu       $v1, $v1, -0x9
    ctx->pc = 0x1b61d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967287));
    // 0x1b61d8: 0x2c630004  sltiu       $v1, $v1, 0x4
    ctx->pc = 0x1b61d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1b61dc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B61DCu;
    {
        const bool branch_taken_0x1b61dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B61E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B61DCu;
        // 0x1b61e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b61dc) {
            ctx->pc = 0x1B61ECu;
            goto label_1b61ec;
        }
    }
    ctx->pc = 0x1B61E4u;
label_1b61e4:
    // 0x1b61e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B61E4u;
    {
        const bool branch_taken_0x1b61e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B61E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B61E4u;
        // 0x1b61e8: 0xae020220  sw          $v0, 0x220($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b61e4) {
            ctx->pc = 0x1B61F0u;
            goto label_1b61f0;
        }
    }
    ctx->pc = 0x1B61ECu;
label_1b61ec:
    // 0x1b61ec: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x1b61ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
label_1b61f0:
    // 0x1b61f0: 0xc08951c  jal         func_225470
    ctx->pc = 0x1B61F0u;
    SET_GPR_U32(ctx, 31, 0x1B61F8u);
    ctx->pc = 0x1B61F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B61F0u;
    // 0x1b61f4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225470u, 0x1B61F0u, 0x1B61F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B61F8u;
label_1b61f8:
    // 0x1b61f8: 0xc60c00bc  lwc1        $f12, 0xBC($s0)
    ctx->pc = 0x1b61f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b61fc: 0xc0d93aa  jal         func_364EA8
    ctx->pc = 0x1B61FCu;
    SET_GPR_U32(ctx, 31, 0x1B6204u);
    ctx->pc = 0x1B6200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B61FCu;
    // 0x1b6200: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364EA8u, 0x1B61FCu, 0x1B6204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6204u;
label_1b6204:
    // 0x1b6204: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x1b6204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1b6208:
    // 0x1b6208: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x1b6208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x1b620c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1b620cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x1b6210: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1b6210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1b6214: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1b6214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b6218: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x1b6218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x1b621c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b621cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b6220: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x1b6220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x1b6224: 0xc4810060  lwc1        $f1, 0x60($a0)
    ctx->pc = 0x1b6224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6228: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x1b6228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b622c: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1b622cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b6230: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1b6230u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1b6234: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1b6234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6238: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1b6238u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1b623c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1b623cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1b6240: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1b6240u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1b6244: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1b6244u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1b6248: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x1b6248u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1b624c: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x1b624cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1b6250: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1b6250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1b6254: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1b6254u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b6258: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1b6258u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b625c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1b625cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b6260: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1b6260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b6264: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x1b6264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b6268: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1b6268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b626c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1b626cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6270: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1b6270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6274: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x1b6274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b6278: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x1b6278u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1b627c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1b627cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1b6280: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1b6280u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1b6284: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B6284u;
    SET_GPR_U32(ctx, 31, 0x1B628Cu);
    ctx->pc = 0x1B6288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6284u;
    // 0x1b6288: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B6284u, 0x1B628Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B628Cu;
label_1b628c:
    // 0x1b628c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1B628Cu;
    SET_GPR_U32(ctx, 31, 0x1B6294u);
    ctx->pc = 0x1B6290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B628Cu;
    // 0x1b6290: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1B628Cu, 0x1B6294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6294u;
label_1b6294:
    // 0x1b6294: 0x7a020090  lq          $v0, 0x90($s0)
    ctx->pc = 0x1b6294u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x1b6298: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1b6298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1b629c: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x1b629cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b62a0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1b62a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1b62a4: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1b62a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1b62a8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1b62a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1b62ac: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x1b62acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x1b62b0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x1b62b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b62b4: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x1b62b4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b62b8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1b62b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b62bc: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1b62bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b62c0: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x1b62c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b62c4: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x1b62c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b62c8: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x1b62c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1b62cc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1b62ccu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1b62d0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1b62d0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1b62d4: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1b62d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1b62d8: 0x0  nop
    ctx->pc = 0x1b62d8u;
    // NOP
    // 0x1b62dc: 0x0  nop
    ctx->pc = 0x1b62dcu;
    // NOP
    // 0x1b62e0: 0x46010084  c1          0x10084
    ctx->pc = 0x1b62e0u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x1b62e4: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x1b62e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1b62e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b62e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b62ec: 0x0  nop
    ctx->pc = 0x1b62ecu;
    // NOP
    // 0x1b62f0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1b62f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b62f4: 0x0  nop
    ctx->pc = 0x1b62f4u;
    // NOP
    // 0x1b62f8: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1B62F8u;
    {
        const bool branch_taken_0x1b62f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B62FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B62F8u;
        // 0x1b62fc: 0xe7a20080  swc1        $f2, 0x80($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b62f8) {
            ctx->pc = 0x1B6324u;
            goto label_1b6324;
        }
    }
    ctx->pc = 0x1B6300u;
    // 0x1b6300: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b6300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b6304: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b6304u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6308: 0x0  nop
    ctx->pc = 0x1b6308u;
    // NOP
    // 0x1b630c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1b630cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x1b6310: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1b6310u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1b6314: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1b6314u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b6318: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1b6318u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1b631c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1b631cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b6320: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x1b6320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_1b6324:
    // 0x1b6324: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x1b6324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1b6328: 0x8c6300c0  lw          $v1, 0xC0($v1)
    ctx->pc = 0x1b6328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x1b632c: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1b632cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1b6330: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6330u;
    {
        const bool branch_taken_0x1b6330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6330u;
        // 0x1b6334: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6330) {
            ctx->pc = 0x1B6344u;
            goto label_1b6344;
        }
    }
    ctx->pc = 0x1B6338u;
    // 0x1b6338: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1b6338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1b633c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B633Cu;
    {
        const bool branch_taken_0x1b633c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b633c) {
            ctx->pc = 0x1B6348u;
            goto label_1b6348;
        }
    }
    ctx->pc = 0x1B6344u;
label_1b6344:
    // 0x1b6344: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1b6344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6348:
    // 0x1b6348: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B6348u;
    {
        const bool branch_taken_0x1b6348 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6348) {
            ctx->pc = 0x1B63A0u;
            goto label_1b63a0;
        }
    }
    ctx->pc = 0x1B6350u;
    // 0x1b6350: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x1b6350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x1b6354: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B6354u;
    {
        const bool branch_taken_0x1b6354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6354u;
        // 0x1b6358: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6354) {
            ctx->pc = 0x1B63A0u;
            goto label_1b63a0;
        }
    }
    ctx->pc = 0x1B635Cu;
    // 0x1b635c: 0x3c05fffb  lui         $a1, 0xFFFB
    ctx->pc = 0x1b635cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65531 << 16));
    // 0x1b6360: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1b6360u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1b6364: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1b6364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b6368: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1b6368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b636c: 0xc077cda  jal         func_1DF368
    ctx->pc = 0x1B636Cu;
    SET_GPR_U32(ctx, 31, 0x1B6374u);
    ctx->pc = 0x1B6370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B636Cu;
    // 0x1b6370: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF368u, 0x1B636Cu, 0x1B6374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6374u;
label_1b6374:
    // 0x1b6374: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B6374u;
    {
        const bool branch_taken_0x1b6374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6374) {
            ctx->pc = 0x1B63A0u;
            goto label_1b63a0;
        }
    }
    ctx->pc = 0x1B637Cu;
    // 0x1b637c: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1B637Cu;
    SET_GPR_U32(ctx, 31, 0x1B6384u);
    ctx->pc = 0x1B6380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B637Cu;
    // 0x1b6380: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1B637Cu, 0x1B6384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6384u;
label_1b6384:
    // 0x1b6384: 0xc097f76  jal         func_25FDD8
    ctx->pc = 0x1B6384u;
    SET_GPR_U32(ctx, 31, 0x1B638Cu);
    ctx->pc = 0x1B6388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6384u;
    // 0x1b6388: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FDD8u, 0x1B6384u, 0x1B638Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B638Cu;
label_1b638c:
    // 0x1b638c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B638Cu;
    {
        const bool branch_taken_0x1b638c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B638Cu;
        // 0x1b6390: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b638c) {
            ctx->pc = 0x1B63A0u;
            goto label_1b63a0;
        }
    }
    ctx->pc = 0x1B6394u;
    // 0x1b6394: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x1b6394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
    // 0x1b6398: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x1B6398u;
    {
        const bool branch_taken_0x1b6398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B639Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6398u;
        // 0x1b639c: 0xae020218  sw          $v0, 0x218($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6398) {
            ctx->pc = 0x1B65D4u;
            goto label_1b65d4;
        }
    }
    ctx->pc = 0x1B63A0u;
label_1b63a0:
    // 0x1b63a0: 0xc06dd16  jal         func_1B7458
    ctx->pc = 0x1B63A0u;
    SET_GPR_U32(ctx, 31, 0x1B63A8u);
    ctx->pc = 0x1B63A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B63A0u;
    // 0x1b63a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7458u, 0x1B63A0u, 0x1B63A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B63A8u;
label_1b63a8:
    // 0x1b63a8: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1B63A8u;
    {
        const bool branch_taken_0x1b63a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B63ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B63A8u;
        // 0x1b63ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b63a8) {
            ctx->pc = 0x1B6488u;
            goto label_1b6488;
        }
    }
    ctx->pc = 0x1B63B0u;
    // 0x1b63b0: 0xae000218  sw          $zero, 0x218($s0)
    ctx->pc = 0x1b63b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 0));
    // 0x1b63b4: 0xc06da16  jal         func_1B6858
    ctx->pc = 0x1B63B4u;
    SET_GPR_U32(ctx, 31, 0x1B63BCu);
    ctx->pc = 0x1B63B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B63B4u;
    // 0x1b63b8: 0xc60c00bc  lwc1        $f12, 0xBC($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6858u, 0x1B63B4u, 0x1B63BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B63BCu;
label_1b63bc:
    // 0x1b63bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b63bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b63c0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1b63c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1b63c4: 0xae0200c8  sw          $v0, 0xC8($s0)
    ctx->pc = 0x1b63c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
    // 0x1b63c8: 0x8c622b00  lw          $v0, 0x2B00($v1)
    ctx->pc = 0x1b63c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1b63cc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B63CCu;
    {
        const bool branch_taken_0x1b63cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B63D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B63CCu;
        // 0x1b63d0: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b63cc) {
            ctx->pc = 0x1B63E8u;
            goto label_1b63e8;
        }
    }
    ctx->pc = 0x1B63D4u;
    // 0x1b63d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b63d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b63d8: 0x0  nop
    ctx->pc = 0x1b63d8u;
    // NOP
    // 0x1b63dc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b63dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b63e0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B63E0u;
    {
        const bool branch_taken_0x1b63e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b63e0) {
            ctx->pc = 0x1B6404u;
            goto label_1b6404;
        }
    }
    ctx->pc = 0x1B63E8u;
label_1b63e8:
    // 0x1b63e8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1b63e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b63ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b63ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b63f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b63f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b63f4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b63f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b63f8: 0x0  nop
    ctx->pc = 0x1b63f8u;
    // NOP
    // 0x1b63fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b63fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b6400: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b6400u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b6404:
    // 0x1b6404: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b6404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b6408: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b6408u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b640c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b640cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b6410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6414: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b6414u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b6418: 0xc06da6e  jal         func_1B69B8
    ctx->pc = 0x1B6418u;
    SET_GPR_U32(ctx, 31, 0x1B6420u);
    ctx->pc = 0x1B641Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6418u;
    // 0x1b641c: 0xe60000e0  swc1        $f0, 0xE0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B69B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B69B8u, 0x1B6418u, 0x1B6420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6420u;
label_1b6420:
    // 0x1b6420: 0xc06da34  jal         func_1B68D0
    ctx->pc = 0x1B6420u;
    SET_GPR_U32(ctx, 31, 0x1B6428u);
    ctx->pc = 0x1B6424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6420u;
    // 0x1b6424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B68D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B68D0u, 0x1B6420u, 0x1B6428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6428u;
label_1b6428:
    // 0x1b6428: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1b6428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1b642c: 0x8e242b00  lw          $a0, 0x2B00($s1)
    ctx->pc = 0x1b642cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
    // 0x1b6430: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6430u;
    {
        const bool branch_taken_0x1b6430 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1B6434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6430u;
        // 0x1b6434: 0x244589a0  addiu       $a1, $v0, -0x7660 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6430) {
            ctx->pc = 0x1B644Cu;
            goto label_1b644c;
        }
    }
    ctx->pc = 0x1B6438u;
    // 0x1b6438: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1b6438u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b643c: 0x0  nop
    ctx->pc = 0x1b643cu;
    // NOP
    // 0x1b6440: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b6440u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b6444: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B6444u;
    {
        const bool branch_taken_0x1b6444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6444) {
            ctx->pc = 0x1B6468u;
            goto label_1b6468;
        }
    }
    ctx->pc = 0x1B644Cu;
label_1b644c:
    // 0x1b644c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x1b644cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1b6450: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1b6450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1b6454: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b6454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b6458: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1b6458u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1b645c: 0x0  nop
    ctx->pc = 0x1b645cu;
    // NOP
    // 0x1b6460: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1b6460u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1b6464: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1b6464u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1b6468:
    // 0x1b6468: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b6468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b646c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b646cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b6470: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b6470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b6474: 0xc60100f0  lwc1        $f1, 0xF0($s0)
    ctx->pc = 0x1b6474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6478: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1b6478u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1b647c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1b647cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1b6480: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1B6480u;
    {
        const bool branch_taken_0x1b6480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6480u;
        // 0x1b6484: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6480) {
            ctx->pc = 0x1B65D4u;
            goto label_1b65d4;
        }
    }
    ctx->pc = 0x1B6488u;
label_1b6488:
    // 0x1b6488: 0x8e020158  lw          $v0, 0x158($s0)
    ctx->pc = 0x1b6488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
    // 0x1b648c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B648Cu;
    {
        const bool branch_taken_0x1b648c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b648c) {
            ctx->pc = 0x1B6490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B648Cu;
            // 0x1b6490: 0xae0000c8  sw          $zero, 0xC8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6494u;
            goto label_1b6494;
        }
    }
    ctx->pc = 0x1B6494u;
label_1b6494:
    // 0x1b6494: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x1b6494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x1b6498: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B6498u;
    {
        const bool branch_taken_0x1b6498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6498) {
            ctx->pc = 0x1B649Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6498u;
            // 0x1b649c: 0x8e0200c8  lw          $v0, 0xC8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B64ECu;
            goto label_1b64ec;
        }
    }
    ctx->pc = 0x1B64A0u;
    // 0x1b64a0: 0x26020190  addiu       $v0, $s0, 0x190
    ctx->pc = 0x1b64a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x1b64a4: 0x7e000190  sq          $zero, 0x190($s0)
    ctx->pc = 0x1b64a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 400), GPR_VEC(ctx, 0));
    // 0x1b64a8: 0x7e0001a0  sq          $zero, 0x1A0($s0)
    ctx->pc = 0x1b64a8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 416), GPR_VEC(ctx, 0));
    // 0x1b64ac: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1b64acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x1b64b0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1b64b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1b64b4: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x1b64b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x1b64b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1b64b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b64bc: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x1b64bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x1b64c0: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x1b64c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x1b64c4: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x1b64c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x1b64c8: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x1b64c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
    // 0x1b64cc: 0xc480c624  lwc1        $f0, -0x39DC($a0)
    ctx->pc = 0x1b64ccu;
    { uint32_t bits = FAST_READ32(0x45C624u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b64d0: 0xac430044  sw          $v1, 0x44($v0)
    ctx->pc = 0x1b64d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 3));
    // 0x1b64d4: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1b64d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x1b64d8: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x1b64d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
    // 0x1b64dc: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x1b64dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
    // 0x1b64e0: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1b64e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x1b64e4: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x1b64e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x1b64e8: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x1b64e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_1b64ec:
    // 0x1b64ec: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x1B64ECu;
    {
        const bool branch_taken_0x1b64ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b64ec) {
            ctx->pc = 0x1B64F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B64ECu;
            // 0x1b64f0: 0xae000218  sw          $zero, 0x218($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6568u;
            goto label_1b6568;
        }
    }
    ctx->pc = 0x1B64F4u;
    // 0x1b64f4: 0x26110190  addiu       $s1, $s0, 0x190
    ctx->pc = 0x1b64f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    // 0x1b64f8: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1b64f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x1b64fc: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B64FCu;
    {
        const bool branch_taken_0x1b64fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b64fc) {
            ctx->pc = 0x1B6500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B64FCu;
            // 0x1b6500: 0xae000218  sw          $zero, 0x218($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6568u;
            goto label_1b6568;
        }
    }
    ctx->pc = 0x1B6504u;
    // 0x1b6504: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1B6504u;
    SET_GPR_U32(ctx, 31, 0x1B650Cu);
    ctx->pc = 0x1B6508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B6504u;
    // 0x1b6508: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1B6504u, 0x1B650Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B650Cu;
label_1b650c:
    // 0x1b650c: 0xc097f76  jal         func_25FDD8
    ctx->pc = 0x1B650Cu;
    SET_GPR_U32(ctx, 31, 0x1B6514u);
    ctx->pc = 0x1B6510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B650Cu;
    // 0x1b6510: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FDD8u, 0x1B650Cu, 0x1B6514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6514u;
label_1b6514:
    // 0x1b6514: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B6514u;
    {
        const bool branch_taken_0x1b6514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6514) {
            ctx->pc = 0x1B6518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6514u;
            // 0x1b6518: 0xae000218  sw          $zero, 0x218($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6568u;
            goto label_1b6568;
        }
    }
    ctx->pc = 0x1B651Cu;
    // 0x1b651c: 0x3c014010  lui         $at, 0x4010
    ctx->pc = 0x1b651cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16400 << 16));
    // 0x1b6520: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b6520u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b6524: 0xc60001b0  lwc1        $f0, 0x1B0($s0)
    ctx->pc = 0x1b6524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6528: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b6528u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b652c: 0x0  nop
    ctx->pc = 0x1b652cu;
    // NOP
    // 0x1b6530: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x1B6530u;
    {
        const bool branch_taken_0x1b6530 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B6534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6530u;
        // 0x1b6534: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6530) {
            ctx->pc = 0x1B6564u;
            goto label_1b6564;
        }
    }
    ctx->pc = 0x1B6538u;
    // 0x1b6538: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1b6538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1b653c: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x1b653cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x1b6540: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B6540u;
    {
        const bool branch_taken_0x1b6540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6540) {
            ctx->pc = 0x1B6544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6540u;
            // 0x1b6544: 0xae000218  sw          $zero, 0x218($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6568u;
            goto label_1b6568;
        }
    }
    ctx->pc = 0x1B6548u;
    // 0x1b6548: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x1b6548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1b654c: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1b654cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x1b6550: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x1b6550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x1b6554: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x1b6554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x1b6558: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B6558u;
    {
        const bool branch_taken_0x1b6558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b6558) {
            ctx->pc = 0x1B655Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B6558u;
            // 0x1b655c: 0xae000218  sw          $zero, 0x218($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6568u;
            goto label_1b6568;
        }
    }
    ctx->pc = 0x1B6560u;
    // 0x1b6560: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b6560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b6564:
    // 0x1b6564: 0xae020218  sw          $v0, 0x218($s0)
    ctx->pc = 0x1b6564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 2));
label_1b6568:
    // 0x1b6568: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x1b6568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b656c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1b656cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1b6570: 0xc60100f0  lwc1        $f1, 0xF0($s0)
    ctx->pc = 0x1b6570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b6574: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1b6574u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1b6578: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6578u;
    {
        const bool branch_taken_0x1b6578 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1B657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6578u;
        // 0x1b657c: 0x46010080  add.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6578) {
            ctx->pc = 0x1B6594u;
            goto label_1b6594;
        }
    }
    ctx->pc = 0x1B6580u;
    // 0x1b6580: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b6580u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b6584: 0x0  nop
    ctx->pc = 0x1b6584u;
    // NOP
    // 0x1b6588: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b6588u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b658c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B658Cu;
    {
        const bool branch_taken_0x1b658c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b658c) {
            ctx->pc = 0x1B65B0u;
            goto label_1b65b0;
        }
    }
    ctx->pc = 0x1B6594u;
label_1b6594:
    // 0x1b6594: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1b6594u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1b6598: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b6598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b659c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b659cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b65a0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1b65a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b65a4: 0x0  nop
    ctx->pc = 0x1b65a4u;
    // NOP
    // 0x1b65a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1b65a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1b65ac: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1b65acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1b65b0:
    // 0x1b65b0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1b65b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1b65b4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1b65b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1b65b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b65b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b65bc: 0x0  nop
    ctx->pc = 0x1b65bcu;
    // NOP
    // 0x1b65c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1b65c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1b65c4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1b65c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b65c8: 0x0  nop
    ctx->pc = 0x1b65c8u;
    // NOP
    // 0x1b65cc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1B65CCu;
    {
        const bool branch_taken_0x1b65cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b65cc) {
            ctx->pc = 0x1B65D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B65CCu;
            // 0x1b65d0: 0xae0000c8  sw          $zero, 0xC8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B65D4u;
            goto label_1b65d4;
        }
    }
    ctx->pc = 0x1B65D4u;
label_1b65d4:
    // 0x1b65d4: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x1b65d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b65d8: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x1b65d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1b65dc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1b65dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b65e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B65E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B65E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B65E0u;
        // 0x1b65e4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B65E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B65E8u;
}

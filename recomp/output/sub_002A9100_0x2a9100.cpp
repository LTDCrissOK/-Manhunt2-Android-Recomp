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

// Function: sub_002A9100
// Address: 0x2a9100 - 0x2a9530
void sub_002A9100_0x2a9100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9100_0x2a9100");
#endif

    switch (ctx->pc) {
        case 0x2a9138u: goto label_2a9138;
        case 0x2a9168u: goto label_2a9168;
        case 0x2a918cu: goto label_2a918c;
        case 0x2a91c0u: goto label_2a91c0;
        case 0x2a91ccu: goto label_2a91cc;
        case 0x2a91e8u: goto label_2a91e8;
        case 0x2a91f0u: goto label_2a91f0;
        case 0x2a9200u: goto label_2a9200;
        case 0x2a9278u: goto label_2a9278;
        case 0x2a9294u: goto label_2a9294;
        case 0x2a92a4u: goto label_2a92a4;
        case 0x2a9318u: goto label_2a9318;
        case 0x2a9328u: goto label_2a9328;
        case 0x2a9338u: goto label_2a9338;
        case 0x2a9340u: goto label_2a9340;
        case 0x2a9390u: goto label_2a9390;
        case 0x2a93b4u: goto label_2a93b4;
        case 0x2a9428u: goto label_2a9428;
        case 0x2a9464u: goto label_2a9464;
        case 0x2a94a0u: goto label_2a94a0;
        case 0x2a94d8u: goto label_2a94d8;
        default: break;
    }

    ctx->pc = 0x2a9100u;

    // 0x2a9100: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2a9100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2a9104: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2a9104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2a9108: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2a9108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2a910c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a910cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9110: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2a9110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2a9114: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2a9114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x2a9118: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2a9118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2a911c: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x2a911cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x2a9120: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2a9120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2a9124: 0x9202008c  lbu         $v0, 0x8C($s0)
    ctx->pc = 0x2a9124u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2a9128: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2A9128u;
    {
        const bool branch_taken_0x2a9128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9128) {
            ctx->pc = 0x2A9184u;
            goto label_2a9184;
        }
    }
    ctx->pc = 0x2A9130u;
    // 0x2a9130: 0xc0a2d7c  jal         func_28B5F0
    ctx->pc = 0x2A9130u;
    SET_GPR_U32(ctx, 31, 0x2A9138u);
    ctx->pc = 0x28B5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B5F0u, 0x2A9130u, 0x2A9138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9138u;
label_2a9138:
    // 0x2a9138: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2A9138u;
    {
        const bool branch_taken_0x2a9138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9138u;
        // 0x2a913c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9138) {
            ctx->pc = 0x2A9184u;
            goto label_2a9184;
        }
    }
    ctx->pc = 0x2A9140u;
    // 0x2a9140: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x2a9140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2a9144: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A9144u;
    {
        const bool branch_taken_0x2a9144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A9148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9144u;
        // 0x2a9148: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9144) {
            ctx->pc = 0x2A9170u;
            goto label_2a9170;
        }
    }
    ctx->pc = 0x2A914Cu;
    // 0x2a914c: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x2a914cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x2a9150: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x2a9150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x2a9154: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a9154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9158: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x2a9158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x2a915c: 0xa200008c  sb          $zero, 0x8C($s0)
    ctx->pc = 0x2a915cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a9160: 0xc0a2d80  jal         func_28B600
    ctx->pc = 0x2A9160u;
    SET_GPR_U32(ctx, 31, 0x2A9168u);
    ctx->pc = 0x2A9164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9160u;
    // 0x2a9164: 0xa202008d  sb          $v0, 0x8D($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 141), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B600u, 0x2A9160u, 0x2A9168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9168u;
label_2a9168:
    // 0x2a9168: 0x100000e9  b           . + 4 + (0xE9 << 2)
    ctx->pc = 0x2A9168u;
    {
        const bool branch_taken_0x2a9168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9168u;
        // 0x2a916c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9168) {
            ctx->pc = 0x2A9510u;
            goto label_2a9510;
        }
    }
    ctx->pc = 0x2A9170u;
label_2a9170:
    // 0x2a9170: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a9170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a9174: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a9174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9178: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x2a9178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x2a917c: 0xa203008d  sb          $v1, 0x8D($s0)
    ctx->pc = 0x2a917cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 141), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a9180: 0xa203008c  sb          $v1, 0x8C($s0)
    ctx->pc = 0x2a9180u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 3));
label_2a9184:
    // 0x2a9184: 0xc0aa54c  jal         func_2A9530
    ctx->pc = 0x2A9184u;
    SET_GPR_U32(ctx, 31, 0x2A918Cu);
    ctx->pc = 0x2A9188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9184u;
    // 0x2a9188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9530u, 0x2A9184u, 0x2A918Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A918Cu;
label_2a918c:
    // 0x2a918c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2a918cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2a9190: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x2a9190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x2a9194: 0x8c65bd50  lw          $a1, -0x42B0($v1)
    ctx->pc = 0x2a9194u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x2a9198: 0x8c82adf0  lw          $v0, -0x5210($a0)
    ctx->pc = 0x2a9198u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BADF0u));
    // 0x2a919c: 0x8ca60224  lw          $a2, 0x224($a1)
    ctx->pc = 0x2a919cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 548)));
    // 0x2a91a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a91a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a91a4: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2a91a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2a91a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a91a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a91ac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a91acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a91b0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A91B0u;
    {
        const bool branch_taken_0x2a91b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A91B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A91B0u;
        // 0x2a91b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a91b0) {
            ctx->pc = 0x2A91C4u;
            goto label_2a91c4;
        }
    }
    ctx->pc = 0x2A91B8u;
    // 0x2a91b8: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x2A91B8u;
    SET_GPR_U32(ctx, 31, 0x2A91C0u);
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2A91B8u, 0x2A91C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A91C0u;
label_2a91c0:
    // 0x2a91c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a91c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a91c4:
    // 0x2a91c4: 0xc0a2d9a  jal         func_28B668
    ctx->pc = 0x2A91C4u;
    SET_GPR_U32(ctx, 31, 0x2A91CCu);
    ctx->pc = 0x28B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B668u, 0x2A91C4u, 0x2A91CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A91CCu;
label_2a91cc:
    // 0x2a91cc: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x2a91ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x2a91d0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A91D0u;
    {
        const bool branch_taken_0x2a91d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a91d0) {
            ctx->pc = 0x2A91E0u;
            goto label_2a91e0;
        }
    }
    ctx->pc = 0x2A91D8u;
    // 0x2a91d8: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x2a91d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x2a91dc: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x2a91dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_2a91e0:
    // 0x2a91e0: 0xc0a2d9a  jal         func_28B668
    ctx->pc = 0x2A91E0u;
    SET_GPR_U32(ctx, 31, 0x2A91E8u);
    ctx->pc = 0x28B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B668u, 0x2A91E0u, 0x2A91E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A91E8u;
label_2a91e8:
    // 0x2a91e8: 0xc0a2d9a  jal         func_28B668
    ctx->pc = 0x2A91E8u;
    SET_GPR_U32(ctx, 31, 0x2A91F0u);
    ctx->pc = 0x2A91ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A91E8u;
    // 0x2a91ec: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B668u, 0x2A91E8u, 0x2A91F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A91F0u;
label_2a91f0:
    // 0x2a91f0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x2a91f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x2a91f4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2a91f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a91f8: 0xc0a2d8e  jal         func_28B638
    ctx->pc = 0x2A91F8u;
    SET_GPR_U32(ctx, 31, 0x2A9200u);
    ctx->pc = 0x2A91FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A91F8u;
    // 0x2a91fc: 0x27a50024  addiu       $a1, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B638u, 0x2A91F8u, 0x2A9200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9200u;
label_2a9200:
    // 0x2a9200: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x2a9200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2a9204: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A9204u;
    {
        const bool branch_taken_0x2a9204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9204) {
            ctx->pc = 0x2A9208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9204u;
            // 0x2a9208: 0x8e020060  lw          $v0, 0x60($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9218u;
            goto label_2a9218;
        }
    }
    ctx->pc = 0x2A920Cu;
    // 0x2a920c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a920cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a9210: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x2a9210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x2a9214: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x2a9214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_2a9218:
    // 0x2a9218: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A9218u;
    {
        const bool branch_taken_0x2a9218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a9218) {
            ctx->pc = 0x2A921Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9218u;
            // 0x2a921c: 0x8e03005c  lw          $v1, 0x5C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A922Cu;
            goto label_2a922c;
        }
    }
    ctx->pc = 0x2A9220u;
    // 0x2a9220: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x2a9220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2a9224: 0xae020060  sw          $v0, 0x60($s0)
    ctx->pc = 0x2a9224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 2));
    // 0x2a9228: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x2a9228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_2a922c:
    // 0x2a922c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2a922cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a9230: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A9230u;
    {
        const bool branch_taken_0x2a9230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a9230) {
            ctx->pc = 0x2A9248u;
            goto label_2a9248;
        }
    }
    ctx->pc = 0x2A9238u;
    // 0x2a9238: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x2a9238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a923c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x2a923cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2a9240: 0x54430001  bnel        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A9240u;
    {
        const bool branch_taken_0x2a9240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a9240) {
            ctx->pc = 0x2A9244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9240u;
            // 0x2a9244: 0xae030060  sw          $v1, 0x60($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9248u;
            goto label_2a9248;
        }
    }
    ctx->pc = 0x2A9248u;
label_2a9248:
    // 0x2a9248: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x2A9248u;
    {
        const bool branch_taken_0x2a9248 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9248u;
        // 0x2a924c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9248) {
            ctx->pc = 0x2A9280u;
            goto label_2a9280;
        }
    }
    ctx->pc = 0x2A9250u;
    // 0x2a9250: 0x12220003  beq         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A9250u;
    {
        const bool branch_taken_0x2a9250 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A9254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9250u;
        // 0x2a9254: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9250) {
            ctx->pc = 0x2A9260u;
            goto label_2a9260;
        }
    }
    ctx->pc = 0x2A9258u;
    // 0x2a9258: 0x5622000a  bnel        $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A9258u;
    {
        const bool branch_taken_0x2a9258 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a9258) {
            ctx->pc = 0x2A925Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A9258u;
            // 0x2a925c: 0x8e02006c  lw          $v0, 0x6C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A9284u;
            goto label_2a9284;
        }
    }
    ctx->pc = 0x2A9260u;
label_2a9260:
    // 0x2a9260: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x2a9260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2a9264: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a9264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a9268: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2A9268u;
    {
        const bool branch_taken_0x2a9268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A926Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9268u;
        // 0x2a926c: 0xae00006c  sw          $zero, 0x6C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9268) {
            ctx->pc = 0x2A92ACu;
            goto label_2a92ac;
        }
    }
    ctx->pc = 0x2A9270u;
    // 0x2a9270: 0xc0a2d80  jal         func_28B600
    ctx->pc = 0x2A9270u;
    SET_GPR_U32(ctx, 31, 0x2A9278u);
    ctx->pc = 0x2A9274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9270u;
    // 0x2a9274: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B600u, 0x2A9270u, 0x2A9278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9278u;
label_2a9278:
    // 0x2a9278: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2A9278u;
    {
        const bool branch_taken_0x2a9278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9278u;
        // 0x2a927c: 0x9202008c  lbu         $v0, 0x8C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9278) {
            ctx->pc = 0x2A92B0u;
            goto label_2a92b0;
        }
    }
    ctx->pc = 0x2A9280u;
label_2a9280:
    // 0x2a9280: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x2a9280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_2a9284:
    // 0x2a9284: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A9284u;
    {
        const bool branch_taken_0x2a9284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9284u;
        // 0x2a9288: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9284) {
            ctx->pc = 0x2A92A8u;
            goto label_2a92a8;
        }
    }
    ctx->pc = 0x2A928Cu;
    // 0x2a928c: 0xc0a2d84  jal         func_28B610
    ctx->pc = 0x2A928Cu;
    SET_GPR_U32(ctx, 31, 0x2A9294u);
    ctx->pc = 0x28B610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B610u, 0x2A928Cu, 0x2A9294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9294u;
label_2a9294:
    // 0x2a9294: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A9294u;
    {
        const bool branch_taken_0x2a9294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9294u;
        // 0x2a9298: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9294) {
            ctx->pc = 0x2A92A8u;
            goto label_2a92a8;
        }
    }
    ctx->pc = 0x2A929Cu;
    // 0x2a929c: 0xc0a2d80  jal         func_28B600
    ctx->pc = 0x2A929Cu;
    SET_GPR_U32(ctx, 31, 0x2A92A4u);
    ctx->pc = 0x2A92A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A929Cu;
    // 0x2a92a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B600u, 0x2A929Cu, 0x2A92A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A92A4u;
label_2a92a4:
    // 0x2a92a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a92a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a92a8:
    // 0x2a92a8: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x2a92a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
label_2a92ac:
    // 0x2a92ac: 0x9202008c  lbu         $v0, 0x8C($s0)
    ctx->pc = 0x2a92acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
label_2a92b0:
    // 0x2a92b0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A92B0u;
    {
        const bool branch_taken_0x2a92b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a92b0) {
            ctx->pc = 0x2A92B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A92B0u;
            // 0x2a92b4: 0x8e03005c  lw          $v1, 0x5C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A92D4u;
            goto label_2a92d4;
        }
    }
    ctx->pc = 0x2A92B8u;
    // 0x2a92b8: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x2a92b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2a92bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a92bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a92c0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A92C0u;
    {
        const bool branch_taken_0x2a92c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A92C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A92C0u;
        // 0x2a92c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a92c0) {
            ctx->pc = 0x2A92D0u;
            goto label_2a92d0;
        }
    }
    ctx->pc = 0x2A92C8u;
    // 0x2a92c8: 0xa202008c  sb          $v0, 0x8C($s0)
    ctx->pc = 0x2a92c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a92cc: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x2a92ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
label_2a92d0:
    // 0x2a92d0: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x2a92d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_2a92d4:
    // 0x2a92d4: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x2a92d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2a92d8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A92D8u;
    {
        const bool branch_taken_0x2a92d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A92DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A92D8u;
        // 0x2a92dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a92d8) {
            ctx->pc = 0x2A92F0u;
            goto label_2a92f0;
        }
    }
    ctx->pc = 0x2A92E0u;
    // 0x2a92e0: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x2a92e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a92e4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x2a92e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a92e8: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2a92e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2a92ec: 0x2c440001  sltiu       $a0, $v0, 0x1
    ctx->pc = 0x2a92ecu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2a92f0:
    // 0x2a92f0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A92F0u;
    {
        const bool branch_taken_0x2a92f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a92f0) {
            ctx->pc = 0x2A9310u;
            goto label_2a9310;
        }
    }
    ctx->pc = 0x2A92F8u;
    // 0x2a92f8: 0x9202008c  lbu         $v0, 0x8C($s0)
    ctx->pc = 0x2a92f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2a92fc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A92FCu;
    {
        const bool branch_taken_0x2a92fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A92FCu;
        // 0x2a9300: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a92fc) {
            ctx->pc = 0x2A9310u;
            goto label_2a9310;
        }
    }
    ctx->pc = 0x2A9304u;
    // 0x2a9304: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a9304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a9308: 0xae020068  sw          $v0, 0x68($s0)
    ctx->pc = 0x2a9308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    // 0x2a930c: 0xa203008c  sb          $v1, 0x8C($s0)
    ctx->pc = 0x2a930cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 140), (uint8_t)GPR_U32(ctx, 3));
label_2a9310:
    // 0x2a9310: 0xc0a55a8  jal         func_2956A0
    ctx->pc = 0x2A9310u;
    SET_GPR_U32(ctx, 31, 0x2A9318u);
    ctx->pc = 0x2A9314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9310u;
    // 0x2a9314: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2956A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2956A0u, 0x2A9310u, 0x2A9318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9318u;
label_2a9318:
    // 0x2a9318: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x2a9318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2a931c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a931cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9320: 0xc0a2d9e  jal         func_28B678
    ctx->pc = 0x2A9320u;
    SET_GPR_U32(ctx, 31, 0x2A9328u);
    ctx->pc = 0x2A9324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9320u;
    // 0x2a9324: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B678u, 0x2A9320u, 0x2A9328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9328u;
label_2a9328:
    // 0x2a9328: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x2a9328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2a932c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a932cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9330: 0xc0a2d9e  jal         func_28B678
    ctx->pc = 0x2A9330u;
    SET_GPR_U32(ctx, 31, 0x2A9338u);
    ctx->pc = 0x2A9334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9330u;
    // 0x2a9334: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B678u, 0x2A9330u, 0x2A9338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9338u;
label_2a9338:
    // 0x2a9338: 0xc09f4a6  jal         func_27D298
    ctx->pc = 0x2A9338u;
    SET_GPR_U32(ctx, 31, 0x2A9340u);
    ctx->pc = 0x2A933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9338u;
    // 0x2a933c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D298u, 0x2A9338u, 0x2A9340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9340u;
label_2a9340:
    // 0x2a9340: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a9340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9344: 0x2ea20006  sltiu       $v0, $s5, 0x6
    ctx->pc = 0x2a9344u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2a9348: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2A9348u;
    {
        const bool branch_taken_0x2a9348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A934Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9348u;
        // 0x2a934c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9348) {
            ctx->pc = 0x2A9384u;
            goto label_2a9384;
        }
    }
    ctx->pc = 0x2A9350u;
    // 0x2a9350: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x2a9350u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x2a9354: 0x2442d980  addiu       $v0, $v0, -0x2680
    ctx->pc = 0x2a9354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957440));
    // 0x2a9358: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a9358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a935c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a935cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a9360: 0x800008  jr          $a0
    ctx->pc = 0x2A9360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A9368u: goto label_2a9368;
            case 0x2A9370u: goto label_2a9370;
            case 0x2A9378u: goto label_2a9378;
            case 0x2A9380u: goto label_2a9380;
            case 0x2A9384u: goto label_2a9384;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9360u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A9368u;
label_2a9368:
    // 0x2a9368: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2A9368u;
    {
        const bool branch_taken_0x2a9368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9368u;
        // 0x2a936c: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9368) {
            ctx->pc = 0x2A9384u;
            goto label_2a9384;
        }
    }
    ctx->pc = 0x2A9370u;
label_2a9370:
    // 0x2a9370: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A9370u;
    {
        const bool branch_taken_0x2a9370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9370u;
        // 0x2a9374: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9370) {
            ctx->pc = 0x2A9384u;
            goto label_2a9384;
        }
    }
    ctx->pc = 0x2A9378u;
label_2a9378:
    // 0x2a9378: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2A9378u;
    {
        const bool branch_taken_0x2a9378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9378u;
        // 0x2a937c: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9378) {
            ctx->pc = 0x2A9384u;
            goto label_2a9384;
        }
    }
    ctx->pc = 0x2A9380u;
label_2a9380:
    // 0x2a9380: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x2a9380u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2a9384:
    // 0x2a9384: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2a9384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9388: 0xc0aa3f2  jal         func_2A8FC8
    ctx->pc = 0x2A9388u;
    SET_GPR_U32(ctx, 31, 0x2A9390u);
    ctx->pc = 0x2A938Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9388u;
    // 0x2a938c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8FC8u, 0x2A9388u, 0x2A9390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9390u;
label_2a9390:
    // 0x2a9390: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a9390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9394: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x2a9394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
    // 0x2a9398: 0x2363a  dsrl        $a2, $v0, 24
    ctx->pc = 0x2a9398u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> 24);
    // 0x2a939c: 0x22c3a  dsrl        $a1, $v0, 16
    ctx->pc = 0x2a939cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 16);
    // 0x2a93a0: 0xa3a30001  sb          $v1, 0x1($sp)
    ctx->pc = 0x2a93a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a93a4: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x2a93a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a93a8: 0xa3a50002  sb          $a1, 0x2($sp)
    ctx->pc = 0x2a93a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x2a93ac: 0xc0aad40  jal         func_2AB500
    ctx->pc = 0x2A93ACu;
    SET_GPR_U32(ctx, 31, 0x2A93B4u);
    ctx->pc = 0x2A93B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A93ACu;
    // 0x2a93b0: 0xa3a60003  sb          $a2, 0x3($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB500u, 0x2A93ACu, 0x2A93B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A93B4u;
label_2a93b4:
    // 0x2a93b4: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x2a93b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x2a93b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a93b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a93bc: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2A93BCu;
    {
        const bool branch_taken_0x2a93bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A93C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A93BCu;
        // 0x2a93c0: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a93bc) {
            ctx->pc = 0x2A9430u;
            goto label_2a9430;
        }
    }
    ctx->pc = 0x2A93C4u;
    // 0x2a93c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A93C4u;
    {
        const bool branch_taken_0x2a93c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A93C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A93C4u;
        // 0x2a93c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a93c4) {
            ctx->pc = 0x2A93DCu;
            goto label_2a93dc;
        }
    }
    ctx->pc = 0x2A93CCu;
    // 0x2a93cc: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2A93CCu;
    {
        const bool branch_taken_0x2a93cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A93D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A93CCu;
        // 0x2a93d0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a93cc) {
            ctx->pc = 0x2A93F8u;
            goto label_2a93f8;
        }
    }
    ctx->pc = 0x2A93D4u;
    // 0x2a93d4: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2A93D4u;
    {
        const bool branch_taken_0x2a93d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A93D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A93D4u;
        // 0x2a93d8: 0x9202008d  lbu         $v0, 0x8D($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 141)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a93d4) {
            ctx->pc = 0x2A94DCu;
            goto label_2a94dc;
        }
    }
    ctx->pc = 0x2A93DCu;
label_2a93dc:
    // 0x2a93dc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2a93dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2a93e0: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2A93E0u;
    {
        const bool branch_taken_0x2a93e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A93E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A93E0u;
        // 0x2a93e4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a93e0) {
            ctx->pc = 0x2A946Cu;
            goto label_2a946c;
        }
    }
    ctx->pc = 0x2A93E8u;
    // 0x2a93e8: 0x1062002f  beq         $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x2A93E8u;
    {
        const bool branch_taken_0x2a93e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A93ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A93E8u;
        // 0x2a93ec: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a93e8) {
            ctx->pc = 0x2A94A8u;
            goto label_2a94a8;
        }
    }
    ctx->pc = 0x2A93F0u;
    // 0x2a93f0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2A93F0u;
    {
        const bool branch_taken_0x2a93f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A93F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A93F0u;
        // 0x2a93f4: 0x9202008d  lbu         $v0, 0x8D($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 141)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a93f0) {
            ctx->pc = 0x2A94DCu;
            goto label_2a94dc;
        }
    }
    ctx->pc = 0x2A93F8u;
label_2a93f8:
    // 0x2a93f8: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x2a93f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2a93fc: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x2a93fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2a9400: 0xaba20013  swl         $v0, 0x13($sp)
    ctx->pc = 0x2a9400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2a9404: 0xbba20010  swr         $v0, 0x10($sp)
    ctx->pc = 0x2a9404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2a9408: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a9408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a940c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2a940cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2a9410: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a9410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9414: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x2a9414u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9418: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2a9418u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a941c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a941cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9420: 0xc0aa58a  jal         func_2A9628
    ctx->pc = 0x2A9420u;
    SET_GPR_U32(ctx, 31, 0x2A9428u);
    ctx->pc = 0x2A9424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9420u;
    // 0x2a9424: 0xe23824  and         $a3, $a3, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9628u, 0x2A9420u, 0x2A9428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9428u;
label_2a9428:
    // 0x2a9428: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2A9428u;
    {
        const bool branch_taken_0x2a9428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9428u;
        // 0x2a942c: 0x9202008d  lbu         $v0, 0x8D($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 141)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9428) {
            ctx->pc = 0x2A94DCu;
            goto label_2a94dc;
        }
    }
    ctx->pc = 0x2A9430u;
label_2a9430:
    // 0x2a9430: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x2a9430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2a9434: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x2a9434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2a9438: 0xaba20013  swl         $v0, 0x13($sp)
    ctx->pc = 0x2a9438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2a943c: 0xbba20010  swr         $v0, 0x10($sp)
    ctx->pc = 0x2a943cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2a9440: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a9440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9444: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a9444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a9448: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2a9448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2a944c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a944cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9450: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x2a9450u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9454: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2a9454u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a9458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a945c: 0xc0aa758  jal         func_2A9D60
    ctx->pc = 0x2A945Cu;
    SET_GPR_U32(ctx, 31, 0x2A9464u);
    ctx->pc = 0x2A9460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A945Cu;
    // 0x2a9460: 0xe23824  and         $a3, $a3, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9D60u, 0x2A945Cu, 0x2A9464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A9464u;
label_2a9464:
    // 0x2a9464: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2A9464u;
    {
        const bool branch_taken_0x2a9464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9464u;
        // 0x2a9468: 0x9202008d  lbu         $v0, 0x8D($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 141)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9464) {
            ctx->pc = 0x2A94DCu;
            goto label_2a94dc;
        }
    }
    ctx->pc = 0x2A946Cu;
label_2a946c:
    // 0x2a946c: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x2a946cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2a9470: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x2a9470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2a9474: 0xaba20013  swl         $v0, 0x13($sp)
    ctx->pc = 0x2a9474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2a9478: 0xbba20010  swr         $v0, 0x10($sp)
    ctx->pc = 0x2a9478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2a947c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2a947cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9480: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a9480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a9484: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2a9484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2a9488: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a9488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a948c: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x2a948cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9490: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2a9490u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a9494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a9498: 0xc0aa92a  jal         func_2AA4A8
    ctx->pc = 0x2A9498u;
    SET_GPR_U32(ctx, 31, 0x2A94A0u);
    ctx->pc = 0x2A949Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A9498u;
    // 0x2a949c: 0xe23824  and         $a3, $a3, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA4A8u, 0x2A9498u, 0x2A94A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A94A0u;
label_2a94a0:
    // 0x2a94a0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2A94A0u;
    {
        const bool branch_taken_0x2a94a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A94A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A94A0u;
        // 0x2a94a4: 0x9202008d  lbu         $v0, 0x8D($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 141)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a94a0) {
            ctx->pc = 0x2A94DCu;
            goto label_2a94dc;
        }
    }
    ctx->pc = 0x2A94A8u;
label_2a94a8:
    // 0x2a94a8: 0x8ba20003  lwl         $v0, 0x3($sp)
    ctx->pc = 0x2a94a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x2a94ac: 0x9ba20000  lwr         $v0, 0x0($sp)
    ctx->pc = 0x2a94acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x2a94b0: 0xaba20013  swl         $v0, 0x13($sp)
    ctx->pc = 0x2a94b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2a94b4: 0xbba20010  swr         $v0, 0x10($sp)
    ctx->pc = 0x2a94b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2a94b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2a94b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2a94bc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2a94bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2a94c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a94c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a94c4: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x2a94c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a94c8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2a94c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a94cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a94ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a94d0: 0xc0aa9ca  jal         func_2AA728
    ctx->pc = 0x2A94D0u;
    SET_GPR_U32(ctx, 31, 0x2A94D8u);
    ctx->pc = 0x2A94D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A94D0u;
    // 0x2a94d4: 0xe23824  and         $a3, $a3, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA728u, 0x2A94D0u, 0x2A94D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A94D8u;
label_2a94d8:
    // 0x2a94d8: 0x9202008d  lbu         $v0, 0x8D($s0)
    ctx->pc = 0x2a94d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 141)));
label_2a94dc:
    // 0x2a94dc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A94DCu;
    {
        const bool branch_taken_0x2a94dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a94dc) {
            ctx->pc = 0x2A94E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A94DCu;
            // 0x2a94e0: 0x9202008c  lbu         $v0, 0x8C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A94F0u;
            goto label_2a94f0;
        }
    }
    ctx->pc = 0x2A94E4u;
    // 0x2a94e4: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x2a94e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x2a94e8: 0xa200008d  sb          $zero, 0x8D($s0)
    ctx->pc = 0x2a94e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 141), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a94ec: 0x9202008c  lbu         $v0, 0x8C($s0)
    ctx->pc = 0x2a94ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
label_2a94f0:
    // 0x2a94f0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A94F0u;
    {
        const bool branch_taken_0x2a94f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A94F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A94F0u;
        // 0x2a94f4: 0x26030070  addiu       $v1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a94f0) {
            ctx->pc = 0x2A950Cu;
            goto label_2a950c;
        }
    }
    ctx->pc = 0x2A94F8u;
    // 0x2a94f8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2a94f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2a94fc: 0xc4412b30  lwc1        $f1, 0x2B30($v0)
    ctx->pc = 0x2a94fcu;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9500: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2a9500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9504: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2a9504u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a9508: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2a9508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_2a950c:
    // 0x2a950c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2a950cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2a9510:
    // 0x2a9510: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2a9510u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2a9514: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2a9514u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a9518: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2a9518u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2a951c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2a951cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a9520: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x2a9520u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2a9524: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2a9524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a9528: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A952Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9528u;
        // 0x2a952c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9530u;
}

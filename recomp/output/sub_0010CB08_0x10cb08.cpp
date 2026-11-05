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

// Function: sub_0010CB08
// Address: 0x10cb08 - 0x10cbd0
void sub_0010CB08_0x10cb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CB08_0x10cb08");
#endif

    switch (ctx->pc) {
        case 0x10cb08u: goto label_10cb08;
        case 0x10cb0cu: goto label_10cb0c;
        case 0x10cb10u: goto label_10cb10;
        case 0x10cb14u: goto label_10cb14;
        case 0x10cb18u: goto label_10cb18;
        case 0x10cb1cu: goto label_10cb1c;
        case 0x10cb20u: goto label_10cb20;
        case 0x10cb24u: goto label_10cb24;
        case 0x10cb28u: goto label_10cb28;
        case 0x10cb2cu: goto label_10cb2c;
        case 0x10cb30u: goto label_10cb30;
        case 0x10cb34u: goto label_10cb34;
        case 0x10cb38u: goto label_10cb38;
        case 0x10cb3cu: goto label_10cb3c;
        case 0x10cb40u: goto label_10cb40;
        case 0x10cb44u: goto label_10cb44;
        case 0x10cb48u: goto label_10cb48;
        case 0x10cb4cu: goto label_10cb4c;
        case 0x10cb50u: goto label_10cb50;
        case 0x10cb54u: goto label_10cb54;
        case 0x10cb58u: goto label_10cb58;
        case 0x10cb5cu: goto label_10cb5c;
        case 0x10cb60u: goto label_10cb60;
        case 0x10cb64u: goto label_10cb64;
        case 0x10cb68u: goto label_10cb68;
        case 0x10cb6cu: goto label_10cb6c;
        case 0x10cb70u: goto label_10cb70;
        case 0x10cb74u: goto label_10cb74;
        case 0x10cb78u: goto label_10cb78;
        case 0x10cb7cu: goto label_10cb7c;
        case 0x10cb80u: goto label_10cb80;
        case 0x10cb84u: goto label_10cb84;
        case 0x10cb88u: goto label_10cb88;
        case 0x10cb8cu: goto label_10cb8c;
        case 0x10cb90u: goto label_10cb90;
        case 0x10cb94u: goto label_10cb94;
        case 0x10cb98u: goto label_10cb98;
        case 0x10cb9cu: goto label_10cb9c;
        case 0x10cba0u: goto label_10cba0;
        case 0x10cba4u: goto label_10cba4;
        case 0x10cba8u: goto label_10cba8;
        case 0x10cbacu: goto label_10cbac;
        case 0x10cbb0u: goto label_10cbb0;
        case 0x10cbb4u: goto label_10cbb4;
        case 0x10cbb8u: goto label_10cbb8;
        case 0x10cbbcu: goto label_10cbbc;
        case 0x10cbc0u: goto label_10cbc0;
        case 0x10cbc4u: goto label_10cbc4;
        case 0x10cbc8u: goto label_10cbc8;
        case 0x10cbccu: goto label_10cbcc;
        default: break;
    }

    ctx->pc = 0x10cb08u;

label_10cb08:
    // 0x10cb08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10cb08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_10cb0c:
    // 0x10cb0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10cb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_10cb10:
    // 0x10cb10: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10cb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_10cb14:
    // 0x10cb14: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x10cb14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10cb18:
    // 0x10cb18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10cb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_10cb1c:
    // 0x10cb1c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x10cb1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_10cb20:
    // 0x10cb20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10cb20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_10cb24:
    // 0x10cb24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10cb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_10cb28:
    // 0x10cb28: 0xc043366  jal         func_10CD98
label_10cb2c:
    if (ctx->pc == 0x10CB2Cu) {
        ctx->pc = 0x10CB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB28u;
        // 0x10cb2c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CB30u;
        goto label_10cb30;
    }
    ctx->pc = 0x10CB28u;
    SET_GPR_U32(ctx, 31, 0x10CB30u);
    ctx->pc = 0x10CB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CB28u;
    // 0x10cb2c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10CB28u, 0x10CB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CB30u;
label_10cb30:
    // 0x10cb30: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x10cb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_10cb34:
    // 0x10cb34: 0x5443001f  bnel        $v0, $v1, . + 4 + (0x1F << 2)
label_10cb38:
    if (ctx->pc == 0x10CB38u) {
        ctx->pc = 0x10CB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB34u;
        // 0x10cb38: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CB3Cu;
        goto label_10cb3c;
    }
    ctx->pc = 0x10CB34u;
    {
        const bool branch_taken_0x10cb34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x10cb34) {
            ctx->pc = 0x10CB38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CB34u;
            // 0x10cb38: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CBB4u;
            goto label_10cbb4;
        }
    }
    ctx->pc = 0x10CB3Cu;
label_10cb3c:
    // 0x10cb3c: 0xc085d4e  jal         func_217538
label_10cb40:
    if (ctx->pc == 0x10CB40u) {
        ctx->pc = 0x10CB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB3Cu;
        // 0x10cb40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CB44u;
        goto label_10cb44;
    }
    ctx->pc = 0x10CB3Cu;
    SET_GPR_U32(ctx, 31, 0x10CB44u);
    ctx->pc = 0x10CB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CB3Cu;
    // 0x10cb40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x217538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217538u, 0x10CB3Cu, 0x10CB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CB44u;
label_10cb44:
    // 0x10cb44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10cb44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10cb48:
    // 0x10cb48: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
label_10cb4c:
    if (ctx->pc == 0x10CB4Cu) {
        ctx->pc = 0x10CB50u;
        goto label_10cb50;
    }
    ctx->pc = 0x10CB48u;
    {
        const bool branch_taken_0x10cb48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x10cb48) {
            ctx->pc = 0x10CB5Cu;
            goto label_10cb5c;
        }
    }
    ctx->pc = 0x10CB50u;
label_10cb50:
    // 0x10cb50: 0xc097110  jal         func_25C440
label_10cb54:
    if (ctx->pc == 0x10CB54u) {
        ctx->pc = 0x10CB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB50u;
        // 0x10cb54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CB58u;
        goto label_10cb58;
    }
    ctx->pc = 0x10CB50u;
    SET_GPR_U32(ctx, 31, 0x10CB58u);
    ctx->pc = 0x10CB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CB50u;
    // 0x10cb54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25C440u, 0x10CB50u, 0x10CB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CB58u;
label_10cb58:
    // 0x10cb58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10cb58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10cb5c:
    // 0x10cb5c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_10cb60:
    if (ctx->pc == 0x10CB60u) {
        ctx->pc = 0x10CB64u;
        goto label_10cb64;
    }
    ctx->pc = 0x10CB5Cu;
    {
        const bool branch_taken_0x10cb5c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x10cb5c) {
            ctx->pc = 0x10CB80u;
            goto label_10cb80;
        }
    }
    ctx->pc = 0x10CB64u;
label_10cb64:
    // 0x10cb64: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_10cb68:
    if (ctx->pc == 0x10CB68u) {
        ctx->pc = 0x10CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB64u;
        // 0x10cb68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CB6Cu;
        goto label_10cb6c;
    }
    ctx->pc = 0x10CB64u;
    {
        const bool branch_taken_0x10cb64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB64u;
        // 0x10cb68: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cb64) {
            ctx->pc = 0x10CBB4u;
            goto label_10cbb4;
        }
    }
    ctx->pc = 0x10CB6Cu;
label_10cb6c:
    // 0x10cb6c: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x10cb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_10cb70:
    // 0x10cb70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10cb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10cb74:
    // 0x10cb74: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x10cb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_10cb78:
    // 0x10cb78: 0x40f809  jalr        $v0
label_10cb7c:
    if (ctx->pc == 0x10CB7Cu) {
        ctx->pc = 0x10CB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB78u;
        // 0x10cb7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CB80u;
        goto label_10cb80;
    }
    ctx->pc = 0x10CB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10CB80u);
        ctx->pc = 0x10CB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB78u;
        // 0x10cb7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CB78u, 0x10CB80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10CB80u;
label_10cb80:
    // 0x10cb80: 0xc04339c  jal         func_10CE70
label_10cb84:
    if (ctx->pc == 0x10CB84u) {
        ctx->pc = 0x10CB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB80u;
        // 0x10cb84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CB88u;
        goto label_10cb88;
    }
    ctx->pc = 0x10CB80u;
    SET_GPR_U32(ctx, 31, 0x10CB88u);
    ctx->pc = 0x10CB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CB80u;
    // 0x10cb84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CE70u, 0x10CB80u, 0x10CB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CB88u;
label_10cb88:
    // 0x10cb88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10cb88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10cb8c:
    // 0x10cb8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10cb8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10cb90:
    // 0x10cb90: 0xc04370a  jal         func_10DC28
label_10cb94:
    if (ctx->pc == 0x10CB94u) {
        ctx->pc = 0x10CB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB90u;
        // 0x10cb94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CB98u;
        goto label_10cb98;
    }
    ctx->pc = 0x10CB90u;
    SET_GPR_U32(ctx, 31, 0x10CB98u);
    ctx->pc = 0x10CB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CB90u;
    // 0x10cb94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DC28u, 0x10CB90u, 0x10CB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CB98u;
label_10cb98:
    // 0x10cb98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x10cb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10cb9c:
    // 0x10cb9c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10cb9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10cba0:
    // 0x10cba0: 0xc0432f4  jal         func_10CBD0
label_10cba4:
    if (ctx->pc == 0x10CBA4u) {
        ctx->pc = 0x10CBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CBA0u;
        // 0x10cba4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CBA8u;
        goto label_10cba8;
    }
    ctx->pc = 0x10CBA0u;
    SET_GPR_U32(ctx, 31, 0x10CBA8u);
    ctx->pc = 0x10CBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CBA0u;
    // 0x10cba4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CBD0u, 0x10CBA0u, 0x10CBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CBA8u;
label_10cba8:
    // 0x10cba8: 0xc043108  jal         func_10C420
label_10cbac:
    if (ctx->pc == 0x10CBACu) {
        ctx->pc = 0x10CBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CBA8u;
        // 0x10cbac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CBB0u;
        goto label_10cbb0;
    }
    ctx->pc = 0x10CBA8u;
    SET_GPR_U32(ctx, 31, 0x10CBB0u);
    ctx->pc = 0x10CBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CBA8u;
    // 0x10cbac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C420u, 0x10CBA8u, 0x10CBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CBB0u;
label_10cbb0:
    // 0x10cbb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10cbb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10cbb4:
    // 0x10cbb4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10cbb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_10cbb8:
    // 0x10cbb8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10cbb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_10cbbc:
    // 0x10cbbc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10cbbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_10cbc0:
    // 0x10cbc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10cbc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_10cbc4:
    // 0x10cbc4: 0x3e00008  jr          $ra
label_10cbc8:
    if (ctx->pc == 0x10CBC8u) {
        ctx->pc = 0x10CBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CBC4u;
        // 0x10cbc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10CBCCu;
        goto label_10cbcc;
    }
    ctx->pc = 0x10CBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CBC4u;
        // 0x10cbc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CBC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CBCCu;
label_10cbcc:
    // 0x10cbcc: 0x0  nop
    ctx->pc = 0x10cbccu;
    // NOP
    ctx->pc = 0x10cbd0u;
}

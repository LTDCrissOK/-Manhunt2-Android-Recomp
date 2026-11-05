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

// Function: sub_0018CAD8
// Address: 0x18cad8 - 0x18cbe0
void sub_0018CAD8_0x18cad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018CAD8_0x18cad8");
#endif

    switch (ctx->pc) {
        case 0x18cad8u: goto label_18cad8;
        case 0x18cadcu: goto label_18cadc;
        case 0x18cae0u: goto label_18cae0;
        case 0x18cae4u: goto label_18cae4;
        case 0x18cae8u: goto label_18cae8;
        case 0x18caecu: goto label_18caec;
        case 0x18caf0u: goto label_18caf0;
        case 0x18caf4u: goto label_18caf4;
        case 0x18caf8u: goto label_18caf8;
        case 0x18cafcu: goto label_18cafc;
        case 0x18cb00u: goto label_18cb00;
        case 0x18cb04u: goto label_18cb04;
        case 0x18cb08u: goto label_18cb08;
        case 0x18cb0cu: goto label_18cb0c;
        case 0x18cb10u: goto label_18cb10;
        case 0x18cb14u: goto label_18cb14;
        case 0x18cb18u: goto label_18cb18;
        case 0x18cb1cu: goto label_18cb1c;
        case 0x18cb20u: goto label_18cb20;
        case 0x18cb24u: goto label_18cb24;
        case 0x18cb28u: goto label_18cb28;
        case 0x18cb2cu: goto label_18cb2c;
        case 0x18cb30u: goto label_18cb30;
        case 0x18cb34u: goto label_18cb34;
        case 0x18cb38u: goto label_18cb38;
        case 0x18cb3cu: goto label_18cb3c;
        case 0x18cb40u: goto label_18cb40;
        case 0x18cb44u: goto label_18cb44;
        case 0x18cb48u: goto label_18cb48;
        case 0x18cb4cu: goto label_18cb4c;
        case 0x18cb50u: goto label_18cb50;
        case 0x18cb54u: goto label_18cb54;
        case 0x18cb58u: goto label_18cb58;
        case 0x18cb5cu: goto label_18cb5c;
        case 0x18cb60u: goto label_18cb60;
        case 0x18cb64u: goto label_18cb64;
        case 0x18cb68u: goto label_18cb68;
        case 0x18cb6cu: goto label_18cb6c;
        case 0x18cb70u: goto label_18cb70;
        case 0x18cb74u: goto label_18cb74;
        case 0x18cb78u: goto label_18cb78;
        case 0x18cb7cu: goto label_18cb7c;
        case 0x18cb80u: goto label_18cb80;
        case 0x18cb84u: goto label_18cb84;
        case 0x18cb88u: goto label_18cb88;
        case 0x18cb8cu: goto label_18cb8c;
        case 0x18cb90u: goto label_18cb90;
        case 0x18cb94u: goto label_18cb94;
        case 0x18cb98u: goto label_18cb98;
        case 0x18cb9cu: goto label_18cb9c;
        case 0x18cba0u: goto label_18cba0;
        case 0x18cba4u: goto label_18cba4;
        case 0x18cba8u: goto label_18cba8;
        case 0x18cbacu: goto label_18cbac;
        case 0x18cbb0u: goto label_18cbb0;
        case 0x18cbb4u: goto label_18cbb4;
        case 0x18cbb8u: goto label_18cbb8;
        case 0x18cbbcu: goto label_18cbbc;
        case 0x18cbc0u: goto label_18cbc0;
        case 0x18cbc4u: goto label_18cbc4;
        case 0x18cbc8u: goto label_18cbc8;
        case 0x18cbccu: goto label_18cbcc;
        case 0x18cbd0u: goto label_18cbd0;
        case 0x18cbd4u: goto label_18cbd4;
        case 0x18cbd8u: goto label_18cbd8;
        case 0x18cbdcu: goto label_18cbdc;
        default: break;
    }

    ctx->pc = 0x18cad8u;

label_18cad8:
    // 0x18cad8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18cad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18cadc:
    // 0x18cadc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18cadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18cae0:
    // 0x18cae0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18cae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18cae4:
    // 0x18cae4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18cae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_18cae8:
    // 0x18cae8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18cae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_18caec:
    // 0x18caec: 0xc061a12  jal         func_186848
label_18caf0:
    if (ctx->pc == 0x18CAF0u) {
        ctx->pc = 0x18CAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CAECu;
        // 0x18caf0: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CAF4u;
        goto label_18caf4;
    }
    ctx->pc = 0x18CAECu;
    SET_GPR_U32(ctx, 31, 0x18CAF4u);
    ctx->pc = 0x18CAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CAECu;
    // 0x18caf0: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18CAECu, 0x18CAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CAF4u;
label_18caf4:
    // 0x18caf4: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18caf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18caf8:
    // 0x18caf8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18caf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18cafc:
    // 0x18cafc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x18cafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_18cb00:
    // 0x18cb00: 0x40f809  jalr        $v0
label_18cb04:
    if (ctx->pc == 0x18CB04u) {
        ctx->pc = 0x18CB08u;
        goto label_18cb08;
    }
    ctx->pc = 0x18CB00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18CB08u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CB00u, 0x18CB08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18CB08u;
label_18cb08:
    // 0x18cb08: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
label_18cb0c:
    if (ctx->pc == 0x18CB0Cu) {
        ctx->pc = 0x18CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CB08u;
        // 0x18cb0c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CB10u;
        goto label_18cb10;
    }
    ctx->pc = 0x18CB08u;
    {
        const bool branch_taken_0x18cb08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cb08) {
            ctx->pc = 0x18CB0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CB08u;
            // 0x18cb0c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CBC8u;
            goto label_18cbc8;
        }
    }
    ctx->pc = 0x18CB10u;
label_18cb10:
    // 0x18cb10: 0xc061a2a  jal         func_1868A8
label_18cb14:
    if (ctx->pc == 0x18CB14u) {
        ctx->pc = 0x18CB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CB10u;
        // 0x18cb14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CB18u;
        goto label_18cb18;
    }
    ctx->pc = 0x18CB10u;
    SET_GPR_U32(ctx, 31, 0x18CB18u);
    ctx->pc = 0x18CB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CB10u;
    // 0x18cb14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18CB10u, 0x18CB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CB18u;
label_18cb18:
    // 0x18cb18: 0x8c430470  lw          $v1, 0x470($v0)
    ctx->pc = 0x18cb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1136)));
label_18cb1c:
    // 0x18cb1c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x18cb1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_18cb20:
    // 0x18cb20: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_18cb24:
    if (ctx->pc == 0x18CB24u) {
        ctx->pc = 0x18CB28u;
        goto label_18cb28;
    }
    ctx->pc = 0x18CB20u;
    {
        const bool branch_taken_0x18cb20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cb20) {
            ctx->pc = 0x18CB38u;
            goto label_18cb38;
        }
    }
    ctx->pc = 0x18CB28u;
label_18cb28:
    // 0x18cb28: 0xc0633c4  jal         func_18CF10
label_18cb2c:
    if (ctx->pc == 0x18CB2Cu) {
        ctx->pc = 0x18CB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CB28u;
        // 0x18cb2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CB30u;
        goto label_18cb30;
    }
    ctx->pc = 0x18CB28u;
    SET_GPR_U32(ctx, 31, 0x18CB30u);
    ctx->pc = 0x18CB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CB28u;
    // 0x18cb2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CF10u, 0x18CB28u, 0x18CB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CB30u;
label_18cb30:
    // 0x18cb30: 0x10000025  b           . + 4 + (0x25 << 2)
label_18cb34:
    if (ctx->pc == 0x18CB34u) {
        ctx->pc = 0x18CB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CB30u;
        // 0x18cb34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CB38u;
        goto label_18cb38;
    }
    ctx->pc = 0x18CB30u;
    {
        const bool branch_taken_0x18cb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CB30u;
        // 0x18cb34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cb30) {
            ctx->pc = 0x18CBC8u;
            goto label_18cbc8;
        }
    }
    ctx->pc = 0x18CB38u;
label_18cb38:
    // 0x18cb38: 0xc061a12  jal         func_186848
label_18cb3c:
    if (ctx->pc == 0x18CB3Cu) {
        ctx->pc = 0x18CB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CB38u;
        // 0x18cb3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CB40u;
        goto label_18cb40;
    }
    ctx->pc = 0x18CB38u;
    SET_GPR_U32(ctx, 31, 0x18CB40u);
    ctx->pc = 0x18CB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CB38u;
    // 0x18cb3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18CB38u, 0x18CB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CB40u;
label_18cb40:
    // 0x18cb40: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x18cb40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_18cb44:
    // 0x18cb44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18cb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18cb48:
    // 0x18cb48: 0xc60c002c  lwc1        $f12, 0x2C($s0)
    ctx->pc = 0x18cb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_18cb4c:
    // 0x18cb4c: 0xc070d30  jal         func_1C34C0
label_18cb50:
    if (ctx->pc == 0x18CB50u) {
        ctx->pc = 0x18CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CB4Cu;
        // 0x18cb50: 0x8e060030  lw          $a2, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CB54u;
        goto label_18cb54;
    }
    ctx->pc = 0x18CB4Cu;
    SET_GPR_U32(ctx, 31, 0x18CB54u);
    ctx->pc = 0x18CB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CB4Cu;
    // 0x18cb50: 0x8e060030  lw          $a2, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C34C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C34C0u, 0x18CB4Cu, 0x18CB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CB54u;
label_18cb54:
    // 0x18cb54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18cb54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18cb58:
    // 0x18cb58: 0x5220001b  beql        $s1, $zero, . + 4 + (0x1B << 2)
label_18cb5c:
    if (ctx->pc == 0x18CB5Cu) {
        ctx->pc = 0x18CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CB58u;
        // 0x18cb5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CB60u;
        goto label_18cb60;
    }
    ctx->pc = 0x18CB58u;
    {
        const bool branch_taken_0x18cb58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cb58) {
            ctx->pc = 0x18CB5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CB58u;
            // 0x18cb5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CBC8u;
            goto label_18cbc8;
        }
    }
    ctx->pc = 0x18CB60u;
label_18cb60:
    // 0x18cb60: 0xc095306  jal         func_254C18
label_18cb64:
    if (ctx->pc == 0x18CB64u) {
        ctx->pc = 0x18CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CB60u;
        // 0x18cb64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CB68u;
        goto label_18cb68;
    }
    ctx->pc = 0x18CB60u;
    SET_GPR_U32(ctx, 31, 0x18CB68u);
    ctx->pc = 0x18CB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CB60u;
    // 0x18cb64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254C18u, 0x18CB60u, 0x18CB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CB68u;
label_18cb68:
    // 0x18cb68: 0x8c430470  lw          $v1, 0x470($v0)
    ctx->pc = 0x18cb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1136)));
label_18cb6c:
    // 0x18cb6c: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x18cb6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_18cb70:
    // 0x18cb70: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
label_18cb74:
    if (ctx->pc == 0x18CB74u) {
        ctx->pc = 0x18CB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CB70u;
        // 0x18cb74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CB78u;
        goto label_18cb78;
    }
    ctx->pc = 0x18CB70u;
    {
        const bool branch_taken_0x18cb70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18cb70) {
            ctx->pc = 0x18CB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CB70u;
            // 0x18cb74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CBC8u;
            goto label_18cbc8;
        }
    }
    ctx->pc = 0x18CB78u;
label_18cb78:
    // 0x18cb78: 0x8e220fe8  lw          $v0, 0xFE8($s1)
    ctx->pc = 0x18cb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4072)));
label_18cb7c:
    // 0x18cb7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18cb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18cb80:
    // 0x18cb80: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x18cb80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
label_18cb84:
    // 0x18cb84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18cb84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18cb88:
    // 0x18cb88: 0xc45402e0  lwc1        $f20, 0x2E0($v0)
    ctx->pc = 0x18cb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18cb8c:
    // 0x18cb8c: 0xc061a12  jal         func_186848
label_18cb90:
    if (ctx->pc == 0x18CB90u) {
        ctx->pc = 0x18CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CB8Cu;
        // 0x18cb90: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CB94u;
        goto label_18cb94;
    }
    ctx->pc = 0x18CB8Cu;
    SET_GPR_U32(ctx, 31, 0x18CB94u);
    ctx->pc = 0x18CB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CB8Cu;
    // 0x18cb90: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18CB8Cu, 0x18CB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CB94u;
label_18cb94:
    // 0x18cb94: 0xc44002e0  lwc1        $f0, 0x2E0($v0)
    ctx->pc = 0x18cb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18cb98:
    // 0x18cb98: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x18cb98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18cb9c:
    // 0x18cb9c: 0x0  nop
    ctx->pc = 0x18cb9cu;
    // NOP
label_18cba0:
    // 0x18cba0: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_18cba4:
    if (ctx->pc == 0x18CBA4u) {
        ctx->pc = 0x18CBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CBA0u;
        // 0x18cba4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CBA8u;
        goto label_18cba8;
    }
    ctx->pc = 0x18CBA0u;
    {
        const bool branch_taken_0x18cba0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18cba0) {
            ctx->pc = 0x18CBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18CBA0u;
            // 0x18cba4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18CBC8u;
            goto label_18cbc8;
        }
    }
    ctx->pc = 0x18CBA8u;
label_18cba8:
    // 0x18cba8: 0xc095306  jal         func_254C18
label_18cbac:
    if (ctx->pc == 0x18CBACu) {
        ctx->pc = 0x18CBACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CBA8u;
        // 0x18cbac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CBB0u;
        goto label_18cbb0;
    }
    ctx->pc = 0x18CBA8u;
    SET_GPR_U32(ctx, 31, 0x18CBB0u);
    ctx->pc = 0x18CBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CBA8u;
    // 0x18cbac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254C18u, 0x18CBA8u, 0x18CBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CBB0u;
label_18cbb0:
    // 0x18cbb0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x18cbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18cbb4:
    // 0x18cbb4: 0xc0711da  jal         func_1C4768
label_18cbb8:
    if (ctx->pc == 0x18CBB8u) {
        ctx->pc = 0x18CBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CBB4u;
        // 0x18cbb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CBBCu;
        goto label_18cbbc;
    }
    ctx->pc = 0x18CBB4u;
    SET_GPR_U32(ctx, 31, 0x18CBBCu);
    ctx->pc = 0x18CBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CBB4u;
    // 0x18cbb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C4768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4768u, 0x18CBB4u, 0x18CBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CBBCu;
label_18cbbc:
    // 0x18cbbc: 0xc0633c4  jal         func_18CF10
label_18cbc0:
    if (ctx->pc == 0x18CBC0u) {
        ctx->pc = 0x18CBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CBBCu;
        // 0x18cbc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CBC4u;
        goto label_18cbc4;
    }
    ctx->pc = 0x18CBBCu;
    SET_GPR_U32(ctx, 31, 0x18CBC4u);
    ctx->pc = 0x18CBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18CBBCu;
    // 0x18cbc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18CF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CF10u, 0x18CBBCu, 0x18CBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18CBC4u;
label_18cbc4:
    // 0x18cbc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18cbc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18cbc8:
    // 0x18cbc8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18cbc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18cbcc:
    // 0x18cbcc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18cbccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18cbd0:
    // 0x18cbd0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x18cbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18cbd4:
    // 0x18cbd4: 0x3e00008  jr          $ra
label_18cbd8:
    if (ctx->pc == 0x18CBD8u) {
        ctx->pc = 0x18CBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CBD4u;
        // 0x18cbd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18CBDCu;
        goto label_18cbdc;
    }
    ctx->pc = 0x18CBD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18CBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18CBD4u;
        // 0x18cbd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18CBD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18CBDCu;
label_18cbdc:
    // 0x18cbdc: 0x0  nop
    ctx->pc = 0x18cbdcu;
    // NOP
    ctx->pc = 0x18cbe0u;
}

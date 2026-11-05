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

// Function: sub_003AEB10
// Address: 0x3aeb10 - 0x3aec60
void sub_003AEB10_0x3aeb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AEB10_0x3aeb10");
#endif

    switch (ctx->pc) {
        case 0x3aeb10u: goto label_3aeb10;
        case 0x3aeb14u: goto label_3aeb14;
        case 0x3aeb18u: goto label_3aeb18;
        case 0x3aeb1cu: goto label_3aeb1c;
        case 0x3aeb20u: goto label_3aeb20;
        case 0x3aeb24u: goto label_3aeb24;
        case 0x3aeb28u: goto label_3aeb28;
        case 0x3aeb2cu: goto label_3aeb2c;
        case 0x3aeb30u: goto label_3aeb30;
        case 0x3aeb34u: goto label_3aeb34;
        case 0x3aeb38u: goto label_3aeb38;
        case 0x3aeb3cu: goto label_3aeb3c;
        case 0x3aeb40u: goto label_3aeb40;
        case 0x3aeb44u: goto label_3aeb44;
        case 0x3aeb48u: goto label_3aeb48;
        case 0x3aeb4cu: goto label_3aeb4c;
        case 0x3aeb50u: goto label_3aeb50;
        case 0x3aeb54u: goto label_3aeb54;
        case 0x3aeb58u: goto label_3aeb58;
        case 0x3aeb5cu: goto label_3aeb5c;
        case 0x3aeb60u: goto label_3aeb60;
        case 0x3aeb64u: goto label_3aeb64;
        case 0x3aeb68u: goto label_3aeb68;
        case 0x3aeb6cu: goto label_3aeb6c;
        case 0x3aeb70u: goto label_3aeb70;
        case 0x3aeb74u: goto label_3aeb74;
        case 0x3aeb78u: goto label_3aeb78;
        case 0x3aeb7cu: goto label_3aeb7c;
        case 0x3aeb80u: goto label_3aeb80;
        case 0x3aeb84u: goto label_3aeb84;
        case 0x3aeb88u: goto label_3aeb88;
        case 0x3aeb8cu: goto label_3aeb8c;
        case 0x3aeb90u: goto label_3aeb90;
        case 0x3aeb94u: goto label_3aeb94;
        case 0x3aeb98u: goto label_3aeb98;
        case 0x3aeb9cu: goto label_3aeb9c;
        case 0x3aeba0u: goto label_3aeba0;
        case 0x3aeba4u: goto label_3aeba4;
        case 0x3aeba8u: goto label_3aeba8;
        case 0x3aebacu: goto label_3aebac;
        case 0x3aebb0u: goto label_3aebb0;
        case 0x3aebb4u: goto label_3aebb4;
        case 0x3aebb8u: goto label_3aebb8;
        case 0x3aebbcu: goto label_3aebbc;
        case 0x3aebc0u: goto label_3aebc0;
        case 0x3aebc4u: goto label_3aebc4;
        case 0x3aebc8u: goto label_3aebc8;
        case 0x3aebccu: goto label_3aebcc;
        case 0x3aebd0u: goto label_3aebd0;
        case 0x3aebd4u: goto label_3aebd4;
        case 0x3aebd8u: goto label_3aebd8;
        case 0x3aebdcu: goto label_3aebdc;
        case 0x3aebe0u: goto label_3aebe0;
        case 0x3aebe4u: goto label_3aebe4;
        case 0x3aebe8u: goto label_3aebe8;
        case 0x3aebecu: goto label_3aebec;
        case 0x3aebf0u: goto label_3aebf0;
        case 0x3aebf4u: goto label_3aebf4;
        case 0x3aebf8u: goto label_3aebf8;
        case 0x3aebfcu: goto label_3aebfc;
        case 0x3aec00u: goto label_3aec00;
        case 0x3aec04u: goto label_3aec04;
        case 0x3aec08u: goto label_3aec08;
        case 0x3aec0cu: goto label_3aec0c;
        case 0x3aec10u: goto label_3aec10;
        case 0x3aec14u: goto label_3aec14;
        case 0x3aec18u: goto label_3aec18;
        case 0x3aec1cu: goto label_3aec1c;
        case 0x3aec20u: goto label_3aec20;
        case 0x3aec24u: goto label_3aec24;
        case 0x3aec28u: goto label_3aec28;
        case 0x3aec2cu: goto label_3aec2c;
        case 0x3aec30u: goto label_3aec30;
        case 0x3aec34u: goto label_3aec34;
        case 0x3aec38u: goto label_3aec38;
        case 0x3aec3cu: goto label_3aec3c;
        case 0x3aec40u: goto label_3aec40;
        case 0x3aec44u: goto label_3aec44;
        case 0x3aec48u: goto label_3aec48;
        case 0x3aec4cu: goto label_3aec4c;
        case 0x3aec50u: goto label_3aec50;
        case 0x3aec54u: goto label_3aec54;
        case 0x3aec58u: goto label_3aec58;
        case 0x3aec5cu: goto label_3aec5c;
        default: break;
    }

    ctx->pc = 0x3aeb10u;

label_3aeb10:
    // 0x3aeb10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3aeb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3aeb14:
    // 0x3aeb14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3aeb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3aeb18:
    // 0x3aeb18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3aeb18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3aeb1c:
    // 0x3aeb1c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3aeb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_3aeb20:
    // 0x3aeb20: 0x86030098  lh          $v1, 0x98($s0)
    ctx->pc = 0x3aeb20u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 152)));
label_3aeb24:
    // 0x3aeb24: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_3aeb28:
    if (ctx->pc == 0x3AEB28u) {
        ctx->pc = 0x3AEB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEB24u;
        // 0x3aeb28: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEB2Cu;
        goto label_3aeb2c;
    }
    ctx->pc = 0x3AEB24u;
    {
        const bool branch_taken_0x3aeb24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3aeb24) {
            ctx->pc = 0x3AEB28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEB24u;
            // 0x3aeb28: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AEB40u;
            goto label_3aeb40;
        }
    }
    ctx->pc = 0x3AEB2Cu;
label_3aeb2c:
    // 0x3aeb2c: 0xc0eba70  jal         func_3AE9C0
label_3aeb30:
    if (ctx->pc == 0x3AEB30u) {
        ctx->pc = 0x3AEB34u;
        goto label_3aeb34;
    }
    ctx->pc = 0x3AEB2Cu;
    SET_GPR_U32(ctx, 31, 0x3AEB34u);
    ctx->pc = 0x3AE9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE9C0u, 0x3AEB2Cu, 0x3AEB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEB34u;
label_3aeb34:
    // 0x3aeb34: 0x10000025  b           . + 4 + (0x25 << 2)
label_3aeb38:
    if (ctx->pc == 0x3AEB38u) {
        ctx->pc = 0x3AEB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEB34u;
        // 0x3aeb38: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEB3Cu;
        goto label_3aeb3c;
    }
    ctx->pc = 0x3AEB34u;
    {
        const bool branch_taken_0x3aeb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEB34u;
        // 0x3aeb38: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aeb34) {
            ctx->pc = 0x3AEBCCu;
            goto label_3aebcc;
        }
    }
    ctx->pc = 0x3AEB3Cu;
label_3aeb3c:
    // 0x3aeb3c: 0x0  nop
    ctx->pc = 0x3aeb3cu;
    // NOP
label_3aeb40:
    // 0x3aeb40: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_3aeb44:
    if (ctx->pc == 0x3AEB44u) {
        ctx->pc = 0x3AEB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEB40u;
        // 0x3aeb44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEB48u;
        goto label_3aeb48;
    }
    ctx->pc = 0x3AEB40u;
    {
        const bool branch_taken_0x3aeb40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3aeb40) {
            ctx->pc = 0x3AEB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEB40u;
            // 0x3aeb44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AEB58u;
            goto label_3aeb58;
        }
    }
    ctx->pc = 0x3AEB48u;
label_3aeb48:
    // 0x3aeb48: 0xc0eb5ea  jal         func_3AD7A8
label_3aeb4c:
    if (ctx->pc == 0x3AEB4Cu) {
        ctx->pc = 0x3AEB50u;
        goto label_3aeb50;
    }
    ctx->pc = 0x3AEB48u;
    SET_GPR_U32(ctx, 31, 0x3AEB50u);
    ctx->pc = 0x3AD7A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD7A8u, 0x3AEB48u, 0x3AEB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEB50u;
label_3aeb50:
    // 0x3aeb50: 0x1000001e  b           . + 4 + (0x1E << 2)
label_3aeb54:
    if (ctx->pc == 0x3AEB54u) {
        ctx->pc = 0x3AEB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEB50u;
        // 0x3aeb54: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEB58u;
        goto label_3aeb58;
    }
    ctx->pc = 0x3AEB50u;
    {
        const bool branch_taken_0x3aeb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEB50u;
        // 0x3aeb54: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aeb50) {
            ctx->pc = 0x3AEBCCu;
            goto label_3aebcc;
        }
    }
    ctx->pc = 0x3AEB58u;
label_3aeb58:
    // 0x3aeb58: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_3aeb5c:
    if (ctx->pc == 0x3AEB5Cu) {
        ctx->pc = 0x3AEB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEB58u;
        // 0x3aeb5c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEB60u;
        goto label_3aeb60;
    }
    ctx->pc = 0x3AEB58u;
    {
        const bool branch_taken_0x3aeb58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3aeb58) {
            ctx->pc = 0x3AEB5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEB58u;
            // 0x3aeb5c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AEB70u;
            goto label_3aeb70;
        }
    }
    ctx->pc = 0x3AEB60u;
label_3aeb60:
    // 0x3aeb60: 0xc0ebb9e  jal         func_3AEE78
label_3aeb64:
    if (ctx->pc == 0x3AEB64u) {
        ctx->pc = 0x3AEB68u;
        goto label_3aeb68;
    }
    ctx->pc = 0x3AEB60u;
    SET_GPR_U32(ctx, 31, 0x3AEB68u);
    ctx->pc = 0x3AEE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AEE78u, 0x3AEB60u, 0x3AEB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEB68u;
label_3aeb68:
    // 0x3aeb68: 0x10000018  b           . + 4 + (0x18 << 2)
label_3aeb6c:
    if (ctx->pc == 0x3AEB6Cu) {
        ctx->pc = 0x3AEB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEB68u;
        // 0x3aeb6c: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEB70u;
        goto label_3aeb70;
    }
    ctx->pc = 0x3AEB68u;
    {
        const bool branch_taken_0x3aeb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEB68u;
        // 0x3aeb6c: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aeb68) {
            ctx->pc = 0x3AEBCCu;
            goto label_3aebcc;
        }
    }
    ctx->pc = 0x3AEB70u;
label_3aeb70:
    // 0x3aeb70: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_3aeb74:
    if (ctx->pc == 0x3AEB74u) {
        ctx->pc = 0x3AEB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEB70u;
        // 0x3aeb74: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEB78u;
        goto label_3aeb78;
    }
    ctx->pc = 0x3AEB70u;
    {
        const bool branch_taken_0x3aeb70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3aeb70) {
            ctx->pc = 0x3AEB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEB70u;
            // 0x3aeb74: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AEB88u;
            goto label_3aeb88;
        }
    }
    ctx->pc = 0x3AEB78u;
label_3aeb78:
    // 0x3aeb78: 0xc0ed1e2  jal         func_3B4788
label_3aeb7c:
    if (ctx->pc == 0x3AEB7Cu) {
        ctx->pc = 0x3AEB80u;
        goto label_3aeb80;
    }
    ctx->pc = 0x3AEB78u;
    SET_GPR_U32(ctx, 31, 0x3AEB80u);
    ctx->pc = 0x3B4788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4788u, 0x3AEB78u, 0x3AEB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEB80u;
label_3aeb80:
    // 0x3aeb80: 0x10000012  b           . + 4 + (0x12 << 2)
label_3aeb84:
    if (ctx->pc == 0x3AEB84u) {
        ctx->pc = 0x3AEB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEB80u;
        // 0x3aeb84: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEB88u;
        goto label_3aeb88;
    }
    ctx->pc = 0x3AEB80u;
    {
        const bool branch_taken_0x3aeb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEB80u;
        // 0x3aeb84: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aeb80) {
            ctx->pc = 0x3AEBCCu;
            goto label_3aebcc;
        }
    }
    ctx->pc = 0x3AEB88u;
label_3aeb88:
    // 0x3aeb88: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_3aeb8c:
    if (ctx->pc == 0x3AEB8Cu) {
        ctx->pc = 0x3AEB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEB88u;
        // 0x3aeb8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEB90u;
        goto label_3aeb90;
    }
    ctx->pc = 0x3AEB88u;
    {
        const bool branch_taken_0x3aeb88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3aeb88) {
            ctx->pc = 0x3AEB8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEB88u;
            // 0x3aeb8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AEBA0u;
            goto label_3aeba0;
        }
    }
    ctx->pc = 0x3AEB90u;
label_3aeb90:
    // 0x3aeb90: 0xc0ed480  jal         func_3B5200
label_3aeb94:
    if (ctx->pc == 0x3AEB94u) {
        ctx->pc = 0x3AEB98u;
        goto label_3aeb98;
    }
    ctx->pc = 0x3AEB90u;
    SET_GPR_U32(ctx, 31, 0x3AEB98u);
    ctx->pc = 0x3B5200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5200u, 0x3AEB90u, 0x3AEB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEB98u;
label_3aeb98:
    // 0x3aeb98: 0x1000000c  b           . + 4 + (0xC << 2)
label_3aeb9c:
    if (ctx->pc == 0x3AEB9Cu) {
        ctx->pc = 0x3AEB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEB98u;
        // 0x3aeb9c: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEBA0u;
        goto label_3aeba0;
    }
    ctx->pc = 0x3AEB98u;
    {
        const bool branch_taken_0x3aeb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEB98u;
        // 0x3aeb9c: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aeb98) {
            ctx->pc = 0x3AEBCCu;
            goto label_3aebcc;
        }
    }
    ctx->pc = 0x3AEBA0u;
label_3aeba0:
    // 0x3aeba0: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_3aeba4:
    if (ctx->pc == 0x3AEBA4u) {
        ctx->pc = 0x3AEBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEBA0u;
        // 0x3aeba4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEBA8u;
        goto label_3aeba8;
    }
    ctx->pc = 0x3AEBA0u;
    {
        const bool branch_taken_0x3aeba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3aeba0) {
            ctx->pc = 0x3AEBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEBA0u;
            // 0x3aeba4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AEBB8u;
            goto label_3aebb8;
        }
    }
    ctx->pc = 0x3AEBA8u;
label_3aeba8:
    // 0x3aeba8: 0xc0ebe22  jal         func_3AF888
label_3aebac:
    if (ctx->pc == 0x3AEBACu) {
        ctx->pc = 0x3AEBB0u;
        goto label_3aebb0;
    }
    ctx->pc = 0x3AEBA8u;
    SET_GPR_U32(ctx, 31, 0x3AEBB0u);
    ctx->pc = 0x3AF888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF888u, 0x3AEBA8u, 0x3AEBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEBB0u;
label_3aebb0:
    // 0x3aebb0: 0x10000006  b           . + 4 + (0x6 << 2)
label_3aebb4:
    if (ctx->pc == 0x3AEBB4u) {
        ctx->pc = 0x3AEBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEBB0u;
        // 0x3aebb4: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEBB8u;
        goto label_3aebb8;
    }
    ctx->pc = 0x3AEBB0u;
    {
        const bool branch_taken_0x3aebb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEBB0u;
        // 0x3aebb4: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aebb0) {
            ctx->pc = 0x3AEBCCu;
            goto label_3aebcc;
        }
    }
    ctx->pc = 0x3AEBB8u;
label_3aebb8:
    // 0x3aebb8: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_3aebbc:
    if (ctx->pc == 0x3AEBBCu) {
        ctx->pc = 0x3AEBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEBB8u;
        // 0x3aebbc: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEBC0u;
        goto label_3aebc0;
    }
    ctx->pc = 0x3AEBB8u;
    {
        const bool branch_taken_0x3aebb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3aebb8) {
            ctx->pc = 0x3AEBBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AEBB8u;
            // 0x3aebbc: 0x8e0200fc  lw          $v0, 0xFC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AEBCCu;
            goto label_3aebcc;
        }
    }
    ctx->pc = 0x3AEBC0u;
label_3aebc0:
    // 0x3aebc0: 0xc0eb56a  jal         func_3AD5A8
label_3aebc4:
    if (ctx->pc == 0x3AEBC4u) {
        ctx->pc = 0x3AEBC8u;
        goto label_3aebc8;
    }
    ctx->pc = 0x3AEBC0u;
    SET_GPR_U32(ctx, 31, 0x3AEBC8u);
    ctx->pc = 0x3AD5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD5A8u, 0x3AEBC0u, 0x3AEBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AEBC8u;
label_3aebc8:
    // 0x3aebc8: 0x8e0200fc  lw          $v0, 0xFC($s0)
    ctx->pc = 0x3aebc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_3aebcc:
    // 0x3aebcc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3aebd0:
    if (ctx->pc == 0x3AEBD0u) {
        ctx->pc = 0x3AEBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEBCCu;
        // 0x3aebd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEBD4u;
        goto label_3aebd4;
    }
    ctx->pc = 0x3AEBCCu;
    {
        const bool branch_taken_0x3aebcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AEBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEBCCu;
        // 0x3aebd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aebcc) {
            ctx->pc = 0x3AEBE8u;
            goto label_3aebe8;
        }
    }
    ctx->pc = 0x3AEBD4u;
label_3aebd4:
    // 0x3aebd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3aebd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3aebd8:
    // 0x3aebd8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3aebd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3aebdc:
    // 0x3aebdc: 0x80ebafe  j           func_3AEBF8
label_3aebe0:
    if (ctx->pc == 0x3AEBE0u) {
        ctx->pc = 0x3AEBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEBDCu;
        // 0x3aebe0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEBE4u;
        goto label_3aebe4;
    }
    ctx->pc = 0x3AEBDCu;
    ctx->pc = 0x3AEBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AEBDCu;
    // 0x3aebe0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AEBF8u;
    goto label_3aebf8;
    ctx->pc = 0x3AEBE4u;
label_3aebe4:
    // 0x3aebe4: 0x0  nop
    ctx->pc = 0x3aebe4u;
    // NOP
label_3aebe8:
    // 0x3aebe8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3aebe8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3aebec:
    // 0x3aebec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3aebecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3aebf0:
    // 0x3aebf0: 0x3e00008  jr          $ra
label_3aebf4:
    if (ctx->pc == 0x3AEBF4u) {
        ctx->pc = 0x3AEBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEBF0u;
        // 0x3aebf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEBF8u;
        goto label_3aebf8;
    }
    ctx->pc = 0x3AEBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AEBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEBF0u;
        // 0x3aebf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AEBF8u;
label_3aebf8:
    // 0x3aebf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3aebf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3aebfc:
    // 0x3aebfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3aebfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3aec00:
    // 0x3aec00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3aec00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3aec04:
    // 0x3aec04: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3aec04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_3aec08:
    // 0x3aec08: 0x8202000e  lb          $v0, 0xE($s0)
    ctx->pc = 0x3aec08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_3aec0c:
    // 0x3aec0c: 0x8e060090  lw          $a2, 0x90($s0)
    ctx->pc = 0x3aec0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_3aec10:
    // 0x3aec10: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x3aec10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_3aec14:
    // 0x3aec14: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x3aec14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_3aec18:
    // 0x3aec18: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x3aec18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_3aec1c:
    // 0x3aec1c: 0x8e0700fc  lw          $a3, 0xFC($s0)
    ctx->pc = 0x3aec1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_3aec20:
    // 0x3aec20: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x3aec20u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_3aec24:
    // 0x3aec24: 0x8e040100  lw          $a0, 0x100($s0)
    ctx->pc = 0x3aec24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_3aec28:
    // 0x3aec28: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x3aec28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_3aec2c:
    // 0x3aec2c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3aec2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3aec30:
    // 0x3aec30: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3aec30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3aec34:
    // 0x3aec34: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x3aec34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
label_3aec38:
    // 0x3aec38: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x3aec38u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_3aec3c:
    // 0x3aec3c: 0xe0f809  jalr        $a3
label_3aec40:
    if (ctx->pc == 0x3AEC40u) {
        ctx->pc = 0x3AEC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEC3Cu;
        // 0x3aec40: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEC44u;
        goto label_3aec44;
    }
    ctx->pc = 0x3AEC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x3AEC44u);
        ctx->pc = 0x3AEC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEC3Cu;
        // 0x3aec40: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEC3Cu, 0x3AEC44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AEC44u;
label_3aec44:
    // 0x3aec44: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x3aec44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_3aec48:
    // 0x3aec48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3aec48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3aec4c:
    // 0x3aec4c: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x3aec4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
label_3aec50:
    // 0x3aec50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3aec50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3aec54:
    // 0x3aec54: 0x3e00008  jr          $ra
label_3aec58:
    if (ctx->pc == 0x3AEC58u) {
        ctx->pc = 0x3AEC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEC54u;
        // 0x3aec58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AEC5Cu;
        goto label_3aec5c;
    }
    ctx->pc = 0x3AEC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AEC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AEC54u;
        // 0x3aec58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AEC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AEC5Cu;
label_3aec5c:
    // 0x3aec5c: 0x0  nop
    ctx->pc = 0x3aec5cu;
    // NOP
    ctx->pc = 0x3aec60u;
}

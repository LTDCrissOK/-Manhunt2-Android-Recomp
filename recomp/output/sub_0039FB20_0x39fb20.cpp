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

// Function: sub_0039FB20
// Address: 0x39fb20 - 0x39fcb8
void sub_0039FB20_0x39fb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039FB20_0x39fb20");
#endif

    switch (ctx->pc) {
        case 0x39fb20u: goto label_39fb20;
        case 0x39fb24u: goto label_39fb24;
        case 0x39fb28u: goto label_39fb28;
        case 0x39fb2cu: goto label_39fb2c;
        case 0x39fb30u: goto label_39fb30;
        case 0x39fb34u: goto label_39fb34;
        case 0x39fb38u: goto label_39fb38;
        case 0x39fb3cu: goto label_39fb3c;
        case 0x39fb40u: goto label_39fb40;
        case 0x39fb44u: goto label_39fb44;
        case 0x39fb48u: goto label_39fb48;
        case 0x39fb4cu: goto label_39fb4c;
        case 0x39fb50u: goto label_39fb50;
        case 0x39fb54u: goto label_39fb54;
        case 0x39fb58u: goto label_39fb58;
        case 0x39fb5cu: goto label_39fb5c;
        case 0x39fb60u: goto label_39fb60;
        case 0x39fb64u: goto label_39fb64;
        case 0x39fb68u: goto label_39fb68;
        case 0x39fb6cu: goto label_39fb6c;
        case 0x39fb70u: goto label_39fb70;
        case 0x39fb74u: goto label_39fb74;
        case 0x39fb78u: goto label_39fb78;
        case 0x39fb7cu: goto label_39fb7c;
        case 0x39fb80u: goto label_39fb80;
        case 0x39fb84u: goto label_39fb84;
        case 0x39fb88u: goto label_39fb88;
        case 0x39fb8cu: goto label_39fb8c;
        case 0x39fb90u: goto label_39fb90;
        case 0x39fb94u: goto label_39fb94;
        case 0x39fb98u: goto label_39fb98;
        case 0x39fb9cu: goto label_39fb9c;
        case 0x39fba0u: goto label_39fba0;
        case 0x39fba4u: goto label_39fba4;
        case 0x39fba8u: goto label_39fba8;
        case 0x39fbacu: goto label_39fbac;
        case 0x39fbb0u: goto label_39fbb0;
        case 0x39fbb4u: goto label_39fbb4;
        case 0x39fbb8u: goto label_39fbb8;
        case 0x39fbbcu: goto label_39fbbc;
        case 0x39fbc0u: goto label_39fbc0;
        case 0x39fbc4u: goto label_39fbc4;
        case 0x39fbc8u: goto label_39fbc8;
        case 0x39fbccu: goto label_39fbcc;
        case 0x39fbd0u: goto label_39fbd0;
        case 0x39fbd4u: goto label_39fbd4;
        case 0x39fbd8u: goto label_39fbd8;
        case 0x39fbdcu: goto label_39fbdc;
        case 0x39fbe0u: goto label_39fbe0;
        case 0x39fbe4u: goto label_39fbe4;
        case 0x39fbe8u: goto label_39fbe8;
        case 0x39fbecu: goto label_39fbec;
        case 0x39fbf0u: goto label_39fbf0;
        case 0x39fbf4u: goto label_39fbf4;
        case 0x39fbf8u: goto label_39fbf8;
        case 0x39fbfcu: goto label_39fbfc;
        case 0x39fc00u: goto label_39fc00;
        case 0x39fc04u: goto label_39fc04;
        case 0x39fc08u: goto label_39fc08;
        case 0x39fc0cu: goto label_39fc0c;
        case 0x39fc10u: goto label_39fc10;
        case 0x39fc14u: goto label_39fc14;
        case 0x39fc18u: goto label_39fc18;
        case 0x39fc1cu: goto label_39fc1c;
        case 0x39fc20u: goto label_39fc20;
        case 0x39fc24u: goto label_39fc24;
        case 0x39fc28u: goto label_39fc28;
        case 0x39fc2cu: goto label_39fc2c;
        case 0x39fc30u: goto label_39fc30;
        case 0x39fc34u: goto label_39fc34;
        case 0x39fc38u: goto label_39fc38;
        case 0x39fc3cu: goto label_39fc3c;
        case 0x39fc40u: goto label_39fc40;
        case 0x39fc44u: goto label_39fc44;
        case 0x39fc48u: goto label_39fc48;
        case 0x39fc4cu: goto label_39fc4c;
        case 0x39fc50u: goto label_39fc50;
        case 0x39fc54u: goto label_39fc54;
        case 0x39fc58u: goto label_39fc58;
        case 0x39fc5cu: goto label_39fc5c;
        case 0x39fc60u: goto label_39fc60;
        case 0x39fc64u: goto label_39fc64;
        case 0x39fc68u: goto label_39fc68;
        case 0x39fc6cu: goto label_39fc6c;
        case 0x39fc70u: goto label_39fc70;
        case 0x39fc74u: goto label_39fc74;
        case 0x39fc78u: goto label_39fc78;
        case 0x39fc7cu: goto label_39fc7c;
        case 0x39fc80u: goto label_39fc80;
        case 0x39fc84u: goto label_39fc84;
        case 0x39fc88u: goto label_39fc88;
        case 0x39fc8cu: goto label_39fc8c;
        case 0x39fc90u: goto label_39fc90;
        case 0x39fc94u: goto label_39fc94;
        case 0x39fc98u: goto label_39fc98;
        case 0x39fc9cu: goto label_39fc9c;
        case 0x39fca0u: goto label_39fca0;
        case 0x39fca4u: goto label_39fca4;
        case 0x39fca8u: goto label_39fca8;
        case 0x39fcacu: goto label_39fcac;
        case 0x39fcb0u: goto label_39fcb0;
        case 0x39fcb4u: goto label_39fcb4;
        default: break;
    }

    ctx->pc = 0x39fb20u;

label_39fb20:
    // 0x39fb20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39fb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_39fb24:
    // 0x39fb24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39fb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39fb28:
    // 0x39fb28: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x39fb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_39fb2c:
    // 0x39fb2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39fb2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39fb30:
    // 0x39fb30: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x39fb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_39fb34:
    // 0x39fb34: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x39fb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_39fb38:
    // 0x39fb38: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x39fb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_39fb3c:
    // 0x39fb3c: 0x8e0201ac  lw          $v0, 0x1AC($s0)
    ctx->pc = 0x39fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
label_39fb40:
    // 0x39fb40: 0x10430004  beq         $v0, $v1, . + 4 + (0x4 << 2)
label_39fb44:
    if (ctx->pc == 0x39FB44u) {
        ctx->pc = 0x39FB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FB40u;
        // 0x39fb44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FB48u;
        goto label_39fb48;
    }
    ctx->pc = 0x39FB40u;
    {
        const bool branch_taken_0x39fb40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x39FB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FB40u;
        // 0x39fb44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fb40) {
            ctx->pc = 0x39FB54u;
            goto label_39fb54;
        }
    }
    ctx->pc = 0x39FB48u;
label_39fb48:
    // 0x39fb48: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x39fb48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_39fb4c:
    // 0x39fb4c: 0x54620054  bnel        $v1, $v0, . + 4 + (0x54 << 2)
label_39fb50:
    if (ctx->pc == 0x39FB50u) {
        ctx->pc = 0x39FB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FB4Cu;
        // 0x39fb50: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FB54u;
        goto label_39fb54;
    }
    ctx->pc = 0x39FB4Cu;
    {
        const bool branch_taken_0x39fb4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39fb4c) {
            ctx->pc = 0x39FB50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FB4Cu;
            // 0x39fb50: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FCA0u;
            goto label_39fca0;
        }
    }
    ctx->pc = 0x39FB54u;
label_39fb54:
    // 0x39fb54: 0x8e020270  lw          $v0, 0x270($s0)
    ctx->pc = 0x39fb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
label_39fb58:
    // 0x39fb58: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_39fb5c:
    if (ctx->pc == 0x39FB5Cu) {
        ctx->pc = 0x39FB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FB58u;
        // 0x39fb5c: 0x8e0201bc  lw          $v0, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FB60u;
        goto label_39fb60;
    }
    ctx->pc = 0x39FB58u;
    {
        const bool branch_taken_0x39fb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39fb58) {
            ctx->pc = 0x39FB5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FB58u;
            // 0x39fb5c: 0x8e0201bc  lw          $v0, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FB90u;
            goto label_39fb90;
        }
    }
    ctx->pc = 0x39FB60u;
label_39fb60:
    // 0x39fb60: 0xc0e8302  jal         func_3A0C08
label_39fb64:
    if (ctx->pc == 0x39FB64u) {
        ctx->pc = 0x39FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FB60u;
        // 0x39fb64: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FB68u;
        goto label_39fb68;
    }
    ctx->pc = 0x39FB60u;
    SET_GPR_U32(ctx, 31, 0x39FB68u);
    ctx->pc = 0x39FB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FB60u;
    // 0x39fb64: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0C08u, 0x39FB60u, 0x39FB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FB68u;
label_39fb68:
    // 0x39fb68: 0x8e030270  lw          $v1, 0x270($s0)
    ctx->pc = 0x39fb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
label_39fb6c:
    // 0x39fb6c: 0x8e040274  lw          $a0, 0x274($s0)
    ctx->pc = 0x39fb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
label_39fb70:
    // 0x39fb70: 0x2446ffff  addiu       $a2, $v0, -0x1
    ctx->pc = 0x39fb70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_39fb74:
    // 0x39fb74: 0x60f809  jalr        $v1
label_39fb78:
    if (ctx->pc == 0x39FB78u) {
        ctx->pc = 0x39FB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FB74u;
        // 0x39fb78: 0x8e0501bc  lw          $a1, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FB7Cu;
        goto label_39fb7c;
    }
    ctx->pc = 0x39FB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39FB7Cu);
        ctx->pc = 0x39FB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FB74u;
        // 0x39fb78: 0x8e0501bc  lw          $a1, 0x1BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FB74u, 0x39FB7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39FB7Cu;
label_39fb7c:
    // 0x39fb7c: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
label_39fb80:
    if (ctx->pc == 0x39FB80u) {
        ctx->pc = 0x39FB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FB7Cu;
        // 0x39fb80: 0xae0201bc  sw          $v0, 0x1BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FB84u;
        goto label_39fb84;
    }
    ctx->pc = 0x39FB7Cu;
    {
        const bool branch_taken_0x39fb7c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x39FB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FB7Cu;
        // 0x39fb80: 0xae0201bc  sw          $v0, 0x1BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fb7c) {
            ctx->pc = 0x39FB98u;
            goto label_39fb98;
        }
    }
    ctx->pc = 0x39FB84u;
label_39fb84:
    // 0x39fb84: 0xa20001b0  sb          $zero, 0x1B0($s0)
    ctx->pc = 0x39fb84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 432), (uint8_t)GPR_U32(ctx, 0));
label_39fb88:
    // 0x39fb88: 0x10000003  b           . + 4 + (0x3 << 2)
label_39fb8c:
    if (ctx->pc == 0x39FB8Cu) {
        ctx->pc = 0x39FB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FB88u;
        // 0x39fb8c: 0xa20001b1  sb          $zero, 0x1B1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 433), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FB90u;
        goto label_39fb90;
    }
    ctx->pc = 0x39FB88u;
    {
        const bool branch_taken_0x39fb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FB88u;
        // 0x39fb8c: 0xa20001b1  sb          $zero, 0x1B1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 433), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fb88) {
            ctx->pc = 0x39FB98u;
            goto label_39fb98;
        }
    }
    ctx->pc = 0x39FB90u;
label_39fb90:
    // 0x39fb90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x39fb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_39fb94:
    // 0x39fb94: 0xae0201bc  sw          $v0, 0x1BC($s0)
    ctx->pc = 0x39fb94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
label_39fb98:
    // 0x39fb98: 0x820301b0  lb          $v1, 0x1B0($s0)
    ctx->pc = 0x39fb98u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_39fb9c:
    // 0x39fb9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39fba0:
    // 0x39fba0: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
label_39fba4:
    if (ctx->pc == 0x39FBA4u) {
        ctx->pc = 0x39FBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FBA0u;
        // 0x39fba4: 0x821201b1  lb          $s2, 0x1B1($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 433)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FBA8u;
        goto label_39fba8;
    }
    ctx->pc = 0x39FBA0u;
    {
        const bool branch_taken_0x39fba0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39fba0) {
            ctx->pc = 0x39FBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FBA0u;
            // 0x39fba4: 0x821201b1  lb          $s2, 0x1B1($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 433)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FBCCu;
            goto label_39fbcc;
        }
    }
    ctx->pc = 0x39FBA8u;
label_39fba8:
    // 0x39fba8: 0x8e0201bc  lw          $v0, 0x1BC($s0)
    ctx->pc = 0x39fba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_39fbac:
    // 0x39fbac: 0x8e0301c8  lw          $v1, 0x1C8($s0)
    ctx->pc = 0x39fbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
label_39fbb0:
    // 0x39fbb0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x39fbb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_39fbb4:
    // 0x39fbb4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_39fbb8:
    if (ctx->pc == 0x39FBB8u) {
        ctx->pc = 0x39FBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FBB4u;
        // 0x39fbb8: 0x821201b1  lb          $s2, 0x1B1($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 433)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FBBCu;
        goto label_39fbbc;
    }
    ctx->pc = 0x39FBB4u;
    {
        const bool branch_taken_0x39fbb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39fbb4) {
            ctx->pc = 0x39FBB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FBB4u;
            // 0x39fbb8: 0x821201b1  lb          $s2, 0x1B1($s0) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 433)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FBC8u;
            goto label_39fbc8;
        }
    }
    ctx->pc = 0x39FBBCu;
label_39fbbc:
    // 0x39fbbc: 0x8e0201c4  lw          $v0, 0x1C4($s0)
    ctx->pc = 0x39fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
label_39fbc0:
    // 0x39fbc0: 0xae0201bc  sw          $v0, 0x1BC($s0)
    ctx->pc = 0x39fbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
label_39fbc4:
    // 0x39fbc4: 0x821201b1  lb          $s2, 0x1B1($s0)
    ctx->pc = 0x39fbc4u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 433)));
label_39fbc8:
    // 0x39fbc8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39fbcc:
    // 0x39fbcc: 0x56420034  bnel        $s2, $v0, . + 4 + (0x34 << 2)
label_39fbd0:
    if (ctx->pc == 0x39FBD0u) {
        ctx->pc = 0x39FBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FBCCu;
        // 0x39fbd0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FBD4u;
        goto label_39fbd4;
    }
    ctx->pc = 0x39FBCCu;
    {
        const bool branch_taken_0x39fbcc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x39fbcc) {
            ctx->pc = 0x39FBD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FBCCu;
            // 0x39fbd0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FCA0u;
            goto label_39fca0;
        }
    }
    ctx->pc = 0x39FBD4u;
label_39fbd4:
    // 0x39fbd4: 0xc0e8302  jal         func_3A0C08
label_39fbd8:
    if (ctx->pc == 0x39FBD8u) {
        ctx->pc = 0x39FBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FBD4u;
        // 0x39fbd8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FBDCu;
        goto label_39fbdc;
    }
    ctx->pc = 0x39FBD4u;
    SET_GPR_U32(ctx, 31, 0x39FBDCu);
    ctx->pc = 0x39FBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FBD4u;
    // 0x39fbd8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0C08u, 0x39FBD4u, 0x39FBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FBDCu;
label_39fbdc:
    // 0x39fbdc: 0x8e0301bc  lw          $v1, 0x1BC($s0)
    ctx->pc = 0x39fbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_39fbe0:
    // 0x39fbe0: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x39fbe0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_39fbe4:
    // 0x39fbe4: 0x5060002e  beql        $v1, $zero, . + 4 + (0x2E << 2)
label_39fbe8:
    if (ctx->pc == 0x39FBE8u) {
        ctx->pc = 0x39FBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FBE4u;
        // 0x39fbe8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FBECu;
        goto label_39fbec;
    }
    ctx->pc = 0x39FBE4u;
    {
        const bool branch_taken_0x39fbe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39fbe4) {
            ctx->pc = 0x39FBE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FBE4u;
            // 0x39fbe8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FCA0u;
            goto label_39fca0;
        }
    }
    ctx->pc = 0x39FBECu;
label_39fbec:
    // 0x39fbec: 0xc0ecbe4  jal         func_3B2F90
label_39fbf0:
    if (ctx->pc == 0x39FBF0u) {
        ctx->pc = 0x39FBF4u;
        goto label_39fbf4;
    }
    ctx->pc = 0x39FBECu;
    SET_GPR_U32(ctx, 31, 0x39FBF4u);
    ctx->pc = 0x3B2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2F90u, 0x39FBECu, 0x39FBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FBF4u;
label_39fbf4:
    // 0x39fbf4: 0x8e1101bc  lw          $s1, 0x1BC($s0)
    ctx->pc = 0x39fbf4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_39fbf8:
    // 0x39fbf8: 0xc0e8314  jal         func_3A0C50
label_39fbfc:
    if (ctx->pc == 0x39FBFCu) {
        ctx->pc = 0x39FBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FBF8u;
        // 0x39fbfc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FC00u;
        goto label_39fc00;
    }
    ctx->pc = 0x39FBF8u;
    SET_GPR_U32(ctx, 31, 0x39FC00u);
    ctx->pc = 0x39FBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FBF8u;
    // 0x39fbfc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0C50u, 0x39FBF8u, 0x39FC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FC00u;
label_39fc00:
    // 0x39fc00: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_39fc04:
    if (ctx->pc == 0x39FC04u) {
        ctx->pc = 0x39FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC00u;
        // 0x39fc04: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FC08u;
        goto label_39fc08;
    }
    ctx->pc = 0x39FC00u;
    {
        const bool branch_taken_0x39fc00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39fc00) {
            ctx->pc = 0x39FC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FC00u;
            // 0x39fc04: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FC18u;
            goto label_39fc18;
        }
    }
    ctx->pc = 0x39FC08u;
label_39fc08:
    // 0x39fc08: 0x5052001b  beql        $v0, $s2, . + 4 + (0x1B << 2)
label_39fc0c:
    if (ctx->pc == 0x39FC0Cu) {
        ctx->pc = 0x39FC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC08u;
        // 0x39fc0c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FC10u;
        goto label_39fc10;
    }
    ctx->pc = 0x39FC08u;
    {
        const bool branch_taken_0x39fc08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x39fc08) {
            ctx->pc = 0x39FC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FC08u;
            // 0x39fc0c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FC78u;
            goto label_39fc78;
        }
    }
    ctx->pc = 0x39FC10u;
label_39fc10:
    // 0x39fc10: 0x10000020  b           . + 4 + (0x20 << 2)
label_39fc14:
    if (ctx->pc == 0x39FC14u) {
        ctx->pc = 0x39FC18u;
        goto label_39fc18;
    }
    ctx->pc = 0x39FC10u;
    {
        const bool branch_taken_0x39fc10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39fc10) {
            ctx->pc = 0x39FC94u;
            goto label_39fc94;
        }
    }
    ctx->pc = 0x39FC18u;
label_39fc18:
    // 0x39fc18: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x39fc18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_39fc1c:
    // 0x39fc1c: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x39fc1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_39fc20:
    // 0x39fc20: 0xc0e8304  jal         func_3A0C10
label_39fc24:
    if (ctx->pc == 0x39FC24u) {
        ctx->pc = 0x39FC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC20u;
        // 0x39fc24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FC28u;
        goto label_39fc28;
    }
    ctx->pc = 0x39FC20u;
    SET_GPR_U32(ctx, 31, 0x39FC28u);
    ctx->pc = 0x39FC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FC20u;
    // 0x39fc24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0C10u, 0x39FC20u, 0x39FC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FC28u;
label_39fc28:
    // 0x39fc28: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x39fc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_39fc2c:
    // 0x39fc2c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x39fc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39fc30:
    // 0x39fc30: 0x24a307ff  addiu       $v1, $a1, 0x7FF
    ctx->pc = 0x39fc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2047));
label_39fc34:
    // 0x39fc34: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x39fc34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
label_39fc38:
    // 0x39fc38: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x39fc38u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_39fc3c:
    // 0x39fc3c: 0xc0e66bc  jal         func_399AF0
label_39fc40:
    if (ctx->pc == 0x39FC40u) {
        ctx->pc = 0x39FC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC3Cu;
        // 0x39fc40: 0x52ac3  sra         $a1, $a1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FC44u;
        goto label_39fc44;
    }
    ctx->pc = 0x39FC3Cu;
    SET_GPR_U32(ctx, 31, 0x39FC44u);
    ctx->pc = 0x39FC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FC3Cu;
    // 0x39fc40: 0x52ac3  sra         $a1, $a1, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399AF0u, 0x39FC3Cu, 0x39FC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FC44u;
label_39fc44:
    // 0x39fc44: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x39fc44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_39fc48:
    // 0x39fc48: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x39fc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_39fc4c:
    // 0x39fc4c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x39fc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39fc50:
    // 0x39fc50: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x39fc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_39fc54:
    // 0x39fc54: 0x24a307ff  addiu       $v1, $a1, 0x7FF
    ctx->pc = 0x39fc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 2047));
label_39fc58:
    // 0x39fc58: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x39fc58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
label_39fc5c:
    // 0x39fc5c: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x39fc5cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_39fc60:
    // 0x39fc60: 0xc0e6798  jal         func_399E60
label_39fc64:
    if (ctx->pc == 0x39FC64u) {
        ctx->pc = 0x39FC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC60u;
        // 0x39fc64: 0x52ac3  sra         $a1, $a1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FC68u;
        goto label_39fc68;
    }
    ctx->pc = 0x39FC60u;
    SET_GPR_U32(ctx, 31, 0x39FC68u);
    ctx->pc = 0x39FC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FC60u;
    // 0x39fc64: 0x52ac3  sra         $a1, $a1, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399E60u, 0x39FC60u, 0x39FC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FC68u;
label_39fc68:
    // 0x39fc68: 0xc0e66f8  jal         func_399BE0
label_39fc6c:
    if (ctx->pc == 0x39FC6Cu) {
        ctx->pc = 0x39FC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC68u;
        // 0x39fc6c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FC70u;
        goto label_39fc70;
    }
    ctx->pc = 0x39FC68u;
    SET_GPR_U32(ctx, 31, 0x39FC70u);
    ctx->pc = 0x39FC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FC68u;
    // 0x39fc6c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BE0u, 0x39FC68u, 0x39FC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FC70u;
label_39fc70:
    // 0x39fc70: 0x10000008  b           . + 4 + (0x8 << 2)
label_39fc74:
    if (ctx->pc == 0x39FC74u) {
        ctx->pc = 0x39FC78u;
        goto label_39fc78;
    }
    ctx->pc = 0x39FC70u;
    {
        const bool branch_taken_0x39fc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39fc70) {
            ctx->pc = 0x39FC94u;
            goto label_39fc94;
        }
    }
    ctx->pc = 0x39FC78u;
label_39fc78:
    // 0x39fc78: 0xc0e66bc  jal         func_399AF0
label_39fc7c:
    if (ctx->pc == 0x39FC7Cu) {
        ctx->pc = 0x39FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC78u;
        // 0x39fc7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FC80u;
        goto label_39fc80;
    }
    ctx->pc = 0x39FC78u;
    SET_GPR_U32(ctx, 31, 0x39FC80u);
    ctx->pc = 0x39FC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FC78u;
    // 0x39fc7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399AF0u, 0x39FC78u, 0x39FC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FC80u;
label_39fc80:
    // 0x39fc80: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x39fc80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_39fc84:
    // 0x39fc84: 0xc0e6798  jal         func_399E60
label_39fc88:
    if (ctx->pc == 0x39FC88u) {
        ctx->pc = 0x39FC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC84u;
        // 0x39fc88: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FC8Cu;
        goto label_39fc8c;
    }
    ctx->pc = 0x39FC84u;
    SET_GPR_U32(ctx, 31, 0x39FC8Cu);
    ctx->pc = 0x39FC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FC84u;
    // 0x39fc88: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399E60u, 0x39FC84u, 0x39FC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FC8Cu;
label_39fc8c:
    // 0x39fc8c: 0xc0e66f8  jal         func_399BE0
label_39fc90:
    if (ctx->pc == 0x39FC90u) {
        ctx->pc = 0x39FC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FC8Cu;
        // 0x39fc90: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FC94u;
        goto label_39fc94;
    }
    ctx->pc = 0x39FC8Cu;
    SET_GPR_U32(ctx, 31, 0x39FC94u);
    ctx->pc = 0x39FC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FC8Cu;
    // 0x39fc90: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BE0u, 0x39FC8Cu, 0x39FC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FC94u;
label_39fc94:
    // 0x39fc94: 0xc0ecbea  jal         func_3B2FA8
label_39fc98:
    if (ctx->pc == 0x39FC98u) {
        ctx->pc = 0x39FC9Cu;
        goto label_39fc9c;
    }
    ctx->pc = 0x39FC94u;
    SET_GPR_U32(ctx, 31, 0x39FC9Cu);
    ctx->pc = 0x3B2FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2FA8u, 0x39FC94u, 0x39FC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FC9Cu;
label_39fc9c:
    // 0x39fc9c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x39fc9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39fca0:
    // 0x39fca0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x39fca0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_39fca4:
    // 0x39fca4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x39fca4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39fca8:
    // 0x39fca8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x39fca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_39fcac:
    // 0x39fcac: 0x3e00008  jr          $ra
label_39fcb0:
    if (ctx->pc == 0x39FCB0u) {
        ctx->pc = 0x39FCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FCACu;
        // 0x39fcb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FCB4u;
        goto label_39fcb4;
    }
    ctx->pc = 0x39FCACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39FCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FCACu;
        // 0x39fcb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FCACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39FCB4u;
label_39fcb4:
    // 0x39fcb4: 0x0  nop
    ctx->pc = 0x39fcb4u;
    // NOP
    ctx->pc = 0x39fcb8u;
}

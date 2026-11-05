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

// Function: sub_00256C28
// Address: 0x256c28 - 0x256d50
void sub_00256C28_0x256c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00256C28_0x256c28");
#endif

    switch (ctx->pc) {
        case 0x256c28u: goto label_256c28;
        case 0x256c2cu: goto label_256c2c;
        case 0x256c30u: goto label_256c30;
        case 0x256c34u: goto label_256c34;
        case 0x256c38u: goto label_256c38;
        case 0x256c3cu: goto label_256c3c;
        case 0x256c40u: goto label_256c40;
        case 0x256c44u: goto label_256c44;
        case 0x256c48u: goto label_256c48;
        case 0x256c4cu: goto label_256c4c;
        case 0x256c50u: goto label_256c50;
        case 0x256c54u: goto label_256c54;
        case 0x256c58u: goto label_256c58;
        case 0x256c5cu: goto label_256c5c;
        case 0x256c60u: goto label_256c60;
        case 0x256c64u: goto label_256c64;
        case 0x256c68u: goto label_256c68;
        case 0x256c6cu: goto label_256c6c;
        case 0x256c70u: goto label_256c70;
        case 0x256c74u: goto label_256c74;
        case 0x256c78u: goto label_256c78;
        case 0x256c7cu: goto label_256c7c;
        case 0x256c80u: goto label_256c80;
        case 0x256c84u: goto label_256c84;
        case 0x256c88u: goto label_256c88;
        case 0x256c8cu: goto label_256c8c;
        case 0x256c90u: goto label_256c90;
        case 0x256c94u: goto label_256c94;
        case 0x256c98u: goto label_256c98;
        case 0x256c9cu: goto label_256c9c;
        case 0x256ca0u: goto label_256ca0;
        case 0x256ca4u: goto label_256ca4;
        case 0x256ca8u: goto label_256ca8;
        case 0x256cacu: goto label_256cac;
        case 0x256cb0u: goto label_256cb0;
        case 0x256cb4u: goto label_256cb4;
        case 0x256cb8u: goto label_256cb8;
        case 0x256cbcu: goto label_256cbc;
        case 0x256cc0u: goto label_256cc0;
        case 0x256cc4u: goto label_256cc4;
        case 0x256cc8u: goto label_256cc8;
        case 0x256cccu: goto label_256ccc;
        case 0x256cd0u: goto label_256cd0;
        case 0x256cd4u: goto label_256cd4;
        case 0x256cd8u: goto label_256cd8;
        case 0x256cdcu: goto label_256cdc;
        case 0x256ce0u: goto label_256ce0;
        case 0x256ce4u: goto label_256ce4;
        case 0x256ce8u: goto label_256ce8;
        case 0x256cecu: goto label_256cec;
        case 0x256cf0u: goto label_256cf0;
        case 0x256cf4u: goto label_256cf4;
        case 0x256cf8u: goto label_256cf8;
        case 0x256cfcu: goto label_256cfc;
        case 0x256d00u: goto label_256d00;
        case 0x256d04u: goto label_256d04;
        case 0x256d08u: goto label_256d08;
        case 0x256d0cu: goto label_256d0c;
        case 0x256d10u: goto label_256d10;
        case 0x256d14u: goto label_256d14;
        case 0x256d18u: goto label_256d18;
        case 0x256d1cu: goto label_256d1c;
        case 0x256d20u: goto label_256d20;
        case 0x256d24u: goto label_256d24;
        case 0x256d28u: goto label_256d28;
        case 0x256d2cu: goto label_256d2c;
        case 0x256d30u: goto label_256d30;
        case 0x256d34u: goto label_256d34;
        case 0x256d38u: goto label_256d38;
        case 0x256d3cu: goto label_256d3c;
        case 0x256d40u: goto label_256d40;
        case 0x256d44u: goto label_256d44;
        case 0x256d48u: goto label_256d48;
        case 0x256d4cu: goto label_256d4c;
        default: break;
    }

    ctx->pc = 0x256c28u;

label_256c28:
    // 0x256c28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x256c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_256c2c:
    // 0x256c2c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x256c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_256c30:
    // 0x256c30: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x256c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_256c34:
    // 0x256c34: 0x24421e70  addiu       $v0, $v0, 0x1E70
    ctx->pc = 0x256c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7792));
label_256c38:
    // 0x256c38: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x256c38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_256c3c:
    // 0x256c3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x256c3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_256c40:
    // 0x256c40: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x256c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_256c44:
    // 0x256c44: 0xae020218  sw          $v0, 0x218($s0)
    ctx->pc = 0x256c44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 2));
label_256c48:
    // 0x256c48: 0x8e0310e0  lw          $v1, 0x10E0($s0)
    ctx->pc = 0x256c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4320)));
label_256c4c:
    // 0x256c4c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_256c50:
    if (ctx->pc == 0x256C50u) {
        ctx->pc = 0x256C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256C4Cu;
        // 0x256c50: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256C54u;
        goto label_256c54;
    }
    ctx->pc = 0x256C4Cu;
    {
        const bool branch_taken_0x256c4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x256C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256C4Cu;
        // 0x256c50: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256c4c) {
            ctx->pc = 0x256C64u;
            goto label_256c64;
        }
    }
    ctx->pc = 0x256C54u;
label_256c54:
    // 0x256c54: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x256c54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_256c58:
    // 0x256c58: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x256c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_256c5c:
    // 0x256c5c: 0xc0b2b08  jal         func_2CAC20
label_256c60:
    if (ctx->pc == 0x256C60u) {
        ctx->pc = 0x256C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256C5Cu;
        // 0x256c60: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256C64u;
        goto label_256c64;
    }
    ctx->pc = 0x256C5Cu;
    SET_GPR_U32(ctx, 31, 0x256C64u);
    ctx->pc = 0x256C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256C5Cu;
    // 0x256c60: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x256C5Cu, 0x256C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256C64u;
label_256c64:
    // 0x256c64: 0x8e0410c8  lw          $a0, 0x10C8($s0)
    ctx->pc = 0x256c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4296)));
label_256c68:
    // 0x256c68: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_256c6c:
    if (ctx->pc == 0x256C6Cu) {
        ctx->pc = 0x256C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256C68u;
        // 0x256c6c: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256C70u;
        goto label_256c70;
    }
    ctx->pc = 0x256C68u;
    {
        const bool branch_taken_0x256c68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x256c68) {
            ctx->pc = 0x256C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256C68u;
            // 0x256c6c: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256C88u;
            goto label_256c88;
        }
    }
    ctx->pc = 0x256C70u;
label_256c70:
    // 0x256c70: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x256c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_256c74:
    // 0x256c74: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x256c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_256c78:
    // 0x256c78: 0x40f809  jalr        $v0
label_256c7c:
    if (ctx->pc == 0x256C7Cu) {
        ctx->pc = 0x256C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256C78u;
        // 0x256c7c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256C80u;
        goto label_256c80;
    }
    ctx->pc = 0x256C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x256C80u);
        ctx->pc = 0x256C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256C78u;
        // 0x256c7c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256C78u, 0x256C80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x256C80u;
label_256c80:
    // 0x256c80: 0xae0010c8  sw          $zero, 0x10C8($s0)
    ctx->pc = 0x256c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4296), GPR_U32(ctx, 0));
label_256c84:
    // 0x256c84: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x256c84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_256c88:
    // 0x256c88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x256c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_256c8c:
    // 0x256c8c: 0xc0484b8  jal         func_1212E0
label_256c90:
    if (ctx->pc == 0x256C90u) {
        ctx->pc = 0x256C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256C8Cu;
        // 0x256c90: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256C94u;
        goto label_256c94;
    }
    ctx->pc = 0x256C8Cu;
    SET_GPR_U32(ctx, 31, 0x256C94u);
    ctx->pc = 0x256C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256C8Cu;
    // 0x256c90: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1212E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1212E0u, 0x256C8Cu, 0x256C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256C94u;
label_256c94:
    // 0x256c94: 0x8e0410cc  lw          $a0, 0x10CC($s0)
    ctx->pc = 0x256c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4300)));
label_256c98:
    // 0x256c98: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_256c9c:
    if (ctx->pc == 0x256C9Cu) {
        ctx->pc = 0x256C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256C98u;
        // 0x256c9c: 0x24841110  addiu       $a0, $a0, 0x1110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256CA0u;
        goto label_256ca0;
    }
    ctx->pc = 0x256C98u;
    {
        const bool branch_taken_0x256c98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x256C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256C98u;
        // 0x256c9c: 0x24841110  addiu       $a0, $a0, 0x1110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256c98) {
            ctx->pc = 0x256CD4u;
            goto label_256cd4;
        }
    }
    ctx->pc = 0x256CA0u;
label_256ca0:
    // 0x256ca0: 0x8e0210d0  lw          $v0, 0x10D0($s0)
    ctx->pc = 0x256ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4304)));
label_256ca4:
    // 0x256ca4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x256ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_256ca8:
    // 0x256ca8: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x256ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_256cac:
    // 0x256cac: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x256cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_256cb0:
    // 0x256cb0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_256cb4:
    if (ctx->pc == 0x256CB4u) {
        ctx->pc = 0x256CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256CB0u;
        // 0x256cb4: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256CB8u;
        goto label_256cb8;
    }
    ctx->pc = 0x256CB0u;
    {
        const bool branch_taken_0x256cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256CB0u;
        // 0x256cb4: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256cb0) {
            ctx->pc = 0x256CD4u;
            goto label_256cd4;
        }
    }
    ctx->pc = 0x256CB8u;
label_256cb8:
    // 0x256cb8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x256cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_256cbc:
    // 0x256cbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x256cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_256cc0:
    // 0x256cc0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x256cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_256cc4:
    // 0x256cc4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x256cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_256cc8:
    // 0x256cc8: 0xc0f6e78  jal         func_3DB9E0
label_256ccc:
    if (ctx->pc == 0x256CCCu) {
        ctx->pc = 0x256CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256CC8u;
        // 0x256ccc: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256CD0u;
        goto label_256cd0;
    }
    ctx->pc = 0x256CC8u;
    SET_GPR_U32(ctx, 31, 0x256CD0u);
    ctx->pc = 0x256CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256CC8u;
    // 0x256ccc: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB9E0u, 0x256CC8u, 0x256CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256CD0u;
label_256cd0:
    // 0x256cd0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x256cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_256cd4:
    // 0x256cd4: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x256cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_256cd8:
    // 0x256cd8: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x256cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
label_256cdc:
    // 0x256cdc: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_256ce0:
    if (ctx->pc == 0x256CE0u) {
        ctx->pc = 0x256CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256CDCu;
        // 0x256ce0: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256CE4u;
        goto label_256ce4;
    }
    ctx->pc = 0x256CDCu;
    {
        const bool branch_taken_0x256cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x256CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256CDCu;
        // 0x256ce0: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256cdc) {
            ctx->pc = 0x256D24u;
            goto label_256d24;
        }
    }
    ctx->pc = 0x256CE4u;
label_256ce4:
    // 0x256ce4: 0x8e0310d4  lw          $v1, 0x10D4($s0)
    ctx->pc = 0x256ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4308)));
label_256ce8:
    // 0x256ce8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_256cec:
    if (ctx->pc == 0x256CECu) {
        ctx->pc = 0x256CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256CE8u;
        // 0x256cec: 0x3c04004b  lui         $a0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256CF0u;
        goto label_256cf0;
    }
    ctx->pc = 0x256CE8u;
    {
        const bool branch_taken_0x256ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x256CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256CE8u;
        // 0x256cec: 0x3c04004b  lui         $a0, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)75 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x256ce8) {
            ctx->pc = 0x256D20u;
            goto label_256d20;
        }
    }
    ctx->pc = 0x256CF0u;
label_256cf0:
    // 0x256cf0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x256cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_256cf4:
    // 0x256cf4: 0x24843d20  addiu       $a0, $a0, 0x3D20
    ctx->pc = 0x256cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15648));
label_256cf8:
    // 0x256cf8: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x256cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_256cfc:
    // 0x256cfc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x256cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_256d00:
    // 0x256d00: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x256d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_256d04:
    // 0x256d04: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x256d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_256d08:
    // 0x256d08: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x256d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_256d0c:
    // 0x256d0c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x256d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_256d10:
    // 0x256d10: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x256d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_256d14:
    // 0x256d14: 0xc0f71dc  jal         func_3DC770
label_256d18:
    if (ctx->pc == 0x256D18u) {
        ctx->pc = 0x256D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256D14u;
        // 0x256d18: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256D1Cu;
        goto label_256d1c;
    }
    ctx->pc = 0x256D14u;
    SET_GPR_U32(ctx, 31, 0x256D1Cu);
    ctx->pc = 0x256D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256D14u;
    // 0x256d18: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC770u, 0x256D14u, 0x256D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256D1Cu;
label_256d1c:
    // 0x256d1c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x256d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_256d20:
    // 0x256d20: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x256d20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_256d24:
    // 0x256d24: 0x8c629914  lw          $v0, -0x66EC($v1)
    ctx->pc = 0x256d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940948)));
label_256d28:
    // 0x256d28: 0x50500001  beql        $v0, $s0, . + 4 + (0x1 << 2)
label_256d2c:
    if (ctx->pc == 0x256D2Cu) {
        ctx->pc = 0x256D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256D28u;
        // 0x256d2c: 0xac609914  sw          $zero, -0x66EC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294940948), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256D30u;
        goto label_256d30;
    }
    ctx->pc = 0x256D28u;
    {
        const bool branch_taken_0x256d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x256d28) {
            ctx->pc = 0x256D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256D28u;
            // 0x256d2c: 0xac609914  sw          $zero, -0x66EC($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 4294940948), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256D30u;
            goto label_256d30;
        }
    }
    ctx->pc = 0x256D30u;
label_256d30:
    // 0x256d30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_256d34:
    // 0x256d34: 0xc094446  jal         func_251118
label_256d38:
    if (ctx->pc == 0x256D38u) {
        ctx->pc = 0x256D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256D34u;
        // 0x256d38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256D3Cu;
        goto label_256d3c;
    }
    ctx->pc = 0x256D34u;
    SET_GPR_U32(ctx, 31, 0x256D3Cu);
    ctx->pc = 0x256D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256D34u;
    // 0x256d38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251118u, 0x256D34u, 0x256D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x256D3Cu;
label_256d3c:
    // 0x256d3c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x256d3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_256d40:
    // 0x256d40: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x256d40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_256d44:
    // 0x256d44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x256d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_256d48:
    // 0x256d48: 0x3e00008  jr          $ra
label_256d4c:
    if (ctx->pc == 0x256D4Cu) {
        ctx->pc = 0x256D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256D48u;
        // 0x256d4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x256D50u;
        goto label_fallthrough_0x256d48;
    }
    ctx->pc = 0x256D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x256D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x256D48u;
        // 0x256d4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x256D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x256d48:
    ctx->pc = 0x256D50u;
}

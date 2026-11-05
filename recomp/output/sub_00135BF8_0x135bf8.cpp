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

// Function: sub_00135BF8
// Address: 0x135bf8 - 0x135cd0
void sub_00135BF8_0x135bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135BF8_0x135bf8");
#endif

    switch (ctx->pc) {
        case 0x135bf8u: goto label_135bf8;
        case 0x135bfcu: goto label_135bfc;
        case 0x135c00u: goto label_135c00;
        case 0x135c04u: goto label_135c04;
        case 0x135c08u: goto label_135c08;
        case 0x135c0cu: goto label_135c0c;
        case 0x135c10u: goto label_135c10;
        case 0x135c14u: goto label_135c14;
        case 0x135c18u: goto label_135c18;
        case 0x135c1cu: goto label_135c1c;
        case 0x135c20u: goto label_135c20;
        case 0x135c24u: goto label_135c24;
        case 0x135c28u: goto label_135c28;
        case 0x135c2cu: goto label_135c2c;
        case 0x135c30u: goto label_135c30;
        case 0x135c34u: goto label_135c34;
        case 0x135c38u: goto label_135c38;
        case 0x135c3cu: goto label_135c3c;
        case 0x135c40u: goto label_135c40;
        case 0x135c44u: goto label_135c44;
        case 0x135c48u: goto label_135c48;
        case 0x135c4cu: goto label_135c4c;
        case 0x135c50u: goto label_135c50;
        case 0x135c54u: goto label_135c54;
        case 0x135c58u: goto label_135c58;
        case 0x135c5cu: goto label_135c5c;
        case 0x135c60u: goto label_135c60;
        case 0x135c64u: goto label_135c64;
        case 0x135c68u: goto label_135c68;
        case 0x135c6cu: goto label_135c6c;
        case 0x135c70u: goto label_135c70;
        case 0x135c74u: goto label_135c74;
        case 0x135c78u: goto label_135c78;
        case 0x135c7cu: goto label_135c7c;
        case 0x135c80u: goto label_135c80;
        case 0x135c84u: goto label_135c84;
        case 0x135c88u: goto label_135c88;
        case 0x135c8cu: goto label_135c8c;
        case 0x135c90u: goto label_135c90;
        case 0x135c94u: goto label_135c94;
        case 0x135c98u: goto label_135c98;
        case 0x135c9cu: goto label_135c9c;
        case 0x135ca0u: goto label_135ca0;
        case 0x135ca4u: goto label_135ca4;
        case 0x135ca8u: goto label_135ca8;
        case 0x135cacu: goto label_135cac;
        case 0x135cb0u: goto label_135cb0;
        case 0x135cb4u: goto label_135cb4;
        case 0x135cb8u: goto label_135cb8;
        case 0x135cbcu: goto label_135cbc;
        case 0x135cc0u: goto label_135cc0;
        case 0x135cc4u: goto label_135cc4;
        case 0x135cc8u: goto label_135cc8;
        case 0x135cccu: goto label_135ccc;
        default: break;
    }

    ctx->pc = 0x135bf8u;

label_135bf8:
    // 0x135bf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x135bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_135bfc:
    // 0x135bfc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x135bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_135c00:
    // 0x135c00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x135c00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_135c04:
    // 0x135c04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x135c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_135c08:
    // 0x135c08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x135c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_135c0c:
    // 0x135c0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x135c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_135c10:
    // 0x135c10: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x135c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_135c14:
    // 0x135c14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x135c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_135c18:
    // 0x135c18: 0xc04f76e  jal         func_13DDB8
label_135c1c:
    if (ctx->pc == 0x135C1Cu) {
        ctx->pc = 0x135C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135C18u;
        // 0x135c1c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135C20u;
        goto label_135c20;
    }
    ctx->pc = 0x135C18u;
    SET_GPR_U32(ctx, 31, 0x135C20u);
    ctx->pc = 0x135C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135C18u;
    // 0x135c1c: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DDB8u, 0x135C18u, 0x135C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135C20u;
label_135c20:
    // 0x135c20: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x135c20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_135c24:
    // 0x135c24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_135c28:
    // 0x135c28: 0xc04f74a  jal         func_13DD28
label_135c2c:
    if (ctx->pc == 0x135C2Cu) {
        ctx->pc = 0x135C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135C28u;
        // 0x135c2c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135C30u;
        goto label_135c30;
    }
    ctx->pc = 0x135C28u;
    SET_GPR_U32(ctx, 31, 0x135C30u);
    ctx->pc = 0x135C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135C28u;
    // 0x135c2c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD28u, 0x135C28u, 0x135C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135C30u;
label_135c30:
    // 0x135c30: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x135c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_135c34:
    // 0x135c34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_135c38:
    // 0x135c38: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x135c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_135c3c:
    // 0x135c3c: 0x40f809  jalr        $v0
label_135c40:
    if (ctx->pc == 0x135C40u) {
        ctx->pc = 0x135C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135C3Cu;
        // 0x135c40: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135C44u;
        goto label_135c44;
    }
    ctx->pc = 0x135C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x135C44u);
        ctx->pc = 0x135C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135C3Cu;
        // 0x135c40: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135C3Cu, 0x135C44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135C44u;
label_135c44:
    // 0x135c44: 0x131980  sll         $v1, $s3, 6
    ctx->pc = 0x135c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
label_135c48:
    // 0x135c48: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x135c48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_135c4c:
    // 0x135c4c: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x135c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_135c50:
    // 0x135c50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_135c54:
    // 0x135c54: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x135c54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_135c58:
    // 0x135c58: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x135c58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_135c5c:
    // 0x135c5c: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x135c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
label_135c60:
    // 0x135c60: 0xc04f744  jal         func_13DD10
label_135c64:
    if (ctx->pc == 0x135C64u) {
        ctx->pc = 0x135C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135C60u;
        // 0x135c64: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135C68u;
        goto label_135c68;
    }
    ctx->pc = 0x135C60u;
    SET_GPR_U32(ctx, 31, 0x135C68u);
    ctx->pc = 0x135C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135C60u;
    // 0x135c64: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD10u, 0x135C60u, 0x135C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135C68u;
label_135c68:
    // 0x135c68: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x135c68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
label_135c6c:
    // 0x135c6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x135c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_135c70:
    // 0x135c70: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
label_135c74:
    if (ctx->pc == 0x135C74u) {
        ctx->pc = 0x135C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135C70u;
        // 0x135c74: 0xa2420009  sb          $v0, 0x9($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135C78u;
        goto label_135c78;
    }
    ctx->pc = 0x135C70u;
    {
        const bool branch_taken_0x135c70 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x135C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135C70u;
        // 0x135c74: 0xa2420009  sb          $v0, 0x9($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 9), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135c70) {
            ctx->pc = 0x135C88u;
            goto label_135c88;
        }
    }
    ctx->pc = 0x135C78u;
label_135c78:
    // 0x135c78: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_135c7c:
    // 0x135c7c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x135c7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_135c80:
    // 0x135c80: 0xc04d8d6  jal         func_136358
label_135c84:
    if (ctx->pc == 0x135C84u) {
        ctx->pc = 0x135C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135C80u;
        // 0x135c84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135C88u;
        goto label_135c88;
    }
    ctx->pc = 0x135C80u;
    SET_GPR_U32(ctx, 31, 0x135C88u);
    ctx->pc = 0x135C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135C80u;
    // 0x135c84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x135C80u, 0x135C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135C88u;
label_135c88:
    // 0x135c88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_135c8c:
    // 0x135c8c: 0xc04e010  jal         func_138040
label_135c90:
    if (ctx->pc == 0x135C90u) {
        ctx->pc = 0x135C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135C8Cu;
        // 0x135c90: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135C94u;
        goto label_135c94;
    }
    ctx->pc = 0x135C8Cu;
    SET_GPR_U32(ctx, 31, 0x135C94u);
    ctx->pc = 0x135C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135C8Cu;
    // 0x135c90: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138040u, 0x135C8Cu, 0x135C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135C94u;
label_135c94:
    // 0x135c94: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x135c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_135c98:
    // 0x135c98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_135c9c:
    // 0x135c9c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x135c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_135ca0:
    // 0x135ca0: 0x40f809  jalr        $v0
label_135ca4:
    if (ctx->pc == 0x135CA4u) {
        ctx->pc = 0x135CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135CA0u;
        // 0x135ca4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135CA8u;
        goto label_135ca8;
    }
    ctx->pc = 0x135CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x135CA8u);
        ctx->pc = 0x135CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135CA0u;
        // 0x135ca4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135CA0u, 0x135CA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x135CA8u;
label_135ca8:
    // 0x135ca8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x135ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_135cac:
    // 0x135cac: 0xc04e046  jal         func_138118
label_135cb0:
    if (ctx->pc == 0x135CB0u) {
        ctx->pc = 0x135CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135CACu;
        // 0x135cb0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135CB4u;
        goto label_135cb4;
    }
    ctx->pc = 0x135CACu;
    SET_GPR_U32(ctx, 31, 0x135CB4u);
    ctx->pc = 0x135CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x135CACu;
    // 0x135cb0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138118u, 0x135CACu, 0x135CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x135CB4u;
label_135cb4:
    // 0x135cb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x135cb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_135cb8:
    // 0x135cb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x135cb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_135cbc:
    // 0x135cbc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x135cbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_135cc0:
    // 0x135cc0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x135cc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_135cc4:
    // 0x135cc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x135cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_135cc8:
    // 0x135cc8: 0x3e00008  jr          $ra
label_135ccc:
    if (ctx->pc == 0x135CCCu) {
        ctx->pc = 0x135CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135CC8u;
        // 0x135ccc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x135CD0u;
        goto label_fallthrough_0x135cc8;
    }
    ctx->pc = 0x135CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135CC8u;
        // 0x135ccc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x135CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x135cc8:
    ctx->pc = 0x135CD0u;
}

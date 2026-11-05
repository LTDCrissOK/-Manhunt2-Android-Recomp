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

// Function: sub_00186C58
// Address: 0x186c58 - 0x186d08
void sub_00186C58_0x186c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00186C58_0x186c58");
#endif

    switch (ctx->pc) {
        case 0x186c58u: goto label_186c58;
        case 0x186c5cu: goto label_186c5c;
        case 0x186c60u: goto label_186c60;
        case 0x186c64u: goto label_186c64;
        case 0x186c68u: goto label_186c68;
        case 0x186c6cu: goto label_186c6c;
        case 0x186c70u: goto label_186c70;
        case 0x186c74u: goto label_186c74;
        case 0x186c78u: goto label_186c78;
        case 0x186c7cu: goto label_186c7c;
        case 0x186c80u: goto label_186c80;
        case 0x186c84u: goto label_186c84;
        case 0x186c88u: goto label_186c88;
        case 0x186c8cu: goto label_186c8c;
        case 0x186c90u: goto label_186c90;
        case 0x186c94u: goto label_186c94;
        case 0x186c98u: goto label_186c98;
        case 0x186c9cu: goto label_186c9c;
        case 0x186ca0u: goto label_186ca0;
        case 0x186ca4u: goto label_186ca4;
        case 0x186ca8u: goto label_186ca8;
        case 0x186cacu: goto label_186cac;
        case 0x186cb0u: goto label_186cb0;
        case 0x186cb4u: goto label_186cb4;
        case 0x186cb8u: goto label_186cb8;
        case 0x186cbcu: goto label_186cbc;
        case 0x186cc0u: goto label_186cc0;
        case 0x186cc4u: goto label_186cc4;
        case 0x186cc8u: goto label_186cc8;
        case 0x186cccu: goto label_186ccc;
        case 0x186cd0u: goto label_186cd0;
        case 0x186cd4u: goto label_186cd4;
        case 0x186cd8u: goto label_186cd8;
        case 0x186cdcu: goto label_186cdc;
        case 0x186ce0u: goto label_186ce0;
        case 0x186ce4u: goto label_186ce4;
        case 0x186ce8u: goto label_186ce8;
        case 0x186cecu: goto label_186cec;
        case 0x186cf0u: goto label_186cf0;
        case 0x186cf4u: goto label_186cf4;
        case 0x186cf8u: goto label_186cf8;
        case 0x186cfcu: goto label_186cfc;
        case 0x186d00u: goto label_186d00;
        case 0x186d04u: goto label_186d04;
        default: break;
    }

    ctx->pc = 0x186c58u;

label_186c58:
    // 0x186c58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x186c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_186c5c:
    // 0x186c5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x186c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_186c60:
    // 0x186c60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x186c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_186c64:
    // 0x186c64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x186c64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_186c68:
    // 0x186c68: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x186c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_186c6c:
    // 0x186c6c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x186c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_186c70:
    // 0x186c70: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x186c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_186c74:
    // 0x186c74: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x186c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_186c78:
    // 0x186c78: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x186c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_186c7c:
    // 0x186c7c: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
label_186c80:
    if (ctx->pc == 0x186C80u) {
        ctx->pc = 0x186C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C7Cu;
        // 0x186c80: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186C84u;
        goto label_186c84;
    }
    ctx->pc = 0x186C7Cu;
    {
        const bool branch_taken_0x186c7c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x186C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C7Cu;
        // 0x186c80: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186c7c) {
            ctx->pc = 0x186C90u;
            goto label_186c90;
        }
    }
    ctx->pc = 0x186C84u;
label_186c84:
    // 0x186c84: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x186c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_186c88:
    // 0x186c88: 0x52220019  beql        $s1, $v0, . + 4 + (0x19 << 2)
label_186c8c:
    if (ctx->pc == 0x186C8Cu) {
        ctx->pc = 0x186C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C88u;
        // 0x186c8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186C90u;
        goto label_186c90;
    }
    ctx->pc = 0x186C88u;
    {
        const bool branch_taken_0x186c88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x186c88) {
            ctx->pc = 0x186C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186C88u;
            // 0x186c8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186CF0u;
            goto label_186cf0;
        }
    }
    ctx->pc = 0x186C90u;
label_186c90:
    // 0x186c90: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_186c94:
    if (ctx->pc == 0x186C94u) {
        ctx->pc = 0x186C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C90u;
        // 0x186c94: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186C98u;
        goto label_186c98;
    }
    ctx->pc = 0x186C90u;
    {
        const bool branch_taken_0x186c90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x186c90) {
            ctx->pc = 0x186C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186C90u;
            // 0x186c94: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186CACu;
            goto label_186cac;
        }
    }
    ctx->pc = 0x186C98u;
label_186c98:
    // 0x186c98: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x186c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_186c9c:
    // 0x186c9c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x186c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_186ca0:
    // 0x186ca0: 0x40f809  jalr        $v0
label_186ca4:
    if (ctx->pc == 0x186CA4u) {
        ctx->pc = 0x186CA8u;
        goto label_186ca8;
    }
    ctx->pc = 0x186CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x186CA8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186CA0u, 0x186CA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186CA8u;
label_186ca8:
    // 0x186ca8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x186ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_186cac:
    // 0x186cac: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_186cb0:
    if (ctx->pc == 0x186CB0u) {
        ctx->pc = 0x186CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186CACu;
        // 0x186cb0: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186CB4u;
        goto label_186cb4;
    }
    ctx->pc = 0x186CACu;
    {
        const bool branch_taken_0x186cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x186cac) {
            ctx->pc = 0x186CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186CACu;
            // 0x186cb0: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186CD0u;
            goto label_186cd0;
        }
    }
    ctx->pc = 0x186CB4u;
label_186cb4:
    // 0x186cb4: 0xc0f5240  jal         func_3D4900
label_186cb8:
    if (ctx->pc == 0x186CB8u) {
        ctx->pc = 0x186CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186CB4u;
        // 0x186cb8: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186CBCu;
        goto label_186cbc;
    }
    ctx->pc = 0x186CB4u;
    SET_GPR_U32(ctx, 31, 0x186CBCu);
    ctx->pc = 0x186CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186CB4u;
    // 0x186cb8: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x186CB4u, 0x186CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186CBCu;
label_186cbc:
    // 0x186cbc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x186cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_186cc0:
    // 0x186cc0: 0xc067c66  jal         func_19F198
label_186cc4:
    if (ctx->pc == 0x186CC4u) {
        ctx->pc = 0x186CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186CC0u;
        // 0x186cc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186CC8u;
        goto label_186cc8;
    }
    ctx->pc = 0x186CC0u;
    SET_GPR_U32(ctx, 31, 0x186CC8u);
    ctx->pc = 0x186CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186CC0u;
    // 0x186cc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F198u, 0x186CC0u, 0x186CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186CC8u;
label_186cc8:
    // 0x186cc8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x186cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_186ccc:
    // 0x186ccc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x186cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_186cd0:
    // 0x186cd0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x186cd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_186cd4:
    // 0x186cd4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x186cd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_186cd8:
    // 0x186cd8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x186cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_186cdc:
    // 0x186cdc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x186cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_186ce0:
    // 0x186ce0: 0x8c670020  lw          $a3, 0x20($v1)
    ctx->pc = 0x186ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_186ce4:
    // 0x186ce4: 0xe0f809  jalr        $a3
label_186ce8:
    if (ctx->pc == 0x186CE8u) {
        ctx->pc = 0x186CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186CE4u;
        // 0x186ce8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186CECu;
        goto label_186cec;
    }
    ctx->pc = 0x186CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x186CECu);
        ctx->pc = 0x186CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186CE4u;
        // 0x186ce8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186CE4u, 0x186CECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186CECu;
label_186cec:
    // 0x186cec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x186cecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_186cf0:
    // 0x186cf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x186cf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_186cf4:
    // 0x186cf4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x186cf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_186cf8:
    // 0x186cf8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x186cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_186cfc:
    // 0x186cfc: 0x3e00008  jr          $ra
label_186d00:
    if (ctx->pc == 0x186D00u) {
        ctx->pc = 0x186D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186CFCu;
        // 0x186d00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186D04u;
        goto label_186d04;
    }
    ctx->pc = 0x186CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186CFCu;
        // 0x186d00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x186D04u;
label_186d04:
    // 0x186d04: 0x0  nop
    ctx->pc = 0x186d04u;
    // NOP
    ctx->pc = 0x186d08u;
}

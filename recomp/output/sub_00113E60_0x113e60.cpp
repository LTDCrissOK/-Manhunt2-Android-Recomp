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

// Function: sub_00113E60
// Address: 0x113e60 - 0x113f00
void sub_00113E60_0x113e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113E60_0x113e60");
#endif

    switch (ctx->pc) {
        case 0x113e60u: goto label_113e60;
        case 0x113e64u: goto label_113e64;
        case 0x113e68u: goto label_113e68;
        case 0x113e6cu: goto label_113e6c;
        case 0x113e70u: goto label_113e70;
        case 0x113e74u: goto label_113e74;
        case 0x113e78u: goto label_113e78;
        case 0x113e7cu: goto label_113e7c;
        case 0x113e80u: goto label_113e80;
        case 0x113e84u: goto label_113e84;
        case 0x113e88u: goto label_113e88;
        case 0x113e8cu: goto label_113e8c;
        case 0x113e90u: goto label_113e90;
        case 0x113e94u: goto label_113e94;
        case 0x113e98u: goto label_113e98;
        case 0x113e9cu: goto label_113e9c;
        case 0x113ea0u: goto label_113ea0;
        case 0x113ea4u: goto label_113ea4;
        case 0x113ea8u: goto label_113ea8;
        case 0x113eacu: goto label_113eac;
        case 0x113eb0u: goto label_113eb0;
        case 0x113eb4u: goto label_113eb4;
        case 0x113eb8u: goto label_113eb8;
        case 0x113ebcu: goto label_113ebc;
        case 0x113ec0u: goto label_113ec0;
        case 0x113ec4u: goto label_113ec4;
        case 0x113ec8u: goto label_113ec8;
        case 0x113eccu: goto label_113ecc;
        case 0x113ed0u: goto label_113ed0;
        case 0x113ed4u: goto label_113ed4;
        case 0x113ed8u: goto label_113ed8;
        case 0x113edcu: goto label_113edc;
        case 0x113ee0u: goto label_113ee0;
        case 0x113ee4u: goto label_113ee4;
        case 0x113ee8u: goto label_113ee8;
        case 0x113eecu: goto label_113eec;
        case 0x113ef0u: goto label_113ef0;
        case 0x113ef4u: goto label_113ef4;
        case 0x113ef8u: goto label_113ef8;
        case 0x113efcu: goto label_113efc;
        default: break;
    }

    ctx->pc = 0x113e60u;

label_113e60:
    // 0x113e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x113e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_113e64:
    // 0x113e64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x113e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_113e68:
    // 0x113e68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x113e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_113e6c:
    // 0x113e6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x113e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_113e70:
    // 0x113e70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x113e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_113e74:
    // 0x113e74: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x113e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_113e78:
    // 0x113e78: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
label_113e7c:
    if (ctx->pc == 0x113E7Cu) {
        ctx->pc = 0x113E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E78u;
        // 0x113e7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113E80u;
        goto label_113e80;
    }
    ctx->pc = 0x113E78u;
    {
        const bool branch_taken_0x113e78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113e78) {
            ctx->pc = 0x113E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113E78u;
            // 0x113e7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113EF0u;
            goto label_113ef0;
        }
    }
    ctx->pc = 0x113E80u;
label_113e80:
    // 0x113e80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x113e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_113e84:
    // 0x113e84: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x113e84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_113e88:
    // 0x113e88: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x113e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_113e8c:
    // 0x113e8c: 0xc04421c  jal         func_110870
label_113e90:
    if (ctx->pc == 0x113E90u) {
        ctx->pc = 0x113E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113E8Cu;
        // 0x113e90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113E94u;
        goto label_113e94;
    }
    ctx->pc = 0x113E8Cu;
    SET_GPR_U32(ctx, 31, 0x113E94u);
    ctx->pc = 0x113E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113E8Cu;
    // 0x113e90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110870u, 0x113E8Cu, 0x113E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113E94u;
label_113e94:
    // 0x113e94: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x113e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_113e98:
    // 0x113e98: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x113e98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
label_113e9c:
    // 0x113e9c: 0x24719a08  addiu       $s1, $v1, -0x65F8
    ctx->pc = 0x113e9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
label_113ea0:
    // 0x113ea0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x113ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_113ea4:
    // 0x113ea4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x113ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_113ea8:
    // 0x113ea8: 0x8c440108  lw          $a0, 0x108($v0)
    ctx->pc = 0x113ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
label_113eac:
    // 0x113eac: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
label_113eb0:
    if (ctx->pc == 0x113EB0u) {
        ctx->pc = 0x113EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113EACu;
        // 0x113eb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113EB4u;
        goto label_113eb4;
    }
    ctx->pc = 0x113EACu;
    {
        const bool branch_taken_0x113eac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x113eac) {
            ctx->pc = 0x113EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113EACu;
            // 0x113eb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113EF0u;
            goto label_113ef0;
        }
    }
    ctx->pc = 0x113EB4u;
label_113eb4:
    // 0x113eb4: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x113eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_113eb8:
    // 0x113eb8: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x113eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_113ebc:
    // 0x113ebc: 0x40f809  jalr        $v0
label_113ec0:
    if (ctx->pc == 0x113EC0u) {
        ctx->pc = 0x113EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113EBCu;
        // 0x113ec0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113EC4u;
        goto label_113ec4;
    }
    ctx->pc = 0x113EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x113EC4u);
        ctx->pc = 0x113EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113EBCu;
        // 0x113ec0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113EBCu, 0x113EC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113EC4u;
label_113ec4:
    // 0x113ec4: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x113ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_113ec8:
    // 0x113ec8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_113ecc:
    if (ctx->pc == 0x113ECCu) {
        ctx->pc = 0x113ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113EC8u;
        // 0x113ecc: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113ED0u;
        goto label_113ed0;
    }
    ctx->pc = 0x113EC8u;
    {
        const bool branch_taken_0x113ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113EC8u;
        // 0x113ecc: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113ec8) {
            ctx->pc = 0x113EECu;
            goto label_113eec;
        }
    }
    ctx->pc = 0x113ED0u;
label_113ed0:
    // 0x113ed0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x113ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_113ed4:
    // 0x113ed4: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x113ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_113ed8:
    // 0x113ed8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_113edc:
    if (ctx->pc == 0x113EDCu) {
        ctx->pc = 0x113EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113ED8u;
        // 0x113edc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113EE0u;
        goto label_113ee0;
    }
    ctx->pc = 0x113ED8u;
    {
        const bool branch_taken_0x113ed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x113ed8) {
            ctx->pc = 0x113EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113ED8u;
            // 0x113edc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113EF0u;
            goto label_113ef0;
        }
    }
    ctx->pc = 0x113EE0u;
label_113ee0:
    // 0x113ee0: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x113ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_113ee4:
    // 0x113ee4: 0xc0441f0  jal         func_1107C0
label_113ee8:
    if (ctx->pc == 0x113EE8u) {
        ctx->pc = 0x113EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113EE4u;
        // 0x113ee8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113EECu;
        goto label_113eec;
    }
    ctx->pc = 0x113EE4u;
    SET_GPR_U32(ctx, 31, 0x113EECu);
    ctx->pc = 0x113EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113EE4u;
    // 0x113ee8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1107C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1107C0u, 0x113EE4u, 0x113EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113EECu;
label_113eec:
    // 0x113eec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x113eecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_113ef0:
    // 0x113ef0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x113ef0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_113ef4:
    // 0x113ef4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x113ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_113ef8:
    // 0x113ef8: 0x3e00008  jr          $ra
label_113efc:
    if (ctx->pc == 0x113EFCu) {
        ctx->pc = 0x113EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113EF8u;
        // 0x113efc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113F00u;
        goto label_fallthrough_0x113ef8;
    }
    ctx->pc = 0x113EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113EF8u;
        // 0x113efc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x113ef8:
    ctx->pc = 0x113F00u;
}

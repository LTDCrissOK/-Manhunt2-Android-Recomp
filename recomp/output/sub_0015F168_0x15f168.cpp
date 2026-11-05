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

// Function: sub_0015F168
// Address: 0x15f168 - 0x15f260
void sub_0015F168_0x15f168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F168_0x15f168");
#endif

    switch (ctx->pc) {
        case 0x15f1b8u: goto label_15f1b8;
        case 0x15f1e0u: goto label_15f1e0;
        case 0x15f210u: goto label_15f210;
        default: break;
    }

    ctx->pc = 0x15f168u;

    // 0x15f168: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15f168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15f16c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x15f16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x15f170: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x15f170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x15f174: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x15f174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x15f178: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x15f178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x15f17c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x15f17cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f180: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x15f180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15f184: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x15f184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x15f188: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15f188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15f18c: 0x2454020c  addiu       $s4, $v0, 0x20C
    ctx->pc = 0x15f18cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 524));
    // 0x15f190: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15f190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15f194: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15f194u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f198: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x15f198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x15f19c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x15f19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x15f1a0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15f1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15f1a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x15f1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15f1a8: 0x10800024  beqz        $a0, . + 4 + (0x24 << 2)
    ctx->pc = 0x15F1A8u;
    {
        const bool branch_taken_0x15f1a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F1A8u;
        // 0x15f1ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f1a8) {
            ctx->pc = 0x15F23Cu;
            goto label_15f23c;
        }
    }
    ctx->pc = 0x15F1B0u;
    // 0x15f1b0: 0xc043958  jal         func_10E560
    ctx->pc = 0x15F1B0u;
    SET_GPR_U32(ctx, 31, 0x15F1B8u);
    ctx->pc = 0x10E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E560u, 0x15F1B0u, 0x15F1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F1B8u;
label_15f1b8:
    // 0x15f1b8: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x15F1B8u;
    {
        const bool branch_taken_0x15f1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F1B8u;
        // 0x15f1bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f1b8) {
            ctx->pc = 0x15F23Cu;
            goto label_15f23c;
        }
    }
    ctx->pc = 0x15F1C0u;
    // 0x15f1c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x15f1c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f1c4: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x15f1c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x15f1c8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x15F1C8u;
    {
        const bool branch_taken_0x15f1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F1C8u;
        // 0x15f1cc: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f1c8) {
            ctx->pc = 0x15F238u;
            goto label_15f238;
        }
    }
    ctx->pc = 0x15F1D0u;
    // 0x15f1d0: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x15f1d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f1d4: 0x24140009  addiu       $s4, $zero, 0x9
    ctx->pc = 0x15f1d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x15f1d8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x15f1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x15f1dc: 0x0  nop
    ctx->pc = 0x15f1dcu;
    // NOP
label_15f1e0:
    // 0x15f1e0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x15f1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x15f1e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15f1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15f1e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15f1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f1ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x15F1ECu;
    {
        const bool branch_taken_0x15f1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F1ECu;
        // 0x15f1f0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f1ec) {
            ctx->pc = 0x15F218u;
            goto label_15f218;
        }
    }
    ctx->pc = 0x15F1F4u;
    // 0x15f1f4: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x15f1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x15f1f8: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x15f1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x15f1fc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x15f1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f200: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15F200u;
    {
        const bool branch_taken_0x15f200 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F200u;
        // 0x15f204: 0x307100ff  andi        $s1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f200) {
            ctx->pc = 0x15F218u;
            goto label_15f218;
        }
    }
    ctx->pc = 0x15F208u;
    // 0x15f208: 0xc044234  jal         func_1108D0
    ctx->pc = 0x15F208u;
    SET_GPR_U32(ctx, 31, 0x15F210u);
    ctx->pc = 0x15F20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F208u;
    // 0x15f20c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1108D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1108D0u, 0x15F208u, 0x15F210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F210u;
label_15f210:
    // 0x15f210: 0x1454000a  bne         $v0, $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x15F210u;
    {
        const bool branch_taken_0x15f210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x15F214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F210u;
        // 0x15f214: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f210) {
            ctx->pc = 0x15F23Cu;
            goto label_15f23c;
        }
    }
    ctx->pc = 0x15F218u;
label_15f218:
    // 0x15f218: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x15f218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15f21c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x15f21cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15f220: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x15f220u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x15f224: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15F224u;
    {
        const bool branch_taken_0x15f224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F224u;
        // 0x15f228: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f224) {
            ctx->pc = 0x15F23Cu;
            goto label_15f23c;
        }
    }
    ctx->pc = 0x15F22Cu;
    // 0x15f22c: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x15f22cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x15f230: 0x5622ffeb  bnel        $s1, $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x15F230u;
    {
        const bool branch_taken_0x15f230 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x15f230) {
            ctx->pc = 0x15F234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F230u;
            // 0x15f234: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F1E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f1e0;
        }
    }
    ctx->pc = 0x15F238u;
label_15f238:
    // 0x15f238: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15f238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f23c:
    // 0x15f23c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15f23cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f240: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15f240u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15f244: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15f244u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f248: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x15f248u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15f24c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x15f24cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f250: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x15f250u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15f254: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15f254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15f258: 0x3e00008  jr          $ra
    ctx->pc = 0x15F258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F258u;
        // 0x15f25c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F260u;
}

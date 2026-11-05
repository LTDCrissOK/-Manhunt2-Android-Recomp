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

// Function: sub_00178750
// Address: 0x178750 - 0x1787f8
void sub_00178750_0x178750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178750_0x178750");
#endif

    switch (ctx->pc) {
        case 0x178778u: goto label_178778;
        case 0x178790u: goto label_178790;
        default: break;
    }

    ctx->pc = 0x178750u;

    // 0x178750: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178754: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178758: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x178758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17875c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17875cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178760: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x178760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x178764: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x178764u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178768: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x178768u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17876c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17876cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x178770: 0xc05e1fe  jal         func_1787F8
    ctx->pc = 0x178770u;
    SET_GPR_U32(ctx, 31, 0x178778u);
    ctx->pc = 0x178774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178770u;
    // 0x178774: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1787F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1787F8u, 0x178770u, 0x178778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178778u;
label_178778:
    // 0x178778: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x178778u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17877c: 0x2607015c  addiu       $a3, $s0, 0x15C
    ctx->pc = 0x17877cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 348));
    // 0x178780: 0x26060160  addiu       $a2, $s0, 0x160
    ctx->pc = 0x178780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x178784: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x178784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178788: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x178788u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x17878c: 0x0  nop
    ctx->pc = 0x17878cu;
    // NOP
label_178790:
    // 0x178790: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x178790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x178794: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x178794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x178798: 0x1472000b  bne         $v1, $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x178798u;
    {
        const bool branch_taken_0x178798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x17879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178798u;
        // 0x17879c: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178798) {
            ctx->pc = 0x1787C8u;
            goto label_1787c8;
        }
    }
    ctx->pc = 0x1787A0u;
    // 0x1787a0: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x1787a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1787a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1787a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1787a8: 0x14710007  bne         $v1, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1787A8u;
    {
        const bool branch_taken_0x1787a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x1787ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1787A8u;
        // 0x1787ac: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1787a8) {
            ctx->pc = 0x1787C8u;
            goto label_1787c8;
        }
    }
    ctx->pc = 0x1787B0u;
    // 0x1787b0: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x1787b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1787b4: 0x90430164  lbu         $v1, 0x164($v0)
    ctx->pc = 0x1787b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 356)));
    // 0x1787b8: 0x14680003  bne         $v1, $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1787B8u;
    {
        const bool branch_taken_0x1787b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x1787BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1787B8u;
        // 0x1787bc: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1787b8) {
            ctx->pc = 0x1787C8u;
            goto label_1787c8;
        }
    }
    ctx->pc = 0x1787C0u;
    // 0x1787c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1787C0u;
    {
        const bool branch_taken_0x1787c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1787C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1787C0u;
        // 0x1787c4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1787c0) {
            ctx->pc = 0x1787DCu;
            goto label_1787dc;
        }
    }
    ctx->pc = 0x1787C8u;
label_1787c8:
    // 0x1787c8: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1787c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1787cc: 0x2ca30008  sltiu       $v1, $a1, 0x8
    ctx->pc = 0x1787ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1787d0: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1787D0u;
    {
        const bool branch_taken_0x1787d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1787D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1787D0u;
        // 0x1787d4: 0x52100  sll         $a0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1787d0) {
            ctx->pc = 0x178790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178790;
        }
    }
    ctx->pc = 0x1787D8u;
    // 0x1787d8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1787d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1787dc:
    // 0x1787dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1787dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1787e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1787e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1787e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1787e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1787e8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1787e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1787ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1787ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1787F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1787ECu;
        // 0x1787f0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1787ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1787F4u;
    // 0x1787f4: 0x0  nop
    ctx->pc = 0x1787f4u;
    // NOP
    ctx->pc = 0x1787f8u;
}

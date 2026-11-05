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

// Function: sub_0013C1B8
// Address: 0x13c1b8 - 0x13c260
void sub_0013C1B8_0x13c1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C1B8_0x13c1b8");
#endif

    switch (ctx->pc) {
        case 0x13c1f0u: goto label_13c1f0;
        case 0x13c1f4u: goto label_13c1f4;
        case 0x13c230u: goto label_13c230;
        default: break;
    }

    ctx->pc = 0x13c1b8u;

    // 0x13c1b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13c1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13c1bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13c1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13c1c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13c1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13c1c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13c1c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c1c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x13c1c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13c1cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x13c1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x13c1d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13c1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13c1d4: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x13c1d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x13c1d8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x13C1D8u;
    {
        const bool branch_taken_0x13c1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C1D8u;
        // 0x13c1dc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c1d8) {
            ctx->pc = 0x13C244u;
            goto label_13c244;
        }
    }
    ctx->pc = 0x13C1E0u;
    // 0x13c1e0: 0x26130024  addiu       $s3, $s0, 0x24
    ctx->pc = 0x13c1e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x13c1e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13C1E4u;
    {
        const bool branch_taken_0x13c1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C1E4u;
        // 0x13c1e8: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c1e4) {
            ctx->pc = 0x13C1F8u;
            goto label_13c1f8;
        }
    }
    ctx->pc = 0x13C1ECu;
    // 0x13c1ec: 0x0  nop
    ctx->pc = 0x13c1ecu;
    // NOP
label_13c1f0:
    // 0x13c1f0: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x13c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_13c1f4:
    // 0x13c1f4: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x13c1f4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_13c1f8:
    // 0x13c1f8: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x13c1f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x13c1fc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13C1FCu;
    {
        const bool branch_taken_0x13c1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C1FCu;
        // 0x13c200: 0x111880  sll         $v1, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c1fc) {
            ctx->pc = 0x13C244u;
            goto label_13c244;
        }
    }
    ctx->pc = 0x13C204u;
    // 0x13c204: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x13c204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13c208: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13c208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13c20c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x13c20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13c210: 0x1080fff7  beqz        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x13C210u;
    {
        const bool branch_taken_0x13c210 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C210u;
        // 0x13c214: 0x111140  sll         $v0, $s1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c210) {
            ctx->pc = 0x13C1F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c1f0;
        }
    }
    ctx->pc = 0x13C218u;
    // 0x13c218: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x13c218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x13c21c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13c21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13c220: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C220u;
    {
        const bool branch_taken_0x13c220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C220u;
        // 0x13c224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c220) {
            ctx->pc = 0x13C230u;
            goto label_13c230;
        }
    }
    ctx->pc = 0x13C228u;
    // 0x13c228: 0xc04f16c  jal         func_13C5B0
    ctx->pc = 0x13C228u;
    SET_GPR_U32(ctx, 31, 0x13C230u);
    ctx->pc = 0x13C22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C228u;
    // 0x13c22c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C5B0u, 0x13C228u, 0x13C230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C230u;
label_13c230:
    // 0x13c230: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x13c230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x13c234: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x13c234u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x13c238: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x13c238u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13c23c: 0x1643ffed  bne         $s2, $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x13C23Cu;
    {
        const bool branch_taken_0x13c23c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x13C240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C23Cu;
        // 0x13c240: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c23c) {
            ctx->pc = 0x13C1F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13c1f4;
        }
    }
    ctx->pc = 0x13C244u;
label_13c244:
    // 0x13c244: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13c244u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c248: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13c248u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13c24c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x13c24cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c250: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x13c250u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13c254: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13c254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c258: 0x3e00008  jr          $ra
    ctx->pc = 0x13C258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C258u;
        // 0x13c25c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C260u;
}

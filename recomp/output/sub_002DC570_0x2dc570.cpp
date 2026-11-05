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

// Function: sub_002DC570
// Address: 0x2dc570 - 0x2dc618
void sub_002DC570_0x2dc570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC570_0x2dc570");
#endif

    switch (ctx->pc) {
        case 0x2dc5a8u: goto label_2dc5a8;
        case 0x2dc5c8u: goto label_2dc5c8;
        default: break;
    }

    ctx->pc = 0x2dc570u;

    // 0x2dc570: 0x8c8263b0  lw          $v0, 0x63B0($a0)
    ctx->pc = 0x2dc570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 25520)));
    // 0x2dc574: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DC574u;
    {
        const bool branch_taken_0x2dc574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC574u;
        // 0x2dc578: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc574) {
            ctx->pc = 0x2DC584u;
            goto label_2dc584;
        }
    }
    ctx->pc = 0x2DC57Cu;
    // 0x2dc57c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2DC57Cu;
    {
        const bool branch_taken_0x2dc57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC57Cu;
        // 0x2dc580: 0xac8063b0  sw          $zero, 0x63B0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 25520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc57c) {
            ctx->pc = 0x2DC610u;
            goto label_2dc610;
        }
    }
    ctx->pc = 0x2DC584u;
label_2dc584:
    // 0x2dc584: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2dc584u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc588: 0x94820490  lhu         $v0, 0x490($a0)
    ctx->pc = 0x2dc588u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1168)));
    // 0x2dc58c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x2dc58cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc590: 0x8c8b63ec  lw          $t3, 0x63EC($a0)
    ctx->pc = 0x2dc590u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 25580)));
    // 0x2dc594: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2DC594u;
    {
        const bool branch_taken_0x2dc594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC594u;
        // 0x2dc598: 0x8c8a63e8  lw          $t2, 0x63E8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 25576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc594) {
            ctx->pc = 0x2DC604u;
            goto label_2dc604;
        }
    }
    ctx->pc = 0x2DC59Cu;
    // 0x2dc59c: 0x24840490  addiu       $a0, $a0, 0x490
    ctx->pc = 0x2dc59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1168));
    // 0x2dc5a0: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2dc5a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc5a4: 0x62a80  sll         $a1, $a2, 10
    ctx->pc = 0x2dc5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 10));
label_2dc5a8:
    // 0x2dc5a8: 0x24c70001  addiu       $a3, $a2, 0x1
    ctx->pc = 0x2dc5a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2dc5ac: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x2dc5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2dc5b0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2dc5b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dc5b4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2DC5B4u;
    {
        const bool branch_taken_0x2dc5b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC5B4u;
        // 0x2dc5b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc5b4) {
            ctx->pc = 0x2DC5E4u;
            goto label_2dc5e4;
        }
    }
    ctx->pc = 0x2DC5BCu;
    // 0x2dc5bc: 0xa91821  addu        $v1, $a1, $t1
    ctx->pc = 0x2dc5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x2dc5c0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2dc5c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2dc5c4: 0x0  nop
    ctx->pc = 0x2dc5c4u;
    // NOP
label_2dc5c8:
    // 0x2dc5c8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2dc5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2dc5cc: 0x28c20200  slti        $v0, $a2, 0x200
    ctx->pc = 0x2dc5ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x2dc5d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DC5D0u;
    {
        const bool branch_taken_0x2dc5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC5D0u;
        // 0x2dc5d4: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc5d0) {
            ctx->pc = 0x2DC5E4u;
            goto label_2dc5e4;
        }
    }
    ctx->pc = 0x2DC5D8u;
    // 0x2dc5d8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2dc5d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dc5dc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2DC5DCu;
    {
        const bool branch_taken_0x2dc5dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc5dc) {
            ctx->pc = 0x2DC5E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC5DCu;
            // 0x2dc5e0: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc5c8;
        }
    }
    ctx->pc = 0x2DC5E4u;
label_2dc5e4:
    // 0x2dc5e4: 0x28e2000a  slti        $v0, $a3, 0xA
    ctx->pc = 0x2dc5e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2dc5e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DC5E8u;
    {
        const bool branch_taken_0x2dc5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC5E8u;
        // 0x2dc5ec: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc5e8) {
            ctx->pc = 0x2DC604u;
            goto label_2dc604;
        }
    }
    ctx->pc = 0x2DC5F0u;
    // 0x2dc5f0: 0x71280  sll         $v0, $a3, 10
    ctx->pc = 0x2dc5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 10));
    // 0x2dc5f4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2dc5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2dc5f8: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2dc5f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dc5fc: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2DC5FCu;
    {
        const bool branch_taken_0x2dc5fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC5FCu;
        // 0x2dc600: 0x62a80  sll         $a1, $a2, 10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc5fc) {
            ctx->pc = 0x2DC5A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc5a8;
        }
    }
    ctx->pc = 0x2DC604u;
label_2dc604:
    // 0x2dc604: 0x10b2818  mult        $a1, $t0, $t3
    ctx->pc = 0x2dc604u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2dc608: 0xaa102b  sltu        $v0, $a1, $t2
    ctx->pc = 0x2dc608u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2dc60c: 0x142280b  movn        $a1, $t2, $v0
    ctx->pc = 0x2dc60cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 10));
label_2dc610:
    // 0x2dc610: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC610u;
        // 0x2dc614: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC618u;
}

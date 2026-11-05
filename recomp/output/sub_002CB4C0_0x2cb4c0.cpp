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

// Function: sub_002CB4C0
// Address: 0x2cb4c0 - 0x2cb540
void sub_002CB4C0_0x2cb4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB4C0_0x2cb4c0");
#endif

    switch (ctx->pc) {
        case 0x2cb4f8u: goto label_2cb4f8;
        case 0x2cb508u: goto label_2cb508;
        case 0x2cb51cu: goto label_2cb51c;
        default: break;
    }

    ctx->pc = 0x2cb4c0u;

    // 0x2cb4c0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2cb4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2cb4c4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cb4c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cb4c8: 0x8c62b4a8  lw          $v0, -0x4B58($v1)
    ctx->pc = 0x2cb4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FB4A8u));
    // 0x2cb4cc: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x2cb4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x2cb4d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cb4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cb4d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cb4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cb4d8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2cb4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2cb4dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cb4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cb4e0: 0x8c4330ac  lw          $v1, 0x30AC($v0)
    ctx->pc = 0x2cb4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12460)));
    // 0x2cb4e4: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CB4E4u;
    {
        const bool branch_taken_0x2cb4e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB4E4u;
        // 0x2cb4e8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb4e4) {
            ctx->pc = 0x2CB52Cu;
            goto label_2cb52c;
        }
    }
    ctx->pc = 0x2CB4ECu;
    // 0x2cb4ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2cb4ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb4f0: 0x36060980  ori         $a2, $s0, 0x980
    ctx->pc = 0x2cb4f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2432);
    // 0x2cb4f4: 0x0  nop
    ctx->pc = 0x2cb4f4u;
    // NOP
label_2cb4f8:
    // 0x2cb4f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cb4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb4fc: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x2cb4fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x2cb500: 0xc0ee85c  jal         func_3BA170
    ctx->pc = 0x2CB500u;
    SET_GPR_U32(ctx, 31, 0x2CB508u);
    ctx->pc = 0x2CB504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB500u;
    // 0x2cb504: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA170u, 0x2CB500u, 0x2CB508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB508u;
label_2cb508:
    // 0x2cb508: 0x36060a80  ori         $a2, $s0, 0xA80
    ctx->pc = 0x2cb508u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2688);
    // 0x2cb50c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2cb50cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb510: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x2cb510u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x2cb514: 0xc0ee85c  jal         func_3BA170
    ctx->pc = 0x2CB514u;
    SET_GPR_U32(ctx, 31, 0x2CB51Cu);
    ctx->pc = 0x2CB518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB514u;
    // 0x2cb518: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA170u, 0x2CB514u, 0x2CB51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB51Cu;
label_2cb51c:
    // 0x2cb51c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2cb51cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2cb520: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x2cb520u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2cb524: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2CB524u;
    {
        const bool branch_taken_0x2cb524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB524u;
        // 0x2cb528: 0x36060980  ori         $a2, $s0, 0x980 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2432);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb524) {
            ctx->pc = 0x2CB4F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cb4f8;
        }
    }
    ctx->pc = 0x2CB52Cu;
label_2cb52c:
    // 0x2cb52c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cb52cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb530: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cb530u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cb534: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cb534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb538: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB538u;
        // 0x2cb53c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB540u;
}

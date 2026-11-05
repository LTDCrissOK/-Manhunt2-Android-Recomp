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

// Function: sub_001089C0
// Address: 0x1089c0 - 0x108a38
void sub_001089C0_0x1089c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001089C0_0x1089c0");
#endif

    switch (ctx->pc) {
        case 0x1089e8u: goto label_1089e8;
        case 0x108a00u: goto label_108a00;
        case 0x108a1cu: goto label_108a1c;
        default: break;
    }

    ctx->pc = 0x1089c0u;

    // 0x1089c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1089c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1089c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1089c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1089c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1089c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1089cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1089ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1089d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1089d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1089d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1089d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1089d8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1089d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1089dc: 0x26320004  addiu       $s2, $s1, 0x4
    ctx->pc = 0x1089dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1089e0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1089e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1089e4: 0x0  nop
    ctx->pc = 0x1089e4u;
    // NOP
label_1089e8:
    // 0x1089e8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1089e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1089ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1089ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1089f0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1089F0u;
    {
        const bool branch_taken_0x1089f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1089F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1089F0u;
        // 0x1089f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1089f0) {
            ctx->pc = 0x108A00u;
            goto label_108a00;
        }
    }
    ctx->pc = 0x1089F8u;
    // 0x1089f8: 0xc04228e  jal         func_108A38
    ctx->pc = 0x1089F8u;
    SET_GPR_U32(ctx, 31, 0x108A00u);
    ctx->pc = 0x1089FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1089F8u;
    // 0x1089fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108A38u, 0x1089F8u, 0x108A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108A00u;
label_108a00:
    // 0x108a00: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x108a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x108a04: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x108a04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x108a08: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x108a08u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x108a0c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x108A0Cu;
    {
        const bool branch_taken_0x108a0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x108A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A0Cu;
        // 0x108a10: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a0c) {
            ctx->pc = 0x1089E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1089e8;
        }
    }
    ctx->pc = 0x108A14u;
    // 0x108a14: 0xc042254  jal         func_108950
    ctx->pc = 0x108A14u;
    SET_GPR_U32(ctx, 31, 0x108A1Cu);
    ctx->pc = 0x108A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108A14u;
    // 0x108a18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108950u, 0x108A14u, 0x108A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108A1Cu;
label_108a1c:
    // 0x108a1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108a1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108a20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x108a20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x108a24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x108a24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108a28: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x108a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x108a2c: 0x3e00008  jr          $ra
    ctx->pc = 0x108A2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108A2Cu;
        // 0x108a30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108A2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108A34u;
    // 0x108a34: 0x0  nop
    ctx->pc = 0x108a34u;
    // NOP
    ctx->pc = 0x108a38u;
}

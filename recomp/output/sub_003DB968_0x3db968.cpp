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

// Function: sub_003DB968
// Address: 0x3db968 - 0x3db9e0
void sub_003DB968_0x3db968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB968_0x3db968");
#endif

    switch (ctx->pc) {
        case 0x3db984u: goto label_3db984;
        case 0x3db9c4u: goto label_3db9c4;
        default: break;
    }

    ctx->pc = 0x3db968u;

    // 0x3db968: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3db968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3db96c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3db96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3db970: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3db970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3db974: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3db974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db978: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3db978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3db97c: 0xc0f6e42  jal         func_3DB908
    ctx->pc = 0x3DB97Cu;
    SET_GPR_U32(ctx, 31, 0x3DB984u);
    ctx->pc = 0x3DB980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB97Cu;
    // 0x3db980: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB908u, 0x3DB97Cu, 0x3DB984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB984u;
label_3db984:
    // 0x3db984: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3db984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3db988: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x3db988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3db98c: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3DB98Cu;
    {
        const bool branch_taken_0x3db98c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DB990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB98Cu;
        // 0x3db990: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db98c) {
            ctx->pc = 0x3DB9B4u;
            goto label_3db9b4;
        }
    }
    ctx->pc = 0x3DB994u;
    // 0x3db994: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3db994u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3db998: 0x94a20006  lhu         $v0, 0x6($a1)
    ctx->pc = 0x3db998u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x3db99c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3db99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3db9a0: 0xa4a20006  sh          $v0, 0x6($a1)
    ctx->pc = 0x3db9a0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x3db9a4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3db9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3db9a8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3db9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3db9ac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3DB9ACu;
    {
        const bool branch_taken_0x3db9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB9ACu;
        // 0x3db9b0: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db9ac) {
            ctx->pc = 0x3DB9C4u;
            goto label_3db9c4;
        }
    }
    ctx->pc = 0x3DB9B4u;
label_3db9b4:
    // 0x3db9b4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DB9B4u;
    {
        const bool branch_taken_0x3db9b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DB9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB9B4u;
        // 0x3db9b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3db9b4) {
            ctx->pc = 0x3DB9C4u;
            goto label_3db9c4;
        }
    }
    ctx->pc = 0x3DB9BCu;
    // 0x3db9bc: 0xc0aae4e  jal         func_2AB938
    ctx->pc = 0x3DB9BCu;
    SET_GPR_U32(ctx, 31, 0x3DB9C4u);
    ctx->pc = 0x3DB9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB9BCu;
    // 0x3db9c0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB938u, 0x3DB9BCu, 0x3DB9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB9C4u;
label_3db9c4:
    // 0x3db9c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3db9c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db9c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3db9c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3db9cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3db9ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3db9d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB9D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB9D0u;
        // 0x3db9d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB9D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB9D8u;
    // 0x3db9d8: 0x27bd0120  addiu       $sp, $sp, 0x120
    ctx->pc = 0x3db9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x3db9dc: 0x0  nop
    ctx->pc = 0x3db9dcu;
    // NOP
    ctx->pc = 0x3db9e0u;
}

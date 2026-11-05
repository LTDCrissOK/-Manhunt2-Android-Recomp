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

// Function: sub_0016A590
// Address: 0x16a590 - 0x16a600
void sub_0016A590_0x16a590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A590_0x16a590");
#endif

    switch (ctx->pc) {
        case 0x16a5d4u: goto label_16a5d4;
        case 0x16a5e4u: goto label_16a5e4;
        default: break;
    }

    ctx->pc = 0x16a590u;

    // 0x16a590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a594: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16a594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16a598: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a59c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16a59cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a5a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16a5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16a5a4: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x16a5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x16a5a8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x16A5A8u;
    {
        const bool branch_taken_0x16a5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A5A8u;
        // 0x16a5ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a5a8) {
            ctx->pc = 0x16A5E8u;
            goto label_16a5e8;
        }
    }
    ctx->pc = 0x16A5B0u;
    // 0x16a5b0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x16a5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16a5b4: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x16a5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
    // 0x16a5b8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16A5B8u;
    {
        const bool branch_taken_0x16a5b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A5B8u;
        // 0x16a5bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a5b8) {
            ctx->pc = 0x16A5E8u;
            goto label_16a5e8;
        }
    }
    ctx->pc = 0x16A5C0u;
    // 0x16a5c0: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x16a5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
    // 0x16a5c4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x16A5C4u;
    {
        const bool branch_taken_0x16a5c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A5C4u;
        // 0x16a5c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a5c4) {
            ctx->pc = 0x16A5E8u;
            goto label_16a5e8;
        }
    }
    ctx->pc = 0x16A5CCu;
    // 0x16a5cc: 0xc05abe0  jal         func_16AF80
    ctx->pc = 0x16A5CCu;
    SET_GPR_U32(ctx, 31, 0x16A5D4u);
    ctx->pc = 0x16A5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A5CCu;
    // 0x16a5d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16AF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16AF80u, 0x16A5CCu, 0x16A5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A5D4u;
label_16a5d4:
    // 0x16a5d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16a5d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a5d8: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x16a5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x16a5dc: 0xc046304  jal         func_118C10
    ctx->pc = 0x16A5DCu;
    SET_GPR_U32(ctx, 31, 0x16A5E4u);
    ctx->pc = 0x16A5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A5DCu;
    // 0x16a5e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118C10u, 0x16A5DCu, 0x16A5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A5E4u;
label_16a5e4:
    // 0x16a5e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16a5e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16a5e8:
    // 0x16a5e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a5e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a5ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16a5ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a5f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16a5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a5f4: 0x3e00008  jr          $ra
    ctx->pc = 0x16A5F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A5F4u;
        // 0x16a5f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A5F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A5FCu;
    // 0x16a5fc: 0x0  nop
    ctx->pc = 0x16a5fcu;
    // NOP
    ctx->pc = 0x16a600u;
}

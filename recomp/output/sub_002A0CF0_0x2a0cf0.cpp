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

// Function: sub_002A0CF0
// Address: 0x2a0cf0 - 0x2a0d60
void sub_002A0CF0_0x2a0cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0CF0_0x2a0cf0");
#endif

    switch (ctx->pc) {
        case 0x2a0d20u: goto label_2a0d20;
        case 0x2a0d2cu: goto label_2a0d2c;
        case 0x2a0d38u: goto label_2a0d38;
        case 0x2a0d4cu: goto label_2a0d4c;
        default: break;
    }

    ctx->pc = 0x2a0cf0u;

    // 0x2a0cf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a0cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a0cf4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2a0cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2a0cf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a0cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a0cfc: 0x24423300  addiu       $v0, $v0, 0x3300
    ctx->pc = 0x2a0cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13056));
    // 0x2a0d00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a0d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a0d04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a0d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0d08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a0d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a0d0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a0d0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0d10: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x2a0d10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x2a0d14: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x2a0d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2a0d18: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A0D18u;
    SET_GPR_U32(ctx, 31, 0x2A0D20u);
    ctx->pc = 0x2A0D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0D18u;
    // 0x2a0d1c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A0D18u, 0x2A0D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0D20u;
label_2a0d20:
    // 0x2a0d20: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x2a0d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x2a0d24: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A0D24u;
    SET_GPR_U32(ctx, 31, 0x2A0D2Cu);
    ctx->pc = 0x2A0D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0D24u;
    // 0x2a0d28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A0D24u, 0x2A0D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0D2Cu;
label_2a0d2c:
    // 0x2a0d2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a0d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a0d30: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2A0D30u;
    SET_GPR_U32(ctx, 31, 0x2A0D38u);
    ctx->pc = 0x2A0D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0D30u;
    // 0x2a0d34: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2A0D30u, 0x2A0D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0D38u;
label_2a0d38:
    // 0x2a0d38: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x2a0d38u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x2a0d3c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A0D3Cu;
    {
        const bool branch_taken_0x2a0d3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A0D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0D3Cu;
        // 0x2a0d40: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0d3c) {
            ctx->pc = 0x2A0D50u;
            goto label_2a0d50;
        }
    }
    ctx->pc = 0x2A0D44u;
    // 0x2a0d44: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2A0D44u;
    SET_GPR_U32(ctx, 31, 0x2A0D4Cu);
    ctx->pc = 0x2A0D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A0D44u;
    // 0x2a0d48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2A0D44u, 0x2A0D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0D4Cu;
label_2a0d4c:
    // 0x2a0d4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a0d4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a0d50:
    // 0x2a0d50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a0d50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a0d54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a0d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a0d58: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0D58u;
        // 0x2a0d5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0D58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0D60u;
}

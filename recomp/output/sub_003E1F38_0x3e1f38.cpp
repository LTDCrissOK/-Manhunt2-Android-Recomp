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

// Function: sub_003E1F38
// Address: 0x3e1f38 - 0x3e1fa8
void sub_003E1F38_0x3e1f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1F38_0x3e1f38");
#endif

    switch (ctx->pc) {
        case 0x3e1f68u: goto label_3e1f68;
        case 0x3e1f74u: goto label_3e1f74;
        case 0x3e1f80u: goto label_3e1f80;
        case 0x3e1f94u: goto label_3e1f94;
        default: break;
    }

    ctx->pc = 0x3e1f38u;

    // 0x3e1f38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e1f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e1f3c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e1f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e1f40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e1f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e1f44: 0x24423300  addiu       $v0, $v0, 0x3300
    ctx->pc = 0x3e1f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13056));
    // 0x3e1f48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e1f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e1f4c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e1f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1f50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e1f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e1f54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e1f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1f58: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x3e1f58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x3e1f5c: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x3e1f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x3e1f60: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E1F60u;
    SET_GPR_U32(ctx, 31, 0x3E1F68u);
    ctx->pc = 0x3E1F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1F60u;
    // 0x3e1f64: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E1F60u, 0x3E1F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1F68u;
label_3e1f68:
    // 0x3e1f68: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x3e1f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x3e1f6c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E1F6Cu;
    SET_GPR_U32(ctx, 31, 0x3E1F74u);
    ctx->pc = 0x3E1F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1F6Cu;
    // 0x3e1f70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E1F6Cu, 0x3E1F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1F74u;
label_3e1f74:
    // 0x3e1f74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e1f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e1f78: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3E1F78u;
    SET_GPR_U32(ctx, 31, 0x3E1F80u);
    ctx->pc = 0x3E1F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1F78u;
    // 0x3e1f7c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3E1F78u, 0x3E1F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1F80u;
label_3e1f80:
    // 0x3e1f80: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x3e1f80u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x3e1f84: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E1F84u;
    {
        const bool branch_taken_0x3e1f84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1F84u;
        // 0x3e1f88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1f84) {
            ctx->pc = 0x3E1F98u;
            goto label_3e1f98;
        }
    }
    ctx->pc = 0x3E1F8Cu;
    // 0x3e1f8c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E1F8Cu;
    SET_GPR_U32(ctx, 31, 0x3E1F94u);
    ctx->pc = 0x3E1F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E1F8Cu;
    // 0x3e1f90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E1F8Cu, 0x3E1F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E1F94u;
label_3e1f94:
    // 0x3e1f94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e1f94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e1f98:
    // 0x3e1f98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e1f98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e1f9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e1f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e1fa0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1FA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E1FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1FA0u;
        // 0x3e1fa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1FA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1FA8u;
}
